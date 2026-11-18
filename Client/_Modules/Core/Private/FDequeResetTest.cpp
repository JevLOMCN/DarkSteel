// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac8540

EAutomationTestFlags __thiscall Deque::FDequeResetTest::GetTestFlags(FDequeResetTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac8550

bool __thiscall Deque::FDequeResetTest::IsStressTest(FDequeResetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac8560

uint __thiscall Deque::FDequeResetTest::GetRequiredDeviceNum(FDequeResetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac8570

FString * __thiscall
Deque::FDequeResetTest::GetTestSourceFileName(FDequeResetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac85a0

int __thiscall Deque::FDequeResetTest::GetTestSourceFileLine(FDequeResetTest *this)

{
  return 0x7a;
}

// GetTests @ 141ac85b0

/* WARNING: Removing unreachable block (ram,0x000141ac872e) */

void __thiscall
Deque::FDequeResetTest::GetTests
          (FDequeResetTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac8750

bool __thiscall Deque::FDequeResetTest::RunTest(FDequeResetTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac8780

FString * __thiscall
Deque::FDequeResetTest::GetBeautifiedTestName(FDequeResetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeResetTest @ 141b20a80

FDequeResetTest * __thiscall
Deque::FDequeResetTest::FDequeResetTest(FDequeResetTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeResetTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TDeque::Reset");
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

// TestBody @ 141b7ac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Deque::FDequeResetTest::TestBody(FDequeResetTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  TTypeCompatibleBytes<TTestToken<int>_> TVar4;
  FAutomationTestFramework *pFVar5;
  ulong64 uVar6;
  int iVar7;
  TTestToken<int> *pTVar8;
  int iVar9;
  longlong lVar10;
  uchar auVar11 [4];
  undefined1 auStack_78 [32];
  FString local_58;
  TDeque<TTestToken<int>,TFixedAllocator<4>_> local_48;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_58,L"Default allocator");
  (*pcVar2)(pFVar1,&local_58,0,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar9 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_48.Storage.InlineData._0_8_ = (TTestToken<int> *)0x0;
  local_48.Storage.InlineData[2].Pad[0] = '\0';
  local_48.Storage.InlineData[2].Pad[1] = '\0';
  local_48.Storage.InlineData[2].Pad[2] = '\0';
  local_48.Storage.InlineData[2].Pad[3] = '\0';
  local_48.Storage.InlineData[3].Pad[0] = '\0';
  local_48.Storage.InlineData[3].Pad[1] = '\0';
  local_48.Storage.InlineData[3].Pad[2] = '\0';
  local_48.Storage.InlineData[3].Pad[3] = '\0';
  local_48.Capacity = 0;
  local_48.Count = 0;
  uVar6 = FMemory::QuantizeSize(0x10,0);
  TVar4.Pad = local_48.Storage.InlineData[3].Pad;
  auVar11 = SUB84(uVar6 >> 2,0);
  if ((int)auVar11 < 1) {
    auVar11[0] = 0xff;
    auVar11[1] = 0xff;
    auVar11[2] = 0xff;
    auVar11[3] = '\x7f';
  }
  if (local_48.Storage.InlineData[3].Pad != (uchar  [4])0x0) {
    if (local_48.Capacity < local_48.Count) {
      if ((local_48.Capacity != 0) && (0 < (int)local_48.Storage.InlineData[3].Pad)) {
        do {
          iVar7 = (int)TVar4.Pad - iVar9;
          if (local_48.Capacity < iVar7) {
            iVar7 = local_48.Capacity;
          }
          memmove((TTestToken<int> *)(local_48.Storage.InlineData._0_8_ + (longlong)iVar9 * 4),
                  (TTestToken<int> *)
                  (local_48.Storage.InlineData._0_8_ +
                  ((longlong)local_48.Capacity + (longlong)iVar9) * 4),(longlong)iVar7 << 2);
          iVar9 = iVar9 + iVar7;
        } while (iVar9 < (int)TVar4.Pad);
      }
    }
    else {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_58,0,local_48.Count,4);
      memmove(local_58.Data.AllocatorInstance.Data,(void *)local_48.Storage.InlineData._0_8_,
              (longlong)local_48.Count << 2);
      iVar7 = (int)local_48.Storage.InlineData[2].Pad - local_48.Capacity;
      if ((local_48.Capacity != 0) && (0 < iVar7)) {
        do {
          iVar3 = iVar7 - iVar9;
          if (local_48.Capacity < iVar7 - iVar9) {
            iVar3 = local_48.Capacity;
          }
          memmove((TTestToken<int> *)(local_48.Storage.InlineData._0_8_ + (longlong)iVar9 * 4),
                  (TTestToken<int> *)
                  (local_48.Storage.InlineData._0_8_ +
                  ((longlong)local_48.Capacity + (longlong)iVar9) * 4),(longlong)iVar3 << 2);
          iVar9 = iVar9 + iVar3;
        } while (iVar9 < iVar7);
      }
      memmove((TTestToken<int> *)(local_48.Storage.InlineData._0_8_ + (longlong)iVar7 * 4),
              local_58.Data.AllocatorInstance.Data,(longlong)local_48.Count << 2);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&local_48,(int)local_48.Storage.InlineData[3].Pad,(int)auVar11,4);
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  local_48.Capacity = 0;
  ((TTestToken<int> *)
  (local_48.Storage.InlineData._0_8_ + (longlong)(int)local_48.Storage.InlineData[3].Pad * 4))->
  Value = 0;
  local_48.Count = (int)local_48.Storage.InlineData[3].Pad + 1;
  if ((int)auVar11 <= local_48.Count) {
    local_48.Count = local_48.Count - (int)auVar11;
  }
  local_48.Storage.InlineData[3].Pad = local_48.Storage.InlineData[3].Pad + 1;
  local_48.Storage.InlineData[2].Pad = auVar11;
  if (auVar11 == (uchar  [4])0x0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Storage.InlineData[3].Pad != (uchar  [4])0x1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Storage.InlineData[3].Pad == (uchar  [4])0x0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pTVar8 = (TTestToken<int> *)local_48.Storage.InlineData._0_8_;
    if (local_48.Storage.InlineData[3].Pad == (uchar  [4])0x0) goto LAB_141b7af79;
  }
  iVar9 = local_48.Capacity;
  pTVar8 = (TTestToken<int> *)local_48.Storage.InlineData._0_8_;
  lVar10 = (longlong)local_48.Capacity;
  TVar4.Pad = local_48.Storage.InlineData[3].Pad;
  if (local_48.Count <= local_48.Capacity) {
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)local_48.Storage.InlineData._0_8_,local_48.Count);
    TVar4.Pad = local_48.Storage.InlineData[2].Pad - iVar9;
  }
  DestructItems<TTestToken<int>,int>
            ((TTestToken<int> *)((undefined8)pTVar8 + lVar10),(int)TVar4.Pad);
LAB_141b7af79:
  local_48.Storage.InlineData[3].Pad[0] = '\0';
  local_48.Storage.InlineData[3].Pad[1] = '\0';
  local_48.Storage.InlineData[3].Pad[2] = '\0';
  local_48.Storage.InlineData[3].Pad[3] = '\0';
  local_48.Capacity = 0;
  local_48.Count = 0;
  if (local_48.Storage.InlineData[2].Pad == (uchar  [4])0x0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pTVar8 = (TTestToken<int> *)local_48.Storage.InlineData._0_8_;
    if (local_48.Storage.InlineData[3].Pad != (uchar  [4])0x0) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_58,L"Condition failed");
      (*pcVar2)(pFVar1);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      pTVar8 = (TTestToken<int> *)local_48.Storage.InlineData._0_8_;
      if (local_48.Storage.InlineData[3].Pad != (uchar  [4])0x0) {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_58,L"Condition failed");
        (*pcVar2)(pFVar1,&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        iVar9 = local_48.Capacity;
        pTVar8 = (TTestToken<int> *)local_48.Storage.InlineData._0_8_;
        if (local_48.Storage.InlineData[3].Pad != (uchar  [4])0x0) {
          lVar10 = (longlong)local_48.Capacity;
          if (local_48.Capacity < local_48.Count) {
            DestructItems<TTestToken<int>,int>
                      ((TTestToken<int> *)(local_48.Storage.InlineData._0_8_ + lVar10 * 4),
                       (int)local_48.Storage.InlineData[3].Pad);
          }
          else {
            DestructItems<TTestToken<int>,int>
                      ((TTestToken<int> *)local_48.Storage.InlineData._0_8_,local_48.Count);
            DestructItems<TTestToken<int>,int>
                      ((TTestToken<int> *)((undefined8)pTVar8 + lVar10),
                       (int)local_48.Storage.InlineData[2].Pad - iVar9);
          }
        }
      }
    }
  }
  local_48.Storage.InlineData[3].Pad[0] = '\0';
  local_48.Storage.InlineData[3].Pad[1] = '\0';
  local_48.Storage.InlineData[3].Pad[2] = '\0';
  local_48.Storage.InlineData[3].Pad[3] = '\0';
  local_48.Capacity = 0;
  local_48.Count = 0;
  if (local_48.Storage.InlineData[2].Pad != (uchar  [4])0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,4);
    local_48.Storage.InlineData[2].Pad[0] = '\0';
    local_48.Storage.InlineData[2].Pad[1] = '\0';
    local_48.Storage.InlineData[2].Pad[2] = '\0';
    local_48.Storage.InlineData[2].Pad[3] = '\0';
    pTVar8 = (TTestToken<int> *)local_48.Storage.InlineData._0_8_;
  }
  if (pTVar8 != (TTestToken<int> *)0x0) {
    FMemory::Free(pTVar8);
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
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_58,L"Inline Allocator");
  (*pcVar2)(pFVar1,&local_58,0,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  local_24 = 1;
  DestructItems<TTestToken<int>,int>((TTestToken<int> *)&local_48,1);
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_58,L"Fixed allocator");
  (*pcVar2)(pFVar1,&local_58,0,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48.Capacity = 4;
  local_48.Count = 0;
  local_48.Head = 0;
  local_48.Tail = 0;
  local_58.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data & 0xffffffff00000000;
  TDeque<TTestToken<int>,TFixedAllocator<4>_>::EmplaceLast<int>(&local_48,(int *)&local_58);
  iVar9 = local_48.Count;
  if (local_48.Count != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_48.Capacity;
  if (local_48.Capacity != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (iVar9 != 0) {
    iVar3 = local_48.Head;
    lVar10 = (longlong)local_48.Head;
    if (local_48.Tail <= local_48.Head) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)&local_48,local_48.Tail);
      iVar9 = iVar7 - iVar3;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)(local_48.Storage.InlineData + lVar10),iVar9);
  }
  if (iVar7 != 4) {
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

