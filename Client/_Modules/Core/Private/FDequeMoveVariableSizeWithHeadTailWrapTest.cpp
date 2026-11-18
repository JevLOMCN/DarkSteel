// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad90a0

EAutomationTestFlags __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::GetTestFlags
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad90b0

bool __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::IsStressTest
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad90c0

uint __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::GetRequiredDeviceNum
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad90d0

FString * __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::GetTestSourceFileName
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad9100

int __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::GetTestSourceFileLine
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this)

{
  return 0x38a;
}

// GetTests @ 141ad9110

/* WARNING: Removing unreachable block (ram,0x000141ad928e) */

void __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::GetTests
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this,
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

// RunTest @ 141ad92b0

bool __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::RunTest
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad92e0

FString * __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::GetBeautifiedTestName
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeMoveVariableSizeWithHeadTailWrapTest @ 141b1f690

FDequeMoveVariableSizeWithHeadTailWrapTest * __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::FDequeMoveVariableSizeWithHeadTailWrapTest
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeMoveVariableSizeWithHeadTailWrapTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Move variable size with head/tail wrap around"
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

// TestBody @ 141b77210

void __thiscall
Deque::FDequeMoveVariableSizeWithHeadTailWrapTest::TestBody
          (FDequeMoveVariableSizeWithHeadTailWrapTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ForAnyElementType FVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int local_res18;
  ForAnyElementType local_res20;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_e8;
  ForAnyElementType local_d0;
  int local_c8;
  undefined8 local_c4;
  int local_bc;
  ForAnyElementType local_b8;
  longlong local_b0;
  FScriptContainerElement local_a8 [8];
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  fVar4 = __real_3cf9c1f4;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_e8.Storage.Data = (FScriptContainerElement *)0x0;
  local_e8.Capacity = 0;
  local_e8.Count = 0;
  local_e8.Head = 0;
  local_e8.Tail = 0;
  local_b0 = 4;
  do {
    local_res18 = 1;
    do {
      iVar18 = 0;
      if (local_e8.Capacity < 4) {
        uVar8 = FMemory::QuantizeSize(0x10,0);
        iVar17 = local_e8.Count;
        iVar7 = (int)(uVar8 >> 2);
        if (iVar7 < 4) {
          iVar7 = 0x7fffffff;
        }
        if (local_e8.Count != 0) {
          if (local_e8.Head < local_e8.Tail) {
            if ((local_e8.Head != 0) && (iVar15 = iVar18, 0 < local_e8.Count)) {
              do {
                iVar12 = iVar17 - iVar15;
                if (local_e8.Head < iVar12) {
                  iVar12 = local_e8.Head;
                }
                memmove(local_e8.Storage.Data + (longlong)iVar15 * 4,
                        local_e8.Storage.Data + ((longlong)local_e8.Head + (longlong)iVar15) * 4,
                        (longlong)iVar12 << 2);
                iVar15 = iVar15 + iVar12;
              } while (iVar15 < iVar17);
            }
          }
          else {
            local_res20.Data = (FScriptContainerElement *)0x0;
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_res20,0,local_e8.Tail,4);
            memmove(local_res20.Data,local_e8.Storage.Data,(longlong)local_e8.Tail << 2);
            iVar17 = local_e8.Capacity - local_e8.Head;
            if ((local_e8.Head != 0) && (iVar15 = iVar18, 0 < iVar17)) {
              do {
                iVar12 = iVar17 - iVar15;
                if (local_e8.Head < iVar17 - iVar15) {
                  iVar12 = local_e8.Head;
                }
                memmove(local_e8.Storage.Data + (longlong)iVar15 * 4,
                        local_e8.Storage.Data + ((longlong)local_e8.Head + (longlong)iVar15) * 4,
                        (longlong)iVar12 << 2);
                iVar15 = iVar15 + iVar12;
              } while (iVar15 < iVar17);
            }
            memmove(local_e8.Storage.Data + (longlong)iVar17 * 4,local_res20.Data,
                    (longlong)local_e8.Tail << 2);
            if (local_res20.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_res20.Data);
            }
          }
        }
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_e8.Storage,local_e8.Count,iVar7,4);
        local_e8.Tail = local_e8.Count;
        local_e8.Head = 0;
        local_e8.Capacity = iVar7;
      }
      if (local_e8.Capacity != 4) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_a0,L"Condition failed");
        (*pcVar3)(pFVar2,&local_a0);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      bVar5 = Deque::Test::EmplaceLastPopFirst(&local_e8,1);
      if (!bVar5) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_90,L"Condition failed");
        (*pcVar3)(pFVar2,&local_90);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      uVar6 = rand();
      iVar7 = (int)((float)(uVar6 & 0x7fff) * fVar4);
      iVar17 = 0x3e6;
      if (iVar7 < 0x3e6) {
        iVar17 = iVar7;
      }
      do {
        if (local_e8.Count == local_e8.Capacity) {
          iVar7 = local_e8.Count + 1;
          uVar10 = (ulonglong)iVar7;
          if (local_e8.Capacity == 0) {
            uVar11 = 4;
            if (4 < uVar10) {
              uVar11 = uVar10;
            }
          }
          else {
            uVar11 = (uVar10 * 3 >> 3) + 0x10 + uVar10;
          }
          uVar8 = FMemory::QuantizeSize(uVar11 * 4,0);
          iVar15 = local_e8.Count;
          iVar12 = (int)(uVar8 >> 2);
          if (iVar12 < iVar7) {
            iVar12 = 0x7fffffff;
          }
          if (local_e8.Count != 0) {
            if (local_e8.Head < local_e8.Tail) {
              if ((local_e8.Head != 0) && (iVar7 = 0, 0 < local_e8.Count)) {
                do {
                  iVar13 = iVar15 - iVar7;
                  if (local_e8.Head < iVar13) {
                    iVar13 = local_e8.Head;
                  }
                  memmove(local_e8.Storage.Data + (longlong)iVar7 * 4,
                          local_e8.Storage.Data + ((longlong)local_e8.Head + (longlong)iVar7) * 4,
                          (longlong)iVar13 << 2);
                  iVar7 = iVar7 + iVar13;
                } while (iVar7 < iVar15);
              }
            }
            else {
              local_b8.Data = (FScriptContainerElement *)0x0;
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_b8,0,local_e8.Tail,4);
              memmove(local_b8.Data,local_e8.Storage.Data,(longlong)local_e8.Tail << 2);
              iVar7 = local_e8.Capacity - local_e8.Head;
              if ((local_e8.Head != 0) && (iVar15 = 0, 0 < iVar7)) {
                do {
                  iVar13 = iVar7 - iVar15;
                  if (local_e8.Head < iVar7 - iVar15) {
                    iVar13 = local_e8.Head;
                  }
                  memmove(local_e8.Storage.Data + (longlong)iVar15 * 4,
                          local_e8.Storage.Data + ((longlong)local_e8.Head + (longlong)iVar15) * 4,
                          (longlong)iVar13 << 2);
                  iVar15 = iVar15 + iVar13;
                } while (iVar15 < iVar7);
              }
              memmove(local_e8.Storage.Data + (longlong)iVar7 * 4,local_b8.Data,
                      (longlong)local_e8.Tail << 2);
              if (local_b8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data);
              }
            }
          }
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_e8.Storage,local_e8.Count,iVar12,4);
          local_e8.Tail = local_e8.Count;
          local_e8.Head = 0;
          local_e8.Capacity = iVar12;
        }
        TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
        *(int *)(local_e8.Storage.Data + (longlong)local_e8.Tail * 4) = iVar18 + iVar17 + 1;
        local_e8.Tail = local_e8.Tail + 1;
        if (local_e8.Capacity <= local_e8.Tail) {
          local_e8.Tail = local_e8.Tail - local_e8.Capacity;
        }
        local_e8.Count = local_e8.Count + 1;
        if (local_e8.Capacity != 4) {
          pFVar9 = FAutomationTestFramework::Get();
          pFVar2 = pFVar9->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_80,L"Condition failed");
          (*pcVar3)(pFVar2,&local_80);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        iVar15 = local_e8.Head;
        iVar7 = local_e8.Count;
        iVar18 = iVar18 + 1;
      } while (iVar18 < local_res18);
      local_d0.Data = (FScriptContainerElement *)0x0;
      local_c4._0_4_ = 0;
      local_c4._4_4_ = 0;
      local_bc = 0;
      if (local_e8.Count == 0) {
        local_c8 = 0;
      }
      else {
        local_d0.Data = local_e8.Storage.Data;
        local_bc = local_e8.Tail;
        local_e8.Head = 0;
        local_e8.Tail = 0;
        local_e8.Storage.Data = (FScriptContainerElement *)0x0;
        local_c8 = local_e8.Capacity;
        local_c4._4_4_ = iVar15;
        local_e8.Capacity = 0;
        local_e8.Count = 0;
        local_c4._0_4_ = iVar7;
      }
      TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
      iVar18 = iVar17 + 1;
      while ((int)local_c4 != 0) {
        pFVar1 = local_d0.Data + (longlong)local_c4._4_4_ * 4;
        if ((pFVar1 == local_a8) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3577702131160842175>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                               ,0x41,"&Other != this"), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
        local_c4._4_4_ = local_c4._4_4_ + 1;
        TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
        if (local_c8 <= local_c4._4_4_) {
          local_c4._4_4_ = local_c4._4_4_ - local_c8;
        }
        local_c4._0_4_ = (int)local_c4 + -1;
        iVar17 = iVar18 + 1;
        bVar5 = *(int *)pFVar1 != iVar18;
        iVar18 = iVar17;
        if (bVar5) {
          pFVar9 = FAutomationTestFramework::Get();
          pFVar2 = pFVar9->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_70,L"Condition failed");
          (*pcVar3)(pFVar2);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
      }
      TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
      local_c4 = 0;
      local_bc = 0;
      if (local_c8 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,4);
        local_c8 = 0;
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      iVar17 = local_e8.Head;
      iVar18 = local_e8.Capacity;
      FVar14.Data = local_e8.Storage.Data;
      local_res18 = local_res18 + 1;
    } while (local_res18 < 5);
    local_b0 = local_b0 + -1;
    if (local_b0 == 0) {
      if (local_e8.Count != 0) {
        lVar16 = (longlong)local_e8.Head;
        iVar7 = local_e8.Count;
        if (local_e8.Tail <= local_e8.Head) {
          DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_e8.Storage.Data,local_e8.Tail)
          ;
          iVar7 = iVar18 - iVar17;
        }
        DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar14.Data + lVar16 * 4),iVar7);
      }
      local_e8.Count = 0;
      local_e8.Head = 0;
      local_e8.Tail = 0;
      if (iVar18 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_e8.Storage,0,0,4);
        local_e8.Capacity = 0;
        FVar14.Data = local_e8.Storage.Data;
      }
      if (FVar14.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar14.Data);
      }
      if ((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
          TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(local_60,L"Condition failed");
        (*pcVar3)(pFVar2,local_60,0);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

