// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acb2b0

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::GetTestFlags
          (FPagedArrayReserveEmplaceSingleElementTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acb2d0

bool __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::IsStressTest
          (FPagedArrayReserveEmplaceSingleElementTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acb310

uint __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::GetRequiredDeviceNum
          (FPagedArrayReserveEmplaceSingleElementTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acb330

FString * __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::GetTestSourceFileName
          (FPagedArrayReserveEmplaceSingleElementTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acb360

int __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::GetTestSourceFileLine
          (FPagedArrayReserveEmplaceSingleElementTest *this)

{
  return 0x36;
}

// GetTests @ 141acb510

/* WARNING: Removing unreachable block (ram,0x000141acb68e) */

void __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::GetTests
          (FPagedArrayReserveEmplaceSingleElementTest *this,
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

// RunTest @ 141acb710

bool __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::RunTest
          (FPagedArrayReserveEmplaceSingleElementTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acb740

FString * __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::GetBeautifiedTestName
          (FPagedArrayReserveEmplaceSingleElementTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayReserveEmplaceSingleElementTest @ 141b24f10

FPagedArrayReserveEmplaceSingleElementTest * __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::FPagedArrayReserveEmplaceSingleElementTest
          (FPagedArrayReserveEmplaceSingleElementTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayReserveEmplaceSingleElementTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TPagedArray::Reserve Emplace single element"
                             );
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

// TestBody @ 141b951f0

void __thiscall
PagedArray::FPagedArrayReserveEmplaceSingleElementTest::TestBody
          (FPagedArrayReserveEmplaceSingleElementTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  FAutomationTestFramework *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  int local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_98 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,&local_a8,0,(int *)((longlong)&local_a0 + 4));
  if ((int)(uint)local_a0 < 1) {
    uVar9 = (ulonglong)(1 - (uint)local_a0);
    do {
      iVar4 = (uint)local_a0;
      if ((uint)local_a0 == local_a0._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
      }
      local_a0 = CONCAT44(local_a0._4_4_,iVar4 + 1);
      lVar6 = (longlong)iVar4 * 0x10;
      *(FScriptContainerElement **)&local_a8.Data[lVar6].field_0x0 = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_a8.Data + lVar6 + 8) = 0;
      *(int *)(local_a8.Data + lVar6 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_a8.Data + lVar6),0,
                 (int *)(local_a8.Data + lVar6 + 0xc));
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  iVar4 = (uint)local_a0;
  if (local_98 == (uint)local_a0 << 5) {
    if ((uint)local_a0 == local_a0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
    }
    local_a0 = CONCAT44(local_a0._4_4_,iVar4 + 1);
    pFVar10 = local_a8.Data + (longlong)iVar4 * 0x10;
    *(FScriptContainerElement **)&pFVar10->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar10 + 8) = 0;
    *(int *)(pFVar10 + 0xc) = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x20,(ForAnyElementType *)pFVar10,0,(int *)(pFVar10 + 0xc));
    iVar4 = (uint)local_a0;
  }
  uVar5 = (int)(local_98 + (local_98 >> 0x1f & 0x1fU)) >> 5;
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
  pFVar10 = local_a8.Data + (longlong)(int)uVar5 * 0x10;
  iVar4 = *(int *)(pFVar10 + 8);
  if (iVar4 == *(int *)(pFVar10 + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 0xc));
  }
  *(int *)(pFVar10 + 8) = iVar4 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar10->field_0x0 + (longlong)iVar4 * 4) = 0;
  local_98 = local_98 + 1;
  if ((int)((uint)local_a0 << 5) < 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar2)(pFVar1,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)local_a0 & 0x7ffffff) != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_80,L"Condition failed");
    (*pcVar2)(pFVar1,&local_80,0);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  if (local_98 != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_70,L"Condition failed");
    (*pcVar2)(pFVar1,&local_70,0);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if ((int)((uint)local_a0 * 0x20) < 0x20) {
    if (local_a0._4_4_ < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,&local_a8,(uint)local_a0,(int *)((longlong)&local_a0 + 4));
    }
    if ((int)(uint)local_a0 < 1) {
      uVar9 = (ulonglong)(1 - (uint)local_a0);
      do {
        iVar4 = (uint)local_a0;
        if ((uint)local_a0 == local_a0._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar4 + 1);
        lVar6 = (longlong)iVar4 * 0x10;
        *(undefined8 *)&local_a8.Data[lVar6].field_0x0 = 0;
        *(undefined4 *)(local_a8.Data + lVar6 + 8) = 0;
        *(int *)(local_a8.Data + lVar6 + 0xc) = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0x20,(ForAnyElementType *)(local_a8.Data + lVar6),0,
                   (int *)(local_a8.Data + lVar6 + 0xc));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (((uint)local_a0 & 0x7ffffff) != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_60,L"Condition failed");
    (*pcVar2)(pFVar1,&local_60,0);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if (local_98 != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_50,L"Condition failed");
    (*pcVar2)(pFVar1,&local_50,0);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if ((int)((uint)local_a0 * 0x20) < 0x21) {
    if (local_a0._4_4_ < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,2,&local_a8,(uint)local_a0,(int *)((longlong)&local_a0 + 4));
    }
    if ((int)(uint)local_a0 < 2) {
      uVar9 = (ulonglong)(2 - (uint)local_a0);
      do {
        iVar4 = (uint)local_a0;
        if ((uint)local_a0 == local_a0._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar4 + 1);
        lVar6 = (longlong)iVar4 * 0x10;
        *(undefined8 *)&local_a8.Data[lVar6].field_0x0 = 0;
        *(undefined4 *)(local_a8.Data + lVar6 + 8) = 0;
        *(int *)(local_a8.Data + lVar6 + 0xc) = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0x20,(ForAnyElementType *)(local_a8.Data + lVar6),0,
                   (int *)(local_a8.Data + lVar6 + 0xc));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (((uint)local_a0 & 0x7ffffff) != 2) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_40,L"Condition failed");
    (*pcVar2)(pFVar1,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_98 != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_30,L"Condition failed");
    (*pcVar2)(pFVar1,&local_30,0);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_a8.Data,(uint)local_a0);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_a8.Data !=
      (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 1)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_20,L"Condition failed");
    (*pcVar2)(pFVar1,&local_20,0);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

