// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 8

// GetTestFlags @ 147007fb0

EAutomationTestFlags __thiscall
FAITest_BTDecoratorForceSuccessTaskFailed_Runner::GetTestFlags
          (FAITest_BTDecoratorForceSuccessTaskFailed_Runner *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 147007fd0

bool __thiscall
FAITest_BTDecoratorForceSuccessTaskFailed_Runner::IsStressTest
          (FAITest_BTDecoratorForceSuccessTaskFailed_Runner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 147007fe0

uint __thiscall
FAITest_BTDecoratorForceSuccessTaskFailed_Runner::GetRequiredDeviceNum
          (FAITest_BTDecoratorForceSuccessTaskFailed_Runner *this)

{
  return 1;
}

// GetTestSourceFileName @ 147007ff0

FString * __thiscall
FAITest_BTDecoratorForceSuccessTaskFailed_Runner::GetTestSourceFileName
          (FAITest_BTDecoratorForceSuccessTaskFailed_Runner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\Tests\\BTTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 147008020

int __thiscall
FAITest_BTDecoratorForceSuccessTaskFailed_Runner::GetTestSourceFileLine
          (FAITest_BTDecoratorForceSuccessTaskFailed_Runner *this)

{
  return 0x16a;
}

// GetTests @ 1470083f0

/* WARNING: Removing unreachable block (ram,0x0001470084dd) */
/* WARNING: Removing unreachable block (ram,0x0001470085a8) */

void __thiscall
FAITest_BTDecoratorForceSuccessTaskFailed_Runner::GetTests
          (FAITest_BTDecoratorForceSuccessTaskFailed_Runner *this,
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
  
  ::FString::FString(&local_18,"System.AI.Behavior Trees.Decorator: force success task failed self")
  ;
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

// RunTest @ 1470085d0

bool __thiscall
FAITest_BTDecoratorForceSuccessTaskFailed_Runner::RunTest
          (FAITest_BTDecoratorForceSuccessTaskFailed_Runner *this,FString *param_1)

{
  FAITest_BTDecoratorForceSuccessTaskFailed *pFVar1;
  FAITest_BTDecoratorForceSuccessTaskFailed *pFVar2;
  FAutomationTestFramework *pFVar3;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar4;
  FAITest_BTDecoratorForceSuccessTaskFailed *pFVar5;
  TRawPtrProxy<FAITestCommand_SetUpTest> local_res18 [2];
  TSharedPtr<IAutomationLatentCommand,1> local_18;
  
  pFVar1 = ::operator_new(0x50);
  pFVar5 = (FAITest_BTDecoratorForceSuccessTaskFailed *)0x0;
  pFVar2 = pFVar5;
  if (pFVar1 != (FAITest_BTDecoratorForceSuccessTaskFailed *)0x0) {
    pFVar2 = FAITest_BTDecoratorForceSuccessTaskFailed::FAITest_BTDecoratorForceSuccessTaskFailed
                       (pFVar1);
  }
  (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2,this);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = ::operator_new(0x28);
  local_res18[0].Object = (FAITestCommand_SetUpTest *)pFVar5;
  if (pFVar1 != (FAITest_BTDecoratorForceSuccessTaskFailed *)0x0) {
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined ***)pFVar1 = &___7FAITestCommand_SetUpTest__6B_;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined8 *)&pFVar1->field_0x18 = 0;
    *(FAITest_BTDecoratorForceSuccessTaskFailed **)&pFVar1->field_0x20 = pFVar2;
    local_res18[0].Object = (FAITestCommand_SetUpTest *)pFVar1;
  }
  pTVar4 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_SetUpTest>(&local_18,local_res18);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar3,pTVar4);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = ::operator_new(0x28);
  local_res18[0].Object = (FAITestCommand_SetUpTest *)pFVar5;
  if (pFVar1 != (FAITest_BTDecoratorForceSuccessTaskFailed *)0x0) {
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined ***)pFVar1 = &___7FAITestCommand_PerformTest__6B_;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined8 *)&pFVar1->field_0x18 = 0;
    *(FAITest_BTDecoratorForceSuccessTaskFailed **)&pFVar1->field_0x20 = pFVar2;
    local_res18[0].Object = (FAITestCommand_SetUpTest *)pFVar1;
  }
  pTVar4 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_PerformTest>
                     (&local_18,(TRawPtrProxy<FAITestCommand_PerformTest> *)local_res18);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar3,pTVar4);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = ::operator_new(0x28);
  local_res18[0].Object = (FAITestCommand_SetUpTest *)pFVar5;
  if (pFVar1 != (FAITest_BTDecoratorForceSuccessTaskFailed *)0x0) {
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined ***)pFVar1 = &___7FAITestCommand_VerifyTestResults__6B_;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined8 *)&pFVar1->field_0x18 = 0;
    *(FAITest_BTDecoratorForceSuccessTaskFailed **)&pFVar1->field_0x20 = pFVar2;
    local_res18[0].Object = (FAITestCommand_SetUpTest *)pFVar1;
  }
  pTVar4 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_VerifyTestResults>
                     (&local_18,(TRawPtrProxy<FAITestCommand_VerifyTestResults> *)local_res18);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar3,pTVar4);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FAITest_BTDecoratorForceSuccessTaskFailed *)0x0) {
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined ***)pFVar1 = &___7FAITestCommand_TearDownTest__6B_;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined8 *)&pFVar1->field_0x18 = 0;
    *(FAITest_BTDecoratorForceSuccessTaskFailed **)&pFVar1->field_0x20 = pFVar2;
    pFVar5 = pFVar1;
  }
  local_res18[0].Object = (FAITestCommand_SetUpTest *)pFVar5;
  pTVar4 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FAITestCommand_TearDownTest>
                     (&local_18,(TRawPtrProxy<FAITestCommand_TearDownTest> *)local_res18);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar3,pTVar4);
  return true;
}

// GetBeautifiedTestName @ 147008780

FString * __thiscall
FAITest_BTDecoratorForceSuccessTaskFailed_Runner::GetBeautifiedTestName
          (FAITest_BTDecoratorForceSuccessTaskFailed_Runner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.AI.Behavior Trees.Decorator: force success task failed self");
  return __return_storage_ptr__;
}

