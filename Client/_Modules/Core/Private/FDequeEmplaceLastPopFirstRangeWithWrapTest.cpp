// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad0280

EAutomationTestFlags __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::GetTestFlags
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad0290

bool __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::IsStressTest
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad02a0

uint __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::GetRequiredDeviceNum
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad02b0

FString * __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::GetTestSourceFileName
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad02e0

int __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::GetTestSourceFileLine
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this)

{
  return 499;
}

// GetTests @ 141ad02f0

/* WARNING: Removing unreachable block (ram,0x000141ad046e) */

void __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::GetTests
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this,
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

// RunTest @ 141ad0490

bool __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::RunTest
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad04c0

FString * __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::GetBeautifiedTestName
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeEmplaceLastPopFirstRangeWithWrapTest @ 141b1e0d0

FDequeEmplaceLastPopFirstRangeWithWrapTest * __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::FDequeEmplaceLastPopFirstRangeWithWrapTest
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeEmplaceLastPopFirstRangeWithWrapTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::EmplaceLast/PopFirst range with head/tail wrap around"
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

// TestBody @ 141b72c00

void __thiscall
Deque::FDequeEmplaceLastPopFirstRangeWithWrapTest::TestBody
          (FDequeEmplaceLastPopFirstRangeWithWrapTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FAutomationTestFramework *pFVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ForAnyElementType local_res18;
  FString local_58;
  FString local_48;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_38;
  
  iVar11 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_38.Storage.Data = (FScriptContainerElement *)0x0;
  local_38.Capacity = 0;
  local_38.Count = 0;
  local_38.Head = 0;
  local_38.Tail = 0;
  uVar4 = FMemory::QuantizeSize(0x10,0);
  iVar9 = local_38.Count;
  iVar6 = (int)(uVar4 >> 2);
  if (iVar6 < 4) {
    iVar6 = 0x7fffffff;
  }
  if (local_38.Count != 0) {
    if (local_38.Head < local_38.Tail) {
      if ((local_38.Head != 0) && (0 < local_38.Count)) {
        do {
          iVar7 = iVar9 - iVar11;
          if (local_38.Head < iVar7) {
            iVar7 = local_38.Head;
          }
          memmove(local_38.Storage.Data + (longlong)iVar11 * 4,
                  local_38.Storage.Data + ((longlong)local_38.Head + (longlong)iVar11) * 4,
                  (longlong)iVar7 << 2);
          iVar11 = iVar11 + iVar7;
        } while (iVar11 < iVar9);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,local_38.Tail,4);
      memmove(local_res18.Data,local_38.Storage.Data,(longlong)local_38.Tail << 2);
      iVar9 = local_38.Capacity - local_38.Head;
      if ((local_38.Head != 0) && (0 < iVar9)) {
        do {
          iVar7 = iVar9 - iVar11;
          if (local_38.Head < iVar9 - iVar11) {
            iVar7 = local_38.Head;
          }
          memmove(local_38.Storage.Data + (longlong)iVar11 * 4,
                  local_38.Storage.Data + ((longlong)local_38.Head + (longlong)iVar11) * 4,
                  (longlong)iVar7 << 2);
          iVar11 = iVar11 + iVar7;
        } while (iVar11 < iVar9);
      }
      memmove(local_38.Storage.Data + (longlong)iVar9 * 4,local_res18.Data,
              (longlong)local_38.Tail << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&local_38.Storage,local_38.Count,iVar6,4);
  local_38.Tail = local_38.Count;
  local_38.Head = 0;
  local_38.Capacity = iVar6;
  bVar3 = Deque::Test::EmplaceLastPopFirst(&local_38,3);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Capacity != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = Deque::Test::EmplaceLastPopFirst(&local_38,3);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Capacity != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = Deque::Test::EmplaceLastPopFirst(&local_38,3);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Capacity != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = Deque::Test::EmplaceLastPopFirst(&local_38,3);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Capacity != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  iVar11 = local_38.Head;
  iVar9 = local_38.Capacity;
  FVar8.Data = local_38.Storage.Data;
  if (local_38.Count != 0) {
    lVar10 = (longlong)local_38.Head;
    iVar6 = local_38.Count;
    if (local_38.Tail <= local_38.Head) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_38.Storage.Data,local_38.Tail);
      iVar6 = iVar9 - iVar11;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar8.Data + lVar10 * 4),iVar6);
  }
  local_38.Count = 0;
  local_38.Head = 0;
  local_38.Tail = 0;
  if (iVar9 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38.Storage,0,0,4);
    local_38.Capacity = 0;
    FVar8.Data = local_38.Storage.Data;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0xc)) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

