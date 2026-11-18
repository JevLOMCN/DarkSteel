// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbe270

EAutomationTestFlags __thiscall FQueueTest::GetTestFlags(FQueueTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbe280

bool __thiscall FQueueTest::IsStressTest(FQueueTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbe290

uint __thiscall FQueueTest::GetRequiredDeviceNum(FQueueTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbe2a0

FString * __thiscall
FQueueTest::GetTestSourceFileName(FQueueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\QueueTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbe2d0

int __thiscall FQueueTest::GetTestSourceFileLine(FQueueTest *this)

{
  return 0xc;
}

// GetTests @ 141cbe2e0

/* WARNING: Removing unreachable block (ram,0x000141cbe45e) */

void __thiscall
FQueueTest::GetTests
          (FQueueTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbe480

bool __thiscall FQueueTest::RunTest(FQueueTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbe4b0

FString * __thiscall
FQueueTest::GetBeautifiedTestName(FQueueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FQueueTest @ 141ceb0c0

FQueueTest * __thiscall FQueueTest::FQueueTest(FQueueTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FQueueTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::Queue");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
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

// TestBody @ 141d3acb0

void __thiscall FQueueTest::TestBody(FQueueTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  FAutomationTestFramework *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FString local_38;
  FString local_28;
  
  pFVar3 = ::operator_new(0x10);
  pFVar6 = (FScriptContainerElement *)0x0;
  pFVar5 = pFVar6;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    *(longlong *)pFVar3 = 0;
    *(longlong *)(pFVar3 + 8) = 0;
    *(longlong *)pFVar3 = 0;
    pFVar5 = pFVar3;
  }
  local_28.Data.AllocatorInstance.Data = pFVar5;
  if (*(longlong *)pFVar5 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"A new queue must be empty");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = *(FScriptContainerElement **)pFVar5;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    *(undefined4 *)(pFVar3 + 8) = 0;
    ::operator_delete(pFVar5,0x10);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"A new queue must not dequeue anything");
    (*pcVar2)(pFVar1,&local_38,0);
    pFVar5 = pFVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)pFVar5 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"A new queue must not peek anything");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  do {
    pFVar3 = *(FScriptContainerElement **)pFVar5;
    ::operator_delete(pFVar5,0x10);
    pFVar5 = pFVar3;
  } while (pFVar3 != (FScriptContainerElement *)0x0);
  pFVar3 = ::operator_new(0x10);
  pFVar5 = pFVar6;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    *(longlong *)pFVar3 = 0;
    *(longlong *)(pFVar3 + 8) = 0;
    *(longlong *)pFVar3 = 0;
    pFVar5 = pFVar3;
  }
  local_38.Data.AllocatorInstance.Data = pFVar5;
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Inserting into a new queue must succeed");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    *(longlong *)pFVar3 = 0;
    *(undefined4 *)(pFVar3 + 8) = 1;
    *(FScriptContainerElement **)local_38.Data.AllocatorInstance.Data = pFVar3;
    local_38.Data.AllocatorInstance.Data = pFVar3;
  }
  if (*(longlong *)pFVar5 == 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Peek must succeed on a queue with one item");
    (*pcVar2)(pFVar1,&local_28,0);
    pFVar3 = pFVar6;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      pFVar3 = (FScriptContainerElement *)0x0;
    }
  }
  else {
    pFVar3 = (FScriptContainerElement *)(ulonglong)*(uint *)(*(longlong *)pFVar5 + 8);
  }
  pFVar4 = FAutomationTestFramework::Get();
  iVar7 = (int)pFVar3;
  FAutomationTestBase::TestEqual(pFVar4->CurrentTest,L"Peek must return the first value",iVar7,1);
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Inserting into a non-empty queue must succeed");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    *(longlong *)pFVar3 = 0;
    *(undefined4 *)(pFVar3 + 8) = 2;
    *(FScriptContainerElement **)local_38.Data.AllocatorInstance.Data = pFVar3;
    local_38.Data.AllocatorInstance.Data = pFVar3;
  }
  if (*(longlong *)pFVar5 == 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Peek must succeed on a queue with two items");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar7 = *(int *)(*(longlong *)pFVar5 + 8);
  }
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar4->CurrentTest,L"Peek must return the first item",iVar7,1);
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    *(longlong *)pFVar3 = 0;
    *(undefined4 *)(pFVar3 + 8) = 3;
    *(FScriptContainerElement **)local_38.Data.AllocatorInstance.Data = pFVar3;
    local_38.Data.AllocatorInstance.Data = pFVar3;
  }
  pFVar3 = *(FScriptContainerElement **)pFVar5;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Dequeue must succeed on a queue with three items");
    (*pcVar2)(pFVar1,&local_28,0);
    pFVar3 = pFVar5;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar7 = *(int *)(pFVar3 + 8);
    *(undefined4 *)(pFVar3 + 8) = 0;
    ::operator_delete(pFVar5,0x10);
  }
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar4->CurrentTest,L"Dequeue must return the first item",iVar7,1);
  pFVar5 = *(FScriptContainerElement **)pFVar3;
  if (pFVar5 == (FScriptContainerElement *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Dequeue must succeed on a queue with two items");
    (*pcVar2)(pFVar1,&local_28,0);
    pFVar5 = pFVar3;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar7 = *(int *)(pFVar5 + 8);
    *(undefined4 *)(pFVar5 + 8) = 0;
    ::operator_delete(pFVar3,0x10);
  }
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar4->CurrentTest,L"Dequeue must return the second item",iVar7,2)
  ;
  pFVar3 = *(FScriptContainerElement **)pFVar5;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"Dequeue must succeed on a queue with one item");
    (*pcVar2)(pFVar1,&local_28,0);
    pFVar3 = pFVar5;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar7 = *(int *)(pFVar3 + 8);
    *(undefined4 *)(pFVar3 + 8) = 0;
    ::operator_delete(pFVar5,0x10);
  }
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar4->CurrentTest,L"Dequeue must return the third item",iVar7,3);
  if (*(longlong *)pFVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"After removing all items, the queue must be empty");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  do {
    pFVar5 = *(FScriptContainerElement **)pFVar3;
    ::operator_delete(pFVar3,0x10);
    pFVar3 = pFVar5;
  } while (pFVar5 != (FScriptContainerElement *)0x0);
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    *(longlong *)pFVar5 = 0;
    *(longlong *)(pFVar5 + 8) = 0;
    *(longlong *)pFVar5 = 0;
    pFVar6 = pFVar5;
  }
  local_38.Data.AllocatorInstance.Data = pFVar6;
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    *(longlong *)pFVar5 = 0;
    *(undefined4 *)(pFVar5 + 8) = 1;
    *(FScriptContainerElement **)local_38.Data.AllocatorInstance.Data = pFVar5;
    local_38.Data.AllocatorInstance.Data = pFVar5;
  }
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    *(longlong *)pFVar5 = 0;
    *(undefined4 *)(pFVar5 + 8) = 2;
    *(FScriptContainerElement **)local_38.Data.AllocatorInstance.Data = pFVar5;
    local_38.Data.AllocatorInstance.Data = pFVar5;
  }
  pFVar5 = ::operator_new(0x10);
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    *(longlong *)pFVar5 = 0;
    *(undefined4 *)(pFVar5 + 8) = 3;
    *(FScriptContainerElement **)local_38.Data.AllocatorInstance.Data = pFVar5;
    local_38.Data.AllocatorInstance.Data = pFVar5;
  }
  while (pFVar5 = *(FScriptContainerElement **)pFVar6, pFVar5 != (FScriptContainerElement *)0x0) {
    *(undefined4 *)(pFVar5 + 8) = 0;
    ::operator_delete(pFVar6,0x10);
    pFVar6 = pFVar5;
  }
  if (*(longlong *)pFVar6 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_28,L"An emptied queue must be empty");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  do {
    pFVar5 = *(FScriptContainerElement **)pFVar6;
    ::operator_delete(pFVar6,0x10);
    pFVar6 = pFVar5;
  } while (pFVar5 != (FScriptContainerElement *)0x0);
  return;
}

