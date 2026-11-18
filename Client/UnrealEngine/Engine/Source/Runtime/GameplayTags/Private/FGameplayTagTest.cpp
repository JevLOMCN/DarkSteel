// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 8

// GetTestFlags @ 146abfb90

EAutomationTestFlags __thiscall FGameplayTagTest::GetTestFlags(FGameplayTagTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 146abfba0

bool __thiscall FGameplayTagTest::IsStressTest(FGameplayTagTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146abfbb0

uint __thiscall FGameplayTagTest::GetRequiredDeviceNum(FGameplayTagTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146abfbc0

FString * __thiscall
FGameplayTagTest::GetTestSourceFileName(FGameplayTagTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\Tests\\GameplayTagTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146abfbf0

int __thiscall FGameplayTagTest::GetTestSourceFileLine(FGameplayTagTest *this)

{
  return 0x195;
}

// GetTests @ 146abfc00

/* WARNING: Removing unreachable block (ram,0x000146abfced) */
/* WARNING: Removing unreachable block (ram,0x000146abfdb8) */

void __thiscall
FGameplayTagTest::GetTests
          (FGameplayTagTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.GameplayTags.GameplayTag");
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

// RunTest @ 146abfde0

bool __thiscall FGameplayTagTest::RunTest(FGameplayTagTest *this,FString *param_1)

{
  bool bVar1;
  UDataTable *pUVar2;
  UGameplayTagsManager *pUVar3;
  FName local_res18;
  FName local_res20;
  
  pUVar2 = FGameplayTagTestBase::CreateGameplayDataTable((FGameplayTagTestBase *)this);
  pUVar3 = UGameplayTagsManager::Get();
  UGameplayTagsManager::PopulateTreeFromDataTable(pUVar3,pUVar2);
  ::FName::FName(&local_res18,L"Stack.DiminishingReturns");
  pUVar3 = UGameplayTagsManager::Get();
  UGameplayTagsManager::RequestGameplayTag
            (pUVar3,(FName)&local_res20,local_res18.ComparisonIndex.Value._0_1_);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Tag.GetTagName() == TagName",local_res20 == local_res18);
  FGameplayTagTestBase::GameplayTagTest_TagComparisonTest((FGameplayTagTestBase *)this);
  FGameplayTagTestBase::GameplayTagTest_TagContainerTest((FGameplayTagTestBase *)this);
  FGameplayTagTestBase::GameplayTagTest_PerfTest((FGameplayTagTestBase *)this);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 146abfe80

FString * __thiscall
FGameplayTagTest::GetBeautifiedTestName(FGameplayTagTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.GameplayTags.GameplayTag");
  return __return_storage_ptr__;
}

