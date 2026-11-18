// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad1b40

EAutomationTestFlags __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::GetTestFlags
          (FDequeTryPopFirstWithReallocationTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad1b50

bool __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::IsStressTest
          (FDequeTryPopFirstWithReallocationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad1b60

uint __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::GetRequiredDeviceNum
          (FDequeTryPopFirstWithReallocationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad1b70

FString * __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::GetTestSourceFileName
          (FDequeTryPopFirstWithReallocationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad1ba0

int __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::GetTestSourceFileLine
          (FDequeTryPopFirstWithReallocationTest *this)

{
  return 0x246;
}

// GetTests @ 141ad1bb0

/* WARNING: Removing unreachable block (ram,0x000141ad1d2e) */

void __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::GetTests
          (FDequeTryPopFirstWithReallocationTest *this,
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

// RunTest @ 141ad1d50

bool __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::RunTest
          (FDequeTryPopFirstWithReallocationTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad1d80

FString * __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::GetBeautifiedTestName
          (FDequeTryPopFirstWithReallocationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeTryPopFirstWithReallocationTest @ 141b20e20

FDequeTryPopFirstWithReallocationTest * __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::FDequeTryPopFirstWithReallocationTest
          (FDequeTryPopFirstWithReallocationTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeTryPopFirstWithReallocationTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::TryPopFirst with reallocation");
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

// TestBody @ 141b7ba30

void __thiscall
Deque::FDequeTryPopFirstWithReallocationTest::TestBody
          (FDequeTryPopFirstWithReallocationTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ForAnyElementType local_res18 [2];
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_a8;
  FString local_90;
  FScriptContainerElement local_80 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar14 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_a8.Storage.Data = (FScriptContainerElement *)0x0;
  local_a8.Capacity = 0;
  local_a8.Count = 0;
  local_a8.Head = 0;
  local_a8.Tail = 0;
  uVar7 = FMemory::QuantizeSize(0x10,0);
  iVar13 = local_a8.Count;
  iVar6 = (int)(uVar7 >> 2);
  if (iVar6 < 4) {
    iVar6 = 0x7fffffff;
  }
  if (local_a8.Count != 0) {
    if (local_a8.Head < local_a8.Tail) {
      if ((local_a8.Head != 0) && (iVar12 = iVar14, 0 < local_a8.Count)) {
        do {
          iVar11 = iVar13 - iVar12;
          if (local_a8.Head < iVar11) {
            iVar11 = local_a8.Head;
          }
          memmove(local_a8.Storage.Data + (longlong)iVar12 * 4,
                  local_a8.Storage.Data + ((longlong)local_a8.Head + (longlong)iVar12) * 4,
                  (longlong)iVar11 << 2);
          iVar12 = iVar12 + iVar11;
        } while (iVar12 < iVar13);
      }
    }
    else {
      local_res18[0].Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (local_res18,0,local_a8.Tail,4);
      memmove(local_res18[0].Data,local_a8.Storage.Data,(longlong)local_a8.Tail << 2);
      iVar13 = local_a8.Capacity - local_a8.Head;
      if ((local_a8.Head != 0) && (iVar12 = iVar14, 0 < iVar13)) {
        do {
          iVar11 = iVar13 - iVar12;
          if (local_a8.Head < iVar13 - iVar12) {
            iVar11 = local_a8.Head;
          }
          memmove(local_a8.Storage.Data + (longlong)iVar12 * 4,
                  local_a8.Storage.Data + ((longlong)local_a8.Head + (longlong)iVar12) * 4,
                  (longlong)iVar11 << 2);
          iVar12 = iVar12 + iVar11;
        } while (iVar12 < iVar13);
      }
      memmove(local_a8.Storage.Data + (longlong)iVar13 * 4,local_res18[0].Data,
              (longlong)local_a8.Tail << 2);
      if (local_res18[0].Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18[0].Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&local_a8.Storage,local_a8.Count,iVar6,4);
  local_a8.Tail = local_a8.Count;
  local_a8.Head = 0;
  local_a8.Capacity = iVar6;
  if (iVar6 != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Condition failed");
    (*pcVar3)(pFVar2,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_a8.Count == local_a8.Capacity) {
    iVar13 = local_a8.Count + 1;
    uVar9 = (ulonglong)iVar13;
    if (local_a8.Capacity == 0) {
      uVar10 = 4;
      if (4 < uVar9) {
        uVar10 = uVar9;
      }
    }
    else {
      uVar10 = (uVar9 * 3 >> 3) + 0x10 + uVar9;
    }
    uVar7 = FMemory::QuantizeSize(uVar10 * 4,0);
    iVar6 = (int)(uVar7 >> 2);
    if (iVar6 < iVar13) {
      iVar6 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_a8,iVar6);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_a8.Storage.Data + (longlong)local_a8.Tail * 4) = 0;
  local_a8.Tail = local_a8.Tail + 1;
  if (local_a8.Capacity <= local_a8.Tail) {
    local_a8.Tail = local_a8.Tail - local_a8.Capacity;
  }
  local_a8.Count = local_a8.Count + 1;
  if (local_a8.Capacity != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar3)(pFVar2,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_a8.Count == local_a8.Capacity) {
    iVar13 = local_a8.Count + 1;
    uVar9 = (ulonglong)iVar13;
    if (local_a8.Capacity == 0) {
      uVar10 = 4;
      if (4 < uVar9) {
        uVar10 = uVar9;
      }
    }
    else {
      uVar10 = (uVar9 * 3 >> 3) + 0x10 + uVar9;
    }
    uVar7 = FMemory::QuantizeSize(uVar10 * 4,0);
    iVar6 = (int)(uVar7 >> 2);
    if (iVar6 < iVar13) {
      iVar6 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_a8,iVar6);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_a8.Storage.Data + (longlong)local_a8.Tail * 4) = 1;
  local_a8.Tail = local_a8.Tail + 1;
  if (local_a8.Capacity <= local_a8.Tail) {
    local_a8.Tail = local_a8.Tail - local_a8.Capacity;
  }
  local_a8.Count = local_a8.Count + 1;
  if (local_a8.Capacity != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar3)(pFVar2,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_a8.Count == local_a8.Capacity) {
    iVar13 = local_a8.Count + 1;
    uVar9 = (ulonglong)iVar13;
    if (local_a8.Capacity == 0) {
      uVar10 = 4;
      if (4 < uVar9) {
        uVar10 = uVar9;
      }
    }
    else {
      uVar10 = (uVar9 * 3 >> 3) + 0x10 + uVar9;
    }
    uVar7 = FMemory::QuantizeSize(uVar10 * 4,0);
    iVar6 = (int)(uVar7 >> 2);
    if (iVar6 < iVar13) {
      iVar6 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_a8,iVar6);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_a8.Storage.Data + (longlong)local_a8.Tail * 4) = 2;
  local_a8.Tail = local_a8.Tail + 1;
  if (local_a8.Capacity <= local_a8.Tail) {
    local_a8.Tail = local_a8.Tail - local_a8.Capacity;
  }
  local_a8.Count = local_a8.Count + 1;
  if (local_a8.Capacity != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar3)(pFVar2,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_a8.Count == local_a8.Capacity) {
    iVar13 = local_a8.Count + 1;
    uVar9 = (ulonglong)iVar13;
    if (local_a8.Capacity == 0) {
      uVar10 = 4;
      if (4 < uVar9) {
        uVar10 = uVar9;
      }
    }
    else {
      uVar10 = (uVar9 * 3 >> 3) + 0x10 + uVar9;
    }
    uVar7 = FMemory::QuantizeSize(uVar10 * 4,0);
    iVar6 = (int)(uVar7 >> 2);
    if (iVar6 < iVar13) {
      iVar6 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_a8,iVar6);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_a8.Storage.Data + (longlong)local_a8.Tail * 4) = 3;
  local_a8.Tail = local_a8.Tail + 1;
  if (local_a8.Capacity <= local_a8.Tail) {
    local_a8.Tail = local_a8.Tail - local_a8.Capacity;
  }
  local_a8.Count = local_a8.Count + 1;
  if (local_a8.Capacity != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar3)(pFVar2,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_a8.Count == local_a8.Capacity) {
    iVar13 = local_a8.Count + 1;
    uVar9 = (ulonglong)iVar13;
    if (local_a8.Capacity == 0) {
      uVar10 = 4;
      if (4 < uVar9) {
        uVar10 = uVar9;
      }
    }
    else {
      uVar10 = (uVar9 * 3 >> 3) + 0x10 + uVar9;
    }
    uVar7 = FMemory::QuantizeSize(uVar10 * 4,0);
    iVar6 = (int)(uVar7 >> 2);
    if (iVar6 < iVar13) {
      iVar6 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_a8,iVar6);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_a8.Storage.Data + (longlong)local_a8.Tail * 4) = 4;
  local_a8.Tail = local_a8.Tail + 1;
  if (local_a8.Capacity <= local_a8.Tail) {
    local_a8.Tail = local_a8.Tail - local_a8.Capacity;
  }
  local_a8.Count = local_a8.Count + 1;
  if (local_a8.Capacity < 5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  while( true ) {
    if (local_a8.Count == 0) {
      if (iVar14 != 5) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_48,L"Condition failed");
        (*pcVar3)(pFVar2,&local_48);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      FVar4.Data = local_a8.Storage.Data;
      TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
      if (local_a8.Count != 0) {
        iVar13 = local_a8.Count;
        if (local_a8.Tail <= local_a8.Head) {
          DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_a8.Storage.Data,local_a8.Tail)
          ;
          iVar13 = local_a8.Capacity - local_a8.Head;
        }
        DestructItems<TTestToken<int>,int>
                  ((TTestToken<int> *)(FVar4.Data + (longlong)local_a8.Head * 4),iVar13);
      }
      local_a8.Count = 0;
      local_a8.Head = 0;
      local_a8.Tail = 0;
      if (local_a8.Capacity != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_a8.Storage,0,0,4);
        local_a8.Capacity = 0;
      }
      if (local_a8.Storage.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Storage.Data);
      }
      if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
           TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
         (TTestToken<int>::DestructorCalls != 6)) {
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
    pFVar1 = local_a8.Storage.Data + (longlong)local_a8.Head * 4;
    if ((pFVar1 == local_80) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3577702131160842175>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                           ,0x41,"&Other != this"), bVar5)) break;
    TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
    local_a8.Head = local_a8.Head + 1;
    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
    if (local_a8.Capacity <= local_a8.Head) {
      local_a8.Head = local_a8.Head - local_a8.Capacity;
    }
    local_a8.Count = local_a8.Count + -1;
    iVar13 = iVar14 + 1;
    bVar5 = *(int *)pFVar1 != iVar14;
    iVar14 = iVar13;
    if (bVar5) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar2 = pFVar8->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_58,L"Condition failed");
      (*pcVar3)(pFVar2);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

