// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad0ac0

EAutomationTestFlags __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::GetTestFlags
          (FDequeEmplaceFirstPopLastSingleElementTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad0ad0

bool __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::IsStressTest
          (FDequeEmplaceFirstPopLastSingleElementTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad0ae0

uint __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::GetRequiredDeviceNum
          (FDequeEmplaceFirstPopLastSingleElementTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad0af0

FString * __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::GetTestSourceFileName
          (FDequeEmplaceFirstPopLastSingleElementTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad0b20

int __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::GetTestSourceFileLine
          (FDequeEmplaceFirstPopLastSingleElementTest *this)

{
  return 0x202;
}

// GetTests @ 141ad0b30

/* WARNING: Removing unreachable block (ram,0x000141ad0cae) */

void __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::GetTests
          (FDequeEmplaceFirstPopLastSingleElementTest *this,
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

// RunTest @ 141ad0cd0

bool __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::RunTest
          (FDequeEmplaceFirstPopLastSingleElementTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad0d00

FString * __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::GetBeautifiedTestName
          (FDequeEmplaceFirstPopLastSingleElementTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeEmplaceFirstPopLastSingleElementTest @ 141b1d7c0

FDequeEmplaceFirstPopLastSingleElementTest * __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::FDequeEmplaceFirstPopLastSingleElementTest
          (FDequeEmplaceFirstPopLastSingleElementTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeEmplaceFirstPopLastSingleElementTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::EmplaceFirst/PopLast single element"
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

// TestBody @ 141b71920

void __thiscall
Deque::FDequeEmplaceFirstPopLastSingleElementTest::TestBody
          (FDequeEmplaceFirstPopLastSingleElementTest *this,FString *param_1)

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
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  iVar9 = 0;
  TTestToken<int>::ConstructorCalls = 0;
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
  iStack_98 = iVar11 + -1;
  if (iVar11 <= iStack_98) {
    iStack_98 = -1;
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_a8.Data + (longlong)iStack_98 * 4) = 0;
  iStack_9c = iStack_9c + 1;
  local_a0 = iVar11;
  if (iVar11 == 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar2)(pFVar1,&local_90);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (iStack_9c != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_80,L"Condition failed");
    (*pcVar2)(pFVar1,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  if (iStack_9c == 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_70,L"Condition failed");
    (*pcVar2)(pFVar1,&local_70);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if ((iStack_9c < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Count)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                         ,0x248,L"Parameter index %d exceeds container size %d"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
  iStack_94 = iStack_94 + -1 + local_a0;
  if (local_a0 <= iStack_94) {
    iStack_94 = iStack_94 - local_a0;
  }
  iStack_9c = iStack_9c + -1;
  if (local_a0 == 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_60,L"Condition failed");
    (*pcVar2)(pFVar1);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  FVar7.Data = local_a8.Data;
  if (iStack_9c != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_50,L"Condition failed");
    (*pcVar2)(pFVar1);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    FVar7.Data = local_a8.Data;
    if (iStack_9c != 0) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_40,L"Condition failed");
      (*pcVar2)(pFVar1,&local_40);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      iVar8 = iStack_98;
      FVar7.Data = local_a8.Data;
      if (iStack_9c != 0) {
        lVar10 = (longlong)iStack_98;
        if (iStack_98 < iStack_94) {
          DestructItems<TTestToken<int>,int>
                    ((TTestToken<int> *)(local_a8.Data + lVar10 * 4),iStack_9c);
        }
        else {
          DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_a8.Data,iStack_94);
          DestructItems<TTestToken<int>,int>
                    ((TTestToken<int> *)(FVar7.Data + lVar10 * 4),local_a0 - iVar8);
        }
      }
    }
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
     (TTestToken<int>::DestructorCalls != 1)) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_30,L"Condition failed");
    (*pcVar2)(pFVar1,&local_30,0);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

