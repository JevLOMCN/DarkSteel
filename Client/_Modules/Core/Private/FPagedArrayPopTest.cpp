// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad97e0

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayPopTest::GetTestFlags(FPagedArrayPopTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad9850

bool __thiscall PagedArray::FPagedArrayPopTest::IsStressTest(FPagedArrayPopTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad9890

uint __thiscall PagedArray::FPagedArrayPopTest::GetRequiredDeviceNum(FPagedArrayPopTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad98a0

FString * __thiscall
PagedArray::FPagedArrayPopTest::GetTestSourceFileName
          (FPagedArrayPopTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad98d0

int __thiscall PagedArray::FPagedArrayPopTest::GetTestSourceFileLine(FPagedArrayPopTest *this)

{
  return 800;
}

// GetTests @ 141ad98e0

/* WARNING: Removing unreachable block (ram,0x000141ad9a5e) */

void __thiscall
PagedArray::FPagedArrayPopTest::GetTests
          (FPagedArrayPopTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad9b30

bool __thiscall PagedArray::FPagedArrayPopTest::RunTest(FPagedArrayPopTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad9b70

FString * __thiscall
PagedArray::FPagedArrayPopTest::GetBeautifiedTestName
          (FPagedArrayPopTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayPopTest @ 141b249a0

FPagedArrayPopTest * __thiscall
PagedArray::FPagedArrayPopTest::FPagedArrayPopTest(FPagedArrayPopTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayPopTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Pop");
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

// TestBody @ 141b939d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall PagedArray::FPagedArrayPopTest::TestBody(FPagedArrayPopTest *this,FString *param_1)

{
  int *piVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FAutomationTestFramework *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_98 [2];
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_50;
  
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_50.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Pages.ArrayNum = 0;
  local_50.Pages.ArrayMax = 0;
  local_50.Count = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,(ForAnyElementType *)&local_50,&local_50.Pages.ArrayMax);
  pFVar11 = local_50.Pages.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  local_50.Pages.ArrayNum = iVar6 + 1;
  *(FScriptContainerElement **)&pFVar11->field_0x0 = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar11 + 8) = 0;
  *(int *)(pFVar11 + 0xc) = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x20,(ForAnyElementType *)pFVar11,0,(int *)(pFVar11 + 0xc));
  uVar7 = (int)(local_50.Count + (local_50.Count >> 0x1f & 0x1fU)) >> 5;
  uVar10 = 0;
  if ((int)uVar7 < local_50.Pages.ArrayNum) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar11 = local_50.Pages.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
  iVar6 = *(int *)(pFVar11 + 8);
  if (iVar6 == *(int *)(pFVar11 + 0xc)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)(pFVar11 + 8) = iVar6 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar6 * 4) = 0;
  local_50.Count = local_50.Count + 1;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Pop(&local_50,Default);
  if (local_50.Count != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar3)(pFVar2,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_50,0x20,Default);
  FVar4.Data = local_50.Pages.AllocatorInstance.Data;
  iVar14 = (local_50.Count >> 0x1f & 0x1fU) + local_50.Count;
  uVar10 = local_50.Count & 0x8000001f;
  iVar6 = 0;
  iVar13 = 0;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
    iVar6 = 0;
    iVar13 = 0;
  }
  do {
    uVar7 = 0;
    iVar12 = iVar13;
    do {
      if ((iVar6 == iVar14 >> 5) && (uVar7 == uVar10)) {
        if (local_50.Count == local_50.Pages.ArrayNum << 5) {
          iVar6 = local_50.Pages.ArrayNum;
          if (local_50.Pages.ArrayNum == local_50.Pages.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)&local_50,&local_50.Pages.ArrayMax);
          }
          local_50.Pages.ArrayNum = iVar6 + 1;
          pFVar11 = local_50.Pages.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
          *(FScriptContainerElement **)&pFVar11->field_0x0 = (FScriptContainerElement *)0x0;
          *(undefined4 *)(pFVar11 + 8) = 0;
          *(int *)(pFVar11 + 0xc) = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0x20,(ForAnyElementType *)pFVar11,0,(int *)(pFVar11 + 0xc));
        }
        uVar7 = (int)(local_50.Count + (local_50.Count >> 0x1f & 0x1fU)) >> 5;
        uVar10 = 0;
        if ((int)uVar7 < local_50.Pages.ArrayNum) {
          uVar10 = ~uVar7 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = local_50.Pages.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        iVar6 = *(int *)(pFVar11 + 8);
        if (iVar6 == *(int *)(pFVar11 + 0xc)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
        }
        *(int *)(pFVar11 + 8) = iVar6 + 1;
        TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
        *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar6 * 4) = 0;
        local_50.Count = local_50.Count + 1;
        TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Pop(&local_50,Default);
        if (local_50.Count != 0x20) {
          pFVar9 = FAutomationTestFramework::Get();
          pFVar2 = pFVar9->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_80,L"Condition failed");
          (*pcVar3)(pFVar2,&local_80,0);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        FVar4.Data = local_50.Pages.AllocatorInstance.Data;
        iVar14 = local_50.Count + (local_50.Count >> 0x1f & 0x1fU);
        uVar10 = local_50.Count & 0x8000001f;
        iVar6 = 0;
        iVar13 = 0;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          iVar6 = 0;
          iVar13 = 0;
        }
        do {
          uVar7 = 0;
          iVar12 = iVar6;
          do {
            if ((iVar13 == iVar14 >> 5) && (uVar7 == uVar10)) {
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_50.Pages.AllocatorInstance.Data,local_50.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_50.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_50.Pages.AllocatorInstance.Data);
              }
              if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
                   TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0)
                 || (TTestToken<int>::DestructorCalls != 0x42)) {
                pFVar9 = FAutomationTestFramework::Get();
                pFVar2 = pFVar9->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_60,L"Condition failed");
                (*pcVar3)(pFVar2,&local_60,0);
                if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60.Data.AllocatorInstance.Data);
                }
              }
              return;
            }
            uVar8 = 0;
            if ((int)uVar7 < *(int *)(FVar4.Data + (longlong)iVar13 * 0x10 + 8)) {
              uVar8 = ~uVar7 >> 0x1f;
            }
            if ((uVar8 == 0) &&
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
            iVar6 = iVar12 + 1;
            if (*(int *)(*(longlong *)&FVar4.Data[(longlong)iVar13 * 0x10].field_0x0 +
                        (longlong)(int)uVar7 * 4) != iVar12) {
              pFVar9 = FAutomationTestFramework::Get();
              pFVar2 = pFVar9->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_70,L"Condition failed");
              (*pcVar3)(pFVar2,&local_70,0);
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
            }
            uVar7 = uVar7 + 1;
            iVar12 = iVar6;
          } while (uVar7 != 0x20);
          iVar13 = iVar13 + 1;
        } while( true );
      }
      uVar8 = 0;
      if ((int)uVar7 < *(int *)(FVar4.Data + (longlong)iVar6 * 0x10 + 8)) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
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
      piVar1 = (int *)(*(longlong *)&FVar4.Data[(longlong)iVar6 * 0x10].field_0x0 +
                      (longlong)(int)uVar7 * 4);
      if ((local_98 == piVar1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3577702131160842175>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                             ,0x41,"&Other != this"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *piVar1 = iVar12;
      uVar7 = uVar7 + 1;
      TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
      TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
      iVar12 = iVar13;
    } while (uVar7 != 0x20);
    iVar6 = iVar6 + 1;
  } while( true );
}

