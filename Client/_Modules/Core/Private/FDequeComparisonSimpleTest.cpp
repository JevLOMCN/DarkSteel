// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad3320

EAutomationTestFlags __thiscall
Deque::FDequeComparisonSimpleTest::GetTestFlags(FDequeComparisonSimpleTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad3340

bool __thiscall Deque::FDequeComparisonSimpleTest::IsStressTest(FDequeComparisonSimpleTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad3350

uint __thiscall
Deque::FDequeComparisonSimpleTest::GetRequiredDeviceNum(FDequeComparisonSimpleTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad3360

FString * __thiscall
Deque::FDequeComparisonSimpleTest::GetTestSourceFileName
          (FDequeComparisonSimpleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad3390

int __thiscall
Deque::FDequeComparisonSimpleTest::GetTestSourceFileLine(FDequeComparisonSimpleTest *this)

{
  return 0x291;
}

// GetTests @ 141ad3550

/* WARNING: Removing unreachable block (ram,0x000141ad36ce) */

void __thiscall
Deque::FDequeComparisonSimpleTest::GetTests
          (FDequeComparisonSimpleTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad37b0

bool __thiscall
Deque::FDequeComparisonSimpleTest::RunTest(FDequeComparisonSimpleTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad37e0

FString * __thiscall
Deque::FDequeComparisonSimpleTest::GetBeautifiedTestName
          (FDequeComparisonSimpleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeComparisonSimpleTest @ 141b1c200

FDequeComparisonSimpleTest * __thiscall
Deque::FDequeComparisonSimpleTest::FDequeComparisonSimpleTest
          (FDequeComparisonSimpleTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeComparisonSimpleTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TDeque::Comparison simple");
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
  ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
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

// TestBody @ 141b6b8b0

void __thiscall
Deque::FDequeComparisonSimpleTest::TestBody(FDequeComparisonSimpleTest *this,FString *param_1)

{
  longlong lVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  FAutomationTestFramework *pFVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  ForAnyElementType local_res18;
  FString local_68;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_58;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_40;
  
  iVar11 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_58.Storage.Data = (FScriptContainerElement *)0x0;
  local_40.Storage.Data = (FScriptContainerElement *)0x0;
  local_58.Capacity = 0;
  local_58.Count = 0;
  local_58.Head = 0;
  local_58.Tail = 0;
  local_40.Capacity = 0;
  local_40.Count = 0;
  local_40.Head = 0;
  local_40.Tail = 0;
  uVar4 = FMemory::QuantizeSize(0x10,0);
  iVar10 = local_58.Count;
  uVar14 = uVar4 >> 2 & 0xffffffff;
  if ((int)(uVar4 >> 2) < 4) {
    uVar14 = 0x7fffffff;
  }
  if (local_58.Count != 0) {
    if (local_58.Head < local_58.Tail) {
      if ((local_58.Head != 0) && (iVar9 = iVar11, 0 < local_58.Count)) {
        do {
          iVar7 = iVar10 - iVar9;
          if (local_58.Head < iVar7) {
            iVar7 = local_58.Head;
          }
          memmove(local_58.Storage.Data + (longlong)iVar9 * 4,
                  local_58.Storage.Data + ((longlong)local_58.Head + (longlong)iVar9) * 4,
                  (longlong)iVar7 << 2);
          iVar9 = iVar9 + iVar7;
        } while (iVar9 < iVar10);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,local_58.Tail,4);
      memmove(local_res18.Data,local_58.Storage.Data,(longlong)local_58.Tail << 2);
      iVar10 = local_58.Capacity - local_58.Head;
      if ((local_58.Head != 0) && (iVar9 = iVar11, 0 < iVar10)) {
        do {
          iVar7 = iVar10 - iVar9;
          if (local_58.Head < iVar10 - iVar9) {
            iVar7 = local_58.Head;
          }
          memmove(local_58.Storage.Data + (longlong)iVar9 * 4,
                  local_58.Storage.Data + ((longlong)local_58.Head + (longlong)iVar9) * 4,
                  (longlong)iVar7 << 2);
          iVar9 = iVar9 + iVar7;
        } while (iVar9 < iVar10);
      }
      memmove(local_58.Storage.Data + (longlong)iVar10 * 4,local_res18.Data,
              (longlong)local_58.Tail << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  uVar13 = (uint)uVar14;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&local_58.Storage,local_58.Count,uVar13,4);
  local_58.Tail = local_58.Count;
  local_58.Head = 0;
  local_58.Capacity = uVar13;
  if (local_40.Capacity < 4) {
    uVar4 = FMemory::QuantizeSize(0x10,0);
    iVar10 = local_40.Count;
    iVar9 = (int)(uVar4 >> 2);
    if (iVar9 < 4) {
      iVar9 = 0x7fffffff;
    }
    if (local_40.Count != 0) {
      if (local_40.Head < local_40.Tail) {
        if ((local_40.Head != 0) && (iVar7 = iVar11, 0 < local_40.Count)) {
          do {
            iVar8 = iVar10 - iVar7;
            if (local_40.Head < iVar8) {
              iVar8 = local_40.Head;
            }
            memmove(local_40.Storage.Data + (longlong)iVar7 * 4,
                    local_40.Storage.Data + ((longlong)local_40.Head + (longlong)iVar7) * 4,
                    (longlong)iVar8 << 2);
            iVar7 = iVar7 + iVar8;
          } while (iVar7 < iVar10);
        }
      }
      else {
        local_res18.Data = (FScriptContainerElement *)0x0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_res18,0,local_40.Tail,4);
        memmove(local_res18.Data,local_40.Storage.Data,(longlong)local_40.Tail << 2);
        iVar10 = local_40.Capacity - local_40.Head;
        if ((local_40.Head != 0) && (iVar7 = iVar11, 0 < iVar10)) {
          do {
            iVar8 = iVar10 - iVar7;
            if (local_40.Head < iVar10 - iVar7) {
              iVar8 = local_40.Head;
            }
            memmove(local_40.Storage.Data + (longlong)iVar7 * 4,
                    local_40.Storage.Data + ((longlong)local_40.Head + (longlong)iVar7) * 4,
                    (longlong)iVar8 << 2);
            iVar7 = iVar7 + iVar8;
          } while (iVar7 < iVar10);
        }
        memmove(local_40.Storage.Data + (longlong)iVar10 * 4,local_res18.Data,
                (longlong)local_40.Tail << 2);
        if (local_res18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_res18.Data);
        }
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_40.Storage,local_40.Count,iVar9,4);
    uVar14 = (ulonglong)(uint)local_58.Capacity;
    local_40.Tail = local_40.Count;
    local_40.Head = 0;
    local_40.Capacity = iVar9;
  }
  if ((int)uVar14 != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar14 = (ulonglong)(uint)local_58.Capacity;
  }
  do {
    if (local_58.Count == (int)uVar14) {
      iVar10 = local_58.Count + 1;
      uVar6 = (ulonglong)iVar10;
      if ((int)uVar14 == 0) {
        uVar14 = 4;
        if (4 < uVar6) {
          uVar14 = uVar6;
        }
      }
      else {
        uVar14 = (uVar6 * 3 >> 3) + 0x10 + uVar6;
      }
      uVar4 = FMemory::QuantizeSize(uVar14 * 4,0);
      iVar9 = (int)(uVar4 >> 2);
      if (iVar9 < iVar10) {
        iVar9 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_58,iVar9);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(local_58.Storage.Data + (longlong)local_58.Tail * 4) = iVar11;
    local_58.Tail = local_58.Tail + 1;
    if (local_58.Capacity <= local_58.Tail) {
      local_58.Tail = local_58.Tail - local_58.Capacity;
    }
    local_58.Count = local_58.Count + 1;
    if (local_40.Count == local_40.Capacity) {
      iVar10 = local_40.Count + 1;
      uVar14 = (ulonglong)iVar10;
      if (local_40.Capacity == 0) {
        uVar6 = 4;
        if (4 < uVar14) {
          uVar6 = uVar14;
        }
      }
      else {
        uVar6 = (uVar14 * 3 >> 3) + 0x10 + uVar14;
      }
      uVar4 = FMemory::QuantizeSize(uVar6 * 4,0);
      iVar9 = (int)(uVar4 >> 2);
      if (iVar9 < iVar10) {
        iVar9 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_40,iVar9);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(local_40.Storage.Data + (longlong)local_40.Tail * 4) = iVar11;
    local_40.Tail = local_40.Tail + 1;
    if (local_40.Capacity <= local_40.Tail) {
      local_40.Tail = local_40.Tail - local_40.Capacity;
    }
    local_40.Count = local_40.Count + 1;
    if (local_58.Capacity != 4) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_68,L"Condition failed");
      (*pcVar3)(pFVar2,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    uVar14 = (ulonglong)(uint)local_58.Capacity;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  if (local_58.Count == local_40.Count) {
    uVar14 = (ulonglong)local_58.Head;
    lVar1 = (longlong)(local_58.Head + local_58.Count) * 4;
    iVar10 = local_40.Head;
    if (local_58.Storage.Data + uVar14 * 4 != local_58.Storage.Data + lVar1) {
      do {
        iVar9 = (int)uVar14;
        uVar14 = (ulonglong)(iVar9 + 1U);
        iVar11 = iVar10;
        if (local_40.Capacity <= iVar10) {
          iVar11 = iVar10 - local_40.Capacity;
        }
        iVar7 = iVar9;
        if (local_58.Capacity <= iVar9) {
          iVar7 = iVar9 - local_58.Capacity;
        }
        if (*(int *)(local_58.Storage.Data + (longlong)iVar7 * 4) !=
            *(int *)(local_40.Storage.Data + (longlong)iVar11 * 4)) goto LAB_141b6bdd0;
        iVar10 = iVar10 + 1;
      } while ((longlong)(int)(iVar9 + 1U) * 4 != lVar1);
    }
  }
  else {
LAB_141b6bdd0:
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = local_40.Head;
  iVar11 = local_40.Capacity;
  FVar15.Data = local_40.Storage.Data;
  iVar10 = local_58.Head;
  uVar13 = local_58.Capacity;
  FVar12.Data = local_58.Storage.Data;
  if (local_40.Count != 0) {
    iVar7 = local_40.Count;
    if (local_40.Tail <= local_40.Head) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_40.Storage.Data,local_40.Tail);
      iVar7 = iVar11 - iVar9;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar15.Data + (longlong)iVar9 * 4),iVar7)
    ;
  }
  local_40.Count = 0;
  local_40.Head = 0;
  local_40.Tail = 0;
  if (iVar11 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40.Storage,0,0,4);
    local_40.Capacity = 0;
    FVar12.Data = local_58.Storage.Data;
    FVar15.Data = local_40.Storage.Data;
    iVar10 = local_58.Head;
    uVar13 = local_58.Capacity;
  }
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
    FVar12.Data = local_58.Storage.Data;
    iVar10 = local_58.Head;
    uVar13 = local_58.Capacity;
  }
  if (local_58.Count != 0) {
    iVar11 = local_58.Count;
    if (local_58.Tail <= iVar10) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar12.Data,local_58.Tail);
      iVar11 = uVar13 - iVar10;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)(FVar12.Data + (longlong)iVar10 * 4),iVar11);
  }
  local_58.Count = 0;
  local_58.Head = 0;
  local_58.Tail = 0;
  if (uVar13 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58.Storage,0,0,4);
    local_58.Capacity = 0;
    FVar12.Data = local_58.Storage.Data;
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 8)) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

