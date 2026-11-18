// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad8de0

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::GetTestFlags(FPagedArrayRemoveAtSwapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad8df0

bool __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::IsStressTest(FPagedArrayRemoveAtSwapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad8e00

uint __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::GetRequiredDeviceNum(FPagedArrayRemoveAtSwapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad8e10

FString * __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::GetTestSourceFileName
          (FPagedArrayRemoveAtSwapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad8e40

int __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::GetTestSourceFileLine(FPagedArrayRemoveAtSwapTest *this)

{
  return 0x2e0;
}

// GetTests @ 141ad8e50

/* WARNING: Removing unreachable block (ram,0x000141ad8fce) */

void __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::GetTests
          (FPagedArrayRemoveAtSwapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad8ff0

bool __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::RunTest(FPagedArrayRemoveAtSwapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad9020

FString * __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::GetBeautifiedTestName
          (FPagedArrayRemoveAtSwapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayRemoveAtSwapTest @ 141b24b70

FPagedArrayRemoveAtSwapTest * __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::FPagedArrayRemoveAtSwapTest
          (FPagedArrayRemoveAtSwapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayRemoveAtSwapTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::RemoveAtSwap");
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

// TestBody @ 141b93f90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
PagedArray::FPagedArrayRemoveAtSwapTest::TestBody
          (FPagedArrayRemoveAtSwapTest *this,FString *param_1)

{
  int *piVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  float fVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  FAutomationTestFramework *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_f8;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_e0;
  int local_c8;
  undefined1 local_c4 [4];
  int local_c0;
  undefined1 local_bc [4];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
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
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_f8,0x20,Default);
  FVar5.Data = local_f8.Pages.AllocatorInstance.Data;
  iVar14 = 0;
  iVar12 = 0;
  iVar16 = (local_f8.Count >> 0x1f & 0x1fU) + local_f8.Count;
  uVar11 = local_f8.Count & 0x8000001f;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
  }
  do {
    uVar17 = 0;
    iVar15 = iVar14;
    do {
      fVar4 = __real_38000100;
      if ((iVar12 == iVar16 >> 5) && (uVar10 = local_f8.Count, uVar17 == uVar11)) {
        do {
          local_f8.Count = uVar10;
          if ((int)uVar10 < 2) {
            TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::RemoveAtSwap
                      (&local_f8,0,No);
            uVar11 = local_f8.Pages.ArrayNum;
            if ((local_f8.Pages.ArrayNum & 0x7ffffffU) != 1) {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar2 = pFVar8->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_98,L"Condition failed");
              (*pcVar3)(pFVar2,&local_98,0);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              uVar11 = local_f8.Pages.ArrayNum;
            }
            if (local_f8.Count == uVar11 << 5) {
              if (uVar11 == local_f8.Pages.ArrayMax) {
                uVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)&local_f8,&local_f8.Pages.ArrayMax);
              }
              local_f8.Pages.ArrayNum = uVar11 + 1;
              pFVar13 = local_f8.Pages.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
              *(FScriptContainerElement **)&pFVar13->field_0x0 = (FScriptContainerElement *)0x0;
              *(undefined4 *)(pFVar13 + 8) = 0;
              *(int *)(pFVar13 + 0xc) = 0;
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0x20,(ForAnyElementType *)pFVar13,0,(int *)(pFVar13 + 0xc));
              uVar11 = local_f8.Pages.ArrayNum;
            }
            uVar10 = (int)(local_f8.Count + (local_f8.Count >> 0x1f & 0x1fU)) >> 5;
            uVar17 = 0;
            if ((int)uVar10 < (int)uVar11) {
              uVar17 = ~uVar10 >> 0x1f;
            }
            if ((uVar17 == 0) &&
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
            pFVar13 = local_f8.Pages.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
            iVar12 = *(int *)(pFVar13 + 8);
            if (iVar12 == *(int *)(pFVar13 + 0xc)) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
            }
            *(int *)(pFVar13 + 8) = iVar12 + 1;
            TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
            *(undefined4 *)(*(FScriptContainerElement **)&pFVar13->field_0x0 + (longlong)iVar12 * 4)
                 = 0;
            local_f8.Count = local_f8.Count + 1;
            TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::RemoveAtSwap
                      (&local_f8,0,Default);
            if ((local_f8.Pages._8_8_ & 0x7ffffff) != 0) {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar2 = pFVar8->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_88,L"Condition failed");
              (*pcVar3)(pFVar2,&local_88,0);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                       local_f8.Pages.AllocatorInstance.Data,local_f8.Pages.ArrayNum);
            if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                local_f8.Pages.AllocatorInstance.Data !=
                (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_f8.Pages.AllocatorInstance.Data);
            }
            if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
                 TTestToken<int>::ConstructorCalls + TTestToken<int>::CopyConstructorCalls != 0) ||
               (TTestToken<int>::DestructorCalls != 0x60)) {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar2 = pFVar8->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_78,L"Condition failed");
              (*pcVar3)(pFVar2,&local_78,0);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
            }
            TTestToken<int>::ConstructorCalls = 0;
            TTestToken<int>::DestructorCalls = 0;
            TTestToken<int>::CopyConstructorCalls = 0;
            TTestToken<int>::MoveConstructorCalls = 0;
            TTestToken<int>::CopyAssignmentCalls = 0;
            TTestToken<int>::MoveAssignmentCalls = 0;
            local_e0.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e0.Pages.ArrayNum = 0;
            local_e0.Pages.ArrayMax = 0;
            local_e0.Count = 0;
            TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum
                      (&local_e0,0x61,Default);
            FVar5.Data = local_e0.Pages.AllocatorInstance.Data;
            iVar16 = (local_e0.Count >> 0x1f & 0x1fU) + local_e0.Count;
            uVar11 = local_e0.Count & 0x8000001f;
            iVar12 = 0;
            iVar14 = 0;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
              iVar12 = 0;
              iVar14 = 0;
            }
            do {
              uVar17 = 0;
              iVar15 = iVar14;
              do {
                if ((iVar12 == iVar16 >> 5) && (uVar10 = local_e0.Count, uVar17 == uVar11)) {
                  while( true ) {
                    local_e0.Count = uVar10;
                    if ((int)uVar10 < 2) {
                      TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::RemoveAtSwap
                                (&local_e0,0,Default);
                      DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                                ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                                 local_e0.Pages.AllocatorInstance.Data,local_e0.Pages.ArrayNum);
                      if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                          local_e0.Pages.AllocatorInstance.Data !=
                          (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                        FMemory::Free(local_e0.Pages.AllocatorInstance.Data);
                      }
                      if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls
                           ) + TTestToken<int>::ConstructorCalls +
                           TTestToken<int>::CopyConstructorCalls != 0) ||
                         (TTestToken<int>::DestructorCalls != 0x122)) {
                        pFVar8 = FAutomationTestFramework::Get();
                        pFVar2 = pFVar8->CurrentTest;
                        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                        ::FString::FString(local_48,L"Condition failed");
                        (*pcVar3)(pFVar2,local_48,0);
                        if (local_48[0].Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
                        }
                      }
                      return;
                    }
                    if ((int)uVar10 < 1) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = rand();
                      uVar17 = (uint)((float)(uVar11 & 0x7fff) * (float)(int)uVar10 * fVar4);
                      uVar11 = uVar10 - 1;
                      if ((int)uVar17 < (int)(uVar10 - 1)) {
                        uVar11 = uVar17;
                      }
                    }
                    if ((local_e0.Count < 1) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < Count)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                                           ,0x33c,L"Parameter index %d exceeds container size %d"),
                       bVar6)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    uVar9 = (int)(local_e0.Count - 1U) >> 0x1f & 0x1f;
                    uVar7 = (local_e0.Count - 1U) + uVar9;
                    uVar9 = (uVar7 & 0x1f) - uVar9;
                    uVar7 = (int)uVar7 >> 5;
                    uVar17 = 0;
                    if ((int)uVar7 < local_e0.Pages.ArrayNum) {
                      uVar17 = ~uVar7 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
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
                    FVar5.Data = local_e0.Pages.AllocatorInstance.Data;
                    uVar17 = 0;
                    if ((int)uVar9 <
                        *(int *)(local_e0.Pages.AllocatorInstance.Data +
                                (longlong)(int)uVar7 * 0x10 + 8)) {
                      uVar17 = ~uVar9 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) break;
                    iVar12 = *(int *)(*(longlong *)
                                       &FVar5.Data[(longlong)(int)uVar7 * 0x10].field_0x0 +
                                     (longlong)(int)uVar9 * 4);
                    if (((undefined1 *)
                         (*(longlong *)&FVar5.Data[(longlong)(int)uVar7 * 0x10].field_0x0 +
                         (longlong)(int)uVar9 * 4) == local_bc) &&
                       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<_3577702131160842202>,false,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                                           ,0x26,"&Other != this"), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    TTestToken<int>::CopyConstructorCalls =
                         TTestToken<int>::CopyConstructorCalls + 1;
                    TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::RemoveAtSwap
                              (&local_e0,uVar11,Default);
                    if (uVar10 != local_e0.Count + 1U) {
                      pFVar8 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar8->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_68,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_68,0);
                      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_68.Data.AllocatorInstance.Data);
                      }
                    }
                    if ((int)uVar11 < local_e0.Count) {
                      uVar17 = 0;
                      if ((int)uVar11 < local_e0.Count) {
                        uVar17 = ~uVar11 >> 0x1f;
                      }
                      if ((uVar17 == 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < Count)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                                             ,0x33c,L"Parameter index %d exceeds container size %d")
                         , bVar6)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      uVar10 = (int)uVar11 >> 0x1f & 0x1f;
                      uVar11 = uVar11 + uVar10;
                      uVar10 = (uVar11 & 0x1f) - uVar10;
                      uVar11 = (int)uVar11 >> 5;
                      uVar17 = 0;
                      if ((int)uVar11 < local_e0.Pages.ArrayNum) {
                        uVar17 = ~uVar11 >> 0x1f;
                      }
                      if ((uVar17 == 0) &&
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
                      FVar5.Data = local_e0.Pages.AllocatorInstance.Data;
                      uVar17 = 0;
                      if ((int)uVar10 <
                          *(int *)(local_e0.Pages.AllocatorInstance.Data +
                                  (longlong)(int)uVar11 * 0x10 + 8)) {
                        uVar17 = ~uVar10 >> 0x1f;
                      }
                      if ((uVar17 == 0) &&
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
                      if (*(int *)(*(longlong *)&FVar5.Data[(longlong)(int)uVar11 * 0x10].field_0x0
                                  + (longlong)(int)uVar10 * 4) != iVar12) {
                        pFVar8 = FAutomationTestFramework::Get();
                        pFVar2 = pFVar8->CurrentTest;
                        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                        ::FString::FString(&local_58,L"Condition failed");
                        (*pcVar3)(pFVar2,&local_58,0);
                        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_58.Data.AllocatorInstance.Data);
                        }
                      }
                    }
                    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
                    uVar10 = local_e0.Count;
                  }
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar10 = 0;
                if ((int)uVar17 < *(int *)(FVar5.Data + (longlong)iVar12 * 0x10 + 8)) {
                  uVar10 = ~uVar17 >> 0x1f;
                }
                if ((uVar10 == 0) &&
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
                TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
                iVar14 = iVar15 + 1;
                piVar1 = (int *)(*(longlong *)&FVar5.Data[(longlong)iVar12 * 0x10].field_0x0 +
                                (longlong)(int)uVar17 * 4);
                if ((&local_c0 == piVar1) &&
                   (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_3577702131160842175>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                                       ,0x41,"&Other != this"), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar17 = uVar17 + 1;
                *piVar1 = iVar15;
                TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
                TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
                iVar15 = iVar14;
              } while (uVar17 != 0x20);
              iVar12 = iVar12 + 1;
            } while( true );
          }
          if ((int)uVar10 < 1) {
            uVar11 = 0;
          }
          else {
            uVar11 = rand();
            uVar17 = (uint)((float)(uVar11 & 0x7fff) * (float)(int)uVar10 * fVar4);
            uVar11 = uVar10 - 1;
            if ((int)uVar17 < (int)(uVar10 - 1)) {
              uVar11 = uVar17;
            }
          }
          if ((local_f8.Count < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < Count)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                                 ,0x33c,L"Parameter index %d exceeds container size %d"), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = (int)(local_f8.Count - 1U) >> 0x1f & 0x1f;
          uVar7 = (local_f8.Count - 1U) + uVar9;
          uVar9 = (uVar7 & 0x1f) - uVar9;
          uVar7 = (int)uVar7 >> 5;
          uVar17 = 0;
          if ((int)uVar7 < local_f8.Pages.ArrayNum) {
            uVar17 = ~uVar7 >> 0x1f;
          }
          if ((uVar17 == 0) &&
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
          FVar5.Data = local_f8.Pages.AllocatorInstance.Data;
          uVar17 = 0;
          if ((int)uVar9 <
              *(int *)(local_f8.Pages.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10 + 8)) {
            uVar17 = ~uVar9 >> 0x1f;
          }
          if ((uVar17 == 0) &&
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
          iVar12 = *(int *)(*(longlong *)&FVar5.Data[(longlong)(int)uVar7 * 0x10].field_0x0 +
                           (longlong)(int)uVar9 * 4);
          if (((undefined1 *)
               (*(longlong *)&FVar5.Data[(longlong)(int)uVar7 * 0x10].field_0x0 +
               (longlong)(int)uVar9 * 4) == local_c4) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3577702131160842202>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                                 ,0x26,"&Other != this"), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TTestToken<int>::CopyConstructorCalls = TTestToken<int>::CopyConstructorCalls + 1;
          TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::RemoveAtSwap
                    (&local_f8,uVar11,Default);
          if (uVar10 != local_f8.Count + 1U) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar2 = pFVar8->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_b8,L"Condition failed");
            (*pcVar3)(pFVar2,&local_b8);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
          }
          if ((int)uVar11 < local_f8.Count) {
            uVar17 = 0;
            if ((int)uVar11 < local_f8.Count) {
              uVar17 = ~uVar11 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < Count)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                                   ,0x33c,L"Parameter index %d exceeds container size %d"), bVar6))
            {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar10 = (int)uVar11 >> 0x1f & 0x1f;
            uVar11 = uVar11 + uVar10;
            uVar10 = (uVar11 & 0x1f) - uVar10;
            uVar11 = (int)uVar11 >> 5;
            uVar17 = 0;
            if ((int)uVar11 < local_f8.Pages.ArrayNum) {
              uVar17 = ~uVar11 >> 0x1f;
            }
            if ((uVar17 == 0) &&
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
            FVar5.Data = local_f8.Pages.AllocatorInstance.Data;
            uVar17 = 0;
            if ((int)uVar10 <
                *(int *)(local_f8.Pages.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10 + 8))
            {
              uVar17 = ~uVar10 >> 0x1f;
            }
            if ((uVar17 == 0) &&
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
            if (*(int *)(*(longlong *)&FVar5.Data[(longlong)(int)uVar11 * 0x10].field_0x0 +
                        (longlong)(int)uVar10 * 4) != iVar12) {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar2 = pFVar8->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_a8,L"Condition failed");
              (*pcVar3)(pFVar2);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
          }
          TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
          uVar10 = local_f8.Count;
        } while( true );
      }
      uVar10 = 0;
      if ((int)uVar17 < *(int *)(FVar5.Data + (longlong)iVar12 * 0x10 + 8)) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
      iVar14 = iVar15 + 1;
      piVar1 = (int *)(*(longlong *)&FVar5.Data[(longlong)iVar12 * 0x10].field_0x0 +
                      (longlong)(int)uVar17 * 4);
      if ((&local_c8 == piVar1) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3577702131160842175>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                             ,0x41,"&Other != this"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar17 = uVar17 + 1;
      *piVar1 = iVar15;
      TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
      TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
      iVar15 = iVar14;
    } while (uVar17 != 0x20);
    iVar12 = iVar12 + 1;
  } while( true );
}

