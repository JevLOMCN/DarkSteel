// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad6bf0

EAutomationTestFlags __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::GetTestFlags(FConsumeAllMpmcQueueTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad6c00

bool __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::IsStressTest(FConsumeAllMpmcQueueTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad6c10

uint __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::GetRequiredDeviceNum
          (FConsumeAllMpmcQueueTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad6c20

FString * __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::GetTestSourceFileName
          (FConsumeAllMpmcQueueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad6c50

int __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::GetTestSourceFileLine
          (FConsumeAllMpmcQueueTest *this)

{
  return 0x41b;
}

// GetTests @ 141ad6c60

/* WARNING: Removing unreachable block (ram,0x000141ad6dde) */

void __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::GetTests
          (FConsumeAllMpmcQueueTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 141ad6e00

bool __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::RunTest
          (FConsumeAllMpmcQueueTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad6e30

FString * __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::GetBeautifiedTestName
          (FConsumeAllMpmcQueueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FConsumeAllMpmcQueueTest @ 141b1be60

FConsumeAllMpmcQueueTest * __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::FConsumeAllMpmcQueueTest
          (FConsumeAllMpmcQueueTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FConsumeAllMpmcQueueTest_ConsumeAllMpmcQueueTests_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter][Perf]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::ConsumeAllMpmcQueueTest");
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
  ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter][Perf]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 141b69f90

/* WARNING: Removing unreachable block (ram,0x000141b6a3c0) */
/* WARNING: Removing unreachable block (ram,0x000141b6a253) */
/* WARNING: Removing unreachable block (ram,0x000141b6a191) */
/* WARNING: Removing unreachable block (ram,0x000141b6a0c0) */
/* WARNING: Removing unreachable block (ram,0x000141b6a491) */
/* WARNING: Removing unreachable block (ram,0x000141b6a58d) */
/* WARNING: Removing unreachable block (ram,0x000141b6a3e6) */
/* WARNING: Removing unreachable block (ram,0x000141b6a3f0) */
/* WARNING: Removing unreachable block (ram,0x000141b6a418) */
/* WARNING: Removing unreachable block (ram,0x000141b6a419) */
/* WARNING: Removing unreachable block (ram,0x000141b6a137) */
/* WARNING: Removing unreachable block (ram,0x000141b6a140) */
/* WARNING: Removing unreachable block (ram,0x000141b6a168) */
/* WARNING: Removing unreachable block (ram,0x000141b6a169) */
/* WARNING: Removing unreachable block (ram,0x000141b6a184) */
/* WARNING: Removing unreachable block (ram,0x000141b6a246) */
/* WARNING: Removing unreachable block (ram,0x000141b6a3af) */
/* WARNING: Removing unreachable block (ram,0x000141b6a436) */
/* WARNING: Removing unreachable block (ram,0x000141b6a440) */
/* WARNING: Removing unreachable block (ram,0x000141b6a468) */
/* WARNING: Removing unreachable block (ram,0x000141b6a469) */
/* WARNING: Removing unreachable block (ram,0x000141b6a484) */
/* WARNING: Removing unreachable block (ram,0x000141b6a59a) */
/* WARNING: Removing unreachable block (ram,0x000141b6a5a0) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ConsumeAllMpmcQueueTests::FConsumeAllMpmcQueueTest::TestBody
          (FConsumeAllMpmcQueueTest *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90 [15];
  
  puVar11 = (undefined8 *)0x0;
  local_110 = (undefined8 *)0x0;
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 1;
  puVar7 = (undefined8 *)0x0;
  do {
    *puVar5 = puVar7;
    LOCK();
    bVar14 = puVar7 != local_110;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_110;
      puVar6 = local_110;
    }
    local_110 = puVar6;
    UNLOCK();
  } while (bVar14);
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 2;
  puVar7 = local_110;
  do {
    *puVar5 = puVar7;
    LOCK();
    bVar14 = puVar7 != local_110;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_110;
      puVar6 = local_110;
    }
    local_110 = puVar6;
    puVar6 = local_110;
    UNLOCK();
  } while (bVar14);
  LOCK();
  local_110 = (undefined8 *)0x0;
  UNLOCK();
  while (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar6;
    FMemory::Free(puVar6);
    puVar6 = puVar7;
  }
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 3;
  puVar7 = (undefined8 *)0x0;
  do {
    *puVar5 = puVar7;
    LOCK();
    bVar14 = puVar7 != local_110;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_110;
      puVar6 = local_110;
    }
    local_110 = puVar6;
    UNLOCK();
  } while (bVar14);
  LOCK();
  UNLOCK();
  while (local_110 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_110;
    FMemory::Free(local_110);
    local_110 = puVar7;
  }
  LOCK();
  local_110 = (undefined8 *)0x0;
  UNLOCK();
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 4;
  puVar7 = (undefined8 *)0x0;
  do {
    *puVar5 = puVar7;
    LOCK();
    bVar14 = puVar7 != local_110;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_110;
      puVar6 = local_110;
    }
    local_110 = puVar6;
    UNLOCK();
  } while (bVar14);
  if (local_110 != (undefined8 *)0x0) {
    LOCK();
    UNLOCK();
    while (local_110 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*local_110;
      FMemory::Free(local_110);
      local_110 = puVar7;
    }
  }
  LOCK();
  UNLOCK();
  local_f8 = (undefined8 *)0x0;
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 1;
  puVar7 = (undefined8 *)0x0;
  do {
    *puVar5 = puVar7;
    LOCK();
    bVar14 = puVar7 != local_f8;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_f8;
      puVar6 = local_f8;
    }
    local_f8 = puVar6;
    UNLOCK();
  } while (bVar14);
  LOCK();
  UNLOCK();
  bVar14 = false;
  while (local_f8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_f8;
    if (((bVar14) || (*(int *)(local_f8 + 1) != 1)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Done && Item == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                            ,0x430,L""), bVar14)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar14 = true;
    FMemory::Free(local_f8);
    local_f8 = puVar7;
  }
  local_100 = (undefined8 *)0x0;
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 1;
  puVar7 = (undefined8 *)0x0;
  do {
    *puVar5 = puVar7;
    LOCK();
    bVar14 = puVar7 != local_100;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_100;
      puVar6 = local_100;
    }
    local_100 = puVar6;
    UNLOCK();
  } while (bVar14);
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 2;
  puVar7 = local_100;
  do {
    *puVar5 = puVar7;
    LOCK();
    bVar14 = puVar7 != local_100;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_100;
      puVar6 = local_100;
    }
    local_100 = puVar6;
    UNLOCK();
  } while (bVar14);
  LOCK();
  UNLOCK();
  puVar7 = puVar11;
  if (local_100 != (undefined8 *)0x0) {
    do {
      puVar5 = local_100;
      LOCK();
      local_100 = (undefined8 *)*puVar5;
      *puVar5 = puVar7;
      UNLOCK();
      puVar7 = puVar5;
      puVar6 = puVar11;
    } while (local_100 != (undefined8 *)0x0);
    while (puVar5 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar5;
      iVar10 = (int)puVar6;
      if (iVar10 == 0) {
        if (*(int *)(puVar5 + 1) != 1) {
          iVar13 = 0x43e;
          pcVar8 = "Item == 1";
LAB_141b6a36d:
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             (pcVar8,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                              ,iVar13,L"");
          if (bVar14) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
LAB_141b6a386:
        puVar6 = (undefined8 *)(ulonglong)(iVar10 + 1);
      }
      else {
        if (iVar10 == 1) {
          if (*(int *)(puVar5 + 1) != 2) {
            iVar13 = 0x442;
            pcVar8 = "Item == 2";
            goto LAB_141b6a36d;
          }
          goto LAB_141b6a386;
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                            ,0x446,L"");
        if (bVar14) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FMemory::Free(puVar5);
      puVar5 = puVar7;
    }
  }
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  local_108 = (undefined8 *)0x0;
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 1;
  puVar7 = (undefined8 *)0x0;
  do {
    *puVar5 = puVar7;
    LOCK();
    bVar14 = puVar7 != local_108;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_108;
      puVar6 = local_108;
    }
    local_108 = puVar6;
    puVar6 = local_108;
    UNLOCK();
  } while (bVar14);
  LOCK();
  local_108 = (undefined8 *)0x0;
  UNLOCK();
  puVar7 = puVar11;
  while (uVar12 = (uint)puVar7, puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar6;
    puVar7 = (undefined8 *)(ulonglong)(uVar12 + *(int *)(puVar6 + 1));
    FMemory::Free(puVar6);
    puVar6 = puVar5;
  }
  puVar6 = FMemory::Malloc(0x10,8);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 2;
  puVar5 = (undefined8 *)0x0;
  do {
    *puVar6 = puVar5;
    LOCK();
    bVar14 = puVar5 != local_108;
    puVar9 = puVar6;
    if (bVar14) {
      puVar5 = local_108;
      puVar9 = local_108;
    }
    local_108 = puVar9;
    UNLOCK();
  } while (bVar14);
  LOCK();
  UNLOCK();
  while (local_108 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*local_108;
    uVar12 = (int)puVar7 + *(int *)(local_108 + 1);
    puVar7 = (undefined8 *)(ulonglong)uVar12;
    FMemory::Free(local_108);
    local_108 = puVar5;
  }
  if ((uVar12 != 3) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Res == 3",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x45b,L"%d"), bVar14)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_118 = (undefined8 *)0x0;
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 1;
  puVar7 = (undefined8 *)0x0;
  do {
    puVar9 = puVar7;
    *puVar5 = puVar9;
    LOCK();
    bVar14 = puVar9 != local_118;
    puVar7 = puVar9;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_118;
      puVar6 = local_118;
    }
    local_118 = puVar6;
    UNLOCK();
  } while (bVar14);
  if ((puVar9 != (undefined8 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Q.ProduceItem(1) == EConsumeAllMpmcQueueResult::WasEmpty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x460,L""), bVar14)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 2;
  puVar7 = local_118;
  do {
    puVar9 = puVar7;
    *puVar5 = puVar9;
    LOCK();
    bVar14 = puVar9 != local_118;
    puVar7 = puVar9;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_118;
      puVar6 = local_118;
    }
    local_118 = puVar6;
    puVar6 = local_118;
    UNLOCK();
  } while (bVar14);
  if ((puVar9 == (undefined8 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Q.ProduceItem(2) == EConsumeAllMpmcQueueResult::HadItems",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x461,L""), bVar14)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  local_118 = (undefined8 *)0x0;
  UNLOCK();
  while (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar6;
    FMemory::Free(puVar6);
    puVar6 = puVar7;
  }
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 1;
  puVar7 = (undefined8 *)0x0;
  do {
    puVar9 = puVar7;
    *puVar5 = puVar9;
    LOCK();
    bVar14 = puVar9 != local_118;
    puVar7 = puVar9;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_118;
      puVar6 = local_118;
    }
    local_118 = puVar6;
    UNLOCK();
  } while (bVar14);
  if ((puVar9 != (undefined8 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Q.ProduceItem(1) == EConsumeAllMpmcQueueResult::WasEmpty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x463,L""), bVar14)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 2;
  puVar7 = local_118;
  do {
    puVar9 = puVar7;
    *puVar5 = puVar9;
    LOCK();
    bVar14 = puVar9 != local_118;
    puVar7 = puVar9;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_118;
      puVar6 = local_118;
    }
    local_118 = puVar6;
    puVar6 = local_118;
    UNLOCK();
  } while (bVar14);
  if ((puVar9 == (undefined8 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Q.ProduceItem(2) == EConsumeAllMpmcQueueResult::HadItems",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x464,L""), bVar14)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  local_118 = (undefined8 *)0x0;
  UNLOCK();
  while (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar6;
    FMemory::Free(puVar6);
    puVar6 = puVar7;
  }
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 1;
  puVar7 = (undefined8 *)0x0;
  do {
    puVar9 = puVar7;
    *puVar5 = puVar9;
    LOCK();
    bVar14 = puVar9 != local_118;
    puVar7 = puVar9;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_118;
      puVar6 = local_118;
    }
    local_118 = puVar6;
    UNLOCK();
  } while (bVar14);
  if ((puVar9 != (undefined8 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Q.ProduceItem(1) == EConsumeAllMpmcQueueResult::WasEmpty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x466,L""), bVar14)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = FMemory::Malloc(0x10,8);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 2;
  puVar7 = local_118;
  do {
    puVar9 = puVar7;
    *puVar5 = puVar9;
    LOCK();
    bVar14 = puVar9 != local_118;
    puVar7 = puVar9;
    puVar6 = puVar5;
    if (bVar14) {
      puVar7 = local_118;
      puVar6 = local_118;
    }
    local_118 = puVar6;
    UNLOCK();
  } while (bVar14);
  if ((puVar9 == (undefined8 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Q.ProduceItem(2) == EConsumeAllMpmcQueueResult::HadItems",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                          ,0x467,L""), bVar14)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_118 != (undefined8 *)0x0) {
    LOCK();
    UNLOCK();
    while (local_118 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*local_118;
      FMemory::Free(local_118);
      local_118 = puVar7;
    }
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1130,L"TestPerf<10\'000, TConsumeAllMpmcQueue<void*>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x46a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1130);
  }
  puVar7 = puVar11;
  dVar3 = __real_7fefffffffffffff;
  dVar4 = __real_7fefffffffffffff;
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
    dVar3 = __real_7fefffffffffffff;
    dVar4 = __real_7fefffffffffffff;
  }
  do {
    QueryPerformanceCounter(&local_d8);
    dVar2 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TestPerf<10000,UE::TConsumeAllMpmcQueue<void_*,FMemory>_>();
    QueryPerformanceCounter(&local_d0);
    dVar2 = (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2;
    if (4 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    uVar12 = (int)puVar7 + 1;
    if (dVar3 <= dVar2) {
      dVar2 = dVar3;
    }
    puVar7 = (undefined8 *)(ulonglong)uVar12;
    dVar3 = dVar2;
  } while (uVar12 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1131,
               L"TestPerf<10\'000, TConsumeAllMpmcQueueOnTQueue<void*>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x46b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1131);
  }
  puVar7 = puVar11;
  dVar3 = dVar4;
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  do {
    QueryPerformanceCounter(&local_c8);
    dVar2 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TestPerf<10000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTQueue<void_*>_>();
    QueryPerformanceCounter(&local_c0);
    dVar2 = (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2;
    if (4 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    uVar12 = (int)puVar7 + 1;
    if (dVar3 <= dVar2) {
      dVar2 = dVar3;
    }
    puVar7 = (undefined8 *)(ulonglong)uVar12;
    dVar3 = dVar2;
  } while (uVar12 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1132,
               L"TestPerf<10\'000, TConsumeAllMpmcQueueOnTMpscQueue<void*>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x46c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1132);
  }
  puVar7 = puVar11;
  dVar3 = dVar4;
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  do {
    QueryPerformanceCounter(&local_b8);
    dVar2 = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TestPerf<10000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTMpscQueue<void_*>_>();
    QueryPerformanceCounter(&local_b0);
    dVar2 = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2;
    if (4 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    uVar12 = (int)puVar7 + 1;
    if (dVar3 <= dVar2) {
      dVar2 = dVar3;
    }
    puVar7 = (undefined8 *)(ulonglong)uVar12;
    dVar3 = dVar2;
  } while (uVar12 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1133,
               L"TestPerf<10\'000, TConsumeAllMpmcQueueOnTClosableLockFreePointerListUnorderedSingleConsumer<void>>"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x46d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1133);
  }
  puVar7 = puVar11;
  dVar3 = dVar4;
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  do {
    QueryPerformanceCounter(&local_a8);
    dVar2 = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TestPerf<10000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTClosableLockFreePointerListUnorderedSingleConsumer<void>_>
              ();
    QueryPerformanceCounter(&local_a0);
    dVar2 = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2;
    if (4 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    uVar12 = (int)puVar7 + 1;
    if (dVar3 <= dVar2) {
      dVar2 = dVar3;
    }
    puVar7 = (undefined8 *)(ulonglong)uVar12;
    dVar3 = dVar2;
  } while (uVar12 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1134,
               L"TestPerf<10\'000, TConsumeAllMpmcQueueOnTClosableMpscQueue<void*>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x46e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1134);
  }
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  do {
    QueryPerformanceCounter(&local_98);
    dVar3 = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TestPerf<10000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTClosableMpscQueue<void_*>_>
              ();
    QueryPerformanceCounter(local_90);
    dVar3 = (double)local_90[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3;
    if (4 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<5>
                (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    uVar12 = (int)puVar11 + 1;
    puVar11 = (undefined8 *)(ulonglong)uVar12;
    if (dVar4 <= dVar3) {
      dVar3 = dVar4;
    }
    dVar4 = dVar3;
  } while (uVar12 != 5);
  if (4 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<5>
              (&`void___cdecl_Benchmark<5,void_(__cdecl&)(void)>(wchar_t_const*___ptr64,void_(__cdecl&)(void))'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueue<void*>>",
               TestConsumingEmptyQueue<10000000,UE::TConsumeAllMpmcQueue<void_*,FMemory>_>);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1136,
               L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueue<void*>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x470);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1136);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueue<void*>>",
               TestConsumingEmptyQueue<10000000,UE::TConsumeAllMpmcQueue<void_*,FMemory>_>);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTQueue<void*>>",
               TestConsumingEmptyQueue<10000000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTQueue<void_*>_>
              );
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1137,
               L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTQueue<void*>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x471);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1137);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTQueue<void*>>",
               TestConsumingEmptyQueue<10000000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTQueue<void_*>_>
              );
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTMpscQueue<void*>>",
               TestConsumingEmptyQueue<10000000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTMpscQueue<void_*>_>
              );
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1138,
               L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTMpscQueue<void*>>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x472);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1138);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTMpscQueue<void*>>",
               TestConsumingEmptyQueue<10000000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTMpscQueue<void_*>_>
              );
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTClosableLockFreePointerListUnorderedSingleConsumer<void>>"
               ,
               TestConsumingEmptyQueue<10000000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTClosableLockFreePointerListUnorderedSingleConsumer<void>_>
              );
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1139,
               L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTClosableLockFreePointerListUnorderedSingleConsumer<void>>"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x473);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1139);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTClosableLockFreePointerListUnorderedSingleConsumer<void>>"
               ,
               TestConsumingEmptyQueue<10000000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTClosableLockFreePointerListUnorderedSingleConsumer<void>_>
              );
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1140,
               L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTClosableMpscQueue<void*>>"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
               ,0x474);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1140);
    Benchmark<5,void_(__cdecl&)(void)>
              (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTClosableMpscQueue<void*>>"
               ,
               TestConsumingEmptyQueue<10000000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTClosableMpscQueue<void_*>_>
              );
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  Benchmark<5,void_(__cdecl&)(void)>
            (L"TestConsumingEmptyQueue<10\'000\'000, TConsumeAllMpmcQueueOnTClosableMpscQueue<void*>>"
             ,
             TestConsumingEmptyQueue<10000000,UE::ConsumeAllMpmcQueueTests::TConsumeAllMpmcQueueOnTClosableMpscQueue<void_*>_>
            );
  return;
}

