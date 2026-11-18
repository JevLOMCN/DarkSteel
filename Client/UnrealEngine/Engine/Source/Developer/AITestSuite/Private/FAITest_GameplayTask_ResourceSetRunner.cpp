// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 8

// GetTestFlags @ 1470018e0

EAutomationTestFlags __thiscall
FAITest_GameplayTask_ResourceSetRunner::GetTestFlags(FAITest_GameplayTask_ResourceSetRunner *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 1470018f0

bool __thiscall
FAITest_GameplayTask_ResourceSetRunner::IsStressTest(FAITest_GameplayTask_ResourceSetRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 147001900

uint __thiscall
FAITest_GameplayTask_ResourceSetRunner::GetRequiredDeviceNum
          (FAITest_GameplayTask_ResourceSetRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 147001910

FString * __thiscall
FAITest_GameplayTask_ResourceSetRunner::GetTestSourceFileName
          (FAITest_GameplayTask_ResourceSetRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\Tests\\GameplayTasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 147001940

int __thiscall
FAITest_GameplayTask_ResourceSetRunner::GetTestSourceFileLine
          (FAITest_GameplayTask_ResourceSetRunner *this)

{
  return 0xb7;
}

// GetTests @ 147001950

/* WARNING: Removing unreachable block (ram,0x000147001a3d) */
/* WARNING: Removing unreachable block (ram,0x000147001b08) */

void __thiscall
FAITest_GameplayTask_ResourceSetRunner::GetTests
          (FAITest_GameplayTask_ResourceSetRunner *this,
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
  
  ::FString::FString(&local_18,"System.AI.Gameplay Tasks.Resource Set");
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

// RunTest @ 147001b30

bool __thiscall
FAITest_GameplayTask_ResourceSetRunner::RunTest
          (FAITest_GameplayTask_ResourceSetRunner *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  FAITestBase *this_00;
  
  uVar3 = 0;
  this_00 = ::operator_new(0x28);
  if (this_00 != (FAITestBase *)0x0) {
    *(undefined8 *)&this_00->field_0x18 = 0;
    this_00->bTearedDown = 0;
    (this_00->SpawnedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->SpawnedObjects).ArrayNum = 0;
    (this_00->SpawnedObjects).ArrayMax = 0;
    this_00->TestRunner = (FAutomationTestBase *)0x0;
    this_00->_padding_ = (longlong)&___7FAITest_GameplayTask_ResourceSet__6B_;
  }
  pcVar1 = *(code **)(this_00->_padding_ + 8);
  if (pcVar1 == FAITestBase::SetTestRunner) {
    this_00->TestRunner = (FAutomationTestBase *)this;
  }
  else {
    (*pcVar1)(this_00,this);
  }
  pcVar1 = *(code **)(this_00->_padding_ + 0x18);
  if ((pcVar1 == FAITestBase::SetUp) || (cVar2 = (*pcVar1)(this_00), cVar2 != '\0')) {
    pcVar1 = *(code **)(this_00->_padding_ + 0x30);
    if (pcVar1 == FAITest_GameplayTask_ResourceSet::InstantTest) {
      uVar3 = FAITest_GameplayTask_ResourceSet::InstantTest
                        ((FAITest_GameplayTask_ResourceSet *)this_00);
    }
    else {
      uVar3 = (*pcVar1)();
    }
  }
  pcVar1 = *(code **)(this_00->_padding_ + 0x38);
  if (pcVar1 == FAITestBase::TearDown) {
    FAITestBase::TearDown(this_00);
  }
  else {
    (*pcVar1)();
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,1);
  return (bool)uVar3;
}

// GetBeautifiedTestName @ 147001c30

FString * __thiscall
FAITest_GameplayTask_ResourceSetRunner::GetBeautifiedTestName
          (FAITest_GameplayTask_ResourceSetRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AI.Gameplay Tasks.Resource Set");
  return __return_storage_ptr__;
}

