// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487d54f0

EAutomationTestFlags __thiscall
FAutoRTFMLargeMemoryDataTest::GetTestFlags(FAutoRTFMLargeMemoryDataTest *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1487d5500

bool __thiscall FAutoRTFMLargeMemoryDataTest::IsStressTest(FAutoRTFMLargeMemoryDataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487d5510

uint __thiscall
FAutoRTFMLargeMemoryDataTest::GetRequiredDeviceNum(FAutoRTFMLargeMemoryDataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487d5520

FString * __thiscall
FAutoRTFMLargeMemoryDataTest::GetTestSourceFileName
          (FAutoRTFMLargeMemoryDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutoRTFM\\AutoRTFMLargeMemoryDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487d5550

int __thiscall
FAutoRTFMLargeMemoryDataTest::GetTestSourceFileLine(FAutoRTFMLargeMemoryDataTest *this)

{
  return 9;
}

// GetTests @ 1487d55a0

/* WARNING: Removing unreachable block (ram,0x0001487d568d) */
/* WARNING: Removing unreachable block (ram,0x0001487d5758) */

void __thiscall
FAutoRTFMLargeMemoryDataTest::GetTests
          (FAutoRTFMLargeMemoryDataTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + FPooledLargeMemoryData");
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

// RunTest @ 1487d5780

bool __thiscall
FAutoRTFMLargeMemoryDataTest::RunTest(FAutoRTFMLargeMemoryDataTest *this,FString *param_1)

{
  ForAnyElementType _Src;
  bool bVar1;
  FPooledLargeMemoryData local_res18 [2];
  FString local_68;
  FAutomationEvent local_58;
  
  bVar1 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar1) {
    FPooledLargeMemoryData::FPooledLargeMemoryData(local_res18);
    FPooledLargeMemoryData::~FPooledLargeMemoryData(local_res18);
    FPooledLargeMemoryData::FPooledLargeMemoryData(local_res18);
    FPooledLargeMemoryData::~FPooledLargeMemoryData(local_res18);
    FPooledLargeMemoryData::FPooledLargeMemoryData(local_res18);
    FPooledLargeMemoryData::~FPooledLargeMemoryData(local_res18);
  }
  else {
    ::FString::FString(&local_68,
                       L"SKIPPED \'FAutoRTFMLargeMemoryDataTest\' test. AutoRTFM disabled.");
    _Src.Data = local_68.Data.AllocatorInstance.Data;
    local_58.Type = Info;
    local_58.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_58.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_58.Message,
                 local_68.Data.ArrayNum,&local_58.Message.Data.ArrayMax);
      memcpy(local_58.Message.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_68.Data.ArrayNum * 2);
    }
    local_58.Artifact.A = 0;
    local_58.Artifact.B = 0;
    local_58.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Context.Data.ArrayNum = 0;
    local_58.Context.Data.ArrayMax = 0;
    local_58.Artifact.C = 0;
    local_58.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_58,0,true);
    if (local_58.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Context.Data.AllocatorInstance.Data);
    }
    if (local_58.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Message.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      return true;
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1487d58f0

FString * __thiscall
FAutoRTFMLargeMemoryDataTest::GetBeautifiedTestName
          (FAutoRTFMLargeMemoryDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + FPooledLargeMemoryData");
  return __return_storage_ptr__;
}

