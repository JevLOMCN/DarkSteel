// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141adc590

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayComparisonTest::GetTestFlags(FPagedArrayComparisonTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adc5a0

bool __thiscall PagedArray::FPagedArrayComparisonTest::IsStressTest(FPagedArrayComparisonTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adc5b0

uint __thiscall
PagedArray::FPagedArrayComparisonTest::GetRequiredDeviceNum(FPagedArrayComparisonTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adc5c0

FString * __thiscall
PagedArray::FPagedArrayComparisonTest::GetTestSourceFileName
          (FPagedArrayComparisonTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141adc5f0

int __thiscall
PagedArray::FPagedArrayComparisonTest::GetTestSourceFileLine(FPagedArrayComparisonTest *this)

{
  return 0x3f7;
}

// GetTests @ 141adc600

/* WARNING: Removing unreachable block (ram,0x000141adc77e) */

void __thiscall
PagedArray::FPagedArrayComparisonTest::GetTests
          (FPagedArrayComparisonTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141adc7a0

bool __thiscall
PagedArray::FPagedArrayComparisonTest::RunTest(FPagedArrayComparisonTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adc7d0

FString * __thiscall
PagedArray::FPagedArrayComparisonTest::GetBeautifiedTestName
          (FPagedArrayComparisonTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayComparisonTest @ 141b22ad0

FPagedArrayComparisonTest * __thiscall
PagedArray::FPagedArrayComparisonTest::FPagedArrayComparisonTest
          (FPagedArrayComparisonTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayComparisonTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Comparison");
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

// TestBody @ 141b8c610

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
PagedArray::FPagedArrayComparisonTest::TestBody(FPagedArrayComparisonTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FAutomationTestFramework *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_f8;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_e0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  uVar10 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_f8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Pages.ArrayNum = 0;
  local_f8.Pages.ArrayMax = 0;
  local_f8.Count = 0;
  local_e0.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Pages.ArrayNum = 0;
  local_e0.Pages.ArrayMax = 0;
  local_e0.Count = 0;
  bVar3 = TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator==
                    (&local_f8,&local_e0);
  uVar11 = uVar10;
  if (!bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  do {
    if (local_f8.Count == local_f8.Pages.ArrayNum << 5) {
      iVar4 = local_f8.Pages.ArrayNum;
      if (local_f8.Pages.ArrayNum == local_f8.Pages.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_f8,&local_f8.Pages.ArrayMax);
      }
      local_f8.Pages.ArrayNum = iVar4 + 1;
      lVar8 = (longlong)iVar4 * 0x10;
      *(undefined8 *)&local_f8.Pages.AllocatorInstance.Data[lVar8].field_0x0 = 0;
      *(undefined4 *)(local_f8.Pages.AllocatorInstance.Data + lVar8 + 8) = 0;
      *(int *)(local_f8.Pages.AllocatorInstance.Data + lVar8 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_f8.Pages.AllocatorInstance.Data + lVar8),0,
                 (int *)(local_f8.Pages.AllocatorInstance.Data + lVar8 + 0xc));
    }
    uVar5 = (int)(local_f8.Count + (local_f8.Count >> 0x1f & 0x1fU)) >> 5;
    uVar6 = 0;
    if ((int)uVar5 < local_f8.Pages.ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = local_f8.Pages.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
    iVar4 = *(int *)(pFVar9 + 8);
    if (iVar4 == *(int *)(pFVar9 + 0xc)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
    }
    *(int *)(pFVar9 + 8) = iVar4 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(uint *)(*(FScriptContainerElement **)&pFVar9->field_0x0 + (longlong)iVar4 * 4) = uVar11;
    local_f8.Count = local_f8.Count + 1;
    if (local_e0.Count == local_e0.Pages.ArrayNum << 5) {
      iVar4 = local_e0.Pages.ArrayNum;
      if (local_e0.Pages.ArrayNum == local_e0.Pages.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_e0,&local_e0.Pages.ArrayMax);
      }
      local_e0.Pages.ArrayNum = iVar4 + 1;
      lVar8 = (longlong)iVar4 * 0x10;
      *(undefined8 *)&local_e0.Pages.AllocatorInstance.Data[lVar8].field_0x0 = 0;
      *(undefined4 *)(local_e0.Pages.AllocatorInstance.Data + lVar8 + 8) = 0;
      *(int *)(local_e0.Pages.AllocatorInstance.Data + lVar8 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_e0.Pages.AllocatorInstance.Data + lVar8),0,
                 (int *)(local_e0.Pages.AllocatorInstance.Data + lVar8 + 0xc));
    }
    uVar5 = (int)(local_e0.Count + (local_e0.Count >> 0x1f & 0x1fU)) >> 5;
    uVar6 = 0;
    if ((int)uVar5 < local_e0.Pages.ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = local_e0.Pages.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
    iVar4 = *(int *)(pFVar9 + 8);
    if (iVar4 == *(int *)(pFVar9 + 0xc)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
    }
    *(int *)(pFVar9 + 8) = iVar4 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(uint *)(*(FScriptContainerElement **)&pFVar9->field_0x0 + (longlong)iVar4 * 4) = uVar11;
    uVar11 = uVar11 + 1;
    local_e0.Count = local_e0.Count + 1;
  } while ((int)uVar11 < 0x20);
  bVar3 = TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator==
                    (&local_f8,&local_e0);
  if (!bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_b8,0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f8.Count == local_f8.Pages.ArrayNum << 5) {
    iVar4 = local_f8.Pages.ArrayNum;
    if (local_f8.Pages.ArrayNum == local_f8.Pages.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&local_f8,&local_f8.Pages.ArrayMax);
    }
    local_f8.Pages.ArrayNum = iVar4 + 1;
    pFVar9 = local_f8.Pages.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(FScriptContainerElement **)&pFVar9->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar9 + 8) = 0;
    *(int *)(pFVar9 + 0xc) = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x20,(ForAnyElementType *)pFVar9,0,(int *)(pFVar9 + 0xc));
  }
  uVar6 = (int)(local_f8.Count + (local_f8.Count >> 0x1f & 0x1fU)) >> 5;
  uVar11 = 0;
  if ((int)uVar6 < local_f8.Pages.ArrayNum) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9 = local_f8.Pages.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
  iVar4 = *(int *)(pFVar9 + 8);
  if (iVar4 == *(int *)(pFVar9 + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
  }
  *(int *)(pFVar9 + 8) = iVar4 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar9->field_0x0 + (longlong)iVar4 * 4) = 0;
  local_f8.Count = local_f8.Count + 1;
  if ((local_f8.Pages.ArrayNum & 0x7ffffffU) != 2) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_e0.Pages.ArrayNum & 0x7ffffffU) != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_98,L"Condition failed");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator==
                    (&local_f8,&local_e0);
  if (bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Condition failed");
    (*pcVar2)(pFVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Pop(&local_f8,Default);
  if ((local_f8.Pages.ArrayNum & 0x7ffffffU) != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Condition failed");
    (*pcVar2)(pFVar1,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if ((local_e0.Pages.ArrayNum & 0x7ffffffU) != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator==
                    (&local_f8,&local_e0);
  if (!bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_f8.Count == local_f8.Pages.ArrayNum << 5) {
    iVar4 = local_f8.Pages.ArrayNum;
    if (local_f8.Pages.ArrayNum == local_f8.Pages.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&local_f8,&local_f8.Pages.ArrayMax);
    }
    local_f8.Pages.ArrayNum = iVar4 + 1;
    pFVar9 = local_f8.Pages.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(FScriptContainerElement **)&pFVar9->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar9 + 8) = 0;
    *(int *)(pFVar9 + 0xc) = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x20,(ForAnyElementType *)pFVar9,0,(int *)(pFVar9 + 0xc));
  }
  uVar11 = (int)(local_f8.Count + (local_f8.Count >> 0x1f & 0x1fU)) >> 5;
  if ((int)uVar11 < local_f8.Pages.ArrayNum) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9 = local_f8.Pages.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
  iVar4 = *(int *)(pFVar9 + 8);
  if (iVar4 == *(int *)(pFVar9 + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
  }
  *(int *)(pFVar9 + 8) = iVar4 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar9->field_0x0 + (longlong)iVar4 * 4) = 0;
  local_f8.Count = local_f8.Count + 1;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Pop(&local_f8,No);
  if ((local_f8.Pages.ArrayNum & 0x7ffffffU) != 2) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((local_e0.Pages.ArrayNum & 0x7ffffffU) != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator==
                    (&local_f8,&local_e0);
  if (!bVar3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Condition failed");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_e0.Pages.AllocatorInstance.Data,local_e0.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_e0.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_e0.Pages.AllocatorInstance.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_f8.Pages.AllocatorInstance.Data,local_f8.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_f8.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_f8.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0x42)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

