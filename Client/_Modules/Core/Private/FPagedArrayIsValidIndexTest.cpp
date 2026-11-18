// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad4100

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayIsValidIndexTest::GetTestFlags(FPagedArrayIsValidIndexTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad4110

bool __thiscall
PagedArray::FPagedArrayIsValidIndexTest::IsStressTest(FPagedArrayIsValidIndexTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad4120

uint __thiscall
PagedArray::FPagedArrayIsValidIndexTest::GetRequiredDeviceNum(FPagedArrayIsValidIndexTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad4130

FString * __thiscall
PagedArray::FPagedArrayIsValidIndexTest::GetTestSourceFileName
          (FPagedArrayIsValidIndexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad4160

int __thiscall
PagedArray::FPagedArrayIsValidIndexTest::GetTestSourceFileLine(FPagedArrayIsValidIndexTest *this)

{
  return 0x182;
}

// GetTests @ 141ad4170

/* WARNING: Removing unreachable block (ram,0x000141ad42ee) */

void __thiscall
PagedArray::FPagedArrayIsValidIndexTest::GetTests
          (FPagedArrayIsValidIndexTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad4310

bool __thiscall
PagedArray::FPagedArrayIsValidIndexTest::RunTest(FPagedArrayIsValidIndexTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad4340

FString * __thiscall
PagedArray::FPagedArrayIsValidIndexTest::GetBeautifiedTestName
          (FPagedArrayIsValidIndexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayIsValidIndexTest @ 141b24090

FPagedArrayIsValidIndexTest * __thiscall
PagedArray::FPagedArrayIsValidIndexTest::FPagedArrayIsValidIndexTest
          (FPagedArrayIsValidIndexTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayIsValidIndexTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::IsValidIndex");
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

// TestBody @ 141b90df0

void __thiscall
PagedArray::FPagedArrayIsValidIndexTest::TestBody
          (FPagedArrayIsValidIndexTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FAutomationTestFramework *pFVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  iVar10 = 0;
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
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reserve(&local_c8,0x20);
  if (0 < local_c8.Count) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_b0,0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  if (0x20 < local_c8.Count) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a0,0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  uVar11 = local_c8.Pages._8_8_ & 0xffffffff;
  iVar12 = iVar10;
  do {
    iVar4 = (int)uVar11;
    if (local_c8.Count == iVar4 * 0x20) {
      if (iVar4 == local_c8.Pages.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_c8,&local_c8.Pages.ArrayMax);
      }
      local_c8.Pages.ArrayNum = iVar4 + 1;
      lVar7 = (longlong)iVar4 * 0x10;
      *(undefined8 *)&local_c8.Pages.AllocatorInstance.Data[lVar7].field_0x0 = 0;
      *(undefined4 *)(local_c8.Pages.AllocatorInstance.Data + lVar7 + 8) = 0;
      *(int *)(local_c8.Pages.AllocatorInstance.Data + lVar7 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_c8.Pages.AllocatorInstance.Data + lVar7),0,
                 (int *)(local_c8.Pages.AllocatorInstance.Data + lVar7 + 0xc));
      iVar4 = local_c8.Pages.ArrayNum;
    }
    uVar5 = (int)(local_c8.Count + (local_c8.Count >> 0x1f & 0x1fU)) >> 5;
    uVar8 = 0;
    if ((int)uVar5 < iVar4) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar9 = local_c8.Pages.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
    iVar4 = *(int *)(pFVar9 + 8);
    if (iVar4 == *(int *)(pFVar9 + 0xc)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
    }
    *(int *)(pFVar9 + 8) = iVar4 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(*(FScriptContainerElement **)&pFVar9->field_0x0 + (longlong)iVar4 * 4) = iVar12;
    local_c8.Count = local_c8.Count + 1;
    if ((local_c8.Pages.ArrayNum & 0x7ffffffU) != 1) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_90,L"Condition failed");
      (*pcVar2)(pFVar1,&local_90,0);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    uVar11 = (ulonglong)(uint)local_c8.Pages.ArrayNum;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x20);
  iVar12 = iVar10;
  if (0 < local_c8.Count) {
    do {
      if ((iVar12 < 0) || (local_c8.Count <= iVar12)) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar1 = pFVar6->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_80,L"Condition failed");
        (*pcVar2)(pFVar1,&local_80,0);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < local_c8.Count);
  }
  if ((-1 < local_c8.Count + 1) && (local_c8.Count + 1 < local_c8.Count)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_70,L"Condition failed");
    (*pcVar2)(pFVar1,&local_70,0);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reserve(&local_c8,0x40);
  if (0x40 < local_c8.Count) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_60,L"Condition failed");
    (*pcVar2)(pFVar1,&local_60,0);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  iVar12 = 0x20;
  do {
    if (local_c8.Count == local_c8.Pages.ArrayNum << 5) {
      iVar4 = local_c8.Pages.ArrayNum;
      if (local_c8.Pages.ArrayNum == local_c8.Pages.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_c8,&local_c8.Pages.ArrayMax);
      }
      local_c8.Pages.ArrayNum = iVar4 + 1;
      lVar7 = (longlong)iVar4 * 0x10;
      *(undefined8 *)&local_c8.Pages.AllocatorInstance.Data[lVar7].field_0x0 = 0;
      *(undefined4 *)(local_c8.Pages.AllocatorInstance.Data + lVar7 + 8) = 0;
      *(int *)(local_c8.Pages.AllocatorInstance.Data + lVar7 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_c8.Pages.AllocatorInstance.Data + lVar7),0,
                 (int *)(local_c8.Pages.AllocatorInstance.Data + lVar7 + 0xc));
    }
    uVar5 = (int)(local_c8.Count + (local_c8.Count >> 0x1f & 0x1fU)) >> 5;
    uVar8 = 0;
    if ((int)uVar5 < local_c8.Pages.ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar9 = local_c8.Pages.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
    iVar4 = *(int *)(pFVar9 + 8);
    if (iVar4 == *(int *)(pFVar9 + 0xc)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
    }
    *(int *)(pFVar9 + 8) = iVar4 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(*(FScriptContainerElement **)&pFVar9->field_0x0 + (longlong)iVar4 * 4) = iVar12;
    local_c8.Count = local_c8.Count + 1;
    if ((local_c8.Pages.ArrayNum & 0x7ffffffU) != 2) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_50,L"Condition failed");
      (*pcVar2)(pFVar1,&local_50,0);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 0x40);
  if (0 < local_c8.Count) {
    do {
      if ((iVar10 < 0) || (local_c8.Count <= iVar10)) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar1 = pFVar6->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_40,L"Condition failed");
        (*pcVar2)(pFVar1,&local_40,0);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_c8.Count);
  }
  if ((-1 < local_c8.Count + 1) && (local_c8.Count + 1 < local_c8.Count)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_30,L"Condition failed");
    (*pcVar2)(pFVar1,&local_30,0);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_c8.Pages.AllocatorInstance.Data,local_c8.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_c8.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_c8.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0x40)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_20,L"Condition failed");
    (*pcVar2)(pFVar1,&local_20,0);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

