// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac7d00

EAutomationTestFlags __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::GetTestFlags
          (FDequeReserveEmplaceLastSingleElementTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac7d10

bool __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::IsStressTest
          (FDequeReserveEmplaceLastSingleElementTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac7d20

uint __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::GetRequiredDeviceNum
          (FDequeReserveEmplaceLastSingleElementTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac7d30

FString * __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::GetTestSourceFileName
          (FDequeReserveEmplaceLastSingleElementTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac7d60

int __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::GetTestSourceFileLine
          (FDequeReserveEmplaceLastSingleElementTest *this)

{
  return 0x67;
}

// GetTests @ 141ac7d70

/* WARNING: Removing unreachable block (ram,0x000141ac7eee) */

void __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::GetTests
          (FDequeReserveEmplaceLastSingleElementTest *this,
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

// RunTest @ 141ac7f10

bool __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::RunTest
          (FDequeReserveEmplaceLastSingleElementTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac7f40

FString * __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::GetBeautifiedTestName
          (FDequeReserveEmplaceLastSingleElementTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeReserveEmplaceLastSingleElementTest @ 141b206e0

FDequeReserveEmplaceLastSingleElementTest * __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::FDequeReserveEmplaceLastSingleElementTest
          (FDequeReserveEmplaceLastSingleElementTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeReserveEmplaceLastSingleElementTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Reserve EmplaceLast single element"
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

// TestBody @ 141b7a220

void __thiscall
Deque::FDequeReserveEmplaceLastSingleElementTest::TestBody
          (FDequeReserveEmplaceLastSingleElementTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  ulong64 uVar4;
  FAutomationTestFramework *pFVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType local_res18 [2];
  FString local_58;
  ForAnyElementType local_48;
  uint local_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  
  iVar12 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uStack_3c = 0;
  iStack_38 = 0;
  uStack_34 = 0;
  uVar4 = FMemory::QuantizeSize(0x10,0);
  uVar7 = uStack_3c;
  uVar13 = (uint)(uVar4 >> 2);
  if ((int)uVar13 < 4) {
    uVar13 = 0x7fffffff;
  }
  if (uStack_3c != 0) {
    if (iStack_38 < (int)uStack_34) {
      if ((iStack_38 != 0) && (iVar11 = iVar12, 0 < (int)uStack_3c)) {
        do {
          iVar9 = uVar7 - iVar11;
          if (iStack_38 < iVar9) {
            iVar9 = iStack_38;
          }
          memmove(local_48.Data + (longlong)iVar11 * 4,
                  local_48.Data + ((longlong)iStack_38 + (longlong)iVar11) * 4,(longlong)iVar9 << 2)
          ;
          iVar11 = iVar11 + iVar9;
        } while (iVar11 < (int)uVar7);
      }
    }
    else {
      local_res18[0].Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (local_res18,0,uStack_34,4);
      memmove(local_res18[0].Data,local_48.Data,(longlong)(int)uStack_34 << 2);
      iVar11 = local_40 - iStack_38;
      if ((iStack_38 != 0) && (iVar9 = iVar12, 0 < iVar11)) {
        do {
          iVar3 = iVar11 - iVar9;
          if (iStack_38 < iVar11 - iVar9) {
            iVar3 = iStack_38;
          }
          memmove(local_48.Data + (longlong)iVar9 * 4,
                  local_48.Data + ((longlong)iStack_38 + (longlong)iVar9) * 4,(longlong)iVar3 << 2);
          iVar9 = iVar9 + iVar3;
        } while (iVar9 < iVar11);
      }
      memmove(local_48.Data + (longlong)iVar11 * 4,local_res18[0].Data,(longlong)(int)uStack_34 << 2
             );
      if (local_res18[0].Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18[0].Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,uStack_3c,uVar13,4)
  ;
  iStack_38 = 0;
  uStack_34 = uStack_3c;
  local_40 = uVar13;
  if (uStack_3c == uVar13) {
    iVar11 = uStack_3c + 1;
    uVar6 = (ulonglong)iVar11;
    if (uVar13 == 0) {
      uVar8 = 4;
      if (4 < uVar6) {
        uVar8 = uVar6;
      }
    }
    else {
      uVar8 = (uVar6 * 3 >> 3) + 0x10 + uVar6;
    }
    uVar4 = FMemory::QuantizeSize(uVar8 * 4,0);
    uVar7 = uStack_3c;
    uVar13 = (uint)(uVar4 >> 2);
    if ((int)uVar13 < iVar11) {
      uVar13 = 0x7fffffff;
    }
    if (uStack_3c != 0) {
      if (iStack_38 < (int)uStack_34) {
        if ((iStack_38 != 0) && (iVar11 = iVar12, 0 < (int)uStack_3c)) {
          do {
            iVar9 = uVar7 - iVar11;
            if (iStack_38 < iVar9) {
              iVar9 = iStack_38;
            }
            memmove(local_48.Data + (longlong)iVar11 * 4,
                    local_48.Data + ((longlong)iStack_38 + (longlong)iVar11) * 4,
                    (longlong)iVar9 << 2);
            iVar11 = iVar11 + iVar9;
          } while (iVar11 < (int)uVar7);
        }
      }
      else {
        local_res18[0].Data = (FScriptContainerElement *)0x0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (local_res18,0,uStack_34,4);
        memmove(local_res18[0].Data,local_48.Data,(longlong)(int)uStack_34 << 2);
        iVar11 = local_40 - iStack_38;
        if ((iStack_38 != 0) && (iVar9 = iVar12, 0 < iVar11)) {
          do {
            iVar3 = iVar11 - iVar9;
            if (iStack_38 < iVar11 - iVar9) {
              iVar3 = iStack_38;
            }
            memmove(local_48.Data + (longlong)iVar9 * 4,
                    local_48.Data + ((longlong)iStack_38 + (longlong)iVar9) * 4,(longlong)iVar3 << 2
                   );
            iVar9 = iVar9 + iVar3;
          } while (iVar9 < iVar11);
        }
        memmove(local_48.Data + (longlong)iVar11 * 4,local_res18[0].Data,
                (longlong)(int)uStack_34 << 2);
        if (local_res18[0].Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_res18[0].Data);
        }
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_48,uStack_3c,uVar13,4);
    local_40 = uVar13;
  }
  iStack_38 = 0;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_48.Data + (longlong)(int)uStack_3c * 4) = 0;
  uStack_34 = uStack_3c + 1;
  if ((int)local_40 <= (int)uStack_34) {
    uStack_34 = uStack_34 - local_40;
  }
  uStack_3c = uStack_3c + 1;
  if ((int)local_40 < 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (7 < (int)local_40) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (uStack_3c != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((int)local_40 < 8) {
    uVar4 = FMemory::QuantizeSize(0x20,0);
    uVar7 = uStack_3c;
    uVar13 = (uint)(uVar4 >> 2);
    if ((int)uVar13 < 8) {
      uVar13 = 0x7fffffff;
    }
    if (uStack_3c != 0) {
      if (iStack_38 < (int)uStack_34) {
        if ((iStack_38 != 0) && (0 < (int)uStack_3c)) {
          do {
            iVar11 = uVar7 - iVar12;
            if (iStack_38 < iVar11) {
              iVar11 = iStack_38;
            }
            memmove(local_48.Data + (longlong)iVar12 * 4,
                    local_48.Data + ((longlong)iStack_38 + (longlong)iVar12) * 4,
                    (longlong)iVar11 << 2);
            iVar12 = iVar12 + iVar11;
          } while (iVar12 < (int)uVar7);
        }
      }
      else {
        local_res18[0].Data = (FScriptContainerElement *)0x0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (local_res18,0,uStack_34,4);
        memmove(local_res18[0].Data,local_48.Data,(longlong)(int)uStack_34 << 2);
        iVar11 = local_40 - iStack_38;
        if ((iStack_38 != 0) && (0 < iVar11)) {
          do {
            iVar9 = iVar11 - iVar12;
            if (iStack_38 < iVar11 - iVar12) {
              iVar9 = iStack_38;
            }
            memmove(local_48.Data + (longlong)iVar12 * 4,
                    local_48.Data + ((longlong)iStack_38 + (longlong)iVar12) * 4,
                    (longlong)iVar9 << 2);
            iVar12 = iVar12 + iVar9;
          } while (iVar12 < iVar11);
        }
        memmove(local_48.Data + (longlong)iVar11 * 4,local_res18[0].Data,
                (longlong)(int)uStack_34 << 2);
        if (local_res18[0].Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_res18[0].Data);
        }
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_48,uStack_3c,uVar13,4);
    uStack_34 = uStack_3c;
    iStack_38 = 0;
    local_40 = uVar13;
    if (uVar13 < 8) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_58,L"Condition failed");
      (*pcVar2)(pFVar1,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  if (uStack_3c != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FVar10.Data = local_48.Data;
  if (uStack_3c != 0) {
    uVar7 = uStack_3c;
    if ((int)uStack_34 <= iStack_38) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_48.Data,uStack_34);
      uVar7 = local_40 - iStack_38;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)(FVar10.Data + (longlong)iStack_38 * 4),uVar7);
  }
  uStack_3c = 0;
  iStack_38 = 0;
  uStack_34 = 0;
  if (local_40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
    local_40 = 0;
    FVar10.Data = local_48.Data;
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 1)) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

