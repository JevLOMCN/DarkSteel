// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141adaf40

EAutomationTestFlags __thiscall
Deque::FDequeIterationWithWrapTest::GetTestFlags(FDequeIterationWithWrapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adafa0

bool __thiscall Deque::FDequeIterationWithWrapTest::IsStressTest(FDequeIterationWithWrapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adafb0

uint __thiscall
Deque::FDequeIterationWithWrapTest::GetRequiredDeviceNum(FDequeIterationWithWrapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adafc0

FString * __thiscall
Deque::FDequeIterationWithWrapTest::GetTestSourceFileName
          (FDequeIterationWithWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141adaff0

int __thiscall
Deque::FDequeIterationWithWrapTest::GetTestSourceFileLine(FDequeIterationWithWrapTest *this)

{
  return 0x3ed;
}

// GetTests @ 141adb000

/* WARNING: Removing unreachable block (ram,0x000141adb17e) */

void __thiscall
Deque::FDequeIterationWithWrapTest::GetTests
          (FDequeIterationWithWrapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141adb1a0

bool __thiscall
Deque::FDequeIterationWithWrapTest::RunTest(FDequeIterationWithWrapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adb1d0

FString * __thiscall
Deque::FDequeIterationWithWrapTest::GetBeautifiedTestName
          (FDequeIterationWithWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeIterationWithWrapTest @ 141b1f120

FDequeIterationWithWrapTest * __thiscall
Deque::FDequeIterationWithWrapTest::FDequeIterationWithWrapTest
          (FDequeIterationWithWrapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeIterationWithWrapTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Iteration with head/tail wrap around"
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

// TestBody @ 141b757e0

void __thiscall
Deque::FDequeIterationWithWrapTest::TestBody(FDequeIterationWithWrapTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  ulong64 uVar7;
  FAutomationTestFramework *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ForAnyElementType local_res18;
  ForAnyElementType local_res20;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a0;
  longlong local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar17 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_b8.Storage.Data = (FScriptContainerElement *)0x0;
  local_b8.Capacity = 0;
  local_b8.Count = 0;
  local_b8.Head = 0;
  local_b8.Tail = 0;
  uVar7 = FMemory::QuantizeSize(0x10,0);
  iVar15 = local_b8.Count;
  iVar13 = (int)(uVar7 >> 2);
  if (iVar13 < 4) {
    iVar13 = 0x7fffffff;
  }
  if (local_b8.Count != 0) {
    if (local_b8.Head < local_b8.Tail) {
      if ((local_b8.Head != 0) && (0 < local_b8.Count)) {
        do {
          iVar12 = iVar15 - iVar17;
          if (local_b8.Head < iVar12) {
            iVar12 = local_b8.Head;
          }
          memmove(local_b8.Storage.Data + (longlong)iVar17 * 4,
                  local_b8.Storage.Data + ((longlong)local_b8.Head + (longlong)iVar17) * 4,
                  (longlong)iVar12 << 2);
          iVar17 = iVar17 + iVar12;
        } while (iVar17 < iVar15);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,local_b8.Tail,4);
      memmove(local_res18.Data,local_b8.Storage.Data,(longlong)local_b8.Tail << 2);
      iVar15 = local_b8.Capacity - local_b8.Head;
      if ((local_b8.Head != 0) && (0 < iVar15)) {
        do {
          iVar12 = iVar15 - iVar17;
          if (local_b8.Head < iVar15 - iVar17) {
            iVar12 = local_b8.Head;
          }
          memmove(local_b8.Storage.Data + (longlong)iVar17 * 4,
                  local_b8.Storage.Data + ((longlong)local_b8.Head + (longlong)iVar17) * 4,
                  (longlong)iVar12 << 2);
          iVar17 = iVar17 + iVar12;
        } while (iVar17 < iVar15);
      }
      memmove(local_b8.Storage.Data + (longlong)iVar15 * 4,local_res18.Data,
              (longlong)local_b8.Tail << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&local_b8.Storage,local_b8.Count,iVar13,4);
  local_b8.Tail = local_b8.Count;
  local_b8.Head = 0;
  local_b8.Capacity = iVar13;
  if (iVar13 != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Condition failed");
    (*pcVar2)(pFVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  local_90 = 4;
  while( true ) {
    iVar15 = 0;
    bVar6 = Deque::Test::EmplaceLastPopFirst(&local_b8,1);
    iVar17 = iVar15;
    if (!bVar6) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_78,L"Condition failed");
      (*pcVar2)(pFVar1,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    do {
      if (local_b8.Count == local_b8.Capacity) {
        iVar13 = local_b8.Count + 1;
        uVar10 = (ulonglong)iVar13;
        if (local_b8.Capacity == 0) {
          uVar11 = 4;
          if (4 < uVar10) {
            uVar11 = uVar10;
          }
        }
        else {
          uVar11 = (uVar10 * 3 >> 3) + 0x10 + uVar10;
        }
        uVar7 = FMemory::QuantizeSize(uVar11 * 4,0);
        iVar12 = local_b8.Count;
        iVar16 = (int)(uVar7 >> 2);
        if (iVar16 < iVar13) {
          iVar16 = 0x7fffffff;
        }
        if (local_b8.Count != 0) {
          if (local_b8.Head < local_b8.Tail) {
            if ((local_b8.Head != 0) && (iVar13 = iVar15, 0 < local_b8.Count)) {
              do {
                iVar14 = iVar12 - iVar13;
                if (local_b8.Head < iVar14) {
                  iVar14 = local_b8.Head;
                }
                memmove(local_b8.Storage.Data + (longlong)iVar13 * 4,
                        local_b8.Storage.Data + ((longlong)local_b8.Head + (longlong)iVar13) * 4,
                        (longlong)iVar14 << 2);
                iVar13 = iVar13 + iVar14;
              } while (iVar13 < iVar12);
            }
          }
          else {
            local_res20.Data = (FScriptContainerElement *)0x0;
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_res20,0,local_b8.Tail,4);
            memmove(local_res20.Data,local_b8.Storage.Data,(longlong)local_b8.Tail << 2);
            iVar13 = local_b8.Capacity - local_b8.Head;
            if ((local_b8.Head != 0) && (iVar12 = iVar15, 0 < iVar13)) {
              do {
                iVar14 = iVar13 - iVar12;
                if (local_b8.Head < iVar13 - iVar12) {
                  iVar14 = local_b8.Head;
                }
                memmove(local_b8.Storage.Data + (longlong)iVar12 * 4,
                        local_b8.Storage.Data + ((longlong)local_b8.Head + (longlong)iVar12) * 4,
                        (longlong)iVar14 << 2);
                iVar12 = iVar12 + iVar14;
              } while (iVar12 < iVar13);
            }
            memmove(local_b8.Storage.Data + (longlong)iVar13 * 4,local_res20.Data,
                    (longlong)local_b8.Tail << 2);
            if (local_res20.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_res20.Data);
            }
          }
        }
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_b8.Storage,local_b8.Count,iVar16,4);
        local_b8.Tail = local_b8.Count;
        local_b8.Head = 0;
        local_b8.Capacity = iVar16;
      }
      TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
      *(int *)(local_b8.Storage.Data + (longlong)local_b8.Tail * 4) = iVar17;
      local_b8.Tail = local_b8.Tail + 1;
      if (local_b8.Capacity <= local_b8.Tail) {
        local_b8.Tail = local_b8.Tail - local_b8.Capacity;
      }
      local_b8.Count = local_b8.Count + 1;
      if (local_b8.Capacity != 4) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar1 = pFVar8->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_68,L"Condition failed");
        (*pcVar2)(pFVar1,&local_68,0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      lVar4 = local_90;
      iVar17 = iVar17 + 1;
    } while (iVar17 < 4);
    if ((local_b8.Count < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < Count)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                           ,0x248,L"Parameter index %d exceeds container size %d"), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar17 = local_b8.Head;
    if (local_b8.Capacity <= local_b8.Head) {
      iVar17 = local_b8.Head - local_b8.Capacity;
    }
    if (*(int *)(local_b8.Storage.Data + (longlong)iVar17 * 4) != 0) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_a0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_a0,0);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    if ((local_b8.Count < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < Count)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                           ,0x248,L"Parameter index %d exceeds container size %d"), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar17 = local_b8.Head + 1;
    if (local_b8.Capacity <= iVar17) {
      iVar17 = iVar17 - local_b8.Capacity;
    }
    if (*(int *)(local_b8.Storage.Data + (longlong)iVar17 * 4) != 1) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_a0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_a0,0);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    if ((local_b8.Count < 3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < Count)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                           ,0x248,L"Parameter index %d exceeds container size %d"), bVar6)) break;
    iVar17 = local_b8.Head + 2;
    if (local_b8.Capacity <= iVar17) {
      iVar17 = iVar17 - local_b8.Capacity;
    }
    if (*(int *)(local_b8.Storage.Data + (longlong)iVar17 * 4) != 2) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_a0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_a0,0);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    if ((local_b8.Count < 4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < Count)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                           ,0x248,L"Parameter index %d exceeds container size %d"), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar17 = local_b8.Head + 3;
    if (local_b8.Capacity <= iVar17) {
      iVar17 = iVar17 - local_b8.Capacity;
    }
    if (*(int *)(local_b8.Storage.Data + (longlong)iVar17 * 4) != 3) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_a0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_a0,0);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    iVar13 = local_b8.Capacity;
    FVar5.Data = local_b8.Storage.Data;
    uVar10 = (ulonglong)local_b8.Head;
    iVar12 = local_b8.Count + local_b8.Head;
    lVar9 = uVar10 << 2;
    FVar3.Data = local_b8.Storage.Data;
    iVar17 = local_b8.Count;
    while (local_b8.Storage.Data = FVar3.Data, local_b8.Count = iVar17,
          lVar9 != (longlong)iVar12 * 4) {
      iVar16 = (int)uVar10;
      iVar17 = iVar16;
      if (iVar13 <= iVar16) {
        iVar17 = iVar16 - iVar13;
      }
      if (*(int *)(FVar5.Data + (longlong)iVar17 * 4) != iVar15) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar1 = pFVar8->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_58,L"Condition failed");
        (*pcVar2)(pFVar1,&local_58,0);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      uVar10 = (ulonglong)(iVar16 + 1U);
      FVar3.Data = local_b8.Storage.Data;
      iVar17 = local_b8.Count;
      lVar4 = local_90;
      iVar15 = iVar15 + 1;
      lVar9 = (longlong)(int)(iVar16 + 1U) * 4;
    }
    if (iVar17 != 0) {
      if (local_b8.Tail <= local_b8.Head) {
        DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar3.Data,local_b8.Tail);
        iVar17 = local_b8.Capacity - local_b8.Head;
      }
      DestructItems<TTestToken<int>,int>
                ((TTestToken<int> *)(FVar3.Data + (longlong)local_b8.Head * 4),iVar17);
    }
    local_90 = lVar4 + -1;
    local_b8.Count = 0;
    local_b8.Head = 0;
    local_b8.Tail = 0;
    if (local_90 == 0) {
      if (local_b8.Capacity != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_b8.Storage,0,0,4);
        local_b8.Capacity = 0;
      }
      if (local_b8.Storage.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Storage.Data);
      }
      if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
           TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
         (TTestToken<int>::DestructorCalls != 0x14)) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar1 = pFVar8->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_48,L"Condition failed");
        (*pcVar2)(pFVar1,&local_48,0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

