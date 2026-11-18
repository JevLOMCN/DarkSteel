// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acc050

EAutomationTestFlags __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::GetTestFlags
          (FDequePushLastSingleElementFromMoveTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acc060

bool __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::IsStressTest
          (FDequePushLastSingleElementFromMoveTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acc080

uint __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::GetRequiredDeviceNum
          (FDequePushLastSingleElementFromMoveTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acc0a0

FString * __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::GetTestSourceFileName
          (FDequePushLastSingleElementFromMoveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acc0e0

int __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::GetTestSourceFileLine
          (FDequePushLastSingleElementFromMoveTest *this)

{
  return 0x14e;
}

// GetTests @ 141acc130

/* WARNING: Removing unreachable block (ram,0x000141acc2ae) */

void __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::GetTests
          (FDequePushLastSingleElementFromMoveTest *this,
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

// RunTest @ 141acc470

bool __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::RunTest
          (FDequePushLastSingleElementFromMoveTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acc4a0

FString * __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::GetBeautifiedTestName
          (FDequePushLastSingleElementFromMoveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequePushLastSingleElementFromMoveTest @ 141b20340

FDequePushLastSingleElementFromMoveTest * __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::FDequePushLastSingleElementFromMoveTest
          (FDequePushLastSingleElementFromMoveTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequePushLastSingleElementFromMoveTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::PushLast single element from move")
  ;
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

// TestBody @ 141b798f0

void __thiscall
Deque::FDequePushLastSingleElementFromMoveTest::TestBody
          (FDequePushLastSingleElementFromMoveTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FAutomationTestFramework *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ForAnyElementType local_res18;
  ForAnyElementType local_a8;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  FScriptContainerElement local_90 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar9 = 0;
  TTestToken<int>::ConstructorCalls = 1;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  iStack_9c = 0;
  iStack_98 = 0;
  iStack_94 = 0;
  uVar4 = FMemory::QuantizeSize(0x10,0);
  iVar8 = iStack_9c;
  iVar11 = (int)(uVar4 >> 2);
  if (iVar11 < 1) {
    iVar11 = 0x7fffffff;
  }
  if (iStack_9c != 0) {
    if (iStack_98 < iStack_94) {
      if ((iStack_98 != 0) && (0 < iStack_9c)) {
        do {
          iVar6 = iVar8 - iVar9;
          if (iStack_98 < iVar6) {
            iVar6 = iStack_98;
          }
          memmove(local_a8.Data + (longlong)iVar9 * 4,
                  local_a8.Data + ((longlong)iStack_98 + (longlong)iVar9) * 4,(longlong)iVar6 << 2);
          iVar9 = iVar9 + iVar6;
        } while (iVar9 < iVar8);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,iStack_94,4);
      memmove(local_res18.Data,local_a8.Data,(longlong)iStack_94 << 2);
      iVar8 = local_a0 - iStack_98;
      if ((iStack_98 != 0) && (0 < iVar8)) {
        do {
          iVar6 = iVar8 - iVar9;
          if (iStack_98 < iVar8 - iVar9) {
            iVar6 = iStack_98;
          }
          memmove(local_a8.Data + (longlong)iVar9 * 4,
                  local_a8.Data + ((longlong)iStack_98 + (longlong)iVar9) * 4,(longlong)iVar6 << 2);
          iVar9 = iVar9 + iVar6;
        } while (iVar9 < iVar8);
      }
      memmove(local_a8.Data + (longlong)iVar8 * 4,local_res18.Data,(longlong)iStack_94 << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,iStack_9c,iVar11,4)
  ;
  iStack_94 = iStack_9c;
  iStack_98 = 0;
  *(undefined4 *)(local_a8.Data + (longlong)iStack_9c * 4) = 0;
  local_a0 = iVar11;
  if ((local_90 == local_a8.Data + (longlong)iStack_9c * 4) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3577702131160842208>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                         ,0x20,"&Other != this"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TTestToken<int>::MoveConstructorCalls = TTestToken<int>::MoveConstructorCalls + 1;
  iStack_94 = iStack_94 + 1;
  if (local_a0 <= iStack_94) {
    iStack_94 = iStack_94 - local_a0;
  }
  iStack_9c = iStack_9c + 1;
  if (local_a0 == 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Condition failed");
    (*pcVar2)(pFVar1,&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (iStack_9c != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Condition failed");
    (*pcVar2)(pFVar1,&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (iStack_9c == 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  iVar8 = iStack_98;
  FVar7.Data = local_a8.Data;
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
  if (iStack_9c != 0) {
    lVar10 = (longlong)iStack_98;
    iVar9 = iStack_9c;
    if (iStack_94 <= iStack_98) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_a8.Data,iStack_94);
      iVar9 = local_a0 - iVar8;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar7.Data + lVar10 * 4),iVar9);
  }
  iStack_9c = 0;
  iStack_98 = 0;
  iStack_94 = 0;
  if (local_a0 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
    local_a0 = 0;
    FVar7.Data = local_a8.Data;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 2)) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (TTestToken<int>::ConstructorCalls != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (TTestToken<int>::CopyConstructorCalls != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (TTestToken<int>::MoveConstructorCalls != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Condition failed");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

