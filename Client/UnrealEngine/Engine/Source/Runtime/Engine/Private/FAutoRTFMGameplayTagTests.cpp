// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487d7a30

EAutomationTestFlags __thiscall
FAutoRTFMGameplayTagTests::GetTestFlags(FAutoRTFMGameplayTagTests *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1487d7a40

bool __thiscall FAutoRTFMGameplayTagTests::IsStressTest(FAutoRTFMGameplayTagTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487d7a50

uint __thiscall FAutoRTFMGameplayTagTests::GetRequiredDeviceNum(FAutoRTFMGameplayTagTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487d7a60

FString * __thiscall
FAutoRTFMGameplayTagTests::GetTestSourceFileName
          (FAutoRTFMGameplayTagTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutoRTFM\\AutoRTFMGameplayTagTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487d7a90

int __thiscall FAutoRTFMGameplayTagTests::GetTestSourceFileLine(FAutoRTFMGameplayTagTests *this)

{
  return 10;
}

// GetTests @ 1487d7aa0

/* WARNING: Removing unreachable block (ram,0x0001487d7b8d) */
/* WARNING: Removing unreachable block (ram,0x0001487d7c58) */

void __thiscall
FAutoRTFMGameplayTagTests::GetTests
          (FAutoRTFMGameplayTagTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + FGameplayTag");
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

// RunTest @ 1487d7c80

bool __thiscall FAutoRTFMGameplayTagTests::RunTest(FAutoRTFMGameplayTagTests *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FGameplayTagContainer *pFVar3;
  FName local_res20;
  FName local_88;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> local_80;
  FGameplayTagContainer local_70;
  FAutomationEvent local_50;
  
  bVar2 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar2) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    local_88.ComparisonIndex.Value = 0;
    local_88.Number = 0;
    bVar2 = FGameplayTag::MatchesTag((FGameplayTag *)&local_res20,(FGameplayTag *)&local_88);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::Committed == Result",true
              );
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"bResult",bVar2);
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
      UGameplayTagsManager::InitializeManager();
    }
    UGameplayTagsManager::ExtractParentTags
              (UGameplayTagsManager::SingletonManager,(FGameplayTag *)&local_res20,&local_80);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::Committed == Result",true
              );
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Parents.IsEmpty()",local_80.ArrayNum == 0);
    if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
      UGameplayTagsManager::InitializeManager();
    }
    pFVar3 = UGameplayTagsManager::RequestGameplayTagParents
                       (UGameplayTagsManager::SingletonManager,&local_70,
                        (FGameplayTag *)&local_res20);
    iVar1 = (pFVar3->GameplayTags).ArrayNum;
    if (local_70.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.ParentTags.AllocatorInstance.Data);
    }
    if (local_70.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.GameplayTags.AllocatorInstance.Data);
    }
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::Committed == Result",true
              );
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"bResult",iVar1 == 0);
    local_70.GameplayTags.AllocatorInstance.Data = local_80.AllocatorInstance.Data;
  }
  else {
    ::FString::FString((FString *)&local_70,
                       L"SKIPPED \'FAutoRTFMGameplayTagTests\' test. AutoRTFM disabled.");
    _Src.Data = local_70.GameplayTags.AllocatorInstance.Data;
    local_50.Type = Info;
    local_50.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_70.GameplayTags.ArrayNum == 0) {
      local_50.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_70.GameplayTags.ArrayNum,0,(ForAnyElementType *)&local_50.Message,
                 local_70.GameplayTags.ArrayNum,&local_50.Message.Data.ArrayMax);
      memcpy(local_50.Message.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_70.GameplayTags.ArrayNum * 2);
    }
    local_50.Artifact.A = 0;
    local_50.Artifact.B = 0;
    local_50.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Context.Data.ArrayNum = 0;
    local_50.Context.Data.ArrayMax = 0;
    local_50.Artifact.C = 0;
    local_50.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_50,0,true);
    if (local_50.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Context.Data.AllocatorInstance.Data);
    }
    if (local_50.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Message.Data.AllocatorInstance.Data);
    }
  }
  if (local_70.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.GameplayTags.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487d7eb0

FString * __thiscall
FAutoRTFMGameplayTagTests::GetBeautifiedTestName
          (FAutoRTFMGameplayTagTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + FGameplayTag");
  return __return_storage_ptr__;
}

