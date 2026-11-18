// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 8

// GetTestFlags @ 147003290

EAutomationTestFlags __thiscall
FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner::GetTestFlags
          (FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 1470032a0

bool __thiscall
FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner::IsStressTest
          (FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1470032b0

uint __thiscall
FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner::GetRequiredDeviceNum
          (FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 1470032c0

FString * __thiscall
FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner::GetTestSourceFileName
          (FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\Tests\\GameplayTasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1470032f0

int __thiscall
FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner::GetTestSourceFileLine
          (FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner *this)

{
  return 0x118;
}

// GetTests @ 147003300

/* WARNING: Removing unreachable block (ram,0x0001470033ed) */
/* WARNING: Removing unreachable block (ram,0x0001470034b8) */

void __thiscall
FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner::GetTests
          (FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner *this,
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
  
  ::FString::FString(&local_18,"System.AI.Gameplay Tasks.Pausing tasks blocking other tasks");
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

// RunTest @ 1470034e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner::RunTest
          (FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner *this,FString *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FAITest_GameplayTask_PausingTasksBlockingOtherTasks *this_00;
  UWorld *pUVar3;
  char cVar4;
  
  uVar2 = 0;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FAITest_GameplayTask_PausingTasksBlockingOtherTasks *)0x0) {
    this_00 = (FAITest_GameplayTask_PausingTasksBlockingOtherTasks *)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    (((FTestLogger<int> *)&this_00->_padding_)->ExpectedValues).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this_00->_padding_ = 0;
    (((TArray<int,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->Tasks[0] = (UMockTask_Log *)0x0;
    this_00->Tasks[1] = (UMockTask_Log *)0x0;
    this_00->Tasks[2] = (UMockTask_Log *)0x0;
    FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::
    FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>
              ((FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *)this_00);
    this_00->_padding_ = (longlong)&___7FAITest_GameplayTask_PausingTasksBlockingOtherTasks__6B_;
  }
  pcVar1 = *(code **)(this_00->_padding_ + 8);
  if (pcVar1 == FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::SetTestRunner) {
    this_00->_padding_ = (longlong)this;
    this_00->_padding_ = (longlong)this;
  }
  else {
    (*pcVar1)(this_00,this);
  }
  pcVar1 = *(code **)(this_00->_padding_ + 0x18);
  if (pcVar1 == FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::SetUp) {
    pUVar3 = FAITestHelpers::GetWorld();
    UActorComponent::RegisterComponentWithWorld
              ((UActorComponent *)this_00->_padding_,pUVar3,(FRegisterComponentContext *)0x0);
    cVar4 = pUVar3 != (UWorld *)0x0;
  }
  else {
    cVar4 = (*pcVar1)(this_00);
  }
  if (cVar4 != '\0') {
    pcVar1 = *(code **)(this_00->_padding_ + 0x30);
    if (pcVar1 == FAITest_GameplayTask_PausingTasksBlockingOtherTasks::InstantTest) {
      uVar2 = FAITest_GameplayTask_PausingTasksBlockingOtherTasks::InstantTest(this_00);
    }
    else {
      uVar2 = (*pcVar1)();
    }
  }
  pcVar1 = *(code **)(this_00->_padding_ + 0x38);
  if (pcVar1 == FAITestBase::TearDown) {
    FAITestBase::TearDown((FAITestBase *)this_00);
  }
  else {
    (*pcVar1)();
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,1);
  return (bool)uVar2;
}

// GetBeautifiedTestName @ 147003610

FString * __thiscall
FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner::GetBeautifiedTestName
          (FAITest_GameplayTask_PausingTasksBlockingOtherTasksRunner *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.AI.Gameplay Tasks.Pausing tasks blocking other tasks");
  return __return_storage_ptr__;
}

