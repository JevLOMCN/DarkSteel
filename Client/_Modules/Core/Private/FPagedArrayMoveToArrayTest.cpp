// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141addb90

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayMoveToArrayTest::GetTestFlags(FPagedArrayMoveToArrayTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141addba0

bool __thiscall
PagedArray::FPagedArrayMoveToArrayTest::IsStressTest(FPagedArrayMoveToArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141addbb0

uint __thiscall
PagedArray::FPagedArrayMoveToArrayTest::GetRequiredDeviceNum(FPagedArrayMoveToArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141addbc0

FString * __thiscall
PagedArray::FPagedArrayMoveToArrayTest::GetTestSourceFileName
          (FPagedArrayMoveToArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141addbf0

int __thiscall
PagedArray::FPagedArrayMoveToArrayTest::GetTestSourceFileLine(FPagedArrayMoveToArrayTest *this)

{
  return 0x476;
}

// GetTests @ 141addc00

/* WARNING: Removing unreachable block (ram,0x000141addd7e) */

void __thiscall
PagedArray::FPagedArrayMoveToArrayTest::GetTests
          (FPagedArrayMoveToArrayTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

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

// RunTest @ 141addda0

bool __thiscall
PagedArray::FPagedArrayMoveToArrayTest::RunTest(FPagedArrayMoveToArrayTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adddd0

FString * __thiscall
PagedArray::FPagedArrayMoveToArrayTest::GetBeautifiedTestName
          (FPagedArrayMoveToArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayMoveToArrayTest @ 141b247d0

FPagedArrayMoveToArrayTest * __thiscall
PagedArray::FPagedArrayMoveToArrayTest::FPagedArrayMoveToArrayTest
          (FPagedArrayMoveToArrayTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayMoveToArrayTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Move to TArray");
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
  ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
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

// TestBody @ 141b93350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PagedArray::FPagedArrayMoveToArrayTest::TestBody(FPagedArrayMoveToArrayTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> local_90;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_80;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar6 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_80.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Pages.ArrayNum = 0;
  local_80.Pages.ArrayMax = 0;
  local_80.Count = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::ToArray<TSizedDefaultAllocator<32>_>
            (&local_80,&local_90);
  if (local_80.Count != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  if (local_90.ArrayNum != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 4;
  local_68.Data.AllocatorInstance.Data._0_4_ = 0;
  local_68.Data.AllocatorInstance.Data._4_4_ = 1;
  local_68.Data.ArrayNum = 2;
  local_68.Data.ArrayMax = 3;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_80);
  if (local_80.Pages.ArrayNum * 4 < local_80.Count + 4) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_80,local_80.Count + 4);
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
            (&local_80,(TTestToken<int> *)&local_68,4);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::ToArray<TSizedDefaultAllocator<32>_>
            (&local_80,&local_90);
  if (local_90.ArrayNum != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  iVar4 = local_90.ArrayNum;
  pFVar1 = local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 4;
  FVar7.Data = local_90.AllocatorInstance.Data;
  iVar8 = iVar6;
  while( true ) {
    if (local_90.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TTestToken<int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_98);
    }
    if (FVar7.Data == pFVar1) break;
    if (*(int *)FVar7.Data != iVar8) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_68,L"Condition failed");
      (*pcVar3)(pFVar2,&local_68);
      if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                           local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                       local_68.Data.AllocatorInstance.Data._0_4_));
      }
    }
    FVar7.Data = FVar7.Data + 4;
    iVar8 = iVar8 + 1;
  }
  if (local_80.Count != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 4;
  local_68.Data.AllocatorInstance.Data._0_4_ = 0;
  local_68.Data.AllocatorInstance.Data._4_4_ = 1;
  local_68.Data.ArrayNum = 2;
  local_68.Data.ArrayMax = 3;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_80);
  if (local_80.Pages.ArrayNum * 4 < local_80.Count + 4) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_80,local_80.Count + 4);
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
            (&local_80,(TTestToken<int> *)&local_68,4);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
  if (local_80.Pages.ArrayNum * 4 < 0x14) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_80,0x14);
  }
  if ((local_80.Pages.ArrayNum & 0x3fffffffU) != 5) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::ToArray<TSizedDefaultAllocator<32>_>
            (&local_80,&local_90);
  if (local_90.ArrayNum != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  iVar4 = local_90.ArrayNum;
  pFVar1 = local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 4;
  FVar7.Data = local_90.AllocatorInstance.Data;
  iVar8 = iVar6;
  while( true ) {
    if (local_90.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TTestToken<int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_98);
    }
    if (FVar7.Data == pFVar1) break;
    if (*(int *)FVar7.Data != iVar8) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_68,L"Condition failed");
      (*pcVar3)(pFVar2,&local_68);
      if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                           local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                       local_68.Data.AllocatorInstance.Data._0_4_));
      }
    }
    FVar7.Data = FVar7.Data + 4;
    iVar8 = iVar8 + 1;
  }
  if (local_80.Count != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 10;
  local_58 = __xmm_00000003000000020000000100000000;
  uStack_50 = _UNK_150631e08;
  local_38 = 8;
  local_48 = ___xmm_00000007000000060000000500000004;
  uStack_40 = _UNK_150631eb8;
  local_34 = 9;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_80);
  if (local_80.Pages.ArrayNum * 4 < local_80.Count + 10) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_80,local_80.Count + 10)
    ;
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
            (&local_80,(TTestToken<int> *)&local_58,10);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 10;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::ToArray<TSizedDefaultAllocator<32>_>
            (&local_80,&local_90);
  if (local_90.ArrayNum != 10) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  iVar4 = local_90.ArrayNum;
  pFVar1 = local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 4;
  FVar7.Data = local_90.AllocatorInstance.Data;
  while( true ) {
    if (local_90.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TTestToken<int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_98);
    }
    if (FVar7.Data == pFVar1) break;
    if (*(int *)FVar7.Data != iVar6) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_68,L"Condition failed");
      (*pcVar3)(pFVar2,&local_68);
      if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                           local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                       local_68.Data.AllocatorInstance.Data._0_4_));
      }
    }
    FVar7.Data = FVar7.Data + 4;
    iVar6 = iVar6 + 1;
  }
  if (local_80.Count != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  FVar7.Data = local_90.AllocatorInstance.Data;
  DestructItems<TTestToken<int>,int>
            ((TTestToken<int> *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_80.Pages.AllocatorInstance.Data,local_80.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_80.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_80.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0x24)) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if ((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                         local_68.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_68.Data.AllocatorInstance.Data._4_4_,
                                     local_68.Data.AllocatorInstance.Data._0_4_));
    }
  }
  return;
}

