// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc8e70

EAutomationTestFlags __thiscall
FPathPermissionListCombineTest::GetTestFlags(FPathPermissionListCombineTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc8e80

bool __thiscall FPathPermissionListCombineTest::IsStressTest(FPathPermissionListCombineTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc8e90

uint __thiscall
FPathPermissionListCombineTest::GetRequiredDeviceNum(FPathPermissionListCombineTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc8ea0

FString * __thiscall
FPathPermissionListCombineTest::GetTestSourceFileName
          (FPathPermissionListCombineTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathPermissionListTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc8ed0

int __thiscall
FPathPermissionListCombineTest::GetTestSourceFileLine(FPathPermissionListCombineTest *this)

{
  return 99;
}

// GetTests @ 141cc8f30

/* WARNING: Removing unreachable block (ram,0x000141cc90ae) */

void __thiscall
FPathPermissionListCombineTest::GetTests
          (FPathPermissionListCombineTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141cc90d0

bool __thiscall
FPathPermissionListCombineTest::RunTest(FPathPermissionListCombineTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc9100

FString * __thiscall
FPathPermissionListCombineTest::GetBeautifiedTestName
          (FPathPermissionListCombineTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathPermissionListCombineTest @ 141ce7e00

FPathPermissionListCombineTest * __thiscall
FPathPermissionListCombineTest::FPathPermissionListCombineTest
          (FPathPermissionListCombineTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FPathPermissionListCombineTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Misc][PathPermissionList]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathPermissionList::Combine");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[Core][Misc][PathPermissionList]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141d2f720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPathPermissionListCombineTest::TestBody(FPathPermissionListCombineTest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FAutomationTestFramework *pFVar7;
  FName *pFVar8;
  undefined1 auStack_288 [32];
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  undefined1 local_248 [144];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_1b8;
  int local_1b0;
  undefined1 local_198 [144];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_108;
  int local_100;
  undefined1 local_e8 [144];
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *local_58;
  int local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar7 = FAutomationTestFramework::Get();
  pFVar3 = pFVar7->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)&local_268,L"One deny all");
  (*pcVar4)(pFVar3,&local_268,0,0);
  if (local_268.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_268.DataPtr);
  }
  FPathPermissionList::FPathPermissionList((FPathPermissionList *)local_e8,Default);
  pFVar8 = ::FName::FName((FName *)&local_258,"Deny");
  FPathPermissionList::AddDenyListAll((FPathPermissionList *)local_e8,*pFVar8);
  FPathPermissionList::FPathPermissionList((FPathPermissionList *)local_198,Default);
  local_268.Size = 5;
  local_268.DataPtr = L"/Game";
  pFVar8 = ::FName::FName((FName *)&local_258,"Allow");
  FPathPermissionList::AddAllowListItem((FPathPermissionList *)local_198,*pFVar8,&local_268);
  local_268.Size = 10;
  local_268.DataPtr = L"/Game/Maps";
  pFVar8 = ::FName::FName((FName *)&local_258,"Allow");
  FPathPermissionList::AddAllowListItem((FPathPermissionList *)local_198,*pFVar8,&local_268);
  FPathPermissionList::CombinePathFilters
            ((FPathPermissionList *)local_e8,(FPathPermissionList *)local_248,
             (FPathPermissionList *)local_198);
  local_268.Size = 5;
  local_268.DataPtr = L"/Game";
  bVar6 = FPathPermissionList::PassesFilter((FPathPermissionList *)local_248,&local_268);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 10;
  local_268.DataPtr = L"/Game/Maps";
  bVar6 = FPathPermissionList::PassesFilter((FPathPermissionList *)local_248,&local_268);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 5;
  local_268.DataPtr = L"/Game";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 10;
  local_268.DataPtr = L"/Game/Maps";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 0x10;
  local_268.DataPtr = L"/Game/Characters";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 8;
  local_268.DataPtr = L"/Plugin1";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268,0);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_248._0_8_ = &___7FPathPermissionList__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_1b8,local_1b0);
  if (local_1b8 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_1b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_248 + 0x88));
  if ((FScriptContainerElement *)local_248._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_248._120_8_);
  }
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_248 + 0x48));
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_248 + 0x18));
  if ((longlong *)local_248._16_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_248._16_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_248._16_8_ + 8))(local_248._16_8_,1);
    }
  }
  local_198._0_8_ = &___7FPathPermissionList__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_108,local_100);
  if (local_108 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_108);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_198 + 0x88));
  if ((FScriptContainerElement *)local_198._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._120_8_);
  }
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_198 + 0x48));
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_198 + 0x18));
  if ((longlong *)local_198._16_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_198._16_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_198._16_8_ + 8))(local_198._16_8_,1);
    }
  }
  local_e8._0_8_ = &___7FPathPermissionList__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_58,local_50);
  if (local_58 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_e8 + 0x88));
  if ((FScriptContainerElement *)local_e8._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._120_8_);
  }
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_e8 + 0x48));
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_e8 + 0x18));
  if ((longlong *)local_e8._16_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_e8._16_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_e8._16_8_ + 8))(local_e8._16_8_,1);
    }
  }
  pFVar7 = FAutomationTestFramework::Get();
  pFVar3 = pFVar7->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)&local_268,L"Parent path denied");
  (*pcVar4)(pFVar3,&local_268,0,0);
  if (local_268.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_268.DataPtr);
  }
  FPathPermissionList::FPathPermissionList((FPathPermissionList *)local_e8,Default);
  pFVar8 = ::FName::FName((FName *)&local_258,"/Game/Maps");
  FVar5 = *pFVar8;
  pFVar8 = ::FName::FName((FName *)&local_268,"Deny");
  FPathPermissionList::AddDenyListItem((FPathPermissionList *)local_e8,*pFVar8,FVar5);
  FPathPermissionList::FPathPermissionList((FPathPermissionList *)local_198,Default);
  local_258.DataPtr = L"/Game";
  local_258.Size = 5;
  pFVar8 = ::FName::FName((FName *)&local_268,"Allow");
  FPathPermissionList::AddAllowListItem((FPathPermissionList *)local_198,*pFVar8,&local_258);
  local_258.Size = 0x11;
  local_258.DataPtr = L"/Game/Maps/Desert";
  pFVar8 = ::FName::FName((FName *)&local_268,"Allow");
  FPathPermissionList::AddAllowListItem((FPathPermissionList *)local_198,*pFVar8,&local_258);
  FPathPermissionList::CombinePathFilters
            ((FPathPermissionList *)local_e8,(FPathPermissionList *)local_248,
             (FPathPermissionList *)local_198);
  local_268.Size = 5;
  local_268.DataPtr = L"/Game";
  bVar6 = FPathPermissionList::PassesFilter((FPathPermissionList *)local_248,&local_268);
  if (!bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition failed");
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 10;
  local_268.DataPtr = L"/Game/Maps";
  bVar6 = FPathPermissionList::PassesFilter((FPathPermissionList *)local_248,&local_268);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 0x11;
  local_268.DataPtr = L"/Game/Maps/Desert";
  bVar6 = FPathPermissionList::PassesFilter((FPathPermissionList *)local_248,&local_268);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 5;
  local_268.DataPtr = L"/Game";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (!bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition failed");
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 0x10;
  local_268.DataPtr = L"/Game/Characters";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (!bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition failed");
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 8;
  local_268.DataPtr = L"/Plugin1";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 10;
  local_268.DataPtr = L"/Game/Maps";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 0x11;
  local_268.DataPtr = L"/Game/Maps/Desert";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_268.Size = 0x11;
  local_268.DataPtr = L"/Game/Maps/Jungle";
  bVar6 = FPathPermissionList::PassesStartsWithFilter
                    ((FPathPermissionList *)local_248,&local_268,false);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_268,L"Condition expected to return false but returned true"
                      );
    (*pcVar4)(pFVar3,&local_268,0);
    if (local_268.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_268.DataPtr);
    }
  }
  local_248._0_8_ = &___7FPathPermissionList__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_1b8,local_1b0);
  if (local_1b8 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_1b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_248 + 0x88));
  if ((FScriptContainerElement *)local_248._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_248._120_8_);
  }
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_248 + 0x48));
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_248 + 0x18));
  if ((longlong *)local_248._16_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_248._16_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_248._16_8_ + 8))(local_248._16_8_,1);
    }
  }
  local_198._0_8_ = &___7FPathPermissionList__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_108,local_100);
  if (local_108 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_108);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_198 + 0x88));
  if ((FScriptContainerElement *)local_198._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._120_8_);
  }
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_198 + 0x48));
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_198 + 0x18));
  if ((longlong *)local_198._16_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_198._16_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_198._16_8_ + 8))(local_198._16_8_,1);
    }
  }
  local_e8._0_8_ = &___7FPathPermissionList__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(local_58,local_50);
  if (local_58 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_e8 + 0x88));
  if ((FScriptContainerElement *)local_e8._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._120_8_);
  }
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_e8 + 0x48));
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            ((FTreeNode *)(local_e8 + 0x18));
  if ((longlong *)local_e8._16_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_e8._16_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_e8._16_8_ + 8))(local_e8._16_8_,1);
    }
  }
  return;
}

