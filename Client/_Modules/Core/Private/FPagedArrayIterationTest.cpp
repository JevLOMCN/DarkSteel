// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad5510

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayIterationTest::GetTestFlags(FPagedArrayIterationTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad5520

bool __thiscall PagedArray::FPagedArrayIterationTest::IsStressTest(FPagedArrayIterationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad5530

uint __thiscall
PagedArray::FPagedArrayIterationTest::GetRequiredDeviceNum(FPagedArrayIterationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad5540

FString * __thiscall
PagedArray::FPagedArrayIterationTest::GetTestSourceFileName
          (FPagedArrayIterationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad5570

int __thiscall
PagedArray::FPagedArrayIterationTest::GetTestSourceFileLine(FPagedArrayIterationTest *this)

{
  return 0x1ca;
}

// GetTests @ 141ad55e0

/* WARNING: Removing unreachable block (ram,0x000141ad575e) */

void __thiscall
PagedArray::FPagedArrayIterationTest::GetTests
          (FPagedArrayIterationTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad5790

bool __thiscall
PagedArray::FPagedArrayIterationTest::RunTest(FPagedArrayIterationTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad57c0

FString * __thiscall
PagedArray::FPagedArrayIterationTest::GetBeautifiedTestName
          (FPagedArrayIterationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayIterationTest @ 141b24260

FPagedArrayIterationTest * __thiscall
PagedArray::FPagedArrayIterationTest::FPagedArrayIterationTest
          (FPagedArrayIterationTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayIterationTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Iteration");
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

// TestBody @ 141b913e0

void __thiscall
PagedArray::FPagedArrayIterationTest::TestBody(FPagedArrayIterationTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_58;
  
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_58.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Pages.ArrayNum = 0;
  local_58.Pages.ArrayMax = 0;
  local_58.Count = 0;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reserve(&local_58,0x20);
  if ((local_58.Pages.ArrayNum & 0x7ffffffU) != 1) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_b8,0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  iVar12 = 0;
  uVar5 = local_58.Pages.ArrayNum;
  do {
    if (local_58.Count == uVar5 * 0x20) {
      if (uVar5 == local_58.Pages.ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_58,&local_58.Pages.ArrayMax);
      }
      local_58.Pages.ArrayNum = uVar5 + 1;
      lVar10 = (longlong)(int)uVar5 * 0x10;
      *(undefined8 *)&local_58.Pages.AllocatorInstance.Data[lVar10].field_0x0 = 0;
      *(undefined4 *)(local_58.Pages.AllocatorInstance.Data + lVar10 + 8) = 0;
      *(int *)(local_58.Pages.AllocatorInstance.Data + lVar10 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_58.Pages.AllocatorInstance.Data + lVar10),0,
                 (int *)(local_58.Pages.AllocatorInstance.Data + lVar10 + 0xc));
      uVar5 = local_58.Pages.ArrayNum;
    }
    uVar6 = (int)(local_58.Count + (local_58.Count >> 0x1f & 0x1fU)) >> 5;
    uVar13 = 0;
    if ((int)uVar6 < (int)uVar5) {
      uVar13 = ~uVar6 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar11 = local_58.Pages.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    iVar7 = *(int *)(pFVar11 + 8);
    if (iVar7 == *(int *)(pFVar11 + 0xc)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
    }
    *(int *)(pFVar11 + 8) = iVar7 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = iVar12;
    local_58.Count = local_58.Count + 1;
    if ((local_58.Pages.ArrayNum & 0x7ffffffU) != 1) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Condition failed");
      (*pcVar2)(pFVar1,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    FVar3.Data = local_58.Pages.AllocatorInstance.Data;
    iVar12 = iVar12 + 1;
    uVar5 = local_58.Pages.ArrayNum;
  } while (iVar12 < 0x20);
  iVar8 = local_58.Count + (local_58.Count >> 0x1f & 0x1fU);
  uVar5 = local_58.Count & 0x8000001f;
  iVar12 = 0;
  iVar7 = 0;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
    iVar12 = 0;
    iVar7 = 0;
  }
  do {
    uVar13 = 0;
    iVar14 = iVar12;
    do {
      if ((iVar7 == iVar8 >> 5) && (uVar13 == uVar5)) {
        iVar12 = 0x20;
        uVar5 = local_58.Pages.ArrayNum;
        while( true ) {
          if (local_58.Count == uVar5 * 0x20) {
            if (uVar5 == local_58.Pages.ArrayMax) {
              uVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,(ForAnyElementType *)&local_58,&local_58.Pages.ArrayMax);
            }
            local_58.Pages.ArrayNum = uVar5 + 1;
            lVar10 = (longlong)(int)uVar5 * 0x10;
            *(undefined8 *)&local_58.Pages.AllocatorInstance.Data[lVar10].field_0x0 = 0;
            *(undefined4 *)(local_58.Pages.AllocatorInstance.Data + lVar10 + 8) = 0;
            *(int *)(local_58.Pages.AllocatorInstance.Data + lVar10 + 0xc) = 0;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0x20,(ForAnyElementType *)
                                (local_58.Pages.AllocatorInstance.Data + lVar10),0,
                       (int *)(local_58.Pages.AllocatorInstance.Data + lVar10 + 0xc));
            uVar5 = local_58.Pages.ArrayNum;
          }
          uVar6 = (int)(local_58.Count + (local_58.Count >> 0x1f & 0x1fU)) >> 5;
          uVar13 = 0;
          if ((int)uVar6 < (int)uVar5) {
            uVar13 = ~uVar6 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) break;
          pFVar11 = local_58.Pages.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
          iVar7 = *(int *)(pFVar11 + 8);
          if (iVar7 == *(int *)(pFVar11 + 0xc)) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
          }
          *(int *)(pFVar11 + 8) = iVar7 + 1;
          TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
          *(int *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar7 * 4) = iVar12;
          local_58.Count = local_58.Count + 1;
          uVar5 = local_58.Pages.ArrayNum;
          if ((local_58.Pages.ArrayNum & 0x7ffffffU) != 2) {
            pFVar9 = FAutomationTestFramework::Get();
            pFVar1 = pFVar9->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_88,L"Condition failed");
            (*pcVar2)(pFVar1,&local_88,0);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            uVar5 = local_58.Pages.ArrayNum;
          }
          FVar3.Data = local_58.Pages.AllocatorInstance.Data;
          uVar13 = 0;
          iVar12 = iVar12 + 1;
          if (iVar12 == 0x40) {
            iVar12 = local_58.Count + (local_58.Count >> 0x1f & 0x1fU);
            uVar16 = local_58.Count & 0x8000001f;
            uVar5 = uVar13;
            uVar6 = uVar13;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
            }
            while( true ) {
              if ((uVar6 == iVar12 >> 5) && (uVar5 == uVar16)) {
                DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                          ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                           local_58.Pages.AllocatorInstance.Data,local_58.Pages.ArrayNum);
                if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                    local_58.Pages.AllocatorInstance.Data !=
                    (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                  FMemory::Free(local_58.Pages.AllocatorInstance.Data);
                }
                if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
                     TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0)
                   || (TTestToken<int>::DestructorCalls != 0x40)) {
                  pFVar9 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar9->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_68,L"Condition failed");
                  (*pcVar2)(pFVar1,&local_68,0);
                  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_68.Data.AllocatorInstance.Data);
                  }
                }
                return;
              }
              uVar15 = 0;
              if ((int)uVar5 < *(int *)(FVar3.Data + (longlong)(int)uVar6 * 0x10 + 8)) {
                uVar15 = ~uVar5 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) break;
              uVar15 = uVar13 + 1;
              if (*(uint *)(*(longlong *)&FVar3.Data[(longlong)(int)uVar6 * 0x10].field_0x0 +
                           (longlong)(int)uVar5 * 4) != uVar13) {
                pFVar9 = FAutomationTestFramework::Get();
                pFVar1 = pFVar9->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_78,L"Condition failed");
                (*pcVar2)(pFVar1,&local_78,0);
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
              }
              uVar5 = uVar5 + 1;
              uVar13 = uVar15;
              if (uVar5 == 0x20) {
                uVar5 = 0;
                uVar6 = uVar6 + 1;
              }
            }
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar13 < *(int *)(FVar3.Data + (longlong)iVar7 * 0x10 + 8)) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar12 = iVar14 + 1;
      if (*(int *)(*(longlong *)&FVar3.Data[(longlong)iVar7 * 0x10].field_0x0 +
                  (longlong)(int)uVar13 * 4) != iVar14) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_98,L"Condition failed");
        (*pcVar2)(pFVar1,&local_98,0);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      uVar13 = uVar13 + 1;
      iVar14 = iVar12;
    } while (uVar13 != 0x20);
    iVar7 = iVar7 + 1;
  } while( true );
}

