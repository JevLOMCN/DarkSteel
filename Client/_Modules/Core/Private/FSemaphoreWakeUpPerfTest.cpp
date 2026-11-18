// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac74c0

EAutomationTestFlags __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::GetTestFlags(FSemaphoreWakeUpPerfTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac74d0

bool __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::IsStressTest(FSemaphoreWakeUpPerfTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac74e0

uint __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::GetRequiredDeviceNum(FSemaphoreWakeUpPerfTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac74f0

FString * __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::GetTestSourceFileName
          (FSemaphoreWakeUpPerfTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\SemaphoreTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac7520

int __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::GetTestSourceFileLine(FSemaphoreWakeUpPerfTest *this)

{
  return 0xa2;
}

// GetTests @ 141ac7530

/* WARNING: Removing unreachable block (ram,0x000141ac76ae) */

void __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::GetTests
          (FSemaphoreWakeUpPerfTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 141ac76d0

bool __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::RunTest
          (FSemaphoreWakeUpPerfTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac7700

FString * __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::GetBeautifiedTestName
          (FSemaphoreWakeUpPerfTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSemaphoreWakeUpPerfTest @ 141b26870

FSemaphoreWakeUpPerfTest * __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::FSemaphoreWakeUpPerfTest
          (FSemaphoreWakeUpPerfTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FSemaphoreWakeUpPerfTest_SemaphoreTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::Semaphore::WakeUpPerf");
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
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 141b9b350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::SemaphoreTests::FSemaphoreWakeUpPerfTest::TestBody
          (FSemaphoreWakeUpPerfTest *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  bool bVar5;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId164,L"TestSemaphoreWakeUpPerf<5, 100000, true>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\SemaphoreTest.cpp"
               ,0xa4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId164);
  }
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  dVar3 = __real_7fefffffffffffff;
  iVar4 = 0;
  dVar2 = __real_7fefffffffffffff;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TestSemaphoreWakeUpPerf<5,100000,1>();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    iVar4 = iVar4 + 1;
    if (dVar2 <= dVar1) {
      dVar1 = dVar2;
    }
    dVar2 = dVar1;
  } while (iVar4 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId165,L"TestSemaphoreWakeUpPerf<5, 100000, false>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\SemaphoreTest.cpp"
               ,0xa5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId165);
  }
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  iVar4 = 0;
  dVar2 = dVar3;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TestSemaphoreWakeUpPerf<5,100000,0>();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    iVar4 = iVar4 + 1;
    if (dVar2 <= dVar1) {
      dVar1 = dVar2;
    }
    dVar2 = dVar1;
  } while (iVar4 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId166,L"TestMultiEventWakeUpPerf<5, 100000>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\SemaphoreTest.cpp"
               ,0xa6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId166);
  }
  iVar4 = 0;
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
    iVar4 = 0;
  }
  do {
    QueryPerformanceCounter(&local_res18);
    dVar2 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TestMultiEventWakeUpPerf<5,100000>();
    QueryPerformanceCounter(&local_res20);
    dVar2 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2;
    if (4 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    iVar4 = iVar4 + 1;
    if (dVar3 <= dVar2) {
      dVar2 = dVar3;
    }
    dVar3 = dVar2;
  } while (iVar4 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

