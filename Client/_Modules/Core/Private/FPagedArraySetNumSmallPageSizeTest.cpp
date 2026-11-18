// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad7ba0

EAutomationTestFlags __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::GetTestFlags
          (FPagedArraySetNumSmallPageSizeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad7bb0

bool __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::IsStressTest
          (FPagedArraySetNumSmallPageSizeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad7bc0

uint __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::GetRequiredDeviceNum
          (FPagedArraySetNumSmallPageSizeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad7bd0

FString * __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::GetTestSourceFileName
          (FPagedArraySetNumSmallPageSizeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad7c00

int __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::GetTestSourceFileLine
          (FPagedArraySetNumSmallPageSizeTest *this)

{
  return 0x28a;
}

// GetTests @ 141ad7c10

/* WARNING: Removing unreachable block (ram,0x000141ad7d8e) */

void __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::GetTests
          (FPagedArraySetNumSmallPageSizeTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad7db0

bool __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::RunTest
          (FPagedArraySetNumSmallPageSizeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad7de0

FString * __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::GetBeautifiedTestName
          (FPagedArraySetNumSmallPageSizeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArraySetNumSmallPageSizeTest @ 141b259f0

FPagedArraySetNumSmallPageSizeTest * __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::FPagedArraySetNumSmallPageSizeTest
          (FPagedArraySetNumSmallPageSizeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArraySetNumSmallPageSizeTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TPagedArray::SetNum small page size");
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

// TestBody @ 141b97920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
PagedArray::FPagedArraySetNumSmallPageSizeTest::TestBody
          (FPagedArraySetNumSmallPageSizeTest *this,FString *param_1)

{
  int *piVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FAutomationTestFramework *pFVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_c8;
  int local_b0 [2];
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_c8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Pages.ArrayNum = 0;
  local_c8.Pages.ArrayMax = 0;
  local_c8.Count = 0;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum(&local_c8,0xf,Default);
  if (local_c8.Count != 0xf) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_c8.Pages.ArrayNum != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_98,L"Condition failed");
    (*pcVar3)(pFVar2,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (local_c8.Count == 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Condition failed");
    (*pcVar3)(pFVar2,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  FVar4.Data = local_c8.Pages.AllocatorInstance.Data;
  iVar14 = (local_c8.Count >> 0x1f & 3U) + local_c8.Count;
  uVar10 = local_c8.Count & 0x80000003;
  iVar8 = 0;
  iVar13 = 0;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
    iVar8 = 0;
    iVar13 = 0;
  }
  do {
    uVar15 = 0;
    iVar12 = iVar13;
    do {
      uVar9 = 0;
      if ((iVar8 == iVar14 >> 2) && (uVar15 == uVar10)) {
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum(&local_c8,0x18,Default);
        if (local_c8.Count != 0x18) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar2 = pFVar6->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_78,L"Condition failed");
          (*pcVar3)(pFVar2,&local_78,0);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        if (local_c8.Pages.ArrayNum != 6) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar2 = pFVar6->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_68,L"Condition failed");
          (*pcVar3)(pFVar2,&local_68,0);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        uVar16 = uVar9;
        if (local_c8.Count == 0) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar2 = pFVar6->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_58,L"Condition failed");
          (*pcVar3)(pFVar2,&local_58,0);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        do {
          uVar10 = (uint)uVar9;
          if ((local_c8.Count <= (int)uVar10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < Count)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                                 ,0x33c,L"Parameter index %d exceeds container size %d"), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar7 = (uint)(uVar9 >> 2);
          uVar15 = 0;
          if ((int)uVar7 < local_c8.Pages.ArrayNum) {
            uVar15 = ~uVar7 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = local_c8.Pages.AllocatorInstance.Data + (uVar9 >> 2) * 0x10;
          uVar7 = uVar10 & 3;
          uVar15 = 0;
          if ((int)uVar7 < *(int *)(pFVar11 + 8)) {
            uVar15 = ~uVar7 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)&pFVar11->field_0x0 + (ulonglong)uVar7 * 4) != (int)uVar16) {
            pFVar6 = FAutomationTestFramework::Get();
            pFVar2 = pFVar6->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_48,L"Condition failed");
            (*pcVar3)(pFVar2,&local_48,0);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          uVar9 = (ulonglong)(uVar10 + 1);
          uVar16 = (ulonglong)((int)uVar16 + 1);
        } while ((int)(uVar10 + 1) < 0xf);
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_c8.Pages.AllocatorInstance.Data,local_c8.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_c8.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_c8.Pages.AllocatorInstance.Data);
        }
        if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
             TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
           (TTestToken<int>::DestructorCalls != 0x27)) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar2 = pFVar6->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_38,L"Condition failed");
          (*pcVar3)(pFVar2,&local_38,0);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        return;
      }
      uVar7 = 0;
      if ((int)uVar15 < *(int *)(FVar4.Data + (longlong)iVar8 * 0x10 + 8)) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
      iVar13 = iVar12 + 1;
      piVar1 = (int *)(*(longlong *)&FVar4.Data[(longlong)iVar8 * 0x10].field_0x0 +
                      (longlong)(int)uVar15 * 4);
      if ((local_b0 == piVar1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3577702131160842175>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                             ,0x41,"&Other != this"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *piVar1 = iVar12;
      uVar15 = uVar15 + 1;
      TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
      TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
      iVar12 = iVar13;
    } while (uVar15 != 4);
    iVar8 = iVar8 + 1;
  } while( true );
}

