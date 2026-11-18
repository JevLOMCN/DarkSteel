// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad5d50

EAutomationTestFlags __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::GetTestFlags
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad5d60

bool __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::IsStressTest
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad5d70

uint __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::GetRequiredDeviceNum
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad5d80

FString * __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::GetTestSourceFileName
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad5db0

int __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::GetTestSourceFileLine
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this)

{
  return 0x2e9;
}

// GetTests @ 141ad5dc0

/* WARNING: Removing unreachable block (ram,0x000141ad5f3e) */

void __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::GetTests
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this,
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

// RunTest @ 141ad5f60

bool __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::RunTest
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad5f90

FString * __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::GetBeautifiedTestName
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeCopyVariableSizeWithHeadTailWrapTest @ 141b1ceb0

FDequeCopyVariableSizeWithHeadTailWrapTest * __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::FDequeCopyVariableSizeWithHeadTailWrapTest
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeCopyVariableSizeWithHeadTailWrapTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Copy variable size with head/tail wrap around"
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

// TestBody @ 141b6f380

void __thiscall
Deque::FDequeCopyVariableSizeWithHeadTailWrapTest::TestBody
          (FDequeCopyVariableSizeWithHeadTailWrapTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  FAutomationTestFramework *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  int iVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ForAnyElementType local_res18;
  longlong local_res20;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_78;
  ForAnyElementType local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  iVar17 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_78.Storage.Data = (FScriptContainerElement *)0x0;
  local_78.Capacity = 0;
  local_78.Count = 0;
  local_78.Head = 0;
  local_78.Tail = 0;
  uVar6 = FMemory::QuantizeSize(0x10,0);
  iVar18 = local_78.Count;
  iVar11 = (int)(uVar6 >> 2);
  if (iVar11 < 4) {
    iVar11 = 0x7fffffff;
  }
  if (local_78.Count != 0) {
    if (local_78.Head < local_78.Tail) {
      if ((local_78.Head != 0) && (0 < local_78.Count)) {
        do {
          iVar14 = iVar18 - iVar17;
          if (local_78.Head < iVar14) {
            iVar14 = local_78.Head;
          }
          memmove(local_78.Storage.Data + (longlong)iVar17 * 4,
                  local_78.Storage.Data + ((longlong)local_78.Head + (longlong)iVar17) * 4,
                  (longlong)iVar14 << 2);
          iVar17 = iVar17 + iVar14;
        } while (iVar17 < iVar18);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,local_78.Tail,4);
      memmove(local_res18.Data,local_78.Storage.Data,(longlong)local_78.Tail << 2);
      iVar18 = local_78.Capacity - local_78.Head;
      if ((local_78.Head != 0) && (0 < iVar18)) {
        do {
          iVar14 = iVar18 - iVar17;
          if (local_78.Head < iVar18 - iVar17) {
            iVar14 = local_78.Head;
          }
          memmove(local_78.Storage.Data + (longlong)iVar17 * 4,
                  local_78.Storage.Data + ((longlong)local_78.Head + (longlong)iVar17) * 4,
                  (longlong)iVar14 << 2);
          iVar17 = iVar17 + iVar14;
        } while (iVar17 < iVar18);
      }
      memmove(local_78.Storage.Data + (longlong)iVar18 * 4,local_res18.Data,
              (longlong)local_78.Tail << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&local_78.Storage,local_78.Count,iVar11,4);
  local_78.Tail = local_78.Count;
  local_78.Head = 0;
  local_78.Capacity = iVar11;
  if (iVar11 != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  fVar3 = __real_3cf9c1f4;
  local_res20 = 4;
  do {
    iVar18 = 1;
    do {
      iVar17 = 0;
      bVar4 = Deque::Test::EmplaceLastPopFirst(&local_78,1);
      if (!bVar4) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar1 = pFVar7->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_b8,L"Condition failed");
        (*pcVar2)(pFVar1,&local_b8);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      uVar5 = rand();
      iVar14 = (int)((float)(uVar5 & 0x7fff) * fVar3);
      iVar11 = 0x3e6;
      if (iVar14 < 0x3e6) {
        iVar11 = iVar14;
      }
      iVar14 = iVar17;
      do {
        if (local_78.Count == local_78.Capacity) {
          iVar15 = local_78.Count + 1;
          uVar9 = (ulonglong)iVar15;
          if (local_78.Capacity == 0) {
            uVar12 = 4;
            if (4 < uVar9) {
              uVar12 = uVar9;
            }
          }
          else {
            uVar12 = (uVar9 * 3 >> 3) + 0x10 + uVar9;
          }
          uVar6 = FMemory::QuantizeSize(uVar12 * 4,0);
          iVar16 = (int)(uVar6 >> 2);
          if (iVar16 < iVar15) {
            iVar16 = 0x7fffffff;
          }
          TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_78,iVar16);
        }
        TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
        *(int *)(local_78.Storage.Data + (longlong)local_78.Tail * 4) = iVar14 + iVar11 + 1;
        local_78.Tail = local_78.Tail + 1;
        if (local_78.Capacity <= local_78.Tail) {
          local_78.Tail = local_78.Tail - local_78.Capacity;
        }
        local_78.Count = local_78.Count + 1;
        if (local_78.Capacity != 4) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar1 = pFVar7->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_a8,L"Condition failed");
          (*pcVar2)(pFVar1);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        iVar15 = local_78.Count;
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar18);
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = 0;
      iStack_54 = 0;
      iStack_50 = 0;
      iStack_4c = 0;
      if (local_78.Count != 0) {
        if (0 < local_78.Count) {
          uVar6 = FMemory::QuantizeSize((longlong)local_78.Count << 2,0);
          iVar11 = iStack_54;
          iVar14 = (int)(uVar6 >> 2);
          if (iVar14 < iVar15) {
            iVar14 = 0x7fffffff;
          }
          if (iStack_54 != 0) {
            if (iStack_50 < iStack_4c) {
              if ((iStack_50 != 0) && (iVar15 = iVar17, 0 < iStack_54)) {
                do {
                  iVar16 = iVar11 - iVar15;
                  if (iStack_50 < iVar16) {
                    iVar16 = iStack_50;
                  }
                  memmove(local_60.Data + (longlong)iVar15 * 4,
                          local_60.Data + ((longlong)iStack_50 + (longlong)iVar15) * 4,
                          (longlong)iVar16 << 2);
                  iVar15 = iVar15 + iVar16;
                } while (iVar15 < iVar11);
              }
            }
            else {
              local_res18.Data = (FScriptContainerElement *)0x0;
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_res18,0,iStack_4c,4);
              memmove(local_res18.Data,local_60.Data,(longlong)iStack_4c << 2);
              iVar11 = local_58 - iStack_50;
              if ((iStack_50 != 0) && (iVar15 = iVar17, 0 < iVar11)) {
                do {
                  iVar16 = iVar11 - iVar15;
                  if (iStack_50 < iVar11 - iVar15) {
                    iVar16 = iStack_50;
                  }
                  memmove(local_60.Data + (longlong)iVar15 * 4,
                          local_60.Data + ((longlong)iStack_50 + (longlong)iVar15) * 4,
                          (longlong)iVar16 << 2);
                  iVar15 = iVar15 + iVar16;
                } while (iVar15 < iVar11);
              }
              memmove(local_60.Data + (longlong)iVar11 * 4,local_res18.Data,(longlong)iStack_4c << 2
                     );
              if (local_res18.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_res18.Data);
              }
            }
          }
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_60,iStack_54,iVar14,4);
          iStack_4c = iStack_54;
          local_58 = iVar14;
        }
        iStack_50 = 0;
        if (local_78.Head < local_78.Tail) {
          FVar10.Data = local_60.Data;
          FVar13.Data = local_78.Storage.Data + (longlong)local_78.Head * 4;
          iVar11 = local_78.Count;
          iStack_54 = iStack_4c;
        }
        else {
          iVar11 = local_78.Capacity - local_78.Head;
          iStack_54 = iStack_4c;
          ConstructItems<TTestToken<int>,TTestToken<int>,int>
                    (local_60.Data,
                     (TTestToken<int> *)(local_78.Storage.Data + (longlong)local_78.Head * 4),iVar11
                    );
          FVar10.Data = local_60.Data + (longlong)iVar11 * 4;
          FVar13.Data = local_78.Storage.Data;
          iVar11 = local_78.Tail;
        }
        ConstructItems<TTestToken<int>,TTestToken<int>,int>
                  (FVar10.Data,(TTestToken<int> *)FVar13.Data,iVar11);
        iStack_54 = local_78.Count;
        iStack_4c = local_78.Count;
        if (local_58 <= local_78.Count) {
          iStack_4c = local_78.Count - local_58;
        }
      }
      iStack_50 = 0;
      if (local_78.Count == iStack_54) {
        uVar9 = (ulonglong)local_78.Head;
        lVar8 = uVar9 << 2;
        while (lVar8 != (longlong)(local_78.Head + local_78.Count) * 4) {
          iVar14 = (int)uVar9;
          uVar9 = (ulonglong)(iVar14 + 1U);
          iVar11 = iVar14;
          if (local_78.Capacity <= iVar14) {
            iVar11 = iVar14 - local_78.Capacity;
          }
          iVar15 = iVar17;
          if (local_58 <= iVar17) {
            iVar15 = iVar17 - local_58;
          }
          if (*(int *)(local_78.Storage.Data + (longlong)iVar11 * 4) !=
              *(int *)(local_60.Data + (longlong)iVar15 * 4)) goto LAB_141b6f962;
          iVar17 = iVar17 + 1;
          lVar8 = (longlong)(int)(iVar14 + 1U) * 4;
        }
      }
      else {
LAB_141b6f962:
        pFVar7 = FAutomationTestFramework::Get();
        pFVar1 = pFVar7->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_98,L"Condition failed");
        (*pcVar2)(pFVar1,&local_98);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      if (4 < local_58) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar1 = pFVar7->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_88,L"Condition failed");
        (*pcVar2)(pFVar1,&local_88);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      iVar14 = local_58;
      FVar13.Data = local_60.Data;
      iVar11 = local_78.Head;
      iVar17 = local_78.Capacity;
      FVar10.Data = local_78.Storage.Data;
      if (local_78.Count != 0) {
        iVar15 = local_78.Count;
        if (local_78.Tail <= local_78.Head) {
          DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_78.Storage.Data,local_78.Tail)
          ;
          iVar15 = iVar17 - iVar11;
        }
        DestructItems<TTestToken<int>,int>
                  ((TTestToken<int> *)(FVar10.Data + (longlong)iVar11 * 4),iVar15);
      }
      local_78.Count = 0;
      local_78.Head = 0;
      local_78.Tail = 0;
      if (iStack_54 != 0) {
        iVar11 = iStack_54;
        if (iStack_4c <= iStack_50) {
          DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar13.Data,iStack_4c);
          iVar11 = iVar14 - iStack_50;
        }
        DestructItems<TTestToken<int>,int>
                  ((TTestToken<int> *)(FVar13.Data + (longlong)iStack_50 * 4),iVar11);
      }
      iStack_54 = 0;
      iStack_50 = 0;
      iStack_4c = 0;
      if (iVar14 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,4);
        local_58 = 0;
        FVar13.Data = local_60.Data;
        iVar17 = local_78.Capacity;
      }
      if (FVar13.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar13.Data);
        iVar17 = local_78.Capacity;
      }
      FVar10.Data = local_78.Storage.Data;
      iVar18 = iVar18 + 1;
    } while (iVar18 < 5);
    local_res20 = local_res20 + -1;
    if (local_res20 == 0) {
      if (local_78.Count != 0) {
        iVar18 = local_78.Count;
        if (local_78.Tail <= local_78.Head) {
          DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_78.Storage.Data,local_78.Tail)
          ;
          iVar18 = iVar17 - local_78.Head;
        }
        DestructItems<TTestToken<int>,int>
                  ((TTestToken<int> *)(FVar10.Data + (longlong)local_78.Head * 4),iVar18);
      }
      local_78.Count = 0;
      local_78.Head = 0;
      local_78.Tail = 0;
      if (iVar17 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_78.Storage,0,0,4);
        local_78.Capacity = 0;
      }
      if (local_78.Storage.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Storage.Data);
      }
      if ((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
          TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar1 = pFVar7->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_88,L"Condition failed");
        (*pcVar2)(pFVar1,&local_88,0);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

