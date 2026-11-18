// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a7520

EAutomationTestFlags __thiscall
FRWRecursiveAccessDetectorPerfTest::GetTestFlags(FRWRecursiveAccessDetectorPerfTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1418a7530

bool __thiscall
FRWRecursiveAccessDetectorPerfTest::IsStressTest(FRWRecursiveAccessDetectorPerfTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a7540

uint __thiscall
FRWRecursiveAccessDetectorPerfTest::GetRequiredDeviceNum(FRWRecursiveAccessDetectorPerfTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a7550

FString * __thiscall
FRWRecursiveAccessDetectorPerfTest::GetTestSourceFileName
          (FRWRecursiveAccessDetectorPerfTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a7580

int __thiscall
FRWRecursiveAccessDetectorPerfTest::GetTestSourceFileLine(FRWRecursiveAccessDetectorPerfTest *this)

{
  return 0x254;
}

// GetTests @ 1418a7590

/* WARNING: Removing unreachable block (ram,0x0001418a767d) */
/* WARNING: Removing unreachable block (ram,0x0001418a7748) */

void __thiscall
FRWRecursiveAccessDetectorPerfTest::GetTests
          (FRWRecursiveAccessDetectorPerfTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.RWRecursiveAccessDetector.Perf");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1418a7770

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRWRecursiveAccessDetectorPerfTest::RunTest
          (FRWRecursiveAccessDetectorPerfTest *this,FString *param_1)

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
              (&__CpuProfilerEventSpecId600,
               L"RWAccessDetectorPerfTest<1\'000\'000, FRWAccessDetector>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
               ,600);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId600);
  }
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  dVar3 = __real_7fefffffffffffff;
  iVar4 = 0;
  dVar2 = __real_7fefffffffffffff;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    RWAccessDetectorPerfTest<1000000,FRWAccessDetector>();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
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
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId601,
               L"RWAccessDetectorPerfTest<1\'000\'000, FRWRecursiveAccessDetector>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
               ,0x259);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId601);
  }
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  iVar4 = 0;
  dVar2 = dVar3;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    RWAccessDetectorPerfTest<1000000,FRWRecursiveAccessDetector>();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
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
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId602,
               L"RWAccessDetectorPerfTest<1\'000\'000, FRWFullyRecursiveAccessDetector>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
               ,0x25a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId602);
  }
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  iVar4 = 0;
  dVar2 = dVar3;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    RWAccessDetectorPerfTest<1000000,FRWFullyRecursiveAccessDetector>();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
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
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId603,
               L"RWAccessDetectorPerfTest<1\'000\'000, FMRSWRecursiveAccessDetector>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
               ,0x25b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId603);
  }
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  iVar4 = 0;
  dVar2 = dVar3;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    RWAccessDetectorPerfTest<1000000,FMRSWRecursiveAccessDetector>();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
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
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId605,
               L"RWAccessDetectorConcurrentReadersPerfTest<1\'000\'000, FRWAccessDetector>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
               ,0x25d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId605);
  }
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  iVar4 = 0;
  dVar2 = dVar3;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWAccessDetector>();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
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
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId606,
               L"RWAccessDetectorConcurrentReadersPerfTest<1\'000\'000, FRWRecursiveAccessDetector>"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
               ,0x25e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId606);
  }
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  iVar4 = 0;
  dVar2 = dVar3;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWRecursiveAccessDetector>();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
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
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId607,
               L"RWAccessDetectorConcurrentReadersPerfTest<1\'000\'000, FRWFullyRecursiveAccessDetector>"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
               ,0x25f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId607);
  }
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  iVar4 = 0;
  dVar2 = dVar3;
  do {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    RWAccessDetectorConcurrentReadersPerfTest<1000000,FRWFullyRecursiveAccessDetector>();
    QueryPerformanceCounter(&local_res20);
    dVar1 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
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
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId608,
               L"RWAccessDetectorConcurrentReadersPerfTest<1\'000\'000, FMRSWRecursiveAccessDetector>"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MTAccessDetector.cpp"
               ,0x260);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId608);
  }
  iVar4 = 0;
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
    iVar4 = 0;
  }
  do {
    QueryPerformanceCounter(&local_res18);
    dVar2 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    RWAccessDetectorConcurrentReadersPerfTest<1000000,FMRSWRecursiveAccessDetector>();
    QueryPerformanceCounter(&local_res20);
    dVar2 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2;
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>
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
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetBeautifiedTestName @ 1418a8140

FString * __thiscall
FRWRecursiveAccessDetectorPerfTest::GetBeautifiedTestName
          (FRWRecursiveAccessDetectorPerfTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.RWRecursiveAccessDetector.Perf");
  return __return_storage_ptr__;
}

