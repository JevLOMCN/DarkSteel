// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acaa50

EAutomationTestFlags __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::GetTestFlags
          (FDequeEmplaceLastRangePastCapacityTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acaa60

bool __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::IsStressTest
          (FDequeEmplaceLastRangePastCapacityTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acaa70

uint __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::GetRequiredDeviceNum
          (FDequeEmplaceLastRangePastCapacityTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acaa80

FString * __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::GetTestSourceFileName
          (FDequeEmplaceLastRangePastCapacityTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acaab0

int __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::GetTestSourceFileLine
          (FDequeEmplaceLastRangePastCapacityTest *this)

{
  return 0x102;
}

// GetTests @ 141acaac0

/* WARNING: Removing unreachable block (ram,0x000141acac3e) */

void __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::GetTests
          (FDequeEmplaceLastRangePastCapacityTest *this,
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

// RunTest @ 141acac60

bool __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::RunTest
          (FDequeEmplaceLastRangePastCapacityTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acac90

FString * __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::GetBeautifiedTestName
          (FDequeEmplaceLastRangePastCapacityTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeEmplaceLastRangePastCapacityTest @ 141b1e640

FDequeEmplaceLastRangePastCapacityTest * __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::FDequeEmplaceLastRangePastCapacityTest
          (FDequeEmplaceLastRangePastCapacityTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeEmplaceLastRangePastCapacityTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::EmplaceLast range past capacity");
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

// TestBody @ 141b73ce0

void __thiscall
Deque::FDequeEmplaceLastRangePastCapacityTest::TestBody
          (FDequeEmplaceLastRangePastCapacityTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  ulong64 uVar4;
  FAutomationTestFramework *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  ForAnyElementType local_res18 [2];
  FString local_58;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_48;
  
  iVar12 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_48.Storage.Data = (FScriptContainerElement *)0x0;
  local_48.Capacity = 0;
  local_48.Count = 0;
  local_48.Head = 0;
  local_48.Tail = 0;
  uVar4 = FMemory::QuantizeSize(0x10,0);
  iVar9 = local_48.Count;
  iVar3 = (int)(uVar4 >> 2);
  if (iVar3 < 4) {
    iVar3 = 0x7fffffff;
  }
  if (local_48.Count != 0) {
    if (local_48.Head < local_48.Tail) {
      if ((local_48.Head != 0) && (iVar10 = iVar12, 0 < local_48.Count)) {
        do {
          iVar8 = iVar9 - iVar10;
          if (local_48.Head < iVar8) {
            iVar8 = local_48.Head;
          }
          memmove(local_48.Storage.Data + (longlong)iVar10 * 4,
                  local_48.Storage.Data + ((longlong)local_48.Head + (longlong)iVar10) * 4,
                  (longlong)iVar8 << 2);
          iVar10 = iVar10 + iVar8;
        } while (iVar10 < iVar9);
      }
    }
    else {
      local_res18[0].Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (local_res18,0,local_48.Tail,4);
      memmove(local_res18[0].Data,local_48.Storage.Data,(longlong)local_48.Tail << 2);
      iVar9 = local_48.Capacity - local_48.Head;
      if ((local_48.Head != 0) && (iVar10 = iVar12, 0 < iVar9)) {
        do {
          iVar8 = iVar9 - iVar10;
          if (local_48.Head < iVar9 - iVar10) {
            iVar8 = local_48.Head;
          }
          memmove(local_48.Storage.Data + (longlong)iVar10 * 4,
                  local_48.Storage.Data + ((longlong)local_48.Head + (longlong)iVar10) * 4,
                  (longlong)iVar8 << 2);
          iVar10 = iVar10 + iVar8;
        } while (iVar10 < iVar9);
      }
      memmove(local_48.Storage.Data + (longlong)iVar9 * 4,local_res18[0].Data,
              (longlong)local_48.Tail << 2);
      if (local_res18[0].Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18[0].Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&local_48.Storage,local_48.Count,iVar3,4);
  local_48.Tail = local_48.Count;
  local_48.Head = 0;
  local_48.Capacity = iVar3;
  if (iVar3 != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  bVar14 = local_48.Count == local_48.Capacity;
  if (local_48.Count < local_48.Capacity) {
    if (bVar14) {
      iVar9 = local_48.Count + 1;
      uVar6 = (ulonglong)iVar9;
      if (local_48.Capacity == 0) {
        uVar7 = 4;
        if (4 < uVar6) {
          uVar7 = uVar6;
        }
      }
      else {
        uVar7 = (uVar6 * 3 >> 3) + 0x10 + uVar6;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * 4,0);
      iVar3 = (int)(uVar4 >> 2);
      if (iVar3 < iVar9) {
        iVar3 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_48,iVar3);
    }
    do {
      *(undefined4 *)(local_48.Storage.Data + (longlong)local_48.Tail * 4) = 0;
      TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
      local_48.Tail = local_48.Tail + 1;
      if (local_48.Capacity <= local_48.Tail) {
        local_48.Tail = local_48.Tail - local_48.Capacity;
      }
      local_48.Count = local_48.Count + 1;
      bVar14 = local_48.Capacity == local_48.Count;
    } while (!bVar14 && local_48.Count <= local_48.Capacity);
  }
  if (!bVar14) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Capacity != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Count == local_48.Capacity) {
    iVar9 = local_48.Count + 1;
    uVar6 = (ulonglong)iVar9;
    if (local_48.Capacity == 0) {
      uVar7 = 4;
      if (4 < uVar6) {
        uVar7 = uVar6;
      }
    }
    else {
      uVar7 = (uVar6 * 3 >> 3) + 0x10 + uVar6;
    }
    uVar4 = FMemory::QuantizeSize(uVar7 * 4,0);
    iVar3 = local_48.Count;
    iVar10 = (int)(uVar4 >> 2);
    if (iVar10 < iVar9) {
      iVar10 = 0x7fffffff;
    }
    if (local_48.Count != 0) {
      if (local_48.Head < local_48.Tail) {
        if ((local_48.Head != 0) && (0 < local_48.Count)) {
          do {
            iVar9 = iVar3 - iVar12;
            if (local_48.Head < iVar9) {
              iVar9 = local_48.Head;
            }
            memmove(local_48.Storage.Data + (longlong)iVar12 * 4,
                    local_48.Storage.Data + ((longlong)local_48.Head + (longlong)iVar12) * 4,
                    (longlong)iVar9 << 2);
            iVar12 = iVar12 + iVar9;
          } while (iVar12 < iVar3);
        }
      }
      else {
        local_res18[0].Data = (FScriptContainerElement *)0x0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (local_res18,0,local_48.Tail,4);
        memmove(local_res18[0].Data,local_48.Storage.Data,(longlong)local_48.Tail << 2);
        iVar9 = local_48.Capacity - local_48.Head;
        if ((local_48.Head != 0) && (0 < iVar9)) {
          do {
            iVar3 = iVar9 - iVar12;
            if (local_48.Head < iVar9 - iVar12) {
              iVar3 = local_48.Head;
            }
            memmove(local_48.Storage.Data + (longlong)iVar12 * 4,
                    local_48.Storage.Data + ((longlong)local_48.Head + (longlong)iVar12) * 4,
                    (longlong)iVar3 << 2);
            iVar12 = iVar12 + iVar3;
          } while (iVar12 < iVar9);
        }
        memmove(local_48.Storage.Data + (longlong)iVar9 * 4,local_res18[0].Data,
                (longlong)local_48.Tail << 2);
        if (local_res18[0].Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_res18[0].Data);
        }
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_48.Storage,local_48.Count,iVar10,4);
    local_48.Tail = local_48.Count;
    local_48.Head = 0;
    local_48.Capacity = iVar10;
  }
  *(undefined4 *)(local_48.Storage.Data + (longlong)local_48.Tail * 4) = 0;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  local_48.Tail = local_48.Tail + 1;
  if (local_48.Capacity <= local_48.Tail) {
    local_48.Tail = local_48.Tail - local_48.Capacity;
  }
  local_48.Count = local_48.Count + 1;
  if (local_48.Capacity <= local_48.Count) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Capacity < 5) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = local_48.Head;
  iVar9 = local_48.Capacity;
  FVar13.Data = local_48.Storage.Data;
  if (local_48.Count != 0) {
    lVar11 = (longlong)local_48.Head;
    iVar12 = local_48.Count;
    if (local_48.Tail <= local_48.Head) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_48.Storage.Data,local_48.Tail);
      iVar12 = iVar9 - iVar3;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar13.Data + lVar11 * 4),iVar12);
  }
  local_48.Count = 0;
  local_48.Head = 0;
  local_48.Tail = 0;
  if (iVar9 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48.Storage,0,0,4);
    local_48.Capacity = 0;
    FVar13.Data = local_48.Storage.Data;
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 5)) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

