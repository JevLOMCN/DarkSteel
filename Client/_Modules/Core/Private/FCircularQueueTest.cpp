// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c597d0

EAutomationTestFlags __thiscall FCircularQueueTest::GetTestFlags(FCircularQueueTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c597e0

bool __thiscall FCircularQueueTest::IsStressTest(FCircularQueueTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c597f0

uint __thiscall FCircularQueueTest::GetRequiredDeviceNum(FCircularQueueTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c59800

FString * __thiscall
FCircularQueueTest::GetTestSourceFileName(FCircularQueueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\CircularQueueTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c59830

int __thiscall FCircularQueueTest::GetTestSourceFileLine(FCircularQueueTest *this)

{
  return 0xe;
}

// GetTests @ 141c59840

/* WARNING: Removing unreachable block (ram,0x000141c599be) */

void __thiscall
FCircularQueueTest::GetTests
          (FCircularQueueTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c599e0

bool __thiscall FCircularQueueTest::RunTest(FCircularQueueTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c59a10

FString * __thiscall
FCircularQueueTest::GetBeautifiedTestName(FCircularQueueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCircularQueueTest @ 141c8acf0

FCircularQueueTest * __thiscall
FCircularQueueTest::FCircularQueueTest(FCircularQueueTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCircularQueueTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::CircularQueue");
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

// TestBody @ 141c9ab10

void __thiscall FCircularQueueTest::TestBody(FCircularQueueTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  FAutomationTestFramework *pFVar6;
  int *piVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  int local_res18 [2];
  int local_res20 [2];
  ForAnyElementType local_270;
  int local_268 [6];
  ForAnyElementType local_250;
  int local_248 [4];
  TCircularQueue<int> local_238;
  TCircularQueue<int> local_218;
  int local_1f8;
  ForAnyElementType local_1f0;
  int local_1e8 [5];
  undefined4 local_1d4;
  undefined4 local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  TCircularBuffer<int>::TCircularBuffer<int>(&local_218.Buffer,8);
  pFVar16 = (FScriptContainerElement *)0x0;
  local_218.Head = (TAtomic<unsigned_int>)0x0;
  local_218.Tail = (TAtomic<unsigned_int>)0x0;
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  iVar9 = (int)local_218.Tail - (int)local_218.Head;
  if (iVar9 < 0) {
    iVar9 = iVar9 + local_218.Buffer.Elements.ArrayNum;
  }
  if (iVar9 != 0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_218.Head != local_218.Tail) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1b8,L"Newly created queues must be empty");
    (*pcVar2)(pFVar1,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  if ((TAtomic<unsigned_int>)((int)local_218.Tail + 1U & local_218.Buffer.IndexMask) ==
      local_218.Head) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1a8,L"Newly created queues must not be full");
    (*pcVar2)(pFVar1,&local_1a8,0);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = TCircularQueue<int>::Peek(&local_218,local_res20);
  if (bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_198,L"Peek must fail on an empty queue");
    (*pcVar2)(pFVar1,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  piVar7 = TCircularQueue<int>::Peek(&local_218);
  if (piVar7 != (int *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_188,L"Peek must fail on an empty queue");
    (*pcVar2)(pFVar1,&local_188,0);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  if (local_218.Buffer.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Buffer.Elements.AllocatorInstance.Data);
  }
  local_238.Buffer.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Buffer.Elements.ArrayNum = 0;
  local_238.Buffer.Elements.ArrayMax = 0;
  for (lVar3 = 0x3f; 0xfUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  iVar10 = 1 << ((byte)lVar3 & 0x1f);
  local_1d0 = (undefined4)lVar3;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar10,&local_238.Buffer.Elements.AllocatorInstance,
                     &local_238.Buffer.Elements.ArrayNum,&local_238.Buffer.Elements.ArrayMax);
  memset(local_238.Buffer.Elements.AllocatorInstance.Data + (longlong)iVar9 * 4,0,
         (longlong)iVar10 << 2);
  local_238.Buffer.IndexMask = local_238.Buffer.Elements.ArrayNum - 1;
  local_238.Head = (TAtomic<unsigned_int>)0x0;
  local_238.Tail = (TAtomic<unsigned_int>)0x0;
  uVar17 = 0;
  local_res18[0] = 0x29a;
  bVar4 = TCircularQueue<int>::Enqueue(&local_238,local_res18);
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_178,L"Adding to an empty queue must succeed");
    (*pcVar2)(pFVar1,&local_178,0);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  iVar9 = (int)local_238.Tail - (int)local_238.Head;
  if (iVar9 < 0) {
    iVar9 = iVar9 + local_238.Buffer.Elements.ArrayNum;
  }
  if (iVar9 != 1) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_168,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if (local_238.Head == local_238.Tail) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_158,L"Partially filled queues must not be empty");
    (*pcVar2)(pFVar1,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  if ((TAtomic<unsigned_int>)((int)local_238.Tail + 1U & local_238.Buffer.IndexMask) ==
      local_238.Head) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"Partially filled queues must not be full");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  if (local_238.Head == local_238.Tail) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Peeking at a partially filled queue must succeed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar11 = (uint)local_238.Head & local_238.Buffer.IndexMask;
    if ((int)uVar11 < local_238.Buffer.Elements.ArrayNum) {
      uVar17 = ~uVar11 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar17 = *(uint *)(local_238.Buffer.Elements.AllocatorInstance.Data + (longlong)(int)uVar11 * 4)
    ;
  }
  pFVar6 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar6->CurrentTest,L"The peeked at value must be correct",uVar17,0x29a);
  uVar17 = 0;
  pFVar15 = pFVar16;
  if (local_238.Head != local_238.Tail) {
    uVar12 = (uint)local_238.Head & local_238.Buffer.IndexMask;
    uVar11 = uVar17;
    if ((int)uVar12 < local_238.Buffer.Elements.ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = local_238.Buffer.Elements.AllocatorInstance.Data + (longlong)(int)uVar12 * 4;
    if (pFVar15 != (FScriptContainerElement *)0x0) goto LAB_141c9b019;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Peeking at a partially filled queue must succeed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141c9b019:
  pFVar6 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar6->CurrentTest,L"The peeked at value must be correct",*(int *)pFVar15,0x29a);
  pFVar15 = pFVar16;
  if (local_238.Buffer.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Buffer.Elements.AllocatorInstance.Data);
  }
  do {
    for (lVar3 = 0x3f; 0xfUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
    local_270.Data = (FScriptContainerElement *)0x0;
    local_1e8[4] = (int)lVar3;
    local_268[0] = 0;
    local_268[1] = 0;
    iVar10 = 1 << ((byte)lVar3 & 0x1f);
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar10,&local_270,local_268,local_268 + 1);
    memset(local_270.Data + (longlong)iVar9 * 4,0,(longlong)iVar10 << 2);
    uVar11 = local_268[0] - 1;
    local_268[2] = 0;
    local_268[3] = 0;
    pFVar14 = pFVar16;
    do {
      uVar12 = local_268[3] + 1U & uVar11;
      if (uVar12 == local_268[2]) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar1 = pFVar6->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_78,L"Adding to non-full queue must succeed");
        (*pcVar2)(pFVar1,&local_78,0);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar13 = local_268[3] & uVar11;
        uVar5 = uVar17;
        if ((int)uVar13 < local_268[0]) {
          uVar5 = ~uVar13 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(int *)(local_270.Data + (longlong)(int)uVar13 * 4) = (int)pFVar14;
        LOCK();
        local_268[3] = uVar12;
        UNLOCK();
      }
      uVar12 = (int)pFVar14 + 1;
      pFVar14 = (FScriptContainerElement *)(ulonglong)uVar12;
    } while (uVar12 < 7);
    if (local_268[2] == local_268[3]) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_88,L"Full queues must not be empty");
      (*pcVar2)(pFVar1,&local_88,0);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    if ((local_268[3] + 1U & uVar11) != local_268[2]) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_48,L"Full queues must be full");
      (*pcVar2)(pFVar1,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    uVar12 = local_268[3] + 1U & uVar11;
    pFVar14 = pFVar16;
    pFVar18 = pFVar16;
    if (uVar12 != local_268[2]) {
      uVar13 = uVar11 & local_268[3];
      uVar5 = uVar17;
      if ((int)uVar13 < local_268[0]) {
        uVar5 = ~uVar13 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(local_270.Data + (longlong)(int)uVar13 * 4) = 0x29a;
      LOCK();
      local_268[3] = uVar12;
      UNLOCK();
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_138,L"Adding to full queue must fail");
      (*pcVar2)(pFVar1,&local_138,0);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    do {
      iVar9 = (int)pFVar14;
      uVar12 = 0;
      if ((int)pFVar15 == 0) {
        if (local_268[2] == local_268[3]) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_128,L"Peeking at a non-empty queue must succeed");
          (*pcVar2)(pFVar1,&local_128,0);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar13 = uVar11 & local_268[2];
          uVar5 = uVar17;
          if ((int)uVar13 < local_268[0]) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar18 = (FScriptContainerElement *)
                    (ulonglong)*(uint *)(local_270.Data + (longlong)(int)uVar13 * 4);
        }
        pFVar6 = FAutomationTestFramework::Get();
        FAutomationTestBase::TestEqual
                  (pFVar6->CurrentTest,L"The peeked at value must be correct",(int)pFVar18,iVar9);
        iVar10 = local_268[2];
        if (local_268[2] == local_268[3]) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_118,L"Removing from a non-empty queue must succeed");
          (*pcVar2)(pFVar1,&local_118,0);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar13 = local_268[2] & uVar11;
          uVar5 = uVar12;
          if ((int)uVar13 < local_268[0]) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar18 = (FScriptContainerElement *)
                    (ulonglong)*(uint *)(local_270.Data + (longlong)(int)uVar13 * 4);
          LOCK();
          local_268[2] = iVar10 + 1U & uVar11;
          UNLOCK();
        }
        pFVar6 = FAutomationTestFramework::Get();
        FAutomationTestBase::TestEqual
                  (pFVar6->CurrentTest,L"The removed value must be correct",(int)pFVar18,iVar9);
      }
      else {
        pFVar14 = pFVar16;
        if (local_268[2] == local_268[3]) {
LAB_141c9b522:
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_108,L"Peeking at a non-empty queue must succeed");
          (*pcVar2)(pFVar1,&local_108,0);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar13 = local_268[2] & uVar11;
          uVar5 = uVar12;
          if ((int)uVar13 < local_268[0]) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar14 = local_270.Data + (longlong)(int)uVar13 * 4;
          if (pFVar14 == (FScriptContainerElement *)0x0) goto LAB_141c9b522;
        }
        pFVar6 = FAutomationTestFramework::Get();
        FAutomationTestBase::TestEqual
                  (pFVar6->CurrentTest,L"The peeked at value must be correct",*(int *)pFVar14,iVar9)
        ;
        if (local_268[2] == local_268[3]) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_f8,L"Removing from a non-empty queue must succeed");
          (*pcVar2)(pFVar1,&local_f8);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
        }
        else {
          LOCK();
          local_268[2] = local_268[2] + 1U & uVar11;
          UNLOCK();
        }
      }
      pFVar14 = (FScriptContainerElement *)(ulonglong)(iVar9 + 1U);
    } while (iVar9 + 1U < 7);
    if (local_268[2] != local_268[3]) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_e8,L"A queue that had all items removed must be empty");
      (*pcVar2)(pFVar1,&local_e8,0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    if ((local_268[3] + 1U & uVar11) == local_268[2]) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_d8,L"A queue that had all items removed must not be full");
      (*pcVar2)(pFVar1,&local_d8,0);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    if (local_270.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data);
    }
    uVar11 = (int)pFVar15 + 1;
    pFVar15 = (FScriptContainerElement *)(ulonglong)uVar11;
    if (1 < uVar11) {
      for (lVar3 = 0x3f; 0xfUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
      local_250.Data = (FScriptContainerElement *)0x0;
      local_1d4 = (undefined4)lVar3;
      local_248[0] = 0;
      local_248[1] = 0;
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar10,&local_250,local_248,local_248 + 1);
      memset(local_250.Data + (longlong)iVar9 * 4,0,(longlong)iVar10 << 2);
      local_268[4] = local_248[0] - 1;
      local_248[2] = 0;
      local_248[3] = 0;
      pFVar15 = pFVar16;
      do {
        uVar11 = local_248[3] + 1U & local_268[4];
        if (uVar11 == local_248[2]) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_c8,L"Adding to non-full queue must succeed");
          (*pcVar2)(pFVar1,&local_c8,0);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar13 = local_268[4] & local_248[3];
          uVar5 = uVar12;
          if ((int)uVar13 < local_248[0]) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(int *)(local_250.Data + (longlong)(int)uVar13 * 4) = (int)pFVar15;
          LOCK();
          UNLOCK();
          local_248[3] = uVar11;
        }
        uVar11 = (int)pFVar15 + 1;
        pFVar15 = (FScriptContainerElement *)(ulonglong)uVar11;
      } while (uVar11 < 7);
      do {
        pFVar6 = FAutomationTestFramework::Get();
        iVar9 = local_248[3] - local_248[2];
        if (iVar9 < 0) {
          iVar9 = iVar9 + local_248[0];
        }
        FAutomationTestBase::TestEqual
                  (pFVar6->CurrentTest,
                   L"Number of elements must be valid for all permutation of Tail and Head",iVar9,7)
        ;
        iVar9 = local_248[2];
        if (local_248[2] == local_248[3]) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_b8,L"Removing from a non-empty queue must succeed");
          (*pcVar2)(pFVar1,&local_b8,0);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar11 = uVar12;
          if ((local_248[2] & local_268[4]) < local_248[0]) {
            uVar11 = (uint)~(local_248[2] & local_268[4]) >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_248[2] = iVar9 + 1U & local_268[4];
          LOCK();
          UNLOCK();
        }
        uVar11 = local_248[3] + 1U & local_268[4];
        if (uVar11 == local_248[2]) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_a8,L"Adding to non-full queue must succeed");
          (*pcVar2)(pFVar1,&local_a8,0);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar13 = local_248[3] & local_268[4];
          uVar5 = uVar17;
          if ((int)uVar13 < local_248[0]) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(int *)(local_250.Data + (longlong)(int)uVar13 * 4) = (int)pFVar16;
          LOCK();
          UNLOCK();
          local_248[3] = uVar11;
        }
        uVar11 = (int)pFVar16 + 1;
        pFVar16 = (FScriptContainerElement *)(ulonglong)uVar11;
        if (7 < uVar11) {
          if (local_250.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data);
          }
          for (lVar3 = 0x3f; 0xfUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
          Const = 0;
          Dest = 0;
          CopyConst = 0;
          local_1f0.Data = (FScriptContainerElement *)0x0;
          iVar10 = 1 << ((byte)lVar3 & 0x1f);
          local_1e8[0] = 0;
          local_1e8[1] = 0;
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,iVar10,&local_1f0,local_1e8,local_1e8 + 1);
          memset((FNonPOD *)(local_1f0.Data + iVar9),0,(longlong)iVar10);
          local_1f8 = local_1e8[0] + -1;
          local_1e8[2] = 0;
          local_1e8[3] = 0;
          pFVar6 = FAutomationTestFramework::Get();
          FAutomationTestBase::TestEqual
                    (pFVar6->CurrentTest,L"The constructor should not run",Const,0);
          pFVar6 = FAutomationTestFramework::Get();
          FAutomationTestBase::TestEqual
                    (pFVar6->CurrentTest,L"The destructor should not run",Dest,0);
          pFVar6 = FAutomationTestFramework::Get();
          FAutomationTestBase::TestEqual
                    (pFVar6->CurrentTest,L"The copy constructor should not run",CopyConst,0);
          FVar8.Data = local_1f0.Data;
          DestructItems<_FCircularQueueTest::TestBody_::__l87::FNonPOD,int>
                    ((FNonPOD *)local_1f0.Data,local_1e8[0]);
          if (FVar8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar8.Data);
          }
          pFVar6 = FAutomationTestFramework::Get();
          FAutomationTestBase::TestEqual
                    (pFVar6->CurrentTest,L"The constructor should not run",Const,0);
          pFVar6 = FAutomationTestFramework::Get();
          if (Dest != 8) {
            pFVar1 = pFVar6->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_98,L"%s: The two values are not equal.");
            (*pcVar2)(pFVar1,&local_98,0);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          pFVar6 = FAutomationTestFramework::Get();
          FAutomationTestBase::TestEqual
                    (pFVar6->CurrentTest,L"The copy constructor should not run",CopyConst,0);
          return;
        }
      } while( true );
    }
  } while( true );
}

