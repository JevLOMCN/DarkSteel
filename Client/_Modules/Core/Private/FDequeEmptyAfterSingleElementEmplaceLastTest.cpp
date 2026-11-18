// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141aca160

EAutomationTestFlags __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::GetTestFlags
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141aca1a0

bool __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::IsStressTest
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141aca1e0

uint __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::GetRequiredDeviceNum
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141aca1f0

FString * __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::GetTestSourceFileName
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141aca220

int __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::GetTestSourceFileLine
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this)

{
  return 0xce;
}

// GetTests @ 141aca230

/* WARNING: Removing unreachable block (ram,0x000141aca3ae) */

void __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::GetTests
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this,
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

// RunTest @ 141aca3d0

bool __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::RunTest
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141aca400

FString * __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::GetBeautifiedTestName
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeEmptyAfterSingleElementEmplaceLastTest @ 141b1ebb0

FDequeEmptyAfterSingleElementEmplaceLastTest * __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::FDequeEmptyAfterSingleElementEmplaceLastTest
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeEmptyAfterSingleElementEmplaceLastTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Empty after single element EmplaceLast"
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

// TestBody @ 141b74a80

void __thiscall
Deque::FDequeEmptyAfterSingleElementEmplaceLastTest::TestBody
          (FDequeEmptyAfterSingleElementEmplaceLastTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ulong64 uVar3;
  FAutomationTestFramework *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ForAnyElementType local_res18;
  FString local_48;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar8 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  uVar3 = FMemory::QuantizeSize(0x10,0);
  iVar7 = iStack_2c;
  iVar10 = (int)(uVar3 >> 2);
  if (iVar10 < 1) {
    iVar10 = 0x7fffffff;
  }
  if (iStack_2c != 0) {
    if (iStack_28 < iStack_24) {
      if ((iStack_28 != 0) && (0 < iStack_2c)) {
        do {
          iVar5 = iVar7 - iVar8;
          if (iStack_28 < iVar5) {
            iVar5 = iStack_28;
          }
          memmove(local_38.Data + (longlong)iVar8 * 4,
                  local_38.Data + ((longlong)iStack_28 + (longlong)iVar8) * 4,(longlong)iVar5 << 2);
          iVar8 = iVar8 + iVar5;
        } while (iVar8 < iVar7);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,iStack_24,4);
      memmove(local_res18.Data,local_38.Data,(longlong)iStack_24 << 2);
      iVar7 = local_30 - iStack_28;
      if ((iStack_28 != 0) && (0 < iVar7)) {
        do {
          iVar5 = iVar7 - iVar8;
          if (iStack_28 < iVar7 - iVar8) {
            iVar5 = iStack_28;
          }
          memmove(local_38.Data + (longlong)iVar8 * 4,
                  local_38.Data + ((longlong)iStack_28 + (longlong)iVar8) * 4,(longlong)iVar5 << 2);
          iVar8 = iVar8 + iVar5;
        } while (iVar8 < iVar7);
      }
      memmove(local_38.Data + (longlong)iVar7 * 4,local_res18.Data,(longlong)iStack_24 << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,iStack_2c,iVar10,4)
  ;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  iStack_28 = 0;
  *(undefined4 *)(local_38.Data + (longlong)iStack_2c * 4) = 0;
  iStack_24 = iStack_2c + 1;
  if (iVar10 <= iStack_24) {
    iStack_24 = iStack_24 - iVar10;
  }
  iStack_2c = iStack_2c + 1;
  local_30 = iVar10;
  if (iVar10 == 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (iStack_2c != 1) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (iStack_2c == 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar6.Data = local_38.Data;
    if (iStack_2c == 0) goto LAB_141b74d53;
  }
  iVar8 = iStack_28;
  FVar6.Data = local_38.Data;
  lVar9 = (longlong)iStack_28;
  iVar7 = iStack_2c;
  if (iStack_24 <= iStack_28) {
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_38.Data,iStack_24);
    iVar7 = local_30 - iVar8;
  }
  DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar6.Data + lVar9 * 4),iVar7);
LAB_141b74d53:
  iStack_2c = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  if (local_30 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,4);
    local_30 = 0;
    FVar6.Data = local_38.Data;
    if (iStack_2c != 0) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_48,L"Condition failed");
      (*pcVar2)(pFVar1);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      FVar6.Data = local_38.Data;
      if (iStack_2c != 0) {
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_48,L"Condition failed");
        (*pcVar2)(pFVar1,&local_48);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        iVar7 = iStack_28;
        FVar6.Data = local_38.Data;
        if (iStack_2c != 0) {
          lVar9 = (longlong)iStack_28;
          if (iStack_28 < iStack_24) {
            DestructItems<TTestToken<int>,int>
                      ((TTestToken<int> *)(local_38.Data + lVar9 * 4),iStack_2c);
          }
          else {
            DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_38.Data,iStack_24);
            DestructItems<TTestToken<int>,int>
                      ((TTestToken<int> *)(FVar6.Data + lVar9 * 4),local_30 - iVar7);
          }
        }
      }
    }
  }
  iStack_2c = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  if (local_30 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,4);
    local_30 = 0;
    FVar6.Data = local_38.Data;
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 1)) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

