// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141adbd50

EAutomationTestFlags __thiscall
Deque::FDequeConstructFromStdInitializerListTest::GetTestFlags
          (FDequeConstructFromStdInitializerListTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adbd60

bool __thiscall
Deque::FDequeConstructFromStdInitializerListTest::IsStressTest
          (FDequeConstructFromStdInitializerListTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adbd70

uint __thiscall
Deque::FDequeConstructFromStdInitializerListTest::GetRequiredDeviceNum
          (FDequeConstructFromStdInitializerListTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adbd80

FString * __thiscall
Deque::FDequeConstructFromStdInitializerListTest::GetTestSourceFileName
          (FDequeConstructFromStdInitializerListTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141adbdb0

int __thiscall
Deque::FDequeConstructFromStdInitializerListTest::GetTestSourceFileLine
          (FDequeConstructFromStdInitializerListTest *this)

{
  return 0x426;
}

// GetTests @ 141adbdc0

/* WARNING: Removing unreachable block (ram,0x000141adbf3e) */

void __thiscall
Deque::FDequeConstructFromStdInitializerListTest::GetTests
          (FDequeConstructFromStdInitializerListTest *this,
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

// RunTest @ 141adbf60

bool __thiscall
Deque::FDequeConstructFromStdInitializerListTest::RunTest
          (FDequeConstructFromStdInitializerListTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adbf90

FString * __thiscall
Deque::FDequeConstructFromStdInitializerListTest::GetBeautifiedTestName
          (FDequeConstructFromStdInitializerListTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeConstructFromStdInitializerListTest @ 141b1c770

FDequeConstructFromStdInitializerListTest * __thiscall
Deque::FDequeConstructFromStdInitializerListTest::FDequeConstructFromStdInitializerListTest
          (FDequeConstructFromStdInitializerListTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeConstructFromStdInitializerListTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Construct from std initializer_list"
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

// TestBody @ 141b6cba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Deque::FDequeConstructFromStdInitializerListTest::TestBody
          (FDequeConstructFromStdInitializerListTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FAutomationTestFramework *pFVar7;
  ulong64 uVar8;
  ForElementType<TTestToken<int>_> FVar9;
  ForElementType<TTestToken<int>_> FVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStackY_1a8 [32];
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> local_178;
  FScriptContainerElement local_160 [8];
  FString local_158;
  initializer_list<TTestToken<int>_> local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_c8;
  TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_a0;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_158,L"Default allocator");
  (*pcVar3)(pFVar2,&local_158,0,0);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  local_148._First = (TTestToken<int> *)&local_68;
  local_148._Last = (TTestToken<int> *)&local_50;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_68 = __xmm_00000003000000020000000100000000;
  uStack_60 = _UNK_150631e08;
  local_58 = 4;
  TTestToken<int>::ConstructorCalls = 6;
  local_54 = 5;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>(&local_178,&local_148);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 6;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  iVar6 = 0;
  while (local_178.Count != 0) {
    pFVar1 = local_178.Storage.Data + (longlong)local_178.Head * 4;
    if ((pFVar1 == local_160) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3577702131160842175>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                           ,0x41,"&Other != this"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
    iVar11 = local_178.Head + 1;
    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
    if (local_178.Capacity <= iVar11) {
      iVar11 = iVar11 - local_178.Capacity;
    }
    local_178.Head = iVar11;
    local_178.Count = local_178.Count + -1;
    iVar11 = iVar6 + 1;
    bVar5 = *(int *)pFVar1 != iVar6;
    iVar6 = iVar11;
    if (bVar5) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar2 = pFVar7->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_138,L"Condition failed");
      (*pcVar3)(pFVar2);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
  }
  if (iVar6 != 6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_128,L"Condition failed");
    (*pcVar3)(pFVar2,&local_128);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FVar4.Data = local_178.Storage.Data;
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
  if (local_178.Count != 0) {
    iVar6 = local_178.Count;
    if (local_178.Tail <= local_178.Head) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_178.Storage.Data,local_178.Tail);
      iVar6 = local_178.Capacity - local_178.Head;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)(FVar4.Data + (longlong)local_178.Head * 4),iVar6);
  }
  local_178.Count = 0;
  local_178.Head = 0;
  local_178.Tail = 0;
  if (local_178.Capacity != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178.Storage,0,0,4);
    local_178.Capacity = 0;
  }
  if (local_178.Storage.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Storage.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0xd)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_118,L"Condition failed");
    (*pcVar3)(pFVar2,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_108,L"Inline allocator without growing");
  (*pcVar3)(pFVar2,&local_108,0,0);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 6;
  local_50 = __xmm_00000003000000020000000100000000;
  uStack_48 = _UNK_150631e08;
  local_40 = 4;
  local_a0.Capacity = (int)___xmm_00000000000000000000000000000008;
  local_a0.Count = (int)((ulonglong)___xmm_00000000000000000000000000000008 >> 0x20);
  local_a0.Head = (int)_UNK_15071d218;
  local_a0.Tail = (int)((ulonglong)_UNK_15071d218 >> 0x20);
  local_3c = 5;
  local_a0.Storage.SecondaryData = (ForElementType<TTestToken<int>_>)0x0;
  TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Reserve
            (&local_a0,6);
  FVar9 = (ForElementType<TTestToken<int>_>)&local_a0;
  if (local_a0.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
    FVar9 = local_a0.Storage.SecondaryData;
  }
  ConstructItems<TTestToken<int>,TTestToken<int>,int>((void *)FVar9,(TTestToken<int> *)&local_50,6);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 6;
  local_a0.Count = 6;
  local_a0.Tail = 6;
  if (local_a0.Capacity == 8) {
LAB_141b6cf92:
    iVar11 = local_a0.Head;
    iVar6 = local_a0.Capacity;
    FVar9 = local_a0.Storage.SecondaryData;
    lVar13 = (longlong)local_a0.Head;
    iVar12 = local_a0.Count;
    if (local_a0.Tail <= local_a0.Head) {
      FVar10 = (ForElementType<TTestToken<int>_>)&local_a0;
      if (local_a0.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar10 = local_a0.Storage.SecondaryData;
      }
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar10,local_a0.Tail);
      iVar12 = iVar6 - iVar11;
    }
    FVar10 = (ForElementType<TTestToken<int>_>)&local_a0;
    if (FVar9 != (ForElementType<TTestToken<int>_>)0x0) {
      FVar10 = FVar9;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)((longlong)FVar10 + lVar13 * 4),iVar12);
  }
  else {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_f8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    FVar9 = local_a0.Storage.SecondaryData;
    iVar6 = local_a0.Capacity;
    if (local_a0.Count != 0) goto LAB_141b6cf92;
  }
  local_a0.Count = 0;
  local_a0.Head = 0;
  local_a0.Tail = 0;
  if (iVar6 != 0) {
    if (FVar9 != (ForElementType<TTestToken<int>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0.Storage.SecondaryData,0,0,4);
      FVar9 = local_a0.Storage.SecondaryData;
    }
    local_a0.Capacity = 8;
  }
  if (FVar9 != (ForElementType<TTestToken<int>_>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_e8,L"Inline allocator with growing");
  (*pcVar3)(pFVar2,&local_e8,0,0);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 6;
  local_38 = __xmm_00000003000000020000000100000000;
  uStack_30 = _UNK_150631e08;
  local_28 = 4;
  local_c8.Capacity = (int)___xmm_00000000000000000000000000000004;
  local_c8.Count = (int)((ulonglong)___xmm_00000000000000000000000000000004 >> 0x20);
  local_c8.Head = (int)_UNK_15071d208;
  local_c8.Tail = (int)((ulonglong)_UNK_15071d208 >> 0x20);
  local_24 = 5;
  local_c8.Storage.SecondaryData = (ForElementType<TTestToken<int>_>)0x0;
  uVar8 = FMemory::QuantizeSize(0x18,0);
  iVar6 = (int)(uVar8 >> 2);
  if (iVar6 < 6) {
    iVar6 = 0x7fffffff;
  }
  TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Grow
            (&local_c8,iVar6);
  FVar9 = (ForElementType<TTestToken<int>_>)&local_c8;
  if (local_c8.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
    FVar9 = local_c8.Storage.SecondaryData;
  }
  ConstructItems<TTestToken<int>,TTestToken<int>,int>((void *)FVar9,(TTestToken<int> *)&local_38,6);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 6;
  local_c8.Count = 6;
  local_c8.Tail = 6;
  if (local_c8.Capacity < 6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_d8,L"Condition failed");
    (*pcVar3)(pFVar2);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    FVar9 = local_c8.Storage.SecondaryData;
    iVar6 = local_c8.Capacity;
    if (local_c8.Count == 0) goto LAB_141b6d16b;
  }
  iVar12 = local_c8.Head;
  iVar6 = local_c8.Capacity;
  FVar9 = local_c8.Storage.SecondaryData;
  lVar13 = (longlong)local_c8.Head;
  iVar11 = local_c8.Count;
  if (local_c8.Tail <= local_c8.Head) {
    FVar10 = (ForElementType<TTestToken<int>_>)&local_c8;
    if (local_c8.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
      FVar10 = local_c8.Storage.SecondaryData;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar10,local_c8.Tail);
    iVar11 = iVar6 - iVar12;
  }
  FVar10 = (ForElementType<TTestToken<int>_>)&local_c8;
  if (FVar9 != (ForElementType<TTestToken<int>_>)0x0) {
    FVar10 = FVar9;
  }
  DestructItems<TTestToken<int>,int>((TTestToken<int> *)((longlong)FVar10 + lVar13 * 4),iVar11);
LAB_141b6d16b:
  local_c8.Count = 0;
  local_c8.Head = 0;
  local_c8.Tail = 0;
  if (iVar6 != 0) {
    if (FVar9 != (ForElementType<TTestToken<int>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c8.Storage.SecondaryData,0,0,4);
      FVar9 = local_c8.Storage.SecondaryData;
    }
    local_c8.Capacity = 4;
  }
  if (FVar9 != (ForElementType<TTestToken<int>_>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  return;
}

