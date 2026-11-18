// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad7250

EAutomationTestFlags __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::GetTestFlags(FPagedArraySetNumAfterResetTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad7260

bool __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::IsStressTest(FPagedArraySetNumAfterResetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad7270

uint __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::GetRequiredDeviceNum
          (FPagedArraySetNumAfterResetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad7280

FString * __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::GetTestSourceFileName
          (FPagedArraySetNumAfterResetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad72b0

int __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::GetTestSourceFileLine
          (FPagedArraySetNumAfterResetTest *this)

{
  return 0x25b;
}

// GetTests @ 141ad72c0

/* WARNING: Removing unreachable block (ram,0x000141ad743e) */

void __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::GetTests
          (FPagedArraySetNumAfterResetTest *this,
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

// RunTest @ 141ad7460

bool __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::RunTest
          (FPagedArraySetNumAfterResetTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad7490

FString * __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::GetBeautifiedTestName
          (FPagedArraySetNumAfterResetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArraySetNumAfterResetTest @ 141b25820

FPagedArraySetNumAfterResetTest * __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::FPagedArraySetNumAfterResetTest
          (FPagedArraySetNumAfterResetTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArraySetNumAfterResetTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::SetNum after Reset")
  ;
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

// TestBody @ 141b97330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
PagedArray::FPagedArraySetNumAfterResetTest::TestBody
          (FPagedArraySetNumAfterResetTest *this,FString *param_1)

{
  undefined4 *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  FAutomationTestFramework *pFVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_d8;
  undefined4 local_c0 [2];
  FString local_b8;
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
  local_d8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Pages.ArrayNum = 0;
  local_d8.Pages.ArrayMax = 0;
  local_d8.Count = 0;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum(&local_d8,0xc,Default);
  if (local_d8.Count != 0xc) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_b8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_b8,0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_d8.Pages.ArrayNum != 3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_d8);
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum(&local_d8,0xc,Default);
  if (local_d8.Count != 0xc) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_98,L"Condition failed");
    (*pcVar3)(pFVar2,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (local_d8.Pages.ArrayNum != 3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Condition failed");
    (*pcVar3)(pFVar2,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  FVar4.Data = local_d8.Pages.AllocatorInstance.Data;
  iVar10 = (local_d8.Count >> 0x1f & 3U) + local_d8.Count;
  uVar12 = local_d8.Count & 0x80000003;
  iVar11 = 0;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
    iVar11 = 0;
  }
  do {
    uVar9 = 0;
    do {
      FVar5.Data = local_d8.Pages.AllocatorInstance.Data;
      if ((iVar11 == iVar10 >> 2) && (uVar9 == uVar12)) {
        iVar10 = 0;
        iVar11 = (local_d8.Count >> 0x1f & 3U) + local_d8.Count;
        uVar12 = local_d8.Count & 0x80000003;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
        }
        do {
          uVar9 = 0;
          do {
            if ((iVar10 == iVar11 >> 2) && (uVar9 == uVar12)) {
              TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_d8);
              TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum
                        (&local_d8,0x14,Default);
              if (local_d8.Count != 0x14) {
                pFVar8 = FAutomationTestFramework::Get();
                pFVar2 = pFVar8->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_68,L"Condition failed");
                (*pcVar3)(pFVar2,&local_68,0);
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
              }
              if (local_d8.Pages.ArrayNum != 5) {
                pFVar8 = FAutomationTestFramework::Get();
                pFVar2 = pFVar8->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_58,L"Condition failed");
                (*pcVar3)(pFVar2,&local_58,0);
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
              }
              FVar4.Data = local_d8.Pages.AllocatorInstance.Data;
              iVar10 = (local_d8.Count >> 0x1f & 3U) + local_d8.Count;
              uVar12 = local_d8.Count & 0x80000003;
              iVar11 = 0;
              if ((int)uVar12 < 0) {
                uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
                iVar11 = 0;
              }
              do {
                uVar9 = 0;
                do {
                  if ((iVar11 == iVar10 >> 2) && (uVar9 == uVar12)) {
                    DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                               local_d8.Pages.AllocatorInstance.Data,local_d8.Pages.ArrayNum);
                    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                        local_d8.Pages.AllocatorInstance.Data !=
                        (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_d8.Pages.AllocatorInstance.Data);
                    }
                    if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls)
                         + TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls
                         != 0) || (TTestToken<int>::DestructorCalls != 0x38)) {
                      pFVar8 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar8->CurrentTest;
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
                  if ((int)uVar9 < *(int *)(FVar4.Data + (longlong)iVar11 * 0x10 + 8)) {
                    uVar7 = ~uVar9 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (*(int *)(*(longlong *)&FVar4.Data[(longlong)iVar11 * 0x10].field_0x0 +
                              (longlong)(int)uVar9 * 4) != 0) {
                    pFVar8 = FAutomationTestFramework::Get();
                    pFVar2 = pFVar8->CurrentTest;
                    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                    ::FString::FString(&local_48,L"Condition failed");
                    (*pcVar3)(pFVar2,&local_48);
                    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_48.Data.AllocatorInstance.Data);
                    }
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != 4);
                iVar11 = iVar11 + 1;
              } while( true );
            }
            uVar7 = 0;
            if ((int)uVar9 < *(int *)(FVar5.Data + (longlong)iVar10 * 0x10 + 8)) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
            puVar1 = (undefined4 *)
                     (*(longlong *)&FVar5.Data[(longlong)iVar10 * 0x10].field_0x0 +
                     (longlong)(int)uVar9 * 4);
            if ((local_c0 == puVar1) &&
               (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_3577702131160842175>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                                   ,0x41,"&Other != this"), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar9 = uVar9 + 1;
            *puVar1 = 0xd;
            TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
            TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
          } while (uVar9 != 4);
          iVar10 = iVar10 + 1;
        } while( true );
      }
      uVar7 = 0;
      if ((int)uVar9 < *(int *)(FVar4.Data + (longlong)iVar11 * 0x10 + 8)) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(*(longlong *)&FVar4.Data[(longlong)iVar11 * 0x10].field_0x0 +
                  (longlong)(int)uVar9 * 4) != 0) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_78,L"Condition failed");
        (*pcVar3)(pFVar2,&local_78,0);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 4);
    iVar11 = iVar11 + 1;
  } while( true );
}

