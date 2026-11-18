// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d577a0

EAutomationTestFlags __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::GetTestFlags
          (FTasksBenchmarkBlockUnblockWorkers *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d577b0

bool __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::IsStressTest
          (FTasksBenchmarkBlockUnblockWorkers *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d577c0

uint __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::GetRequiredDeviceNum
          (FTasksBenchmarkBlockUnblockWorkers *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d577d0

FString * __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::GetTestSourceFileName
          (FTasksBenchmarkBlockUnblockWorkers *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d57800

int __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::GetTestSourceFileLine
          (FTasksBenchmarkBlockUnblockWorkers *this)

{
  return 0x698;
}

// GetTests @ 141d57810

/* WARNING: Removing unreachable block (ram,0x000141d5798e) */

void __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::GetTests
          (FTasksBenchmarkBlockUnblockWorkers *this,
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

// RunTest @ 141d579b0

bool __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::RunTest
          (FTasksBenchmarkBlockUnblockWorkers *this,FString *param_1)

{
  atomic<unsigned_int> aVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  atomic<unsigned_int> local_res18 [2];
  <lambda_1> local_res20;
  FString local_18;
  
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  aVar1 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
  local_res18[0] = (atomic<unsigned_int>)0x1;
  if (LowLevelTasks::FScheduler::Singleton.ActiveWorkers != (atomic<unsigned_int>)0x0) {
    local_res20.Index = (uint *)local_res18;
    do {
      ::FString::PrintfImpl(&local_18,L"BenchmarkBlockUnblockWorkers(%u)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar2.Data = local_18.Data.AllocatorInstance.Data;
      }
      bVar3 = -1 < CpuChannel->Enabled;
      if (bVar3) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar2.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                   ,0x6a2);
      }
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar2.Data = local_18.Data.AllocatorInstance.Data;
      }
      Benchmark<5,_UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::TestBody_::__l4::<lambda_1>_>
                ((wchar_t *)FVar2.Data,&local_res20);
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      local_res18[0] = (atomic<unsigned_int>)((int)local_res18[0] * 2);
    } while ((uint)local_res18[0] <= (uint)aVar1);
  }
  bVar3 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar3;
}

// GetBeautifiedTestName @ 141d57ab0

FString * __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::GetBeautifiedTestName
          (FTasksBenchmarkBlockUnblockWorkers *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTasksBenchmarkBlockUnblockWorkers @ 141d6aa20

FTasksBenchmarkBlockUnblockWorkers * __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::FTasksBenchmarkBlockUnblockWorkers
          (FTasksBenchmarkBlockUnblockWorkers *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTasksBenchmarkBlockUnblockWorkers_TasksTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::Tasks::BenchmarkBlockUnblockWorkers");
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

// TestBody @ 141d83690

void __thiscall
UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::TestBody
          (FTasksBenchmarkBlockUnblockWorkers *this,FString *param_1)

{
  atomic<unsigned_int> aVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  atomic<unsigned_int> local_res18 [2];
  <lambda_1> local_res20;
  FString local_18;
  
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  aVar1 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
  local_res18[0] = (atomic<unsigned_int>)0x1;
  if (LowLevelTasks::FScheduler::Singleton.ActiveWorkers != (atomic<unsigned_int>)0x0) {
    local_res20.Index = (uint *)local_res18;
    do {
      ::FString::PrintfImpl(&local_18,L"BenchmarkBlockUnblockWorkers(%u)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar2.Data = local_18.Data.AllocatorInstance.Data;
      }
      bVar3 = -1 < CpuChannel->Enabled;
      if (bVar3) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar2.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Tasks\\TasksTest.cpp"
                   ,0x6a2);
      }
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar2.Data = local_18.Data.AllocatorInstance.Data;
      }
      Benchmark<5,_UE::TasksTests::FTasksBenchmarkBlockUnblockWorkers::TestBody_::__l4::<lambda_1>_>
                ((wchar_t *)FVar2.Data,&local_res20);
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      local_res18[0] = (atomic<unsigned_int>)((int)local_res18[0] * 2);
    } while ((uint)local_res18[0] <= (uint)aVar1);
  }
  return;
}

