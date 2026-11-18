// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad4430

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayIndexingTest::GetTestFlags(FPagedArrayIndexingTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad4440

bool __thiscall PagedArray::FPagedArrayIndexingTest::IsStressTest(FPagedArrayIndexingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad4450

uint __thiscall
PagedArray::FPagedArrayIndexingTest::GetRequiredDeviceNum(FPagedArrayIndexingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad4460

FString * __thiscall
PagedArray::FPagedArrayIndexingTest::GetTestSourceFileName
          (FPagedArrayIndexingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad4490

int __thiscall
PagedArray::FPagedArrayIndexingTest::GetTestSourceFileLine(FPagedArrayIndexingTest *this)

{
  return 0x1aa;
}

// GetTests @ 141ad4670

/* WARNING: Removing unreachable block (ram,0x000141ad47ee) */

void __thiscall
PagedArray::FPagedArrayIndexingTest::GetTests
          (FPagedArrayIndexingTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad4840

bool __thiscall
PagedArray::FPagedArrayIndexingTest::RunTest(FPagedArrayIndexingTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad4870

FString * __thiscall
PagedArray::FPagedArrayIndexingTest::GetBeautifiedTestName
          (FPagedArrayIndexingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayIndexingTest @ 141b23ec0

FPagedArrayIndexingTest * __thiscall
PagedArray::FPagedArrayIndexingTest::FPagedArrayIndexingTest
          (FPagedArrayIndexingTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayIndexingTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Indexing");
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

// TestBody @ 141b90740

void __thiscall
PagedArray::FPagedArrayIndexingTest::TestBody(FPagedArrayIndexingTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FAutomationTestFramework *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_28;
  
  uVar15 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_28.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Pages.ArrayNum = 0;
  local_28.Pages.ArrayMax = 0;
  local_28.Count = 0;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reserve(&local_28,0x20);
  uVar14 = uVar15;
  if ((local_28.Pages.ArrayNum & 0x7ffffffU) != 1) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Condition failed");
    (*pcVar2)(pFVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  do {
    if (local_28.Count == local_28.Pages.ArrayNum << 5) {
      iVar4 = local_28.Pages.ArrayNum;
      if (local_28.Pages.ArrayNum == local_28.Pages.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_28,&local_28.Pages.ArrayMax);
      }
      local_28.Pages.ArrayNum = iVar4 + 1;
      lVar10 = (longlong)iVar4 * 0x10;
      *(FScriptContainerElement **)&local_28.Pages.AllocatorInstance.Data[lVar10].field_0x0 =
           (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_28.Pages.AllocatorInstance.Data + lVar10 + 8) = 0;
      *(int *)(local_28.Pages.AllocatorInstance.Data + lVar10 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_28.Pages.AllocatorInstance.Data + lVar10),0,
                 (int *)(local_28.Pages.AllocatorInstance.Data + lVar10 + 0xc));
    }
    uVar5 = (int)(local_28.Count + (local_28.Count >> 0x1f & 0x1fU)) >> 5;
    uVar11 = 0;
    if ((int)uVar5 < local_28.Pages.ArrayNum) {
      uVar11 = ~uVar5 >> 0x1f;
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
    pFVar13 = local_28.Pages.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
    iVar4 = *(int *)(pFVar13 + 8);
    if (iVar4 == *(int *)(pFVar13 + 0xc)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
    }
    *(int *)(pFVar13 + 8) = iVar4 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(uint *)(*(FScriptContainerElement **)&pFVar13->field_0x0 + (longlong)iVar4 * 4) = uVar14;
    local_28.Count = local_28.Count + 1;
    if ((local_28.Pages.ArrayNum & 0x7ffffffU) != 1) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_78,L"Condition failed");
      (*pcVar2)(pFVar1,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x20);
  uVar11 = 0;
  uVar5 = 0;
  uVar14 = uVar15;
  if (0 < local_28.Count) {
    do {
      uVar8 = uVar5;
      if ((int)uVar14 < local_28.Count) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar12 = (int)uVar14 >> 0x1f & 0x1f;
      uVar6 = uVar14 + uVar12;
      uVar12 = (uVar6 & 0x1f) - uVar12;
      uVar6 = (int)uVar6 >> 5;
      uVar8 = uVar5;
      if ((int)uVar6 < local_28.Pages.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar13 = local_28.Pages.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
      uVar8 = uVar11;
      if ((int)uVar12 < *(int *)(pFVar13 + 8)) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(*(longlong *)&pFVar13->field_0x0 + (longlong)(int)uVar12 * 4) != uVar14) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_68,L"Condition failed");
        (*pcVar2)(pFVar1,&local_68,0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < local_28.Count);
  }
  iVar4 = 0x20;
  do {
    if (local_28.Count == local_28.Pages.ArrayNum << 5) {
      iVar7 = local_28.Pages.ArrayNum;
      if (local_28.Pages.ArrayNum == local_28.Pages.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_28,&local_28.Pages.ArrayMax);
      }
      local_28.Pages.ArrayNum = iVar7 + 1;
      lVar10 = (longlong)iVar7 * 0x10;
      *(undefined8 *)&local_28.Pages.AllocatorInstance.Data[lVar10].field_0x0 = 0;
      *(undefined4 *)(local_28.Pages.AllocatorInstance.Data + lVar10 + 8) = 0;
      *(int *)(local_28.Pages.AllocatorInstance.Data + lVar10 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_28.Pages.AllocatorInstance.Data + lVar10),0,
                 (int *)(local_28.Pages.AllocatorInstance.Data + lVar10 + 0xc));
    }
    uVar8 = (int)(local_28.Count + (local_28.Count >> 0x1f & 0x1fU)) >> 5;
    uVar14 = uVar11;
    if ((int)uVar8 < local_28.Pages.ArrayNum) {
      uVar14 = ~uVar8 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar13 = local_28.Pages.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    iVar7 = *(int *)(pFVar13 + 8);
    if (iVar7 == *(int *)(pFVar13 + 0xc)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
    }
    *(int *)(pFVar13 + 8) = iVar7 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(*(FScriptContainerElement **)&pFVar13->field_0x0 + (longlong)iVar7 * 4) = iVar4;
    local_28.Count = local_28.Count + 1;
    if ((local_28.Pages.ArrayNum & 0x7ffffffU) != 2) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_58,L"Condition failed");
      (*pcVar2)(pFVar1,&local_58,0);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x40);
  if (0 < local_28.Count) {
    do {
      uVar14 = uVar5;
      if ((int)uVar15 < local_28.Count) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = (int)uVar15 >> 0x1f & 0x1f;
      uVar8 = uVar15 + uVar6;
      uVar6 = (uVar8 & 0x1f) - uVar6;
      uVar8 = (int)uVar8 >> 5;
      uVar14 = uVar5;
      if ((int)uVar8 < local_28.Pages.ArrayNum) {
        uVar14 = ~uVar8 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar13 = local_28.Pages.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      uVar14 = uVar11;
      if ((int)uVar6 < *(int *)(pFVar13 + 8)) {
        uVar14 = ~uVar6 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(*(longlong *)&pFVar13->field_0x0 + (longlong)(int)uVar6 * 4) != uVar15) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_48,L"Condition failed");
        (*pcVar2)(pFVar1,&local_48,0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < local_28.Count);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_28.Pages.AllocatorInstance.Data,local_28.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_28.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_28.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0x40)) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

