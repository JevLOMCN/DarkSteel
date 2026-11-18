// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad43c0

EAutomationTestFlags __thiscall
Deque::FDequeCopySimpleTest::GetTestFlags(FDequeCopySimpleTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad43d0

bool __thiscall Deque::FDequeCopySimpleTest::IsStressTest(FDequeCopySimpleTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad43e0

uint __thiscall Deque::FDequeCopySimpleTest::GetRequiredDeviceNum(FDequeCopySimpleTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad43f0

FString * __thiscall
Deque::FDequeCopySimpleTest::GetTestSourceFileName
          (FDequeCopySimpleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad4420

int __thiscall Deque::FDequeCopySimpleTest::GetTestSourceFileLine(FDequeCopySimpleTest *this)

{
  return 0x2c0;
}

// GetTests @ 141ad44a0

/* WARNING: Removing unreachable block (ram,0x000141ad461e) */

void __thiscall
Deque::FDequeCopySimpleTest::GetTests
          (FDequeCopySimpleTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad4640

bool __thiscall Deque::FDequeCopySimpleTest::RunTest(FDequeCopySimpleTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad4810

FString * __thiscall
Deque::FDequeCopySimpleTest::GetBeautifiedTestName
          (FDequeCopySimpleTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeCopySimpleTest @ 141b1cce0

FDequeCopySimpleTest * __thiscall
Deque::FDequeCopySimpleTest::FDequeCopySimpleTest(FDequeCopySimpleTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeCopySimpleTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TDeque::Copy simple");
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

// TestBody @ 141b6ea30

void __thiscall Deque::FDequeCopySimpleTest::TestBody(FDequeCopySimpleTest *this,FString *param_1)

{
  longlong lVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  ulong64 uVar5;
  FAutomationTestFramework *pFVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ForAnyElementType local_res18;
  FString local_68;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_58;
  ForAnyElementType local_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar15 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_58.Storage.Data = (FScriptContainerElement *)0x0;
  local_58.Capacity = 0;
  local_58.Count = 0;
  local_58.Head = 0;
  local_58.Tail = 0;
  uVar5 = FMemory::QuantizeSize(0x10,0);
  iVar13 = local_58.Count;
  iVar4 = (int)(uVar5 >> 2);
  if (iVar4 < 4) {
    iVar4 = 0x7fffffff;
  }
  if (local_58.Count != 0) {
    if (local_58.Head < local_58.Tail) {
      if ((local_58.Head != 0) && (iVar14 = iVar15, 0 < local_58.Count)) {
        do {
          iVar12 = iVar13 - iVar14;
          if (local_58.Head < iVar12) {
            iVar12 = local_58.Head;
          }
          memmove(local_58.Storage.Data + (longlong)iVar14 * 4,
                  local_58.Storage.Data + ((longlong)local_58.Head + (longlong)iVar14) * 4,
                  (longlong)iVar12 << 2);
          iVar14 = iVar14 + iVar12;
        } while (iVar14 < iVar13);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,local_58.Tail,4);
      memmove(local_res18.Data,local_58.Storage.Data,(longlong)local_58.Tail << 2);
      iVar13 = local_58.Capacity - local_58.Head;
      if ((local_58.Head != 0) && (iVar14 = iVar15, 0 < iVar13)) {
        do {
          iVar12 = iVar13 - iVar14;
          if (local_58.Head < iVar13 - iVar14) {
            iVar12 = local_58.Head;
          }
          memmove(local_58.Storage.Data + (longlong)iVar14 * 4,
                  local_58.Storage.Data + ((longlong)local_58.Head + (longlong)iVar14) * 4,
                  (longlong)iVar12 << 2);
          iVar14 = iVar14 + iVar12;
        } while (iVar14 < iVar13);
      }
      memmove(local_58.Storage.Data + (longlong)iVar13 * 4,local_res18.Data,
              (longlong)local_58.Tail << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&local_58.Storage,local_58.Count,iVar4,4);
  local_58.Tail = local_58.Count;
  local_58.Head = 0;
  local_58.Capacity = iVar4;
  if (iVar4 != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Count == local_58.Capacity) {
    iVar13 = local_58.Count + 1;
    uVar7 = (ulonglong)iVar13;
    if (local_58.Capacity == 0) {
      uVar10 = 4;
      if (4 < uVar7) {
        uVar10 = uVar7;
      }
    }
    else {
      uVar10 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
    }
    uVar5 = FMemory::QuantizeSize(uVar10 * 4,0);
    iVar4 = (int)(uVar5 >> 2);
    if (iVar4 < iVar13) {
      iVar4 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_58,iVar4);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_58.Storage.Data + (longlong)local_58.Tail * 4) = 0;
  local_58.Tail = local_58.Tail + 1;
  if (local_58.Capacity <= local_58.Tail) {
    local_58.Tail = local_58.Tail - local_58.Capacity;
  }
  local_58.Count = local_58.Count + 1;
  if (local_58.Capacity != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Count == local_58.Capacity) {
    iVar13 = local_58.Count + 1;
    uVar7 = (ulonglong)iVar13;
    if (local_58.Capacity == 0) {
      uVar10 = 4;
      if (4 < uVar7) {
        uVar10 = uVar7;
      }
    }
    else {
      uVar10 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
    }
    uVar5 = FMemory::QuantizeSize(uVar10 * 4,0);
    iVar4 = (int)(uVar5 >> 2);
    if (iVar4 < iVar13) {
      iVar4 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_58,iVar4);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_58.Storage.Data + (longlong)local_58.Tail * 4) = 1;
  local_58.Tail = local_58.Tail + 1;
  if (local_58.Capacity <= local_58.Tail) {
    local_58.Tail = local_58.Tail - local_58.Capacity;
  }
  local_58.Count = local_58.Count + 1;
  if (local_58.Capacity != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Count == local_58.Capacity) {
    iVar13 = local_58.Count + 1;
    uVar7 = (ulonglong)iVar13;
    if (local_58.Capacity == 0) {
      uVar10 = 4;
      if (4 < uVar7) {
        uVar10 = uVar7;
      }
    }
    else {
      uVar10 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
    }
    uVar5 = FMemory::QuantizeSize(uVar10 * 4,0);
    iVar4 = (int)(uVar5 >> 2);
    if (iVar4 < iVar13) {
      iVar4 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_58,iVar4);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_58.Storage.Data + (longlong)local_58.Tail * 4) = 2;
  local_58.Tail = local_58.Tail + 1;
  if (local_58.Capacity <= local_58.Tail) {
    local_58.Tail = local_58.Tail - local_58.Capacity;
  }
  local_58.Count = local_58.Count + 1;
  if (local_58.Capacity != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Count == local_58.Capacity) {
    iVar13 = local_58.Count + 1;
    uVar7 = (ulonglong)iVar13;
    if (local_58.Capacity == 0) {
      uVar10 = 4;
      if (4 < uVar7) {
        uVar10 = uVar7;
      }
    }
    else {
      uVar10 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
    }
    uVar5 = FMemory::QuantizeSize(uVar10 * 4,0);
    iVar4 = (int)(uVar5 >> 2);
    if (iVar4 < iVar13) {
      iVar4 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_58,iVar4);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_58.Storage.Data + (longlong)local_58.Tail * 4) = 3;
  local_58.Tail = local_58.Tail + 1;
  if (local_58.Capacity <= local_58.Tail) {
    local_58.Tail = local_58.Tail - local_58.Capacity;
  }
  local_58.Count = local_58.Count + 1;
  if (local_58.Capacity != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  iVar13 = local_58.Count;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  iStack_34 = 0;
  iStack_30 = 0;
  iStack_2c = 0;
  if (local_58.Count != 0) {
    if (0 < local_58.Count) {
      uVar5 = FMemory::QuantizeSize((longlong)local_58.Count << 2,0);
      iVar4 = iStack_34;
      iVar14 = (int)(uVar5 >> 2);
      if (iVar14 < iVar13) {
        iVar14 = 0x7fffffff;
      }
      if (iStack_34 != 0) {
        if (iStack_30 < iStack_2c) {
          if ((iStack_30 != 0) && (0 < iStack_34)) {
            do {
              iVar13 = iVar4 - iVar15;
              if (iStack_30 < iVar13) {
                iVar13 = iStack_30;
              }
              memmove(local_40.Data + (longlong)iVar15 * 4,
                      local_40.Data + ((longlong)iStack_30 + (longlong)iVar15) * 4,
                      (longlong)iVar13 << 2);
              iVar15 = iVar15 + iVar13;
            } while (iVar15 < iVar4);
          }
        }
        else {
          local_res18.Data = (FScriptContainerElement *)0x0;
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_res18,0,iStack_2c,4);
          memmove(local_res18.Data,local_40.Data,(longlong)iStack_2c << 2);
          iVar13 = local_38 - iStack_30;
          if ((iStack_30 != 0) && (0 < iVar13)) {
            do {
              iVar4 = iVar13 - iVar15;
              if (iStack_30 < iVar13 - iVar15) {
                iVar4 = iStack_30;
              }
              memmove(local_40.Data + (longlong)iVar15 * 4,
                      local_40.Data + ((longlong)iStack_30 + (longlong)iVar15) * 4,
                      (longlong)iVar4 << 2);
              iVar15 = iVar15 + iVar4;
            } while (iVar15 < iVar13);
          }
          memmove(local_40.Data + (longlong)iVar13 * 4,local_res18.Data,(longlong)iStack_2c << 2);
          if (local_res18.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_res18.Data);
          }
        }
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_40,iStack_34,iVar14,4);
      iStack_2c = iStack_34;
      local_38 = iVar14;
    }
    iStack_30 = 0;
    if (local_58.Head < local_58.Tail) {
      FVar8.Data = local_40.Data;
      FVar11.Data = local_58.Storage.Data + (longlong)local_58.Head * 4;
      iVar13 = local_58.Count;
      iStack_34 = iStack_2c;
    }
    else {
      iVar13 = local_58.Capacity - local_58.Head;
      iStack_34 = iStack_2c;
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                (local_40.Data,
                 (TTestToken<int> *)(local_58.Storage.Data + (longlong)local_58.Head * 4),iVar13);
      FVar8.Data = local_40.Data + (longlong)iVar13 * 4;
      FVar11.Data = local_58.Storage.Data;
      iVar13 = local_58.Tail;
    }
    ConstructItems<TTestToken<int>,TTestToken<int>,int>
              (FVar8.Data,(TTestToken<int> *)FVar11.Data,iVar13);
    iStack_34 = local_58.Count;
    iStack_2c = local_58.Count;
    if (local_38 <= local_58.Count) {
      iStack_2c = local_58.Count - local_38;
    }
  }
  iStack_30 = 0;
  if (local_58.Count == iStack_34) {
    uVar7 = (ulonglong)local_58.Head;
    iVar13 = 0;
    lVar1 = (longlong)(local_58.Head + local_58.Count) * 4;
    if (local_58.Storage.Data + uVar7 * 4 != local_58.Storage.Data + lVar1) {
      do {
        iVar15 = (int)uVar7;
        local_res18.Data._0_4_ = iVar13 + 1;
        uVar7 = (ulonglong)(iVar15 + 1U);
        iVar4 = iVar13;
        if (local_38 <= iVar13) {
          iVar4 = iVar13 - local_38;
        }
        iVar14 = iVar15;
        if (local_58.Capacity <= iVar15) {
          iVar14 = iVar15 - local_58.Capacity;
        }
        if (*(int *)(local_58.Storage.Data + (longlong)iVar14 * 4) !=
            *(int *)(local_40.Data + (longlong)iVar4 * 4)) goto LAB_141b6f1c4;
        iVar13 = iVar13 + 1;
      } while ((longlong)(int)(iVar15 + 1U) * 4 != lVar1);
    }
  }
  else {
LAB_141b6f1c4:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  iVar12 = iStack_30;
  iVar14 = local_38;
  FVar11.Data = local_40.Data;
  iVar15 = local_58.Head;
  iVar13 = local_58.Count;
  iVar4 = local_58.Capacity;
  FVar8.Data = local_58.Storage.Data;
  if (iStack_34 != 0) {
    iVar9 = iStack_34;
    if (iStack_2c <= iStack_30) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_40.Data,iStack_2c);
      iVar9 = iVar14 - iVar12;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)(FVar11.Data + (longlong)iVar12 * 4),iVar9);
  }
  iStack_34 = 0;
  iStack_30 = 0;
  iStack_2c = 0;
  if (iVar14 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,4);
    local_38 = 0;
    FVar11.Data = local_40.Data;
    FVar8.Data = local_58.Storage.Data;
    iVar4 = local_58.Capacity;
    iVar13 = local_58.Count;
    iVar15 = local_58.Head;
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
    FVar8.Data = local_58.Storage.Data;
    iVar4 = local_58.Capacity;
    iVar13 = local_58.Count;
    iVar15 = local_58.Head;
  }
  if (iVar13 != 0) {
    if (local_58.Tail <= iVar15) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar8.Data,local_58.Tail);
      iVar13 = iVar4 - iVar15;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)(FVar8.Data + (longlong)iVar15 * 4),iVar13);
  }
  local_58.Count = 0;
  local_58.Head = 0;
  local_58.Tail = 0;
  if (iVar4 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58.Storage,0,0,4);
    local_58.Capacity = 0;
    FVar8.Data = local_58.Storage.Data;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 8)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar3)(pFVar2,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

