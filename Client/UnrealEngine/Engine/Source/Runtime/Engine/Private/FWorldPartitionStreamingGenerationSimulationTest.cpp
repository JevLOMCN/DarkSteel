// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 14886cc50

EAutomationTestFlags __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationSimulationTest::GetTestFlags
          (FWorldPartitionStreamingGenerationSimulationTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14886cc60

bool __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationSimulationTest::IsStressTest
          (FWorldPartitionStreamingGenerationSimulationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14886cc70

uint __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationSimulationTest::GetRequiredDeviceNum
          (FWorldPartitionStreamingGenerationSimulationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14886cc80

FString * __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationSimulationTest::GetTestSourceFileName
          (FWorldPartitionStreamingGenerationSimulationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\WorldPartition\\WorldPartitionStreamingGenerationSimulationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14886ccb0

int __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationSimulationTest::GetTestSourceFileLine
          (FWorldPartitionStreamingGenerationSimulationTest *this)

{
  return 0x11;
}

// GetTests @ 14886ccc0

/* WARNING: Removing unreachable block (ram,0x00014886cdad) */
/* WARNING: Removing unreachable block (ram,0x00014886ce78) */

void __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationSimulationTest::GetTests
          (FWorldPartitionStreamingGenerationSimulationTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.WorldPartition.StreamingGenerationSimulation");
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

// RunTest @ 14886cea0

bool __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationSimulationTest::RunTest
          (FWorldPartitionStreamingGenerationSimulationTest *this,FString *param_1)

{
  return true;
}

// GetBeautifiedTestName @ 14886ceb0

FString * __thiscall
WorldPartitionTests::FWorldPartitionStreamingGenerationSimulationTest::GetBeautifiedTestName
          (FWorldPartitionStreamingGenerationSimulationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.WorldPartition.StreamingGenerationSimulation");
  return __return_storage_ptr__;
}

