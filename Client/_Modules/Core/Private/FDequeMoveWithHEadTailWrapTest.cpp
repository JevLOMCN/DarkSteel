// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad8b20

EAutomationTestFlags __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::GetTestFlags(FDequeMoveWithHEadTailWrapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad8b30

bool __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::IsStressTest(FDequeMoveWithHEadTailWrapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad8b40

uint __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::GetRequiredDeviceNum(FDequeMoveWithHEadTailWrapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad8b50

FString * __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::GetTestSourceFileName
          (FDequeMoveWithHEadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad8b80

int __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::GetTestSourceFileLine(FDequeMoveWithHEadTailWrapTest *this)

{
  return 0x36e;
}

// GetTests @ 141ad8b90

/* WARNING: Removing unreachable block (ram,0x000141ad8d0e) */

void __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::GetTests
          (FDequeMoveWithHEadTailWrapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

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

// RunTest @ 141ad8d30

bool __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::RunTest
          (FDequeMoveWithHEadTailWrapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad8d60

FString * __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::GetBeautifiedTestName
          (FDequeMoveWithHEadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeMoveWithHEadTailWrapTest @ 141b1f860

FDequeMoveWithHEadTailWrapTest * __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::FDequeMoveWithHEadTailWrapTest
          (FDequeMoveWithHEadTailWrapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeMoveWithHEadTailWrapTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Move with head/tail wrap around");
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

// TestBody @ 141b77940

void __thiscall
Deque::FDequeMoveWithHEadTailWrapTest::TestBody
          (FDequeMoveWithHEadTailWrapTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  FAutomationTestFramework *pFVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ForAnyElementType FVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ForAnyElementType local_res18;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_b8;
  ForAnyElementType local_a0;
  int local_98;
  undefined8 local_94;
  int local_8c;
  FString local_88;
  FScriptContainerElement local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  iVar8 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  lVar15 = 4;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_b8.Storage.Data = (FScriptContainerElement *)0x0;
  local_b8.Capacity = 0;
  local_b8.Count = 0;
  local_b8.Head = 0;
  local_b8.Tail = 0;
  do {
    if (local_b8.Capacity < 4) {
      uVar5 = FMemory::QuantizeSize(0x10,0);
      iVar14 = local_b8.Count;
      iVar12 = (int)(uVar5 >> 2);
      if (iVar12 < 4) {
        iVar12 = 0x7fffffff;
      }
      if (local_b8.Count != 0) {
        if (local_b8.Head < local_b8.Tail) {
          if ((local_b8.Head != 0) && (iVar13 = iVar8, 0 < local_b8.Count)) {
            do {
              iVar10 = iVar14 - iVar13;
              if (local_b8.Head < iVar10) {
                iVar10 = local_b8.Head;
              }
              memmove(local_b8.Storage.Data + (longlong)iVar13 * 4,
                      local_b8.Storage.Data + ((longlong)local_b8.Head + (longlong)iVar13) * 4,
                      (longlong)iVar10 << 2);
              iVar13 = iVar13 + iVar10;
            } while (iVar13 < iVar14);
          }
        }
        else {
          local_res18.Data = (FScriptContainerElement *)0x0;
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_res18,0,local_b8.Tail,4);
          memmove(local_res18.Data,local_b8.Storage.Data,(longlong)local_b8.Tail << 2);
          iVar14 = local_b8.Capacity - local_b8.Head;
          if ((local_b8.Head != 0) && (iVar13 = iVar8, 0 < iVar14)) {
            do {
              iVar10 = iVar14 - iVar13;
              if (local_b8.Head < iVar14 - iVar13) {
                iVar10 = local_b8.Head;
              }
              memmove(local_b8.Storage.Data + (longlong)iVar13 * 4,
                      local_b8.Storage.Data + ((longlong)local_b8.Head + (longlong)iVar13) * 4,
                      (longlong)iVar10 << 2);
              iVar13 = iVar13 + iVar10;
            } while (iVar13 < iVar14);
          }
          memmove(local_b8.Storage.Data + (longlong)iVar14 * 4,local_res18.Data,
                  (longlong)local_b8.Tail << 2);
          if (local_res18.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_res18.Data);
          }
        }
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_b8.Storage,local_b8.Count,iVar12,4);
      local_b8.Tail = local_b8.Count;
      local_b8.Head = 0;
      local_b8.Capacity = iVar12;
    }
    if (local_b8.Capacity != 4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_70,L"Condition failed");
      (*pcVar3)(pFVar2,&local_70);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = Deque::Test::EmplaceLastPopFirst(&local_b8,1);
    if (!bVar4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_60,L"Condition failed");
      (*pcVar3)(pFVar2,&local_60);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    if (local_b8.Count == local_b8.Capacity) {
      iVar14 = local_b8.Count + 1;
      uVar7 = (ulonglong)iVar14;
      if (local_b8.Capacity == 0) {
        uVar9 = 4;
        if (4 < uVar7) {
          uVar9 = uVar7;
        }
      }
      else {
        uVar9 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
      }
      uVar5 = FMemory::QuantizeSize(uVar9 * 4,0);
      iVar12 = (int)(uVar5 >> 2);
      if (iVar12 < iVar14) {
        iVar12 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_b8,iVar12);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(undefined4 *)(local_b8.Storage.Data + (longlong)local_b8.Tail * 4) = 0;
    local_b8.Tail = local_b8.Tail + 1;
    if (local_b8.Capacity <= local_b8.Tail) {
      local_b8.Tail = local_b8.Tail - local_b8.Capacity;
    }
    local_b8.Count = local_b8.Count + 1;
    if (local_b8.Capacity != 4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_88,L"Condition failed");
      (*pcVar3)(pFVar2,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    if (local_b8.Count == local_b8.Capacity) {
      iVar14 = local_b8.Count + 1;
      uVar7 = (ulonglong)iVar14;
      if (local_b8.Capacity == 0) {
        uVar9 = 4;
        if (4 < uVar7) {
          uVar9 = uVar7;
        }
      }
      else {
        uVar9 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
      }
      uVar5 = FMemory::QuantizeSize(uVar9 * 4,0);
      iVar12 = (int)(uVar5 >> 2);
      if (iVar12 < iVar14) {
        iVar12 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_b8,iVar12);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(undefined4 *)(local_b8.Storage.Data + (longlong)local_b8.Tail * 4) = 1;
    local_b8.Tail = local_b8.Tail + 1;
    if (local_b8.Capacity <= local_b8.Tail) {
      local_b8.Tail = local_b8.Tail - local_b8.Capacity;
    }
    local_b8.Count = local_b8.Count + 1;
    if (local_b8.Capacity != 4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_88,L"Condition failed");
      (*pcVar3)(pFVar2,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    if (local_b8.Count == local_b8.Capacity) {
      iVar14 = local_b8.Count + 1;
      uVar7 = (ulonglong)iVar14;
      if (local_b8.Capacity == 0) {
        uVar9 = 4;
        if (4 < uVar7) {
          uVar9 = uVar7;
        }
      }
      else {
        uVar9 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
      }
      uVar5 = FMemory::QuantizeSize(uVar9 * 4,0);
      iVar12 = (int)(uVar5 >> 2);
      if (iVar12 < iVar14) {
        iVar12 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_b8,iVar12);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(undefined4 *)(local_b8.Storage.Data + (longlong)local_b8.Tail * 4) = 2;
    local_b8.Tail = local_b8.Tail + 1;
    if (local_b8.Capacity <= local_b8.Tail) {
      local_b8.Tail = local_b8.Tail - local_b8.Capacity;
    }
    local_b8.Count = local_b8.Count + 1;
    if (local_b8.Capacity != 4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_88,L"Condition failed");
      (*pcVar3)(pFVar2,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    if (local_b8.Count == local_b8.Capacity) {
      iVar14 = local_b8.Count + 1;
      uVar7 = (ulonglong)iVar14;
      if (local_b8.Capacity == 0) {
        uVar9 = 4;
        if (4 < uVar7) {
          uVar9 = uVar7;
        }
      }
      else {
        uVar9 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
      }
      uVar5 = FMemory::QuantizeSize(uVar9 * 4,0);
      iVar12 = (int)(uVar5 >> 2);
      if (iVar12 < iVar14) {
        iVar12 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_b8,iVar12);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(undefined4 *)(local_b8.Storage.Data + (longlong)local_b8.Tail * 4) = 3;
    local_b8.Tail = local_b8.Tail + 1;
    if (local_b8.Capacity <= local_b8.Tail) {
      local_b8.Tail = local_b8.Tail - local_b8.Capacity;
    }
    local_b8.Count = local_b8.Count + 1;
    if (local_b8.Capacity != 4) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar2 = pFVar6->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_88,L"Condition failed");
      (*pcVar3)(pFVar2,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    iVar12 = local_b8.Head;
    iVar14 = local_b8.Count;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_94._0_4_ = 0;
    local_94._4_4_ = 0;
    local_8c = 0;
    if (local_b8.Count == 0) {
      local_98 = 0;
    }
    else {
      local_a0.Data = local_b8.Storage.Data;
      local_8c = local_b8.Tail;
      local_b8.Head = 0;
      local_b8.Tail = 0;
      local_b8.Storage.Data = (FScriptContainerElement *)0x0;
      local_98 = local_b8.Capacity;
      local_94._4_4_ = iVar12;
      local_b8.Capacity = 0;
      local_b8.Count = 0;
      local_94._0_4_ = iVar14;
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    iVar14 = iVar8;
    while ((int)local_94 != 0) {
      pFVar1 = local_a0.Data + (longlong)local_94._4_4_ * 4;
      if ((pFVar1 == local_78) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3577702131160842175>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                             ,0x41,"&Other != this"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
      local_94._4_4_ = local_94._4_4_ + 1;
      TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
      if (local_98 <= local_94._4_4_) {
        local_94._4_4_ = local_94._4_4_ - local_98;
      }
      local_94._0_4_ = (int)local_94 + -1;
      iVar12 = iVar14 + 1;
      bVar4 = *(int *)pFVar1 != iVar14;
      iVar14 = iVar12;
      if (bVar4) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar2 = pFVar6->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_50,L"Condition failed");
        (*pcVar3)(pFVar2);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
    }
    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
    local_94 = 0;
    local_8c = 0;
    if (local_98 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,4);
      local_98 = 0;
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    iVar12 = local_b8.Head;
    iVar14 = local_b8.Capacity;
    FVar11.Data = local_b8.Storage.Data;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  if (local_b8.Count != 0) {
    lVar15 = (longlong)local_b8.Head;
    iVar8 = local_b8.Count;
    if (local_b8.Tail <= local_b8.Head) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_b8.Storage.Data,local_b8.Tail);
      iVar8 = iVar14 - iVar12;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar11.Data + lVar15 * 4),iVar8);
  }
  local_b8.Count = 0;
  local_b8.Head = 0;
  local_b8.Tail = 0;
  if (iVar14 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8.Storage,0,0,4);
    local_b8.Capacity = 0;
    FVar11.Data = local_b8.Storage.Data;
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0x18)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_40,L"Condition failed");
    (*pcVar3)(pFVar2,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return;
}

