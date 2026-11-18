// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 546

// `dynamic_initializer_for_'CVarDebugEarlyCheat'' @ 140f16dc0

void __cdecl _dynamic_initializer_for__CVarDebugEarlyCheat__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x16;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDebugEarlyCheat,L"con.DebugEarlyCheat",local_res8,
             L"used internally to test the console variable system",1);
  atexit(_dynamic_atexit_destructor_for__CVarDebugEarlyCheat__);
  return;
}

// `dynamic_initializer_for_'CVarDebugEarlyDefault'' @ 140f16e10

void __cdecl _dynamic_initializer_for__CVarDebugEarlyDefault__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x15;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDebugEarlyDefault,L"con.DebugEarlyDefault",local_res8,
             L"used internally to test the console variable system",0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugEarlyDefault__);
  return;
}

// `dynamic_initializer_for_'DriverVersionTestInstance'' @ 140f16e60

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__DriverVersionTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"DriverVersionTest");
  DriverVersionTest::DriverVersionTest(&DriverVersionTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__DriverVersionTestInstance__);
  return;
}

// `dynamic_initializer_for_'ExecuteOnGameThreadTestInstance'' @ 140f16eb0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__ExecuteOnGameThreadTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"ExecuteOnGameThreadTest");
  ExecuteOnGameThreadTest::ExecuteOnGameThreadTest(&ExecuteOnGameThreadTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__ExecuteOnGameThreadTestInstance__);
  return;
}

// `dynamic_initializer_for_'FArchiveFileReaderGenericTestRunnerInstance'' @ 140f16f00

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FArchiveFileReaderGenericTestRunnerInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FArchiveFileReaderGenericTestRunner");
  FArchiveFileReaderGenericTestRunner::FArchiveFileReaderGenericTestRunner
            (&FArchiveFileReaderGenericTestRunnerInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FArchiveFileReaderGenericTestRunnerInstance__);
  return;
}

// `dynamic_initializer_for_'FArchiveTestInstance'' @ 140f16f50

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FArchiveTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FArchiveTest");
  FArchiveTest::FArchiveTest(&FArchiveTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FArchiveTestInstance__);
  return;
}

// `dynamic_initializer_for_'FConsoleManagerTestInstance'' @ 140f16fa0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FConsoleManagerTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FConsoleManagerTest");
  FConsoleManagerTest::FConsoleManagerTest(&FConsoleManagerTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FConsoleManagerTestInstance__);
  return;
}

// `dynamic_initializer_for_'FDateTimeFormattingRulesTestInstance'' @ 140f16ff0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FDateTimeFormattingRulesTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FDateTimeFormattingRulesTest");
  FDateTimeFormattingRulesTest::FDateTimeFormattingRulesTest
            (&FDateTimeFormattingRulesTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FDateTimeFormattingRulesTestInstance__);
  return;
}

// `dynamic_initializer_for_'FFColorSmokeTestInstance'' @ 140f17040

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FFColorSmokeTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FFColorSmokeTest");
  FFColorSmokeTest::FFColorSmokeTest(&FFColorSmokeTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FFColorSmokeTestInstance__);
  return;
}

// `dynamic_initializer_for_'FFLinearColorSmokeTestInstance'' @ 140f17090

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FFLinearColorSmokeTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FFLinearColorSmokeTest");
  FFLinearColorSmokeTest::FFLinearColorSmokeTest(&FFLinearColorSmokeTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FFLinearColorSmokeTestInstance__);
  return;
}

// `dynamic_initializer_for_'FGenericOctreeTestInstance'' @ 140f170e0

void __cdecl
UE::MathTest::`anonymous_namespace'::_dynamic_initializer_for__FGenericOctreeTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FGenericOctreeTest");
  FGenericOctreeTest::FGenericOctreeTest(&FGenericOctreeTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FGenericOctreeTestInstance__);
  return;
}

// `dynamic_initializer_for_'FGenericPlatformMiscTestInstance'' @ 140f17130

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FGenericPlatformMiscTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FGenericPlatformMiscTest");
  FGenericPlatformMiscTest::FGenericPlatformMiscTest(&FGenericPlatformMiscTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FGenericPlatformMiscTestInstance__);
  return;
}

// `dynamic_initializer_for_'FGuardedIntTestAutomationTestInstance'' @ 140f17180

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FGuardedIntTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FGuardedIntTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FGuardedIntTestAutomationTestInstance,&local_18,false);
  FGuardedIntTestAutomationTestInstance._0_8_ = &___7FGuardedIntTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FGuardedIntTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FHALPlatformStringTestInstance'' @ 140f171e0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FHALPlatformStringTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FHALPlatformStringTest");
  FHALPlatformStringTest::FHALPlatformStringTest(&FHALPlatformStringTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FHALPlatformStringTestInstance__);
  return;
}

// `dynamic_initializer_for_'FHashBlake3TestInstance'' @ 140f17230

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FHashBlake3TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FHashBlake3Test");
  FHashBlake3Test::FHashBlake3Test(&FHashBlake3TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FHashBlake3TestInstance__);
  return;
}

// `dynamic_initializer_for_'FICUSanitizationTestInstance'' @ 140f17280

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FICUSanitizationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FICUSanitizationTest");
  FICUSanitizationTest::FICUSanitizationTest(&FICUSanitizationTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FICUSanitizationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FICUTextTestInstance'' @ 140f172d0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FICUTextTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FICUTextTest");
  FICUTextTest::FICUTextTest(&FICUTextTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FICUTextTestInstance__);
  return;
}

// `dynamic_initializer_for_'FICUTextUtilitiesInstance'' @ 140f17320

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FICUTextUtilitiesInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FICUTextUtilities");
  FICUTextUtilities::FICUTextUtilities(&FICUTextUtilitiesInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FICUTextUtilitiesInstance__);
  return;
}

// `dynamic_initializer_for_'FInt32Vector2TestInstance'' @ 140f17370

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FInt32Vector2TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FInt32Vector2Test");
  FInt32Vector2Test::FInt32Vector2Test(&FInt32Vector2TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FInt32Vector2TestInstance__);
  return;
}

// `dynamic_initializer_for_'FInt32Vector3TestInstance'' @ 140f173c0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FInt32Vector3TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FInt32Vector3Test");
  FInt32Vector3Test::FInt32Vector3Test(&FInt32Vector3TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FInt32Vector3TestInstance__);
  return;
}

// `dynamic_initializer_for_'FInt32Vector4TestInstance'' @ 140f17410

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FInt32Vector4TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FInt32Vector4Test");
  FInt32Vector4Test::FInt32Vector4Test(&FInt32Vector4TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FInt32Vector4TestInstance__);
  return;
}

// `dynamic_initializer_for_'FInt64Vector2TestInstance'' @ 140f17460

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FInt64Vector2TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FInt64Vector2Test");
  FInt64Vector2Test::FInt64Vector2Test(&FInt64Vector2TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FInt64Vector2TestInstance__);
  return;
}

// `dynamic_initializer_for_'FInt64Vector3TestInstance'' @ 140f174b0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FInt64Vector3TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FInt64Vector3Test");
  FInt64Vector3Test::FInt64Vector3Test(&FInt64Vector3TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FInt64Vector3TestInstance__);
  return;
}

// `dynamic_initializer_for_'FInt64Vector4TestInstance'' @ 140f17500

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FInt64Vector4TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FInt64Vector4Test");
  FInt64Vector4Test::FInt64Vector4Test(&FInt64Vector4TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FInt64Vector4TestInstance__);
  return;
}

// `dynamic_initializer_for_'FIoStatusOrTestInstance'' @ 140f17550

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FIoStatusOrTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIoStatusOrTest");
  FIoStatusOrTest::FIoStatusOrTest(&FIoStatusOrTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FIoStatusOrTestInstance__);
  return;
}

// `dynamic_initializer_for_'FKeysCultureTestInstance'' @ 140f175a0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FKeysCultureTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FKeysCultureTest");
  FKeysCultureTest::FKeysCultureTest(&FKeysCultureTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FKeysCultureTestInstance__);
  return;
}

// `dynamic_initializer_for_'FLocContextTestInstance'' @ 140f175f0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FLocContextTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLocContextTest");
  FLocContextTest::FLocContextTest(&FLocContextTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FLocContextTestInstance__);
  return;
}

// `dynamic_initializer_for_'FLocItemTestInstance'' @ 140f17640

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FLocItemTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLocItemTest");
  FLocItemTest::FLocItemTest(&FLocItemTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FLocItemTestInstance__);
  return;
}

// `dynamic_initializer_for_'FManifestTestInstance'' @ 140f17690

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FManifestTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FManifestTest");
  FManifestTest::FManifestTest(&FManifestTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FManifestTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMetadataTestInstance'' @ 140f176e0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FMetadataTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMetadataTest");
  FMetadataTest::FMetadataTest(&FMetadataTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMetadataTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMulticastDelegateBasicTestInstance'' @ 140f17730

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_initializer_for__FMulticastDelegateBasicTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMulticastDelegateBasicTest");
  FMulticastDelegateBasicTest::FMulticastDelegateBasicTest
            (&FMulticastDelegateBasicTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMulticastDelegateBasicTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMulticastTSDelegateStressTestInstance'' @ 140f17780

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_initializer_for__FMulticastTSDelegateStressTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMulticastTSDelegateStressTest");
  FMulticastTSDelegateStressTest::FMulticastTSDelegateStressTest
            (&FMulticastTSDelegateStressTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMulticastTSDelegateStressTestInstance__);
  return;
}

// `dynamic_initializer_for_'FNumberFormattingRulesTestInstance'' @ 140f177d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FNumberFormattingRulesTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FNumberFormattingRulesTest");
  FNumberFormattingRulesTest::FNumberFormattingRulesTest
            (&FNumberFormattingRulesTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FNumberFormattingRulesTestInstance__);
  return;
}

// `dynamic_initializer_for_'FParsingUnitTestsInstance'' @ 140f17820

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FParsingUnitTestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FParsingUnitTests");
  FParsingUnitTests::FParsingUnitTests(&FParsingUnitTestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FParsingUnitTestsInstance__);
  return;
}

// `dynamic_initializer_for_'FPlatformAtomicsTestInstance'' @ 140f17870

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FPlatformAtomicsTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPlatformAtomicsTest");
  FPlatformAtomicsTest::FPlatformAtomicsTest(&FPlatformAtomicsTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPlatformAtomicsTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPlatformStringTestGetVarArgsInstance'' @ 140f178c0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPlatformStringTestGetVarArgsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPlatformStringTestGetVarArgs");
  FPlatformStringTestGetVarArgs::FPlatformStringTestGetVarArgs
            (&FPlatformStringTestGetVarArgsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPlatformStringTestGetVarArgsInstance__);
  return;
}

// `dynamic_initializer_for_'FPlatformStringTestStrcatInstance'' @ 140f17910

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPlatformStringTestStrcatInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPlatformStringTestStrcat");
  FPlatformStringTestStrcat::FPlatformStringTestStrcat(&FPlatformStringTestStrcatInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPlatformStringTestStrcatInstance__);
  return;
}

// `dynamic_initializer_for_'FPlatformStringTestStrcpyInstance'' @ 140f17960

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPlatformStringTestStrcpyInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPlatformStringTestStrcpy");
  FPlatformStringTestStrcpy::FPlatformStringTestStrcpy(&FPlatformStringTestStrcpyInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPlatformStringTestStrcpyInstance__);
  return;
}

// `dynamic_initializer_for_'FPlatformStringTestStrnlenInstance'' @ 140f179b0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPlatformStringTestStrnlenInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPlatformStringTestStrnlen");
  FPlatformStringTestStrnlen::FPlatformStringTestStrnlen
            (&FPlatformStringTestStrnlenInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPlatformStringTestStrnlenInstance__);
  return;
}

// `dynamic_initializer_for_'FPreprocessorHelperArgAppendCountTestInstance'' @ 140f17a00

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPreprocessorHelperArgAppendCountTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPreprocessorHelperArgAppendCountTest");
  FPreprocessorHelperArgAppendCountTest::FPreprocessorHelperArgAppendCountTest
            (&FPreprocessorHelperArgAppendCountTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPreprocessorHelperArgAppendCountTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPreprocessorHelperArgCountTestInstance'' @ 140f17a50

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPreprocessorHelperArgCountTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPreprocessorHelperArgCountTest");
  FPreprocessorHelperArgCountTest::FPreprocessorHelperArgCountTest
            (&FPreprocessorHelperArgCountTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPreprocessorHelperArgCountTestInstance__);
  return;
}

// `dynamic_initializer_for_'FRangeBoundTestInstance'' @ 140f17aa0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FRangeBoundTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRangeBoundTest");
  FRangeBoundTest::FRangeBoundTest(&FRangeBoundTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRangeBoundTestInstance__);
  return;
}

// `dynamic_initializer_for_'FRangeSetTestInstance'' @ 140f17af0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FRangeSetTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRangeSetTest");
  FRangeSetTest::FRangeSetTest(&FRangeSetTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRangeSetTestInstance__);
  return;
}

// `dynamic_initializer_for_'FRangeTestInstance'' @ 140f17b40

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FRangeTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRangeTest");
  FRangeTest::FRangeTest(&FRangeTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRangeTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStridedViewTestInstance'' @ 140f17b90

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FStridedViewTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStridedViewTest");
  FStridedViewTest::FStridedViewTest(&FStridedViewTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStridedViewTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewArrayAccessorTestInstance'' @ 140f17be0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewArrayAccessorTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewArrayAccessorTest");
  FStringViewArrayAccessorTest::FStringViewArrayAccessorTest
            (&FStringViewArrayAccessorTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewArrayAccessorTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewComparisonCaseInsensitiveTestInstance'' @ 140f17c30

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewComparisonCaseInsensitiveTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewComparisonCaseInsensitiveTest");
  FStringViewComparisonCaseInsensitiveTest::FStringViewComparisonCaseInsensitiveTest
            (&FStringViewComparisonCaseInsensitiveTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewComparisonCaseInsensitiveTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewComparisonCaseSensitiveTestInstance'' @ 140f17c80

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewComparisonCaseSensitiveTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewComparisonCaseSensitiveTest");
  FStringViewComparisonCaseSensitiveTest::FStringViewComparisonCaseSensitiveTest
            (&FStringViewComparisonCaseSensitiveTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewComparisonCaseSensitiveTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewConstructorTestInstance'' @ 140f17cd0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewConstructorTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewConstructorTest");
  FStringViewConstructorTest::FStringViewConstructorTest
            (&FStringViewConstructorTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewConstructorTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewEndsWithTestInstance'' @ 140f17d20

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewEndsWithTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewEndsWithTest");
  FStringViewEndsWithTest::FStringViewEndsWithTest(&FStringViewEndsWithTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewEndsWithTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewEqualityTestInstance'' @ 140f17d70

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewEqualityTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewEqualityTest");
  FStringViewEqualityTest::FStringViewEqualityTest(&FStringViewEqualityTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewEqualityTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewFindCharTestInstance'' @ 140f17dc0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewFindCharTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewFindCharTest");
  FStringViewFindCharTest::FStringViewFindCharTest(&FStringViewFindCharTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewFindCharTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewFindLastCharTestInstance'' @ 140f17e10

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewFindLastCharTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewFindLastCharTest");
  FStringViewFindLastCharTest::FStringViewFindLastCharTest
            (&FStringViewFindLastCharTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewFindLastCharTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewIteratorsTestInstance'' @ 140f17e60

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewIteratorsTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewIteratorsTest");
  FStringViewIteratorsTest::FStringViewIteratorsTest(&FStringViewIteratorsTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewIteratorsTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewLeftChopTestInstance'' @ 140f17eb0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewLeftChopTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewLeftChopTest");
  FStringViewLeftChopTest::FStringViewLeftChopTest(&FStringViewLeftChopTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewLeftChopTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewLeftTestInstance'' @ 140f17f00

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FStringViewLeftTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewLeftTest");
  FStringViewLeftTest::FStringViewLeftTest(&FStringViewLeftTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewLeftTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewMidTestInstance'' @ 140f17f50

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FStringViewMidTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewMidTest");
  FStringViewMidTest::FStringViewMidTest(&FStringViewMidTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewMidTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewModifiersTestInstance'' @ 140f17fa0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewModifiersTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewModifiersTest");
  FStringViewModifiersTest::FStringViewModifiersTest(&FStringViewModifiersTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewModifiersTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewRightChopTestInstance'' @ 140f17ff0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewRightChopTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewRightChopTest");
  FStringViewRightChopTest::FStringViewRightChopTest(&FStringViewRightChopTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewRightChopTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewRightTestInstance'' @ 140f18040

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FStringViewRightTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewRightTest");
  FStringViewRightTest::FStringViewRightTest(&FStringViewRightTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewRightTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewSliceTestInstance'' @ 140f18090

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FStringViewSliceTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewSliceTest");
  FStringViewSliceTest::FStringViewSliceTest(&FStringViewSliceTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewSliceTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewStartsWithTestInstance'' @ 140f180e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewStartsWithTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewStartsWithTest");
  FStringViewStartsWithTest::FStringViewStartsWithTest(&FStringViewStartsWithTestInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewStartsWithTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewStringSubStrTestInstance'' @ 140f18130

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewStringSubStrTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewStringSubStrTest");
  FStringViewStringSubStrTest::FStringViewStringSubStrTest
            (&FStringViewStringSubStrTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewStringSubStrTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewTrimEndTestInstance'' @ 140f18180

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FStringViewTrimEndTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewTrimEndTest");
  FStringViewTrimEndTest::FStringViewTrimEndTest(&FStringViewTrimEndTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewTrimEndTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewTrimStartAndEndTestInstance'' @ 140f181d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewTrimStartAndEndTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewTrimStartAndEndTest");
  FStringViewTrimStartAndEndTest::FStringViewTrimStartAndEndTest
            (&FStringViewTrimStartAndEndTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewTrimStartAndEndTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStringViewTrimStartTestInstance'' @ 140f18220

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStringViewTrimStartTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStringViewTrimStartTest");
  FStringViewTrimStartTest::FStringViewTrimStartTest(&FStringViewTrimStartTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStringViewTrimStartTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStructuredLogFormatTestInstance'' @ 140f18270

void __cdecl
UE::`anonymous_namespace'::_dynamic_initializer_for__FStructuredLogFormatTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStructuredLogFormatTest");
  FStructuredLogFormatTest::FStructuredLogFormatTest(&FStructuredLogFormatTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStructuredLogFormatTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTSMulticastDelegateStressTestInstance'' @ 140f182c0

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_initializer_for__FTSMulticastDelegateStressTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTSMulticastDelegateStressTest");
  FTSMulticastDelegateStressTest::FTSMulticastDelegateStressTest
            (&FTSMulticastDelegateStressTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTSMulticastDelegateStressTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTSTickerTestInstance'' @ 140f18310

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FTSTickerTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTSTickerTest");
  FTSTickerTest::FTSTickerTest(&FTSTickerTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTSTickerTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextFormatArgModifierTestInstance'' @ 140f18360

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTextFormatArgModifierTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextFormatArgModifierTest");
  FTextFormatArgModifierTest::FTextFormatArgModifierTest
            (&FTextFormatArgModifierTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTextFormatArgModifierTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextNumericParsingTestInstance'' @ 140f183b0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTextNumericParsingTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextNumericParsingTest");
  FTextNumericParsingTest::FTextNumericParsingTest(&FTextNumericParsingTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTextNumericParsingTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextPaddingTestInstance'' @ 140f18400

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FTextPaddingTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextPaddingTest");
  FTextPaddingTest::FTextPaddingTest(&FTextPaddingTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTextPaddingTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextRoundingTestInstance'' @ 140f18450

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FTextRoundingTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextRoundingTest");
  FTextRoundingTest::FTextRoundingTest(&FTextRoundingTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTextRoundingTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextStringificationTestInstance'' @ 140f184a0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTextStringificationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextStringificationTest");
  FTextStringificationTest::FTextStringificationTest(&FTextStringificationTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTextStringificationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextTestInstance'' @ 140f184f0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FTextTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextTest");
  FTextTest::FTextTest(&FTextTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTextTestInstance__);
  return;
}

// `dynamic_initializer_for_'FThreadTestInstance'' @ 140f18540

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FThreadTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FThreadTest");
  FThreadTest::FThreadTest(&FThreadTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FThreadTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTokenCopyAssignmentTestInstance'' @ 140f18590

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTokenCopyAssignmentTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTokenCopyAssignmentTest");
  FTokenCopyAssignmentTest::FTokenCopyAssignmentTest(&FTokenCopyAssignmentTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTokenCopyAssignmentTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTokenCopyConstructorTestInstance'' @ 140f185e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTokenCopyConstructorTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTokenCopyConstructorTest");
  FTokenCopyConstructorTest::FTokenCopyConstructorTest(&FTokenCopyConstructorTestInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTokenCopyConstructorTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTokenDefaultTestInstance'' @ 140f18630

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FTokenDefaultTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTokenDefaultTest");
  FTokenDefaultTest::FTokenDefaultTest(&FTokenDefaultTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTokenDefaultTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTokenExplicitConstructorTestInstance'' @ 140f18680

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTokenExplicitConstructorTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTokenExplicitConstructorTest");
  FTokenExplicitConstructorTest::FTokenExplicitConstructorTest
            (&FTokenExplicitConstructorTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTokenExplicitConstructorTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTokenMoveAssignmentTestInstance'' @ 140f186d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTokenMoveAssignmentTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTokenMoveAssignmentTest");
  FTokenMoveAssignmentTest::FTokenMoveAssignmentTest(&FTokenMoveAssignmentTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTokenMoveAssignmentTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTokenMoveConstructorTestInstance'' @ 140f18720

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTokenMoveConstructorTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTokenMoveConstructorTest");
  FTokenMoveConstructorTest::FTokenMoveConstructorTest(&FTokenMoveConstructorTestInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTokenMoveConstructorTestInstance__);
  return;
}

// `dynamic_initializer_for_'FUint32Vector2TestInstance'' @ 140f18770

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FUint32Vector2TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUint32Vector2Test");
  FUint32Vector2Test::FUint32Vector2Test(&FUint32Vector2TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUint32Vector2TestInstance__);
  return;
}

// `dynamic_initializer_for_'FUint32Vector3TestInstance'' @ 140f187c0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FUint32Vector3TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUint32Vector3Test");
  FUint32Vector3Test::FUint32Vector3Test(&FUint32Vector3TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUint32Vector3TestInstance__);
  return;
}

// `dynamic_initializer_for_'FUint32Vector4TestInstance'' @ 140f18810

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FUint32Vector4TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUint32Vector4Test");
  FUint32Vector4Test::FUint32Vector4Test(&FUint32Vector4TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUint32Vector4TestInstance__);
  return;
}

// `dynamic_initializer_for_'FUint64Vector2TestInstance'' @ 140f18860

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FUint64Vector2TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUint64Vector2Test");
  FUint64Vector2Test::FUint64Vector2Test(&FUint64Vector2TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUint64Vector2TestInstance__);
  return;
}

// `dynamic_initializer_for_'FUint64Vector3TestInstance'' @ 140f188b0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FUint64Vector3TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUint64Vector3Test");
  FUint64Vector3Test::FUint64Vector3Test(&FUint64Vector3TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUint64Vector3TestInstance__);
  return;
}

// `dynamic_initializer_for_'FUint64Vector4TestInstance'' @ 140f18900

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FUint64Vector4TestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUint64Vector4Test");
  FUint64Vector4Test::FUint64Vector4Test(&FUint64Vector4TestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUint64Vector4TestInstance__);
  return;
}

// `dynamic_initializer_for_'FUnicastDelegateBasicTestInstance'' @ 140f18950

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_initializer_for__FUnicastDelegateBasicTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUnicastDelegateBasicTest");
  FUnicastDelegateBasicTest::FUnicastDelegateBasicTest(&FUnicastDelegateBasicTestInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUnicastDelegateBasicTestInstance__);
  return;
}

// `dynamic_initializer_for_'FUnicastDelegateForwardingTestInstance'' @ 140f189a0

void __cdecl
UE::DelegatesTest::`anonymous_namespace'::
_dynamic_initializer_for__FUnicastDelegateForwardingTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUnicastDelegateForwardingTest");
  FUnicastDelegateForwardingTest::FUnicastDelegateForwardingTest
            (&FUnicastDelegateForwardingTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUnicastDelegateForwardingTestInstance__);
  return;
}

// `dynamic_initializer_for_'FUnicastTSDelegateBasicTestInstance'' @ 140f189f0

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_initializer_for__FUnicastTSDelegateBasicTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUnicastTSDelegateBasicTest");
  FUnicastTSDelegateBasicTest::FUnicastTSDelegateBasicTest
            (&FUnicastTSDelegateBasicTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUnicastTSDelegateBasicTestInstance__);
  return;
}

// `dynamic_initializer_for_'FUnicastTSDelegateStressTestInstance'' @ 140f18a40

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_initializer_for__FUnicastTSDelegateStressTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUnicastTSDelegateStressTest");
  FUnicastTSDelegateStressTest::FUnicastTSDelegateStressTest
            (&FUnicastTSDelegateStressTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUnicastTSDelegateStressTestInstance__);
  return;
}

// `dynamic_initializer_for_'FUnitUnitTestsInstance'' @ 140f18a90

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FUnitUnitTestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FUnitUnitTests");
  FUnitUnitTests::FUnitUnitTests(&FUnitUnitTestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FUnitUnitTestsInstance__);
  return;
}

// `scalar_deleting_destructor' @ 141bbe2a0

void * __thiscall
UE::MathTest::FGenericOctreeTest::_scalar_deleting_destructor_
          (FGenericOctreeTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bbe540

void * __thiscall
UE::TSDelegatesTest::FMulticastTSDelegateStressTest::_scalar_deleting_destructor_
          (FMulticastTSDelegateStressTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bbea40

void * __thiscall
FTextFormatArgModifierTest::_scalar_deleting_destructor_
          (FTextFormatArgModifierTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bbeac0

void * __thiscall
FNumberFormattingRulesTest::_scalar_deleting_destructor_
          (FNumberFormattingRulesTest *this,uint param_1)

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

// GetTestFlags @ 141bbeb10

EAutomationTestFlags __thiscall ExecuteOnGameThreadTest::GetTestFlags(ExecuteOnGameThreadTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bbeb20

bool __thiscall ExecuteOnGameThreadTest::IsStressTest(ExecuteOnGameThreadTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bbeb30

uint __thiscall ExecuteOnGameThreadTest::GetRequiredDeviceNum(ExecuteOnGameThreadTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bbeb40

FString * __thiscall
ExecuteOnGameThreadTest::GetTestSourceFileName
          (ExecuteOnGameThreadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bbeb70

int __thiscall ExecuteOnGameThreadTest::GetTestSourceFileLine(ExecuteOnGameThreadTest *this)

{
  return 0xc9;
}

// GetTests @ 141bbeb80

/* WARNING: Removing unreachable block (ram,0x000141bbecfe) */

void __thiscall
ExecuteOnGameThreadTest::GetTests
          (ExecuteOnGameThreadTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bbed20

bool __thiscall ExecuteOnGameThreadTest::RunTest(ExecuteOnGameThreadTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bbed50

FString * __thiscall
ExecuteOnGameThreadTest::GetBeautifiedTestName
          (ExecuteOnGameThreadTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 141bbed80

void * __thiscall
ExecuteOnGameThreadTest::_scalar_deleting_destructor_(ExecuteOnGameThreadTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bbf060

void * __thiscall
FTokenDefaultTest::_scalar_deleting_destructor_(FTokenDefaultTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bbf320

void * __thiscall
FStringViewComparisonCaseSensitiveTest::_scalar_deleting_destructor_
          (FStringViewComparisonCaseSensitiveTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bbf600

void * __thiscall
FTokenExplicitConstructorTest::_scalar_deleting_destructor_
          (FTokenExplicitConstructorTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bbf8e0

void * __thiscall
FTokenCopyConstructorTest::_scalar_deleting_destructor_
          (FTokenCopyConstructorTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bbfe10

void * __thiscall
FICUSanitizationTest::_scalar_deleting_destructor_(FICUSanitizationTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bbfe60

void * __thiscall
FStringViewComparisonCaseInsensitiveTest::_scalar_deleting_destructor_
          (FStringViewComparisonCaseInsensitiveTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc0140

void * __thiscall
FTokenMoveConstructorTest::_scalar_deleting_destructor_
          (FTokenMoveConstructorTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc0680

void * __thiscall
FStringViewArrayAccessorTest::_scalar_deleting_destructor_
          (FStringViewArrayAccessorTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc06d0

void * __thiscall
FTokenCopyAssignmentTest::_scalar_deleting_destructor_(FTokenCopyAssignmentTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc09b0

void * __thiscall
FTokenMoveAssignmentTest::_scalar_deleting_destructor_(FTokenMoveAssignmentTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc0dc0

void * __thiscall
FStringViewModifiersTest::_scalar_deleting_destructor_(FStringViewModifiersTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc12f0

void * __thiscall FICUTextTest::_scalar_deleting_destructor_(FICUTextTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc1340

void * __thiscall
FParsingUnitTests::_scalar_deleting_destructor_(FParsingUnitTests *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc1870

void * __thiscall
UE::DelegatesTest::FUnicastDelegateForwardingTest::_scalar_deleting_destructor_
          (FUnicastDelegateForwardingTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc18c0

void * __thiscall
FStringViewStartsWithTest::_scalar_deleting_destructor_
          (FStringViewStartsWithTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc1b80

void * __thiscall FThreadTest::_scalar_deleting_destructor_(FThreadTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc1e40

void * __thiscall FHashBlake3Test::_scalar_deleting_destructor_(FHashBlake3Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc2100

void * __thiscall
FStringViewEndsWithTest::_scalar_deleting_destructor_(FStringViewEndsWithTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc23c0

void * __thiscall
FICUTextUtilities::_scalar_deleting_destructor_(FICUTextUtilities *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc2810

void * __thiscall
FStringViewStringSubStrTest::_scalar_deleting_destructor_
          (FStringViewStringSubStrTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc2ae0

void * __thiscall
UE::TSDelegatesTest::FUnicastDelegateBasicTest::_scalar_deleting_destructor_
          (FUnicastDelegateBasicTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc2e50

void * __thiscall
FStringViewLeftTest::_scalar_deleting_destructor_(FStringViewLeftTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc31d0

void * __thiscall
FStringViewLeftChopTest::_scalar_deleting_destructor_(FStringViewLeftChopTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc3550

void * __thiscall
FStringViewRightTest::_scalar_deleting_destructor_(FStringViewRightTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc38d0

void * __thiscall
FStringViewRightChopTest::_scalar_deleting_destructor_(FStringViewRightChopTest *this,uint param_1)

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

// GetTestFlags @ 141bc3920

EAutomationTestFlags __thiscall DriverVersionTest::GetTestFlags(DriverVersionTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc3930

bool __thiscall DriverVersionTest::IsStressTest(DriverVersionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc3940

uint __thiscall DriverVersionTest::GetRequiredDeviceNum(DriverVersionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc3950

FString * __thiscall
DriverVersionTest::GetTestSourceFileName(DriverVersionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\GenericPlatform\\GenericPlatformDriverTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc3980

int __thiscall DriverVersionTest::GetTestSourceFileLine(DriverVersionTest *this)

{
  return 0x1a;
}

// GetTests @ 141bc3990

/* WARNING: Removing unreachable block (ram,0x000141bc3b0e) */

void __thiscall
DriverVersionTest::GetTests
          (DriverVersionTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc3b30

bool __thiscall DriverVersionTest::RunTest(DriverVersionTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc3b60

FString * __thiscall
DriverVersionTest::GetBeautifiedTestName(DriverVersionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 141bc3b90

void * __thiscall
DriverVersionTest::_scalar_deleting_destructor_(DriverVersionTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc4290

void * __thiscall
FStringViewMidTest::_scalar_deleting_destructor_(FStringViewMidTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc42e0

void * __thiscall FGuardedIntTest::_scalar_deleting_destructor_(FGuardedIntTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bc4800

void * __thiscall
FInt32Vector2Test::_scalar_deleting_destructor_(FInt32Vector2Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc4850

void * __thiscall
FStringViewTrimStartAndEndTest::_scalar_deleting_destructor_
          (FStringViewTrimStartAndEndTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc4b10

void * __thiscall
FInt64Vector2Test::_scalar_deleting_destructor_(FInt64Vector2Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc5040

void * __thiscall
FUint32Vector2Test::_scalar_deleting_destructor_(FUint32Vector2Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc5090

void * __thiscall
FStringViewTrimStartTest::_scalar_deleting_destructor_(FStringViewTrimStartTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc5350

void * __thiscall
FUint64Vector2Test::_scalar_deleting_destructor_(FUint64Vector2Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc5610

void * __thiscall
FStringViewTrimEndTest::_scalar_deleting_destructor_(FStringViewTrimEndTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc58d0

void * __thiscall
FInt32Vector3Test::_scalar_deleting_destructor_(FInt32Vector3Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc5b90

void * __thiscall
FStringViewFindCharTest::_scalar_deleting_destructor_(FStringViewFindCharTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc60c0

void * __thiscall
FInt64Vector3Test::_scalar_deleting_destructor_(FInt64Vector3Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc6110

void * __thiscall
FConsoleManagerTest::_scalar_deleting_destructor_(FConsoleManagerTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc63e0

void * __thiscall
FStridedViewTest::_scalar_deleting_destructor_(FStridedViewTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc6900

void * __thiscall
FUint32Vector3Test::_scalar_deleting_destructor_(FUint32Vector3Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc6950

void * __thiscall
FStringViewFindLastCharTest::_scalar_deleting_destructor_
          (FStringViewFindLastCharTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc6c10

void * __thiscall
FUint64Vector3Test::_scalar_deleting_destructor_(FUint64Vector3Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc6ed0

void * __thiscall
FInt32Vector4Test::_scalar_deleting_destructor_(FInt32Vector4Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc74a0

void * __thiscall
FStringViewSliceTest::_scalar_deleting_destructor_(FStringViewSliceTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc74f0

void * __thiscall
FInt64Vector4Test::_scalar_deleting_destructor_(FInt64Vector4Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc77b0

void * __thiscall FArchiveTest::_scalar_deleting_destructor_(FArchiveTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc7cb0

void * __thiscall
FUint32Vector4Test::_scalar_deleting_destructor_(FUint32Vector4Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc7d30

void * __thiscall
FGenericPlatformMiscTest::_scalar_deleting_destructor_(FGenericPlatformMiscTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc7ff0

void * __thiscall
FUint64Vector4Test::_scalar_deleting_destructor_(FUint64Vector4Test *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc82b0

void * __thiscall FRangeBoundTest::_scalar_deleting_destructor_(FRangeBoundTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc8570

void * __thiscall FRangeSetTest::_scalar_deleting_destructor_(FRangeSetTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc8830

void * __thiscall FIoStatusOrTest::_scalar_deleting_destructor_(FIoStatusOrTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc8d60

void * __thiscall
FDateTimeFormattingRulesTest::_scalar_deleting_destructor_
          (FDateTimeFormattingRulesTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc8db0

void * __thiscall FTextTest::_scalar_deleting_destructor_(FTextTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc9070

void * __thiscall
FTextRoundingTest::_scalar_deleting_destructor_(FTextRoundingTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc93a0

void * __thiscall
FKeysCultureTest::_scalar_deleting_destructor_(FKeysCultureTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc9700

void * __thiscall
FArchiveFileReaderGenericTestRunner::_scalar_deleting_destructor_
          (FArchiveFileReaderGenericTestRunner *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc9bc0

void * __thiscall FRangeTest::_scalar_deleting_destructor_(FRangeTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc9c10

void * __thiscall
UE::FStructuredLogFormatTest::_scalar_deleting_destructor_
          (FStructuredLogFormatTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bc9ed0

void * __thiscall FLocContextTest::_scalar_deleting_destructor_(FLocContextTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bca190

void * __thiscall
FTextPaddingTest::_scalar_deleting_destructor_(FTextPaddingTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bca450

void * __thiscall FLocItemTest::_scalar_deleting_destructor_(FLocItemTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bca710

void * __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::_scalar_deleting_destructor_
          (FUnicastTSDelegateBasicTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bca9d0

void * __thiscall FManifestTest::_scalar_deleting_destructor_(FManifestTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcac90

void * __thiscall FTSTickerTest::_scalar_deleting_destructor_(FTSTickerTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcaf50

void * __thiscall
UE::TSDelegatesTest::FUnicastTSDelegateStressTest::_scalar_deleting_destructor_
          (FUnicastTSDelegateStressTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcb210

void * __thiscall FMetadataTest::_scalar_deleting_destructor_(FMetadataTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcb740

void * __thiscall
UE::TSDelegatesTest::FMulticastDelegateBasicTest::_scalar_deleting_destructor_
          (FMulticastDelegateBasicTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcb790

void * __thiscall
FFLinearColorSmokeTest::_scalar_deleting_destructor_(FFLinearColorSmokeTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcba50

void * __thiscall
FPlatformAtomicsTest::_scalar_deleting_destructor_(FPlatformAtomicsTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcbd20

void * __thiscall
FStringViewConstructorTest::_scalar_deleting_destructor_
          (FStringViewConstructorTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcbfd0

void * __thiscall
FFColorSmokeTest::_scalar_deleting_destructor_(FFColorSmokeTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcc340

void * __thiscall
FPlatformStringTestGetVarArgs::_scalar_deleting_destructor_
          (FPlatformStringTestGetVarArgs *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcc600

void * __thiscall
FPlatformStringTestStrnlen::_scalar_deleting_destructor_
          (FPlatformStringTestStrnlen *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcc8c0

void * __thiscall
FPlatformStringTestStrcpy::_scalar_deleting_destructor_
          (FPlatformStringTestStrcpy *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bccdf0

void * __thiscall
UE::TSDelegatesTest::FTSMulticastDelegateStressTest::_scalar_deleting_destructor_
          (FTSMulticastDelegateStressTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcce40

void * __thiscall
FPlatformStringTestStrcat::_scalar_deleting_destructor_
          (FPlatformStringTestStrcat *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcd100

void * __thiscall
FHALPlatformStringTest::_scalar_deleting_destructor_(FHALPlatformStringTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcd7a0

void * __thiscall
FTextNumericParsingTest::_scalar_deleting_destructor_(FTextNumericParsingTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcd9f0

void * __thiscall FUnitUnitTests::_scalar_deleting_destructor_(FUnitUnitTests *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcda90

void * __thiscall
FPreprocessorHelperArgCountTest::_scalar_deleting_destructor_
          (FPreprocessorHelperArgCountTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bcdd70

void * __thiscall
FTextStringificationTest::_scalar_deleting_destructor_(FTextStringificationTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bce000

void * __thiscall
FPreprocessorHelperArgAppendCountTest::_scalar_deleting_destructor_
          (FPreprocessorHelperArgAppendCountTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bce410

void * __thiscall
FStringViewIteratorsTest::_scalar_deleting_destructor_(FStringViewIteratorsTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141bce6d0

void * __thiscall
FStringViewEqualityTest::_scalar_deleting_destructor_(FStringViewEqualityTest *this,uint param_1)

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

// <lambda_invoker_cdecl> @ 141bce720

void __cdecl
``anonymous_namespace'::TestIsJoinableAfterCreation'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141bce730

void __cdecl
``anonymous_namespace'::TestIsNotJoinableAfterJoining'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141bce750

bool __cdecl
``FTSTickerTest::TestBody'::__l60::<lambda_10>::operator()'::__l4::<lambda_1>::
<lambda_invoker_cdecl>(float param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 141bce760

void __cdecl
``anonymous_namespace'::TestDefaultConstruction'::__l7::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141bce770

void __cdecl
``anonymous_namespace'::TestMovability'::__l10::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141bce780

void __cdecl
``anonymous_namespace'::TestThreadSingleton'::__l10::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonFirst>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&DAT_154b85e94);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonSecond>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&DAT_154b85e90);
  return;
}

// <lambda_invoker_cdecl> @ 141bce7e0

void __cdecl
``anonymous_namespace'::TestMovability'::__l17::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141bce7f0

void __cdecl
``anonymous_namespace'::TestMovability'::__l25::<lambda_3>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141bce800

void __cdecl
``anonymous_namespace'::TestMovability'::__l25::<lambda_4>::<lambda_invoker_cdecl>(void)

{
  return;
}

// Accumulate<double,TStridedView<double,int>,TPlus<void>_> @ 141bcf8f0

double __cdecl
Algo::Accumulate<double,TStridedView<double,int>,TPlus<void>_>
          (TStridedView<double,int> *param_1,double param_2,TPlus<void> param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_1->NumElements; iVar1 = iVar1 + 1) {
    param_2 = param_2 + *(double *)
                         ((longlong)param_1->BytesBetweenElements * (longlong)iVar1 +
                         (longlong)param_1->FirstElementPtr);
  }
  return param_2;
}

// Accumulate<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>_const_,int>,TPlus<void>_> @ 141bcf920

TVector<double> * __cdecl
Algo::
Accumulate<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>_const_,int>,TPlus<void>_>
          (TVector<double> *__return_storage_ptr__,
          TStridedView<UE::Math::TVector<double>_const_,int> *param_1,TVector<double> *param_2,
          TPlus<void> param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  TVector<double> *pTVar4;
  longlong lVar5;
  int iVar6;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  iVar3 = param_1->NumElements;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  for (iVar6 = 0; iVar6 != iVar3; iVar6 = iVar6 + 1) {
    lVar5 = (longlong)param_1->BytesBetweenElements * (longlong)iVar6;
    pTVar4 = param_1->FirstElementPtr;
    dVar1 = *(double *)((longlong)&pTVar4->field0_0x0 + lVar5 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (((TVector<double>_u_0 *)((longlong)&pTVar4->field0_0x0 + lVar5))->_s_0).X +
         (__return_storage_ptr__->field0_0x0)._s_0.X;
    dVar2 = *(double *)((longlong)&pTVar4->field0_0x0 + lVar5 + 0x10);
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar1 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar2 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// AddLambda<``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_> @ 141bcf9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<__UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l18::<lambda_3>::operator()_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  FDelegateAllocation local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  InitializeCriticalSectionAndSpinCount(&local_60,4000);
  uVar8 = 0;
  local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38.DelegateSize = 0;
  EnterCriticalSection(&local_60);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_38);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_3>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  LeaveCriticalSection(&local_60);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_60);
  if (((local_38.DelegateSize != 0) &&
      (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_38.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_60);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_60);
    if ((local_38.DelegateSize != 0) &&
       (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_38.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_60);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_60);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_38.DelegateAllocator;
    local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_38.DelegateSize;
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_60);
  if ((local_38.DelegateSize != 0) &&
     (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_38,0,0,0x10);
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_38.DelegateAllocator);
  }
  DeleteCriticalSection(&local_60);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_> @ 141bcfbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<__UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l19::<lambda_6>::operator()_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  FDelegateAllocation local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  InitializeCriticalSectionAndSpinCount(&local_60,4000);
  uVar8 = 0;
  local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38.DelegateSize = 0;
  EnterCriticalSection(&local_60);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_38);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`19'::<lambda_6>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  LeaveCriticalSection(&local_60);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_60);
  if (((local_38.DelegateSize != 0) &&
      (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_38.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_60);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_60);
    if ((local_38.DelegateSize != 0) &&
       (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_38.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_60);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_60);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_38.DelegateAllocator;
    local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_38.DelegateSize;
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_60);
  if ((local_38.DelegateSize != 0) &&
     (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_38,0,0,0x10);
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_38.DelegateAllocator);
  }
  DeleteCriticalSection(&local_60);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_> @ 141bcfe20

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l3::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  bool *pbVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pbVar5 = (bool *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->bExecuted1 = (bool *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pbVar5 = (bool *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->bExecuted1 = pbVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
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

// AddLambda<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_> @ 141bd0070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l3::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  int *piVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  piVar8 = (int *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`3'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->ExecRes = (int *)0x0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      piVar8 = (int *)*puVar5;
    }
    LeaveCriticalSection(&local_70);
    param_1->ExecRes = piVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_> @ 141bd02c0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l3::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  bool *pbVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pbVar5 = (bool *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`3'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->bExecuted2 = (bool *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pbVar5 = (bool *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->bExecuted2 = pbVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
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

// AddLambda<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_> @ 141bd0510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l3::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  int *piVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  piVar8 = (int *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`3'::<lambda_2>_>
               ::_vftable_;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->ExecRes = (int *)0x0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      piVar8 = (int *)*puVar5;
    }
    LeaveCriticalSection(&local_70);
    param_1->ExecRes = piVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_> @ 141bd0760

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l56::<lambda_4>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_4> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  int *piVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  piVar5 = (int *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->NumExecuted = (int *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      piVar5 = (int *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->NumExecuted = piVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
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

// AddLambda<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_> @ 141bd09b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l18::<lambda_5>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_5> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  FDelegateAllocation local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  InitializeCriticalSectionAndSpinCount(&local_60,4000);
  uVar8 = 0;
  local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38.DelegateSize = 0;
  EnterCriticalSection(&local_60);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_38);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`18'::<lambda_5>_>
               ::_vftable_;
  }
  LeaveCriticalSection(&local_60);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_60);
  if (((local_38.DelegateSize != 0) &&
      (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_38.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_60);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_60);
    if ((local_38.DelegateSize != 0) &&
       (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_38.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_60);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_60);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_38.DelegateAllocator;
    local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_38.DelegateSize;
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_60);
  if ((local_38.DelegateSize != 0) &&
     (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_38,0,0,0x10);
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_38.DelegateAllocator);
  }
  DeleteCriticalSection(&local_60);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_> @ 141bd0bf0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l56::<lambda_5>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_5> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  int *piVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  piVar5 = (int *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->NumExecuted = (int *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      piVar5 = (int *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->NumExecuted = piVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
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

// AddLambda<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_> @ 141bd0e40

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l56::<lambda_6>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_6> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  int *piVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  piVar5 = (int *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_6>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->NumExecuted = (int *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      piVar5 = (int *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->NumExecuted = piVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
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

// AddLambda<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_> @ 141bd1090

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l56::<lambda_7>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_7> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  int *piVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  piVar5 = (int *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`56'::<lambda_7>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->NumExecuted = (int *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      piVar5 = (int *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->NumExecuted = piVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
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

// AddLambda<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_> @ 141bd12e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody_::__l20::<lambda_8>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_8> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FDelegateHandle FVar10;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *pTVar11;
  ForElementType<TAlignedBytes<16,16>_> *pFVar12;
  undefined4 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  pTVar11 = (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_48);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::`20'::<lambda_8>_>
               ::_vftable_;
    uVar2 = in_R8[1];
    uVar3 = in_R8[2];
    uVar4 = in_R8[3];
    *(undefined4 *)(puVar8 + 3) = *in_R8;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar2;
    *(undefined4 *)(puVar8 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    FVar10.ID = (*pcVar1)();
    return (FDelegateHandle)FVar10.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->Delegate = (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar6 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar8 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      pTVar11 = (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)*puVar8;
    }
    LeaveCriticalSection(&local_70);
    param_1->Delegate = pTVar11;
    iVar7 = *(int *)&this->field_0x30;
    if (iVar7 == *(int *)&this->field_0x34) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar12 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x28 + (longlong)iVar7 * 0x10);
    *(int *)&this->field_0x30 = iVar7 + 1;
    *pFVar12 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar12 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar12 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar12);
    }
    *pFVar12 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar12 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_> @ 141bd1530

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l85::<lambda_8>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_8> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  int *piVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  piVar5 = (int *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`85'::<lambda_8>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->NumExecuted = (int *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      piVar5 = (int *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->NumExecuted = piVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
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

// AddLambda<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_> @ 141bd1780

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l85::<lambda_9>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_9> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  int *piVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  piVar5 = (int *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`85'::<lambda_9>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->NumExecuted = (int *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      piVar5 = (int *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->NumExecuted = piVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
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

// AddRaw<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy> @ 141bd1c50

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
AddRaw<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l18::FDummy>
          (TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *this,
          FDummy *param_1,pmf_dff587b4 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  longlong in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  uVar8 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_78);
  local_60 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`18'::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
               ::_vftable_;
    *(pmf_dff587b4 *)(puVar5 + 3) = param_2;
    puVar5[4] = in_R9;
    if (((param_2 == (pmf_dff587b4)0x0) || (in_R9 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_a8);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_58);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_40);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      uVar8 = *puVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    iVar4 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar8;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_c0);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_90);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// ApplyAfter<`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_&,IConsoleVariable_*> @ 141bd26a0

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_FConsoleManagerTest::TestBody_::__l6::<lambda_5>_&,IConsoleVariable_*>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_5> *param_1,
          IConsoleVariable **param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  float fVar4;
  FString local_18;
  
  if (*param_2 == (IConsoleVariable *)0x0) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    fVar4 = (float)(**(code **)(*(longlong *)*param_2 + 0xd0))();
    if (__real_38d1b717 <
        (float)((uint)(fVar4 - __real_40466666) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_18,L"Condition failed");
      (*pcVar2)(pFVar1,&local_18,0);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    *param_1->ChangeCounter = *param_1->ChangeCounter + 1;
  }
  return;
}

// Call<`UE::TLogTemplate<UE::Logging::Private::FUniqueLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FUniqueLogTemplateStorage>'::__l2::<lambda_1>_> @ 141bd2790

void * __cdecl
UE::TFunctionWithContext<void_*___cdecl(int)>::
Call<_UE::TLogTemplate<UE::Logging::Private::FUniqueLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FUniqueLogTemplateStorage>_::__l2::<lambda_1>_>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *_Dst;
  undefined8 auStack_18 [2];
  
  puVar1 = *(undefined8 **)param_1;
  _Dst = operator_new__((longlong)param_2);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,(longlong)param_2);
  }
  if (puVar1 != auStack_18) {
    pvVar2 = (void *)*puVar1;
    *puVar1 = _Dst;
    _Dst = (void *)0x0;
    operator_delete__(pvVar2);
  }
  operator_delete__(_Dst);
  return (void *)*puVar1;
}

// CompareItems<TSharedPtr<FLocMetadataValue,1>,int> @ 141bd27a0

bool __cdecl
CompareItems<TSharedPtr<FLocMetadataValue,1>,int>
          (TSharedPtr<FLocMetadataValue,1> *param_1,TSharedPtr<FLocMetadataValue,1> *param_2,
          int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(FLocMetadataValue **)(lVar1 + (longlong)param_2) != param_2->Object) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<UE::Tasks::FTaskEvent,UE::Tasks::FTaskEvent,int> @ 141bd27d0

void __cdecl
ConstructItems<UE::Tasks::FTaskEvent,UE::Tasks::FTaskEvent,int>
          (void *param_1,FTaskEvent *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      lVar1 = *(longlong *)(lVar2 + (longlong)param_1);
      *(longlong *)param_1 = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
        UNLOCK();
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int> @ 141bd2810

void __cdecl
ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
          (void *param_1,FTaskHandle *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      lVar1 = *(longlong *)(lVar2 + (longlong)param_1);
      *(longlong *)param_1 = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
        UNLOCK();
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::FNode,int> @ 141bd2bf0

void __cdecl
DefaultConstructItems<TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::FNode,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int> @ 141bd2c20

void __cdecl
DefaultConstructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0xb0);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *puVar1 = 0;
      puVar1[1] = 2;
      puVar1 = puVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int> @ 141bd2c50

void __cdecl
DefaultConstructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DereferenceIfNecessary<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder_*_&> @ 141bd2c80

FDelegateHolder * __cdecl
UE::Core::Private::
DereferenceIfNecessary<_UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody_::__l70::FDelegateHolder,_UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody_::__l70::FDelegateHolder_*_&>
          (FDelegateHolder **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy_*_&> @ 141bd2ca0

FDummy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l18::FDummy,_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l18::FDummy_*_&>
          (FDummy **param_1)

{
  return *param_1;
}

// DestructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int> @ 141bd2cc0

void __cdecl
DestructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  ForElementType<UE::MathTest::FTestOctreeElement> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int> @ 141bd2d10

void __cdecl
DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
          (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1,
          int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((*(int *)&param_1->field_0x8 != 0) &&
       (*(FScriptContainerElement **)param_1 != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)*(FScriptContainerElement **)param_1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)param_1,0,0,0x10);
      *(undefined4 *)&param_1->field_0x8 = 0;
    }
    if (*(FScriptContainerElement **)param_1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TWeakPtr<FTSTicker::FElement,1>,int> @ 141bd2d90

void __cdecl
DestructItems<TWeakPtr<FTSTicker::FElement,1>,int>
          (TWeakPtr<FTSTicker::FElement,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FDriverVersion,int> @ 141bd2de0

void __cdecl DestructItems<FDriverVersion,int>(FDriverVersion *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Values).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Tasks::FTaskEvent,int> @ 141bd2e20

void __cdecl DestructItems<UE::Tasks::FTaskEvent,int>(FTaskEvent *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FVar3 = *param_1;
    if (FVar3 != (FTaskEvent)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)FVar3 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)FVar3)(FVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DoGuardedIntTestForType<signed_char> @ 141bd3870

bool __cdecl
`anonymous_namespace'::DoGuardedIntTestForType<signed_char>(FAutomationTestBase *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  schar sVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  TGuardedInt<signed_char> local_res10 [4];
  ushort local_res18;
  TGuardedInt<signed_char> local_res20;
  int local_3b8;
  bool bStack_3b3;
  uint local_3b0;
  bool bStack_3ab;
  bool bStack_3a9;
  bool bStack_3a7;
  char local_3a6;
  bool bStack_3a5;
  bool bStack_3a3;
  TGuardedInt<signed_char> local_3a2;
  byte local_3a0;
  bool bStack_39f;
  bool bStack_39d;
  char local_39c;
  bool bStack_39b;
  TGuardedInt<signed_char> local_39a;
  bool bStack_397;
  bool bStack_395;
  int local_394;
  char local_390;
  char local_38c;
  char local_388;
  char local_384;
  char local_380;
  char local_37c;
  byte local_378;
  bool bStack_377;
  byte local_374;
  bool bStack_373;
  char local_370;
  bool bStack_36f;
  char local_36c;
  bool bStack_36b;
  bool bStack_363;
  bool bStack_35f;
  char local_35c;
  bool bStack_35b;
  char local_358;
  char local_354;
  char local_350;
  char local_34c;
  bool bStack_34b;
  char local_348;
  bool bStack_347;
  char local_344;
  bool bStack_343;
  bool bStack_33f;
  bool bStack_33b;
  bool bStack_337;
  bool bStack_333;
  TGuardedInt<signed_char> local_324;
  TGuardedInt<signed_char> local_30c;
  undefined2 local_30a;
  TGuardedInt<signed_char> local_308;
  undefined2 local_306;
  undefined2 local_304;
  undefined2 local_302;
  undefined2 local_300;
  undefined2 local_2fe;
  undefined2 local_2fc;
  undefined2 local_2fa;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  uint local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  uint local_2d4;
  uint local_2d0;
  int local_2cc;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
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
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_3b8 = 0;
  local_394 = -0x80;
  do {
    bVar20 = (byte)local_394;
    local_324.bIsValid = false;
    local_324.Value = bVar20;
    local_2dc = -local_394;
    local_2d8 = -local_394;
    if (-local_394 < 0) {
      local_2d8 = local_394;
    }
    local_3b0 = 0xffffff80;
    do {
      bVar17 = (byte)local_3b0;
      local_324.bIsValid = local_394 < 0x80;
      bVar3 = (int)local_3b0 < 0x80;
      if (((local_394 < 0x80) && (local_3b0 == 0)) && ((char)bVar20 != local_394)) {
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_2b8,L"GetChecked A=%d");
        (*pcVar1)(param_1,&local_2b8,0);
        if (local_2b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_141bd3949;
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        local_2f4 = -0x100;
        local_2f8 = -0x100;
LAB_141bd3985:
        local_2f0 = local_394 << (bVar17 & 0x1f);
        local_2ec = local_394 >> (bVar17 & 0x1f);
      }
      else {
LAB_141bd3949:
        local_2f4 = -0x100;
        local_2f8 = -0x100;
        if ((local_3b0 != 0) && ((local_394 != -0x80 || (local_3b0 != 0xffffffff)))) {
          local_2f4 = local_394 / (int)local_3b0;
          local_2f8 = local_394 % (int)local_3b0;
        }
        local_2f0 = -0x100;
        local_2ec = -0x100;
        if (local_3b0 < 8) goto LAB_141bd3985;
      }
      iVar9 = local_2f4;
      local_res18 = (ushort)bVar3;
      if ((local_394 < 0x80) && (bVar3)) {
        bVar6 = (byte)(local_394 + local_3b0);
        if ((char)((bVar6 ^ bVar20) & (bVar6 ^ bVar17)) < '\0') {
          local_res10[0].Value = '\0';
          local_res10[0].bIsValid = false;
        }
        else {
          local_res10[0] =
               (TGuardedInt<signed_char>)((ushort)(local_394 + local_3b0) & 0xff | 0x100);
        }
      }
      else {
        local_res10[0].Value = '\0';
        local_res10[0].bIsValid = false;
      }
      local_2e4 = local_394 + local_3b0;
      local_390 = (char)local_2e4;
      local_2d4 = local_2e4 + 0x80;
      bVar4 = local_2d4 < 0x100;
      if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
        local_2fe = 0;
        bVar4 = false;
        local_390 = '\0';
      }
      if (((local_res10[0].bIsValid != bVar4) ||
          ((local_res10[0].bIsValid != false && (local_res10[0].Value != local_390)))) &&
         (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_2a8,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_2a8,0);
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
      }
      local_2e0 = local_394 - local_3b0;
      local_res10[0].Value = '\0';
      local_res10[0].bIsValid = false;
      if ((local_394 < 0x80) && (bVar3)) {
        if ((char)((bVar20 ^ bVar20 - bVar17) & (bVar17 ^ bVar20)) < '\0') {
          local_res10[0].Value = '\0';
          local_res10[0].bIsValid = false;
        }
        else {
          local_res10[0] = (TGuardedInt<signed_char>)((byte)(bVar20 - bVar17) | 0x100);
        }
      }
      local_2d0 = local_2e0 + 0x80;
      local_38c = (char)local_2e0;
      bVar4 = local_2d0 < 0x100;
      if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
        local_2fc = 0;
        bVar4 = false;
        local_38c = '\0';
      }
      if (((local_res10[0].bIsValid != bVar4) ||
          ((local_res10[0].bIsValid != false && (local_res10[0].Value != local_38c)))) &&
         (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_298,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_298,0);
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
      }
      if ((local_394 < 0x80) && (bVar3)) {
        if (bVar17 == 0) {
          local_res10[0].Value = '\0';
          local_res10[0].bIsValid = true;
        }
        else {
          uVar14 = (int)(char)bVar20;
          if ((char)bVar20 < '\0') {
            uVar14 = (uint)(byte)-bVar20;
          }
          uVar10 = (ulonglong)(local_3b0 & 0xff);
          uVar13 = (uint)(int)(char)bVar20 >> 7;
          if ((char)bVar17 < '\0') {
            uVar10 = (ulonglong)(byte)-bVar17;
          }
          uVar5 = (uint)((byte)uVar13 & 1 ^ 1);
          if (-1 < (char)bVar17) {
            uVar5 = uVar13 & 1;
          }
          if ((uint)((uVar5 + 0x7f) / uVar10) < (uVar14 & 0xff)) {
            local_res10[0].Value = '\0';
            local_res10[0].bIsValid = false;
          }
          else {
            local_res10[0] =
                 (TGuardedInt<signed_char>)
                 ((short)(char)bVar17 * (short)(char)bVar20 & 0xffU | 0x100);
          }
        }
      }
      else {
        local_res10[0].Value = '\0';
        local_res10[0].bIsValid = false;
      }
      local_2cc = local_3b0 * local_394;
      local_370 = (char)local_2cc;
      uVar14 = local_2cc + 0x80;
      bVar3 = uVar14 < 0x100;
      if ((0x7f < local_394) || (local_388 = local_370, 0x7f < (int)local_3b0)) {
        local_2fa = 0;
        bVar3 = false;
        local_388 = '\0';
      }
      if (((local_res10[0].bIsValid != bVar3) ||
          ((local_res10[0].bIsValid != false && (local_res10[0].Value != local_388)))) &&
         (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_288,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_288,0);
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
      }
      if ((((local_394 < 0x80) && ((char)local_res18 != '\0')) && (bVar17 != 0)) &&
         ((bVar20 != 0x80 || (bVar17 != 0xff)))) {
        uVar8 = 0x100;
        if (0xff < (int)((longlong)(int)(char)bVar20 / (longlong)(int)(char)bVar17) + 0x80U) {
          uVar8 = 0;
        }
        local_res10[0] =
             (TGuardedInt<signed_char>)
             (uVar8 | (ushort)((longlong)(int)(char)bVar20 / (longlong)(int)(char)bVar17) & 0xff);
      }
      else {
        local_res10[0].Value = '\0';
        local_res10[0].bIsValid = false;
      }
      local_384 = (char)iVar9;
      bVar3 = iVar9 + 0x80U < 0x100;
      if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
        bVar3 = false;
        local_384 = '\0';
      }
      if (((local_res10[0].bIsValid != bVar3) ||
          ((local_res10[0].bIsValid != false && (local_res10[0].Value != local_384)))) &&
         (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_278,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_278,0);
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
      }
      if ((((local_394 < 0x80) && ((char)local_res18 != '\0')) && (bVar17 != 0)) &&
         ((bVar20 != 0x80 || (bVar17 != 0xff)))) {
        uVar8 = 0x100;
        if (0xff < (int)((longlong)(int)(char)bVar20 % (longlong)(int)(char)bVar17) + 0x80U) {
          uVar8 = 0;
        }
        local_res10[0] =
             (TGuardedInt<signed_char>)
             (uVar8 | (ushort)((longlong)(int)(char)bVar20 % (longlong)(int)(char)bVar17) & 0xff);
      }
      else {
        local_res10[0].Value = '\0';
        local_res10[0].bIsValid = false;
      }
      local_380 = (char)local_2f8;
      bVar3 = local_2f8 + 0x80U < 0x100;
      if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
        bVar3 = false;
        local_380 = '\0';
      }
      if (((local_res10[0].bIsValid != bVar3) ||
          ((local_res10[0].bIsValid != false && (local_res10[0].Value != local_380)))) &&
         (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_268,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_268,0);
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((char)local_res18 != '\0')) && (bVar17 < 8)) {
        iVar9 = (int)(char)bVar20;
        if ((iVar9 < -0x80 >> (bVar17 & 0x1f)) || (0x7f >> (bVar17 & 0x1f) < iVar9)) {
          local_res10[0].Value = '\0';
          local_res10[0].bIsValid = false;
        }
        else {
          iVar9 = iVar9 << (bVar17 & 0x1f);
          local_res10[0] =
               (TGuardedInt<signed_char>)
               ((ushort)(iVar9 + 0x80U < 0x100) << 8 | (ushort)iVar9 & 0xff);
        }
      }
      else {
        local_res10[0].Value = '\0';
        local_res10[0].bIsValid = false;
      }
      local_354 = (char)local_2f0;
      uVar13 = local_2f0 + 0x80;
      bVar3 = uVar13 < 0x100;
      if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
        bVar3 = false;
        local_354 = '\0';
      }
      local_2e8 = uVar13;
      if (((local_res10[0].bIsValid != bVar3) ||
          ((local_res10[0].bIsValid != false && (local_res10[0].Value != local_354)))) &&
         (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_258,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_258,0);
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((char)local_res18 != '\0')) && (bVar17 < 8)) {
        iVar9 = (int)(char)bVar20 >> (bVar17 & 0x1f);
        uVar8 = 0x100;
        if (0xff < iVar9 + 0x80U) {
          uVar8 = 0;
        }
        local_res10[0] = (TGuardedInt<signed_char>)(uVar8 | (ushort)iVar9 & 0xff);
      }
      else {
        local_res10[0].Value = '\0';
        local_res10[0].bIsValid = false;
      }
      local_358 = (char)local_2ec;
      uVar5 = local_2ec + 0x80;
      bVar3 = uVar5 < 0x100;
      if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
        bVar3 = false;
        local_358 = '\0';
      }
      if (((local_res10[0].bIsValid != bVar3) ||
          ((local_res10[0].bIsValid != false && (local_res10[0].Value != local_358)))) &&
         (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_248,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_248,0);
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
      }
      if ((local_394 < 0x80) && (-0x80 < (char)bVar20)) {
        iVar9 = -(int)(char)bVar20;
        bStack_395 = iVar9 + 0x80U < 0x100;
      }
      else {
        iVar9 = 0;
        bStack_395 = false;
      }
      local_350 = (char)local_2dc;
      if (local_394 >= 0x80) {
        local_350 = '\0';
      }
      if (((bStack_395 != (local_394 < 0x80 && local_2dc + 0x80U < 0x100)) ||
          ((bStack_395 != false && ((char)iVar9 != local_350)))) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_238,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_238,0);
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
      }
      if (local_394 < 0x80) {
        local_res10[0] = local_324;
        if ((char)bVar20 < '\0') {
          if ((char)bVar20 < -0x7f) {
            local_res10[0].Value = '\0';
            local_res10[0].bIsValid = false;
          }
          else {
            local_res10[0] =
                 (TGuardedInt<signed_char>)
                 ((ushort)(-(int)(char)bVar20 + 0x80U < 0x100) << 8 |
                 (ushort)-(int)(char)bVar20 & 0xff);
          }
        }
      }
      else {
        local_res10[0].Value = '\0';
        local_res10[0].bIsValid = false;
      }
      local_37c = (char)local_2d8;
      if (local_394 >= 0x80) {
        local_37c = '\0';
      }
      if (((local_res10[0].bIsValid != (local_394 < 0x80 && local_2d8 + 0x80U < 0x100)) ||
          ((local_res10[0].bIsValid != false && (local_res10[0].Value != local_37c)))) &&
         (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_228,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_228,0);
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
      }
      if ((int)local_3b0 < 0x80) {
        if ((local_394 < 0x80) &&
           (bVar6 = bVar20 + bVar17, -1 < (char)((bVar6 ^ bVar17) & (bVar6 ^ bVar20)))) {
          bStack_3ab = true;
        }
        else {
          bVar6 = 0;
          bStack_3ab = false;
        }
        local_378 = (byte)local_2e4;
        if (local_394 >= 0x80) {
          local_378 = 0;
        }
        bStack_377 = local_394 < 0x80 && local_2d4 < 0x100;
        if (((bStack_3ab != bStack_377) || ((bStack_3ab != false && (bVar6 != local_378)))) &&
           (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_218,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_218,0);
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
        }
        if ((local_394 < 0x80) &&
           (bVar6 = bVar20 - bVar17, -1 < (char)((bVar20 ^ bVar17) & (bVar6 ^ bVar20)))) {
          bStack_3a9 = true;
        }
        else {
          bVar6 = 0;
          bStack_3a9 = false;
        }
        local_374 = (byte)local_2e0;
        if (local_394 >= 0x80) {
          local_374 = 0;
        }
        bStack_373 = local_394 < 0x80 && local_2d0 < 0x100;
        if (((bStack_3a9 != bStack_373) || ((bStack_3a9 != false && (bVar6 != local_374)))) &&
           (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_138,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_138,0);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
        }
        if (local_394 < 0x80) {
          if (bVar17 == 0) {
            cVar2 = '\0';
            bStack_3a7 = true;
          }
          else {
            uVar15 = (uint)(char)bVar20;
            uVar10 = (ulonglong)(local_3b0 & 0xff);
            if ((char)bVar20 < '\0') {
              uVar15 = (uint)(byte)-bVar20;
            }
            if ((char)bVar17 < '\0') {
              uVar10 = (ulonglong)(byte)-bVar17;
            }
            bVar6 = bVar20 >> 7 ^ 1;
            if (-1 < (char)bVar17) {
              bVar6 = bVar20 >> 7;
            }
            if ((uint)((bVar6 + 0x7f) / uVar10) < (uVar15 & 0xff)) goto LAB_141bd491d;
            cVar2 = bVar17 * bVar20;
            bStack_3a7 = true;
          }
        }
        else {
LAB_141bd491d:
          cVar2 = '\0';
          bStack_3a7 = false;
        }
        if (local_394 >= 0x80) {
          local_370 = '\0';
        }
        bStack_36f = local_394 < 0x80 && uVar14 < 0x100;
        if (((bStack_3a7 != bStack_36f) || ((bStack_3a7 != false && (cVar2 != local_370)))) &&
           (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_208,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_208);
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
        }
        if (((local_394 < 0x80) && (bVar17 != 0)) && ((bVar20 != 0x80 || (bVar17 != 0xff)))) {
          local_3a6 = (char)((longlong)(int)(char)bVar20 / (longlong)(int)(char)bVar17);
          bStack_3a5 = (int)((longlong)(int)(char)bVar20 / (longlong)(int)(char)bVar17) + 0x80U <
                       0x100;
        }
        else {
          local_3a6 = '\0';
          bStack_3a5 = false;
        }
        local_34c = (char)local_2f4;
        local_res10[0].Value = local_3a6;
        local_res10[0].bIsValid = bStack_3a5;
        if (local_394 >= 0x80) {
          local_34c = '\0';
        }
        bStack_34b = local_394 < 0x80 && local_2f4 + 0x80U < 0x100;
        if (((bStack_3a5 != bStack_34b) || ((bStack_3a5 != false && (local_3a6 != local_34c)))) &&
           (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          if (bStack_3a5) {
            TGuardedInt<signed_char>::GetChecked(local_res10,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1f8,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1f8);
          uVar13 = local_2e8;
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            uVar13 = local_2e8;
          }
        }
        if (((local_394 < 0x80) && (bVar17 != 0)) && ((bVar20 != 0x80 || (bVar17 != 0xff)))) {
          cVar2 = (char)((longlong)(int)(char)bVar20 % (longlong)(int)(char)bVar17);
          bStack_3a3 = (int)((longlong)(int)(char)bVar20 % (longlong)(int)(char)bVar17) + 0x80U <
                       0x100;
        }
        else {
          cVar2 = '\0';
          bStack_3a3 = false;
        }
        local_36c = (char)local_2f8;
        if (local_394 >= 0x80) {
          local_36c = '\0';
        }
        bStack_36b = local_394 < 0x80 && local_2f8 + 0x80U < 0x100;
        if (((bStack_3a3 != bStack_36b) || ((bStack_3a3 != false && (cVar2 != local_36c)))) &&
           (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1e8,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1e8,0);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
        }
        if ((((local_394 < 0x80) && (bVar17 < 8)) &&
            (iVar9 = (int)(char)bVar20, -0x80 >> (bVar17 & 0x1f) <= iVar9)) &&
           (iVar9 <= 0x7f >> (bVar17 & 0x1f))) {
          iVar9 = iVar9 << (bVar17 & 0x1f);
          bVar3 = iVar9 + 0x80U < 0x100;
          local_res20.bIsValid = bVar3;
          local_res20.Value = (schar)iVar9;
        }
        else {
          iVar9 = 0;
          local_res20.Value = '\0';
          local_res20.bIsValid = false;
          bVar3 = false;
        }
        local_res10[0] = local_res20;
        local_348 = (char)local_2f0;
        if (local_394 >= 0x80) {
          local_348 = '\0';
        }
        bStack_347 = local_394 < 0x80 && uVar13 < 0x100;
        if (((local_res20.bIsValid != bStack_347) ||
            ((local_res20.bIsValid != false && ((char)iVar9 != local_348)))) && (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          if (bVar3) {
            TGuardedInt<signed_char>::GetChecked(local_res10,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1d8,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1d8,0);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
        }
        if ((local_394 < 0x80) && (bVar17 < 8)) {
          iVar9 = (int)(char)bVar20 >> (bVar17 & 0x1f);
          bVar3 = iVar9 + 0x80U < 0x100;
          local_3a2.bIsValid = bVar3;
          local_3a2.Value = (schar)iVar9;
        }
        else {
          iVar9 = 0;
          bVar3 = false;
          local_3a2.Value = '\0';
          local_3a2.bIsValid = false;
        }
        local_res10[0] = local_3a2;
        local_344 = (char)local_2ec;
        if (local_394 >= 0x80) {
          local_344 = '\0';
        }
        bStack_343 = local_394 < 0x80 && uVar5 < 0x100;
        if (((local_3a2.bIsValid != bStack_343) ||
            ((local_3a2.bIsValid != false && ((char)iVar9 != local_344)))) && (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          if (bVar3) {
            TGuardedInt<signed_char>::GetChecked(local_res10,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1c8,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1c8,0);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar8 = local_res18;
      if (local_394 < 0x80) {
        if (((char)local_res18 == '\0') ||
           (local_3a0 = bVar20 + bVar17, (char)((local_3a0 ^ bVar20) & (local_3a0 ^ bVar17)) < '\0')
           ) {
          bVar3 = false;
          local_3a0 = 0;
          bStack_39f = false;
        }
        else {
          bVar3 = true;
          bStack_39f = true;
        }
        local_res10[0].Value = local_3a0;
        local_res10[0].bIsValid = bStack_39f;
        iVar9 = local_2e4;
        if ((int)local_3b0 >= 0x80) {
          iVar9 = 0;
        }
        bStack_33f = (int)local_3b0 < 0x80 && local_2e4 + 0x80U < 0x100;
        if (((bStack_39f != bStack_33f) || ((bStack_39f != false && (local_3a0 != (byte)iVar9)))) &&
           (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          if (bVar3) {
            TGuardedInt<signed_char>::GetChecked(local_res10,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1b8,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1b8,0);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
        }
        if (((char)local_res18 == '\0') ||
           (bVar6 = bVar20 - bVar17, (char)((bVar20 ^ bVar17) & (bVar6 ^ bVar20)) < '\0')) {
          bVar6 = 0;
          bStack_39d = false;
        }
        else {
          bStack_39d = true;
        }
        iVar9 = local_2e0;
        if ((int)local_3b0 >= 0x80) {
          iVar9 = 0;
        }
        bStack_363 = (int)local_3b0 < 0x80 && local_2e0 + 0x80U < 0x100;
        if (((bStack_39d != bStack_363) || ((bStack_39d != false && (bVar6 != (byte)iVar9)))) &&
           (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1a8,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1a8,0);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
        }
        local_30c.bIsValid = true;
        local_30c.Value = bVar20;
        TGuardedInt<signed_char>::operator*(&local_30c,SUB82(&local_308,0));
        local_res10[0] = local_308;
        iVar9 = local_2cc;
        if ((int)local_3b0 >= 0x80) {
          local_30a = 0;
          iVar9 = 0;
        }
        bStack_33b = (int)local_3b0 < 0x80 && local_2cc + 0x80U < 0x100;
        bVar3 = local_308.bIsValid;
        if (((bVar3 != bStack_33b) || ((bVar3 != false && (local_308.Value != (char)iVar9)))) &&
           (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          if (bVar3 != false) {
            TGuardedInt<signed_char>::GetChecked(local_res10,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_198,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_198);
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
        }
        if ((((char)local_res18 == '\0') || (bVar17 == 0)) || ((bVar20 == 0x80 && (bVar17 == 0xff)))
           ) {
          local_39c = '\0';
          bStack_39b = false;
        }
        else {
          local_39c = (char)((longlong)(int)(char)bVar20 / (longlong)(int)(char)bVar17);
          bStack_39b = (int)((longlong)(int)(char)bVar20 / (longlong)(int)(char)bVar17) + 0x80U <
                       0x100;
        }
        local_res10[0].Value = local_39c;
        local_res10[0].bIsValid = bStack_39b;
        iVar9 = local_2f4;
        if ((int)local_3b0 >= 0x80) {
          local_306 = 0;
          iVar9 = 0;
        }
        bStack_337 = (int)local_3b0 < 0x80 && local_2f4 + 0x80U < 0x100;
        if (((bStack_39b != bStack_337) || ((bStack_39b != false && (local_39c != (char)iVar9)))) &&
           (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          if (bStack_39b) {
            TGuardedInt<signed_char>::GetChecked(local_res10,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_188,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_188,0);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
        }
        if ((((char)local_res18 == '\0') || (bVar17 == 0)) || ((bVar20 == 0x80 && (bVar17 == 0xff)))
           ) {
          cVar2 = '\0';
          bVar3 = false;
          local_39a.Value = '\0';
          local_39a.bIsValid = false;
        }
        else {
          cVar2 = (char)((longlong)(int)(char)bVar20 % (longlong)(int)(char)bVar17);
          bVar3 = (int)((longlong)(int)(char)bVar20 % (longlong)(int)(char)bVar17) + 0x80U < 0x100;
          local_39a.bIsValid = bVar3;
          local_39a.Value = cVar2;
        }
        local_res10[0] = local_39a;
        iVar9 = local_2f8;
        if ((int)local_3b0 >= 0x80) {
          local_304 = 0;
          iVar9 = 0;
        }
        bStack_333 = (int)local_3b0 < 0x80 && local_2f8 + 0x80U < 0x100;
        if (((local_39a.bIsValid != bStack_333) ||
            ((local_39a.bIsValid != false && (cVar2 != (char)iVar9)))) && (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          if (bVar3) {
            TGuardedInt<signed_char>::GetChecked(local_res10,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_178,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_178,0);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
        }
        uVar8 = local_res18;
        cVar2 = (char)local_res18;
        if ((((cVar2 == '\0') || (7 < bVar17)) ||
            (iVar9 = (int)(char)bVar20, iVar9 < -0x80 >> (bVar17 & 0x1f))) ||
           (0x7f >> (bVar17 & 0x1f) < iVar9)) {
          iVar9 = 0;
          bStack_3b3 = false;
        }
        else {
          iVar9 = iVar9 << (bVar17 & 0x1f);
          bStack_3b3 = iVar9 + 0x80U < 0x100;
        }
        iVar16 = local_2f0;
        if ((int)local_3b0 >= 0x80) {
          local_302 = 0;
          iVar16 = 0;
        }
        bStack_35f = (int)local_3b0 < 0x80 && local_2e8 < 0x100;
        if (((bStack_3b3 != bStack_35f) || ((bStack_3b3 != false && ((char)iVar9 != (char)iVar16))))
           && (local_3b8 < 100)) {
          local_3b8 = local_3b8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_168,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
        if ((cVar2 == '\0') || (7 < bVar17)) {
          iVar9 = 0;
          bStack_397 = false;
        }
        else {
          iVar9 = (int)(char)bVar20 >> (bVar17 & 0x1f);
          bStack_397 = iVar9 + 0x80U < 0x100;
        }
        local_35c = (char)local_2ec;
        if ((int)local_3b0 >= 0x80) {
          local_300 = 0;
          local_35c = '\0';
        }
        bStack_35b = (int)local_3b0 < 0x80 && uVar5 < 0x100;
        if (bStack_397 != bStack_35b) {
LAB_141bd582b:
          if (local_3b8 < 100) {
            local_3b8 = local_3b8 + 1;
            pcVar1 = *(code **)(param_1->_padding_ + 0x28);
            ::FString::PrintfImpl
                      (&local_158,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
            (*pcVar1)(param_1,&local_158,0);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
              local_res10[0].Value = local_394 < (int)local_3b0;
              goto LAB_141bd58f0;
            }
          }
          goto LAB_141bd58d8;
        }
        if (bStack_397 == false) goto LAB_141bd58d8;
        if ((char)iVar9 != local_35c) goto LAB_141bd582b;
        local_res10[0].Value = local_394 < (int)local_3b0;
LAB_141bd58f0:
        if ((cVar2 == '\0') || ((char)bVar17 <= (char)bVar20)) goto LAB_141bd58fe;
        bVar3 = true;
LAB_141bd5906:
        bVar4 = local_394 < (int)local_3b0;
        if (0x7f < (int)local_3b0) goto LAB_141bd590c;
      }
      else {
LAB_141bd58d8:
        cVar2 = (char)uVar8;
        local_res10[0].Value = local_394 < (int)local_3b0;
        if (local_394 < 0x80) goto LAB_141bd58f0;
LAB_141bd58fe:
        bVar3 = false;
        if (local_394 < 0x80) goto LAB_141bd5906;
LAB_141bd590c:
        bVar4 = false;
      }
      sVar12 = local_394 < (int)local_3b0;
      if ((bVar3 != bVar4) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_148,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_148,0);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = (bool)sVar12;
      if (((local_394 < 0x80) && ((int)local_3b0 < 0x80)) && ((char)bVar20 < (char)bVar17)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
        if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
          bVar3 = false;
        }
      }
      if ((bVar4 != bVar3) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_58,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_58,0);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = local_394 <= (int)local_3b0;
      if (((local_394 < 0x80) && ((char)local_res18 != '\0')) && ((char)bVar20 <= (char)bVar17)) {
        bVar4 = true;
LAB_141bd5a32:
        bVar18 = bVar3;
        if (0x7f < (int)local_3b0) goto LAB_141bd5a38;
      }
      else {
        bVar4 = false;
        if (local_394 < 0x80) goto LAB_141bd5a32;
LAB_141bd5a38:
        bVar18 = false;
      }
      if ((bVar4 != bVar18) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_128,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_128,0);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
      }
      bVar4 = bVar3;
      if (((local_394 < 0x80) && ((int)local_3b0 < 0x80)) && ((char)bVar20 <= (char)bVar17)) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
        if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
          bVar4 = false;
        }
      }
      if ((bVar18 != bVar4) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_118,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_118,0);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((char)local_res18 != '\0')) && ((char)bVar17 < (char)bVar20)) {
        bVar4 = true;
LAB_141bd5b71:
        bVar18 = (int)local_3b0 < local_394;
        if (0x7f < (int)local_3b0) goto LAB_141bd5b80;
      }
      else {
        bVar4 = false;
        if (local_394 < 0x80) goto LAB_141bd5b71;
LAB_141bd5b80:
        bVar18 = false;
      }
      bVar19 = (int)local_3b0 < local_394;
      if ((bVar4 != bVar18) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_108,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_108,0);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      bVar4 = bVar19;
      if (((local_394 < 0x80) && ((int)local_3b0 < 0x80)) && ((char)bVar17 < (char)bVar20)) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
        if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
          bVar4 = false;
        }
      }
      if ((bVar18 != bVar4) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_f8,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_f8,0);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((char)local_res18 != '\0')) && ((char)bVar17 <= (char)bVar20)) {
        bVar4 = true;
LAB_141bd5cdd:
        bVar18 = (int)local_3b0 <= local_394;
        if (0x7f < (int)local_3b0) goto LAB_141bd5cef;
      }
      else {
        bVar4 = false;
        if (local_394 < 0x80) goto LAB_141bd5cdd;
LAB_141bd5cef:
        bVar18 = false;
      }
      bVar11 = (int)local_3b0 <= local_394;
      if ((bVar4 != bVar18) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_e8,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_e8,0);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      bVar4 = bVar11;
      if (((local_394 < 0x80) && ((int)local_3b0 < 0x80)) && ((char)bVar17 <= (char)bVar20)) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
        if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
          bVar4 = false;
        }
      }
      if ((bVar18 != bVar4) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_d8,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((char)local_res18 != '\0')) && ((char)bVar17 <= (char)bVar20)) {
        cVar7 = '\0';
        cVar2 = local_res10[0].Value;
LAB_141bd5e44:
        if (0x7f < (int)local_3b0) goto LAB_141bd5e4a;
      }
      else {
        cVar7 = '\x01';
        cVar2 = sVar12;
        if (local_394 < 0x80) goto LAB_141bd5e44;
LAB_141bd5e4a:
        cVar2 = '\x01';
      }
      if ((cVar7 != cVar2) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_c8,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_c8,0);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((int)local_3b0 < 0x80)) && ((char)bVar17 <= (char)bVar20)) {
        cVar2 = '\0';
        sVar12 = local_res10[0].Value;
      }
      else {
        cVar2 = '\x01';
        if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
          sVar12 = '\x01';
        }
      }
      if ((cVar2 != sVar12) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_b8,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_b8,0);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((char)local_res18 != '\0')) && ((char)bVar17 < (char)bVar20)) {
        bVar4 = false;
LAB_141bd5fa3:
        bVar18 = bVar3;
        if (0x7f < (int)local_3b0) goto LAB_141bd5fa9;
      }
      else {
        bVar4 = true;
        if (local_394 < 0x80) goto LAB_141bd5fa3;
LAB_141bd5fa9:
        bVar18 = true;
      }
      if ((bVar4 != bVar18) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_a8,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((int)local_3b0 < 0x80)) && ((char)bVar17 < (char)bVar20)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
        if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
          bVar3 = true;
        }
      }
      if ((bVar4 != bVar3) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_98,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_98,0);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((char)local_res18 != '\0')) && ((char)bVar20 <= (char)bVar17)) {
        bVar3 = false;
LAB_141bd60fc:
        bVar4 = bVar19;
        if (0x7f < (int)local_3b0) goto LAB_141bd6102;
      }
      else {
        bVar3 = true;
        if (local_394 < 0x80) goto LAB_141bd60fc;
LAB_141bd6102:
        bVar4 = true;
      }
      if ((bVar3 != bVar4) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_88,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_88,0);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((int)local_3b0 < 0x80)) && ((char)bVar20 <= (char)bVar17)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
          bVar19 = true;
        }
      }
      if ((bVar3 != bVar19) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_78,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_78,0);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((char)local_res18 != '\0')) && ((char)bVar20 < (char)bVar17)) {
        bVar3 = false;
LAB_141bd6247:
        bVar4 = bVar11;
        if (0x7f < (int)local_3b0) goto LAB_141bd624d;
      }
      else {
        bVar3 = true;
        if (local_394 < 0x80) goto LAB_141bd6247;
LAB_141bd624d:
        bVar4 = true;
      }
      if ((bVar3 != bVar4) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_68,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_68,0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      if (((local_394 < 0x80) && ((int)local_3b0 < 0x80)) && ((char)bVar20 < (char)bVar17)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if ((0x7f < local_394) || (0x7f < (int)local_3b0)) {
          bVar11 = true;
        }
      }
      if ((bVar3 != bVar11) && (local_3b8 < 100)) {
        local_3b8 = local_3b8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_2c8,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_2c8,0);
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
      }
      local_3b0 = local_3b0 + 1;
    } while ((int)local_3b0 < 0x81);
    local_394 = local_394 + 1;
    if (0x80 < local_394) {
      if (100 < local_3b8) {
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_2c8,L"Too many errors (%d), stopped reporting after %d instances.\n");
        (*pcVar1)(param_1,&local_2c8,0);
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
      }
      return local_3b8 == 0;
    }
  } while( true );
}

// DoGuardedIntTestForType<unsigned_char> @ 141bd63e0

/* WARNING: Removing unreachable block (ram,0x000141bd6f2f) */

bool __cdecl
`anonymous_namespace'::DoGuardedIntTestForType<unsigned_char>(FAutomationTestBase *param_1)

{
  code *pcVar1;
  byte bVar2;
  uchar uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  ulonglong extraout_RAX_04;
  ulonglong extraout_RAX_05;
  ulonglong extraout_RAX_06;
  char cVar8;
  char cVar9;
  uchar uVar10;
  uint uVar11;
  byte bVar12;
  bool bVar13;
  ushort uVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  undefined4 uVar18;
  FAutomationTestBase *pFVar19;
  byte bVar20;
  uint uVar21;
  ulonglong uVar22;
  byte bVar23;
  uint uVar24;
  ulonglong uVar25;
  bool bVar26;
  ushort local_res10;
  TGuardedInt<unsigned_char> local_res18 [4];
  bool local_res20;
  uint local_3d8;
  byte local_3d2;
  bool bStack_3d1;
  TGuardedInt<unsigned_char> local_3d0;
  char cStack_3cd;
  TGuardedInt<unsigned_char> local_3cc;
  TGuardedInt<unsigned_char> local_3ca;
  ushort local_3c6;
  bool bStack_3c3;
  uchar local_3c0;
  bool bStack_3bf;
  TGuardedInt<unsigned_char> local_3b8 [4];
  undefined2 local_3b0;
  undefined2 local_3ac;
  undefined2 local_3a8;
  undefined2 local_3a4;
  undefined2 local_3a0;
  undefined2 local_39c;
  undefined2 local_39a;
  undefined2 local_398;
  undefined2 local_396;
  undefined2 local_394;
  undefined2 local_392;
  undefined2 local_390;
  undefined2 local_38c;
  undefined2 local_388;
  undefined2 local_384;
  undefined1 local_380;
  undefined2 local_37c;
  undefined2 local_378;
  undefined2 local_374;
  undefined2 local_370;
  undefined2 local_36c;
  undefined1 local_368;
  undefined2 local_364;
  undefined2 local_360;
  undefined2 local_35c;
  undefined2 local_358;
  undefined2 local_354;
  undefined2 local_350;
  undefined2 local_34c;
  undefined2 local_348;
  undefined2 local_344;
  undefined2 local_340;
  uint local_33c;
  undefined2 local_338;
  uint local_334;
  uint local_330;
  undefined1 local_32c;
  uint local_328;
  undefined2 local_324;
  undefined2 local_322;
  undefined2 local_320;
  undefined2 local_31e;
  undefined2 local_31c;
  undefined2 local_31a;
  undefined2 local_318;
  undefined2 local_316;
  undefined2 local_314;
  undefined2 local_312;
  undefined2 local_310;
  undefined2 local_30e;
  undefined2 local_30c;
  undefined2 local_30a;
  undefined2 local_308;
  undefined2 local_306;
  undefined2 local_304;
  undefined2 local_302;
  byte local_300;
  bool bStack_2ff;
  undefined2 local_2fc;
  undefined2 local_2fa;
  undefined2 local_2f8;
  undefined2 local_2f6;
  undefined4 local_2f4;
  undefined4 local_2f0;
  uint local_2ec;
  uint local_2e8;
  uint local_2e4;
  undefined4 local_2e0;
  uint local_2dc;
  uint local_2d8;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_3d8 = 0;
  uVar22 = 0;
  do {
    uVar21 = (uint)uVar22;
    uVar25 = 0;
    uVar6 = (ulonglong)-uVar21;
    if ((int)-uVar21 < 0) {
      uVar6 = uVar22;
    }
    local_2d8 = (uint)uVar6;
    local_32c = local_2d8 < 0x100;
    do {
      uVar24 = (uint)uVar25;
      bVar23 = (byte)uVar25;
      _local_300 = CONCAT11(uVar24 < 0x100,bVar23);
      bVar20 = (byte)uVar22;
      if (((uVar21 < 0x100) && (uVar24 == 0)) && (uVar6 = uVar22 & 0xff, (uint)uVar6 != uVar21)) {
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_2c0,L"GetChecked A=%d");
        uVar6 = (*pcVar1)(param_1,&local_2c0,0);
        if (local_2c0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_141bd649a;
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        local_330 = 0xffffff00;
        local_334 = 0xffffff00;
LAB_141bd64d3:
        local_33c = uVar21 << (bVar23 & 0x1f);
        local_328 = uVar21 >> (bVar23 & 0x1f);
        uVar6 = (ulonglong)local_328;
      }
      else {
LAB_141bd649a:
        local_330 = 0xffffff00;
        local_334 = 0xffffff00;
        if (uVar24 != 0) {
          uVar6 = uVar22 / uVar25;
          local_334 = (uint)(uVar22 % uVar25);
          local_330 = (uint)uVar6;
        }
        local_33c = 0xffffff00;
        local_328 = 0xffffff00;
        if (uVar24 < 8) goto LAB_141bd64d3;
      }
      uVar11 = local_330;
      cVar16 = (char)((ushort)_local_300 >> 8);
      if ((uVar21 < 0x100) && (cVar16 != '\0')) {
        uVar5 = uVar21 + uVar24;
        uVar6 = (ulonglong)uVar5;
        bVar2 = (byte)uVar5;
        if (bVar2 < bVar20) {
          uVar6 = (ulonglong)(uint3)(uVar5 >> 8) << 8;
          bVar2 = 0;
          cVar8 = '\0';
        }
        else {
          cVar8 = '\x01';
        }
      }
      else {
        bVar2 = 0;
        cVar8 = '\0';
      }
      local_2ec = uVar24 + uVar21;
      local_res18[0].Value = local_2ec < 0x100;
      local_2f4 = (undefined4)CONCAT71((int7)(uVar6 >> 8),local_res18[0].Value);
      local_360 = CONCAT11(local_res18[0].Value,(char)local_2ec);
      if ((0xff < uVar21) || (uVar5 = local_2ec, 0xff < uVar24)) {
        local_2fc = 0;
        local_360 = 0;
        uVar5 = 0;
      }
      uVar7 = 0;
      if (((cVar8 != (char)((ushort)local_360 >> 8)) || ((cVar8 != '\0' && (bVar2 != (byte)uVar5))))
         && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_2b0,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        uVar7 = (*pcVar1)(param_1,&local_2b0,0);
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
          uVar7 = extraout_RAX;
        }
      }
      local_2e8 = uVar21 - uVar24;
      if ((uVar21 < 0x100) && (cVar16 != '\0')) {
        bVar2 = bVar20 - bVar23;
        uVar7 = 0;
        if (bVar20 < bVar23) {
          bVar2 = 0;
        }
        else {
          uVar7 = 0x100;
        }
        local_res10 = (ushort)bVar2 | (ushort)uVar7;
      }
      else {
        local_res10 = 0;
      }
      local_res20 = local_2e8 < 0x100;
      local_2f0 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res20);
      local_35c = CONCAT11(local_res20,(char)local_2e8);
      if ((0xff < uVar21) || (uVar5 = local_2e8, 0xff < uVar24)) {
        local_2fa = 0;
        local_35c = 0;
        uVar5 = 0;
      }
      cVar8 = (char)(local_res10 >> 8);
      if (((cVar8 != (char)((ushort)local_35c >> 8)) ||
          ((cVar8 != '\0' && ((char)local_res10 != (char)uVar5)))) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_2a0,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1);
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
      }
      if ((uVar21 < 0x100) && (cVar16 != '\0')) {
        if (bVar23 == 0) {
          uVar6 = 0;
          bVar26 = true;
          uVar14 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar24 & 0xff) * (uVar21 & 0xff) & 0xff);
          bVar26 = (uint)(uVar6 / (uVar25 & 0xff)) == (uVar21 & 0xff);
          uVar14 = (ushort)bVar26;
        }
        bVar2 = (byte)uVar6;
        if (!bVar26) {
          bVar2 = 0;
        }
        local_res10 = (ushort)bVar2 | uVar14 << 8;
      }
      else {
        local_res10 = 0;
      }
      local_2e4 = uVar24 * uVar21;
      cVar8 = (char)local_2e4;
      bVar26 = local_2e4 < 0x100;
      local_358 = CONCAT11(bVar26,cVar8);
      if ((0xff < uVar21) || (0xff < uVar24)) {
        local_2f8 = 0;
        cVar8 = '\0';
        local_358 = 0;
      }
      cVar9 = (char)(local_res10 >> 8);
      local_368 = bVar26;
      if ((cVar9 == (char)((ushort)local_358 >> 8)) &&
         ((cVar9 == '\0' || ((char)local_res10 == cVar8)))) {
        pFVar19 = (FAutomationTestBase *)(ulonglong)local_3d8;
      }
      else {
        pFVar19 = (FAutomationTestBase *)(ulonglong)local_3d8;
        if ((int)local_3d8 < 100) {
          local_3d8 = local_3d8 + 1;
          pFVar19 = (FAutomationTestBase *)(ulonglong)local_3d8;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_290,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1);
          if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.Data.AllocatorInstance.Data);
          }
        }
      }
      if (((uVar21 < 0x100) && (cVar16 != '\0')) && (bVar23 != 0)) {
        uVar6 = (uVar22 & 0xff) / (uVar25 & 0xff);
        local_res10 = 0x100;
        if (0xff < (uint)uVar6) {
          local_res10 = 0;
        }
        local_res10 = local_res10 | (ushort)uVar6;
      }
      else {
        local_res10 = 0;
      }
      cVar8 = (char)uVar11;
      bVar13 = uVar11 < 0x100;
      local_354 = CONCAT11(bVar13,cVar8);
      if ((0xff < uVar21) || (0xff < uVar24)) {
        local_2f6 = 0;
        cVar8 = '\0';
        local_354 = 0;
      }
      cVar9 = (char)(local_res10 >> 8);
      local_380 = bVar13;
      if (((cVar9 != (char)((ushort)local_354 >> 8)) ||
          ((cVar9 != '\0' && ((char)local_res10 != cVar8)))) && ((int)pFVar19 < 100)) {
        local_3d8 = (int)pFVar19 + 1;
        pFVar19 = (FAutomationTestBase *)(ulonglong)local_3d8;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_280,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_280,0);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
      }
      if (((uVar21 < 0x100) && (cVar16 != '\0')) && (bVar23 != 0)) {
        uVar6 = (uVar22 & 0xff) % (uVar25 & 0xff);
        local_res10 = 0x100;
        if (0xff < (uint)uVar6) {
          local_res10 = 0;
        }
        local_res10 = local_res10 | (ushort)uVar6;
      }
      else {
        local_res10 = 0;
      }
      bVar15 = local_334 < 0x100;
      local_2dc = (uint)bVar15;
      local_350 = CONCAT11(bVar15,(char)local_334);
      if ((0xff < uVar21) || (uVar11 = local_334, 0xff < uVar24)) {
        local_324 = 0;
        local_350 = 0;
        uVar11 = 0;
      }
      cVar8 = (char)(local_res10 >> 8);
      if (((cVar8 != (char)((ushort)local_350 >> 8)) ||
          ((cVar8 != '\0' && ((char)local_res10 != (char)uVar11)))) && ((int)pFVar19 < 100)) {
        local_3d8 = (int)pFVar19 + 1;
        pFVar19 = (FAutomationTestBase *)(ulonglong)local_3d8;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_270,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_270,0);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
      }
      if (((uVar21 < 0x100) && (cVar16 != '\0')) && (bVar23 < 8)) {
        bVar2 = bVar20 << (bVar23 & 0x1f);
        local_3c6 = (ushort)bVar2;
        uVar14 = 0;
        if (bVar2 >> (bVar23 & 0x1f) == bVar20) {
          uVar14 = 0x100;
        }
        else {
          local_3c6 = 0;
        }
        local_3c6 = local_3c6 | uVar14;
      }
      else {
        local_3c6 = 0;
      }
      bStack_3c3 = local_33c < 0x100;
      local_34c = CONCAT11(bStack_3c3,(char)local_33c);
      if ((0xff < uVar21) || (uVar11 = local_33c, 0xff < uVar24)) {
        local_322 = 0;
        local_34c = 0;
        uVar11 = 0;
      }
      cVar8 = (char)(local_3c6 >> 8);
      if (((cVar8 != (char)((ushort)local_34c >> 8)) ||
          ((cVar8 != '\0' && ((char)local_3c6 != (char)uVar11)))) && ((int)pFVar19 < 100)) {
        local_3d8 = (int)pFVar19 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_260,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_260);
        pFVar19 = param_1;
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
        }
      }
      if (((uVar21 < 0x100) && (cVar16 != '\0')) && (bVar23 < 8)) {
        local_3b8[0] = (TGuardedInt<unsigned_char>)(bVar20 >> (bVar23 & 0x1f) | 0x100);
      }
      else {
        local_3b8[0].Value = '\0';
        local_3b8[0].bIsValid = false;
      }
      uVar3 = (uchar)local_328;
      bVar17 = local_328 < 0x100;
      uVar18 = (undefined4)CONCAT71((int7)((ulonglong)pFVar19 >> 8),bVar17);
      local_348 = CONCAT11(bVar17,uVar3);
      if ((0xff < uVar21) || (0xff < uVar24)) {
        local_320 = 0;
        uVar3 = '\0';
        local_348 = 0;
      }
      local_2e0 = uVar18;
      if (((local_3b8[0].bIsValid != SUB21((ushort)local_348 >> 8,0)) ||
          ((local_3b8[0].bIsValid != false && (local_3b8[0].Value != uVar3)))) &&
         ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_250,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1,&local_250);
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
      }
      if (uVar21 == 0) {
        local_338 = 0x100;
        if (bVar20 == 0) {
          local_344 = 0x100;
        }
        else {
          local_344 = 0;
        }
        if (((char)((ushort)local_344 >> 8) != '\x01') && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_240,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_240,0);
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
        }
LAB_141bd6faf:
        uVar3 = (uchar)local_2d8;
        local_3b8[0] = (TGuardedInt<unsigned_char>)((ushort)uVar22 & 0xff | 0x100);
        local_340 = CONCAT11(local_32c,uVar3);
        cVar8 = '\x01';
      }
      else {
        if (uVar21 < 0x100) goto LAB_141bd6faf;
        local_340 = 0;
        uVar3 = '\0';
        cVar8 = '\0';
        local_3b8[0].Value = '\0';
        local_3b8[0].bIsValid = false;
        local_31e = 0;
      }
      if (((cVar8 != (char)((ushort)local_340 >> 8)) ||
          ((cVar8 != '\0' && (local_3b8[0].Value != uVar3)))) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_150,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
        (*pcVar1)(param_1);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
      if (uVar24 < 0x100) {
        if (uVar21 < 0x100) {
          bVar2 = bVar20 + bVar23;
          uVar11 = local_2ec;
          if (bVar2 < bVar20) {
            local_39a = 0;
            bVar2 = 0;
            local_37c = CONCAT11((char)local_2f4,(char)local_2ec);
          }
          else {
            local_39a = CONCAT11(1,bVar2);
            local_37c = CONCAT11((char)local_2f4,(char)local_2ec);
          }
        }
        else {
          local_37c = 0;
          uVar11 = 0;
          local_39a = 0;
          bVar2 = 0;
          local_31c = 0;
          local_2f4 = 0;
        }
        cVar8 = (char)((ushort)local_39a >> 8);
        if (((cVar8 != (char)((ushort)local_37c >> 8)) ||
            ((cVar8 != '\0' && (bVar2 != (byte)uVar11)))) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_230,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1);
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
        }
        if (uVar21 < 0x100) {
          uVar11 = local_2e8;
          if (bVar20 < bVar23) {
            local_398 = 0;
            cVar8 = '\0';
            local_378 = CONCAT11((char)local_2f0,(char)local_2e8);
          }
          else {
            cVar8 = bVar20 - bVar23;
            local_378 = CONCAT11((char)local_2f0,(char)local_2e8);
            local_398 = CONCAT11(1,cVar8);
          }
        }
        else {
          local_378 = 0;
          uVar11 = 0;
          local_398 = 0;
          cVar8 = '\0';
          local_31a = 0;
          local_2f0 = 0;
        }
        cVar9 = (char)((ushort)local_398 >> 8);
        if (((cVar9 != (char)((ushort)local_378 >> 8)) ||
            ((cVar9 != '\0' && (cVar8 != (char)uVar11)))) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_220,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1);
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
        }
        if (uVar21 < 0x100) {
          cVar8 = (char)local_2e4;
          if (bVar23 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulonglong)((uVar24 & 0xff) * (uVar21 & 0xff) & 0xff);
            if ((uint)(uVar6 / (uVar25 & 0xff)) != (uVar21 & 0xff)) {
              local_396 = 0;
              cVar9 = '\0';
              local_374 = CONCAT11(bVar26,cVar8);
              goto LAB_141bd73e7;
            }
          }
          cVar9 = (char)uVar6;
          local_396 = CONCAT11(1,cVar9);
          local_374 = CONCAT11(bVar26,cVar8);
        }
        else {
          local_374 = 0;
          cVar8 = '\0';
          local_396 = 0;
          cVar9 = '\0';
          local_318 = 0;
        }
LAB_141bd73e7:
        cVar4 = (char)((ushort)local_396 >> 8);
        if (((cVar4 != (char)((ushort)local_374 >> 8)) || ((cVar4 != '\0' && (cVar9 != cVar8)))) &&
           ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_210,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1);
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
        }
        if (uVar21 < 0x100) {
          uVar3 = (uchar)local_330;
          if (bVar23 == 0) {
            local_364 = CONCAT11(bVar13,uVar3);
            uVar11 = local_330;
            goto LAB_141bd7519;
          }
          uVar6 = (uVar22 & 0xff) / (uVar25 & 0xff);
          local_3d0.Value = (uchar)uVar6;
          uVar11 = (uint)uVar6;
          local_3d0.bIsValid = uVar11 < 0x100;
          local_3b8[0] = local_3d0;
          local_364 = CONCAT11(bVar13,uVar3);
          local_3d0.bIsValid = uVar11 < 0x100;
        }
        else {
          local_316 = 0;
          uVar11 = 0;
          local_364 = 0;
LAB_141bd7519:
          uVar3 = (uchar)uVar11;
          local_3d0.bIsValid = false;
          local_3d0.Value = '\0';
          local_3b8[0].Value = '\0';
          local_3b8[0].bIsValid = false;
        }
        if (((local_3d0.bIsValid != SUB21((ushort)local_364 >> 8,0)) ||
            ((local_3d0.bIsValid != false && (local_3d0.Value != uVar3)))) && ((int)local_3d8 < 100)
           ) {
          local_3d8 = local_3d8 + 1;
          if (local_3d0.bIsValid) {
            TGuardedInt<unsigned_char>::GetChecked(local_3b8,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_200,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_200,0);
          uVar18 = local_2e0;
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
            uVar18 = local_2e0;
          }
        }
        if (uVar21 < 0x100) {
          cVar8 = (char)local_334;
          if (bVar23 == 0) {
            local_3a8 = 0;
            uVar6 = 0;
            local_370 = CONCAT11((char)local_2dc,cVar8);
          }
          else {
            uVar6 = (uVar22 & 0xff) % (uVar25 & 0xff);
            local_370 = CONCAT11((char)local_2dc,cVar8);
            local_3a8 = CONCAT11((uint)uVar6 < 0x100,(char)uVar6);
          }
        }
        else {
          local_370 = 0;
          cVar8 = '\0';
          local_3a8 = 0;
          uVar6 = 0;
          local_314 = 0;
        }
        cVar9 = (char)((ushort)local_3a8 >> 8);
        if (((cVar9 != (char)((ushort)local_370 >> 8)) ||
            ((cVar9 != '\0' && ((char)uVar6 != cVar8)))) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1f0,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1f0,0);
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
        }
        if (uVar21 < 0x100) {
          bVar2 = (byte)local_33c;
          if (7 < bVar23) {
            local_3a4 = CONCAT11(bStack_3c3,bVar2);
            uVar11 = local_33c;
            goto LAB_141bd77c8;
          }
          local_3a4 = CONCAT11(bStack_3c3,bVar2);
          bVar12 = bVar20 << (bVar23 & 0x1f);
          if (bVar12 >> (bVar23 & 0x1f) != bVar20) goto LAB_141bd77d0;
          cStack_3cd = '\x01';
        }
        else {
          local_312 = 0;
          local_3a4 = 0;
          uVar11 = 0;
LAB_141bd77c8:
          bVar2 = (byte)uVar11;
LAB_141bd77d0:
          bVar12 = 0;
          cStack_3cd = '\0';
        }
        if (((cStack_3cd != (char)((ushort)local_3a4 >> 8)) ||
            ((cStack_3cd != '\0' && (bVar12 != bVar2)))) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1e0,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1e0,0);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
        }
        if (uVar21 < 0x100) {
          uVar11 = local_328;
          if (7 < bVar23) {
            local_36c = CONCAT11((char)uVar18,(char)local_328);
            goto LAB_141bd790b;
          }
          bVar2 = bVar20 >> (bVar23 & 0x1f);
          local_36c = CONCAT11((char)uVar18,(char)local_328);
          local_394 = CONCAT11(1,bVar2);
        }
        else {
          local_310 = 0;
          local_36c = 0;
          uVar11 = 0;
LAB_141bd790b:
          bVar2 = 0;
          local_394 = 0;
        }
        cVar8 = (char)((ushort)local_394 >> 8);
        if (((cVar8 != (char)((ushort)local_36c >> 8)) ||
            ((cVar8 != '\0' && (bVar2 != (byte)uVar11)))) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1d0,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1d0,0);
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
        }
      }
      if (uVar21 < 0x100) {
        bVar2 = (byte)local_2ec;
        local_3ac = CONCAT11(local_res18[0].Value,bVar2);
        if ((cVar16 == '\0') || (bVar12 = bVar20 + bVar23, bVar12 < bVar20)) {
          bVar12 = 0;
          local_392 = 0;
        }
        else {
          local_392 = CONCAT11(1,bVar12);
        }
        if (0xff < uVar24) {
          local_30e = 0;
          bVar2 = 0;
          local_3ac = 0;
        }
        cVar8 = (char)((ushort)local_392 >> 8);
        if (((cVar8 != (char)((ushort)local_3ac >> 8)) || ((cVar8 != '\0' && (bVar12 != bVar2)))) &&
           ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1c0,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_1c0,0);
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
        }
        cVar8 = (char)local_2e8;
        local_3a0 = CONCAT11(local_res20,cVar8);
        if ((cVar16 == '\0') || (bVar20 < bVar23)) {
          cVar9 = '\0';
          local_390 = 0;
        }
        else {
          cVar9 = bVar20 - bVar23;
          local_390 = CONCAT11(1,cVar9);
        }
        if (0xff < uVar24) {
          local_30c = 0;
          cVar8 = '\0';
          local_3a0 = 0;
        }
        cVar4 = (char)((ushort)local_390 >> 8);
        if (((cVar4 != (char)((ushort)local_3a0 >> 8)) || ((cVar4 != '\0' && (cVar9 != cVar8)))) &&
           ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1b0,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1);
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
        }
        if (cVar16 == '\0') {
LAB_141bd7ca1:
          bVar26 = false;
          uVar6 = 0;
          local_3c0 = '\0';
          bStack_3bf = false;
        }
        else if (bVar23 == 0) {
          uVar6 = 0;
          bVar26 = true;
          local_3c0 = '\0';
          bStack_3bf = true;
        }
        else {
          uVar11 = (uVar24 & 0xff) * (uVar21 & 0xff);
          uVar6 = (ulonglong)(uVar11 & 0xff);
          if ((uint)(uVar6 / (uVar25 & 0xff)) != (uVar21 & 0xff)) goto LAB_141bd7ca1;
          bVar26 = true;
          local_3c0 = (uchar)uVar11;
          bStack_3bf = true;
        }
        local_res18[0].Value = local_3c0;
        local_res18[0].bIsValid = bStack_3bf;
        local_38c = CONCAT11(local_368,(char)local_2e4);
        uVar11 = local_2e4;
        if (0xff < uVar24) {
          local_30a = 0;
          local_38c = 0;
          uVar11 = 0;
        }
        if (((bStack_3bf != (bool)(char)((ushort)local_38c >> 8)) ||
            ((bStack_3bf != false && ((char)uVar6 != (char)uVar11)))) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          if (bVar26) {
            TGuardedInt<unsigned_char>::GetChecked(local_res18,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_1a0,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1);
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
        }
        if ((cVar16 == '\0') || (bVar23 == 0)) {
          local_3cc.bIsValid = false;
          local_3cc.Value = '\0';
          local_res18[0].Value = '\0';
          local_res18[0].bIsValid = false;
        }
        else {
          uVar6 = (uVar22 & 0xff) / (uVar25 & 0xff);
          local_3cc.Value = (uchar)uVar6;
          uVar11 = (uint)uVar6;
          local_3cc.bIsValid = uVar11 < 0x100;
          local_res18[0] = local_3cc;
          local_3cc.bIsValid = uVar11 < 0x100;
        }
        local_388 = CONCAT11(local_380,(undefined1)local_330);
        uVar11 = local_330;
        if (0xff < uVar24) {
          local_308 = 0;
          local_388 = 0;
          uVar11 = 0;
        }
        if (((local_3cc.bIsValid != (bool)(char)((ushort)local_388 >> 8)) ||
            ((local_3cc.bIsValid != false && (local_3cc.Value != (uchar)uVar11)))) &&
           ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          if (local_3cc.bIsValid) {
            TGuardedInt<unsigned_char>::GetChecked(local_res18,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_190,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_190,0);
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
        }
        if ((cVar16 == '\0') || (bVar23 == 0)) {
          local_3ca.bIsValid = false;
          uVar6 = 0;
          local_res18[0].Value = '\0';
          local_res18[0].bIsValid = false;
        }
        else {
          uVar6 = (uVar22 & 0xff) % (uVar25 & 0xff);
          local_3ca.bIsValid = (uint)uVar6 < 0x100;
          local_3ca.Value = (uchar)uVar6;
          local_res18[0] = local_3ca;
          local_3ca.bIsValid = (uint)uVar6 < 0x100;
        }
        cVar8 = (char)local_334;
        local_384 = CONCAT11(bVar15,cVar8);
        if (0xff < uVar24) {
          local_306 = 0;
          cVar8 = '\0';
          local_384 = 0;
        }
        if (((local_3ca.bIsValid != SUB21((ushort)local_384 >> 8,0)) ||
            ((local_3ca.bIsValid != false && ((char)uVar6 != cVar8)))) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          if (local_3ca.bIsValid) {
            TGuardedInt<unsigned_char>::GetChecked(local_res18,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_180,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1,&local_180,0);
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
        }
        if (((cVar16 == '\0') || (7 < bVar23)) ||
           (local_3d2 = bVar20 << (bVar23 & 0x1f), local_3d2 >> (bVar23 & 0x1f) != bVar20)) {
          bVar26 = false;
          local_3d2 = 0;
          bStack_3d1 = false;
        }
        else {
          bVar26 = true;
          bStack_3d1 = true;
        }
        local_res18[0].Value = local_3d2;
        local_res18[0].bIsValid = bStack_3d1;
        bVar2 = (byte)local_33c;
        if (uVar24 >= 0x100) {
          local_304 = 0;
          bVar2 = 0;
        }
        bStack_3c3 = uVar24 < 0x100 && bStack_3c3;
        if (((bStack_3d1 != bStack_3c3) || ((bStack_3d1 != false && (local_3d2 != bVar2)))) &&
           ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          if (bVar26) {
            TGuardedInt<unsigned_char>::GetChecked(local_res18,'\0');
          }
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_170,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
          (*pcVar1)(param_1);
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
        }
        local_3b0 = CONCAT11(bVar17,(char)local_328);
        if ((cVar16 == '\0') || (7 < bVar23)) {
          bVar2 = 0;
          local_39c = 0;
        }
        else {
          bVar2 = bVar20 >> (bVar23 & 0x1f);
          local_39c = CONCAT11(1,bVar2);
        }
        uVar11 = local_328;
        if (0xff < uVar24) {
          local_302 = 0;
          local_3b0 = 0;
          uVar11 = 0;
        }
        cVar8 = (char)((ushort)local_39c >> 8);
        if ((cVar8 != (char)((ushort)local_3b0 >> 8)) ||
           ((cVar8 != '\0' && (bVar2 != (byte)uVar11)))) {
          if ((int)local_3d8 < 100) {
            local_3d8 = local_3d8 + 1;
            pcVar1 = *(code **)(param_1->_padding_ + 0x28);
            ::FString::PrintfImpl
                      (&local_160,L"Arith %s A=%d B=%d Expected=(%d,Valid=%d) Got=(%d,Valid=%d)");
            (*pcVar1)(param_1,&local_160,0);
            if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_160.Data.AllocatorInstance.Data);
              goto LAB_141bd8338;
            }
          }
          goto LAB_141bd8324;
        }
LAB_141bd8338:
        if ((cVar16 == '\0') || (bVar23 <= bVar20)) goto LAB_141bd8348;
        bVar26 = true;
LAB_141bd8353:
        bVar13 = uVar21 < uVar24;
        if (0xff < uVar24) goto LAB_141bd835c;
      }
      else {
LAB_141bd8324:
        if (uVar21 < 0x100) goto LAB_141bd8338;
LAB_141bd8348:
        bVar26 = false;
        if (uVar21 < 0x100) goto LAB_141bd8353;
LAB_141bd835c:
        bVar13 = false;
      }
      bVar15 = uVar21 < uVar24;
      if ((bVar26 != bVar13) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(local_60,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,local_60,0);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      if (uVar21 < 0x100) {
        if ((uVar24 < 0x100) && (bVar20 < bVar23)) {
          bVar26 = true;
LAB_141bd83ed:
          if ((bVar26 != bVar15) && ((int)local_3d8 < 100)) {
            local_3d8 = local_3d8 + 1;
            pcVar1 = *(code **)(param_1->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_140,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
            (*pcVar1)(param_1,&local_140,0);
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_141bd8459;
        }
        if (0xff < uVar21) goto LAB_141bd8459;
        bVar26 = false;
        if (uVar24 < 0x100) goto LAB_141bd83ed;
        local_res18[0].Value = uVar21 <= uVar24;
LAB_141bd847b:
        if ((cVar16 == '\0') || (bVar23 < bVar20)) goto LAB_141bd84be;
        bVar26 = true;
LAB_141bd84c9:
        bVar13 = uVar21 <= uVar24;
        if (0xff < uVar24) goto LAB_141bd84d2;
      }
      else {
LAB_141bd8459:
        local_res18[0].Value = uVar21 <= uVar24;
        if (uVar21 < 0x100) goto LAB_141bd847b;
LAB_141bd84be:
        bVar26 = false;
        if (uVar21 < 0x100) goto LAB_141bd84c9;
LAB_141bd84d2:
        bVar13 = false;
      }
      uVar3 = uVar21 <= uVar24;
      if ((bVar26 != bVar13) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_130,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_130,0);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      if (uVar21 < 0x100) {
        if ((uVar24 < 0x100) && (bVar20 <= bVar23)) {
          bVar26 = true;
LAB_141bd8563:
          if ((bVar26 != (bool)uVar3) && ((int)local_3d8 < 100)) {
            local_3d8 = local_3d8 + 1;
            pcVar1 = *(code **)(param_1->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_120,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
            (*pcVar1)(param_1,&local_120,0);
            if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_141bd85cf;
        }
        if (0xff < uVar21) goto LAB_141bd85cf;
        bVar26 = false;
        if (uVar24 < 0x100) goto LAB_141bd8563;
LAB_141bd85ea:
        if ((cVar16 == '\0') || (bVar20 <= bVar23)) goto LAB_141bd8626;
        bVar26 = true;
LAB_141bd8631:
        bVar13 = uVar24 < uVar21;
        if (0xff < uVar24) goto LAB_141bd863a;
      }
      else {
LAB_141bd85cf:
        if (uVar21 < 0x100) goto LAB_141bd85ea;
LAB_141bd8626:
        bVar26 = false;
        if (uVar21 < 0x100) goto LAB_141bd8631;
LAB_141bd863a:
        bVar13 = false;
      }
      local_res20 = uVar24 < uVar21;
      cVar8 = uVar24 < uVar21;
      if ((bVar26 != bVar13) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_110,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_110,0);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
      if (uVar21 < 0x100) {
        if ((uVar24 < 0x100) && (bVar23 < bVar20)) {
          bVar26 = true;
LAB_141bd86d0:
          if ((bVar26 != (bool)cVar8) && ((int)local_3d8 < 100)) {
            local_3d8 = local_3d8 + 1;
            pcVar1 = *(code **)(param_1->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_100,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
            (*pcVar1)(param_1,&local_100,0);
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_141bd8739;
        }
        if (0xff < uVar21) goto LAB_141bd8739;
        bVar26 = false;
        if (uVar24 < 0x100) goto LAB_141bd86d0;
LAB_141bd8752:
        if ((cVar16 == '\0') || (bVar20 < bVar23)) goto LAB_141bd878c;
        bVar26 = true;
LAB_141bd8797:
        bVar13 = uVar24 <= uVar21;
        if (0xff < uVar24) goto LAB_141bd87a0;
      }
      else {
LAB_141bd8739:
        if (uVar21 < 0x100) goto LAB_141bd8752;
LAB_141bd878c:
        bVar26 = false;
        if (uVar21 < 0x100) goto LAB_141bd8797;
LAB_141bd87a0:
        bVar13 = false;
      }
      bVar17 = uVar24 <= uVar21;
      if ((bVar26 != bVar13) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_f0,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      if (uVar21 < 0x100) {
        if ((uVar24 < 0x100) && (bVar23 <= bVar20)) {
          bVar26 = true;
LAB_141bd8840:
          if ((bVar26 != bVar17) && ((int)local_3d8 < 100)) {
            local_3d8 = local_3d8 + 1;
            pcVar1 = *(code **)(param_1->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_e0,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
            (*pcVar1)(param_1,&local_e0,0);
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_141bd88b3;
        }
        if (0xff < uVar21) goto LAB_141bd88b3;
        bVar26 = false;
        if (uVar24 < 0x100) goto LAB_141bd8840;
LAB_141bd88c0:
        if ((cVar16 == '\0') || (bVar20 < bVar23)) goto LAB_141bd88ee;
        bVar26 = false;
LAB_141bd88f9:
        bVar13 = bVar15;
        if (0xff < uVar24) goto LAB_141bd8902;
      }
      else {
LAB_141bd88b3:
        if (uVar21 < 0x100) goto LAB_141bd88c0;
LAB_141bd88ee:
        bVar26 = true;
        if (uVar21 < 0x100) goto LAB_141bd88f9;
LAB_141bd8902:
        bVar13 = true;
      }
      uVar6 = (ulonglong)local_3d8;
      if ((bVar26 != bVar13) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_d0,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        (*pcVar1)(param_1,&local_d0,0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        uVar6 = (ulonglong)local_3d8;
      }
      if (uVar21 < 0x100) {
        if ((uVar24 < 0x100) && (bVar23 <= bVar20)) {
          bVar26 = false;
LAB_141bd89a2:
          if ((bVar26 != bVar15) && ((int)uVar6 < 100)) {
            local_3d8 = (int)uVar6 + 1;
            pcVar1 = *(code **)(param_1->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_c0,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
            uVar6 = (*pcVar1)(param_1,&local_c0,0);
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              uVar6 = extraout_RAX_00;
            }
          }
          goto LAB_141bd8a15;
        }
        if (0xff < uVar21) goto LAB_141bd8a15;
        bVar26 = true;
        if (uVar24 < 0x100) goto LAB_141bd89a2;
LAB_141bd8a22:
        if ((cVar16 == '\0') || (bVar20 <= bVar23)) goto LAB_141bd8a53;
        bVar26 = false;
LAB_141bd8a5e:
        bVar13 = (bool)uVar3;
        if (0xff < uVar24) goto LAB_141bd8a67;
      }
      else {
LAB_141bd8a15:
        if (uVar21 < 0x100) goto LAB_141bd8a22;
LAB_141bd8a53:
        bVar26 = true;
        if (uVar21 < 0x100) goto LAB_141bd8a5e;
LAB_141bd8a67:
        bVar13 = true;
      }
      if ((bVar26 != bVar13) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_b0,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        uVar6 = (*pcVar1)(param_1,&local_b0,0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          uVar6 = extraout_RAX_01;
        }
      }
      if (((uVar21 < 0x100) && (uVar24 < 0x100)) && (bVar23 < bVar20)) {
        uVar10 = '\0';
        uVar3 = local_res18[0].Value;
LAB_141bd8b1c:
        if ((uVar10 != uVar3) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_a0,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
          uVar6 = (*pcVar1)(param_1,&local_a0,0);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            uVar6 = extraout_RAX_02;
          }
        }
        if (0xff < uVar21) goto LAB_141bd8ba6;
LAB_141bd8b92:
        if ((cVar16 == '\0') || (bVar23 < bVar20)) goto LAB_141bd8ba6;
        bVar26 = false;
LAB_141bd8bb5:
        bVar13 = (bool)cVar8;
        if (0xff < uVar24) goto LAB_141bd8bbe;
      }
      else {
        if (uVar21 < 0x100) {
          uVar10 = '\x01';
          if (uVar24 < 0x100) goto LAB_141bd8b1c;
          goto LAB_141bd8b92;
        }
LAB_141bd8ba6:
        bVar26 = true;
        if (uVar21 < 0x100) goto LAB_141bd8bb5;
LAB_141bd8bbe:
        bVar13 = true;
      }
      if ((bVar26 != bVar13) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_90,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        uVar6 = (*pcVar1)(param_1,&local_90,0);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
          uVar6 = extraout_RAX_03;
        }
      }
      if (((uVar21 < 0x100) && (uVar24 < 0x100)) && (bVar20 <= bVar23)) {
        cVar9 = '\0';
        cVar8 = local_res20;
LAB_141bd8c6b:
        if ((cVar9 != cVar8) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_80,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
          uVar6 = (*pcVar1)(param_1,&local_80,0);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
            uVar6 = extraout_RAX_04;
          }
        }
        if (0xff < uVar21) goto LAB_141bd8cee;
LAB_141bd8cda:
        if ((cVar16 == '\0') || (bVar23 <= bVar20)) goto LAB_141bd8cee;
        bVar26 = false;
LAB_141bd8cfd:
        bVar13 = bVar17;
        if (0xff < uVar24) goto LAB_141bd8d06;
      }
      else {
        if (uVar21 < 0x100) {
          cVar9 = '\x01';
          if (uVar24 < 0x100) goto LAB_141bd8c6b;
          goto LAB_141bd8cda;
        }
LAB_141bd8cee:
        bVar26 = true;
        if (uVar21 < 0x100) goto LAB_141bd8cfd;
LAB_141bd8d06:
        bVar13 = true;
      }
      if ((bVar26 != bVar13) && ((int)local_3d8 < 100)) {
        local_3d8 = local_3d8 + 1;
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_70,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
        uVar6 = (*pcVar1)(param_1,&local_70,0);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
          uVar6 = extraout_RAX_05;
        }
      }
      if (((uVar21 < 0x100) && (uVar24 < 0x100)) && (bVar20 < bVar23)) {
        bVar26 = false;
LAB_141bd8da6:
        if ((bVar26 != bVar17) && ((int)local_3d8 < 100)) {
          local_3d8 = local_3d8 + 1;
          pcVar1 = *(code **)(param_1->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_2d0,L"Cmp %s A=%d B=%d ref=%d test=%d\n");
          uVar6 = (*pcVar1)(param_1,&local_2d0,0);
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
            uVar6 = extraout_RAX_06;
          }
        }
      }
      else if ((uVar21 < 0x100) && (bVar26 = true, uVar24 < 0x100)) goto LAB_141bd8da6;
      uVar25 = (ulonglong)(uVar24 + 1);
    } while (uVar24 + 1 < 0x101);
    uVar22 = (ulonglong)(uVar21 + 1);
    if (0x100 < uVar21 + 1) {
      if (100 < (int)local_3d8) {
        pcVar1 = *(code **)(param_1->_padding_ + 0x28);
        ::FString::PrintfImpl
                  (&local_2d0,L"Too many errors (%d), stopped reporting after %d instances.\n");
        (*pcVar1)(param_1,&local_2d0,0);
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
      }
      return local_3d8 == 0;
    }
  } while( true );
}

// FormatNamed<wchar_t_const_(&)[4],FText_const_&> @ 141bd9f70

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[4],FText_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [4],FText *param_3)

{
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[4]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  FFormatArgumentValue::FFormatArgumentValue((FFormatArgumentValue *)&this->field_0x10,param_3);
  return;
}

// FormatNamed<wchar_t_const_(&)[6],int> @ 141bda0a0

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[6],int>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [6],int *param_3)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[6]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(longlong *)&this->field_0x18 = (longlong)iVar1;
  return;
}

// FormatNamed<wchar_t_const_(&)[7],int> @ 141bda100

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[7],int>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [7],int *param_3)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(longlong *)&this->field_0x18 = (longlong)iVar1;
  return;
}

// FormatNamed<wchar_t_const_(&)[7],FText> @ 141bda160

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[7],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [7],FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_3);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[7],FText,wchar_t_const_(&)[7],int> @ 141bda2c0

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[7],FText,wchar_t_const_(&)[7],int>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [7],FText *param_3,wchar_t (*param_4) [7],int *param_5)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<wchar_t_const_(&)[7],FText>(param_1,param_2,param_3);
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(param_1,param_4);
  ::FString::FString((FString *)this,*param_4);
  iVar1 = *param_5;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(longlong *)&this->field_0x18 = (longlong)iVar1;
  return;
}

// FormatNamed<wchar_t_const_(&)[7],enum_ETextGender> @ 141bda400

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[7],enum_ETextGender>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [7],ETextGender *param_3)

{
  ETextGender EVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  EVar1 = *param_3;
  *(undefined4 *)&this->field_0x10 = 5;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(ulonglong *)&this->field_0x18 = (ulonglong)EVar1;
  return;
}

// FormatNamed<wchar_t_const_(&)[8],int> @ 141bda540

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[8],int>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [8],int *param_3)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(longlong *)&this->field_0x18 = (longlong)iVar1;
  return;
}

// FormatOrdered<int> @ 141bda5a0

void __cdecl
TextFormatUtil::FormatOrdered<int>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  iVar1 = *param_2;
  pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x20;
  *(undefined4 *)pFVar3 = 0;
  *(undefined8 *)(pFVar3 + 0x10) = 0;
  *(undefined4 *)(pFVar3 + 0x18) = 0;
  *(longlong *)(pFVar3 + 8) = (longlong)iVar1;
  return;
}

// FormatOrdered<FText> @ 141bda600

void __cdecl
TextFormatUtil::FormatOrdered<FText>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_1,FText *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  lVar5 = (longlong)iVar4 * 0x20;
  *(undefined4 *)(pFVar1 + lVar5) = 4;
  FText::FText((FText *)(pFVar1 + lVar5 + 0x10),param_2);
  if (*(longlong *)(pFVar1 + lVar5 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// FormatOrdered<FText,int> @ 141bda800

void __cdecl
TextFormatUtil::FormatOrdered<FText,int>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_1,FText *param_2,
          int *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  pFVar6 = (param_1->AllocatorInstance).Data;
  lVar5 = (longlong)iVar4 * 0x20;
  *(undefined4 *)(pFVar6 + lVar5) = 4;
  FText::FText((FText *)(pFVar6 + lVar5 + 0x10),param_2);
  if (*(longlong *)(pFVar6 + lVar5 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  iVar1 = *param_3;
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
  *(undefined4 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 0x10) = 0;
  *(undefined4 *)(pFVar6 + 0x18) = 0;
  *(longlong *)(pFVar6 + 8) = (longlong)iVar1;
  return;
}

// HeapSortInternal<FText,int,FIdentityFunctor,TDereferenceWrapper<FText,FText::FSortPredicate>_> @ 141bdaa60

void __cdecl
AlgoImpl::
HeapSortInternal<FText,int,FIdentityFunctor,TDereferenceWrapper<FText,FText::FSortPredicate>_>
          (FText *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FText,FText::FSortPredicate> param_4)

{
  code *pcVar1;
  ITextData *pIVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  FText *pFVar13;
  FText *pFVar14;
  int iVar15;
  FText *pFVar16;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar15 = iVar9;
  iVar11 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_141bdab87:
      if (iVar11 == 0) {
        iVar9 = param_2 + -1;
        lVar12 = (longlong)iVar9;
        if (0 < iVar9) {
          pFVar13 = param_1 + lVar12;
          do {
            uVar3 = pFVar13->Flags;
            uVar4 = *(undefined4 *)&pFVar13->field_0xc;
            iVar15 = 0;
            pIVar2 = (param_1->TextData).Reference;
            uVar5 = param_1->Flags;
            uVar6 = *(undefined4 *)&param_1->field_0xc;
            (param_1->TextData).Reference = (pFVar13->TextData).Reference;
            param_1->Flags = uVar3;
            *(undefined4 *)&param_1->field_0xc = uVar4;
            (pFVar13->TextData).Reference = pIVar2;
            pFVar13->Flags = uVar5;
            *(undefined4 *)&pFVar13->field_0xc = uVar6;
            if (1 < iVar9) {
              do {
                iVar11 = iVar15 * 2;
                iVar8 = iVar11 + 1;
                if (iVar11 + 2 < iVar9) {
                  bVar7 = FText::FSortPredicate::operator()
                                    (param_4.Predicate,param_1 + (iVar11 + 2),param_1 + iVar8);
                  if (bVar7) {
                    iVar8 = iVar11;
                  }
                  iVar8 = iVar8 + 1;
                }
                pFVar14 = param_1 + iVar8;
                pFVar16 = param_1 + iVar15;
                bVar7 = FText::FSortPredicate::operator()(param_4.Predicate,pFVar16,pFVar14);
                if (!bVar7) break;
                pIVar2 = (pFVar16->TextData).Reference;
                uVar5 = pFVar16->Flags;
                uVar6 = *(undefined4 *)&pFVar16->field_0xc;
                uVar3 = pFVar14->Flags;
                uVar4 = *(undefined4 *)&pFVar14->field_0xc;
                (pFVar16->TextData).Reference = (pFVar14->TextData).Reference;
                pFVar16->Flags = uVar3;
                *(undefined4 *)&pFVar16->field_0xc = uVar4;
                (pFVar14->TextData).Reference = pIVar2;
                pFVar14->Flags = uVar5;
                *(undefined4 *)&pFVar14->field_0xc = uVar6;
                iVar15 = iVar8;
              } while (iVar8 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar12 = lVar12 + -1;
            pFVar13 = pFVar13 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar8 = iVar11 + -1;
      iVar9 = iVar15 + -2;
      iVar15 = iVar9;
      iVar11 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      bVar7 = FText::FSortPredicate::operator()
                        (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar10);
      if (bVar7) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar13 = param_1 + iVar10;
    pFVar14 = param_1 + iVar8;
    bVar7 = FText::FSortPredicate::operator()(param_4.Predicate,pFVar14,pFVar13);
    if (!bVar7) goto LAB_141bdab87;
    pIVar2 = (pFVar14->TextData).Reference;
    uVar5 = pFVar14->Flags;
    uVar6 = *(undefined4 *)&pFVar14->field_0xc;
    iVar9 = iVar10 * 2 + 1;
    uVar3 = pFVar13->Flags;
    uVar4 = *(undefined4 *)&pFVar13->field_0xc;
    (pFVar14->TextData).Reference = (pFVar13->TextData).Reference;
    pFVar14->Flags = uVar3;
    *(undefined4 *)&pFVar14->field_0xc = uVar4;
    (pFVar13->TextData).Reference = pIVar2;
    pFVar13->Flags = uVar5;
    *(undefined4 *)&pFVar13->field_0xc = uVar6;
    iVar8 = iVar10;
  } while( true );
}

// IntroSortInternal<FText,int,FIdentityFunctor,TDereferenceWrapper<FText,FText::FSortPredicate>_> @ 141bdac90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FText,int,FIdentityFunctor,TDereferenceWrapper<FText,FText::FSortPredicate>_>
          (FText *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FText,FText::FSortPredicate> param_4)

{
  ITextData *pIVar1;
  undefined8 uVar2;
  ITextData *pIVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText **ppFVar13;
  int iVar14;
  FText *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  FText *local_358;
  FText *local_348;
  FText *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    ppFVar13 = &local_348;
    do {
      pFVar17 = ppFVar13[1];
      pFVar16 = *ppFVar13;
      local_358 = ppFVar13[2];
      iVar9 = (int)((longlong)pFVar17 - (longlong)pFVar16 >> 4) + 1;
      pFVar15 = pFVar16;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_141bdad50:
        if (8 < iVar9) {
          uVar4 = pFVar15->Flags;
          uVar5 = *(undefined4 *)&pFVar15->field_0xc;
          pFVar10 = pFVar17 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          pIVar1 = (pFVar16->TextData).Reference;
          uVar6 = pFVar16->Flags;
          uVar7 = *(undefined4 *)&pFVar16->field_0xc;
          pFVar16 = pFVar15 + iVar9 / 2;
          (pFVar16->TextData).Reference = (pFVar15->TextData).Reference;
          pFVar16->Flags = uVar4;
          *(undefined4 *)&pFVar16->field_0xc = uVar5;
          (pFVar15->TextData).Reference = pIVar1;
          pFVar15->Flags = uVar6;
          *(undefined4 *)&pFVar15->field_0xc = uVar7;
          pFVar16 = pFVar15;
LAB_141bdad80:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar17) goto code_r0x000141bdad89;
          goto LAB_141bdada0;
        }
        for (; pFVar10 = pFVar15, pFVar16 = pFVar15, pFVar15 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar12 = pFVar10, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar17) {
            bVar8 = FText::FSortPredicate::operator()(param_4.Predicate,pFVar12,pFVar16);
            pFVar10 = pFVar16;
            if (!bVar8) {
              pFVar10 = pFVar12;
            }
          }
          pIVar1 = (pFVar12->TextData).Reference;
          uVar6 = pFVar12->Flags;
          uVar7 = *(undefined4 *)&pFVar12->field_0xc;
          uVar4 = pFVar17->Flags;
          uVar5 = *(undefined4 *)&pFVar17->field_0xc;
          (pFVar12->TextData).Reference = (pFVar17->TextData).Reference;
          pFVar12->Flags = uVar4;
          *(undefined4 *)&pFVar12->field_0xc = uVar5;
          (pFVar17->TextData).Reference = pIVar1;
          pFVar17->Flags = uVar6;
          *(undefined4 *)&pFVar17->field_0xc = uVar7;
        }
        goto LAB_141bdae6f;
      }
LAB_141bdae5e:
      HeapSortInternal<FText,int,FIdentityFunctor,TDereferenceWrapper<FText,FText::FSortPredicate>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_141bdae6f:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_348 <= ppFVar13);
  }
  return;
code_r0x000141bdad89:
  bVar8 = FText::FSortPredicate::operator()(param_4.Predicate,pFVar15,pFVar16);
  if (!bVar8) goto LAB_141bdad80;
LAB_141bdada0:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar15) break;
    bVar8 = FText::FSortPredicate::operator()(param_4.Predicate,pFVar10,pFVar15);
  } while (!bVar8);
  pIVar1 = (pFVar10->TextData).Reference;
  uVar2 = *(undefined8 *)&pFVar11[-1].Flags;
  if (pFVar16 <= pFVar10) {
    pIVar3 = (pFVar16->TextData).Reference;
    uVar4 = pFVar12[1].Flags;
    uVar5 = *(undefined4 *)&pFVar12[1].field_0xc;
    (pFVar16->TextData).Reference = pIVar1;
    *(undefined8 *)&pFVar12[1].Flags = uVar2;
    (pFVar10->TextData).Reference = pIVar3;
    pFVar11[-1].Flags = uVar4;
    *(undefined4 *)&pFVar11[-1].field_0xc = uVar5;
    goto LAB_141bdad80;
  }
  pIVar3 = (pFVar15->TextData).Reference;
  uVar4 = pFVar15->Flags;
  uVar5 = *(undefined4 *)&pFVar15->field_0xc;
  iVar14 = iVar14 + -1;
  (pFVar15->TextData).Reference = pIVar1;
  *(undefined8 *)&pFVar15->Flags = uVar2;
  (pFVar10->TextData).Reference = pIVar3;
  pFVar11[-1].Flags = uVar4;
  *(undefined4 *)&pFVar11[-1].field_0xc = uVar5;
  if ((longlong)((longlong)pFVar10 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar17 - (longlong)pFVar16 & 0xfffffffffffffff0U)) {
    if (pFVar16 < pFVar17) {
      *ppFVar13 = pFVar16;
      ppFVar13[1] = pFVar17;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar10 <= pFVar15 + 1) goto LAB_141bdae6f;
    pFVar17 = pFVar11 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar10) {
      *ppFVar13 = pFVar15;
      ppFVar13[1] = pFVar11 + -2;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar17 <= pFVar16) goto LAB_141bdae6f;
  }
  iVar9 = (int)((longlong)pFVar17 - (longlong)pFVar16 >> 4) + 1;
  pFVar15 = pFVar16;
  if (iVar14 == 0) goto LAB_141bdae5e;
  goto LAB_141bdad50;
}

// InvokePlatformStringGetVarArgs<wchar_t,128> @ 141bdaf30

void __cdecl InvokePlatformStringGetVarArgs<wchar_t,128>(wchar_t (*param_1) [128],wchar_t *param_2)

{
  ulong64 *puVar1;
  undefined1 local_res18 [16];
  
  puVar1 = __local_stdio_printf_options();
  __stdio_common_vswprintf(*puVar1,param_1,0x80,param_2,0,local_res18);
  return;
}

// Launch<`UE::Tasks::Wait<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>_const_&> @ 141bdaf90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::Tasks::Wait<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>,TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>_const_&>
          (wchar_t *param_1,<lambda_1> *param_2,
          TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_> *param_3,ETaskPriority param_4,
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
         ___7__TExecutableTaskBase_V<lambda_1>__1____Wait_V__TArray_VFTaskEvent_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YA_NAEBV__TArray_VFTaskEvent_Tasks_UE__V__TSizedDefaultAllocator__0CA_____UFTimespan___Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____Wait_V__TArray_VFTaskEvent_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YA_NAEBV__TArray_VFTaskEvent_Tasks_UE__V__TSizedDefaultAllocator__0CA_____UFTimespan___Z__Private_Tasks_UE__6B_
    ;
  }
  Private::FTaskBase::AddPrerequisites<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>,0>
            (this,(TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_> *)
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

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[4],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 141bdb080

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[4],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [4],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[5],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 141bdb150

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[5],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [5],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[6],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 141bdb220

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[6],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [6],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[7],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 141bdb2f0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[7],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [7],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[8],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 141bdb3c0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[8],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [8],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// MakeStridedView<UE::Math::TVector<double>_const_> @ 141bdb490

TStridedView<UE::Math::TVector<double>_const_,int> * __cdecl
MakeStridedView<UE::Math::TVector<double>_const_>
          (TStridedView<UE::Math::TVector<double>_const_,int> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::Math::TVector<double>_const_,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 7) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeStridedView<UE::Math::TVector<double>_const_> @ 141bdb540

TStridedView<UE::Math::TVector<double>_const_,int> * __cdecl
MakeStridedView<UE::Math::TVector<double>_const_>
          (TStridedView<UE::Math::TVector<double>_const_,int> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  MakeStridedView<UE::Math::TVector<double>_const_>
            (__return_storage_ptr__,0x18,param_1->DataPtr,param_1->ArrayNum);
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<UE::StridedViewTest::FMyStruct,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0> @ 141bdb570

TStridedView<UE::Math::TVector<double>,int> * __cdecl
MakeStridedView<TArray<UE::StridedViewTest::FMyStruct,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0>
          (TStridedView<UE::Math::TVector<double>,int> *__return_storage_ptr__,
          TArray<UE::StridedViewTest::FMyStruct,TSizedDefaultAllocator<32>_> *param_1,
          pdm_36c719b7 param_2)

{
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (__return_storage_ptr__,0x28,
             (TVector<double> *)((param_1->AllocatorInstance).Data + (int)param_2),param_1->ArrayNum
            );
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<UE::StridedViewTest::FMyStructDerived,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0> @ 141bdb5a0

TStridedView<UE::Math::TVector<double>,int> * __cdecl
MakeStridedView<TArray<UE::StridedViewTest::FMyStructDerived,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0>
          (TStridedView<UE::Math::TVector<double>,int> *__return_storage_ptr__,
          TArray<UE::StridedViewTest::FMyStructDerived,TSizedDefaultAllocator<32>_> *param_1,
          pdm_36c719b7 param_2)

{
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (__return_storage_ptr__,0x40,
             (TVector<double> *)((param_1->AllocatorInstance).Data + (int)param_2),param_1->ArrayNum
            );
  return __return_storage_ptr__;
}

// MakeStridedView<TArrayView<UE::StridedViewTest::FMyStructDerived,int>_&,UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0> @ 141bdb5d0

TStridedView<UE::Math::TVector<double>,int> * __cdecl
MakeStridedView<TArrayView<UE::StridedViewTest::FMyStructDerived,int>_&,UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0>
          (TStridedView<UE::Math::TVector<double>,int> *__return_storage_ptr__,
          TArrayView<UE::StridedViewTest::FMyStructDerived,int> *param_1,pdm_36c719b7 param_2)

{
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (__return_storage_ptr__,0x40,
             (TVector<double> *)((longlong)&param_1->DataPtr->_padding_ + (longlong)(int)param_2),
             param_1->ArrayNum);
  return __return_storage_ptr__;
}

// MakeStridedView<UE::Math::TVector<double>_(&)[17]> @ 141bdb600

TStridedView<UE::Math::TVector<double>,int> * __cdecl
MakeStridedView<UE::Math::TVector<double>_(&)[17]>
          (TStridedView<UE::Math::TVector<double>,int> *__return_storage_ptr__,
          TVector<double> (*param_1) [17])

{
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (__return_storage_ptr__,0x18,*param_1,0x11);
  return __return_storage_ptr__;
}

// MakeStridedView<UE::StridedViewTest::FMyStruct_(&)[17]> @ 141bdb630

TStridedView<UE::StridedViewTest::FMyStruct,int> * __cdecl
MakeStridedView<UE::StridedViewTest::FMyStruct_(&)[17]>
          (TStridedView<UE::StridedViewTest::FMyStruct,int> *__return_storage_ptr__,
          FMyStruct (*param_1) [17])

{
  TStridedView<UE::StridedViewTest::FMyStruct,int>::
  TStridedView<UE::StridedViewTest::FMyStruct,int><UE::StridedViewTest::FMyStruct>
            (__return_storage_ptr__,0x28,*param_1,0x11);
  return __return_storage_ptr__;
}

// MakeStridedView<UE::StridedViewTest::FMyStruct_(&)[17],UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0> @ 141bdb660

TStridedView<UE::Math::TVector<double>,int> * __cdecl
MakeStridedView<UE::StridedViewTest::FMyStruct_(&)[17],UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0>
          (TStridedView<UE::Math::TVector<double>,int> *__return_storage_ptr__,
          FMyStruct (*param_1) [17],pdm_36c719b7 param_2)

{
  __return_storage_ptr__->BytesBetweenElements = 0x28;
  __return_storage_ptr__->FirstElementPtr =
       (TVector<double> *)((longlong)&(*param_1)[0].SomeData + (longlong)(int)param_2);
  __return_storage_ptr__->NumElements = 0x11;
  return __return_storage_ptr__;
}

// MakeStridedView<UE::StridedViewTest::FMyStructDerived_(&)[17]> @ 141bdb690

TStridedView<UE::StridedViewTest::FMyStructDerived,int> * __cdecl
MakeStridedView<UE::StridedViewTest::FMyStructDerived_(&)[17]>
          (TStridedView<UE::StridedViewTest::FMyStructDerived,int> *__return_storage_ptr__,
          FMyStructDerived (*param_1) [17])

{
  __return_storage_ptr__->FirstElementPtr = *param_1;
  __return_storage_ptr__->BytesBetweenElements = 0x40;
  __return_storage_ptr__->NumElements = 0x11;
  return __return_storage_ptr__;
}

// MakeStridedView<UE::StridedViewTest::FMyStructDerived_(&)[17],UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0> @ 141bdb6b0

TStridedView<UE::Math::TVector<double>,int> * __cdecl
MakeStridedView<UE::StridedViewTest::FMyStructDerived_(&)[17],UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0>
          (TStridedView<UE::Math::TVector<double>,int> *__return_storage_ptr__,
          FMyStructDerived (*param_1) [17],pdm_36c719b7 param_2)

{
  __return_storage_ptr__->BytesBetweenElements = 0x40;
  __return_storage_ptr__->FirstElementPtr =
       (TVector<double> *)((longlong)&(*param_1)[0]._padding_ + (longlong)(int)param_2);
  __return_storage_ptr__->NumElements = 0x11;
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&> @ 141bdb6e0

TStridedView<UE::Math::TVector<double>_const_,int> * __cdecl
MakeStridedView<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
          (TStridedView<UE::Math::TVector<double>_const_,int> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStridedView<UE::Math::TVector<double>_const_,int> *pTVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  MakeStridedView<UE::Math::TVector<double>_const_>
            (__return_storage_ptr__,0x18,(TVector<double> *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// MakeStridedView<double> @ 141bdb750

TStridedView<double,int> * __cdecl
MakeStridedView<double>
          (TStridedView<double,int> *__return_storage_ptr__,int param_1,double *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<double,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<double,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<double,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 7) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<double,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeStridedView<UE::Math::TVector<double>_> @ 141bdb800

TStridedView<UE::Math::TVector<double>,int> * __cdecl
MakeStridedView<UE::Math::TVector<double>_>
          (TStridedView<UE::Math::TVector<double>,int> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2,int param_3)

{
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// MakeStridedView<UE::StridedViewTest::FMyStruct> @ 141bdb820

TStridedView<UE::StridedViewTest::FMyStruct,int> * __cdecl
MakeStridedView<UE::StridedViewTest::FMyStruct>
          (TStridedView<UE::StridedViewTest::FMyStruct,int> *__return_storage_ptr__,int param_1,
          FMyStruct *param_2,int param_3)

{
  TStridedView<UE::StridedViewTest::FMyStruct,int>::
  TStridedView<UE::StridedViewTest::FMyStruct,int><UE::StridedViewTest::FMyStruct>
            (__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// MakeStridedView<UE::StridedViewTest::FMyStructDerived> @ 141bdb840

TStridedView<UE::StridedViewTest::FMyStructDerived,int> * __cdecl
MakeStridedView<UE::StridedViewTest::FMyStructDerived>
          (TStridedView<UE::StridedViewTest::FMyStructDerived,int> *__return_storage_ptr__,
          int param_1,FMyStructDerived *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::StridedViewTest::FMyStructDerived,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::StridedViewTest::FMyStructDerived,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::StridedViewTest::FMyStructDerived,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 7) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::StridedViewTest::FMyStructDerived,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// MakeStridedView<TArrayView<UE::StridedViewTest::FMyStruct,int>,UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0> @ 141bdb8f0

TStridedView<UE::Math::TVector<double>,int> * __cdecl
MakeStridedView<TArrayView<UE::StridedViewTest::FMyStruct,int>,UE::Math::TVector<double>,UE::StridedViewTest::FMyStruct,0,0>
          (TStridedView<UE::Math::TVector<double>,int> *__return_storage_ptr__,
          TArrayView<UE::StridedViewTest::FMyStruct,int> *param_1,pdm_36c719b7 param_2)

{
  TStridedView<UE::Math::TVector<double>,int>::
  TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
            (__return_storage_ptr__,0x28,
             (TVector<double> *)((longlong)&param_1->DataPtr->SomeData + (longlong)(int)param_2),
             param_1->ArrayNum);
  return __return_storage_ptr__;
}

// MakeStridedViewOfBase<UE::StridedViewTest::FMyStruct,UE::StridedViewTest::FMyStructDerived> @ 141bdb920

TStridedView<UE::StridedViewTest::FMyStruct,int> * __cdecl
MakeStridedViewOfBase<UE::StridedViewTest::FMyStruct,UE::StridedViewTest::FMyStructDerived>
          (TStridedView<UE::StridedViewTest::FMyStruct,int> *__return_storage_ptr__,
          TArrayView<UE::StridedViewTest::FMyStructDerived,int> *param_1)

{
  TStridedView<UE::StridedViewTest::FMyStruct,int>::
  TStridedView<UE::StridedViewTest::FMyStruct,int><UE::StridedViewTest::FMyStruct>
            (__return_storage_ptr__,0x40,(FMyStruct *)param_1->DataPtr,param_1->ArrayNum);
  return __return_storage_ptr__;
}

// TSTickerPerfTest<100,100> @ 141bdbe70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl TSTickerPerfTest<100,100>(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TWeakPtr<FTSTicker::FElement,1> *pTVar7;
  undefined ***pppuVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackY_128 [32];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  FTSTicker local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_98;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c0.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0;
  local_c0.AddedElements.Head =
       (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)
       FMemory::Malloc(0x18,8);
  lVar11 = 100;
  *(undefined8 *)local_c0.AddedElements.Head = 0;
  local_c0.CurrentTime = (atomic<double>)0x0;
  local_c0.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Elements.ArrayNum = 0;
  local_c0.Elements.ArrayMax = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_c0.AddedElements.Tail = (FNode *)local_c0.AddedElements.Head;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,100,&local_d8,0,(int *)((longlong)&local_d0 + 4));
  lVar10 = 100;
  do {
    local_50 = (undefined ***)0x0;
    local_68 = &___7__TFunction_OwnedObject_P6A_NM_Z_00_0A__Function_Private_Core_UE__6B_;
    local_60 = `TSTickerPerfTest<100,100>'::__l4::<lambda_1>::<lambda_invoker_cdecl>;
    local_78[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(float),bool,float>
                  ::Call;
    pTVar7 = FTSTicker::AddTicker
                       (&local_c0,&local_88,
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(23)"
                        ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (((local_d8.Data <= pTVar7) &&
        (pTVar7 < (TWeakPtr<FTSTicker::FElement,1> *)
                  (local_d8.Data + (longlong)local_d0._4_4_ * 0x10))) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (int)local_d0;
    if ((int)local_d0 == local_d0._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
    }
    local_d0 = CONCAT44(local_d0._4_4_,iVar6 + 1);
    *(FElement **)&local_d8.Data[(longlong)iVar6 * 0x10].field_0x0 = pTVar7->Object;
    *(TReferenceControllerBase<1> **)(local_d8.Data + (longlong)iVar6 * 0x10 + 8) =
         (pTVar7->WeakReferenceCount).ReferenceController;
    (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar7->Object = (FElement *)0x0;
    if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_88.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar8 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar8 = local_50;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  do {
    FTSTicker::Tick(&local_c0,0.0);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar6 = (int)local_d0;
  pTVar7 = (TWeakPtr<FTSTicker::FElement,1> *)(local_d8.Data + (longlong)(int)local_d0 * 0x10);
  FVar9.Data = local_d8.Data;
  while( true ) {
    if ((int)local_d0 != iVar6) {
      `TCheckedPointerIterator<TWeakPtr<FTSTicker::FElement,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_c8);
    }
    if ((TWeakPtr<FTSTicker::FElement,1> *)FVar9.Data == pTVar7) break;
    local_98.Object = ((TWeakPtr<FTSTicker::FElement,1> *)FVar9.Data)->Object;
    local_98.WeakReferenceCount.ReferenceController =
         (((TWeakPtr<FTSTicker::FElement,1> *)FVar9.Data)->WeakReferenceCount).ReferenceController;
    if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_98);
    FVar9.Data = FVar9.Data + 0x10;
  }
  DestructItems<TWeakPtr<FTSTicker::FElement,1>,int>
            ((TWeakPtr<FTSTicker::FElement,1> *)local_d8.Data,(int)local_d0);
  if ((TWeakPtr<FTSTicker::FElement,1> *)local_d8.Data != (TWeakPtr<FTSTicker::FElement,1> *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  DestructItems<TSharedPtr<FTSTicker::FElement,1>,int>
            ((TSharedPtr<FTSTicker::FElement,1> *)local_c0.Elements.AllocatorInstance.Data,
             local_c0.Elements.ArrayNum);
  if ((TSharedPtr<FTSTicker::FElement,1> *)local_c0.Elements.AllocatorInstance.Data !=
      (TSharedPtr<FTSTicker::FElement,1> *)0x0) {
    FMemory::Free(local_c0.Elements.AllocatorInstance.Data);
  }
  pFVar3 = *(FNode **)local_c0.AddedElements.Tail;
  FMemory::Free(local_c0.AddedElements.Tail);
  local_c0.AddedElements.Tail = pFVar3;
  while (local_c0.AddedElements.Tail != (FNode *)0x0) {
    pFVar3 = *(FNode **)&(local_c0.AddedElements.Tail)->Next;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)
                ((longlong)&(local_c0.AddedElements.Tail)->Value + 8));
    FMemory::Free(local_c0.AddedElements.Tail);
    local_c0.AddedElements.Tail = pFVar3;
  }
  return;
}

// TestIntVector2<int> @ 141bdc160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TestIntVector2<int>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  FAutomationTestFramework *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStack_2c8 [32];
  FString local_2a8;
  int local_298 [2];
  TIntVector2<int>_u_0 local_290;
  FString local_288;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_148.Base = local_128;
  pFVar13 = (FScriptContainerElement *)0x0;
  local_148.CurPos = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.End = (wchar_t *)local_28;
  local_290 = (TIntVector2<int>_u_0)0x0;
  pTVar7 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector2<int> *)&local_290._s_0);
  iVar14 = TIntVector2TestData<int>::ZeroString.Size;
  iVar12 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<int>::ZeroString.Size == iVar12) {
    if ((TIntVector2TestData<int>::ZeroString.Size != 0) && (iVar12 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<int>::ZeroString.DataPtr,pTVar7->Base,(longlong)iVar12)
      ;
      if (iVar4 != 0) goto LAB_141bdc223;
    }
    if (iVar14 != iVar12) goto LAB_141bdc223;
  }
  else {
LAB_141bdc223:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  local_148.CurPos = local_148.Base;
  local_290 = (TIntVector2<int>_u_0)0x7fffffff80000000;
  pTVar7 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector2<int> *)&local_290._s_0);
  iVar14 = TIntVector2TestData<int>::MinMaxString.Size;
  iVar12 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<int>::MinMaxString.Size == iVar12) {
    if ((TIntVector2TestData<int>::MinMaxString.Size != 0) && (iVar12 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<int>::MinMaxString.DataPtr,pTVar7->Base,
                         (longlong)iVar12);
      if (iVar4 != 0) goto LAB_141bdc2d6;
    }
    if (iVar14 != iVar12) goto LAB_141bdc2d6;
  }
  else {
LAB_141bdc2d6:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  local_268.Base = local_248;
  local_290 = (TIntVector2<int>_u_0)0x0;
  local_268.CurPos = local_248;
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.End = (wchar_t *)&local_148;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector2<int> *)&local_290._s_0);
  FString::AppendChars
            (&local_2a8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar12 = TIntVector2TestData<int>::ZeroString.Size;
  iVar14 = 0;
  iVar4 = local_2a8.Data.ArrayNum + -1;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar4 = iVar14;
  }
  if (TIntVector2TestData<int>::ZeroString.Size == iVar4) {
    if ((TIntVector2TestData<int>::ZeroString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<int>::ZeroString.DataPtr,
                         (wchar_t *)local_2a8.Data.AllocatorInstance.Data,(longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bdc3cd;
    }
    bVar3 = false;
    if (iVar12 != iVar4) goto LAB_141bdc3cd;
  }
  else {
LAB_141bdc3cd:
    bVar3 = true;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_290 = (TIntVector2<int>_u_0)0x7fffffff80000000;
  local_268.End = (wchar_t *)&local_148;
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector2<int> *)&local_290._s_0);
  FString::AppendChars
            (&local_2a8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar4 = TIntVector2TestData<int>::MinMaxString.Size;
  iVar12 = 0;
  iVar5 = local_2a8.Data.ArrayNum + -1;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar5 = iVar12;
  }
  if (TIntVector2TestData<int>::MinMaxString.Size == iVar5) {
    if ((TIntVector2TestData<int>::MinMaxString.Size != 0) && (iVar5 != 0)) {
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<int>::MinMaxString.DataPtr,
                         (wchar_t *)local_2a8.Data.AllocatorInstance.Data,(longlong)iVar5);
      if (iVar6 != 0) goto LAB_141bdc4df;
    }
    bVar3 = false;
    if (iVar4 != iVar5) goto LAB_141bdc4df;
  }
  else {
LAB_141bdc4df:
    bVar3 = true;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = FString::ConstructFromPtrSize
                     (&local_2a8,TIntVector2TestData<int>::ZeroString.DataPtr,
                      TIntVector2TestData<int>::ZeroString.Size);
  pFVar11 = pFVar13;
  if (&local_288 != pFVar9) {
    pFVar11 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  local_298[0] = 0;
  local_298[1] = 0;
  pFVar10 = (FScriptContainerElement *)L"";
  if (iVar12 != 0) {
    pFVar10 = pFVar11;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar10,L"X=",local_298);
  if (bVar3) {
    pFVar10 = (FScriptContainerElement *)L"";
    if (iVar12 != 0) {
      pFVar10 = pFVar11;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar10,L"Y=",local_298 + 1);
    if (((!bVar3) || (local_298[0] != 0)) || (local_298[1] != 0)) goto LAB_141bdc5d4;
    bVar3 = false;
  }
  else {
LAB_141bdc5d4:
    bVar3 = true;
  }
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = FString::ConstructFromPtrSize
                     (&local_2a8,TIntVector2TestData<int>::MinMaxString.DataPtr,
                      TIntVector2TestData<int>::MinMaxString.Size);
  if (&local_278 != pFVar9) {
    pFVar13 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar14 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  local_298[0] = 0;
  local_298[1] = 0;
  pFVar11 = (FScriptContainerElement *)L"";
  if (iVar14 != 0) {
    pFVar11 = pFVar13;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar11,L"X=",local_298);
  if (bVar3) {
    pFVar11 = (FScriptContainerElement *)L"";
    if (iVar14 != 0) {
      pFVar11 = pFVar13;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar11,L"Y=",local_298 + 1);
    if (((bVar3) && (local_298[0] == -0x80000000)) && (local_298[1] == 0x7fffffff)) {
      bVar3 = false;
      goto LAB_141bdc6d0;
    }
  }
  bVar3 = true;
LAB_141bdc6d0:
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return;
}

// TestIntVector2<unsigned_int> @ 141bdc760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TestIntVector2<unsigned_int>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  FAutomationTestFramework *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStack_2c8 [32];
  FString local_2a8;
  uint local_298 [2];
  TIntVector2<unsigned_int>_u_0 local_290;
  FString local_288;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_148.Base = local_128;
  pFVar13 = (FScriptContainerElement *)0x0;
  local_148.CurPos = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.End = (wchar_t *)local_28;
  local_290 = (TIntVector2<unsigned_int>_u_0)0x0;
  pTVar7 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector2<unsigned_int> *)&local_290._s_0);
  iVar14 = TIntVector2TestData<unsigned_int>::ZeroString.Size;
  iVar12 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<unsigned_int>::ZeroString.Size == iVar12) {
    if ((TIntVector2TestData<unsigned_int>::ZeroString.Size != 0) && (iVar12 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<unsigned_int>::ZeroString.DataPtr,pTVar7->Base,
                         (longlong)iVar12);
      if (iVar4 != 0) goto LAB_141bdc823;
    }
    if (iVar14 != iVar12) goto LAB_141bdc823;
  }
  else {
LAB_141bdc823:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  local_148.CurPos = local_148.Base;
  iVar14 = 0;
  local_290 = (TIntVector2<unsigned_int>_u_0)0xffffffff00000000;
  pTVar7 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector2<unsigned_int> *)&local_290._s_0);
  iVar12 = TIntVector2TestData<unsigned_int>::MinMaxString.Size;
  iVar4 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<unsigned_int>::MinMaxString.Size == iVar4) {
    if ((TIntVector2TestData<unsigned_int>::MinMaxString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<unsigned_int>::MinMaxString.DataPtr,pTVar7->Base,
                         (longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bdc8d3;
    }
    if (iVar12 != iVar4) goto LAB_141bdc8d3;
  }
  else {
LAB_141bdc8d3:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  local_268.Base = local_248;
  local_290 = (TIntVector2<unsigned_int>_u_0)0x0;
  local_268.CurPos = local_248;
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.End = (wchar_t *)&local_148;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector2<unsigned_int> *)&local_290._s_0);
  FString::AppendChars
            (&local_2a8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar12 = TIntVector2TestData<unsigned_int>::ZeroString.Size;
  iVar4 = local_2a8.Data.ArrayNum + -1;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar4 = iVar14;
  }
  if (TIntVector2TestData<unsigned_int>::ZeroString.Size == iVar4) {
    if ((TIntVector2TestData<unsigned_int>::ZeroString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<unsigned_int>::ZeroString.DataPtr,
                         (wchar_t *)local_2a8.Data.AllocatorInstance.Data,(longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bdc9ca;
    }
    bVar3 = false;
    if (iVar12 != iVar4) goto LAB_141bdc9ca;
  }
  else {
LAB_141bdc9ca:
    bVar3 = true;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_290 = (TIntVector2<unsigned_int>_u_0)0xffffffff00000000;
  local_268.End = (wchar_t *)&local_148;
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector2<unsigned_int> *)&local_290._s_0);
  FString::AppendChars
            (&local_2a8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar4 = TIntVector2TestData<unsigned_int>::MinMaxString.Size;
  iVar12 = 0;
  iVar5 = local_2a8.Data.ArrayNum + -1;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar5 = iVar12;
  }
  if (TIntVector2TestData<unsigned_int>::MinMaxString.Size == iVar5) {
    if ((TIntVector2TestData<unsigned_int>::MinMaxString.Size != 0) && (iVar5 != 0)) {
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<unsigned_int>::MinMaxString.DataPtr,
                         (wchar_t *)local_2a8.Data.AllocatorInstance.Data,(longlong)iVar5);
      if (iVar6 != 0) goto LAB_141bdcad9;
    }
    bVar3 = false;
    if (iVar4 != iVar5) goto LAB_141bdcad9;
  }
  else {
LAB_141bdcad9:
    bVar3 = true;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = FString::ConstructFromPtrSize
                     (&local_2a8,TIntVector2TestData<unsigned_int>::ZeroString.DataPtr,
                      TIntVector2TestData<unsigned_int>::ZeroString.Size);
  pFVar11 = pFVar13;
  if (&local_288 != pFVar9) {
    pFVar11 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  local_298[0] = 0;
  local_298[1] = 0;
  pFVar10 = (FScriptContainerElement *)L"";
  if (iVar12 != 0) {
    pFVar10 = pFVar11;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar10,L"X=",local_298);
  if (bVar3) {
    pFVar10 = (FScriptContainerElement *)L"";
    if (iVar12 != 0) {
      pFVar10 = pFVar11;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar10,L"Y=",local_298 + 1);
    if (((!bVar3) || (local_298[0] != 0)) || (local_298[1] != 0)) goto LAB_141bdcbce;
    bVar3 = false;
  }
  else {
LAB_141bdcbce:
    bVar3 = true;
  }
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = FString::ConstructFromPtrSize
                     (&local_2a8,TIntVector2TestData<unsigned_int>::MinMaxString.DataPtr,
                      TIntVector2TestData<unsigned_int>::MinMaxString.Size);
  if (&local_278 != pFVar9) {
    pFVar13 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar14 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  local_298[0] = 0;
  local_298[1] = 0;
  pFVar11 = (FScriptContainerElement *)L"";
  if (iVar14 != 0) {
    pFVar11 = pFVar13;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar11,L"X=",local_298);
  if (bVar3) {
    pFVar11 = (FScriptContainerElement *)L"";
    if (iVar14 != 0) {
      pFVar11 = pFVar13;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar11,L"Y=",local_298 + 1);
    if (((bVar3) && (local_298[0] == 0)) && (local_298[1] == -1)) {
      bVar3 = false;
      goto LAB_141bdccc4;
    }
  }
  bVar3 = true;
LAB_141bdccc4:
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return;
}

// TestIntVector2<__int64> @ 141bdcd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl TestIntVector2<__int64>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  FAutomationTestFramework *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStack_2e8 [32];
  TIntVector2<__int64>_u_0 local_2c8;
  long64 local_2b8;
  long64 local_2b0;
  TIntVector2<__int64>_u_0 local_2a8;
  FString local_290;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2e8;
  local_148.Base = local_128;
  local_148.CurPos = local_128;
  pFVar13 = (FScriptContainerElement *)0x0;
  local_148.End = (wchar_t *)local_28;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_2c8._s_0.X = 0;
  local_2c8._s_0.Y = 0;
  pTVar7 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector2<__int64> *)&local_2c8._s_0);
  iVar14 = TIntVector2TestData<__int64>::ZeroString.Size;
  iVar12 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<__int64>::ZeroString.Size == iVar12) {
    if ((TIntVector2TestData<__int64>::ZeroString.Size != 0) && (iVar12 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<__int64>::ZeroString.DataPtr,pTVar7->Base,
                         (longlong)iVar12);
      if (iVar4 != 0) goto LAB_141bdce27;
    }
    if (iVar14 != iVar12) goto LAB_141bdce27;
  }
  else {
LAB_141bdce27:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2c8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if ((void *)local_2c8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2c8._s_0.X);
    }
  }
  local_148.CurPos = local_148.Base;
  local_2c8._s_0.X = (long64)___xmm_7fffffffffffffff8000000000000000;
  local_2c8._s_0.Y = _UNK_150744198;
  pTVar7 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector2<__int64> *)&local_2c8._s_0);
  iVar14 = TIntVector2TestData<__int64>::MinMaxString.Size;
  iVar12 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<__int64>::MinMaxString.Size == iVar12) {
    if ((TIntVector2TestData<__int64>::MinMaxString.Size != 0) && (iVar12 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<__int64>::MinMaxString.DataPtr,pTVar7->Base,
                         (longlong)iVar12);
      if (iVar4 != 0) goto LAB_141bdced8;
    }
    if (iVar14 != iVar12) goto LAB_141bdced8;
  }
  else {
LAB_141bdced8:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2c8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if ((void *)local_2c8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2c8._s_0.X);
    }
  }
  local_268.Base = local_248;
  local_2c8._s_0.X = 0;
  local_268.CurPos = local_248;
  local_2c8._s_0.Y = 0;
  local_268.End = (wchar_t *)&local_148;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_2a8._s_0.X = 0;
  local_2a8._s_0.Y = 0;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector2<__int64> *)&local_2a8._s_0);
  FString::AppendChars
            ((FString *)&local_2c8._s_0,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar12 = TIntVector2TestData<__int64>::ZeroString.Size;
  iVar14 = 0;
  iVar4 = local_2c8._s_0.Y._0_4_ + -1;
  if (local_2c8._s_0.Y._0_4_ == 0) {
    iVar4 = iVar14;
  }
  if (TIntVector2TestData<__int64>::ZeroString.Size == iVar4) {
    if ((TIntVector2TestData<__int64>::ZeroString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<__int64>::ZeroString.DataPtr,
                         (wchar_t *)local_2c8._s_0.X,(longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bdcfcb;
    }
    bVar3 = false;
    if (iVar12 != iVar4) goto LAB_141bdcfcb;
  }
  else {
LAB_141bdcfcb:
    bVar3 = true;
  }
  if ((wchar_t *)local_2c8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2c8._s_0.X);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2c8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if ((wchar_t *)local_2c8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2c8._s_0.X);
    }
  }
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_2c8._s_0.X = 0;
  local_268.End = (wchar_t *)&local_148;
  local_2c8._s_0.Y = 0;
  local_2a8._s_0.X = (long64)___xmm_7fffffffffffffff8000000000000000;
  local_2a8._s_0.Y = _UNK_150744198;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector2<__int64> *)&local_2a8._s_0);
  FString::AppendChars
            ((FString *)&local_2c8._s_0,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar4 = TIntVector2TestData<__int64>::MinMaxString.Size;
  iVar12 = 0;
  iVar5 = local_2c8._s_0.Y._0_4_ + -1;
  if (local_2c8._s_0.Y._0_4_ == 0) {
    iVar5 = iVar12;
  }
  if (TIntVector2TestData<__int64>::MinMaxString.Size == iVar5) {
    if ((TIntVector2TestData<__int64>::MinMaxString.Size != 0) && (iVar5 != 0)) {
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<__int64>::MinMaxString.DataPtr,
                         (wchar_t *)local_2c8._s_0.X,(longlong)iVar5);
      if (iVar6 != 0) goto LAB_141bdd0d3;
    }
    bVar3 = false;
    if (iVar4 != iVar5) goto LAB_141bdd0d3;
  }
  else {
LAB_141bdd0d3:
    bVar3 = true;
  }
  if ((wchar_t *)local_2c8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2c8._s_0.X);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2c8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if ((wchar_t *)local_2c8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2c8._s_0.X);
    }
  }
  pFVar9 = FString::ConstructFromPtrSize
                     ((FString *)&local_2a8._s_0,TIntVector2TestData<__int64>::ZeroString.DataPtr,
                      TIntVector2TestData<__int64>::ZeroString.Size);
  pFVar11 = pFVar13;
  if (&local_290 != pFVar9) {
    pFVar11 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if ((void *)local_2a8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_2a8._s_0.X);
  }
  local_2b0 = 0;
  local_2b8 = 0;
  pFVar10 = (FScriptContainerElement *)L"";
  if (iVar12 != 0) {
    pFVar10 = pFVar11;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar10,L"X=",&local_2b8);
  if (bVar3) {
    pFVar10 = (FScriptContainerElement *)L"";
    if (iVar12 != 0) {
      pFVar10 = pFVar11;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar10,L"Y=",&local_2b0);
    if (((!bVar3) || (local_2b8 != 0)) || (local_2b0 != 0)) goto LAB_141bdd1cd;
    bVar3 = false;
  }
  else {
LAB_141bdd1cd:
    bVar3 = true;
  }
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2c8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if ((wchar_t *)local_2c8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2c8._s_0.X);
    }
  }
  pFVar9 = FString::ConstructFromPtrSize
                     ((FString *)&local_2a8._s_0,TIntVector2TestData<__int64>::MinMaxString.DataPtr,
                      TIntVector2TestData<__int64>::MinMaxString.Size);
  if (&local_280 != pFVar9) {
    pFVar13 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar14 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if ((void *)local_2a8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_2a8._s_0.X);
  }
  local_2b0 = 0;
  local_2b8 = 0;
  pFVar11 = (FScriptContainerElement *)L"";
  if (iVar14 != 0) {
    pFVar11 = pFVar13;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar11,L"X=",&local_2b8);
  if (bVar3) {
    pFVar11 = (FScriptContainerElement *)L"";
    if (iVar14 != 0) {
      pFVar11 = pFVar13;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar11,L"Y=",&local_2b0);
    if (((bVar3) && (local_2b8 == -0x8000000000000000)) && (local_2b0 == 0x7fffffffffffffff)) {
      bVar3 = false;
      goto LAB_141bdd2dc;
    }
  }
  bVar3 = true;
LAB_141bdd2dc:
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2c8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if ((wchar_t *)local_2c8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2c8._s_0.X);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return;
}

// TestIntVector2<unsigned___int64> @ 141bdd370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TestIntVector2<unsigned___int64>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  FAutomationTestFramework *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStack_2e8 [32];
  TIntVector2<unsigned___int64>_u_0 local_2c8;
  TIntVector2<unsigned___int64>_u_0 local_2b8;
  ulong64 local_2a8;
  ulong64 local_2a0 [2];
  FString local_290;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2e8;
  pFVar13 = (FScriptContainerElement *)0x0;
  local_148.Base = local_128;
  local_148.CurPos = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.End = (wchar_t *)local_28;
  local_2c8._s_0.X = 0;
  local_2c8._s_0.Y = 0;
  pTVar7 = UE::Math::operator<<<wchar_t>
                     (&local_148,(TIntVector2<unsigned___int64> *)&local_2c8._s_0);
  iVar14 = TIntVector2TestData<unsigned___int64>::ZeroString.Size;
  iVar12 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<unsigned___int64>::ZeroString.Size == iVar12) {
    if ((TIntVector2TestData<unsigned___int64>::ZeroString.Size != 0) && (iVar12 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<unsigned___int64>::ZeroString.DataPtr,pTVar7->Base,
                         (longlong)iVar12);
      if (iVar4 != 0) goto LAB_141bdd438;
    }
    if (iVar14 != iVar12) goto LAB_141bdd438;
  }
  else {
LAB_141bdd438:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2c8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if ((void *)local_2c8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2c8._s_0.X);
    }
  }
  local_148.CurPos = local_148.Base;
  local_2c8._s_0.X = 0;
  local_2c8._s_0.Y = 0xffffffffffffffff;
  pTVar7 = UE::Math::operator<<<wchar_t>
                     (&local_148,(TIntVector2<unsigned___int64> *)&local_2c8._s_0);
  iVar14 = TIntVector2TestData<unsigned___int64>::MinMaxString.Size;
  iVar12 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<unsigned___int64>::MinMaxString.Size == iVar12) {
    if ((TIntVector2TestData<unsigned___int64>::MinMaxString.Size != 0) && (iVar12 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<unsigned___int64>::MinMaxString.DataPtr,pTVar7->Base,
                         (longlong)iVar12);
      if (iVar4 != 0) goto LAB_141bdd4e9;
    }
    if (iVar14 != iVar12) goto LAB_141bdd4e9;
  }
  else {
LAB_141bdd4e9:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2c8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if ((void *)local_2c8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2c8._s_0.X);
    }
  }
  local_268.Base = local_248;
  local_2b8._s_0.X = 0;
  local_268.CurPos = local_248;
  local_2b8._s_0.Y = 0;
  local_268.End = (wchar_t *)&local_148;
  local_2c8._s_0.X = 0;
  local_2c8._s_0.Y = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector2<unsigned___int64> *)&local_2b8._s_0);
  FString::AppendChars
            ((FString *)&local_2c8._s_0,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar12 = TIntVector2TestData<unsigned___int64>::ZeroString.Size;
  iVar14 = 0;
  iVar4 = local_2c8._s_0.Y._0_4_ + -1;
  if (local_2c8._s_0.Y._0_4_ == 0) {
    iVar4 = iVar14;
  }
  if (TIntVector2TestData<unsigned___int64>::ZeroString.Size == iVar4) {
    if ((TIntVector2TestData<unsigned___int64>::ZeroString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<unsigned___int64>::ZeroString.DataPtr,
                         (wchar_t *)local_2c8._s_0.X,(longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bdd5dd;
    }
    bVar3 = false;
    if (iVar12 != iVar4) goto LAB_141bdd5dd;
  }
  else {
LAB_141bdd5dd:
    bVar3 = true;
  }
  if ((wchar_t *)local_2c8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2c8._s_0.X);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2b8._s_0.X);
    }
  }
  local_268.Base = local_248;
  local_2b8._s_0.X = 0;
  local_268.CurPos = local_248;
  local_2b8._s_0.Y = 0xffffffffffffffff;
  local_268.End = (wchar_t *)&local_148;
  local_2c8._s_0.X = 0;
  local_2c8._s_0.Y = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector2<unsigned___int64> *)&local_2b8._s_0);
  FString::AppendChars
            ((FString *)&local_2c8._s_0,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar4 = TIntVector2TestData<unsigned___int64>::MinMaxString.Size;
  iVar12 = 0;
  iVar5 = local_2c8._s_0.Y._0_4_ + -1;
  if (local_2c8._s_0.Y._0_4_ == 0) {
    iVar5 = iVar12;
  }
  if (TIntVector2TestData<unsigned___int64>::MinMaxString.Size == iVar5) {
    if ((TIntVector2TestData<unsigned___int64>::MinMaxString.Size != 0) && (iVar5 != 0)) {
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<unsigned___int64>::MinMaxString.DataPtr,
                         (wchar_t *)local_2c8._s_0.X,(longlong)iVar5);
      if (iVar6 != 0) goto LAB_141bdd6e5;
    }
    bVar3 = false;
    if (iVar4 != iVar5) goto LAB_141bdd6e5;
  }
  else {
LAB_141bdd6e5:
    bVar3 = true;
  }
  if ((wchar_t *)local_2c8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2c8._s_0.X);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2b8._s_0.X);
    }
  }
  pFVar9 = FString::ConstructFromPtrSize
                     ((FString *)&local_2b8._s_0,
                      TIntVector2TestData<unsigned___int64>::ZeroString.DataPtr,
                      TIntVector2TestData<unsigned___int64>::ZeroString.Size);
  pFVar11 = pFVar13;
  if (&local_290 != pFVar9) {
    pFVar11 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if ((void *)local_2b8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_2b8._s_0.X);
  }
  local_2a0[0] = 0;
  local_2a8 = 0;
  pFVar10 = (FScriptContainerElement *)L"";
  if (iVar12 != 0) {
    pFVar10 = pFVar11;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar10,L"X=",&local_2a8);
  if (bVar3) {
    pFVar10 = (FScriptContainerElement *)L"";
    if (iVar12 != 0) {
      pFVar10 = pFVar11;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar10,L"Y=",local_2a0);
    if (((!bVar3) || (local_2a8 != 0)) || (local_2a0[0] != 0)) goto LAB_141bdd7df;
    bVar3 = false;
  }
  else {
LAB_141bdd7df:
    bVar3 = true;
  }
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2b8._s_0.X);
    }
  }
  pFVar9 = FString::ConstructFromPtrSize
                     ((FString *)&local_2b8._s_0,
                      TIntVector2TestData<unsigned___int64>::MinMaxString.DataPtr,
                      TIntVector2TestData<unsigned___int64>::MinMaxString.Size);
  if (&local_280 != pFVar9) {
    pFVar13 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar14 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if ((void *)local_2b8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_2b8._s_0.X);
  }
  local_2a0[0] = 0;
  local_2a8 = 0;
  pFVar11 = (FScriptContainerElement *)L"";
  if (iVar14 != 0) {
    pFVar11 = pFVar13;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar11,L"X=",&local_2a8);
  if (bVar3) {
    pFVar11 = (FScriptContainerElement *)L"";
    if (iVar14 != 0) {
      pFVar11 = pFVar13;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar11,L"Y=",local_2a0);
    if (((bVar3) && (local_2a8 == 0)) && (local_2a0[0] == 0xffffffffffffffff)) {
      bVar3 = false;
      goto LAB_141bdd8db;
    }
  }
  bVar3 = true;
LAB_141bdd8db:
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2b8._s_0.X);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return;
}

// TestIntVector3<int> @ 141bdd970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TestIntVector3<int>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 auStack_2e8 [32];
  FString local_2c8;
  TIntVector3<int>_u_0 local_2b8;
  TIntVector3<int>_u_0 local_2a8;
  FString local_298;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2e8;
  pFVar11 = (FScriptContainerElement *)0x0;
  local_148.Base = local_128;
  local_148.CurPos = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.End = (wchar_t *)local_28;
  local_2b8._0_8_ = 0;
  iVar12 = 0;
  local_2b8._s_0.Z = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector3<int> *)&local_2b8._s_0);
  iVar3 = TIntVector3TestData<int>::ZeroString.Size;
  iVar10 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<int>::ZeroString.Size == iVar10) {
    if ((TIntVector3TestData<int>::ZeroString.Size != 0) && (iVar10 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<int>::ZeroString.DataPtr,pTVar6->Base,(longlong)iVar10)
      ;
      if (iVar5 != 0) goto LAB_141bdda38;
    }
    if (iVar3 != iVar10) goto LAB_141bdda38;
  }
  else {
LAB_141bdda38:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  local_148.CurPos = local_148.Base;
  local_2b8._0_8_ = 0x80000000;
  local_2b8._s_0.Z = 0x7fffffff;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector3<int> *)&local_2b8._s_0);
  iVar3 = TIntVector3TestData<int>::MinZeroMaxString.Size;
  iVar10 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<int>::MinZeroMaxString.Size == iVar10) {
    if ((TIntVector3TestData<int>::MinZeroMaxString.Size != 0) && (iVar10 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<int>::MinZeroMaxString.DataPtr,pTVar6->Base,
                         (longlong)iVar10);
      if (iVar5 != 0) goto LAB_141bddaf0;
    }
    if (iVar3 != iVar10) goto LAB_141bddaf0;
  }
  else {
LAB_141bddaf0:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  local_268.Base = local_248;
  local_2b8._0_8_ = 0;
  local_268.CurPos = local_248;
  local_2b8._s_0.Z = 0;
  local_268.End = (wchar_t *)&local_148;
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector3<int> *)&local_2b8._s_0);
  FString::AppendChars
            (&local_2c8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar3 = TIntVector3TestData<int>::ZeroString.Size;
  iVar10 = local_2c8.Data.ArrayNum + -1;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar10 = iVar12;
  }
  if (TIntVector3TestData<int>::ZeroString.Size == iVar10) {
    if ((TIntVector3TestData<int>::ZeroString.Size != 0) && (iVar10 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<int>::ZeroString.DataPtr,
                         (wchar_t *)local_2c8.Data.AllocatorInstance.Data,(longlong)iVar10);
      if (iVar5 != 0) goto LAB_141bddbe4;
    }
    bVar4 = false;
    if (iVar3 != iVar10) goto LAB_141bddbe4;
  }
  else {
LAB_141bddbe4:
    bVar4 = true;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_2b8._0_8_ = 0x80000000;
  local_268.End = (wchar_t *)&local_148;
  local_2b8._s_0.Z = 0x7fffffff;
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector3<int> *)&local_2b8._s_0);
  FString::AppendChars
            (&local_2c8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar3 = TIntVector3TestData<int>::MinZeroMaxString.Size;
  iVar10 = local_2c8.Data.ArrayNum + -1;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  if (TIntVector3TestData<int>::MinZeroMaxString.Size == iVar10) {
    if ((TIntVector3TestData<int>::MinZeroMaxString.Size != 0) && (iVar10 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<int>::MinZeroMaxString.DataPtr,
                         (wchar_t *)local_2c8.Data.AllocatorInstance.Data,(longlong)iVar10);
      if (iVar5 != 0) goto LAB_141bddcf3;
    }
    bVar4 = false;
    if (iVar3 != iVar10) goto LAB_141bddcf3;
  }
  else {
LAB_141bddcf3:
    bVar4 = true;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     (&local_2c8,TIntVector3TestData<int>::ZeroString.DataPtr,
                      TIntVector3TestData<int>::ZeroString.Size);
  pFVar9 = pFVar11;
  if (&local_298 != pFVar8) {
    pFVar9 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_298.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_298.Data.AllocatorInstance.Data = pFVar9;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  bVar4 = UE::Math::TIntVector3<int>::InitFromString((TIntVector3<int> *)&local_2a8._s_0,&local_298)
  ;
  if ((((bVar4) && (local_2a8._s_0.X == 0)) && (local_2a8._s_0.Y == 0)) && (local_2a8._s_0.Z == 0))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FString::ConstructFromPtrSize
                     (&local_2c8,TIntVector3TestData<int>::MinZeroMaxString.DataPtr,
                      TIntVector3TestData<int>::MinZeroMaxString.Size);
  if (&local_280 != pFVar8) {
    pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  local_2a8._4_8_ = 0;
  local_2a8._s_0.X = 0;
  pFVar9 = (FScriptContainerElement *)L"";
  if (iVar12 != 0) {
    pFVar9 = pFVar11;
  }
  bVar4 = FParse::Value((wchar_t *)pFVar9,L"X=",local_2a8.XYZ);
  if (bVar4) {
    pFVar9 = (FScriptContainerElement *)L"";
    if (iVar12 != 0) {
      pFVar9 = pFVar11;
    }
    bVar4 = FParse::Value((wchar_t *)pFVar9,L"Y=",&local_2a8._s_0.Y);
    if (bVar4) {
      pFVar9 = (FScriptContainerElement *)L"";
      if (iVar12 != 0) {
        pFVar9 = pFVar11;
      }
      bVar4 = FParse::Value((wchar_t *)pFVar9,L"Z=",&local_2a8._s_0.Z);
      if (((bVar4) && (local_2a8._s_0.X == -0x80000000)) &&
         ((local_2a8._s_0.Y == 0 && (local_2a8._s_0.Z == 0x7fffffff)))) {
        bVar4 = false;
        goto LAB_141bddef8;
      }
    }
  }
  bVar4 = true;
LAB_141bddef8:
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return;
}

// TestIntVector3<unsigned_int> @ 141bddf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TestIntVector3<unsigned_int>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 auStack_2e8 [32];
  FString local_2c8;
  TIntVector3<unsigned_int>_u_0 local_2b8;
  TIntVector3<unsigned_int>_u_0 local_2a8;
  FString local_298;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2e8;
  pFVar10 = (FScriptContainerElement *)0x0;
  local_148.Base = local_128;
  local_148.CurPos = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.End = (wchar_t *)local_28;
  local_2b8._0_8_ = 0;
  iVar13 = 0;
  local_2b8._s_0.Z = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector3<unsigned_int> *)&local_2b8._s_0);
  iVar3 = TIntVector3TestData<unsigned_int>::ZeroString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<unsigned_int>::ZeroString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned_int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned_int>::ZeroString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bde058;
    }
    if (iVar3 != iVar11) goto LAB_141bde058;
  }
  else {
LAB_141bde058:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  local_148.CurPos = local_148.Base;
  local_2b8._0_8_ = 0;
  local_2b8._s_0.Z = 0xffffffff;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector3<unsigned_int> *)&local_2b8._s_0);
  iVar3 = TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned_int>::MinZeroMaxString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bde108;
    }
    if (iVar3 != iVar11) goto LAB_141bde108;
  }
  else {
LAB_141bde108:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  local_268.Base = local_248;
  local_2b8._0_8_ = 0;
  local_268.CurPos = local_248;
  local_2b8._s_0.Z = 0;
  local_268.End = (wchar_t *)&local_148;
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector3<unsigned_int> *)&local_2b8._s_0);
  FString::AppendChars
            (&local_2c8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar3 = TIntVector3TestData<unsigned_int>::ZeroString.Size;
  iVar11 = local_2c8.Data.ArrayNum + -1;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar11 = iVar13;
  }
  if (TIntVector3TestData<unsigned_int>::ZeroString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned_int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned_int>::ZeroString.DataPtr,
                         (wchar_t *)local_2c8.Data.AllocatorInstance.Data,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bde1fc;
    }
    bVar4 = false;
    if (iVar3 != iVar11) goto LAB_141bde1fc;
  }
  else {
LAB_141bde1fc:
    bVar4 = true;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  local_268.Base = local_248;
  local_2b8._0_8_ = 0;
  local_268.CurPos = local_248;
  local_2b8._s_0.Z = 0xffffffff;
  local_268.End = (wchar_t *)&local_148;
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector3<unsigned_int> *)&local_2b8._s_0);
  FString::AppendChars
            (&local_2c8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar3 = TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size;
  iVar11 = local_2c8.Data.ArrayNum + -1;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar11 = iVar13;
  }
  if (TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned_int>::MinZeroMaxString.DataPtr,
                         (wchar_t *)local_2c8.Data.AllocatorInstance.Data,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bde303;
    }
    bVar4 = false;
    if (iVar3 != iVar11) goto LAB_141bde303;
  }
  else {
LAB_141bde303:
    bVar4 = true;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FString::ConstructFromPtrSize
                     (&local_2c8,TIntVector3TestData<unsigned_int>::ZeroString.DataPtr,
                      TIntVector3TestData<unsigned_int>::ZeroString.Size);
  pFVar12 = pFVar10;
  if (&local_280 != pFVar8) {
    pFVar12 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  local_2a8._4_8_ = 0;
  local_2a8._s_0.X = 0;
  pFVar9 = (FScriptContainerElement *)L"";
  if (iVar13 != 0) {
    pFVar9 = pFVar12;
  }
  bVar4 = FParse::Value((wchar_t *)pFVar9,L"X=",local_2a8.XYZ);
  if (bVar4) {
    pFVar9 = (FScriptContainerElement *)L"";
    if (iVar13 != 0) {
      pFVar9 = pFVar12;
    }
    bVar4 = FParse::Value((wchar_t *)pFVar9,L"Y=",&local_2a8._s_0.Y);
    if (bVar4) {
      pFVar9 = (FScriptContainerElement *)L"";
      if (iVar13 != 0) {
        pFVar9 = pFVar12;
      }
      bVar4 = FParse::Value((wchar_t *)pFVar9,L"Z=",&local_2a8._s_0.Z);
      if ((((bVar4) && (local_2a8._s_0.X == 0)) && (local_2a8._s_0.Y == 0)) &&
         (local_2a8._s_0.Z == 0)) {
        bVar4 = false;
        goto LAB_141bde425;
      }
    }
  }
  bVar4 = true;
LAB_141bde425:
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     (&local_2c8,TIntVector3TestData<unsigned_int>::MinZeroMaxString.DataPtr,
                      TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size);
  if (&local_298 != pFVar8) {
    pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_298.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_298.Data.AllocatorInstance.Data = pFVar10;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  bVar4 = UE::Math::TIntVector3<unsigned_int>::InitFromString
                    ((TIntVector3<unsigned_int> *)&local_2a8._s_0,&local_298);
  if (((bVar4) && (local_2a8._s_0.X == 0)) &&
     ((local_2a8._s_0.Y == 0 && (local_2a8._s_0.Z == 0xffffffff)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return;
}

// TestIntVector3<__int64> @ 141bde5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl TestIntVector3<__int64>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 auStack_2f8 [32];
  TIntVector3<__int64>_u_0 local_2d8;
  TIntVector3<__int64>_u_0 local_2c0;
  FString local_2a8;
  TIntVector3<__int64>_u_0 local_290;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2f8;
  local_148.Base = local_128;
  pFVar11 = (FScriptContainerElement *)0x0;
  local_148.CurPos = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.End = (wchar_t *)local_28;
  local_2d8._s_0.Z = 0;
  local_2d8._s_0.X = 0;
  local_2d8._s_0.Y = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector3<__int64> *)&local_2d8._s_0);
  iVar12 = TIntVector3TestData<__int64>::ZeroString.Size;
  iVar10 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<__int64>::ZeroString.Size == iVar10) {
    if ((TIntVector3TestData<__int64>::ZeroString.Size != 0) && (iVar10 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<__int64>::ZeroString.DataPtr,pTVar6->Base,
                         (longlong)iVar10);
      if (iVar4 != 0) goto LAB_141bde671;
    }
    if (iVar12 != iVar10) goto LAB_141bde671;
  }
  else {
LAB_141bde671:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((void *)local_2d8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  local_148.CurPos = local_148.Base;
  local_2d8._s_0.X = (long64)___xmm_00000000000000008000000000000000;
  local_2d8._s_0.Y = _UNK_150689528;
  local_2d8._s_0.Z = 0x7fffffffffffffff;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_148,(TIntVector3<__int64> *)&local_2d8._s_0);
  iVar12 = TIntVector3TestData<__int64>::MinZeroMaxString.Size;
  iVar10 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<__int64>::MinZeroMaxString.Size == iVar10) {
    if ((TIntVector3TestData<__int64>::MinZeroMaxString.Size != 0) && (iVar10 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<__int64>::MinZeroMaxString.DataPtr,pTVar6->Base,
                         (longlong)iVar10);
      if (iVar4 != 0) goto LAB_141bde731;
    }
    if (iVar12 != iVar10) goto LAB_141bde731;
  }
  else {
LAB_141bde731:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((void *)local_2d8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  local_268.Base = local_248;
  local_290._s_0.Z = 0;
  local_268.CurPos = local_248;
  local_2d8._s_0.X = 0;
  local_268.End = (wchar_t *)&local_148;
  local_2d8._s_0.Y = 0;
  local_290._s_0.X = 0;
  local_290._s_0.Y = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector3<__int64> *)&local_290._s_0);
  FString::AppendChars
            ((FString *)&local_2d8._s_0,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar10 = TIntVector3TestData<__int64>::ZeroString.Size;
  iVar12 = 0;
  iVar4 = local_2d8._s_0.Y._0_4_ + -1;
  if (local_2d8._s_0.Y._0_4_ == 0) {
    iVar4 = iVar12;
  }
  if (TIntVector3TestData<__int64>::ZeroString.Size == iVar4) {
    if ((TIntVector3TestData<__int64>::ZeroString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<__int64>::ZeroString.DataPtr,
                         (wchar_t *)local_2d8._s_0.X,(longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bde829;
    }
    bVar3 = false;
    if (iVar10 != iVar4) goto LAB_141bde829;
  }
  else {
LAB_141bde829:
    bVar3 = true;
  }
  if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._s_0.X);
  }
  if (bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_290._s_0.Z = 0x7fffffffffffffff;
  local_268.End = (wchar_t *)&local_148;
  local_2d8._s_0.X = 0;
  local_290._s_0.X = (long64)___xmm_00000000000000008000000000000000;
  local_290._s_0.Y = _UNK_150689528;
  local_2d8._s_0.Y = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector3<__int64> *)&local_290._s_0);
  FString::AppendChars
            ((FString *)&local_2d8._s_0,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar10 = TIntVector3TestData<__int64>::MinZeroMaxString.Size;
  iVar4 = local_2d8._s_0.Y._0_4_ + -1;
  if (local_2d8._s_0.Y._0_4_ == 0) {
    iVar4 = 0;
  }
  if (TIntVector3TestData<__int64>::MinZeroMaxString.Size == iVar4) {
    if ((TIntVector3TestData<__int64>::MinZeroMaxString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<__int64>::MinZeroMaxString.DataPtr,
                         (wchar_t *)local_2d8._s_0.X,(longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bde936;
    }
    bVar3 = false;
    if (iVar10 != iVar4) goto LAB_141bde936;
  }
  else {
LAB_141bde936:
    bVar3 = true;
  }
  if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._s_0.X);
  }
  if (bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2d8._s_0,TIntVector3TestData<__int64>::ZeroString.DataPtr,
                      TIntVector3TestData<__int64>::ZeroString.Size);
  pFVar9 = pFVar11;
  if (&local_2a8 != pFVar8) {
    pFVar9 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_2a8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_2a8.Data.AllocatorInstance.Data = pFVar9;
  }
  if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._s_0.X);
  }
  bVar3 = UE::Math::TIntVector3<__int64>::InitFromString
                    ((TIntVector3<__int64> *)&local_2c0._s_0,&local_2a8);
  if ((((bVar3) && (local_2c0._s_0.X == 0)) && (local_2c0._s_0.Y == 0)) && (local_2c0._s_0.Z == 0))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2d8._s_0,
                      TIntVector3TestData<__int64>::MinZeroMaxString.DataPtr,
                      TIntVector3TestData<__int64>::MinZeroMaxString.Size);
  if (&local_278 != pFVar8) {
    pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._s_0.X);
  }
  local_2c0._s_0.Z = 0;
  local_2c0._s_0.Y = 0;
  local_2c0._s_0.X = 0;
  pFVar9 = (FScriptContainerElement *)L"";
  if (iVar12 != 0) {
    pFVar9 = pFVar11;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar9,L"X=",local_2c0.XYZ);
  if (bVar3) {
    pFVar9 = (FScriptContainerElement *)L"";
    if (iVar12 != 0) {
      pFVar9 = pFVar11;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar9,L"Y=",&local_2c0._s_0.Y);
    if (bVar3) {
      pFVar9 = (FScriptContainerElement *)L"";
      if (iVar12 != 0) {
        pFVar9 = pFVar11;
      }
      bVar3 = FParse::Value((wchar_t *)pFVar9,L"Z=",&local_2c0._s_0.Z);
      if (((bVar3) && (local_2c0._s_0.X == -0x8000000000000000)) &&
         ((local_2c0._s_0.Y == 0 && (local_2c0._s_0.Z == 0x7fffffffffffffff)))) {
        bVar3 = false;
        goto LAB_141bdeb43;
      }
    }
  }
  bVar3 = true;
LAB_141bdeb43:
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return;
}

// TestIntVector3<unsigned___int64> @ 141bdebe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TestIntVector3<unsigned___int64>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 auStack_2f8 [32];
  TIntVector3<unsigned___int64>_u_0 local_2d8;
  TIntVector3<unsigned___int64>_u_0 local_2c0;
  FString local_2a8;
  TIntVector3<unsigned___int64>_u_0 local_298;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2f8;
  pFVar10 = (FScriptContainerElement *)0x0;
  local_148.Base = local_128;
  local_148.CurPos = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.End = (wchar_t *)local_28;
  local_2d8._s_0.X = 0;
  local_2d8._s_0.Y = 0;
  local_2d8._s_0.Z = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>
                     (&local_148,(TIntVector3<unsigned___int64> *)&local_2d8._s_0);
  iVar13 = TIntVector3TestData<unsigned___int64>::ZeroString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<unsigned___int64>::ZeroString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned___int64>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned___int64>::ZeroString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar4 != 0) goto LAB_141bdecad;
    }
    if (iVar13 != iVar11) goto LAB_141bdecad;
  }
  else {
LAB_141bdecad:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((void *)local_2d8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  local_148.CurPos = local_148.Base;
  local_2d8._s_0.X = 0;
  local_2d8._s_0.Y = 0;
  local_2d8._s_0.Z = 0xffffffffffffffff;
  pTVar6 = UE::Math::operator<<<wchar_t>
                     (&local_148,(TIntVector3<unsigned___int64> *)&local_2d8._s_0);
  iVar13 = TIntVector3TestData<unsigned___int64>::MinZeroMaxString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<unsigned___int64>::MinZeroMaxString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned___int64>::MinZeroMaxString.Size != 0) && (iVar11 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned___int64>::MinZeroMaxString.DataPtr,
                         pTVar6->Base,(longlong)iVar11);
      if (iVar4 != 0) goto LAB_141bded63;
    }
    if (iVar13 != iVar11) goto LAB_141bded63;
  }
  else {
LAB_141bded63:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((void *)local_2d8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  local_268.Base = local_248;
  local_298._s_0.X = 0;
  local_268.CurPos = local_248;
  local_298._s_0.Y = 0;
  local_268.End = (wchar_t *)&local_148;
  local_298._s_0.Z = 0;
  local_2d8._s_0.X = 0;
  local_2d8._s_0.Y = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector3<unsigned___int64> *)&local_298._s_0);
  FString::AppendChars
            ((FString *)&local_2d8._s_0,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar11 = TIntVector3TestData<unsigned___int64>::ZeroString.Size;
  iVar13 = 0;
  iVar4 = local_2d8._s_0.Y._0_4_ + -1;
  if (local_2d8._s_0.Y._0_4_ == 0) {
    iVar4 = iVar13;
  }
  if (TIntVector3TestData<unsigned___int64>::ZeroString.Size == iVar4) {
    if ((TIntVector3TestData<unsigned___int64>::ZeroString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned___int64>::ZeroString.DataPtr,
                         (wchar_t *)local_2d8._s_0.X,(longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bdee5c;
    }
    bVar3 = false;
    if (iVar11 != iVar4) goto LAB_141bdee5c;
  }
  else {
LAB_141bdee5c:
    bVar3 = true;
  }
  if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._s_0.X);
  }
  if (bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  local_268.Base = local_248;
  local_298._s_0.X = 0;
  local_268.CurPos = local_248;
  local_298._s_0.Y = 0;
  local_268.End = (wchar_t *)&local_148;
  local_298._s_0.Z = 0xffffffffffffffff;
  local_2d8._s_0.X = 0;
  local_2d8._s_0.Y = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_268,(TIntVector3<unsigned___int64> *)&local_298._s_0);
  FString::AppendChars
            ((FString *)&local_2d8._s_0,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  iVar11 = TIntVector3TestData<unsigned___int64>::MinZeroMaxString.Size;
  iVar4 = local_2d8._s_0.Y._0_4_ + -1;
  if (local_2d8._s_0.Y._0_4_ == 0) {
    iVar4 = iVar13;
  }
  if (TIntVector3TestData<unsigned___int64>::MinZeroMaxString.Size == iVar4) {
    if ((TIntVector3TestData<unsigned___int64>::MinZeroMaxString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned___int64>::MinZeroMaxString.DataPtr,
                         (wchar_t *)local_2d8._s_0.X,(longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bdef69;
    }
    bVar3 = false;
    if (iVar11 != iVar4) goto LAB_141bdef69;
  }
  else {
LAB_141bdef69:
    bVar3 = true;
  }
  if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._s_0.X);
  }
  if (bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2d8._s_0,
                      TIntVector3TestData<unsigned___int64>::ZeroString.DataPtr,
                      TIntVector3TestData<unsigned___int64>::ZeroString.Size);
  pFVar12 = pFVar10;
  if (&local_278 != pFVar8) {
    pFVar12 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._s_0.X);
  }
  local_2c0._s_0.Z = 0;
  local_2c0._s_0.Y = 0;
  local_2c0._s_0.X = 0;
  pFVar9 = (FScriptContainerElement *)L"";
  if (iVar13 != 0) {
    pFVar9 = pFVar12;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar9,L"X=",local_2c0.XYZ);
  if (bVar3) {
    pFVar9 = (FScriptContainerElement *)L"";
    if (iVar13 != 0) {
      pFVar9 = pFVar12;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar9,L"Y=",&local_2c0._s_0.Y);
    if (bVar3) {
      pFVar9 = (FScriptContainerElement *)L"";
      if (iVar13 != 0) {
        pFVar9 = pFVar12;
      }
      bVar3 = FParse::Value((wchar_t *)pFVar9,L"Z=",&local_2c0._s_0.Z);
      if ((((bVar3) && (local_2c0._s_0.X == 0)) && (local_2c0._s_0.Y == 0)) &&
         (local_2c0._s_0.Z == 0)) {
        bVar3 = false;
        goto LAB_141bdf08f;
      }
    }
  }
  bVar3 = true;
LAB_141bdf08f:
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  if (bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2d8._s_0,
                      TIntVector3TestData<unsigned___int64>::MinZeroMaxString.DataPtr,
                      TIntVector3TestData<unsigned___int64>::MinZeroMaxString.Size);
  if (&local_2a8 != pFVar8) {
    pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_2a8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_2a8.Data.AllocatorInstance.Data = pFVar10;
  }
  if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._s_0.X);
  }
  bVar3 = UE::Math::TIntVector3<unsigned___int64>::InitFromString
                    ((TIntVector3<unsigned___int64> *)&local_2c0._s_0,&local_2a8);
  if (((bVar3) && (local_2c0._s_0.X == 0)) &&
     ((local_2c0._s_0.Y == 0 && (local_2c0._s_0.Z == 0xffffffffffffffff)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2d8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if ((wchar_t *)local_2d8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2d8._s_0.X);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return;
}

// TestIntVector4<int> @ 141bdf200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl TestIntVector4<int>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined1 auStack_2d8 [32];
  TIntVector4<int>_u_0 local_2b8;
  TIntVector4<int>_u_0 local_2a8;
  FString local_298;
  FString local_288;
  TIntVector4<int>_u_0 local_278 [2];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [128];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  pFVar10 = (FScriptContainerElement *)0x0;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_2b8._0_8_ = (void *)0x0;
  local_2b8._8_8_ = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_138,(TIntVector4<int> *)&local_2b8._s_0);
  iVar3 = TIntVector4TestData<int>::ZeroString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<int>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<int>::ZeroString.DataPtr,pTVar6->Base,(longlong)iVar11)
      ;
      if (iVar5 != 0) goto LAB_141bdf2c1;
    }
    if (iVar3 != iVar11) goto LAB_141bdf2c1;
  }
  else {
LAB_141bdf2c1:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_138.CurPos = local_138.Base;
  local_2b8._0_8_ = ___xmm_000000017fffffff0000000080000000;
  local_2b8._8_8_ = _UNK_150744138;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_138,(TIntVector4<int> *)&local_2b8._s_0);
  iVar3 = TIntVector4TestData<int>::MinZeroMaxOneString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<int>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<int>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<int>::MinZeroMaxOneString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdf372;
    }
    if (iVar3 != iVar11) goto LAB_141bdf372;
  }
  else {
LAB_141bdf372:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_258.Base = local_238;
  local_2b8._0_8_ = (wchar_t *)0x0;
  local_258.CurPos = local_238;
  local_2b8._8_8_ = 0;
  local_258.End = (wchar_t *)&local_138;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_278[0]._0_8_ = 0;
  local_278[0]._8_8_ = 0;
  UE::Math::operator<<<wchar_t>(&local_258,(TIntVector4<int> *)&local_278[0]._s_0);
  FString::AppendChars
            ((FString *)&local_2b8._s_0,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  iVar3 = TIntVector4TestData<int>::ZeroString.Size;
  iVar11 = local_2b8._s_0.Z + -1;
  if (local_2b8._s_0.Z == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<int>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<int>::ZeroString.DataPtr,(wchar_t *)local_2b8._0_8_,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdf463;
    }
    bVar4 = false;
    if (iVar3 != iVar11) goto LAB_141bdf463;
  }
  else {
LAB_141bdf463:
    bVar4 = true;
  }
  if ((wchar_t *)local_2b8._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2b8._0_8_);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((wchar_t *)local_2b8._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_2b8._0_8_ = (wchar_t *)0x0;
  local_258.End = (wchar_t *)&local_138;
  local_2b8._8_8_ = 0;
  local_278[0]._0_8_ = ___xmm_000000017fffffff0000000080000000;
  local_278[0]._8_8_ = _UNK_150744138;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_258,(TIntVector4<int> *)&local_278[0]._s_0);
  FString::AppendChars
            ((FString *)&local_2b8._s_0,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  iVar3 = TIntVector4TestData<int>::MinZeroMaxOneString.Size;
  iVar11 = local_2b8._s_0.Z + -1;
  if (local_2b8._s_0.Z == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<int>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<int>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<int>::MinZeroMaxOneString.DataPtr,
                         (wchar_t *)local_2b8._0_8_,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdf569;
    }
    bVar4 = false;
    if (iVar3 == iVar11) goto LAB_141bdf56b;
  }
LAB_141bdf569:
  bVar4 = true;
LAB_141bdf56b:
  if ((wchar_t *)local_2b8._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2b8._0_8_);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((wchar_t *)local_2b8._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_278[0]._s_0,TIntVector4TestData<int>::ZeroString.DataPtr,
                      TIntVector4TestData<int>::ZeroString.Size);
  pFVar9 = pFVar10;
  if (&local_298 != pFVar8) {
    pFVar9 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_298.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_298.Data.AllocatorInstance.Data = pFVar9;
  }
  if ((void *)local_278[0]._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_278[0]._0_8_);
  }
  bVar4 = UE::Math::TIntVector4<int>::InitFromString((TIntVector4<int> *)&local_2a8._s_0,&local_298)
  ;
  if ((((bVar4) && (local_2a8._s_0.X == 0)) && (local_2a8._s_0.Y == 0)) &&
     ((local_2a8._s_0.Z == 0 && (local_2a8._s_0.W == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((wchar_t *)local_2b8._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Data.ArrayNum = 0;
  local_288.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_278[0]._s_0,
                      TIntVector4TestData<int>::MinZeroMaxOneString.DataPtr,
                      TIntVector4TestData<int>::MinZeroMaxOneString.Size);
  if (&local_288 != pFVar8) {
    pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_288.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_288.Data.AllocatorInstance.Data = pFVar10;
  }
  if ((void *)local_278[0]._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_278[0]._0_8_);
  }
  bVar4 = UE::Math::TIntVector4<int>::InitFromString((TIntVector4<int> *)&local_2a8._s_0,&local_288)
  ;
  if (((bVar4) && (local_2a8._s_0.X == -0x80000000)) &&
     ((local_2a8._s_0.Y == 0 && ((local_2a8._s_0.Z == 0x7fffffff && (local_2a8._s_0.W == 1)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((wchar_t *)local_2b8._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// TestIntVector4<unsigned_int> @ 141bdf7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TestIntVector4<unsigned_int>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined1 auStack_2d8 [32];
  TIntVector4<unsigned_int>_u_0 local_2b8;
  TIntVector4<unsigned_int>_u_0 local_2a8;
  TIntVector4<unsigned_int>_u_0 local_298;
  FString local_288;
  FString local_278 [2];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [128];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_2d8;
  pFVar10 = (FScriptContainerElement *)0x0;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.End = (wchar_t *)local_18;
  local_2a8._0_8_ = 0;
  local_2a8._8_8_ = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_138,(TIntVector4<unsigned_int> *)&local_2a8._s_0);
  iVar3 = TIntVector4TestData<unsigned_int>::ZeroString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<unsigned_int>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<unsigned_int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<unsigned_int>::ZeroString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdf882;
    }
    if (iVar3 != iVar11) goto LAB_141bdf882;
  }
  else {
LAB_141bdf882:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_138.CurPos = local_138.Base;
  local_2a8._0_8_ = 0;
  local_2a8._8_8_ = 0x1ffffffff;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_138,(TIntVector4<unsigned_int> *)&local_2a8._s_0);
  iVar3 = TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.DataPtr,pTVar6->Base
                         ,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdf93a;
    }
    if (iVar3 != iVar11) goto LAB_141bdf93a;
  }
  else {
LAB_141bdf93a:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_258.Base = local_238;
  local_2b8._0_8_ = (void *)0x0;
  local_258.CurPos = local_238;
  local_2b8._8_8_ = 0;
  local_258.End = (wchar_t *)&local_138;
  local_2a8._0_8_ = (wchar_t *)0x0;
  local_2a8._8_8_ = 0;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_258,(TIntVector4<unsigned_int> *)&local_2b8._s_0);
  FString::AppendChars
            ((FString *)&local_2a8._s_0,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  iVar3 = TIntVector4TestData<unsigned_int>::ZeroString.Size;
  iVar11 = local_2a8._s_0.Z - 1;
  if (local_2a8._s_0.Z == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<unsigned_int>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<unsigned_int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<unsigned_int>::ZeroString.DataPtr,
                         (wchar_t *)local_2a8._0_8_,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdfa2c;
    }
    bVar4 = false;
    if (iVar3 != iVar11) goto LAB_141bdfa2c;
  }
  else {
LAB_141bdfa2c:
    bVar4 = true;
  }
  if ((wchar_t *)local_2a8._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2a8._0_8_);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_258.Base = local_238;
  local_2b8._0_8_ = (void *)0x0;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)&local_138;
  local_2b8._8_8_ = 0x1ffffffff;
  local_2a8._0_8_ = (wchar_t *)0x0;
  local_2a8._8_8_ = 0;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_258,(TIntVector4<unsigned_int> *)&local_2b8._s_0);
  FString::AppendChars
            ((FString *)&local_2a8._s_0,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  iVar3 = TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.Size;
  iVar11 = local_2a8._s_0.Z - 1;
  if (local_2a8._s_0.Z == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.DataPtr,
                         (wchar_t *)local_2a8._0_8_,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdfb39;
    }
    bVar4 = false;
    if (iVar3 == iVar11) goto LAB_141bdfb3b;
  }
LAB_141bdfb39:
  bVar4 = true;
LAB_141bdfb3b:
  if ((wchar_t *)local_2a8._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2a8._0_8_);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Data.ArrayNum = 0;
  local_288.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2b8._s_0,
                      TIntVector4TestData<unsigned_int>::ZeroString.DataPtr,
                      TIntVector4TestData<unsigned_int>::ZeroString.Size);
  pFVar9 = pFVar10;
  if (&local_288 != pFVar8) {
    pFVar9 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_288.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_288.Data.AllocatorInstance.Data = pFVar9;
  }
  if ((void *)local_2b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2b8._0_8_);
  }
  bVar4 = UE::Math::TIntVector4<unsigned_int>::InitFromString
                    ((TIntVector4<unsigned_int> *)&local_298._s_0,&local_288);
  if ((((bVar4) && (local_298._s_0.X == 0)) && (local_298._s_0.Y == 0)) &&
     ((local_298._s_0.Z == 0 && (local_298._s_0.W == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  local_278[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278[0].Data.ArrayNum = 0;
  local_278[0].Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2b8._s_0,
                      TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.DataPtr,
                      TIntVector4TestData<unsigned_int>::MinZeroMaxOneString.Size);
  if (local_278 != pFVar8) {
    pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278[0].Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_278[0].Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_278[0].Data.AllocatorInstance.Data = pFVar10;
  }
  if ((void *)local_2b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2b8._0_8_);
  }
  bVar4 = UE::Math::TIntVector4<unsigned_int>::InitFromString
                    ((TIntVector4<unsigned_int> *)&local_298._s_0,local_278);
  if (((bVar4) && (local_298._s_0.X == 0)) &&
     ((local_298._s_0.Y == 0 && ((local_298._s_0.Z == 0xffffffff && (local_298._s_0.W == 1)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if ((void *)local_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// TestIntVector4<__int64> @ 141bdfd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl TestIntVector4<__int64>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined1 auStack_308 [32];
  TIntVector4<__int64>_u_0 local_2e8;
  FString local_2c8;
  FString local_2b8;
  TIntVector4<__int64>_u_0 local_2a8;
  TIntVector4<__int64>_u_0 local_280;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [128];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_308;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  pFVar10 = (FScriptContainerElement *)0x0;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_2e8._s_0.X = 0;
  local_2e8._s_0.Y = 0;
  local_2e8._s_0.Z = 0;
  local_2e8._s_0.W = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_138,(TIntVector4<__int64> *)&local_2e8._s_0);
  iVar3 = TIntVector4TestData<__int64>::ZeroString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<__int64>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<__int64>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<__int64>::ZeroString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdfe5a;
    }
    if (iVar3 != iVar11) goto LAB_141bdfe5a;
  }
  else {
LAB_141bdfe5a:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((void *)local_2e8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_138.CurPos = local_138.Base;
  local_2e8._s_0.X = (long64)___xmm_00000000000000008000000000000000;
  local_2e8._s_0.Y = _UNK_150689528;
  local_2e8._s_0.Z = ___xmm_00000000000000017fffffffffffffff;
  local_2e8._s_0.W = _UNK_150744128;
  pTVar6 = UE::Math::operator<<<wchar_t>(&local_138,(TIntVector4<__int64> *)&local_2e8._s_0);
  iVar3 = TIntVector4TestData<__int64>::MinZeroMaxOneString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<__int64>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<__int64>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<__int64>::MinZeroMaxOneString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdff19;
    }
    if (iVar3 != iVar11) goto LAB_141bdff19;
  }
  else {
LAB_141bdff19:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((void *)local_2e8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_258.Base = local_238;
  local_2e8._s_0.X = 0;
  local_258.CurPos = local_238;
  local_2e8._s_0.Y = 0;
  local_258.End = (wchar_t *)&local_138;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_280._s_0.X = 0;
  local_280._s_0.Y = 0;
  local_280._s_0.Z = 0;
  local_280._s_0.W = 0;
  UE::Math::operator<<<wchar_t>(&local_258,(TIntVector4<__int64> *)&local_280._s_0);
  FString::AppendChars
            ((FString *)&local_2e8._s_0,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  iVar3 = TIntVector4TestData<__int64>::ZeroString.Size;
  iVar11 = local_2e8._s_0.Y._0_4_ + -1;
  if (local_2e8._s_0.Y._0_4_ == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<__int64>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<__int64>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<__int64>::ZeroString.DataPtr,
                         (wchar_t *)local_2e8._s_0.X,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141be0010;
    }
    bVar4 = false;
    if (iVar3 != iVar11) goto LAB_141be0010;
  }
  else {
LAB_141be0010:
    bVar4 = true;
  }
  if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2e8._s_0.X);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_2e8._s_0.X = 0;
  local_258.End = (wchar_t *)&local_138;
  local_280._s_0.X = (long64)___xmm_00000000000000008000000000000000;
  local_280._s_0.Y = _UNK_150689528;
  local_2e8._s_0.Y = 0;
  local_280._s_0.Z = ___xmm_00000000000000017fffffffffffffff;
  local_280._s_0.W = _UNK_150744128;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_258,(TIntVector4<__int64> *)&local_280._s_0);
  FString::AppendChars
            ((FString *)&local_2e8._s_0,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  iVar3 = TIntVector4TestData<__int64>::MinZeroMaxOneString.Size;
  iVar11 = local_2e8._s_0.Y._0_4_ + -1;
  if (local_2e8._s_0.Y._0_4_ == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<__int64>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<__int64>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<__int64>::MinZeroMaxOneString.DataPtr,
                         (wchar_t *)local_2e8._s_0.X,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141be0121;
    }
    bVar4 = false;
    if (iVar3 == iVar11) goto LAB_141be0123;
  }
LAB_141be0121:
  bVar4 = true;
LAB_141be0123:
  if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2e8._s_0.X);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2e8._s_0,TIntVector4TestData<__int64>::ZeroString.DataPtr,
                      TIntVector4TestData<__int64>::ZeroString.Size);
  pFVar9 = pFVar10;
  if (&local_2c8 != pFVar8) {
    pFVar9 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_2c8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_2c8.Data.AllocatorInstance.Data = pFVar9;
  }
  if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2e8._s_0.X);
  }
  bVar4 = UE::Math::TIntVector4<__int64>::InitFromString
                    ((TIntVector4<__int64> *)&local_2a8._s_0,&local_2c8);
  if ((((bVar4) && (local_2a8._s_0.X == 0)) && (local_2a8._s_0.Y == 0)) &&
     ((local_2a8._s_0.Z == 0 && (local_2a8._s_0.W == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2e8._s_0,
                      TIntVector4TestData<__int64>::MinZeroMaxOneString.DataPtr,
                      TIntVector4TestData<__int64>::MinZeroMaxOneString.Size);
  if (&local_2b8 != pFVar8) {
    pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_2b8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_2b8.Data.AllocatorInstance.Data = pFVar10;
  }
  if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2e8._s_0.X);
  }
  bVar4 = UE::Math::TIntVector4<__int64>::InitFromString
                    ((TIntVector4<__int64> *)&local_2a8._s_0,&local_2b8);
  if (((bVar4) && (local_2a8._s_0.X == -0x8000000000000000)) &&
     ((local_2a8._s_0.Y == 0 &&
      ((local_2a8._s_0.Z == 0x7fffffffffffffff && (local_2a8._s_0.W == 1)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// TestIntVector4<unsigned___int64> @ 141be0390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TestIntVector4<unsigned___int64>(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined1 auStack_308 [32];
  TIntVector4<unsigned___int64>_u_0 local_2e8;
  FString local_2c8;
  FString local_2b8;
  TIntVector4<unsigned___int64>_u_0 local_2a8;
  TIntVector4<unsigned___int64>_u_0 local_288;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [128];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_308;
  pFVar10 = (FScriptContainerElement *)0x0;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.End = (wchar_t *)local_18;
  local_2e8._s_0.X = 0;
  local_2e8._s_0.Y = 0;
  local_2e8._s_0.Z = 0;
  local_2e8._s_0.W = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>
                     (&local_138,(TIntVector4<unsigned___int64> *)&local_2e8._s_0);
  iVar3 = TIntVector4TestData<unsigned___int64>::ZeroString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<unsigned___int64>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<unsigned___int64>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<unsigned___int64>::ZeroString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141be045c;
    }
    if (iVar3 != iVar11) goto LAB_141be045c;
  }
  else {
LAB_141be045c:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((void *)local_2e8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_138.CurPos = local_138.Base;
  local_2e8._s_0.X = 0;
  local_2e8._s_0.Y = 0;
  local_2e8._s_0.Z = 0xffffffffffffffff;
  local_2e8._s_0.W = 1;
  pTVar6 = UE::Math::operator<<<wchar_t>
                     (&local_138,(TIntVector4<unsigned___int64> *)&local_2e8._s_0);
  iVar3 = TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.DataPtr,
                         pTVar6->Base,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141be051b;
    }
    if (iVar3 != iVar11) goto LAB_141be051b;
  }
  else {
LAB_141be051b:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((void *)local_2e8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_258.Base = local_238;
  local_288._s_0.X = 0;
  local_258.CurPos = local_238;
  local_288._s_0.Y = 0;
  local_258.End = (wchar_t *)&local_138;
  local_288._s_0.Z = 0;
  local_288._s_0.W = 0;
  local_2e8._s_0.X = 0;
  local_2e8._s_0.Y = 0;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_258,(TIntVector4<unsigned___int64> *)&local_288._s_0);
  FString::AppendChars
            ((FString *)&local_2e8._s_0,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  iVar3 = TIntVector4TestData<unsigned___int64>::ZeroString.Size;
  iVar11 = local_2e8._s_0.Y._0_4_ + -1;
  if (local_2e8._s_0.Y._0_4_ == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<unsigned___int64>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<unsigned___int64>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<unsigned___int64>::ZeroString.DataPtr,
                         (wchar_t *)local_2e8._s_0.X,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141be0612;
    }
    bVar4 = false;
    if (iVar3 != iVar11) goto LAB_141be0612;
  }
  else {
LAB_141be0612:
    bVar4 = true;
  }
  if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2e8._s_0.X);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_258.Base = local_238;
  local_288._s_0.X = 0;
  local_258.CurPos = local_238;
  local_288._s_0.Y = 0;
  local_258.End = (wchar_t *)&local_138;
  local_288._s_0.Z = 0xffffffffffffffff;
  local_288._s_0.W = 1;
  local_2e8._s_0.X = 0;
  local_2e8._s_0.Y = 0;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&local_258,(TIntVector4<unsigned___int64> *)&local_288._s_0);
  FString::AppendChars
            ((FString *)&local_2e8._s_0,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  iVar3 = TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.Size;
  iVar11 = local_2e8._s_0.Y._0_4_ + -1;
  if (local_2e8._s_0.Y._0_4_ == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.DataPtr,
                         (wchar_t *)local_2e8._s_0.X,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141be0721;
    }
    bVar4 = false;
    if (iVar3 == iVar11) goto LAB_141be0723;
  }
LAB_141be0721:
  bVar4 = true;
LAB_141be0723:
  if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2e8._s_0.X);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2e8._s_0,
                      TIntVector4TestData<unsigned___int64>::ZeroString.DataPtr,
                      TIntVector4TestData<unsigned___int64>::ZeroString.Size);
  pFVar9 = pFVar10;
  if (&local_2c8 != pFVar8) {
    pFVar9 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_2c8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_2c8.Data.AllocatorInstance.Data = pFVar9;
  }
  if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2e8._s_0.X);
  }
  bVar4 = UE::Math::TIntVector4<unsigned___int64>::InitFromString
                    ((TIntVector4<unsigned___int64> *)&local_2a8._s_0,&local_2c8);
  if ((((bVar4) && (local_2a8._s_0.X == 0)) && (local_2a8._s_0.Y == 0)) &&
     ((local_2a8._s_0.Z == 0 && (local_2a8._s_0.W == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  pFVar8 = FString::ConstructFromPtrSize
                     ((FString *)&local_2e8._s_0,
                      TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.DataPtr,
                      TIntVector4TestData<unsigned___int64>::MinZeroMaxOneString.Size);
  if (&local_2b8 != pFVar8) {
    pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_2b8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    local_2b8.Data.AllocatorInstance.Data = pFVar10;
  }
  if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2e8._s_0.X);
  }
  bVar4 = UE::Math::TIntVector4<unsigned___int64>::InitFromString
                    ((TIntVector4<unsigned___int64> *)&local_2a8._s_0,&local_2b8);
  if (((bVar4) && (local_2a8._s_0.X == 0)) &&
     ((local_2a8._s_0.Y == 0 &&
      ((local_2a8._s_0.Z == 0xffffffffffffffff && (local_2a8._s_0.W == 1)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_2e8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2e8,0);
    if ((wchar_t *)local_2e8._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_2e8._s_0.X);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// TestInterlocked<signed_char> @ 141be0980

bool __cdecl
TestInterlocked<signed_char>
          (schar *param_1,schar param_2,schar param_3,
          TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *param_4,wchar_t *param_5,
          wchar_t *param_6)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  FAutomationTestFramework *pFVar6;
  schar *local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = param_1;
  cVar3 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res8);
  if (cVar3 == param_2) {
    if (*param_1 == param_3) {
      return true;
    }
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformAtomicsTest.cpp"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::PrintfImpl(&local_18,L"FPlatformAtomics::Interlocked%s on %s failed");
    (*pcVar2)(pFVar1,&local_18,0);
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformAtomicsTest.cpp"
                       ,0x17,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::PrintfImpl(&local_28,L"FPlatformAtomics::Interlocked%s on %s failed");
    (*pcVar2)(pFVar1,&local_28,0);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestInterlocked<short> @ 141be0ac0

bool __cdecl
TestInterlocked<short>
          (short *param_1,short param_2,short param_3,
          TFunctionRef<short___cdecl(short_volatile_*)> *param_4,wchar_t *param_5,wchar_t *param_6)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  short sVar5;
  FAutomationTestFramework *pFVar6;
  short *local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = param_1;
  sVar5 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res8);
  if (sVar5 == param_2) {
    if (*param_1 == param_3) {
      return true;
    }
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformAtomicsTest.cpp"
                       ,0x1d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::PrintfImpl(&local_18,L"FPlatformAtomics::Interlocked%s on %s failed");
    (*pcVar2)(pFVar1,&local_18,0);
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformAtomicsTest.cpp"
                       ,0x17,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::PrintfImpl(&local_28,L"FPlatformAtomics::Interlocked%s on %s failed");
    (*pcVar2)(pFVar1,&local_28,0);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestInterlocked<int> @ 141be0c00

bool __cdecl
TestInterlocked<int>
          (int *param_1,int param_2,int param_3,TFunctionRef<int___cdecl(int_volatile_*)> *param_4,
          wchar_t *param_5,wchar_t *param_6)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  int *local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = param_1;
  iVar5 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res8);
  if (iVar5 == param_2) {
    if (*param_1 == param_3) {
      return true;
    }
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformAtomicsTest.cpp"
                       ,0x1d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::PrintfImpl(&local_18,L"FPlatformAtomics::Interlocked%s on %s failed");
    (*pcVar2)(pFVar1,&local_18,0);
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformAtomicsTest.cpp"
                       ,0x17,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::PrintfImpl(&local_28,L"FPlatformAtomics::Interlocked%s on %s failed");
    (*pcVar2)(pFVar1,&local_28,0);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestInterlocked<__int64> @ 141be0d40

bool __cdecl
TestInterlocked<__int64>
          (long64 *param_1,long64 param_2,long64 param_3,
          TFunctionRef<__int64___cdecl(__int64_volatile_*)> *param_4,wchar_t *param_5,
          wchar_t *param_6)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  FAutomationTestFramework *pFVar6;
  long64 *local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = param_1;
  lVar5 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res8);
  if (lVar5 == param_2) {
    if (*param_1 == param_3) {
      return true;
    }
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformAtomicsTest.cpp"
                       ,0x1d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::PrintfImpl(&local_18,L"FPlatformAtomics::Interlocked%s on %s failed");
    (*pcVar2)(pFVar1,&local_18,0);
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformAtomicsTest.cpp"
                       ,0x17,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::PrintfImpl(&local_28,L"FPlatformAtomics::Interlocked%s on %s failed");
    (*pcVar2)(pFVar1,&local_28,0);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// WriteToAnsiString<16,char_const_(&)[5]> @ 141be11c0

TStringBuilderWithBuffer<char,16> * __cdecl
WriteToAnsiString<16,char_const_(&)[5]>
          (TStringBuilderWithBuffer<char,16> *__return_storage_ptr__,char (*param_1) [5])

{
  char *pcVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  ulong64 uVar5;
  
  pcVar1 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar4 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pcVar1;
  __return_storage_ptr__->_padding_ = (longlong)pcVar1;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (char (*) [5])0x0) {
    sVar2 = strlen(*param_1);
    iVar4 = (int)sVar2;
  }
  uVar5 = (ulong64)iVar4;
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<char,16> *)(pcVar1 + uVar5)) {
    TStringBuilderBase<char>::Extend((TStringBuilderBase<char> *)__return_storage_ptr__,uVar5);
  }
  if (iVar4 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy((void *)__return_storage_ptr__->_padding_,param_1,uVar5)
    ;
    __return_storage_ptr__->_padding_ = (longlong)pvVar3 + uVar5;
  }
  return __return_storage_ptr__;
}

// WriteToUtf8String<16,char8_t_const_(&)[5]> @ 141be1260

TStringBuilderWithBuffer<char8_t,16> * __cdecl
WriteToUtf8String<16,char8_t_const_(&)[5]>
          (TStringBuilderWithBuffer<char8_t,16> *__return_storage_ptr__,uchar (*param_1) [5])

{
  uchar *puVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  ulong64 uVar5;
  
  puVar1 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar4 = 0;
  __return_storage_ptr__->_padding_ = (longlong)puVar1;
  __return_storage_ptr__->_padding_ = (longlong)puVar1;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (uchar (*) [5])0x0) {
    sVar2 = strlen((char *)param_1);
    iVar4 = (int)sVar2;
  }
  uVar5 = (ulong64)iVar4;
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<char8_t,16> *)(puVar1 + uVar5)) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,uVar5)
    ;
  }
  if (iVar4 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy((void *)__return_storage_ptr__->_padding_,param_1,uVar5)
    ;
    __return_storage_ptr__->_padding_ = (longlong)pvVar3 + uVar5;
  }
  return __return_storage_ptr__;
}

// WriteToWideString<16,wchar_t_const_(&)[5]> @ 141be1300

TStringBuilderWithBuffer<wchar_t,16> * __cdecl
WriteToWideString<16,wchar_t_const_(&)[5]>
          (TStringBuilderWithBuffer<wchar_t,16> *__return_storage_ptr__,wchar_t (*param_1) [5])

{
  wchar_t *pwVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  
  pwVar1 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar5 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar1;
  __return_storage_ptr__->_padding_ = (longlong)pwVar1;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (wchar_t (*) [5])0x0) {
    sVar2 = wcslen(*param_1);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,16> *)(pwVar1 + uVar4)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,uVar4)
    ;
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy
                       ((void *)__return_storage_ptr__->_padding_,param_1,uVar4 * 2);
    __return_storage_ptr__->_padding_ = (longlong)((longlong)pvVar3 + uVar4 * 2);
  }
  return __return_storage_ptr__;
}

// _Atomic_address_as<short,std::_Atomic_padded<short>_> @ 141be13a0

short * __cdecl
std::_Atomic_address_as<short,std::_Atomic_padded<short>_>(_Atomic_padded<short> *param_1)

{
  return &param_1->_Value;
}

// DriverVersionTest @ 141be1750

DriverVersionTest * __thiscall
DriverVersionTest::DriverVersionTest(DriverVersionTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7DriverVersionTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::GenericPlatform::Driver");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
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

// ExecuteOnGameThreadTest @ 141be1920

ExecuteOnGameThreadTest * __thiscall
ExecuteOnGameThreadTest::ExecuteOnGameThreadTest(ExecuteOnGameThreadTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7ExecuteOnGameThreadTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TSTicker::ExecuteOnGameThreadTest");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
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

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,1,0> @ 141bec500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_ExecuteOnGameThreadTest::TestBody_::__l3::<lambda_1>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::`3'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l25::<lambda_2>_>'::__l2::<lambda_1>,1,0> @ 141bec520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l25::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_ExecuteOnGameThreadTest::TestBody_::__l25::<lambda_2>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::`25'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FTSTickerTest::TestBody'::__l50::<lambda_8>::operator()'::__l2::<lambda_1>,1,0> @ 141bec540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FTSTickerTest::TestBody'::__l50::<lambda_8>::operator()'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__FTSTickerTest::TestBody_::__l50::<lambda_8>::operator()_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FTSTickerTest::TestBody'::`50'::<lambda_8>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``anonymous_namespace'::TestIsJoinableAfterCompletion'::__l2::<lambda_1>,1,0> @ 141bec560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::TestIsJoinableAfterCompletion'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__anonymous_namespace_::TestIsJoinableAfterCompletion_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TestIsJoinableAfterCompletion'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``anonymous_namespace'::TestTypicalUseCase'::__l2::<lambda_1>,1,1> @ 141bec580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::TestTypicalUseCase'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<__anonymous_namespace_::TestTypicalUseCase_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TestTypicalUseCase'::`2'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l3::<lambda_1>,1,0> @ 141bec5a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l3::<lambda_1>,1,0>
::~TFunction_OwnedObject<_FTSTickerTest::TestBody_::__l3::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`3'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``anonymous_namespace'::TestThreadSingleton'::__l3::<lambda_1>,1,0> @ 141bec5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::TestThreadSingleton'::__l3::<lambda_1>,1,0>::
~TFunction_OwnedObject<__anonymous_namespace_::TestThreadSingleton_::__l3::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TestThreadSingleton'::`3'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l11::<lambda_2>,1,0> @ 141bec5e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l11::<lambda_2>,1,0>
::~TFunction_OwnedObject<_FTSTickerTest::TestBody_::__l11::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`11'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l19::<lambda_3>,1,0> @ 141bec600

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l19::<lambda_3>,1,0>
::~TFunction_OwnedObject<_FTSTickerTest::TestBody_::__l19::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`19'::<lambda_3>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l48::<lambda_6>,1,0> @ 141bec620

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l48::<lambda_6>,1,0>
::~TFunction_OwnedObject<_FTSTickerTest::TestBody_::__l48::<lambda_6>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`48'::<lambda_6>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l50::<lambda_8>,1,0> @ 141bec640

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l50::<lambda_8>,1,0>
::~TFunction_OwnedObject<_FTSTickerTest::TestBody_::__l50::<lambda_8>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`50'::<lambda_8>,1,0>::_vftable_;
  return;
}

// ~TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonFirst> @ 141bec9c0

void __thiscall
TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonFirst>::
~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l10::FThreadSingletonFirst>
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  
  *(undefined ***)this =
       &TThreadSingleton<`TestThreadSingleton'::`10'::FThreadSingletonFirst>::_vftable_;
  if (DAT_154b85e94 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pvVar3 = TlsGetValue(DAT_154b85e94);
  if (pvVar3 == this) {
    TlsSetValue(DAT_154b85e94,(LPVOID)0x0);
  }
  *(undefined ***)this = &___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonSecond> @ 141beca40

void __thiscall
TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonSecond>::
~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l10::FThreadSingletonSecond>
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  
  *(undefined ***)this =
       &TThreadSingleton<`TestThreadSingleton'::`10'::FThreadSingletonSecond>::_vftable_;
  if (DAT_154b85e90 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pvVar3 = TlsGetValue(DAT_154b85e90);
  if (pvVar3 == this) {
    TlsSetValue(DAT_154b85e90,(LPVOID)0x0);
  }
  *(undefined ***)this = &___7FTlsAutoCleanup__6B_;
  return;
}

// ~TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest> @ 141becac0

void __thiscall
TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::
~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l3::FThreadSingletonTest>
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  
  *(undefined ***)this =
       &TThreadSingleton<`TestThreadSingleton'::`3'::FThreadSingletonTest>::_vftable_;
  if (DAT_154b85e98 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTlsSlot() != FPlatformTLS::InvalidTlsSlot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadSingleton.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pvVar3 = TlsGetValue(DAT_154b85e98);
  if (pvVar3 == this) {
    TlsSetValue(DAT_154b85e98,(LPVOID)0x0);
  }
  *(undefined ***)this = &___7FTlsAutoCleanup__6B_;
  return;
}

// operator() @ 141bedec0

void __thiscall
``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            (*(TDelegateBase<FNotThreadSafeDelegateMode> **)this);
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this_00,(FWriteAccessScope *)&local_28);
  local_10 = (FDelegateAllocation *)(this_00 + 1);
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`69'::<lambda_14>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = this_00;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// operator() @ 141bf0250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``anonymous_namespace'::TestTypicalUseCase'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  
  iVar1 = **(int **)this;
  while (iVar1 == 0) {
    lVar2 = *(longlong *)((longlong)this + 8);
    lVar3 = **(longlong **)(lVar2 + 8);
    if (lVar3 == 0) {
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x20))
                (*(longlong **)((longlong)this + 0x10),0xffffffff,0);
    }
    else {
      pvVar4 = *(void **)(lVar2 + 8);
      *(longlong *)(lVar2 + 8) = lVar3;
      *(undefined4 *)(lVar3 + 8) = 0;
      ::operator_delete(pvVar4,0x10);
      if (4 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&``TestTypicalUseCase'::`2'::<lambda_1>::operator()'::`8'::LOG_Static,
                   (FLogCategoryBase *)&LogTemp);
      }
    }
    iVar1 = **(int **)this;
  }
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&``TestTypicalUseCase'::`2'::<lambda_1>::operator()'::`17'::LOG_Static,
               (FLogCategoryBase *)&LogTemp);
    return;
  }
  return;
}

// operator() @ 141bf2a00

void __thiscall
``anonymous_namespace'::TestThreadSingleton'::__l3::<lambda_1>::operator()(void *this)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  pFVar1 = FThreadSingletonInitializer::TryGet(&DAT_154b85e98);
  LOCK();
  *(bool *)*(undefined8 *)this = pFVar1 == (FTlsAutoCleanup *)0x0;
  UNLOCK();
  if (**(char **)this != '\0') {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar1 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&DAT_154b85e98);
    if (*(int *)(pFVar1 + 2) == 0) {
      uVar2 = 1;
      goto LAB_141bf2a62;
    }
  }
  uVar2 = 0;
LAB_141bf2a62:
  LOCK();
  **(undefined1 **)this = uVar2;
  UNLOCK();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&DAT_154b85e98);
  *(undefined4 *)(pFVar1 + 2) = 2;
  return;
}

// `scalar_deleting_destructor' @ 141bf3b30

void * __thiscall
IBaseDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3b60

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3b90

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3bc0

void * __thiscall
IBaseDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3bf0

void * __thiscall
TBaseFunctorDelegateInstance<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3c20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy,`UE::DelegatesTest::FUnicastDelegateForwardingTest::TestBody'::__l3::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3c50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_15>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3c80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l6::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3cb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l44::<lambda_10>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3ce0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l59::<lambda_11>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3d10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3d40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l61::<lambda_13>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3d70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3da0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l73::<lambda_19>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3dd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,```UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3e00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l60::<lambda_12>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3e30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l69::<lambda_14>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3e60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3e90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3ec0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3ef0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l3::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3f20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FConsoleManagerTest::TestBody'::__l7::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3f50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l48::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3f80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3fb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf3fe0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4010

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4040

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4070

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l56::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf40a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf40d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4100

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l85::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4130

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l15::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4160

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4190

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf41c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf41f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4220

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l3::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4250

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4280

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,``UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>::operator()'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf42b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l3::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf42e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l11::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4310

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4340

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l20::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4370

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l72::<lambda_18>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf43a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf43d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4400

void * __thiscall
TCommonDelegateInstanceState<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l14::FNoncopyableExample_const_&___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4430

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::DelegatesTest::FMoveOnlyParam_&&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4460

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Tasks::FTaskEvent_&,UE::Tasks::FTaskEvent_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4490

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf44c0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FTSTickerTest::TestBody'::__l60::<lambda_10>_>::
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

// `scalar_deleting_destructor' @ 141bf4530

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_16>_>::
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

// `scalar_deleting_destructor' @ 141bf45a0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_17>_>::
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

// `scalar_deleting_destructor' @ 141bf4610

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::Wait<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 141bf4680

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 141bf46f0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 141bf4760

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_2>_>
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

// `scalar_deleting_destructor' @ 141bf47d0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``FTSTickerTest::TestBody'::__l60::<lambda_10>::operator()'::__l4::<lambda_2>_>::
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

// `scalar_deleting_destructor' @ 141bf4840

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l5::<lambda_2>_>::
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

// `scalar_deleting_destructor' @ 141bf48b0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>_>::
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

// `scalar_deleting_destructor' @ 141bf4920

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>_>
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

// `scalar_deleting_destructor' @ 141bf4990

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>_>::
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

// `scalar_deleting_destructor' @ 141bf4a00

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_4>_>
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

// `scalar_deleting_destructor' @ 141bf4a70

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FTSTickerTest::TestBody'::__l19::<lambda_4>_>::
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

// `scalar_deleting_destructor' @ 141bf4ae0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_4>_>::
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

// `scalar_deleting_destructor' @ 141bf4b50

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FTSTickerTest::TestBody'::__l19::<lambda_5>_>::
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

// `scalar_deleting_destructor' @ 141bf4bc0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult_VFDelegateHandle___Private_Tasks_UE__6B_;
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

// `scalar_deleting_destructor' @ 141bf4c30

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_6>_>::
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

// `scalar_deleting_destructor' @ 141bf4ca0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_7>_>
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

// `scalar_deleting_destructor' @ 141bf4d10

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FTSTickerTest::TestBody'::__l58::<lambda_9>_>::
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

// `scalar_deleting_destructor' @ 141bf4d80

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FTSTickerTest::TestBody'::__l60::<lambda_10>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4dc0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_16>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4e00

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l71::<lambda_17>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4e40

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4e80

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4ec0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l3::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4f00

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FMulticastTSDelegateStressTest::TestBody'::__l3::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4f40

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FTSTickerTest::TestBody'::__l60::<lambda_10>::operator()'::__l4::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4f80

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastTSDelegateStressTest::TestBody'::__l5::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf4fc0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l11::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5000

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_3>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5040

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastTSDelegateBasicTest::TestBody'::__l19::<lambda_3>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5080

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l18::<lambda_4>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf50c0

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FTSTickerTest::TestBody'::__l19::<lambda_4>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5100

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l12::<lambda_4>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5140

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FTSTickerTest::TestBody'::__l19::<lambda_5>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5180

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_6>,FDelegateHandle,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult_VFDelegateHandle___Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf51d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l13::<lambda_6>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5210

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::TSDelegatesTest::FTSMulticastDelegateStressTest::TestBody'::__l19::<lambda_7>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5250

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FTSTickerTest::TestBody'::__l58::<lambda_9>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5290

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(float),1,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<bool_(__cdecl*)(float),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NM_Z_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf52d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::`3'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l25::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::`25'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FTSTickerTest::TestBody'::__l50::<lambda_8>::operator()'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FTSTickerTest::TestBody'::`50'::<lambda_8>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::TestIsJoinableAfterCompletion'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TestIsJoinableAfterCompletion'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf53d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::TestTypicalUseCase'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TestTypicalUseCase'::`2'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5410

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l3::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`3'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::TestThreadSingleton'::__l3::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TestThreadSingleton'::`3'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5490

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l11::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`11'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf54d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l19::<lambda_3>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`19'::<lambda_3>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5510

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l48::<lambda_6>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`48'::<lambda_6>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5550

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FTSTickerTest::TestBody'::__l50::<lambda_8>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTSTickerTest::TestBody'::`50'::<lambda_8>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5590

void * __thiscall
UE::Tasks::Private::TTaskWithResult<FDelegateHandle>::_scalar_deleting_destructor_
          (TTaskWithResult<FDelegateHandle> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TTaskWithResult_VFDelegateHandle___Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf55e0

void * __thiscall
TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonFirst>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l10::FThreadSingletonFirst>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5620

void * __thiscall
TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonSecond>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l10::FThreadSingletonSecond>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5660

void * __thiscall
TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l3::FThreadSingletonTest>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf56a0

void * __thiscall
``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonFirst::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonFirst>::
  ~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l10::FThreadSingletonFirst>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf56e0

void * __thiscall
``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonSecond::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FTlsAutoCleanup *pFVar3;
  void *pvVar4;
  
  *(undefined ***)this = &`TestThreadSingleton'::`10'::FThreadSingletonSecond::_vftable_;
  pFVar3 = FThreadSingletonInitializer::TryGet(&DAT_154b85e94);
  if (pFVar3 != (FTlsAutoCleanup *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FThreadSingletonFirst::TryGet() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\ThreadTest.cpp"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonSecond>::
  ~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l10::FThreadSingletonSecond>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141bf5760

void * __thiscall
``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::
  ~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l3::FThreadSingletonTest>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// CountManifestEntries @ 141bf8800

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

int __cdecl CountManifestEntries(FInternationalizationManifest *param_1)

{
  return *(int *)&(param_1->EntriesByKey).field_0x8 - *(int *)&(param_1->EntriesByKey).field_0x34;
}

// CreateExpectedOutputFromPolyglotData @ 141bfc570

FString * __cdecl
CreateExpectedOutputFromPolyglotData(FString *__return_storage_ptr__,FPolyglotTextData *param_1)

{
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FPolyglotTextData::GetIdentity(param_1,&local_28,&local_18);
  FString::PrintfImpl(__return_storage_ptr__,L"%s, %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsRoughlyEqual @ 141c02f20

bool __cdecl IsRoughlyEqual(double param_1,double param_2,float param_3)

{
  return (double)CONCAT44((uint)((ulonglong)(param_1 - param_2) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(param_1 - param_2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
         <= (double)param_3;
}

// MakeIndexArray @ 141c032d0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
Test::MakeIndexArray(TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  iVar4 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 < 1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
  }
  else {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,piVar1,
                       &__return_storage_ptr__->ArrayMax);
    memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 4,0,
           (longlong)param_1 << 2);
  }
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar3 = *piVar1;
  pFVar2 = pFVar5 + (longlong)iVar3 * 4;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar2) break;
    *(int *)pFVar5 = iVar4;
    pFVar5 = pFVar5 + 4;
    iVar4 = iVar4 + 1;
  }
  return __return_storage_ptr__;
}

// MakeVersionString @ 141c03400

FString * __cdecl
MakeVersionString(FString *__return_storage_ptr__,
                 TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FString local_28;
  FString local_18;
  
  iVar9 = param_1->ArrayNum;
  if (iVar9 == 0) {
    FString::FString(__return_storage_ptr__,L"");
  }
  else {
    FVar5.Data = (FScriptContainerElement *)0x0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    pFVar10 = FVar5.Data;
    iVar6 = 0;
    iVar7 = 0;
    if (0 < iVar9) {
      do {
        uVar8 = (uint)FVar5.Data;
        uVar3 = 0;
        if ((int)uVar8 < iVar9) {
          uVar3 = ~uVar8 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar1)();
          return pFVar4;
        }
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        FString::AppendInt(&local_18,*(int *)(pFVar10 + (longlong)(param_1->AllocatorInstance).Data)
                          );
        uVar3 = local_18.Data.ArrayNum - 1;
        if (local_18.Data.ArrayNum == 0) {
          uVar3 = 0;
        }
        FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,uVar3);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (uVar8 != param_1->ArrayNum - 1U) {
          FString::AppendChars(&local_28,L".",1);
        }
        iVar9 = param_1->ArrayNum;
        FVar5.Data = (FScriptContainerElement *)(ulonglong)(uVar8 + 1);
        pFVar10 = pFVar10 + 4;
      } while ((int)(uVar8 + 1) < iVar9);
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
      iVar6 = local_28.Data.ArrayNum;
      iVar7 = local_28.Data.ArrayMax;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    (__return_storage_ptr__->Data).ArrayNum = iVar6;
    (__return_storage_ptr__->Data).ArrayMax = iVar7;
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return __return_storage_ptr__;
}

// ParseMonthDayYearDate @ 141c09520

FDateTime __cdecl ParseMonthDayYearDate(FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FString *in_RDX;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FString::FString(&local_28,L"-");
  FString::Split(in_RDX,&local_28,&local_48,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FString::FString(&local_28,L"-");
  FString::Split(&local_38,&local_28,&local_58,&local_68);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar1 = _wtoi((wchar_t *)FVar4.Data);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar2 = _wtoi((wchar_t *)FVar4.Data);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
  }
  iVar3 = _wtoi((wchar_t *)FVar4.Data);
  FDateTime::FDateTime((FDateTime *)param_1,iVar3,iVar2,iVar1,0,0,0,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return (FDateTime)(long64)param_1;
}

// ResetRandomSeed @ 141c098a0

void __cdecl Test::ResetRandomSeed(void)

{
  FGenericPlatformMath::SRandInit(0x10e2877d);
  return;
}

// TestBody @ 141c09d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall DriverVersionTest::TestBody(DriverVersionTest *this,FString *param_1)

{
  EComparisonOp EVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar7;
  FString *pFVar8;
  FDateTime *pFVar9;
  FDriverVersionDenyListEntry *pFVar10;
  FDriverDateDenyListEntry *pFVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  ulonglong uVar23;
  undefined1 auStackY_c88 [32];
  ForAnyElementType local_c48;
  undefined8 local_c40;
  undefined1 local_c38 [8];
  FString local_c30;
  FString local_c20;
  FDriverVersion local_c10;
  FDriverVersion local_c00;
  FDriverVersion local_bf0;
  FDriverVersion local_be0;
  FDriverVersion local_bd0;
  FDriverVersion local_bc0;
  ulonglong local_bb0;
  FString local_ba8;
  FString local_b98;
  uint local_b88;
  undefined4 local_b84;
  uint local_b80;
  undefined4 local_b7c;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_b78;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_b68;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_b58;
  int local_b48;
  void *local_b40;
  undefined8 local_b38;
  void *local_b30;
  undefined8 local_b28;
  FString local_b20;
  wchar_t *local_b10;
  undefined8 local_b08;
  void *local_b00;
  undefined8 local_af8;
  void *local_af0;
  undefined8 local_ae8;
  int local_ad8;
  void *local_ad0;
  undefined8 local_ac8;
  void *local_ac0;
  undefined8 local_ab8;
  FString local_ab0;
  wchar_t *local_aa0;
  undefined8 local_a98;
  void *local_a90;
  undefined8 local_a88;
  void *local_a80;
  undefined8 local_a78;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_a68;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_a58;
  FDriverVersion local_a48;
  FDriverVersion local_a38;
  FDriverVersion local_a28;
  FDriverVersion local_a18;
  FDriverVersion local_a08;
  FDriverVersion local_9f8;
  TOptional<FString>_u_0 local_9e8;
  TReferenceControllerBase<1> *local_9d0;
  char local_9c8;
  FString local_9c0;
  FGPUDriverInfo local_9a8;
  FGPUDriverInfo local_938;
  FSuggestedDriverEntry local_8c8;
  FDriverDenyListEntry local_888;
  FGPUDriverInfo local_818;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  initializer_list<unsigned_int> local_6a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_698;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  initializer_list<unsigned_int> local_618;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  initializer_list<unsigned_int> local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  initializer_list<unsigned_int> local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  initializer_list<unsigned_int> local_2d8;
  FString local_2c8;
  FString local_2b8;
  FDriverDenyListEntry local_2a8;
  FSuggestedDriverEntry local_238;
  FSuggestedDriverEntry local_200;
  FDriverDenyListEntry local_1c8;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FDateTime local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_90;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_80;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_70;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  ulonglong uVar22;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c88;
  uVar16 = 0;
  local_bb0 = local_bb0 & 0xffffffff00000000;
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_2e8,L"Driver version parsing");
  (*pcVar3)(pFVar2,&local_2e8,0);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  local_2d8._First = &local_40;
  local_c48.Data = (FScriptContainerElement *)0x0;
  local_2d8._Last = (uint *)&local_30;
  local_c40 = 0;
  local_40 = 1;
  local_3c = 2;
  local_38 = 3;
  local_34 = 4;
  pTVar7 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
           TArray<unsigned_int,TSizedDefaultAllocator<32>_>(&local_90,&local_2d8);
  pFVar8 = MakeVersionString(&local_e0,pTVar7);
  iVar5 = (int)local_c40;
  if ((int)local_c40 == local_c40._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c48,(int *)((longlong)&local_c40 + 4));
  }
  local_c40 = CONCAT44(local_c40._4_4_,iVar5 + 1);
  pFVar12 = local_c48.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  *(undefined8 *)(pFVar12 + 8) = 0;
  FDriverVersion::Parse((FDriverVersion *)pFVar12,pFVar8);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  iVar5 = (int)local_c40;
  if ((int)local_c40 == local_c40._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c48,(int *)((longlong)&local_c40 + 4));
  }
  local_c40 = CONCAT44(local_c40._4_4_,iVar5 + 1);
  pFVar12 = local_c48.Data + (longlong)iVar5 * 0x10;
  ::FString::FString(&local_2c8,L"1.2.3.4");
  *(undefined8 *)pFVar12 = 0;
  *(undefined8 *)(pFVar12 + 8) = 0;
  FDriverVersion::Parse((FDriverVersion *)pFVar12,&local_2c8);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  iVar5 = (int)local_c40;
  if ((int)local_c40 == local_c40._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c48,(int *)((longlong)&local_c40 + 4));
  }
  local_c40 = CONCAT44(local_c40._4_4_,iVar5 + 1);
  pFVar12 = local_c48.Data + (longlong)iVar5 * 0x10;
  ::FString::FString(&local_2b8,L"  1.2.3.4");
  *(undefined8 *)pFVar12 = 0;
  *(undefined8 *)(pFVar12 + 8) = 0;
  FDriverVersion::Parse((FDriverVersion *)pFVar12,&local_2b8);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  iVar5 = (int)local_c40;
  if ((int)local_c40 == local_c40._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c48,(int *)((longlong)&local_c40 + 4));
  }
  local_c40 = CONCAT44(local_c40._4_4_,iVar5 + 1);
  pFVar12 = local_c48.Data + (longlong)iVar5 * 0x10;
  ::FString::FString(&local_7a8,L"1.2.3.4  ");
  *(undefined8 *)pFVar12 = 0;
  *(undefined8 *)(pFVar12 + 8) = 0;
  FDriverVersion::Parse((FDriverVersion *)pFVar12,&local_7a8);
  if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
  }
  iVar5 = (int)local_c40;
  if ((int)local_c40 == local_c40._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c48,(int *)((longlong)&local_c40 + 4));
  }
  local_c40 = CONCAT44(local_c40._4_4_,iVar5 + 1);
  pFVar12 = local_c48.Data + (longlong)iVar5 * 0x10;
  ::FString::FString(&local_798,L"1 . 2. 3 .4");
  *(undefined8 *)pFVar12 = 0;
  *(undefined8 *)(pFVar12 + 8) = 0;
  FDriverVersion::Parse((FDriverVersion *)pFVar12,&local_798);
  if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_798.Data.AllocatorInstance.Data);
  }
  iVar5 = (int)local_c40;
  pFVar12 = local_c48.Data + (longlong)(int)local_c40 * 0x10;
  FVar21.Data = local_c48.Data;
  while( true ) {
    if ((int)local_c40 != iVar5) {
      local_c38[0] = 0;
      `TCheckedPointerIterator<FDriverVersion,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_c38);
    }
    if (FVar21.Data == pFVar12) break;
    if (*(int *)(FVar21.Data + 8) != 4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_788,L"Condition failed");
      (*pcVar3)(pFVar2,&local_788);
      if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_788.Data.AllocatorInstance.Data);
      }
    }
    if ((*(int *)(FVar21.Data + 8) < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (**(int **)FVar21.Data != 1) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_778,L"Condition failed");
      (*pcVar3)(pFVar2,&local_778);
      if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_778.Data.AllocatorInstance.Data);
      }
    }
    if ((*(int *)(FVar21.Data + 8) < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(*(longlong *)FVar21.Data + 4) != 2) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_768,L"Condition failed");
      (*pcVar3)(pFVar2,&local_768);
      if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_768.Data.AllocatorInstance.Data);
      }
    }
    if ((*(int *)(FVar21.Data + 8) < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(*(longlong *)FVar21.Data + 8) != 3) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_758,L"Condition failed");
      (*pcVar3)(pFVar2,&local_758);
      if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_758.Data.AllocatorInstance.Data);
      }
    }
    if ((*(int *)(FVar21.Data + 8) < 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(*(longlong *)FVar21.Data + 0xc) != 4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_748,L"Condition failed");
      (*pcVar3)(pFVar2,&local_748);
      if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.Data.AllocatorInstance.Data);
      }
    }
    FVar21.Data = FVar21.Data + 0x10;
  }
  DestructItems<FDriverVersion,int>((FDriverVersion *)local_c48.Data,(int)local_c40);
  if (local_c48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c48.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_738,L"Driver version comparisons");
  (*pcVar3)(pFVar2,&local_738,0);
  if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_728,L"1.2.3.4");
  local_be0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_be0.Values.ArrayNum = 0;
  local_be0.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_be0,&local_728);
  if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_718,L"1.2.3.4");
  local_bf0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bf0.Values.ArrayNum = 0;
  local_bf0.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_bf0,&local_718);
  if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_718.Data.AllocatorInstance.Data);
  }
  bVar4 = FDriverVersion::operator>(&local_be0,&local_bf0);
  if ((bVar4) || (bVar4 = FDriverVersion::operator>(&local_bf0,&local_be0), bVar4)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_708,L"Condition failed");
    (*pcVar3)(pFVar2,&local_708,0);
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FDriverVersion::operator>(&local_be0,&local_bf0);
  if (((bVar4) || (bVar4 = FDriverVersion::operator>(&local_bf0,&local_be0), bVar4)) &&
     (bVar4 = FDriverVersion::operator>(&local_bf0,&local_be0), !bVar4)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6f8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_6f8,0);
    if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FDriverVersion::operator>(&local_be0,&local_bf0);
  if (((bVar4) || (bVar4 = FDriverVersion::operator>(&local_bf0,&local_be0), bVar4)) &&
     (bVar4 = FDriverVersion::operator>(&local_be0,&local_bf0), !bVar4)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6e8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_6e8,0);
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FDriverVersion::operator>(&local_be0,&local_bf0);
  if ((bVar4) || (bVar4 = FDriverVersion::operator>(&local_bf0,&local_be0), bVar4)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6d8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_6d8,0);
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FDriverVersion::operator>(&local_bf0,&local_be0);
  if (bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6c8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_6c8,0);
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FDriverVersion::operator>(&local_be0,&local_bf0);
  if (bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_6b8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_6b8,0);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_bf0.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bf0.Values.AllocatorInstance.Data);
  }
  if (local_be0.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_be0.Values.AllocatorInstance.Data);
  }
  local_6a8._First = &local_50;
  local_50 = 1;
  local_6a8._Last = &local_40;
  local_4c = 2;
  local_48 = 3;
  local_44 = 4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::TArray<unsigned_int,TSizedDefaultAllocator<32>_>
            (&local_a68,&local_6a8);
  uVar19 = uVar16;
  uVar22 = uVar16;
  do {
    local_b68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned_int,int>
              (&local_b68,(uint *)local_a68.AllocatorInstance.Data,local_a68.ArrayNum,0);
    if ((local_b68.ArrayNum <= (int)uVar22) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_698.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_b68.AllocatorInstance.Data + uVar19) =
         *(int *)(local_b68.AllocatorInstance.Data + uVar19) + 1;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned_int,int>
              (&local_698,(uint *)local_b68.AllocatorInstance.Data,local_b68.ArrayNum,0);
    pFVar8 = MakeVersionString(&local_d0,&local_698);
    local_bc0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_bc0.Values.ArrayNum = 0;
    local_bc0.Values.ArrayMax = 0;
    FDriverVersion::Parse(&local_bc0,pFVar8);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_688.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned_int,int>
              (&local_688,(uint *)local_a68.AllocatorInstance.Data,local_a68.ArrayNum,0);
    pFVar8 = MakeVersionString(&local_c0,&local_688);
    local_bd0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_bd0.Values.ArrayNum = 0;
    local_bd0.Values.ArrayMax = 0;
    FDriverVersion::Parse(&local_bd0,pFVar8);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    bVar4 = FDriverVersion::operator>(&local_bc0,&local_bd0);
    if ((!bVar4) && (bVar4 = FDriverVersion::operator>(&local_bd0,&local_bc0), !bVar4)) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_678,L"Condition failed");
      (*pcVar3)(pFVar2,&local_678,0);
      if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_678.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FDriverVersion::operator>(&local_bc0,&local_bd0);
    if (!bVar4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_668,L"Condition failed");
      (*pcVar3)(pFVar2,&local_668,0);
      if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_668.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FDriverVersion::operator>(&local_bc0,&local_bd0);
    if (((bVar4) || (bVar4 = FDriverVersion::operator>(&local_bd0,&local_bc0), bVar4)) &&
       (bVar4 = FDriverVersion::operator>(&local_bc0,&local_bd0), !bVar4)) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_658,L"Condition failed");
      (*pcVar3)(pFVar2,&local_658,0);
      if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_658.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FDriverVersion::operator>(&local_bc0,&local_bd0);
    if ((!bVar4) && (bVar4 = FDriverVersion::operator>(&local_bd0,&local_bc0), !bVar4)) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_648,L"Condition failed");
      (*pcVar3)(pFVar2,&local_648,0);
      if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_648.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FDriverVersion::operator>(&local_bd0,&local_bc0);
    if (bVar4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_638,L"Condition failed");
      (*pcVar3)(pFVar2,&local_638,0);
      if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_638.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FDriverVersion::operator>(&local_bc0,&local_bd0);
    if (((!bVar4) && (bVar4 = FDriverVersion::operator>(&local_bd0,&local_bc0), !bVar4)) ||
       (bVar4 = FDriverVersion::operator>(&local_bd0,&local_bc0), bVar4)) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_628,L"Condition failed");
      (*pcVar3)(pFVar2,&local_628,0);
      if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_628.Data.AllocatorInstance.Data);
      }
    }
    if (local_bd0.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bd0.Values.AllocatorInstance.Data);
    }
    if (local_bc0.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bc0.Values.AllocatorInstance.Data);
    }
    if (local_b68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b68.AllocatorInstance.Data);
    }
    uVar20 = (int)uVar22 + 1;
    uVar22 = (ulonglong)uVar20;
    uVar19 = uVar19 + 4;
  } while ((int)uVar20 < 4);
  if (local_a68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.AllocatorInstance.Data);
  }
  local_618._First = &local_60;
  local_60 = 1;
  local_618._Last = &local_50;
  local_5c = 2;
  local_58 = 3;
  local_54 = 4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::TArray<unsigned_int,TSizedDefaultAllocator<32>_>
            (&local_a58,&local_618);
  local_bb0 = 0;
  uVar19 = uVar16;
  do {
    uVar22 = local_bb0;
    local_b78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned_int,int>
              (&local_b78,(uint *)local_a58.AllocatorInstance.Data,local_a58.ArrayNum,0);
    if ((local_b78.ArrayNum <= (int)uVar19) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_608.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_b78.AllocatorInstance.Data + uVar22) =
         *(int *)(local_b78.AllocatorInstance.Data + uVar22) + -1;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned_int,int>
              (&local_608,(uint *)local_b78.AllocatorInstance.Data,local_b78.ArrayNum,0);
    pFVar8 = MakeVersionString(&local_b0,&local_608);
    local_c10.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c10.Values.ArrayNum = 0;
    local_c10.Values.ArrayMax = 0;
    FDriverVersion::Parse(&local_c10,pFVar8);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    iVar5 = local_a58.ArrayNum;
    FVar21.Data = local_a58.AllocatorInstance.Data;
    local_b58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_a58.ArrayNum == 0) {
      local_b58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_a58.ArrayNum,0,&local_b58.AllocatorInstance,local_a58.ArrayNum,
                 &local_b58.ArrayMax);
      memcpy(local_b58.AllocatorInstance.Data,FVar21.Data,(longlong)iVar5 << 2);
    }
    pFVar8 = MakeVersionString(&local_158,&local_b58);
    local_c00.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c00.Values.ArrayNum = 0;
    local_c00.Values.ArrayMax = 0;
    FDriverVersion::Parse(&local_c00,pFVar8);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    bVar4 = FDriverVersion::operator>(&local_c10,&local_c00);
    if ((!bVar4) && (bVar4 = FDriverVersion::operator>(&local_c00,&local_c10), !bVar4)) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_5f8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_5f8,0);
      if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FDriverVersion::operator>(&local_c00,&local_c10);
    if (!bVar4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_5e8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_5e8,0);
      if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FDriverVersion::operator>(&local_c10,&local_c00);
    if (((bVar4) || (bVar4 = FDriverVersion::operator>(&local_c00,&local_c10), bVar4)) &&
       (bVar4 = FDriverVersion::operator>(&local_c00,&local_c10), !bVar4)) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_5d8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_5d8,0);
      if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FDriverVersion::operator>(&local_c10,&local_c00);
    if ((!bVar4) && (bVar4 = FDriverVersion::operator>(&local_c00,&local_c10), !bVar4)) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_5c8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_5c8,0);
      if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
      }
    }
    uVar20 = 0;
    uVar15 = uVar16;
    uVar23 = uVar16;
    if (0 < local_c10.Values.ArrayNum) {
      do {
        uVar14 = (uint)uVar15;
        uVar17 = ~uVar14 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar14 < local_c00.Values.ArrayNum) {
          uVar18 = uVar17;
        }
        if ((uVar18 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar21.Data = local_c00.Values.AllocatorInstance.Data;
        uVar18 = uVar20;
        if ((int)uVar14 < local_c10.Values.ArrayNum) {
          uVar18 = uVar17;
        }
        if ((uVar18 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(uint *)(FVar21.Data + uVar23 * 4) <
            *(uint *)(local_c10.Values.AllocatorInstance.Data + uVar23 * 4)) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar2 = pFVar6->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_5b8,L"Condition failed");
          (*pcVar3)(pFVar2,&local_5b8,0);
          uVar22 = local_bb0;
          if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
            uVar22 = local_bb0;
          }
          break;
        }
        uVar18 = uVar20;
        if ((int)uVar14 < local_c00.Values.ArrayNum) {
          uVar18 = uVar17;
        }
        if ((uVar18 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar21.Data = local_c00.Values.AllocatorInstance.Data;
        uVar18 = uVar20;
        if ((int)uVar14 < local_c10.Values.ArrayNum) {
          uVar18 = uVar17;
        }
        if ((uVar18 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = local_bb0;
        if (*(uint *)(local_c10.Values.AllocatorInstance.Data + uVar23 * 4) <
            *(uint *)(FVar21.Data + uVar23 * 4)) break;
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar23 = uVar23 + 1;
      } while ((int)(uVar14 + 1) < local_c10.Values.ArrayNum);
    }
    bVar4 = FDriverVersion::operator>(&local_c10,&local_c00);
    if (((!bVar4) && (bVar4 = FDriverVersion::operator>(&local_c00,&local_c10), !bVar4)) ||
       (bVar4 = FDriverVersion::operator>(&local_c10,&local_c00), bVar4)) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_5a8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_5a8,0);
      if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
      }
    }
    if (local_c00.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c00.Values.AllocatorInstance.Data);
    }
    if (local_c10.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c10.Values.AllocatorInstance.Data);
    }
    if (local_b78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b78.AllocatorInstance.Data);
    }
    local_bb0 = uVar22 + 4;
    uVar18 = (int)uVar19 + 1;
    uVar19 = (ulonglong)uVar18;
  } while ((int)uVar18 < 4);
  if (local_a58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.AllocatorInstance.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_598,L"Unified driver version parsing");
  (*pcVar3)(pFVar2,&local_598,0);
  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data.AllocatorInstance.Data);
  }
  local_ad0 = (void *)0x0;
  local_ac8 = 0;
  local_ac0 = (void *)0x0;
  local_ab8 = 0;
  local_ab0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ab0.Data.ArrayNum = 0;
  local_ab0.Data.ArrayMax = 0;
  local_aa0 = (wchar_t *)0x0;
  local_a98 = 0;
  local_a90 = (void *)0x0;
  local_a88 = 0;
  local_a80 = (void *)0x0;
  local_a78 = 0;
  local_ad8 = 0x10de;
  ::FString::operator=(&local_ab0,L"31.0.15.5123");
  iVar5 = local_ab0.Data.ArrayNum;
  if (local_ad8 == 0x10de) {
    if (local_ab0.Data.ArrayNum == (int)local_a98) {
      FVar21.Data = local_ab0.Data.AllocatorInstance.Data;
      if (1 < local_ab0.Data.ArrayNum) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_ab0.Data.AllocatorInstance.Data,local_aa0);
        bVar4 = iVar5 == 0;
        iVar5 = local_ab0.Data.ArrayNum;
        goto LAB_141c0b1ad;
      }
      goto joined_r0x000141c0b54e;
    }
    bVar4 = (int)local_a98 + local_ab0.Data.ArrayNum == 1;
LAB_141c0b1ad:
    if (bVar4) goto LAB_141c0b471;
    uVar18 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar18 = 0;
    }
    FVar21.Data = local_ab0.Data.AllocatorInstance.Data;
    if ((int)uVar18 < 6) goto joined_r0x000141c0b54e;
    FVar21.Data = (FScriptContainerElement *)L"";
    if (iVar5 != 0) {
      FVar21.Data = local_ab0.Data.AllocatorInstance.Data;
    }
    uVar14 = uVar18;
    if (6 < (int)uVar18) {
      uVar14 = 6;
    }
    uVar17 = uVar20;
    if (0 < (int)uVar14) {
      uVar17 = uVar14;
    }
    ::FString::FString(&local_b98,
                       (wchar_t *)
                       (FVar21.Data + ((longlong)(int)uVar18 - (longlong)(int)uVar17) * 2));
    pFVar8 = ::FString::Replace(&local_b98,&local_148,L".",L"",IgnoreCase);
    if (&local_b98 != pFVar8) {
      if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b98.Data.AllocatorInstance.Data);
      }
      local_b98.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b98.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_b98.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_588,L".");
    ::FString::InsertAt(&local_b98,3,&local_588);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
    local_c30.Data.AllocatorInstance.Data = local_b98.Data.AllocatorInstance.Data;
    local_c30.Data.ArrayNum = local_b98.Data.ArrayNum;
    local_c30.Data.ArrayMax = local_b98.Data.ArrayMax;
    local_b98.Data.ArrayNum = 0;
    local_b98.Data.ArrayMax = 0;
    local_b98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
LAB_141c0b471:
    FVar21.Data = local_ab0.Data.AllocatorInstance.Data;
    if (local_ad8 == 0x8086) {
      iVar5 = ::FString::Find(&local_ab0,L".",1,CaseSensitive,FromStart,-1);
      if ((iVar5 != -1) &&
         (iVar5 = ::FString::Find(&local_ab0,L".",1,CaseSensitive,FromStart,iVar5 + 1), iVar5 != -1)
         ) {
        ::FString::RightChop(&local_ab0,&local_c30,iVar5 + 1);
        goto LAB_141c0b220;
      }
      FVar21.Data = local_ab0.Data.AllocatorInstance.Data;
      iVar5 = local_ab0.Data.ArrayNum;
      local_c30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c30.Data.ArrayNum = local_ab0.Data.ArrayNum;
      if (local_ab0.Data.ArrayNum == 0) goto LAB_141c0b554;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_ab0.Data.ArrayNum,0,(ForAnyElementType *)&local_c30,
                 local_ab0.Data.ArrayNum,&local_c30.Data.ArrayMax);
    }
    else {
joined_r0x000141c0b54e:
      local_c30.Data.ArrayNum = iVar5;
      local_ab0.Data.AllocatorInstance.Data = FVar21.Data;
      if (iVar5 == 0) {
LAB_141c0b554:
        local_c30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c30.Data.ArrayMax = 0;
        goto LAB_141c0b220;
      }
      local_c30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)&local_c30,iVar5,&local_c30.Data.ArrayMax);
    }
    memcpy(local_c30.Data.AllocatorInstance.Data,FVar21.Data,(longlong)iVar5 * 2);
  }
LAB_141c0b220:
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_c30.Data.ArrayNum != 0) {
    FVar21.Data = local_c30.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"551.23");
  if (local_c30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c30.Data.AllocatorInstance.Data);
  }
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_578,L"Condition failed");
    (*pcVar3)(pFVar2,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  if (local_a80 != (void *)0x0) {
    FMemory::Free(local_a80);
  }
  if (local_a90 != (void *)0x0) {
    FMemory::Free(local_a90);
  }
  if (local_aa0 != (wchar_t *)0x0) {
    FMemory::Free(local_aa0);
  }
  if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
  }
  if (local_ac0 != (void *)0x0) {
    FMemory::Free(local_ac0);
  }
  if (local_ad0 != (void *)0x0) {
    FMemory::Free(local_ad0);
  }
  local_b40 = (void *)0x0;
  local_b38 = 0;
  local_b30 = (void *)0x0;
  local_b28 = 0;
  local_b20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b20.Data.ArrayNum = 0;
  local_b20.Data.ArrayMax = 0;
  local_b10 = (wchar_t *)0x0;
  local_b08 = 0;
  local_b00 = (void *)0x0;
  local_af8 = 0;
  local_af0 = (void *)0x0;
  local_ae8 = 0;
  local_b48 = 0x8086;
  ::FString::operator=(&local_b20,L"9.18.10.3310");
  iVar5 = local_b20.Data.ArrayNum;
  if (local_b48 == 0x10de) {
    if (local_b20.Data.ArrayNum == (int)local_b08) {
      FVar21.Data = local_b20.Data.AllocatorInstance.Data;
      if (1 < local_b20.Data.ArrayNum) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_b20.Data.AllocatorInstance.Data,local_b10);
        bVar4 = iVar5 == 0;
        iVar5 = local_b20.Data.ArrayNum;
        goto LAB_141c0b57b;
      }
      goto joined_r0x000141c0b90d;
    }
    bVar4 = (int)local_b08 + local_b20.Data.ArrayNum == 1;
LAB_141c0b57b:
    if (bVar4) goto LAB_141c0b842;
    uVar18 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar18 = 0;
    }
    FVar21.Data = local_b20.Data.AllocatorInstance.Data;
    if ((int)uVar18 < 6) goto joined_r0x000141c0b90d;
    FVar21.Data = (FScriptContainerElement *)L"";
    if (iVar5 != 0) {
      FVar21.Data = local_b20.Data.AllocatorInstance.Data;
    }
    uVar14 = uVar18;
    if (6 < (int)uVar18) {
      uVar14 = 6;
    }
    if (0 < (int)uVar14) {
      uVar20 = uVar14;
    }
    ::FString::FString(&local_ba8,
                       (wchar_t *)
                       (FVar21.Data + ((longlong)(int)uVar18 - (longlong)(int)uVar20) * 2));
    pFVar8 = ::FString::Replace(&local_ba8,&local_138,L".",L"",IgnoreCase);
    if (&local_ba8 != pFVar8) {
      if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
      }
      local_ba8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_ba8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_ba8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_568,L".");
    ::FString::InsertAt(&local_ba8,3,&local_568);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
    local_c20.Data.AllocatorInstance.Data = local_ba8.Data.AllocatorInstance.Data;
    local_c20.Data.ArrayNum = local_ba8.Data.ArrayNum;
    local_c20.Data.ArrayMax = local_ba8.Data.ArrayMax;
    local_ba8.Data.ArrayNum = 0;
    local_ba8.Data.ArrayMax = 0;
    local_ba8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
LAB_141c0b842:
    FVar21.Data = local_b20.Data.AllocatorInstance.Data;
    if (local_b48 == 0x8086) {
      iVar5 = ::FString::Find(&local_b20,L".",1,CaseSensitive,FromStart,-1);
      if ((iVar5 != -1) &&
         (iVar5 = ::FString::Find(&local_b20,L".",1,CaseSensitive,FromStart,iVar5 + 1), iVar5 != -1)
         ) {
        ::FString::RightChop(&local_b20,&local_c20,iVar5 + 1);
        goto LAB_141c0b5eb;
      }
      FVar21.Data = local_b20.Data.AllocatorInstance.Data;
      iVar5 = local_b20.Data.ArrayNum;
      local_c20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c20.Data.ArrayNum = local_b20.Data.ArrayNum;
      if (local_b20.Data.ArrayNum == 0) goto LAB_141c0b913;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b20.Data.ArrayNum,0,(ForAnyElementType *)&local_c20,
                 local_b20.Data.ArrayNum,&local_c20.Data.ArrayMax);
    }
    else {
joined_r0x000141c0b90d:
      local_c20.Data.ArrayNum = iVar5;
      local_b20.Data.AllocatorInstance.Data = FVar21.Data;
      if (iVar5 == 0) {
LAB_141c0b913:
        local_c20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c20.Data.ArrayMax = 0;
        goto LAB_141c0b5eb;
      }
      local_c20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)&local_c20,iVar5,&local_c20.Data.ArrayMax);
    }
    memcpy(local_c20.Data.AllocatorInstance.Data,FVar21.Data,(longlong)iVar5 * 2);
  }
LAB_141c0b5eb:
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_c20.Data.ArrayNum != 0) {
    FVar21.Data = local_c20.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"10.3310");
  if (local_c20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c20.Data.AllocatorInstance.Data);
  }
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_558,L"Condition failed");
    (*pcVar3)(pFVar2,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  if (local_af0 != (void *)0x0) {
    FMemory::Free(local_af0);
  }
  if (local_b00 != (void *)0x0) {
    FMemory::Free(local_b00);
  }
  if (local_b10 != (wchar_t *)0x0) {
    FMemory::Free(local_b10);
  }
  if (local_b20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b20.Data.AllocatorInstance.Data);
  }
  if (local_b30 != (void *)0x0) {
    FMemory::Free(local_b30);
  }
  if (local_b40 != (void *)0x0) {
    FMemory::Free(local_b40);
  }
  local_9a8.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9a8.DeviceDescription.Data.ArrayNum = 0;
  local_9a8.DeviceDescription.Data.ArrayMax = 0;
  local_9a8.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9a8.ProviderName.Data.ArrayNum = 0;
  local_9a8.ProviderName.Data.ArrayMax = 0;
  local_9a8.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9a8.InternalDriverVersion.Data.ArrayNum = 0;
  local_9a8.InternalDriverVersion.Data.ArrayMax = 0;
  local_9a8.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9a8.UserDriverVersion.Data.ArrayNum = 0;
  local_9a8.UserDriverVersion.Data.ArrayMax = 0;
  local_9a8.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9a8.DriverDate.Data.ArrayNum = 0;
  local_9a8.DriverDate.Data.ArrayMax = 0;
  local_9a8.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9a8.RHIName.Data.ArrayNum = 0;
  local_9a8.RHIName.Data.ArrayMax = 0;
  local_9a8.VendorId = 0x1002;
  ::FString::operator=(&local_9a8.InternalDriverVersion,L"15.200.1062.1004");
  pFVar8 = FGPUDriverInfo::GetUnifiedDriverVersion(&local_9a8,&local_128);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar13,L"15.200.1062.1004");
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_548,L"Condition failed");
    (*pcVar3)(pFVar2,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  if (local_9a8.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.RHIName.Data.AllocatorInstance.Data);
  }
  if (local_9a8.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.DriverDate.Data.AllocatorInstance.Data);
  }
  if (local_9a8.UserDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.UserDriverVersion.Data.AllocatorInstance.Data);
  }
  if (local_9a8.InternalDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_9a8.InternalDriverVersion.Data.AllocatorInstance.Data);
  }
  if (local_9a8.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.ProviderName.Data.AllocatorInstance.Data);
  }
  if (local_9a8.DeviceDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.DeviceDescription.Data.AllocatorInstance.Data);
  }
  local_818.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_818.DeviceDescription.Data.ArrayNum = 0;
  local_818.DeviceDescription.Data.ArrayMax = 0;
  local_818.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_818.ProviderName.Data.ArrayNum = 0;
  local_818.ProviderName.Data.ArrayMax = 0;
  local_818.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_818.InternalDriverVersion.Data.ArrayNum = 0;
  local_818.InternalDriverVersion.Data.ArrayMax = 0;
  local_818.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_818.UserDriverVersion.Data.ArrayNum = 0;
  local_818.UserDriverVersion.Data.ArrayMax = 0;
  local_818.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_818.DriverDate.Data.ArrayNum = 0;
  local_818.DriverDate.Data.ArrayMax = 0;
  local_818.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_818.RHIName.Data.ArrayNum = 0;
  local_818.RHIName.Data.ArrayMax = 0;
  local_818.VendorId = 0x4d4f4351;
  ::FString::operator=(&local_818.InternalDriverVersion,L"31.0.117.0");
  pFVar8 = FGPUDriverInfo::GetUnifiedDriverVersion(&local_818,&local_118);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar13,L"31.0.117.0");
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_538,L"Condition failed");
    (*pcVar3)(pFVar2,&local_538,0);
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
  }
  FGPUDriverInfo::~FGPUDriverInfo(&local_818);
  local_938.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_938.DeviceDescription.Data.ArrayNum = 0;
  local_938.DeviceDescription.Data.ArrayMax = 0;
  local_938.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_938.ProviderName.Data.ArrayNum = 0;
  local_938.ProviderName.Data.ArrayMax = 0;
  local_938.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_938.InternalDriverVersion.Data.ArrayNum = 0;
  local_938.InternalDriverVersion.Data.ArrayMax = 0;
  local_938.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_938.UserDriverVersion.Data.ArrayNum = 0;
  local_938.UserDriverVersion.Data.ArrayMax = 0;
  local_938.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_938.DriverDate.Data.ArrayNum = 0;
  local_938.DriverDate.Data.ArrayMax = 0;
  local_938.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_938.RHIName.Data.ArrayNum = 0;
  local_938.RHIName.Data.ArrayMax = 0;
  local_938.VendorId = 0x8086;
  ::FString::operator=(&local_938.InternalDriverVersion,L"9.18.10.3310");
  ::FString::FString(&local_528,L"15.3501");
  local_a48.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a48.Values.ArrayNum = 0;
  local_a48.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_a48,&local_528);
  bVar4 = FGPUDriverInfo::IsSameDriverVersionGeneration(&local_938,&local_a48);
  if (local_a48.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Values.AllocatorInstance.Data);
  }
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_518,L"Condition failed");
    (*pcVar3)(pFVar2,&local_518,0);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_508,L"101.5124");
  local_a38.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a38.Values.ArrayNum = 0;
  local_a38.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_a38,&local_508);
  bVar4 = FGPUDriverInfo::IsSameDriverVersionGeneration(&local_938,&local_a38);
  if (local_a38.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Values.AllocatorInstance.Data);
  }
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_4f8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_4f8,0);
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::operator=(&local_938.InternalDriverVersion,L"30.0.101.1404");
  ::FString::FString(&local_4e8,L"15.3501");
  local_a28.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a28.Values.ArrayNum = 0;
  local_a28.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_a28,&local_4e8);
  bVar4 = FGPUDriverInfo::IsSameDriverVersionGeneration(&local_938,&local_a28);
  if (local_a28.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a28.Values.AllocatorInstance.Data);
  }
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_4d8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_4d8,0);
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_4c8,L"100.5124");
  local_a18.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a18.Values.ArrayNum = 0;
  local_a18.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_a18,&local_4c8);
  bVar4 = FGPUDriverInfo::IsSameDriverVersionGeneration(&local_938,&local_a18);
  if (local_a18.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a18.Values.AllocatorInstance.Data);
  }
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_4b8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_4b8,0);
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
  }
  FGPUDriverInfo::~FGPUDriverInfo(&local_938);
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_4a8,L"Driver denylist and suggested entry parsing");
  (*pcVar3)(pFVar2,&local_4a8,0,0);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  FDriverDenyListEntry::FDriverDenyListEntry
            (&local_2a8,
             L"(DriverVersion=\"301.12\", RHI=\"D3D12\", AdapterNameRegex=\".*4080.*\", Reason=\"Test version\")"
            );
  if (local_2a8.DriverVersion.bIsSet == local_2a8.DriverDate.bIsSet) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_498,L"Condition failed");
    (*pcVar3)(pFVar2,&local_498,0);
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_2a8.DenylistReason.Data.ArrayNum != 0) {
    FVar21.Data = local_2a8.DenylistReason.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"Test version");
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_488,L"Condition failed");
    (*pcVar3)(pFVar2,&local_488,0);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
  }
  if ((local_2a8._padding_._4_4_ == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pwVar13 = L"";
  if ((int)local_2a8._padding_ != 0) {
    pwVar13 = (wchar_t *)local_2a8._padding_;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar13,L"D3D12");
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_478,L"Condition failed");
    (*pcVar3)(pFVar2,&local_478,0);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
  if ((char)local_2a8._padding_ == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_468,L"Condition failed");
    (*pcVar3)(pFVar2,&local_468,0);
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
  }
  if ((local_2a8.DriverVersion.bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_2a8.DriverVersion.TypedValue.ComparisonOp != ECO_Equal) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_458,L"Condition failed");
    (*pcVar3)(pFVar2,&local_458,0);
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
  }
  if ((local_2a8.DriverVersion.bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_b88 = 0x12d;
  local_448._Last = &local_b80;
  local_b84 = 0xc;
  local_448._First = &local_b88;
  pTVar7 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
           TArray<unsigned_int,TSizedDefaultAllocator<32>_>(&local_80,&local_448);
  pFVar8 = MakeVersionString(&local_a0,pTVar7);
  local_a08.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a08.Values.ArrayNum = 0;
  local_a08.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_a08,pFVar8);
  bVar4 = FDriverVersion::operator==(&local_2a8.DriverVersion.TypedValue.Version,&local_a08);
  if (local_a08.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.Values.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_438,L"Condition failed");
    (*pcVar3)(pFVar2,&local_438,0);
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.DenylistReason.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.DenylistReason.Data.AllocatorInstance.Data);
  }
  if ((local_2a8.DriverVersion.bIsSet != false) &&
     (local_2a8.DriverVersion.TypedValue.Version.Values.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2a8.DriverVersion.TypedValue.Version.Values.AllocatorInstance.Data);
  }
  if ((char)local_2a8._padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2a8._padding_);
  }
  if ((local_2a8._padding_._4_4_ != -1) && ((wchar_t *)local_2a8._padding_ != (wchar_t *)0x0)) {
    FMemory::Free((void *)local_2a8._padding_);
  }
  FDriverDenyListEntry::FDriverDenyListEntry
            (&local_1c8,L"(DriverVersion=\"<=311.16\", Reason=\"Test with no constraints\")");
  if (local_1c8.DriverVersion.bIsSet == local_1c8.DriverDate.bIsSet) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_428,L"Condition failed");
    (*pcVar3)(pFVar2,&local_428,0);
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_1c8.DenylistReason.Data.ArrayNum != 0) {
    FVar21.Data = local_1c8.DenylistReason.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"Test with no constraints");
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_418,L"Condition failed");
    (*pcVar3)(pFVar2,&local_418,0);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
  }
  if ((local_1c8.DriverVersion.bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_1c8.DriverVersion.TypedValue.ComparisonOp != ECO_LessOrEqual) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_408,L"Condition failed");
    (*pcVar3)(pFVar2,&local_408,0);
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
  }
  if ((local_1c8.DriverVersion.bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_3f8._First = &local_b80;
  local_b80 = 0x137;
  local_3f8._Last = (uint *)&local_b78;
  local_b7c = 0x10;
  pTVar7 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
           TArray<unsigned_int,TSizedDefaultAllocator<32>_>(&local_70,&local_3f8);
  pFVar8 = MakeVersionString(&local_108,pTVar7);
  local_9f8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9f8.Values.ArrayNum = 0;
  local_9f8.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_9f8,pFVar8);
  bVar4 = FDriverVersion::operator==(&local_1c8.DriverVersion.TypedValue.Version,&local_9f8);
  if (local_9f8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f8.Values.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_3e8,0);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1c8.DenylistReason.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.DenylistReason.Data.AllocatorInstance.Data);
  }
  if ((local_1c8.DriverVersion.bIsSet != false) &&
     (local_1c8.DriverVersion.TypedValue.Version.Values.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1c8.DriverVersion.TypedValue.Version.Values.AllocatorInstance.Data);
  }
  if ((char)local_1c8._padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1c8._padding_);
  }
  if ((local_1c8._padding_._4_4_ != -1) && ((void *)local_1c8._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_1c8._padding_);
  }
  FDriverDenyListEntry::FDriverDenyListEntry
            (&local_888,L"(DriverDate=\">=12-31-2021\", RHI=\"D3D11\", Reason=\"Test date\")");
  if (local_888.DriverVersion.bIsSet == local_888.DriverDate.bIsSet) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_3d8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_3d8,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_888.DenylistReason.Data.ArrayNum != 0) {
    FVar21.Data = local_888.DenylistReason.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"Test date");
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_3c8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_3c8,0);
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_888._padding_._4_4_ == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pwVar13 = L"";
  if ((int)local_888._padding_ != 0) {
    pwVar13 = (wchar_t *)local_888._padding_;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar13,L"D3D11");
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_3b8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_3b8,0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_888.DriverDate.bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_888.DriverDate.TypedValue.ComparisonOp != ECO_GreaterOrEqual) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_3a8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_3a8,0);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_888.DriverDate.bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = FDateTime::FDateTime(&local_e8,0x7e5,0xc,0x1f,0,0,0,0);
  if (local_888.DriverDate.TypedValue.Date.Ticks != pFVar9->Ticks) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_398,L"Condition failed");
    (*pcVar3)(pFVar2,&local_398,0);
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  }
  if (local_888.DriverVersion.bIsSet == false) {
    if (local_888.DriverDate.bIsSet == false) {
LAB_141c0c7ed:
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_388,L"Condition failed");
      (*pcVar3)(pFVar2,&local_388,0);
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar11 = TOptional<FDriverDenyListEntry::FDriverDateDenyListEntry>::operator->
                          (&local_888.DriverDate);
      if (pFVar11->ComparisonOp != ECO_Greater) {
        pFVar11 = TOptional<FDriverDenyListEntry::FDriverDateDenyListEntry>::operator->
                            (&local_888.DriverDate);
        EVar1 = pFVar11->ComparisonOp;
        goto joined_r0x000141c0c7eb;
      }
    }
  }
  else {
    pFVar10 = TOptional<FDriverDenyListEntry::FDriverVersionDenyListEntry>::operator->
                        (&local_888.DriverVersion);
    if (pFVar10->ComparisonOp != ECO_Greater) {
      pFVar10 = TOptional<FDriverDenyListEntry::FDriverVersionDenyListEntry>::operator->
                          (&local_888.DriverVersion);
      EVar1 = pFVar10->ComparisonOp;
joined_r0x000141c0c7eb:
      if (EVar1 != ECO_GreaterOrEqual) goto LAB_141c0c7ed;
    }
  }
  if (local_888.DenylistReason.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.DenylistReason.Data.AllocatorInstance.Data);
  }
  if ((local_888.DriverVersion.bIsSet != false) &&
     (local_888.DriverVersion.TypedValue.Version.Values.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_888.DriverVersion.TypedValue.Version.Values.AllocatorInstance.Data);
  }
  if ((char)local_888._padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_888._padding_);
  }
  if ((local_888._padding_._4_4_ != -1) && ((wchar_t *)local_888._padding_ != (wchar_t *)0x0)) {
    FMemory::Free((void *)local_888._padding_);
  }
  FSuggestedDriverEntry::FSuggestedDriverEntry
            (&local_8c8,L"(DriverVersion=\"512.15\", RHI=\"D3D11\", AdapterNameRegex=\".*4050.*\")")
  ;
  if (local_8c8.SuggestedDriverVersion.Data.ArrayNum < 2) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_378,L"Condition failed");
    (*pcVar3)(pFVar2,&local_378,0);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  if ((local_8c8._padding_._4_4_ == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pwVar13 = L"";
  if ((int)local_8c8._padding_ != 0) {
    pwVar13 = (wchar_t *)local_8c8._padding_;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar13,L"D3D11");
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_368,L"Condition failed");
    (*pcVar3)(pFVar2,&local_368,0);
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
  }
  if ((char)local_8c8._padding_ == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_358,L"Condition failed");
    (*pcVar3)(pFVar2,&local_358,0);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_8c8.SuggestedDriverVersion.Data.ArrayNum != 0) {
    FVar21.Data = local_8c8.SuggestedDriverVersion.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"512.15");
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_348,L"Condition failed");
    (*pcVar3)(pFVar2,&local_348,0);
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
  }
  if (local_8c8.SuggestedDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_8c8.SuggestedDriverVersion.Data.AllocatorInstance.Data);
  }
  if ((char)local_8c8._padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_8c8._padding_);
  }
  if ((local_8c8._padding_._4_4_ != -1) && ((wchar_t *)local_8c8._padding_ != (wchar_t *)0x0)) {
    FMemory::Free((void *)local_8c8._padding_);
  }
  FSuggestedDriverEntry::FSuggestedDriverEntry(&local_238,L"(DriverVersion=\"101.56\")");
  if (local_238.SuggestedDriverVersion.Data.ArrayNum < 2) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_338,L"Condition failed");
    (*pcVar3)(pFVar2,&local_338,0);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_238.SuggestedDriverVersion.Data.ArrayNum != 0) {
    FVar21.Data = local_238.SuggestedDriverVersion.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"101.56");
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_328,L"Condition failed");
    (*pcVar3)(pFVar2,&local_328,0);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
  }
  if (local_238.SuggestedDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_238.SuggestedDriverVersion.Data.AllocatorInstance.Data);
  }
  if ((char)local_238._padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_238._padding_);
  }
  if ((local_238._padding_._4_4_ != -1) && ((void *)local_238._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_238._padding_);
  }
  FSuggestedDriverEntry::FSuggestedDriverEntry(&local_200,L"111.56");
  if (local_200.SuggestedDriverVersion.Data.ArrayNum < 2) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_318,L"Condition failed");
    (*pcVar3)(pFVar2,&local_318,0);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_200.SuggestedDriverVersion.Data.ArrayNum != 0) {
    FVar21.Data = local_200.SuggestedDriverVersion.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"111.56");
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_308,L"Condition failed");
    (*pcVar3)(pFVar2,&local_308,0);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  if (local_200.SuggestedDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_200.SuggestedDriverVersion.Data.AllocatorInstance.Data);
  }
  if ((char)local_200._padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_200._padding_);
  }
  if ((local_200._padding_._4_4_ != -1) && ((void *)local_200._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_200._padding_);
  }
  FDriverConfigEntryConstraints::FDriverConfigEntryConstraints
            ((FDriverConfigEntryConstraints *)&local_9e8.TypedValue,L"BadString=111.56");
  local_9c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9c0.Data.ArrayNum = 0;
  local_9c0.Data.ArrayMax = 0;
  FParse::Value(L"BadString=111.56",L"DriverVersion=",&local_9c0,true,(wchar_t **)0x0);
  if (((local_9c0.Data.ArrayNum < 2) && (local_9e8.TypedValue.Data.ArrayMax == -1)) &&
     (local_9c8 == '\0')) {
    pFVar8 = ::FString::FString(&local_f8,L"BadString=111.56");
    iVar5 = ::FString::Find(pFVar8,L"=",1,IgnoreCase,FromStart,-1);
    uVar16 = 1;
    if (iVar5 == -1) {
      bVar4 = true;
      goto LAB_141c0cd34;
    }
  }
  bVar4 = false;
LAB_141c0cd34:
  if ((uVar16 != 0) && (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    ::FString::operator=(&local_9c0,L"BadString=111.56");
  }
  if (1 < local_9c0.Data.ArrayNum) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2f8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
  }
  if (local_9c8 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9d0);
  }
  if ((local_9e8.TypedValue.Data.ArrayMax != -1) &&
     (local_9e8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_9e8.TypedValue.Data.AllocatorInstance.Data);
  }
  return;
}

// TestBody @ 141c0ce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall ExecuteOnGameThreadTest::TestBody(ExecuteOnGameThreadTest *this,FString *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTSTicker *pFVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_e8 [32];
  int local_b8 [2];
  TWeakPtr<FTSTicker::FElement,1> local_b0;
  TWeakPtr<FTSTicker::FElement,1> local_a0;
  code *local_88 [2];
  undefined **local_78;
  int *local_70;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b8[0] = 0;
  pFVar5 = FTSTicker::GetCoreTicker();
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::`3'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_70 = local_b8;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                ::Call;
  FTSTicker::AddTicker
            (pFVar5,&local_b0,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(205)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_88);
  if (local_b0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_b0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_b0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_b0.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  if (local_b8[0] != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumExecuted == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                       ,0xce,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FTSTicker::GetCoreTicker();
  FTSTicker::Tick(pFVar5,0.0);
  if (local_b8[0] != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumExecuted == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                       ,0xd1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FTSTicker::GetCoreTicker();
  FTSTicker::Tick(pFVar5,0.0);
  if (local_b8[0] != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumExecuted == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FTSTicker::GetCoreTicker();
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::`25'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_40 = 0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ExecuteOnGameThread<`ExecuteOnGameThreadTest::TestBody'::__l25::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
                ::Call;
  FTSTicker::AddTicker
            (pFVar5,&local_a0,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TickerTests.cpp(216)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_58);
  if (local_a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_a0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_a0.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar6 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar6 = local_30;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// TestBody @ 141c2c180

/* WARNING: Removing unreachable block (ram,0x000141c2c783) */
/* WARNING: Removing unreachable block (ram,0x000141c2c7c4) */
/* WARNING: Removing unreachable block (ram,0x000141c2c7c9) */
/* WARNING: Removing unreachable block (ram,0x000141c2c6e9) */
/* WARNING: Removing unreachable block (ram,0x000141c2c72a) */
/* WARNING: Removing unreachable block (ram,0x000141c2c72f) */
/* WARNING: Removing unreachable block (ram,0x000141c2c5a4) */
/* WARNING: Removing unreachable block (ram,0x000141c2c5e5) */
/* WARNING: Removing unreachable block (ram,0x000141c2c5ea) */
/* WARNING: Removing unreachable block (ram,0x000141c2c51c) */
/* WARNING: Removing unreachable block (ram,0x000141c2c554) */
/* WARNING: Removing unreachable block (ram,0x000141c2c559) */
/* WARNING: Removing unreachable block (ram,0x000141c2c55e) */
/* WARNING: Removing unreachable block (ram,0x000141c2c596) */
/* WARNING: Removing unreachable block (ram,0x000141c2c5ef) */
/* WARNING: Removing unreachable block (ram,0x000141c2c630) */
/* WARNING: Removing unreachable block (ram,0x000141c2c734) */
/* WARNING: Removing unreachable block (ram,0x000141c2c775) */
/* WARNING: Removing unreachable block (ram,0x000141c2c7ce) */
/* WARNING: Removing unreachable block (ram,0x000141c2c80f) */
/* WARNING: Removing unreachable block (ram,0x000141c2ca88) */
/* WARNING: Removing unreachable block (ram,0x000141c2cac9) */
/* WARNING: Removing unreachable block (ram,0x000141c2c95f) */
/* WARNING: Removing unreachable block (ram,0x000141c2c9a0) */
/* WARNING: Removing unreachable block (ram,0x000141c2c69a) */
/* WARNING: Removing unreachable block (ram,0x000141c2c6db) */
/* WARNING: Removing unreachable block (ram,0x000141c2c48b) */
/* WARNING: Removing unreachable block (ram,0x000141c2c4c3) */
/* WARNING: Removing unreachable block (ram,0x000141c2c42b) */
/* WARNING: Removing unreachable block (ram,0x000141c2c441) */
/* WARNING: Removing unreachable block (ram,0x000141c2c479) */
/* WARNING: Removing unreachable block (ram,0x000141c2c3d0) */
/* WARNING: Removing unreachable block (ram,0x000141c2c272) */
/* WARNING: Removing unreachable block (ram,0x000141c2c2aa) */
/* WARNING: Removing unreachable block (ram,0x000141c2c2af) */
/* WARNING: Removing unreachable block (ram,0x000141c2c2b5) */
/* WARNING: Removing unreachable block (ram,0x000141c2c2ed) */
/* WARNING: Removing unreachable block (ram,0x000141c2c4da) */
/* WARNING: Removing unreachable block (ram,0x000141c2c512) */
/* WARNING: Removing unreachable block (ram,0x000141c2c642) */
/* WARNING: Removing unreachable block (ram,0x000141c2c683) */
/* WARNING: Removing unreachable block (ram,0x000141c2c87f) */
/* WARNING: Removing unreachable block (ram,0x000141c2c819) */
/* WARNING: Removing unreachable block (ram,0x000141c2c81f) */
/* WARNING: Removing unreachable block (ram,0x000141c2c828) */
/* WARNING: Removing unreachable block (ram,0x000141c2c869) */
/* WARNING: Removing unreachable block (ram,0x000141c2c873) */
/* WARNING: Removing unreachable block (ram,0x000141c2c89a) */
/* WARNING: Removing unreachable block (ram,0x000141c2c8db) */
/* WARNING: Removing unreachable block (ram,0x000141c2c908) */
/* WARNING: Removing unreachable block (ram,0x000141c2c949) */
/* WARNING: Removing unreachable block (ram,0x000141c2c9b0) */
/* WARNING: Removing unreachable block (ram,0x000141c2c9c2) */
/* WARNING: Removing unreachable block (ram,0x000141c2c9b6) */
/* WARNING: Removing unreachable block (ram,0x000141c2ca21) */
/* WARNING: Removing unreachable block (ram,0x000141c2cae2) */
/* WARNING: Removing unreachable block (ram,0x000141c2cb23) */
/* WARNING: Removing unreachable block (ram,0x000141c2cb36) */
/* WARNING: Removing unreachable block (ram,0x000141c2cb45) */
/* WARNING: Removing unreachable block (ram,0x000141c2cb86) */
/* WARNING: Removing unreachable block (ram,0x000141c2c9ca) */
/* WARNING: Removing unreachable block (ram,0x000141c2ca0b) */
/* WARNING: Removing unreachable block (ram,0x000141c2c3e9) */
/* WARNING: Removing unreachable block (ram,0x000141c2c421) */
/* WARNING: Removing unreachable block (ram,0x000141c2ca30) */
/* WARNING: Removing unreachable block (ram,0x000141c2ca71) */
/* WARNING: Removing unreachable block (ram,0x000141c2cbac) */
/* WARNING: Removing unreachable block (ram,0x000141c2cbe7) */

void __thiscall FRangeBoundTest::TestBody(FRangeBoundTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  float fVar3;
  FAutomationTestFramework *pFVar4;
  FString local_230 [3];
  FString local_200 [2];
  FString local_1e0 [28];
  
  if (__real_40000000 != 2.0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_230,L"Exclusive bound constructor must create the correct value");
    (*pcVar2)(pFVar1,local_230,0);
    if (local_230[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230[0].Data.AllocatorInstance.Data);
    }
  }
  fVar3 = __real_40400000;
  if (__real_40400000 == 2.0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_200,L"Unequal exclusive bounds must be unequal");
    (*pcVar2)(pFVar1,local_200,0);
    if (local_200[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200[0].Data.AllocatorInstance.Data);
    }
  }
  if (fVar3 == 2.0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_1e0,L"Unequal exclusive bounds must not be equal");
    (*pcVar2)(pFVar1,local_1e0,0);
    if (local_1e0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TestDefaultConstruction @ 141c45f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `anonymous_namespace'::TestDefaultConstruction(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  FThread *pFVar5;
  wchar_t *pwVar6;
  undefined ***pppuVar7;
  undefined1 auStackY_218 [32];
  FThread local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  FString local_1b8;
  FThread local_1a8;
  FString local_198;
  FThreadAffinity local_188;
  FThread local_178;
  code *local_168 [2];
  undefined **local_158;
  code *local_150;
  undefined ***local_140;
  wchar_t local_138 [128];
  void *local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1a8.Impl.Object = (FThreadImpl *)0x0;
  local_1a8.Impl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar3 = ::FThread::IsJoinable(&local_1a8);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1b8,L"Default-constructed FThread must be not joinable");
    (*pcVar2)(pFVar1,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  ::FThread::~FThread(&local_1a8);
  local_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0;
  local_158 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_140 = (undefined ***)0x0;
  local_150 = ``anonymous_namespace'::TestDefaultConstruction'::__l7::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_168[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  local_1d8.Impl.Object = (FThreadImpl *)0x0;
  local_1d8.Impl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_188.ThreadAffinityMask = 0xffffffffffffffff;
  local_188.ProcessorGroup = 0;
  local_188._10_6_ = 0;
  pFVar5 = ::FThread::FThread(&local_178,L"Test.Thread.TestDefaultConstruction",
                              (TUniqueFunction<void___cdecl(void)> *)local_168,0,TPri_Normal,
                              &local_188,NonForkable);
  ::FThread::operator=(&local_1d8,pFVar5);
  ::FThread::~FThread(&local_178);
  if (local_168[0] != (code *)0x0) {
    pppuVar7 = &local_158;
    if (local_140 != (undefined ***)0x0) {
      pppuVar7 = local_140;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  bVar3 = ::FThread::IsJoinable(&local_1d8);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_198,L"Move-constructed FThread from joinable thread must be joinable")
    ;
    (*pcVar2)(pFVar1,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  ::FThread::Join(&local_1d8);
  ::FThread::~FThread(&local_1d8);
  if (4 < (byte)LogTemp._0_1_) {
    local_38 = (void *)0x0;
    local_30 = local_138;
    local_28 = 0x2e;
    pwVar6 = FGenericPlatformString::Convert<char,wchar_t>
                       (local_138,0x2f,"`anonymous-namespace\'::TestDefaultConstruction",0x2f);
    if (pwVar6 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Logging::Private::BasicLog<5>
              (&`TestDefaultConstruction'::`11'::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}

// TestInterlockedAdd @ 141c46350

bool __cdecl TestInterlockedAdd(void)

{
  bool bVar1;
  bool bVar2;
  schar local_res8 [8];
  long64 local_res10;
  long64 local_res18;
  long64 local_res20;
  long64 local_58;
  code *local_50;
  long64 *local_48;
  
  local_48 = &local_58;
  local_res8[0] = '\x0f';
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar1 = TestInterlocked<signed_char>
                    (local_res8,'\x0f','\x11',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_50,L"Add",
                     L"int8");
  local_48 = &local_58;
  local_res10 = CONCAT71(local_res10._1_7_,0x11);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res10,'\x11','\x0f',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_50,L"Add",
                     L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = &local_58;
  local_res18 = CONCAT71(local_res18._1_7_,0x7e);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l3::<lambda_3>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res18,'~',-0x7e,
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_50,L"Add",
                     L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = &local_58;
  local_res20 = CONCAT71(local_res20._1_7_,0x82);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l3::<lambda_4>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res20,-0x7e,'~',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_50,L"Add",
                     L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l4::<lambda_5>,short,short_volatile_*>::Call
  ;
  local_res10 = CONCAT62(local_res10._2_6_,0xf00);
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res10,0xf00,0x1001,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_50,L"Add",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_res18 = CONCAT62(local_res18._2_6_,0x1001);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l4::<lambda_6>,short,short_volatile_*>::Call
  ;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res18,0x1001,0xf00,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_50,L"Add",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_res20 = CONCAT62(local_res20._2_6_,0x7ffe);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l4::<lambda_7>,short,short_volatile_*>::Call
  ;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res20,0x7ffe,-0x7ffe,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_50,L"Add",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_58 = CONCAT62(local_58._2_6_,0x8002);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l4::<lambda_8>,short,short_volatile_*>::Call
  ;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_58,-0x7ffe,0x7ffe,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_50,L"Add",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_res10 = CONCAT44(local_res10._4_4_,0xf000000);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l5::<lambda_9>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res10,0xf000000,0x10010101,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_50,L"Add",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_res18 = CONCAT44(local_res18._4_4_,0x10010101);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l5::<lambda_10>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res18,0x10010101,0xf000000,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_50,L"Add",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_res20 = CONCAT44(local_res20._4_4_,0x7ffffffe);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l5::<lambda_11>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res20,0x7ffffffe,-0x7ffffffe,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_50,L"Add",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_58 = CONCAT44(local_58._4_4_,0x80000002);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l5::<lambda_12>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_58,-0x7ffffffe,0x7ffffffe,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_50,L"Add",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res10 = 0xf00000000000000;
  local_48 = (long64 *)local_res8;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l6::<lambda_13>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res10,0xf00000000000000,0x1001010101010101,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_50,L"Add",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_res18 = 0x1001010101010101;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l6::<lambda_14>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res18,0x1001010101010101,0xf00000000000000,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_50,L"Add",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_res20 = 0x7ffffffffffffffe;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l6::<lambda_15>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res20,0x7ffffffffffffffe,-0x7ffffffffffffffe,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_50,L"Add",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_48 = (long64 *)local_res8;
  local_58 = -0x7ffffffffffffffe;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAdd'::__l6::<lambda_16>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_58,-0x7ffffffffffffffe,0x7ffffffffffffffe,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_50,L"Add",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// TestInterlockedAnd @ 141c46830

bool __cdecl TestInterlockedAnd(void)

{
  bool bVar1;
  bool bVar2;
  schar local_res8 [8];
  long64 local_res10;
  long64 local_res18;
  long64 local_res20;
  code *local_38;
  long64 *local_30;
  
  local_30 = &local_res20;
  local_res8[0] = '0';
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar1 = TestInterlocked<signed_char>
                    (local_res8,'0',' ',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_38,L"And",
                     L"int8");
  local_30 = &local_res20;
  local_res10 = CONCAT71(local_res10._1_7_,0x30);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res10,'0','0',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_38,L"And",
                     L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = &local_res20;
  local_res18 = CONCAT71(local_res18._1_7_,0x30);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l3::<lambda_3>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res18,'0','\0',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_38,L"And",
                     L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l4::<lambda_4>,short,short_volatile_*>::Call
  ;
  local_res10 = CONCAT62(local_res10._2_6_,0x3030);
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res10,0x3030,0x2020,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_38,L"And",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res18 = CONCAT62(local_res18._2_6_,0x3030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l4::<lambda_5>,short,short_volatile_*>::Call
  ;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res18,0x3030,0x3030,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_38,L"And",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res20 = CONCAT62(local_res20._2_6_,0x3030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l4::<lambda_6>,short,short_volatile_*>::Call
  ;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res20,0x3030,0,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_38,L"And",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res10 = CONCAT44(local_res10._4_4_,0x30303030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l5::<lambda_7>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res10,0x30303030,0x20202020,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_38,L"And",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res18 = CONCAT44(local_res18._4_4_,0x30303030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l5::<lambda_8>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res18,0x30303030,0x30303030,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_38,L"And",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res20 = CONCAT44(local_res20._4_4_,0x30303030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l5::<lambda_9>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res20,0x30303030,0,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_38,L"And",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l6::<lambda_10>,__int64,__int64_volatile_*>
             ::Call;
  local_res10 = 0x3030303030303030;
  bVar2 = TestInterlocked<__int64>
                    (&local_res10,0x3030303030303030,0x2020202020202020,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_38,L"And",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res18 = 0x3030303030303030;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l6::<lambda_11>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res18,0x3030303030303030,0x3030303030303030,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_38,L"And",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res20 = 0x3030303030303030;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedAnd'::__l6::<lambda_12>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res20,0x3030303030303030,0,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_38,L"And",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// TestInterlockedCompareExchange @ 141c46bb0

bool __cdecl TestInterlockedCompareExchange(void)

{
  bool bVar1;
  bool bVar2;
  schar local_res8 [8];
  long64 local_res10;
  code *local_28;
  long64 *local_20;
  
  local_20 = &local_res10;
  local_res8[0] = '\x10';
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedCompareExchange'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar1 = TestInterlocked<signed_char>
                    (local_res8,'\x10','\x10',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_28,
                     L"CompareExchange",L"int8");
  local_20 = &local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedCompareExchange'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    (local_res8,'\x10','\x01',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_28,
                     L"CompareExchange",L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedCompareExchange'::__l4::<lambda_3>,short,short_volatile_*>
             ::Call;
  local_res10 = CONCAT62(local_res10._2_6_,0x1000);
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res10,0x1000,0x1000,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_28,L"CompareExchange",
                     L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedCompareExchange'::__l4::<lambda_4>,short,short_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res10,0x1000,1,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_28,L"CompareExchange",
                     L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_20 = (long64 *)local_res8;
  local_res10 = CONCAT44(local_res10._4_4_,0x10000000);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedCompareExchange'::__l5::<lambda_5>,int,int_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res10,0x10000000,0x10000000,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_28,L"CompareExchange",
                     L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedCompareExchange'::__l5::<lambda_6>,int,int_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res10,0x10000000,0x101,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_28,L"CompareExchange",
                     L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res10 = 0x1000000000000000;
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedCompareExchange'::__l6::<lambda_7>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res10,0x1000000000000000,0x1000000000000000,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_28,
                     L"CompareExchange",L"int64");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedCompareExchange'::__l6::<lambda_8>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res10,0x1000000000000000,0x1010101,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_28,
                     L"CompareExchange",L"int64");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// TestInterlockedDecrement @ 141c46e30

bool __cdecl TestInterlockedDecrement(void)

{
  bool bVar1;
  bool bVar2;
  schar local_res8 [8];
  long64 local_res10;
  long64 local_res18;
  code *local_28;
  long64 *local_20;
  
  local_20 = &local_res18;
  local_res8[0] = '\x10';
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedDecrement'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar1 = TestInterlocked<signed_char>
                    (local_res8,'\x0f','\x0f',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_28,
                     L"Decrement",L"int8");
  local_20 = &local_res18;
  local_res10 = CONCAT71(local_res10._1_7_,0x80);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedDecrement'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res10,'\x7f','\x7f',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_28,
                     L"Decrement",L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res10 = CONCAT62(local_res10._2_6_,0xf10);
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedDecrement'::__l4::<lambda_3>,short,short_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res10,0xf0f,0xf0f,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_28,L"Decrement",
                     L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res18 = CONCAT62(local_res18._2_6_,0x8000);
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedDecrement'::__l4::<lambda_4>,short,short_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res18,0x7fff,0x7fff,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_28,L"Decrement",
                     L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_20 = (long64 *)local_res8;
  local_res10 = CONCAT44(local_res10._4_4_,0xf000010);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedDecrement'::__l5::<lambda_5>,int,int_volatile_*>::
             Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res10,0xf00000f,0xf00000f,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_28,L"Decrement",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_20 = (long64 *)local_res8;
  local_res18 = CONCAT44(local_res18._4_4_,0x80000000);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedDecrement'::__l5::<lambda_6>,int,int_volatile_*>::
             Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res18,0x7fffffff,0x7fffffff,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_28,L"Decrement",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res10 = 0xf00000000000010;
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedDecrement'::__l6::<lambda_7>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res10,0xf0000000000000f,0xf0000000000000f,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_28,L"Decrement",
                     L"int64");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res18 = -0x8000000000000000;
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedDecrement'::__l6::<lambda_8>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res18,0x7fffffffffffffff,0x7fffffffffffffff,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_28,L"Decrement",
                     L"int64");
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// TestInterlockedIncrement @ 141c470d0

bool __cdecl TestInterlockedIncrement(void)

{
  bool bVar1;
  bool bVar2;
  schar local_res8 [8];
  long64 local_res10;
  long64 local_res18;
  code *local_28;
  long64 *local_20;
  
  local_20 = &local_res18;
  local_res8[0] = '\x0f';
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedIncrement'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar1 = TestInterlocked<signed_char>
                    (local_res8,'\x10','\x10',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_28,
                     L"Increment",L"int8");
  local_20 = &local_res18;
  local_res10 = CONCAT71(local_res10._1_7_,0x7f);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedIncrement'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res10,-0x80,-0x80,
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_28,
                     L"Increment",L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res10 = CONCAT62(local_res10._2_6_,0xf0f);
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedIncrement'::__l4::<lambda_3>,short,short_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res10,0xf10,0xf10,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_28,L"Increment",
                     L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res18 = CONCAT62(local_res18._2_6_,0x7fff);
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedIncrement'::__l4::<lambda_4>,short,short_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res18,-0x8000,-0x8000,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_28,L"Increment",
                     L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_20 = (long64 *)local_res8;
  local_res10 = CONCAT44(local_res10._4_4_,0xf00000f);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedIncrement'::__l5::<lambda_5>,int,int_volatile_*>::
             Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res10,0xf000010,0xf000010,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_28,L"Increment",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_20 = (long64 *)local_res8;
  local_res18 = CONCAT44(local_res18._4_4_,0x7fffffff);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedIncrement'::__l5::<lambda_6>,int,int_volatile_*>::
             Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res18,-0x80000000,-0x80000000,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_28,L"Increment",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res10 = 0xf0000000000000f;
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedIncrement'::__l6::<lambda_7>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res10,0xf00000000000010,0xf00000000000010,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_28,L"Increment",
                     L"int64");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_res18 = 0x7fffffffffffffff;
  local_20 = (long64 *)local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedIncrement'::__l6::<lambda_8>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res18,-0x8000000000000000,-0x8000000000000000,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_28,L"Increment",
                     L"int64");
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// TestInterlockedOr @ 141c47370

bool __cdecl TestInterlockedOr(void)

{
  bool bVar1;
  bool bVar2;
  schar local_res8 [8];
  long64 local_res10;
  long64 local_res18;
  long64 local_res20;
  code *local_38;
  long64 *local_30;
  
  local_30 = &local_res20;
  local_res8[0] = '0';
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar1 = TestInterlocked<signed_char>
                    (local_res8,'0','v',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_38,L"Or",
                     L"int8");
  local_30 = &local_res20;
  local_res10 = CONCAT71(local_res10._1_7_,0x30);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res10,'0',-1,
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_38,L"Or",
                     L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = &local_res20;
  local_res18 = CONCAT71(local_res18._1_7_,0x30);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l3::<lambda_3>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res18,'0','0',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_38,L"Or",
                     L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l4::<lambda_4>,short,short_volatile_*>::Call;
  local_res10 = CONCAT62(local_res10._2_6_,0x3030);
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res10,0x3030,0x7676,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_38,L"Or",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res18 = CONCAT62(local_res18._2_6_,0x3030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l4::<lambda_5>,short,short_volatile_*>::Call;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res18,0x3030,-1,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_38,L"Or",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res20 = CONCAT62(local_res20._2_6_,0x3030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l4::<lambda_6>,short,short_volatile_*>::Call;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res20,0x3030,0x3030,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_38,L"Or",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res10 = CONCAT44(local_res10._4_4_,0x30303030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l5::<lambda_7>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res10,0x30303030,0x76767676,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_38,L"Or",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res18 = CONCAT44(local_res18._4_4_,0x30303030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l5::<lambda_8>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res18,0x30303030,-1,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_38,L"Or",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res20 = CONCAT44(local_res20._4_4_,0x30303030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l5::<lambda_9>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res20,0x30303030,0x30303030,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_38,L"Or",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l6::<lambda_10>,__int64,__int64_volatile_*>::
             Call;
  local_res10 = 0x3030303030303030;
  bVar2 = TestInterlocked<__int64>
                    (&local_res10,0x3030303030303030,0x7676767676767676,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_38,L"Or",L"int64");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res18 = 0x3030303030303030;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l6::<lambda_11>,__int64,__int64_volatile_*>::
             Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res18,0x3030303030303030,-1,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_38,L"Or",L"int64");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res20 = 0x3030303030303030;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedOr'::__l6::<lambda_12>,__int64,__int64_volatile_*>::
             Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res20,0x3030303030303030,0x3030303030303030,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_38,L"Or",L"int64");
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// TestInterlockedXor @ 141c47700

bool __cdecl TestInterlockedXor(void)

{
  bool bVar1;
  bool bVar2;
  schar local_res8 [8];
  long64 local_res10;
  long64 local_res18;
  long64 local_res20;
  code *local_38;
  long64 *local_30;
  
  local_30 = &local_res20;
  local_res8[0] = '0';
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l3::<lambda_1>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar1 = TestInterlocked<signed_char>
                    (local_res8,'0','V',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_38,L"Xor",
                     L"int8");
  local_30 = &local_res20;
  local_res10 = CONCAT71(local_res10._1_7_,0x30);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l3::<lambda_2>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res10,'0',-0x31,
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_38,L"Xor",
                     L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = &local_res20;
  local_res18 = CONCAT71(local_res18._1_7_,0x30);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l3::<lambda_3>,signed_char,signed_char_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<signed_char>
                    ((schar *)&local_res18,'0','0',
                     (TFunctionRef<signed_char___cdecl(signed_char_volatile_*)> *)&local_38,L"Xor",
                     L"int8");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l4::<lambda_4>,short,short_volatile_*>::Call
  ;
  local_res10 = CONCAT62(local_res10._2_6_,0x3030);
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res10,0x3030,0x5656,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_38,L"Xor",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res18 = CONCAT62(local_res18._2_6_,0x3030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l4::<lambda_5>,short,short_volatile_*>::Call
  ;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res18,0x3030,-0x3031,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_38,L"Xor",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res20 = CONCAT62(local_res20._2_6_,0x3030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l4::<lambda_6>,short,short_volatile_*>::Call
  ;
  bVar2 = TestInterlocked<short>
                    ((short *)&local_res20,0x3030,0x3030,
                     (TFunctionRef<short___cdecl(short_volatile_*)> *)&local_38,L"Xor",L"int16");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res10 = CONCAT44(local_res10._4_4_,0x30303030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l5::<lambda_7>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res10,0x30303030,0x56565656,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_38,L"Xor",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res18 = CONCAT44(local_res18._4_4_,0x30303030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l5::<lambda_8>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res18,0x30303030,-0x30303031,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_38,L"Xor",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res20 = CONCAT44(local_res20._4_4_,0x30303030);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l5::<lambda_9>,int,int_volatile_*>::Call;
  bVar2 = TestInterlocked<int>
                    ((int *)&local_res20,0x30303030,0x30303030,
                     (TFunctionRef<int___cdecl(int_volatile_*)> *)&local_38,L"Xor",L"int32");
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l6::<lambda_10>,__int64,__int64_volatile_*>
             ::Call;
  local_res10 = 0x3030303030303030;
  bVar2 = TestInterlocked<__int64>
                    (&local_res10,0x3030303030303030,0x5656565656565656,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_38,L"Xor",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res18 = 0x3030303030303030;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l6::<lambda_11>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res18,0x3030303030303030,-0x3030303030303031,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_38,L"Xor",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_30 = (long64 *)local_res8;
  local_res20 = 0x3030303030303030;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TestInterlockedXor'::__l6::<lambda_12>,__int64,__int64_volatile_*>
             ::Call;
  bVar2 = TestInterlocked<__int64>
                    (&local_res20,0x3030303030303030,0x3030303030303030,
                     (TFunctionRef<__int64___cdecl(__int64_volatile_*)> *)&local_38,L"Xor",L"int64")
  ;
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// TestMovability @ 141c48890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `anonymous_namespace'::TestMovability(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  wchar_t *pwVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_3a8 [32];
  FThread local_368;
  FThread local_358;
  FThread local_348;
  FThread local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  FThread local_318;
  undefined8 local_308;
  undefined8 uStack_300;
  FThread local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  FString local_2c8;
  FString local_2b8;
  FThread local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FThread local_258;
  FThreadAffinity local_248;
  FThreadAffinity local_238;
  FThreadAffinity local_228;
  FThreadAffinity local_218;
  code *local_208 [2];
  undefined **local_1f8;
  code *local_1f0;
  undefined ***local_1e0;
  code *local_1d8 [2];
  undefined **local_1c8;
  code *local_1c0;
  undefined ***local_1b0;
  code *local_1a8 [2];
  undefined **local_198;
  code *local_190;
  undefined ***local_180;
  code *local_178 [2];
  undefined **local_168;
  code *local_160;
  undefined ***local_150;
  wchar_t local_148 [128];
  void *local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_2a8.Impl.Object = (FThreadImpl *)0x0;
  local_2a8.Impl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_338.Impl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_338.Impl.Object = (FThreadImpl *)0x0;
  bVar3 = ::FThread::IsJoinable(&local_338);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2c8,
                       L"Default-constructed thread must stay not joinable after moving out");
    (*pcVar2)(pFVar1,&local_2c8,0);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = ::FThread::IsJoinable(&local_2a8);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2b8,
                       L"Move-constructed thread from not joinable thread must be not joinable");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  ::FThread::~FThread(&local_2a8);
  ::FThread::~FThread(&local_338);
  local_328 = 0xffffffffffffffff;
  local_1f0 = ``anonymous_namespace'::TestMovability'::__l10::<lambda_1>::<lambda_invoker_cdecl>;
  uStack_320 = 0;
  local_248.ThreadAffinityMask = 0xffffffffffffffff;
  local_248.ProcessorGroup = 0;
  local_248._10_6_ = 0;
  local_1e0 = (undefined ***)0x0;
  local_1f8 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_208[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  ::FThread::FThread(&local_368,L"Test.Thread.TestMovability.1",
                     (TUniqueFunction<void___cdecl(void)> *)local_208,0,TPri_Normal,&local_248,
                     NonForkable);
  if (local_208[0] != (code *)0x0) {
    pppuVar6 = &local_1f8;
    if (local_1e0 != (undefined ***)0x0) {
      pppuVar6 = local_1e0;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  local_318.Impl.Object = local_368.Impl.Object;
  local_318.Impl.SharedReferenceCount.ReferenceController =
       local_368.Impl.SharedReferenceCount.ReferenceController;
  local_368.Impl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_368.Impl.Object = (FThreadImpl *)0x0;
  bVar3 = ::FThread::IsJoinable(&local_368);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_298,L"Moved out thread must be not joinable");
    (*pcVar2)(pFVar1,&local_298,0);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = ::FThread::IsJoinable(&local_318);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_288,L"Move-constructed thread from joinable thread must be joinable");
    (*pcVar2)(pFVar1,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  ::FThread::Join(&local_318);
  ::FThread::~FThread(&local_318);
  ::FThread::~FThread(&local_368);
  local_308 = 0xffffffffffffffff;
  local_1c0 = ``anonymous_namespace'::TestMovability'::__l17::<lambda_2>::<lambda_invoker_cdecl>;
  uStack_300 = 0;
  local_238.ThreadAffinityMask = 0xffffffffffffffff;
  local_238.ProcessorGroup = 0;
  local_238._10_6_ = 0;
  local_1b0 = (undefined ***)0x0;
  local_1c8 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_1d8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  ::FThread::FThread(&local_2f8,L"Test.Thread.TestMovability.2",
                     (TUniqueFunction<void___cdecl(void)> *)local_1d8,0,TPri_Normal,&local_238,
                     NonForkable);
  if (local_1d8[0] != (code *)0x0) {
    pppuVar6 = &local_1c8;
    if (local_1b0 != (undefined ***)0x0) {
      pppuVar6 = local_1b0;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  local_358.Impl.Object = (FThreadImpl *)0x0;
  local_358.Impl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FThread::operator=(&local_358,&local_2f8);
  bVar3 = ::FThread::IsJoinable(&local_2f8);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_278,L"Moved out thread must be not joinable");
    (*pcVar2)(pFVar1,&local_278,0);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = ::FThread::IsJoinable(&local_358);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_268,L"Move-assigned thread from joinable thread must be joinable");
    (*pcVar2)(pFVar1,&local_268,0);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  ::FThread::Join(&local_358);
  ::FThread::~FThread(&local_358);
  ::FThread::~FThread(&local_2f8);
  local_2e8 = 0xffffffffffffffff;
  local_190 = ``anonymous_namespace'::TestMovability'::__l25::<lambda_3>::<lambda_invoker_cdecl>;
  uStack_2e0 = 0;
  local_228.ThreadAffinityMask = 0xffffffffffffffff;
  local_228.ProcessorGroup = 0;
  local_228._10_6_ = 0;
  local_180 = (undefined ***)0x0;
  local_198 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_1a8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  ::FThread::FThread(&local_258,L"Test.Thread.TestMovability.3",
                     (TUniqueFunction<void___cdecl(void)> *)local_1a8,0,TPri_Normal,&local_228,
                     NonForkable);
  if (local_1a8[0] != (code *)0x0) {
    pppuVar6 = &local_198;
    if (local_180 != (undefined ***)0x0) {
      pppuVar6 = local_180;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  local_2d8 = 0xffffffffffffffff;
  local_160 = ``anonymous_namespace'::TestMovability'::__l25::<lambda_4>::<lambda_invoker_cdecl>;
  uStack_2d0 = 0;
  local_218.ThreadAffinityMask = 0xffffffffffffffff;
  local_218.ProcessorGroup = 0;
  local_218._10_6_ = 0;
  local_150 = (undefined ***)0x0;
  local_168 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_178[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  ::FThread::FThread(&local_348,L"Test.Thread.TestMovability.4",
                     (TUniqueFunction<void___cdecl(void)> *)local_178,0,TPri_Normal,&local_218,
                     NonForkable);
  if (local_178[0] != (code *)0x0) {
    pppuVar6 = &local_168;
    if (local_150 != (undefined ***)0x0) {
      pppuVar6 = local_150;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  ::FThread::Join(&local_348);
  ::FThread::operator=(&local_348,&local_258);
  ::FThread::Join(&local_348);
  ::FThread::~FThread(&local_348);
  ::FThread::~FThread(&local_258);
  if (4 < (byte)LogTemp._0_1_) {
    local_48 = (void *)0x0;
    local_40 = local_148;
    local_38 = 0x25;
    pwVar5 = FGenericPlatformString::Convert<char,wchar_t>
                       (local_148,0x26,"`anonymous-namespace\'::TestMovability",0x26);
    if (pwVar5 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Logging::Private::BasicLog<5>
              (&`TestMovability'::`26'::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}

// TestSlicing @ 141c49050

void __cdecl TestSlicing(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  FAutomationTestFramework *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  wchar_t *pwVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  iVar15 = (param_1->Data).ArrayNum;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  iVar10 = -5;
  iVar11 = 0;
  iVar17 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar17 = iVar11;
  }
  iVar15 = iVar17 + 5;
  if (iVar15 != -5) {
    do {
      iVar13 = (param_1->Data).ArrayNum;
      iVar12 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar12 = iVar11;
      }
      if (iVar10 < iVar12) {
        iVar12 = iVar10;
      }
      iVar16 = iVar11;
      if (0 < iVar12) {
        iVar16 = iVar12;
      }
      if (iVar13 == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      FString::ConstructFromPtrSize(&local_e8,pwVar14,iVar16);
      iVar13 = iVar17;
      if (iVar10 < iVar17) {
        iVar13 = iVar10;
      }
      iVar12 = 0;
      if (0 < iVar13) {
        iVar12 = iVar13;
      }
      pFVar7 = FString::ConstructFromPtrSize(&local_c8,(wchar_t *)pFVar1,iVar12);
      pFVar9 = (FScriptContainerElement *)0x0;
      iVar13 = iVar11;
      if (&local_a8 != pFVar7) {
        pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar13 = (pFVar7->Data).ArrayNum;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (iVar13 == local_e8.Data.ArrayNum) {
        if (iVar13 < 2) {
          bVar18 = false;
        }
        else {
          iVar13 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)pFVar9,(wchar_t *)local_e8.Data.AllocatorInstance.Data);
          bVar18 = iVar13 != 0;
        }
      }
      else {
        bVar18 = local_e8.Data.ArrayNum + iVar13 != 1;
      }
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      if (bVar18) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        FString::FString(&local_d8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar15);
    iVar11 = -5;
    iVar10 = iVar15;
    do {
      iVar12 = (param_1->Data).ArrayNum;
      iVar16 = 0;
      iVar13 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar13 = 0;
      }
      if (iVar13 - iVar11 < iVar13) {
        iVar13 = iVar13 - iVar11;
      }
      iVar6 = 0;
      if (0 < iVar13) {
        iVar6 = iVar13;
      }
      if (iVar12 == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      FString::ConstructFromPtrSize(&local_e8,pwVar14,iVar6);
      iVar13 = iVar17;
      if (iVar10 < iVar17) {
        iVar13 = iVar10;
      }
      iVar12 = 0;
      if (0 < iVar13) {
        iVar12 = iVar13;
      }
      pFVar7 = FString::ConstructFromPtrSize(&local_c8,(wchar_t *)pFVar1,iVar12);
      pFVar9 = (FScriptContainerElement *)0x0;
      if (&local_98 != pFVar7) {
        pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = (pFVar7->Data).ArrayNum;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (iVar16 == local_e8.Data.ArrayNum) {
        if (iVar16 < 2) {
          bVar18 = false;
        }
        else {
          iVar13 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)pFVar9,(wchar_t *)local_e8.Data.AllocatorInstance.Data);
          bVar18 = iVar13 != 0;
        }
      }
      else {
        bVar18 = local_e8.Data.ArrayNum + iVar16 != 1;
      }
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      if (bVar18) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        FString::FString(&local_d8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar11 != iVar15);
    iVar10 = -5;
    do {
      iVar13 = (param_1->Data).ArrayNum;
      iVar12 = 0;
      iVar11 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar11 = 0;
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar13 = iVar11;
      if (iVar10 < iVar11) {
        iVar13 = iVar10;
      }
      iVar16 = 0;
      if (0 < iVar13) {
        iVar16 = iVar13;
      }
      FString::FString(&local_e8,
                       (wchar_t *)((longlong)pwVar14 + ((longlong)iVar11 - (longlong)iVar16) * 2));
      iVar11 = iVar17;
      if (iVar10 < iVar17) {
        iVar11 = iVar10;
      }
      iVar13 = 0;
      if (0 < iVar11) {
        iVar13 = iVar11;
      }
      pFVar7 = FString::ConstructFromPtrSize
                         (&local_c8,(wchar_t *)(pFVar1 + ((longlong)iVar17 - (longlong)iVar13) * 2),
                          iVar13);
      pFVar9 = (FScriptContainerElement *)0x0;
      if (&local_88 != pFVar7) {
        pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar12 = (pFVar7->Data).ArrayNum;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (iVar12 == local_e8.Data.ArrayNum) {
        if (iVar12 < 2) {
          bVar18 = false;
        }
        else {
          iVar11 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)pFVar9,(wchar_t *)local_e8.Data.AllocatorInstance.Data);
          bVar18 = iVar11 != 0;
        }
      }
      else {
        bVar18 = local_e8.Data.ArrayNum + iVar12 != 1;
      }
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      if (bVar18) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        FString::FString(&local_d8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar15);
    iVar11 = -5;
    iVar10 = iVar17 + 5;
    do {
      FString::RightChop(param_1,&local_e8,iVar11);
      iVar13 = iVar17;
      if (iVar10 < iVar17) {
        iVar13 = iVar10;
      }
      iVar12 = 0;
      if (0 < iVar13) {
        iVar12 = iVar13;
      }
      pFVar7 = FString::ConstructFromPtrSize
                         (&local_c8,(wchar_t *)(pFVar1 + ((longlong)iVar17 - (longlong)iVar12) * 2),
                          iVar12);
      pFVar9 = (FScriptContainerElement *)0x0;
      iVar13 = 0;
      if (&local_78 != pFVar7) {
        pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar13 = (pFVar7->Data).ArrayNum;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (iVar13 == local_e8.Data.ArrayNum) {
        if (iVar13 < 2) {
          bVar18 = false;
        }
        else {
          iVar13 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)pFVar9,(wchar_t *)local_e8.Data.AllocatorInstance.Data);
          bVar18 = iVar13 != 0;
        }
      }
      else {
        bVar18 = local_e8.Data.ArrayNum + iVar13 != 1;
      }
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      if (bVar18) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        FString::FString(&local_d8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar11 != iVar15);
    iVar10 = -5;
    do {
      iVar11 = 0;
      if (iVar10 < 0) {
        iVar11 = iVar10;
      }
      iVar12 = -5;
      iVar13 = iVar10 - iVar11;
      if (iVar17 < iVar10 - iVar11) {
        iVar13 = iVar17;
      }
      do {
        FString::Mid(param_1,&local_e8,iVar10,iVar12);
        iVar16 = iVar17 - iVar13;
        if (iVar11 + iVar12 < iVar17 - iVar13) {
          iVar16 = iVar11 + iVar12;
        }
        iVar6 = 0;
        if (0 < iVar16) {
          iVar6 = iVar16;
        }
        pFVar7 = FString::ConstructFromPtrSize
                           (&local_c8,(wchar_t *)(pFVar1 + (longlong)iVar13 * 2),iVar6);
        pFVar9 = (FScriptContainerElement *)0x0;
        iVar16 = 0;
        if (&local_68 != pFVar7) {
          pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar16 = (pFVar7->Data).ArrayNum;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (iVar16 == local_e8.Data.ArrayNum) {
          if (iVar16 < 2) {
            bVar18 = false;
          }
          else {
            iVar16 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)pFVar9,(wchar_t *)local_e8.Data.AllocatorInstance.Data);
            bVar18 = iVar16 != 0;
          }
        }
        else {
          bVar18 = local_e8.Data.ArrayNum + iVar16 != 1;
        }
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        if (bVar18) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar2 = pFVar8->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          FString::FString(&local_d8,L"Condition failed");
          (*pcVar3)(pFVar2,&local_d8,0);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar15);
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar15);
    if (iVar15 == 0) {
      return;
    }
  }
  iVar10 = -0x80000000;
  do {
    iVar13 = 0;
    iVar11 = iVar13;
    if (iVar10 < 0) {
      iVar11 = iVar10;
    }
    iVar16 = 0x7fffffff;
    iVar12 = iVar10 - iVar11;
    if (iVar17 < iVar10 - iVar11) {
      iVar12 = iVar17;
    }
    local_e8.Data.AllocatorInstance.Data = pFVar1 + (longlong)iVar12 * 2;
    do {
      FVar4.Data = local_e8.Data.AllocatorInstance.Data;
      FString::Mid(param_1,&local_d8,iVar10,iVar16);
      iVar5 = (iVar11 - iVar13) + 0x7fffffff;
      iVar6 = iVar17 - iVar12;
      if (iVar5 < iVar17 - iVar12) {
        iVar6 = iVar5;
      }
      iVar5 = 0;
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      pFVar7 = FString::ConstructFromPtrSize(&local_b8,(wchar_t *)FVar4.Data,iVar5);
      pFVar9 = (FScriptContainerElement *)0x0;
      iVar6 = 0;
      if (&local_58 != pFVar7) {
        pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar6 = (pFVar7->Data).ArrayNum;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (iVar6 == local_d8.Data.ArrayNum) {
        if (iVar6 < 2) {
          bVar18 = false;
        }
        else {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)pFVar9,(wchar_t *)local_d8.Data.AllocatorInstance.Data);
          bVar18 = iVar6 != 0;
        }
      }
      else {
        bVar18 = local_d8.Data.ArrayNum + iVar6 != 1;
      }
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      if (bVar18) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        FString::FString(&local_c8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_c8,0);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      iVar13 = iVar13 + 1;
      iVar16 = iVar16 + -1;
    } while (iVar13 != iVar15);
    iVar11 = iVar10 + -0x7fffffff;
    iVar10 = iVar10 + 1;
  } while (iVar11 != iVar15);
  return;
}

// TestThreadSingleton @ 141c49840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `anonymous_namespace'::TestThreadSingleton(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTlsAutoCleanup *pFVar4;
  FThread *pFVar5;
  FAutomationTestFramework *pFVar6;
  wchar_t *pwVar7;
  undefined ***pppuVar8;
  undefined1 auStackY_2c8 [32];
  char local_288;
  undefined1 local_287;
  undefined1 local_286 [14];
  undefined8 local_278;
  undefined8 uStack_270;
  FThread local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  FThread local_248;
  code *local_238;
  undefined1 *local_230;
  FString local_228;
  code *local_218;
  undefined1 *local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FThreadAffinity local_1d8;
  FThread local_1c8;
  FThreadAffinity local_1b8;
  FThread local_1a8;
  code *local_198 [2];
  undefined **local_188;
  char *local_180;
  undefined ***local_170;
  code *local_168 [2];
  undefined **local_158;
  code *local_150;
  undefined ***local_140;
  wchar_t local_138 [128];
  void *local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_230 = &local_287;
  local_238 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_238,&DAT_154b85e98);
  local_278 = 0xffffffffffffffff;
  *(undefined4 *)(pFVar4 + 2) = 1;
  uStack_270 = 0;
  local_188 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TestThreadSingleton'::`3'::<lambda_1>,1,0>::_vftable_;
  local_180 = &local_288;
  local_288 = '\0';
  local_170 = (undefined ***)0x0;
  local_198[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<``anonymous_namespace'::TestThreadSingleton'::__l3::<lambda_1>,void>
                 ::Call;
  local_268.Impl.Object = (FThreadImpl *)0x0;
  local_268.Impl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1d8.ThreadAffinityMask = 0xffffffffffffffff;
  local_1d8.ProcessorGroup = 0;
  local_1d8._10_6_ = 0;
  pFVar5 = ::FThread::FThread(&local_1c8,L"Test.Thread.TestThreadSingleton",
                              (TUniqueFunction<void___cdecl(void)> *)local_198,0,TPri_Normal,
                              &local_1d8,NonForkable);
  ::FThread::operator=(&local_268,pFVar5);
  ::FThread::~FThread(&local_1c8);
  if (local_198[0] != (code *)0x0) {
    pppuVar8 = &local_188;
    if (local_170 != (undefined ***)0x0) {
      pppuVar8 = local_170;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  ::FThread::Join(&local_268);
  if (local_288 == '\0') {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_228,L"Thread singleton should be uninitialized by default");
    (*pcVar2)(pFVar1,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  local_210 = local_286;
  local_218 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l3::FThreadSingletonTest>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_218,&DAT_154b85e98);
  if (*(int *)(pFVar4 + 2) != 1) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_208,L"Thread singletons in different threads should be isolated");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  ::FThread::~FThread(&local_268);
  local_258 = 0xffffffffffffffff;
  local_158 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  uStack_250 = 0;
  local_150 = ``anonymous_namespace'::TestThreadSingleton'::__l10::<lambda_2>::
              <lambda_invoker_cdecl>;
  local_140 = (undefined ***)0x0;
  local_168[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  local_248.Impl.Object = (FThreadImpl *)0x0;
  local_248.Impl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1b8.ThreadAffinityMask = 0xffffffffffffffff;
  local_1b8.ProcessorGroup = 0;
  local_1b8._10_6_ = 0;
  pFVar5 = ::FThread::FThread(&local_1a8,L"Test.Thread.TestThreadSingleton",
                              (TUniqueFunction<void___cdecl(void)> *)local_168,0,TPri_Normal,
                              &local_1b8,NonForkable);
  ::FThread::operator=(&local_248,pFVar5);
  ::FThread::~FThread(&local_1a8);
  if (local_168[0] != (code *)0x0) {
    pppuVar8 = &local_158;
    if (local_140 != (undefined ***)0x0) {
      pppuVar8 = local_140;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  ::FThread::Join(&local_248);
  pFVar4 = FThreadSingletonInitializer::TryGet(&DAT_154b85e94);
  if (pFVar4 != (FTlsAutoCleanup *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1f8,L"Thread singletons should be uninitialized by default");
    (*pcVar2)(pFVar1,&local_1f8,0);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FThreadSingletonInitializer::TryGet(&DAT_154b85e90);
  if (pFVar4 != (FTlsAutoCleanup *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1e8,L"Thread singletons should be uninitialized by default");
    (*pcVar2)(pFVar1,&local_1e8,0);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  ::FThread::~FThread(&local_248);
  if (4 < (byte)LogTemp._0_1_) {
    local_38 = (void *)0x0;
    local_30 = local_138;
    local_28 = 0x2a;
    pwVar7 = FGenericPlatformString::Convert<char,wchar_t>
                       (local_138,0x2b,"`anonymous-namespace\'::TestThreadSingleton",0x2b);
    if (pwVar7 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Logging::Private::BasicLog<5>
              (&`TestThreadSingleton'::`17'::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}

// TestTypicalUseCase @ 141c49c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `anonymous_namespace'::TestTypicalUseCase(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FEvent *pFVar4;
  wchar_t *pwVar5;
  code **ppcVar6;
  uint uVar7;
  undefined1 auStackY_208 [32];
  undefined4 local_1c8 [4];
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  FThread local_198;
  ulong64 local_188;
  undefined8 uStack_180;
  FThreadAffinity local_178;
  code *local_168 [2];
  code *local_158 [3];
  code **local_140;
  wchar_t local_138 [128];
  void *local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_18;
  undefined8 *puVar8;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  puVar8 = (undefined8 *)0x0;
  local_1c8[0] = 0;
  puVar3 = ::operator_new(0x10);
  local_1b8 = puVar8;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    local_1b8 = puVar3;
  }
  local_1b0 = local_1b8;
  pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  local_168[0] = (code *)0x0;
  local_1a8 = 0xffffffffffffffff;
  uStack_1a0 = 0;
  local_188 = 0xffffffffffffffff;
  uStack_180._0_2_ = 0;
  uStack_180._2_6_ = 0;
  local_140 = FMemory::Malloc(0x20,8);
  *local_140 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`TestTypicalUseCase'::`2'::<lambda_1>,1,1>::_vftable_;
  local_140[1] = (code *)local_1c8;
  local_140[2] = (code *)&local_1b8;
  local_140[3] = (code *)pFVar4;
  if (local_140 + 1 != (code **)0x0) {
    local_168[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<``anonymous_namespace'::TestTypicalUseCase'::__l2::<lambda_1>,void>
                   ::Call;
  }
  local_178.ThreadAffinityMask = local_188;
  local_178.ProcessorGroup = (ushort)uStack_180;
  local_178._10_6_ = uStack_180._2_6_;
  ::FThread::FThread(&local_198,L"Test.Thread.TestTypicalUseCase",
                     (TUniqueFunction<void___cdecl(void)> *)local_168,0,TPri_Normal,&local_178,
                     NonForkable);
  if (local_168[0] != (code *)0x0) {
    ppcVar6 = local_168 + 2;
    if (local_140 != (code **)0x0) {
      ppcVar6 = local_140;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  do {
    puVar3 = ::operator_new(0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      *(int *)(puVar3 + 1) = (int)puVar8;
      *local_1b8 = puVar3;
      local_1b8 = puVar3;
    }
    (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4);
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`TestTypicalUseCase'::`5'::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while (uVar7 != 3);
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`TestTypicalUseCase'::`23'::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  LOCK();
  local_1c8[0] = 1;
  UNLOCK();
  (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4);
  ::FThread::Join(&local_198);
  FGenericPlatformProcess::ReturnSynchEventToPool(pFVar4);
  if (4 < (byte)LogTemp._0_1_) {
    local_38 = (void *)0x0;
    local_30 = local_138;
    local_28 = 0x29;
    pwVar5 = FGenericPlatformString::Convert<char,wchar_t>
                       (local_138,0x2a,"`anonymous-namespace\'::TestTypicalUseCase",0x2a);
    if ((pwVar5 == (wchar_t *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`TestTypicalUseCase'::`41'::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  ::FThread::~FThread(&local_198);
  puVar3 = local_1b0;
  while (puVar3 != (undefined8 *)0x0) {
    local_1b0 = (undefined8 *)*puVar3;
    ::operator_delete(puVar3,0x10);
    puVar3 = local_1b0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugEarlyCheat'' @ 1503492c0

void __cdecl _dynamic_atexit_destructor_for__CVarDebugEarlyCheat__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugEarlyCheat);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugEarlyDefault'' @ 1503492e0

void __cdecl _dynamic_atexit_destructor_for__CVarDebugEarlyDefault__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugEarlyDefault);
  return;
}

// `dynamic_atexit_destructor_for_'DriverVersionTestInstance'' @ 150349300

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__DriverVersionTestInstance__(void)

{
  if (DriverVersionTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DriverVersionTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&DriverVersionTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'ExecuteOnGameThreadTestInstance'' @ 150349330

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__ExecuteOnGameThreadTestInstance__(void)

{
  if (ExecuteOnGameThreadTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(ExecuteOnGameThreadTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data)
    ;
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&ExecuteOnGameThreadTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FArchiveFileReaderGenericTestRunnerInstance'' @ 150349360

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FArchiveFileReaderGenericTestRunnerInstance__
          (void)

{
  if (FArchiveFileReaderGenericTestRunnerInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FArchiveFileReaderGenericTestRunnerInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FArchiveFileReaderGenericTestRunnerInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FArchiveTestInstance'' @ 150349390

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FArchiveTestInstance__(void)

{
  if (FArchiveTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FArchiveTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FArchiveTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FConsoleManagerTestInstance'' @ 1503493c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FConsoleManagerTestInstance__(void)

{
  if (FConsoleManagerTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FConsoleManagerTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FConsoleManagerTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FDateTimeFormattingRulesTestInstance'' @ 1503493f0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FDateTimeFormattingRulesTestInstance__(void)

{
  if (FDateTimeFormattingRulesTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDateTimeFormattingRulesTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FDateTimeFormattingRulesTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FFColorSmokeTestInstance'' @ 150349420

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FFColorSmokeTestInstance__(void)

{
  if (FFColorSmokeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FFColorSmokeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FFColorSmokeTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FFLinearColorSmokeTestInstance'' @ 150349450

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FFLinearColorSmokeTestInstance__(void)

{
  if (FFLinearColorSmokeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FFLinearColorSmokeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FFLinearColorSmokeTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FGenericOctreeTestInstance'' @ 150349480

void __cdecl
UE::MathTest::`anonymous_namespace'::_dynamic_atexit_destructor_for__FGenericOctreeTestInstance__
          (void)

{
  if (FGenericOctreeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGenericOctreeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FGenericOctreeTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FGenericPlatformMiscTestInstance'' @ 1503494b0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FGenericPlatformMiscTestInstance__(void)

{
  if (FGenericPlatformMiscTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGenericPlatformMiscTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FGenericPlatformMiscTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FGuardedIntTestAutomationTestInstance'' @ 1503494e0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FGuardedIntTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FGuardedIntTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FHALPlatformStringTestInstance'' @ 150349500

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FHALPlatformStringTestInstance__(void)

{
  if (FHALPlatformStringTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FHALPlatformStringTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FHALPlatformStringTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FHashBlake3TestInstance'' @ 150349530

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FHashBlake3TestInstance__(void)

{
  if (FHashBlake3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FHashBlake3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FHashBlake3TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FICUSanitizationTestInstance'' @ 150349560

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FICUSanitizationTestInstance__(void)

{
  if (FICUSanitizationTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FICUSanitizationTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FICUSanitizationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FICUTextTestInstance'' @ 150349590

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FICUTextTestInstance__(void)

{
  if (FICUTextTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FICUTextTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FICUTextTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FICUTextUtilitiesInstance'' @ 1503495c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FICUTextUtilitiesInstance__(void)

{
  if (FICUTextUtilitiesInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FICUTextUtilitiesInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FICUTextUtilitiesInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FInt32Vector2TestInstance'' @ 1503495f0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FInt32Vector2TestInstance__(void)

{
  if (FInt32Vector2TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FInt32Vector2TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FInt32Vector2TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FInt32Vector3TestInstance'' @ 150349620

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FInt32Vector3TestInstance__(void)

{
  if (FInt32Vector3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FInt32Vector3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FInt32Vector3TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FInt32Vector4TestInstance'' @ 150349650

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FInt32Vector4TestInstance__(void)

{
  if (FInt32Vector4TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FInt32Vector4TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FInt32Vector4TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FInt64Vector2TestInstance'' @ 150349680

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FInt64Vector2TestInstance__(void)

{
  if (FInt64Vector2TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FInt64Vector2TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FInt64Vector2TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FInt64Vector3TestInstance'' @ 1503496b0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FInt64Vector3TestInstance__(void)

{
  if (FInt64Vector3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FInt64Vector3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FInt64Vector3TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FInt64Vector4TestInstance'' @ 1503496e0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FInt64Vector4TestInstance__(void)

{
  if (FInt64Vector4TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FInt64Vector4TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FInt64Vector4TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FIoStatusOrTestInstance'' @ 150349710

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FIoStatusOrTestInstance__(void)

{
  if (FIoStatusOrTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FIoStatusOrTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FIoStatusOrTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FKeysCultureTestInstance'' @ 150349740

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FKeysCultureTestInstance__(void)

{
  if (FKeysCultureTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FKeysCultureTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FKeysCultureTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLocContextTestInstance'' @ 150349770

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FLocContextTestInstance__(void)

{
  if (FLocContextTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FLocContextTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FLocContextTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLocItemTestInstance'' @ 1503497a0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FLocItemTestInstance__(void)

{
  if (FLocItemTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FLocItemTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FLocItemTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FManifestTestInstance'' @ 1503497d0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FManifestTestInstance__(void)

{
  if (FManifestTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FManifestTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FManifestTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMetadataTestInstance'' @ 150349800

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FMetadataTestInstance__(void)

{
  if (FMetadataTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FMetadataTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FMetadataTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMulticastDelegateBasicTestInstance'' @ 150349830

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMulticastDelegateBasicTestInstance__(void)

{
  if (FMulticastDelegateBasicTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FMulticastDelegateBasicTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMulticastDelegateBasicTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMulticastTSDelegateStressTestInstance'' @ 150349860

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMulticastTSDelegateStressTestInstance__(void)

{
  if (FMulticastTSDelegateStressTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FMulticastTSDelegateStressTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMulticastTSDelegateStressTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FNumberFormattingRulesTestInstance'' @ 150349890

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FNumberFormattingRulesTestInstance__(void)

{
  if (FNumberFormattingRulesTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FNumberFormattingRulesTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FNumberFormattingRulesTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FParsingUnitTestsInstance'' @ 1503498c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FParsingUnitTestsInstance__(void)

{
  if (FParsingUnitTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FParsingUnitTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FParsingUnitTestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPlatformAtomicsTestInstance'' @ 1503498f0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FPlatformAtomicsTestInstance__(void)

{
  if (FPlatformAtomicsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FPlatformAtomicsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FPlatformAtomicsTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPlatformStringTestGetVarArgsInstance'' @ 150349920

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FPlatformStringTestGetVarArgsInstance__(void)

{
  if (FPlatformStringTestGetVarArgsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FPlatformStringTestGetVarArgsInstance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPlatformStringTestGetVarArgsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPlatformStringTestStrcatInstance'' @ 150349950

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FPlatformStringTestStrcatInstance__(void)

{
  if (FPlatformStringTestStrcatInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FPlatformStringTestStrcatInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPlatformStringTestStrcatInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPlatformStringTestStrcpyInstance'' @ 150349980

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FPlatformStringTestStrcpyInstance__(void)

{
  if (FPlatformStringTestStrcpyInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FPlatformStringTestStrcpyInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPlatformStringTestStrcpyInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPlatformStringTestStrnlenInstance'' @ 1503499b0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FPlatformStringTestStrnlenInstance__(void)

{
  if (FPlatformStringTestStrnlenInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FPlatformStringTestStrnlenInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPlatformStringTestStrnlenInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPreprocessorHelperArgAppendCountTestInstance'' @ 1503499e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPreprocessorHelperArgAppendCountTestInstance__(void)

{
  if (FPreprocessorHelperArgAppendCountTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FPreprocessorHelperArgAppendCountTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPreprocessorHelperArgAppendCountTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPreprocessorHelperArgCountTestInstance'' @ 150349a10

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FPreprocessorHelperArgCountTestInstance__
          (void)

{
  if (FPreprocessorHelperArgCountTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FPreprocessorHelperArgCountTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPreprocessorHelperArgCountTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRangeBoundTestInstance'' @ 150349a40

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FRangeBoundTestInstance__(void)

{
  if (FRangeBoundTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRangeBoundTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FRangeBoundTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRangeSetTestInstance'' @ 150349a70

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FRangeSetTestInstance__(void)

{
  if (FRangeSetTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRangeSetTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FRangeSetTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FRangeTestInstance'' @ 150349aa0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FRangeTestInstance__(void)

{
  if (FRangeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FRangeTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FRangeTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStridedViewTestInstance'' @ 150349ad0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FStridedViewTestInstance__(void)

{
  if (FStridedViewTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStridedViewTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStridedViewTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewArrayAccessorTestInstance'' @ 150349b00

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewArrayAccessorTestInstance__(void)

{
  if (FStringViewArrayAccessorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewArrayAccessorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewArrayAccessorTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewComparisonCaseInsensitiveTestInstance'' @ 150349b30

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FStringViewComparisonCaseInsensitiveTestInstance__(void)

{
  if (FStringViewComparisonCaseInsensitiveTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewComparisonCaseInsensitiveTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewComparisonCaseInsensitiveTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewComparisonCaseSensitiveTestInstance'' @ 150349b60

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FStringViewComparisonCaseSensitiveTestInstance__(void)

{
  if (FStringViewComparisonCaseSensitiveTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewComparisonCaseSensitiveTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewComparisonCaseSensitiveTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewConstructorTestInstance'' @ 150349b90

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewConstructorTestInstance__(void)

{
  if (FStringViewConstructorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewConstructorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewConstructorTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewEndsWithTestInstance'' @ 150349bc0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewEndsWithTestInstance__(void)

{
  if (FStringViewEndsWithTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewEndsWithTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data)
    ;
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringViewEndsWithTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewEqualityTestInstance'' @ 150349bf0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewEqualityTestInstance__(void)

{
  if (FStringViewEqualityTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewEqualityTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data)
    ;
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringViewEqualityTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewFindCharTestInstance'' @ 150349c20

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewFindCharTestInstance__(void)

{
  if (FStringViewFindCharTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewFindCharTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data)
    ;
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringViewFindCharTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewFindLastCharTestInstance'' @ 150349c50

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewFindLastCharTestInstance__(void)

{
  if (FStringViewFindLastCharTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewFindLastCharTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewFindLastCharTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewIteratorsTestInstance'' @ 150349c80

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewIteratorsTestInstance__(void)

{
  if (FStringViewIteratorsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewIteratorsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewIteratorsTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewLeftChopTestInstance'' @ 150349cb0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewLeftChopTestInstance__(void)

{
  if (FStringViewLeftChopTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewLeftChopTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data)
    ;
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringViewLeftChopTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewLeftTestInstance'' @ 150349ce0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewLeftTestInstance__(void)

{
  if (FStringViewLeftTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewLeftTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringViewLeftTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewMidTestInstance'' @ 150349d10

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewMidTestInstance__(void)

{
  if (FStringViewMidTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewMidTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringViewMidTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewModifiersTestInstance'' @ 150349d40

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewModifiersTestInstance__(void)

{
  if (FStringViewModifiersTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewModifiersTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewModifiersTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewRightChopTestInstance'' @ 150349d70

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewRightChopTestInstance__(void)

{
  if (FStringViewRightChopTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewRightChopTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewRightChopTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewRightTestInstance'' @ 150349da0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewRightTestInstance__(void)

{
  if (FStringViewRightTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewRightTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringViewRightTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewSliceTestInstance'' @ 150349dd0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewSliceTestInstance__(void)

{
  if (FStringViewSliceTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewSliceTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringViewSliceTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewStartsWithTestInstance'' @ 150349e00

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewStartsWithTestInstance__(void)

{
  if (FStringViewStartsWithTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewStartsWithTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewStartsWithTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewStringSubStrTestInstance'' @ 150349e30

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewStringSubStrTestInstance__(void)

{
  if (FStringViewStringSubStrTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewStringSubStrTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewStringSubStrTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewTrimEndTestInstance'' @ 150349e60

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewTrimEndTestInstance__(void)

{
  if (FStringViewTrimEndTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewTrimEndTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStringViewTrimEndTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewTrimStartAndEndTestInstance'' @ 150349e90

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewTrimStartAndEndTestInstance__
          (void)

{
  if (FStringViewTrimStartAndEndTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewTrimStartAndEndTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewTrimStartAndEndTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStringViewTrimStartTestInstance'' @ 150349ec0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStringViewTrimStartTestInstance__(void)

{
  if (FStringViewTrimStartTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStringViewTrimStartTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStringViewTrimStartTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStructuredLogFormatTestInstance'' @ 150349ef0

void __cdecl
UE::`anonymous_namespace'::_dynamic_atexit_destructor_for__FStructuredLogFormatTestInstance__(void)

{
  if (FStructuredLogFormatTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStructuredLogFormatTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStructuredLogFormatTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTSMulticastDelegateStressTestInstance'' @ 150349f20

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTSMulticastDelegateStressTestInstance__(void)

{
  if (FTSMulticastDelegateStressTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTSMulticastDelegateStressTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTSMulticastDelegateStressTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTSTickerTestInstance'' @ 150349f50

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FTSTickerTestInstance__(void)

{
  if (FTSTickerTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTSTickerTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTSTickerTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTextFormatArgModifierTestInstance'' @ 150349f80

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTextFormatArgModifierTestInstance__(void)

{
  if (FTextFormatArgModifierTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTextFormatArgModifierTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTextFormatArgModifierTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTextNumericParsingTestInstance'' @ 150349fb0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTextNumericParsingTestInstance__(void)

{
  if (FTextNumericParsingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTextNumericParsingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data)
    ;
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTextNumericParsingTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FTextPaddingTestInstance'' @ 150349fe0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FTextPaddingTestInstance__(void)

{
  if (FTextPaddingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTextPaddingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTextPaddingTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTextRoundingTestInstance'' @ 15034a010

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTextRoundingTestInstance__(void)

{
  if (FTextRoundingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTextRoundingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTextRoundingTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTextStringificationTestInstance'' @ 15034a040

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTextStringificationTestInstance__(void)

{
  if (FTextStringificationTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTextStringificationTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTextStringificationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTextTestInstance'' @ 15034a070

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FTextTestInstance__(void)

{
  if (FTextTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTextTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTextTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FThreadTestInstance'' @ 15034a0a0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FThreadTestInstance__(void)

{
  if (FThreadTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FThreadTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FThreadTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTokenCopyAssignmentTestInstance'' @ 15034a0d0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTokenCopyAssignmentTestInstance__(void)

{
  if (FTokenCopyAssignmentTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTokenCopyAssignmentTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTokenCopyAssignmentTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTokenCopyConstructorTestInstance'' @ 15034a100

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTokenCopyConstructorTestInstance__(void)

{
  if (FTokenCopyConstructorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTokenCopyConstructorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTokenCopyConstructorTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTokenDefaultTestInstance'' @ 15034a130

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTokenDefaultTestInstance__(void)

{
  if (FTokenDefaultTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTokenDefaultTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTokenDefaultTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTokenExplicitConstructorTestInstance'' @ 15034a160

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTokenExplicitConstructorTestInstance__(void)

{
  if (FTokenExplicitConstructorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTokenExplicitConstructorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance
                  .Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTokenExplicitConstructorTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTokenMoveAssignmentTestInstance'' @ 15034a190

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTokenMoveAssignmentTestInstance__(void)

{
  if (FTokenMoveAssignmentTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTokenMoveAssignmentTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTokenMoveAssignmentTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTokenMoveConstructorTestInstance'' @ 15034a1c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTokenMoveConstructorTestInstance__(void)

{
  if (FTokenMoveConstructorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTokenMoveConstructorTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTokenMoveConstructorTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUint32Vector2TestInstance'' @ 15034a1f0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FUint32Vector2TestInstance__(void)

{
  if (FUint32Vector2TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUint32Vector2TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FUint32Vector2TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUint32Vector3TestInstance'' @ 15034a220

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FUint32Vector3TestInstance__(void)

{
  if (FUint32Vector3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUint32Vector3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FUint32Vector3TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUint32Vector4TestInstance'' @ 15034a250

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FUint32Vector4TestInstance__(void)

{
  if (FUint32Vector4TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUint32Vector4TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FUint32Vector4TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUint64Vector2TestInstance'' @ 15034a280

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FUint64Vector2TestInstance__(void)

{
  if (FUint64Vector2TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUint64Vector2TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FUint64Vector2TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUint64Vector3TestInstance'' @ 15034a2b0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FUint64Vector3TestInstance__(void)

{
  if (FUint64Vector3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUint64Vector3TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FUint64Vector3TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUint64Vector4TestInstance'' @ 15034a2e0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FUint64Vector4TestInstance__(void)

{
  if (FUint64Vector4TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUint64Vector4TestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FUint64Vector4TestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUnicastDelegateBasicTestInstance'' @ 15034a310

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FUnicastDelegateBasicTestInstance__(void)

{
  if (FUnicastDelegateBasicTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUnicastDelegateBasicTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FUnicastDelegateBasicTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUnicastDelegateForwardingTestInstance'' @ 15034a340

void __cdecl
UE::DelegatesTest::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FUnicastDelegateForwardingTestInstance__(void)

{
  if (FUnicastDelegateForwardingTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUnicastDelegateForwardingTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FUnicastDelegateForwardingTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUnicastTSDelegateBasicTestInstance'' @ 15034a370

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FUnicastTSDelegateBasicTestInstance__(void)

{
  if (FUnicastTSDelegateBasicTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUnicastTSDelegateBasicTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FUnicastTSDelegateBasicTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUnicastTSDelegateStressTestInstance'' @ 15034a3a0

void __cdecl
UE::TSDelegatesTest::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FUnicastTSDelegateStressTestInstance__(void)

{
  if (FUnicastTSDelegateStressTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUnicastTSDelegateStressTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FUnicastTSDelegateStressTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FUnitUnitTestsInstance'' @ 15034a3d0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FUnitUnitTestsInstance__(void)

{
  if (FUnitUnitTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FUnitUnitTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FUnitUnitTestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'NativeCulture'' @ 15034a400

void __cdecl
`FKeysCultureTest::TestBody'::__l2::_dynamic_atexit_destructor_for__NativeCulture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NativeCulture.Data.AllocatorInstance.Data;
  if (NativeCulture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NativeCulture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TargetCulture'' @ 15034a420

void __cdecl
`FKeysCultureTest::TestBody'::__l2::_dynamic_atexit_destructor_for__TargetCulture__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TargetCulture.Data.AllocatorInstance.Data;
  if (TargetCulture.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TargetCulture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

