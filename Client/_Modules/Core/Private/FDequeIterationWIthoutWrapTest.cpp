// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ada310

EAutomationTestFlags __thiscall
Deque::FDequeIterationWIthoutWrapTest::GetTestFlags(FDequeIterationWIthoutWrapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ada320

bool __thiscall
Deque::FDequeIterationWIthoutWrapTest::IsStressTest(FDequeIterationWIthoutWrapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ada360

uint __thiscall
Deque::FDequeIterationWIthoutWrapTest::GetRequiredDeviceNum(FDequeIterationWIthoutWrapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ada3a0

FString * __thiscall
Deque::FDequeIterationWIthoutWrapTest::GetTestSourceFileName
          (FDequeIterationWIthoutWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ada3d0

int __thiscall
Deque::FDequeIterationWIthoutWrapTest::GetTestSourceFileLine(FDequeIterationWIthoutWrapTest *this)

{
  return 0x3d4;
}

// GetTests @ 141ada430

/* WARNING: Removing unreachable block (ram,0x000141ada5ae) */

void __thiscall
Deque::FDequeIterationWIthoutWrapTest::GetTests
          (FDequeIterationWIthoutWrapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
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

// RunTest @ 141ada5d0

bool __thiscall
Deque::FDequeIterationWIthoutWrapTest::RunTest
          (FDequeIterationWIthoutWrapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ada600

FString * __thiscall
Deque::FDequeIterationWIthoutWrapTest::GetBeautifiedTestName
          (FDequeIterationWIthoutWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeIterationWIthoutWrapTest @ 141b1ef50

FDequeIterationWIthoutWrapTest * __thiscall
Deque::FDequeIterationWIthoutWrapTest::FDequeIterationWIthoutWrapTest
          (FDequeIterationWIthoutWrapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeIterationWIthoutWrapTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Iteration without head/tail wrap around"
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

// TestBody @ 141b75010

void __thiscall
Deque::FDequeIterationWIthoutWrapTest::TestBody
          (FDequeIterationWIthoutWrapTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  ulong64 uVar6;
  FAutomationTestFramework *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ForAnyElementType local_res18;
  ForAnyElementType local_res20;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar15 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  iStack_44 = 0;
  uVar6 = FMemory::QuantizeSize(0x10,0);
  iVar16 = iStack_4c;
  iVar12 = (int)(uVar6 >> 2);
  if (iVar12 < 4) {
    iVar12 = 0x7fffffff;
  }
  if (iStack_4c != 0) {
    if (iStack_48 < iStack_44) {
      if ((iStack_48 != 0) && (iVar14 = iVar15, 0 < iStack_4c)) {
        do {
          iVar11 = iVar16 - iVar14;
          if (iStack_48 < iVar11) {
            iVar11 = iStack_48;
          }
          memmove(local_58.Data + (longlong)iVar14 * 4,
                  local_58.Data + ((longlong)iStack_48 + (longlong)iVar14) * 4,(longlong)iVar11 << 2
                 );
          iVar14 = iVar14 + iVar11;
        } while (iVar14 < iVar16);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,iStack_44,4);
      memmove(local_res18.Data,local_58.Data,(longlong)iStack_44 << 2);
      iVar16 = local_50 - iStack_48;
      if ((iStack_48 != 0) && (iVar14 = iVar15, 0 < iVar16)) {
        do {
          iVar11 = iVar16 - iVar14;
          if (iStack_48 < iVar16 - iVar14) {
            iVar11 = iStack_48;
          }
          memmove(local_58.Data + (longlong)iVar14 * 4,
                  local_58.Data + ((longlong)iStack_48 + (longlong)iVar14) * 4,(longlong)iVar11 << 2
                 );
          iVar14 = iVar14 + iVar11;
        } while (iVar14 < iVar16);
      }
      memmove(local_58.Data + (longlong)iVar16 * 4,local_res18.Data,(longlong)iStack_44 << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,iStack_4c,iVar12,4)
  ;
  iStack_44 = iStack_4c;
  iStack_48 = 0;
  iVar16 = iVar15;
  local_50 = iVar12;
  if (iVar12 != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_98,L"Condition failed");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  do {
    if (iStack_4c == local_50) {
      iVar12 = iStack_4c + 1;
      uVar9 = (ulonglong)iVar12;
      if (local_50 == 0) {
        uVar10 = 4;
        if (4 < uVar9) {
          uVar10 = uVar9;
        }
      }
      else {
        uVar10 = (uVar9 * 3 >> 3) + 0x10 + uVar9;
      }
      uVar6 = FMemory::QuantizeSize(uVar10 * 4,0);
      iVar14 = iStack_4c;
      iVar11 = (int)(uVar6 >> 2);
      if (iVar11 < iVar12) {
        iVar11 = 0x7fffffff;
      }
      if (iStack_4c != 0) {
        if (iStack_48 < iStack_44) {
          if ((iStack_48 != 0) && (iVar12 = iVar15, 0 < iStack_4c)) {
            do {
              iVar13 = iVar14 - iVar12;
              if (iStack_48 < iVar13) {
                iVar13 = iStack_48;
              }
              memmove(local_58.Data + (longlong)iVar12 * 4,
                      local_58.Data + ((longlong)iStack_48 + (longlong)iVar12) * 4,
                      (longlong)iVar13 << 2);
              iVar12 = iVar12 + iVar13;
            } while (iVar12 < iVar14);
          }
        }
        else {
          local_res20.Data = (FScriptContainerElement *)0x0;
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_res20,0,iStack_44,4);
          memmove(local_res20.Data,local_58.Data,(longlong)iStack_44 << 2);
          iVar12 = local_50 - iStack_48;
          if ((iStack_48 != 0) && (iVar14 = iVar15, 0 < iVar12)) {
            do {
              iVar13 = iVar12 - iVar14;
              if (iStack_48 < iVar12 - iVar14) {
                iVar13 = iStack_48;
              }
              memmove(local_58.Data + (longlong)iVar14 * 4,
                      local_58.Data + ((longlong)iStack_48 + (longlong)iVar14) * 4,
                      (longlong)iVar13 << 2);
              iVar14 = iVar14 + iVar13;
            } while (iVar14 < iVar12);
          }
          memmove(local_58.Data + (longlong)iVar12 * 4,local_res20.Data,(longlong)iStack_44 << 2);
          if (local_res20.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_res20.Data);
          }
        }
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_58,iStack_4c,iVar11,4);
      iStack_44 = iStack_4c;
      iStack_48 = 0;
      local_50 = iVar11;
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(local_58.Data + (longlong)iStack_44 * 4) = iVar16;
    iStack_44 = iStack_44 + 1;
    if (local_50 <= iStack_44) {
      iStack_44 = iStack_44 - local_50;
    }
    iStack_4c = iStack_4c + 1;
    if (local_50 != 4) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_88,L"Condition failed");
      (*pcVar2)(pFVar1,&local_88,0);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 4);
  if ((iStack_4c < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Count)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                         ,0x248,L"Parameter index %d exceeds container size %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar16 = iStack_48;
  if (local_50 <= iStack_48) {
    iVar16 = iStack_48 - local_50;
  }
  if (*(int *)(local_58.Data + (longlong)iVar16 * 4) != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((iStack_4c < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Count)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                         ,0x248,L"Parameter index %d exceeds container size %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar16 = iStack_48 + 1;
  if (local_50 <= iVar16) {
    iVar16 = iVar16 - local_50;
  }
  if (*(int *)(local_58.Data + (longlong)iVar16 * 4) != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((iStack_4c < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Count)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                         ,0x248,L"Parameter index %d exceeds container size %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar16 = iStack_48 + 2;
  if (local_50 <= iVar16) {
    iVar16 = iVar16 - local_50;
  }
  if (*(int *)(local_58.Data + (longlong)iVar16 * 4) != 2) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((iStack_4c < 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Count)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                         ,0x248,L"Parameter index %d exceeds container size %d"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar16 = iStack_48 + 3;
  if (local_50 <= iVar16) {
    iVar16 = iVar16 - local_50;
  }
  if (*(int *)(local_58.Data + (longlong)iVar16 * 4) != 3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  iVar12 = local_50;
  FVar4.Data = local_58.Data;
  uVar9 = (ulonglong)iStack_48;
  iVar14 = iStack_4c + iStack_48;
  lVar8 = uVar9 << 2;
  FVar3.Data = local_58.Data;
  iVar16 = iStack_4c;
  while (local_58.Data = FVar3.Data, iStack_4c = iVar16, lVar8 != (longlong)iVar14 * 4) {
    iVar11 = (int)uVar9;
    iVar16 = iVar11;
    if (iVar12 <= iVar11) {
      iVar16 = iVar11 - iVar12;
    }
    if (*(int *)(FVar4.Data + (longlong)iVar16 * 4) != iVar15) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_78,L"Condition failed");
      (*pcVar2)(pFVar1,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    uVar9 = (ulonglong)(iVar11 + 1U);
    iVar15 = iVar15 + 1;
    FVar3.Data = local_58.Data;
    iVar16 = iStack_4c;
    lVar8 = (longlong)(int)(iVar11 + 1U) * 4;
  }
  if (iVar16 != 0) {
    if (iStack_44 <= iStack_48) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar3.Data,iStack_44);
      iVar16 = local_50 - iStack_48;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)(FVar3.Data + (longlong)iStack_48 * 4),iVar16);
  }
  iStack_4c = 0;
  iStack_48 = 0;
  iStack_44 = 0;
  if (local_50 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    local_50 = 0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 4)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

