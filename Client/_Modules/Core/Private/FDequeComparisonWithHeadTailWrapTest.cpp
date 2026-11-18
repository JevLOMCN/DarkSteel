// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad3e40

EAutomationTestFlags __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::GetTestFlags
          (FDequeComparisonWithHeadTailWrapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad3e50

bool __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::IsStressTest
          (FDequeComparisonWithHeadTailWrapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad3e60

uint __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::GetRequiredDeviceNum
          (FDequeComparisonWithHeadTailWrapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad3e70

FString * __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::GetTestSourceFileName
          (FDequeComparisonWithHeadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad3ea0

int __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::GetTestSourceFileLine
          (FDequeComparisonWithHeadTailWrapTest *this)

{
  return 0x2a4;
}

// GetTests @ 141ad3eb0

/* WARNING: Removing unreachable block (ram,0x000141ad402e) */

void __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::GetTests
          (FDequeComparisonWithHeadTailWrapTest *this,
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

// RunTest @ 141ad4050

bool __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::RunTest
          (FDequeComparisonWithHeadTailWrapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad4080

FString * __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::GetBeautifiedTestName
          (FDequeComparisonWithHeadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeComparisonWithHeadTailWrapTest @ 141b1c3d0

FDequeComparisonWithHeadTailWrapTest * __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::FDequeComparisonWithHeadTailWrapTest
          (FDequeComparisonWithHeadTailWrapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeComparisonWithHeadTailWrapTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Comparison with head/tail wrap around"
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

// TestBody @ 141b6bf90

void __thiscall
Deque::FDequeComparisonWithHeadTailWrapTest::TestBody
          (FDequeComparisonWithHeadTailWrapTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FAutomationTestFramework *pFVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  int iVar16;
  ForAnyElementType local_res18;
  longlong local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  ForAnyElementType local_68;
  uint local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_50;
  
  iVar7 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iStack_5c = 0;
  iStack_58 = 0;
  iStack_54 = 0;
  local_50.Storage.Data = (FScriptContainerElement *)0x0;
  local_50.Capacity = 0;
  local_50.Count = 0;
  local_50.Head = 0;
  local_50.Tail = 0;
  uVar4 = FMemory::QuantizeSize(0x10,0);
  iVar16 = iStack_5c;
  uVar14 = uVar4 >> 2 & 0xffffffff;
  if ((int)(uVar4 >> 2) < 4) {
    uVar14 = 0x7fffffff;
  }
  if (iStack_5c != 0) {
    if (iStack_58 < iStack_54) {
      if ((iStack_58 != 0) && (iVar12 = iVar7, 0 < iStack_5c)) {
        do {
          iVar9 = iVar16 - iVar12;
          if (iStack_58 < iVar9) {
            iVar9 = iStack_58;
          }
          memmove(local_68.Data + (longlong)iVar12 * 4,
                  local_68.Data + ((longlong)iStack_58 + (longlong)iVar12) * 4,(longlong)iVar9 << 2)
          ;
          iVar12 = iVar12 + iVar9;
        } while (iVar12 < iVar16);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,iStack_54,4);
      memmove(local_res18.Data,local_68.Data,(longlong)iStack_54 << 2);
      iVar16 = local_60 - iStack_58;
      if ((iStack_58 != 0) && (iVar12 = iVar7, 0 < iVar16)) {
        do {
          iVar9 = iVar16 - iVar12;
          if (iStack_58 < iVar16 - iVar12) {
            iVar9 = iStack_58;
          }
          memmove(local_68.Data + (longlong)iVar12 * 4,
                  local_68.Data + ((longlong)iStack_58 + (longlong)iVar12) * 4,(longlong)iVar9 << 2)
          ;
          iVar12 = iVar12 + iVar9;
        } while (iVar12 < iVar16);
      }
      memmove(local_68.Data + (longlong)iVar16 * 4,local_res18.Data,(longlong)iStack_54 << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  uVar13 = (uint)uVar14;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,iStack_5c,uVar13,4)
  ;
  iStack_54 = iStack_5c;
  iStack_58 = 0;
  local_60 = uVar13;
  if (local_50.Capacity < 4) {
    uVar4 = FMemory::QuantizeSize(0x10,0);
    iVar16 = local_50.Count;
    iVar12 = (int)(uVar4 >> 2);
    if (iVar12 < 4) {
      iVar12 = 0x7fffffff;
    }
    if (local_50.Count != 0) {
      if (local_50.Head < local_50.Tail) {
        if ((local_50.Head != 0) && (iVar9 = iVar7, 0 < local_50.Count)) {
          do {
            iVar10 = iVar16 - iVar9;
            if (local_50.Head < iVar10) {
              iVar10 = local_50.Head;
            }
            memmove(local_50.Storage.Data + (longlong)iVar9 * 4,
                    local_50.Storage.Data + ((longlong)local_50.Head + (longlong)iVar9) * 4,
                    (longlong)iVar10 << 2);
            iVar9 = iVar9 + iVar10;
          } while (iVar9 < iVar16);
        }
      }
      else {
        local_res18.Data = (FScriptContainerElement *)0x0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_res18,0,local_50.Tail,4);
        memmove(local_res18.Data,local_50.Storage.Data,(longlong)local_50.Tail << 2);
        iVar16 = local_50.Capacity - local_50.Head;
        if ((local_50.Head != 0) && (iVar9 = iVar7, 0 < iVar16)) {
          do {
            iVar10 = iVar16 - iVar9;
            if (local_50.Head < iVar16 - iVar9) {
              iVar10 = local_50.Head;
            }
            memmove(local_50.Storage.Data + (longlong)iVar9 * 4,
                    local_50.Storage.Data + ((longlong)local_50.Head + (longlong)iVar9) * 4,
                    (longlong)iVar10 << 2);
            iVar9 = iVar9 + iVar10;
          } while (iVar9 < iVar16);
        }
        memmove(local_50.Storage.Data + (longlong)iVar16 * 4,local_res18.Data,
                (longlong)local_50.Tail << 2);
        if (local_res18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_res18.Data);
        }
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_50.Storage,local_50.Count,iVar12,4);
    uVar14 = (ulonglong)local_60;
    local_50.Tail = local_50.Count;
    local_50.Head = 0;
    local_50.Capacity = iVar12;
  }
  iVar16 = iVar7;
  if ((int)uVar14 != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_98,L"Condition failed");
    (*pcVar2)(pFVar1,&local_98);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    uVar14 = (ulonglong)local_60;
  }
  do {
    if (iStack_5c == (int)uVar14) {
      iVar12 = iStack_5c + 1;
      uVar8 = (ulonglong)iVar12;
      if ((int)uVar14 == 0) {
        uVar14 = 4;
        if (4 < uVar8) {
          uVar14 = uVar8;
        }
      }
      else {
        uVar14 = (uVar8 * 3 >> 3) + 0x10 + uVar8;
      }
      uVar4 = FMemory::QuantizeSize(uVar14 * 4,0);
      iVar9 = iStack_5c;
      uVar13 = (uint)(uVar4 >> 2);
      if ((int)uVar13 < iVar12) {
        uVar13 = 0x7fffffff;
      }
      if (iStack_5c != 0) {
        if (iStack_58 < iStack_54) {
          if ((iStack_58 != 0) && (iVar12 = iVar7, 0 < iStack_5c)) {
            do {
              iVar10 = iVar9 - iVar12;
              if (iStack_58 < iVar10) {
                iVar10 = iStack_58;
              }
              memmove(local_68.Data + (longlong)iVar12 * 4,
                      local_68.Data + ((longlong)iStack_58 + (longlong)iVar12) * 4,
                      (longlong)iVar10 << 2);
              iVar12 = iVar12 + iVar10;
            } while (iVar12 < iVar9);
          }
        }
        else {
          local_res18.Data = (FScriptContainerElement *)0x0;
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_res18,0,iStack_54,4);
          memmove(local_res18.Data,local_68.Data,(longlong)iStack_54 << 2);
          iVar12 = local_60 - iStack_58;
          if ((iStack_58 != 0) && (iVar9 = iVar7, 0 < iVar12)) {
            do {
              iVar10 = iVar12 - iVar9;
              if (iStack_58 < iVar12 - iVar9) {
                iVar10 = iStack_58;
              }
              memmove(local_68.Data + (longlong)iVar9 * 4,
                      local_68.Data + ((longlong)iStack_58 + (longlong)iVar9) * 4,
                      (longlong)iVar10 << 2);
              iVar9 = iVar9 + iVar10;
            } while (iVar9 < iVar12);
          }
          memmove(local_68.Data + (longlong)iVar12 * 4,local_res18.Data,(longlong)iStack_54 << 2);
          if (local_res18.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_res18.Data);
          }
        }
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_68,iStack_5c,uVar13,4);
      iStack_54 = iStack_5c;
      iStack_58 = 0;
      local_60 = uVar13;
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(local_68.Data + (longlong)iStack_54 * 4) = iVar16;
    iStack_54 = iStack_54 + 1;
    if ((int)local_60 <= iStack_54) {
      iStack_54 = iStack_54 - local_60;
    }
    iStack_5c = iStack_5c + 1;
    if (local_60 != 4) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_98,L"Condition failed");
      (*pcVar2)(pFVar1,&local_98);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    uVar14 = (ulonglong)local_60;
    iVar16 = iVar16 + 1;
  } while (iVar16 < 4);
  local_res20 = 4;
  do {
    iVar7 = 0;
    bVar3 = Deque::Test::EmplaceLastPopFirst(&local_50,1);
    iVar16 = iVar7;
    if (!bVar3) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_98,L"Condition failed");
      (*pcVar2)(pFVar1,&local_98);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    do {
      if (local_50.Count == local_50.Capacity) {
        iVar12 = local_50.Count + 1;
        uVar14 = (ulonglong)iVar12;
        if (local_50.Capacity == 0) {
          uVar8 = 4;
          if (4 < uVar14) {
            uVar8 = uVar14;
          }
        }
        else {
          uVar8 = (uVar14 * 3 >> 3) + 0x10 + uVar14;
        }
        uVar4 = FMemory::QuantizeSize(uVar8 * 4,0);
        iVar9 = local_50.Count;
        iVar10 = (int)(uVar4 >> 2);
        if (iVar10 < iVar12) {
          iVar10 = 0x7fffffff;
        }
        if (local_50.Count != 0) {
          if (local_50.Head < local_50.Tail) {
            if ((local_50.Head != 0) && (iVar12 = iVar7, 0 < local_50.Count)) {
              do {
                iVar11 = iVar9 - iVar12;
                if (local_50.Head < iVar11) {
                  iVar11 = local_50.Head;
                }
                memmove(local_50.Storage.Data + (longlong)iVar12 * 4,
                        local_50.Storage.Data + ((longlong)local_50.Head + (longlong)iVar12) * 4,
                        (longlong)iVar11 << 2);
                iVar12 = iVar12 + iVar11;
              } while (iVar12 < iVar9);
            }
          }
          else {
            local_res18.Data = (FScriptContainerElement *)0x0;
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_res18,0,local_50.Tail,4);
            memmove(local_res18.Data,local_50.Storage.Data,(longlong)local_50.Tail << 2);
            iVar12 = local_50.Capacity - local_50.Head;
            if ((local_50.Head != 0) && (iVar9 = iVar7, 0 < iVar12)) {
              do {
                iVar11 = iVar12 - iVar9;
                if (local_50.Head < iVar12 - iVar9) {
                  iVar11 = local_50.Head;
                }
                memmove(local_50.Storage.Data + (longlong)iVar9 * 4,
                        local_50.Storage.Data + ((longlong)local_50.Head + (longlong)iVar9) * 4,
                        (longlong)iVar11 << 2);
                iVar9 = iVar9 + iVar11;
              } while (iVar9 < iVar12);
            }
            memmove(local_50.Storage.Data + (longlong)iVar12 * 4,local_res18.Data,
                    (longlong)local_50.Tail << 2);
            if (local_res18.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_res18.Data);
            }
          }
        }
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_50.Storage,local_50.Count,iVar10,4);
        local_50.Tail = local_50.Count;
        local_50.Head = 0;
        local_50.Capacity = iVar10;
      }
      TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
      *(int *)(local_50.Storage.Data + (longlong)local_50.Tail * 4) = iVar16;
      local_50.Tail = local_50.Tail + 1;
      if (local_50.Capacity <= local_50.Tail) {
        local_50.Tail = local_50.Tail - local_50.Capacity;
      }
      local_50.Count = local_50.Count + 1;
      if (local_50.Capacity != 4) {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_88,L"Condition failed");
        (*pcVar2)(pFVar1,&local_88);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 4);
    if (iStack_5c == local_50.Count) {
      uVar14 = (ulonglong)iStack_58;
      lVar6 = uVar14 << 2;
      iVar16 = local_50.Head;
      while (lVar6 != (longlong)(iStack_58 + iStack_5c) * 4) {
        iVar12 = (int)uVar14;
        uVar14 = (ulonglong)(iVar12 + 1U);
        iVar7 = iVar12;
        if ((int)local_60 <= iVar12) {
          iVar7 = iVar12 - local_60;
        }
        iVar9 = iVar16;
        if (local_50.Capacity <= iVar16) {
          iVar9 = iVar16 - local_50.Capacity;
        }
        if (*(int *)(local_68.Data + (longlong)iVar7 * 4) !=
            *(int *)(local_50.Storage.Data + (longlong)iVar9 * 4)) goto LAB_141b6c7d4;
        iVar16 = iVar16 + 1;
        lVar6 = (longlong)(int)(iVar12 + 1U) * 4;
      }
    }
    else {
LAB_141b6c7d4:
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_78,L"Condition failed");
      (*pcVar2)(pFVar1);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    iVar12 = local_50.Head;
    iVar7 = local_50.Capacity;
    FVar15.Data = local_50.Storage.Data;
    iVar16 = iStack_58;
    uVar13 = local_60;
    if (local_50.Count != 0) {
      iVar9 = local_50.Count;
      if (local_50.Tail <= local_50.Head) {
        DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_50.Storage.Data,local_50.Tail);
        iVar9 = iVar7 - iVar12;
      }
      DestructItems<TTestToken<int>,int>
                ((TTestToken<int> *)(FVar15.Data + (longlong)iVar12 * 4),iVar9);
    }
    local_res20 = local_res20 + -1;
    local_50.Count = 0;
    local_50.Head = 0;
    local_50.Tail = 0;
    if (local_res20 == 0) {
      if (iVar7 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_50.Storage,0,0,4);
        local_50.Capacity = 0;
        FVar15.Data = local_50.Storage.Data;
        uVar13 = local_60;
        iVar16 = iStack_58;
      }
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
        uVar13 = local_60;
        iVar16 = iStack_58;
      }
      FVar15.Data = local_68.Data;
      if (iStack_5c != 0) {
        iVar7 = iStack_5c;
        if (iStack_54 <= iVar16) {
          DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_68.Data,iStack_54);
          iVar7 = uVar13 - iVar16;
        }
        DestructItems<TTestToken<int>,int>
                  ((TTestToken<int> *)(FVar15.Data + (longlong)iVar16 * 4),iVar7);
      }
      iStack_5c = 0;
      iStack_58 = 0;
      iStack_54 = 0;
      if (uVar13 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
        local_60 = 0;
      }
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
           TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
         (TTestToken<int>::DestructorCalls != 0x18)) {
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

