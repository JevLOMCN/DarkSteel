// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad5580

EAutomationTestFlags __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::GetTestFlags(FDequeCopyWithHeadTailWrapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad5590

bool __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::IsStressTest(FDequeCopyWithHeadTailWrapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad55a0

uint __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::GetRequiredDeviceNum(FDequeCopyWithHeadTailWrapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad55b0

FString * __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::GetTestSourceFileName
          (FDequeCopyWithHeadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad5780

int __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::GetTestSourceFileLine(FDequeCopyWithHeadTailWrapTest *this)

{
  return 0x2d2;
}

// GetTests @ 141ad57f0

/* WARNING: Removing unreachable block (ram,0x000141ad596e) */

void __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::GetTests
          (FDequeCopyWithHeadTailWrapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
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

// RunTest @ 141ad5990

bool __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::RunTest
          (FDequeCopyWithHeadTailWrapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad59c0

FString * __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::GetBeautifiedTestName
          (FDequeCopyWithHeadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeCopyWithHeadTailWrapTest @ 141b1d080

FDequeCopyWithHeadTailWrapTest * __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::FDequeCopyWithHeadTailWrapTest
          (FDequeCopyWithHeadTailWrapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeCopyWithHeadTailWrapTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Copy with head/tail wrap around");
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

// TestBody @ 141b6fbd0

void __thiscall
Deque::FDequeCopyWithHeadTailWrapTest::TestBody
          (FDequeCopyWithHeadTailWrapTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FAutomationTestFramework *pFVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ForAnyElementType local_res18;
  longlong local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  iVar14 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_68.Storage.Data = (FScriptContainerElement *)0x0;
  local_68.Capacity = 0;
  local_68.Count = 0;
  local_68.Head = 0;
  local_68.Tail = 0;
  uVar4 = FMemory::QuantizeSize(0x10,0);
  iVar15 = local_68.Count;
  iVar10 = (int)(uVar4 >> 2);
  if (iVar10 < 4) {
    iVar10 = 0x7fffffff;
  }
  if (local_68.Count != 0) {
    if (local_68.Head < local_68.Tail) {
      if ((local_68.Head != 0) && (0 < local_68.Count)) {
        do {
          iVar13 = iVar15 - iVar14;
          if (local_68.Head < iVar13) {
            iVar13 = local_68.Head;
          }
          memmove(local_68.Storage.Data + (longlong)iVar14 * 4,
                  local_68.Storage.Data + ((longlong)local_68.Head + (longlong)iVar14) * 4,
                  (longlong)iVar13 << 2);
          iVar14 = iVar14 + iVar13;
        } while (iVar14 < iVar15);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,local_68.Tail,4);
      memmove(local_res18.Data,local_68.Storage.Data,(longlong)local_68.Tail << 2);
      iVar15 = local_68.Capacity - local_68.Head;
      if ((local_68.Head != 0) && (0 < iVar15)) {
        do {
          iVar13 = iVar15 - iVar14;
          if (local_68.Head < iVar15 - iVar14) {
            iVar13 = local_68.Head;
          }
          memmove(local_68.Storage.Data + (longlong)iVar14 * 4,
                  local_68.Storage.Data + ((longlong)local_68.Head + (longlong)iVar14) * 4,
                  (longlong)iVar13 << 2);
          iVar14 = iVar14 + iVar13;
        } while (iVar14 < iVar15);
      }
      memmove(local_68.Storage.Data + (longlong)iVar15 * 4,local_res18.Data,
              (longlong)local_68.Tail << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&local_68.Storage,local_68.Count,iVar10,4);
  local_68.Tail = local_68.Count;
  local_68.Head = 0;
  local_68.Capacity = iVar10;
  if (iVar10 != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_98,L"Condition failed");
    (*pcVar2)(pFVar1,&local_98);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  local_res20 = 4;
  do {
    iVar15 = 0;
    bVar3 = Deque::Test::EmplaceLastPopFirst(&local_68,1);
    if (!bVar3) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_88,L"Condition failed");
      (*pcVar2)(pFVar1,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Count == local_68.Capacity) {
      iVar14 = local_68.Count + 1;
      uVar7 = (ulonglong)iVar14;
      if (local_68.Capacity == 0) {
        uVar11 = 4;
        if (4 < uVar7) {
          uVar11 = uVar7;
        }
      }
      else {
        uVar11 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
      }
      uVar4 = FMemory::QuantizeSize(uVar11 * 4,0);
      iVar10 = (int)(uVar4 >> 2);
      if (iVar10 < iVar14) {
        iVar10 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_68,iVar10);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(undefined4 *)(local_68.Storage.Data + (longlong)local_68.Tail * 4) = 0;
    local_68.Tail = local_68.Tail + 1;
    if (local_68.Capacity <= local_68.Tail) {
      local_68.Tail = local_68.Tail - local_68.Capacity;
    }
    local_68.Count = local_68.Count + 1;
    if (local_68.Capacity != 4) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_98,L"Condition failed");
      (*pcVar2)(pFVar1,&local_98);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Count == local_68.Capacity) {
      iVar14 = local_68.Count + 1;
      uVar7 = (ulonglong)iVar14;
      if (local_68.Capacity == 0) {
        uVar11 = 4;
        if (4 < uVar7) {
          uVar11 = uVar7;
        }
      }
      else {
        uVar11 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
      }
      uVar4 = FMemory::QuantizeSize(uVar11 * 4,0);
      iVar10 = (int)(uVar4 >> 2);
      if (iVar10 < iVar14) {
        iVar10 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_68,iVar10);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(undefined4 *)(local_68.Storage.Data + (longlong)local_68.Tail * 4) = 1;
    local_68.Tail = local_68.Tail + 1;
    if (local_68.Capacity <= local_68.Tail) {
      local_68.Tail = local_68.Tail - local_68.Capacity;
    }
    local_68.Count = local_68.Count + 1;
    if (local_68.Capacity != 4) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_98,L"Condition failed");
      (*pcVar2)(pFVar1,&local_98);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Count == local_68.Capacity) {
      iVar14 = local_68.Count + 1;
      uVar7 = (ulonglong)iVar14;
      if (local_68.Capacity == 0) {
        uVar11 = 4;
        if (4 < uVar7) {
          uVar11 = uVar7;
        }
      }
      else {
        uVar11 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
      }
      uVar4 = FMemory::QuantizeSize(uVar11 * 4,0);
      iVar10 = (int)(uVar4 >> 2);
      if (iVar10 < iVar14) {
        iVar10 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_68,iVar10);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(undefined4 *)(local_68.Storage.Data + (longlong)local_68.Tail * 4) = 2;
    local_68.Tail = local_68.Tail + 1;
    if (local_68.Capacity <= local_68.Tail) {
      local_68.Tail = local_68.Tail - local_68.Capacity;
    }
    local_68.Count = local_68.Count + 1;
    if (local_68.Capacity != 4) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_98,L"Condition failed");
      (*pcVar2)(pFVar1,&local_98);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Count == local_68.Capacity) {
      iVar14 = local_68.Count + 1;
      uVar7 = (ulonglong)iVar14;
      if (local_68.Capacity == 0) {
        uVar11 = 4;
        if (4 < uVar7) {
          uVar11 = uVar7;
        }
      }
      else {
        uVar11 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
      }
      uVar4 = FMemory::QuantizeSize(uVar11 * 4,0);
      iVar10 = (int)(uVar4 >> 2);
      if (iVar10 < iVar14) {
        iVar10 = 0x7fffffff;
      }
      TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_68,iVar10);
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(undefined4 *)(local_68.Storage.Data + (longlong)local_68.Tail * 4) = 3;
    local_68.Tail = local_68.Tail + 1;
    if (local_68.Capacity <= local_68.Tail) {
      local_68.Tail = local_68.Tail - local_68.Capacity;
    }
    local_68.Count = local_68.Count + 1;
    if (local_68.Capacity != 4) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_98,L"Condition failed");
      (*pcVar2)(pFVar1);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    iVar14 = local_68.Count;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    iStack_3c = 0;
    if (local_68.Count != 0) {
      if (0 < local_68.Count) {
        uVar4 = FMemory::QuantizeSize((longlong)local_68.Count << 2,0);
        iVar10 = iStack_44;
        iVar13 = (int)(uVar4 >> 2);
        if (iVar13 < iVar14) {
          iVar13 = 0x7fffffff;
        }
        if (iStack_44 != 0) {
          if (iStack_40 < iStack_3c) {
            if ((iStack_40 != 0) && (0 < iStack_44)) {
              do {
                iVar14 = iVar10 - iVar15;
                if (iStack_40 < iVar14) {
                  iVar14 = iStack_40;
                }
                memmove(local_50.Data + (longlong)iVar15 * 4,
                        local_50.Data + ((longlong)iStack_40 + (longlong)iVar15) * 4,
                        (longlong)iVar14 << 2);
                iVar15 = iVar15 + iVar14;
              } while (iVar15 < iVar10);
            }
          }
          else {
            local_res18.Data = (FScriptContainerElement *)0x0;
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_res18,0,iStack_3c,4);
            memmove(local_res18.Data,local_50.Data,(longlong)iStack_3c << 2);
            iVar14 = local_48 - iStack_40;
            if ((iStack_40 != 0) && (0 < iVar14)) {
              do {
                iVar10 = iVar14 - iVar15;
                if (iStack_40 < iVar14 - iVar15) {
                  iVar10 = iStack_40;
                }
                memmove(local_50.Data + (longlong)iVar15 * 4,
                        local_50.Data + ((longlong)iStack_40 + (longlong)iVar15) * 4,
                        (longlong)iVar10 << 2);
                iVar15 = iVar15 + iVar10;
              } while (iVar15 < iVar14);
            }
            memmove(local_50.Data + (longlong)iVar14 * 4,local_res18.Data,(longlong)iStack_3c << 2);
            if (local_res18.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_res18.Data);
            }
          }
        }
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_50,iStack_44,iVar13,4);
        iStack_3c = iStack_44;
        local_48 = iVar13;
      }
      iStack_40 = 0;
      if (local_68.Head < local_68.Tail) {
        FVar8.Data = local_50.Data;
        FVar12.Data = local_68.Storage.Data + (longlong)local_68.Head * 4;
        iVar15 = local_68.Count;
        iStack_44 = iStack_3c;
      }
      else {
        iVar15 = local_68.Capacity - local_68.Head;
        iStack_44 = iStack_3c;
        ConstructItems<TTestToken<int>,TTestToken<int>,int>
                  (local_50.Data,
                   (TTestToken<int> *)(local_68.Storage.Data + (longlong)local_68.Head * 4),iVar15);
        FVar8.Data = local_50.Data + (longlong)iVar15 * 4;
        FVar12.Data = local_68.Storage.Data;
        iVar15 = local_68.Tail;
      }
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                (FVar8.Data,(TTestToken<int> *)FVar12.Data,iVar15);
      iStack_44 = local_68.Count;
      iStack_3c = local_68.Count;
      if (local_48 <= local_68.Count) {
        iStack_3c = local_68.Count - local_48;
      }
    }
    iStack_40 = 0;
    if (local_68.Count == iStack_44) {
      uVar7 = (ulonglong)local_68.Head;
      lVar6 = uVar7 << 2;
      iVar15 = 0;
      while (lVar6 != (longlong)(local_68.Head + local_68.Count) * 4) {
        iVar10 = (int)uVar7;
        local_res18.Data._4_4_ = (undefined4)((ulonglong)local_res18.Data >> 0x20);
        local_res18.Data._0_4_ = iVar15 + 1;
        uVar7 = (ulonglong)(iVar10 + 1U);
        iVar14 = iVar15;
        if (local_48 <= iVar15) {
          iVar14 = iVar15 - local_48;
        }
        iVar13 = iVar10;
        if (local_68.Capacity <= iVar10) {
          iVar13 = iVar10 - local_68.Capacity;
        }
        if (*(int *)(local_68.Storage.Data + (longlong)iVar13 * 4) !=
            *(int *)(local_50.Data + (longlong)iVar14 * 4)) goto LAB_141b703a5;
        iVar15 = iVar15 + 1;
        lVar6 = (longlong)(int)(iVar10 + 1U) * 4;
      }
    }
    else {
LAB_141b703a5:
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_78,L"Condition failed");
      (*pcVar2)(pFVar1,&local_78);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    iVar13 = iStack_40;
    iVar10 = local_48;
    FVar12.Data = local_50.Data;
    iVar14 = local_68.Head;
    iVar15 = local_68.Capacity;
    FVar8.Data = local_68.Storage.Data;
    if (local_68.Count != 0) {
      iVar9 = local_68.Count;
      if (local_68.Tail <= local_68.Head) {
        DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_68.Storage.Data,local_68.Tail);
        iVar9 = iVar15 - iVar14;
      }
      DestructItems<TTestToken<int>,int>
                ((TTestToken<int> *)(FVar8.Data + (longlong)iVar14 * 4),iVar9);
    }
    local_68.Count = 0;
    local_68.Head = 0;
    local_68.Tail = 0;
    if (iStack_44 != 0) {
      iVar14 = iStack_44;
      if (iStack_3c <= iVar13) {
        DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar12.Data,iStack_3c);
        iVar14 = iVar10 - iVar13;
      }
      DestructItems<TTestToken<int>,int>
                ((TTestToken<int> *)(FVar12.Data + (longlong)iVar13 * 4),iVar14);
    }
    iStack_44 = 0;
    iStack_40 = 0;
    iStack_3c = 0;
    iVar14 = 0;
    if (iVar10 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,4);
      local_48 = 0;
      FVar12.Data = local_50.Data;
      FVar8.Data = local_68.Storage.Data;
      iVar15 = local_68.Capacity;
      iVar14 = local_68.Head;
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
      FVar8.Data = local_68.Storage.Data;
      iVar15 = local_68.Capacity;
      iVar14 = local_68.Head;
    }
    local_res20 = local_res20 + -1;
    if (local_res20 == 0) {
      if (local_68.Count != 0) {
        iVar10 = local_68.Count;
        if (local_68.Tail <= iVar14) {
          DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar8.Data,local_68.Tail);
          iVar10 = iVar15 - iVar14;
        }
        DestructItems<TTestToken<int>,int>
                  ((TTestToken<int> *)(FVar8.Data + (longlong)iVar14 * 4),iVar10);
      }
      local_68.Count = 0;
      local_68.Head = 0;
      local_68.Tail = 0;
      if (iVar15 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_68.Storage,0,0,4);
        local_68.Capacity = 0;
        FVar8.Data = local_68.Storage.Data;
      }
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
      if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
           TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
         (TTestToken<int>::DestructorCalls != 0x24)) {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_78,L"Condition failed");
        (*pcVar2)(pFVar1,&local_78,0);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

