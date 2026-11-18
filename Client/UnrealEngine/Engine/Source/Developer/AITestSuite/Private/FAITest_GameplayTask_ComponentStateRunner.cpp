// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 8

// GetTestFlags @ 146fff340

EAutomationTestFlags __thiscall
FAITest_GameplayTask_ComponentStateRunner::GetTestFlags
          (FAITest_GameplayTask_ComponentStateRunner *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 146fff350

bool __thiscall
FAITest_GameplayTask_ComponentStateRunner::IsStressTest
          (FAITest_GameplayTask_ComponentStateRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146fff360

uint __thiscall
FAITest_GameplayTask_ComponentStateRunner::GetRequiredDeviceNum
          (FAITest_GameplayTask_ComponentStateRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 146fff370

FString * __thiscall
FAITest_GameplayTask_ComponentStateRunner::GetTestSourceFileName
          (FAITest_GameplayTask_ComponentStateRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\Tests\\GameplayTasksTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146fff3a0

int __thiscall
FAITest_GameplayTask_ComponentStateRunner::GetTestSourceFileLine
          (FAITest_GameplayTask_ComponentStateRunner *this)

{
  return 0x22;
}

// GetTests @ 146fff3e0

/* WARNING: Removing unreachable block (ram,0x000146fff4cd) */
/* WARNING: Removing unreachable block (ram,0x000146fff598) */

void __thiscall
FAITest_GameplayTask_ComponentStateRunner::GetTests
          (FAITest_GameplayTask_ComponentStateRunner *this,
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
  
  ::FString::FString(&local_18,"System.AI.Gameplay Tasks.Component\'s basic behavior");
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

// RunTest @ 146fff600

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
FAITest_GameplayTask_ComponentStateRunner::RunTest
          (FAITest_GameplayTask_ComponentStateRunner *this,FString *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *this_00;
  UWorld *pUVar3;
  char cVar4;
  
  uVar2 = 0;
  this_00 = ::operator_new(0x58);
  if (this_00 == (FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *)0x0) {
    this_00 = (FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent> *)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    (this_00->Logger).ExpectedValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Logger).ExpectedValues.ArrayNum = 0;
    (this_00->Logger).ExpectedValues.ArrayMax = 0;
    (this_00->Logger).LoggedValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->Logger).LoggedValues.ArrayNum = 0;
    (this_00->Logger).LoggedValues.ArrayMax = 0;
    (this_00->Logger).TestRunner = (FAutomationTestBase *)0x0;
    this_00->Component = (UMockGameplayTasksComponent *)0x0;
    FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::
    FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>(this_00);
    this_00->_padding_ = (longlong)&___7FAITest_GameplayTask_ComponentState__6B_;
  }
  pcVar1 = *(code **)(this_00->_padding_ + 8);
  if (pcVar1 == FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::SetTestRunner) {
    this_00->_padding_ = (longlong)this;
    (this_00->Logger).TestRunner = (FAutomationTestBase *)this;
  }
  else {
    (*pcVar1)(this_00,this);
  }
  pcVar1 = *(code **)(this_00->_padding_ + 0x18);
  if (pcVar1 == FAITest_SimpleComponentBasedTest<UMockGameplayTasksComponent>::SetUp) {
    pUVar3 = FAITestHelpers::GetWorld();
    UActorComponent::RegisterComponentWithWorld
              ((UActorComponent *)this_00->Component,pUVar3,(FRegisterComponentContext *)0x0);
    cVar4 = pUVar3 != (UWorld *)0x0;
  }
  else {
    cVar4 = (*pcVar1)(this_00);
  }
  if (cVar4 != '\0') {
    pcVar1 = *(code **)(this_00->_padding_ + 0x30);
    if (pcVar1 == FAITest_GameplayTask_ComponentState::InstantTest) {
      uVar2 = FAITest_GameplayTask_ComponentState::InstantTest
                        ((FAITest_GameplayTask_ComponentState *)this_00);
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

// GetBeautifiedTestName @ 146fff730

FString * __thiscall
FAITest_GameplayTask_ComponentStateRunner::GetBeautifiedTestName
          (FAITest_GameplayTask_ComponentStateRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AI.Gameplay Tasks.Component\'s basic behavior");
  return __return_storage_ptr__;
}

