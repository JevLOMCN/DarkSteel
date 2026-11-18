// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad2070

EAutomationTestFlags __thiscall
Deque::FDequeTryPopLastTest::GetTestFlags(FDequeTryPopLastTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad2080

bool __thiscall Deque::FDequeTryPopLastTest::IsStressTest(FDequeTryPopLastTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad2090

uint __thiscall Deque::FDequeTryPopLastTest::GetRequiredDeviceNum(FDequeTryPopLastTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad20a0

FString * __thiscall
Deque::FDequeTryPopLastTest::GetTestSourceFileName
          (FDequeTryPopLastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad20d0

int __thiscall Deque::FDequeTryPopLastTest::GetTestSourceFileLine(FDequeTryPopLastTest *this)

{
  return 0x260;
}

// GetTests @ 141ad20e0

/* WARNING: Removing unreachable block (ram,0x000141ad225e) */

void __thiscall
Deque::FDequeTryPopLastTest::GetTests
          (FDequeTryPopLastTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad22d0

bool __thiscall Deque::FDequeTryPopLastTest::RunTest(FDequeTryPopLastTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad2300

FString * __thiscall
Deque::FDequeTryPopLastTest::GetBeautifiedTestName
          (FDequeTryPopLastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeTryPopLastTest @ 141b20ff0

FDequeTryPopLastTest * __thiscall
Deque::FDequeTryPopLastTest::FDequeTryPopLastTest(FDequeTryPopLastTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeTryPopLastTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TDeque::TryPopLast");
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

// TestBody @ 141b7c220

void __thiscall Deque::FDequeTryPopLastTest::TestBody(FDequeTryPopLastTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  ulong64 uVar6;
  FAutomationTestFramework *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ForAnyElementType local_res18 [2];
  FScriptContainerElement local_98 [8];
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_40;
  
  iVar15 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_40.Storage.Data = (FScriptContainerElement *)0x0;
  local_40.Capacity = 0;
  local_40.Count = 0;
  local_40.Head = 0;
  local_40.Tail = 0;
  uVar6 = FMemory::QuantizeSize(0x10,0);
  iVar11 = local_40.Count;
  iVar13 = (int)(uVar6 >> 2);
  if (iVar13 < 4) {
    iVar13 = 0x7fffffff;
  }
  if (local_40.Count != 0) {
    if (local_40.Head < local_40.Tail) {
      if ((local_40.Head != 0) && (iVar12 = iVar15, 0 < local_40.Count)) {
        do {
          iVar10 = iVar11 - iVar12;
          if (local_40.Head < iVar10) {
            iVar10 = local_40.Head;
          }
          memmove(local_40.Storage.Data + (longlong)iVar12 * 4,
                  local_40.Storage.Data + ((longlong)local_40.Head + (longlong)iVar12) * 4,
                  (longlong)iVar10 << 2);
          iVar12 = iVar12 + iVar10;
        } while (iVar12 < iVar11);
      }
    }
    else {
      local_res18[0].Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (local_res18,0,local_40.Tail,4);
      memmove(local_res18[0].Data,local_40.Storage.Data,(longlong)local_40.Tail << 2);
      iVar11 = local_40.Capacity - local_40.Head;
      if ((local_40.Head != 0) && (iVar12 = iVar15, 0 < iVar11)) {
        do {
          iVar10 = iVar11 - iVar12;
          if (local_40.Head < iVar11 - iVar12) {
            iVar10 = local_40.Head;
          }
          memmove(local_40.Storage.Data + (longlong)iVar12 * 4,
                  local_40.Storage.Data + ((longlong)local_40.Head + (longlong)iVar12) * 4,
                  (longlong)iVar10 << 2);
          iVar12 = iVar12 + iVar10;
        } while (iVar12 < iVar11);
      }
      memmove(local_40.Storage.Data + (longlong)iVar11 * 4,local_res18[0].Data,
              (longlong)local_40.Tail << 2);
      if (local_res18[0].Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18[0].Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&local_40.Storage,local_40.Count,iVar13,4);
  local_40.Tail = local_40.Count;
  local_40.Head = 0;
  local_40.Capacity = iVar13;
  if (iVar13 != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_80,L"Condition failed");
    (*pcVar3)(pFVar2,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  if (local_40.Count == local_40.Capacity) {
    iVar11 = local_40.Count + 1;
    uVar8 = (ulonglong)iVar11;
    if (local_40.Capacity == 0) {
      uVar9 = 4;
      if (4 < uVar8) {
        uVar9 = uVar8;
      }
    }
    else {
      uVar9 = (uVar8 * 3 >> 3) + 0x10 + uVar8;
    }
    uVar6 = FMemory::QuantizeSize(uVar9 * 4,0);
    iVar13 = (int)(uVar6 >> 2);
    if (iVar13 < iVar11) {
      iVar13 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_40,iVar13);
  }
  local_40.Head = local_40.Head + -1 + local_40.Capacity;
  if (local_40.Capacity <= local_40.Head) {
    local_40.Head = local_40.Head - local_40.Capacity;
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_40.Storage.Data + (longlong)local_40.Head * 4) = 0;
  local_40.Count = local_40.Count + 1;
  if (local_40.Capacity != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar3)(pFVar2,&local_90);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_40.Count == local_40.Capacity) {
    iVar11 = local_40.Count + 1;
    uVar8 = (ulonglong)iVar11;
    if (local_40.Capacity == 0) {
      uVar9 = 4;
      if (4 < uVar8) {
        uVar9 = uVar8;
      }
    }
    else {
      uVar9 = (uVar8 * 3 >> 3) + 0x10 + uVar8;
    }
    uVar6 = FMemory::QuantizeSize(uVar9 * 4,0);
    iVar13 = (int)(uVar6 >> 2);
    if (iVar13 < iVar11) {
      iVar13 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_40,iVar13);
  }
  local_40.Head = local_40.Head + -1 + local_40.Capacity;
  if (local_40.Capacity <= local_40.Head) {
    local_40.Head = local_40.Head - local_40.Capacity;
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_40.Storage.Data + (longlong)local_40.Head * 4) = 1;
  local_40.Count = local_40.Count + 1;
  if (local_40.Capacity != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar3)(pFVar2,&local_90);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_40.Count == local_40.Capacity) {
    iVar11 = local_40.Count + 1;
    uVar8 = (ulonglong)iVar11;
    if (local_40.Capacity == 0) {
      uVar9 = 4;
      if (4 < uVar8) {
        uVar9 = uVar8;
      }
    }
    else {
      uVar9 = (uVar8 * 3 >> 3) + 0x10 + uVar8;
    }
    uVar6 = FMemory::QuantizeSize(uVar9 * 4,0);
    iVar13 = (int)(uVar6 >> 2);
    if (iVar13 < iVar11) {
      iVar13 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_40,iVar13);
  }
  local_40.Head = local_40.Head + -1 + local_40.Capacity;
  if (local_40.Capacity <= local_40.Head) {
    local_40.Head = local_40.Head - local_40.Capacity;
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_40.Storage.Data + (longlong)local_40.Head * 4) = 2;
  local_40.Count = local_40.Count + 1;
  if (local_40.Capacity != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar3)(pFVar2,&local_90);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_40.Count == local_40.Capacity) {
    iVar11 = local_40.Count + 1;
    uVar8 = (ulonglong)iVar11;
    if (local_40.Capacity == 0) {
      uVar9 = 4;
      if (4 < uVar8) {
        uVar9 = uVar8;
      }
    }
    else {
      uVar9 = (uVar8 * 3 >> 3) + 0x10 + uVar8;
    }
    uVar6 = FMemory::QuantizeSize(uVar9 * 4,0);
    iVar13 = (int)(uVar6 >> 2);
    if (iVar13 < iVar11) {
      iVar13 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::Grow(&local_40,iVar13);
  }
  local_40.Head = local_40.Head + -1 + local_40.Capacity;
  if (local_40.Capacity <= local_40.Head) {
    local_40.Head = local_40.Head - local_40.Capacity;
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_40.Storage.Data + (longlong)local_40.Head * 4) = 3;
  local_40.Count = local_40.Count + 1;
  if (local_40.Capacity != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar3)(pFVar2);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  while( true ) {
    if (local_40.Count == 0) {
      if (iVar15 != 4) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar2 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_60,L"Condition failed");
        (*pcVar3)(pFVar2,&local_60);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      iVar11 = local_40.Head;
      FVar4.Data = local_40.Storage.Data;
      TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
      if (local_40.Count != 0) {
        lVar14 = (longlong)local_40.Head;
        iVar15 = local_40.Count;
        if (local_40.Tail <= local_40.Head) {
          DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_40.Storage.Data,local_40.Tail)
          ;
          iVar15 = local_40.Capacity - iVar11;
        }
        DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar4.Data + lVar14 * 4),iVar15);
      }
      local_40.Count = 0;
      local_40.Head = 0;
      local_40.Tail = 0;
      if (local_40.Capacity != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_40.Storage,0,0,4);
        local_40.Capacity = 0;
      }
      if (local_40.Storage.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Storage.Data);
      }
      if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
           TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
         (TTestToken<int>::DestructorCalls != 5)) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar2 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_50,L"Condition failed");
        (*pcVar3)(pFVar2,&local_50,0);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    iVar11 = local_40.Tail + -1 + local_40.Capacity;
    if (local_40.Capacity <= iVar11) {
      iVar11 = iVar11 - local_40.Capacity;
    }
    pFVar1 = local_40.Storage.Data + (longlong)iVar11 * 4;
    if ((pFVar1 == local_98) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3577702131160842175>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                           ,0x41,"&Other != this"), bVar5)) break;
    TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
    iVar13 = iVar15 + 1;
    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
    local_40.Count = local_40.Count + -1;
    bVar5 = *(int *)pFVar1 != iVar15;
    iVar15 = iVar13;
    local_40.Tail = iVar11;
    if (bVar5) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar2 = pFVar7->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_70,L"Condition failed");
      (*pcVar3)(pFVar2);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

