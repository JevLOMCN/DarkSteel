// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 8

// GetTestFlags @ 146ac1630

EAutomationTestFlags __thiscall
FGameplayTagQueryTest_Empty::GetTestFlags(FGameplayTagQueryTest_Empty *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 146ac1650

bool __thiscall FGameplayTagQueryTest_Empty::IsStressTest(FGameplayTagQueryTest_Empty *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146ac1670

uint __thiscall FGameplayTagQueryTest_Empty::GetRequiredDeviceNum(FGameplayTagQueryTest_Empty *this)

{
  return 1;
}

// GetTestSourceFileName @ 146ac1690

FString * __thiscall
FGameplayTagQueryTest_Empty::GetTestSourceFileName
          (FGameplayTagQueryTest_Empty *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\Tests\\GameplayTagQueryTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146ac16c0

int __thiscall FGameplayTagQueryTest_Empty::GetTestSourceFileLine(FGameplayTagQueryTest_Empty *this)

{
  return 7;
}

// GetTests @ 146ac1790

/* WARNING: Removing unreachable block (ram,0x000146ac187d) */
/* WARNING: Removing unreachable block (ram,0x000146ac1948) */

void __thiscall
FGameplayTagQueryTest_Empty::GetTests
          (FGameplayTagQueryTest_Empty *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.GameplayTags.GameplayTagQuery.Empty");
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

// RunTest @ 146ac19f0

bool __thiscall
FGameplayTagQueryTest_Empty::RunTest(FGameplayTagQueryTest_Empty *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  UGameplayTagsManager *this_00;
  FString *pFVar3;
  FName FVar4;
  ForAnyElementType FVar5;
  FName local_res18 [2];
  FString local_108;
  FGameplayTagQuery local_f8;
  FGameplayTagQueryExpression local_a8;
  FGameplayTagContainer local_80;
  FGameplayTagContainer local_60;
  FGameplayTagContainer local_40;
  
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  local_40.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.GameplayTags.ArrayNum = 0;
  local_40.GameplayTags.ArrayMax = 0;
  local_40.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ParentTags.ArrayNum = 0;
  local_40.ParentTags.ArrayMax = 0;
  this_00 = UGameplayTagsManager::Get();
  UGameplayTagsManager::RequestAllGameplayTags(this_00,&local_40,true);
  if (local_40.GameplayTags.ArrayNum == 0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x50);
    ::FString::FString(&local_108,L"GameplayTags are not defined for this Project. Skipping test.");
    (*pcVar1)(this,&local_108,0,0);
    FVar5.Data = local_108.Data.AllocatorInstance.Data;
  }
  else {
    if (0 < local_40.GameplayTags.ArrayNum) {
      FVar4 = *(FName *)local_40.GameplayTags.AllocatorInstance.Data;
    }
    local_60.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.GameplayTags.ArrayNum = 0;
    local_60.GameplayTags.ArrayMax = 0;
    local_60.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ParentTags.ArrayNum = 0;
    local_60.ParentTags.ArrayMax = 0;
    local_80.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.GameplayTags.ArrayNum = 0;
    local_80.GameplayTags.ArrayMax = 0;
    local_80.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ParentTags.ArrayNum = 0;
    local_80.ParentTags.ArrayMax = 0;
    local_res18[0] = FVar4;
    FGameplayTagContainer::AddTag(&local_80,(FGameplayTag *)local_res18);
    local_f8.TokenStreamVersion = 0;
    local_f8.TagDictionary.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.TagDictionary.ArrayNum = 0;
    local_f8.TagDictionary.ArrayMax = 0;
    local_f8.QueryTokenStream.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.QueryTokenStream.ArrayNum = 0;
    local_f8.QueryTokenStream.ArrayMax = 0;
    local_f8.UserDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.UserDescription.Data.ArrayNum = 0;
    local_f8.UserDescription.Data.ArrayMax = 0;
    local_f8.AutoDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.AutoDescription.Data.ArrayNum = 0;
    local_f8.AutoDescription.Data.ArrayMax = 0;
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    ::FString::FString(&local_108,"Match Empty Query w/ Empty Container");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar2);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    ::FString::FString(&local_108,"Match Empty Query w/ Non-Empty Container");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar2);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AutoDescription.Data.AllocatorInstance.Data);
    }
    if (local_f8.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.UserDescription.Data.AllocatorInstance.Data);
    }
    if (local_f8.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.QueryTokenStream.AllocatorInstance.Data);
    }
    if (local_f8.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.TagDictionary.AllocatorInstance.Data);
    }
    local_f8.TokenStreamVersion = 0;
    local_f8.TagDictionary.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.TagDictionary.ArrayNum = 0;
    local_f8.TagDictionary.ArrayMax = 0;
    local_f8.QueryTokenStream.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.QueryTokenStream.ArrayNum = 0;
    local_f8.QueryTokenStream.ArrayMax = 0;
    local_f8.UserDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.UserDescription.Data.ArrayNum = 0;
    local_f8.UserDescription.Data.ArrayMax = 0;
    local_f8.AutoDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.AutoDescription.Data.ArrayNum = 0;
    local_f8.AutoDescription.Data.ArrayMax = 0;
    local_a8.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ExprSet.ArrayNum = 0;
    local_a8.ExprSet.ArrayMax = 0;
    local_a8.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.TagSet.ArrayNum = 0;
    local_a8.TagSet.ArrayMax = 0;
    local_a8.ExprType = AllExprMatch;
    pFVar3 = ::FString::FString(&local_108,L"Empty Tag Query Expression - AllExprMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Empty AllExprMatch w/ Empty Container",bVar2);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Empty AllExprMatch w/ Non-Empty Container",bVar2)
    ;
    local_a8.ExprType = AllTagsMatch;
    pFVar3 = ::FString::FString(&local_108,L"Empty Tag Query Expression - AllTagsMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Empty AllTagsMatch w/ Empty Container",bVar2);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Empty AllTagsMatch w/ Non-Empty Container",bVar2)
    ;
    local_a8.ExprType = AnyExprMatch;
    pFVar3 = ::FString::FString(&local_108,L"Empty Tag Query Expression - AnyExprMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Match Empty AnyExprMatch w/ Empty Container",bVar2);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Match Empty AnyExprMatch w/ Non-Empty Container",bVar2)
    ;
    local_a8.ExprType = AnyTagsMatch;
    pFVar3 = ::FString::FString(&local_108,L"Empty Tag Query Expression - AnyTagsMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Match Empty AnyTagsMatch w/ Empty Container",bVar2);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Match Empty AnyTagsMatch w/ Non-Empty Container",bVar2)
    ;
    local_a8.ExprType = NoExprMatch;
    pFVar3 = ::FString::FString(&local_108,L"Empty Tag Query Expression - NoExprMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Empty NoExprMatch w/ Empty Container",bVar2);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Empty NoExprMatch w/ Non-Empty Container",bVar2);
    local_a8.ExprType = NoTagsMatch;
    pFVar3 = ::FString::FString(&local_108,L"Empty Tag Query Expression - NoTagsMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Empty NoTagsMatch w/ Empty Container",bVar2);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Empty NoTagsMatch w/ Non-Empty Container",bVar2);
    if (local_a8.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.TagSet.AllocatorInstance.Data);
    }
    FVar5.Data = local_a8.ExprSet.AllocatorInstance.Data;
    DestructItems<FGameplayTagQueryExpression,int>
              ((FGameplayTagQueryExpression *)local_a8.ExprSet.AllocatorInstance.Data,
               local_a8.ExprSet.ArrayNum);
    if ((FGameplayTagQueryExpression *)FVar5.Data != (FGameplayTagQueryExpression *)0x0) {
      FMemory::Free(FVar5.Data);
    }
    if (local_f8.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AutoDescription.Data.AllocatorInstance.Data);
    }
    if (local_f8.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.UserDescription.Data.AllocatorInstance.Data);
    }
    if (local_f8.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.QueryTokenStream.AllocatorInstance.Data);
    }
    if (local_f8.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.TagDictionary.AllocatorInstance.Data);
    }
    FVar4 = local_res18[0];
    local_f8.TokenStreamVersion = 0;
    local_f8.TagDictionary.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.TagDictionary.ArrayNum = 0;
    local_f8.TagDictionary.ArrayMax = 0;
    local_f8.QueryTokenStream.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.QueryTokenStream.ArrayNum = 0;
    local_f8.QueryTokenStream.ArrayMax = 0;
    local_f8.UserDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.UserDescription.Data.ArrayNum = 0;
    local_f8.UserDescription.Data.ArrayMax = 0;
    local_f8.AutoDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.AutoDescription.Data.ArrayNum = 0;
    local_f8.AutoDescription.Data.ArrayMax = 0;
    local_a8.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ExprSet.ArrayNum = 0;
    local_a8.ExprSet.ArrayMax = 0;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,0,(ForAnyElementType *)&local_108,1,&local_108.Data.ArrayMax);
    local_a8.ExprType = AllExprMatch;
    *(FName *)local_108.Data.AllocatorInstance.Data = FVar4;
    local_a8.TagSet.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
    local_a8.TagSet.ArrayMax = local_108.Data.ArrayMax;
    local_a8.TagSet.ArrayNum = local_108.Data.ArrayNum;
    pFVar3 = ::FString::FString(&local_108,L"Non-Empty Tag Query Expression - AllExprMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Non-Empty AllExprMatch w/ Empty Container",bVar2)
    ;
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Non-Empty AllExprMatch w/ Non-Empty Container",
               bVar2);
    local_a8.ExprType = AllTagsMatch;
    pFVar3 = ::FString::FString(&local_108,L"Non-Empty Tag Query Expression - AllTagsMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Match Non-Empty AllTagsMatch w/ Empty Container",bVar2)
    ;
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Non-Empty AllTagsMatch w/ Non-Empty Container",
               bVar2);
    local_a8.ExprType = AnyExprMatch;
    pFVar3 = ::FString::FString(&local_108,L"Non-Empty Tag Query Expression - AnyExprMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Match Non-Empty AnyExprMatch w/ Empty Container",bVar2)
    ;
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Match Non-Empty AnyExprMatch w/ Non-Empty Container",
               bVar2);
    local_a8.ExprType = AnyTagsMatch;
    pFVar3 = ::FString::FString(&local_108,L"Non-Empty Tag Query Expression - AnyTagsMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Match Non-Empty AnyTagsMatch w/ Empty Container",bVar2)
    ;
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Non-Empty AnyTagsMatch w/ Non-Empty Container",
               bVar2);
    local_a8.ExprType = NoExprMatch;
    pFVar3 = ::FString::FString(&local_108,L"Non-Empty Tag Query Expression - NoExprMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Non-Empty NoExprMatch w/ Empty Container",bVar2);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Non-Empty NoExprMatch w/ Non-Empty Container",
               bVar2);
    local_a8.ExprType = NoTagsMatch;
    pFVar3 = ::FString::FString(&local_108,L"Non-Empty Tag Query Expression - NoTagsMatch");
    FGameplayTagQuery::Build(&local_f8,&local_a8,pFVar3);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_60);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"Match Non-Empty NoTagsMatch w/ Empty Container",bVar2);
    bVar2 = FGameplayTagQuery::Matches(&local_f8,&local_80);
    FAutomationTestBase::TestFalse
              ((FAutomationTestBase *)this,L"Match Non-Empty NoTagsMatch w/ Non-Empty Container",
               bVar2);
    if (local_a8.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.TagSet.AllocatorInstance.Data);
    }
    FVar5.Data = local_a8.ExprSet.AllocatorInstance.Data;
    DestructItems<FGameplayTagQueryExpression,int>
              ((FGameplayTagQueryExpression *)local_a8.ExprSet.AllocatorInstance.Data,
               local_a8.ExprSet.ArrayNum);
    if ((FGameplayTagQueryExpression *)FVar5.Data != (FGameplayTagQueryExpression *)0x0) {
      FMemory::Free(FVar5.Data);
    }
    if (local_f8.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AutoDescription.Data.AllocatorInstance.Data);
    }
    if (local_f8.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.UserDescription.Data.AllocatorInstance.Data);
    }
    if (local_f8.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.QueryTokenStream.AllocatorInstance.Data);
    }
    if (local_f8.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.TagDictionary.AllocatorInstance.Data);
    }
    if (local_80.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.ParentTags.AllocatorInstance.Data);
    }
    if (local_80.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.GameplayTags.AllocatorInstance.Data);
    }
    FVar5.Data = local_60.GameplayTags.AllocatorInstance.Data;
    if (local_60.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.ParentTags.AllocatorInstance.Data);
      FVar5.Data = local_60.GameplayTags.AllocatorInstance.Data;
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_40.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.ParentTags.AllocatorInstance.Data);
  }
  if (local_40.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.GameplayTags.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 146ac2300

FString * __thiscall
FGameplayTagQueryTest_Empty::GetBeautifiedTestName
          (FGameplayTagQueryTest_Empty *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.GameplayTags.GameplayTagQuery.Empty");
  return __return_storage_ptr__;
}

