// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 8

// GetTestFlags @ 14700cba0

EAutomationTestFlags __thiscall
FAITest_ResourceSetRunner::GetTestFlags(FAITest_ResourceSetRunner *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 14700cbb0

bool __thiscall FAITest_ResourceSetRunner::IsStressTest(FAITest_ResourceSetRunner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14700cbc0

uint __thiscall FAITest_ResourceSetRunner::GetRequiredDeviceNum(FAITest_ResourceSetRunner *this)

{
  return 1;
}

// GetTestSourceFileName @ 14700cdb0

FString * __thiscall
FAITest_ResourceSetRunner::GetTestSourceFileName
          (FAITest_ResourceSetRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\Tests\\ResourceIdTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14700cde0

int __thiscall FAITest_ResourceSetRunner::GetTestSourceFileLine(FAITest_ResourceSetRunner *this)

{
  return 0x83;
}

// GetTests @ 14700cfd0

/* WARNING: Removing unreachable block (ram,0x00014700d0bd) */
/* WARNING: Removing unreachable block (ram,0x00014700d188) */

void __thiscall
FAITest_ResourceSetRunner::GetTests
          (FAITest_ResourceSetRunner *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AI.Resource ID.Resource locking");
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

// RunTest @ 14700d1b0

bool __thiscall FAITest_ResourceSetRunner::RunTest(FAITest_ResourceSetRunner *this,FString *param_1)

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
    this_00->_padding_ = (longlong)&___7FAITest_ResourceSet__6B_;
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
    if (pcVar1 == FAITest_ResourceSet::InstantTest) {
      uVar3 = FAITest_ResourceSet::InstantTest((FAITest_ResourceSet *)this_00);
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

// GetBeautifiedTestName @ 14700d2b0

FString * __thiscall
FAITest_ResourceSetRunner::GetBeautifiedTestName
          (FAITest_ResourceSetRunner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AI.Resource ID.Resource locking");
  return __return_storage_ptr__;
}

