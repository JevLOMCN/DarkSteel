// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad62d0

EAutomationTestFlags __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::GetTestFlags
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad62e0

bool __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::IsStressTest
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad62f0

uint __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::GetRequiredDeviceNum
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad6300

FString * __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::GetTestSourceFileName
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad6330

int __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::GetTestSourceFileLine
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this)

{
  return 0x305;
}

// GetTests @ 141ad6340

/* WARNING: Removing unreachable block (ram,0x000141ad64be) */

void __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::GetTests
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this,
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

// RunTest @ 141ad64e0

bool __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::RunTest
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad6510

FString * __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::GetBeautifiedTestName
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeCopyFullQueueAndPopFirstEmplaceLastTest @ 141b1cb10

FDequeCopyFullQueueAndPopFirstEmplaceLastTest * __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::FDequeCopyFullQueueAndPopFirstEmplaceLastTest
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeCopyFullQueueAndPopFirstEmplaceLastTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque::Copy with source deque at capacity and PopFirst/EmplaceLast on copied deque"
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

// TestBody @ 141b6df60

void __thiscall
Deque::FDequeCopyFullQueueAndPopFirstEmplaceLastTest::TestBody
          (FDequeCopyFullQueueAndPopFirstEmplaceLastTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  FAutomationTestFramework *pFVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ForAnyElementType local_res18;
  ForAnyElementType local_res20;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  ForAnyElementType local_c0;
  uint local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  ForAnyElementType local_a8;
  ForAnyElementType local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar15 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  iStack_b4 = 0;
  iStack_b0 = 0;
  iStack_ac = 0;
  uVar5 = FMemory::QuantizeSize(0x10,0);
  iVar17 = iStack_b4;
  uVar16 = uVar5 >> 2 & 0xffffffff;
  if ((int)(uVar5 >> 2) < 4) {
    uVar16 = 0x7fffffff;
  }
  if (iStack_b4 != 0) {
    if (iStack_b0 < iStack_ac) {
      if ((iStack_b0 != 0) && (iVar13 = iVar15, 0 < iStack_b4)) {
        do {
          iVar11 = iVar17 - iVar13;
          if (iStack_b0 < iVar11) {
            iVar11 = iStack_b0;
          }
          memmove(local_c0.Data + (longlong)iVar13 * 4,
                  local_c0.Data + ((longlong)iStack_b0 + (longlong)iVar13) * 4,(longlong)iVar11 << 2
                 );
          iVar13 = iVar13 + iVar11;
        } while (iVar13 < iVar17);
      }
    }
    else {
      local_res18.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res18,0,iStack_ac,4);
      memmove(local_res18.Data,local_c0.Data,(longlong)iStack_ac << 2);
      iVar17 = local_b8 - iStack_b0;
      if ((iStack_b0 != 0) && (iVar13 = iVar15, 0 < iVar17)) {
        do {
          iVar11 = iVar17 - iVar13;
          if (iStack_b0 < iVar17 - iVar13) {
            iVar11 = iStack_b0;
          }
          memmove(local_c0.Data + (longlong)iVar13 * 4,
                  local_c0.Data + ((longlong)iStack_b0 + (longlong)iVar13) * 4,(longlong)iVar11 << 2
                 );
          iVar13 = iVar13 + iVar11;
        } while (iVar13 < iVar17);
      }
      memmove(local_c0.Data + (longlong)iVar17 * 4,local_res18.Data,(longlong)iStack_ac << 2);
      if (local_res18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res18.Data);
      }
    }
  }
  uVar14 = (uint)uVar16;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,iStack_b4,uVar14,4)
  ;
  iStack_b0 = 0;
  iStack_ac = iStack_b4;
  iVar17 = iVar15;
  local_b8 = uVar14;
  if (uVar14 != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_98,L"Condition failed");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    uVar16 = (ulonglong)local_b8;
  }
  do {
    if (iStack_b4 == (int)uVar16) {
      iVar13 = iStack_b4 + 1;
      uVar8 = (ulonglong)iVar13;
      if ((int)uVar16 == 0) {
        uVar16 = 4;
        if (4 < uVar8) {
          uVar16 = uVar8;
        }
      }
      else {
        uVar16 = (uVar8 * 3 >> 3) + 0x10 + uVar8;
      }
      uVar5 = FMemory::QuantizeSize(uVar16 * 4,0);
      iVar11 = iStack_b4;
      uVar14 = (uint)(uVar5 >> 2);
      if ((int)uVar14 < iVar13) {
        uVar14 = 0x7fffffff;
      }
      if (iStack_b4 != 0) {
        if (iStack_b0 < iStack_ac) {
          if ((iStack_b0 != 0) && (iVar13 = iVar15, 0 < iStack_b4)) {
            do {
              iVar12 = iVar11 - iVar13;
              if (iStack_b0 < iVar12) {
                iVar12 = iStack_b0;
              }
              memmove(local_c0.Data + (longlong)iVar13 * 4,
                      local_c0.Data + ((longlong)iStack_b0 + (longlong)iVar13) * 4,
                      (longlong)iVar12 << 2);
              iVar13 = iVar13 + iVar12;
            } while (iVar13 < iVar11);
          }
        }
        else {
          local_res20.Data = (FScriptContainerElement *)0x0;
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_res20,0,iStack_ac,4);
          memmove(local_res20.Data,local_c0.Data,(longlong)iStack_ac << 2);
          iVar13 = local_b8 - iStack_b0;
          if ((iStack_b0 != 0) && (iVar11 = iVar15, 0 < iVar13)) {
            do {
              iVar12 = iVar13 - iVar11;
              if (iStack_b0 < iVar13 - iVar11) {
                iVar12 = iStack_b0;
              }
              memmove(local_c0.Data + (longlong)iVar11 * 4,
                      local_c0.Data + ((longlong)iStack_b0 + (longlong)iVar11) * 4,
                      (longlong)iVar12 << 2);
              iVar11 = iVar11 + iVar12;
            } while (iVar11 < iVar13);
          }
          memmove(local_c0.Data + (longlong)iVar13 * 4,local_res20.Data,(longlong)iStack_ac << 2);
          if (local_res20.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_res20.Data);
          }
        }
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_c0,iStack_b4,uVar14,4);
      iStack_ac = iStack_b4;
      iStack_b0 = 0;
      local_b8 = uVar14;
    }
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(local_c0.Data + (longlong)iStack_ac * 4) = iVar17;
    uVar16 = (ulonglong)local_b8;
    iStack_ac = iStack_ac + 1;
    if ((int)local_b8 <= iStack_ac) {
      iStack_ac = iStack_ac - local_b8;
    }
    iStack_b4 = iStack_b4 + 1;
    iVar17 = iVar17 + 1;
  } while (iVar17 < 4);
  if (iStack_b4 != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Condition failed");
    (*pcVar2)(pFVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  iVar17 = iStack_b4;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  iStack_cc = 0;
  iStack_c8 = 0;
  iStack_c4 = 0;
  if (iStack_b4 != 0) {
    if (0 < iStack_b4) {
      uVar5 = FMemory::QuantizeSize((longlong)iStack_b4 << 2,0);
      iVar13 = iStack_cc;
      iVar11 = (int)(uVar5 >> 2);
      if (iVar11 < iVar17) {
        iVar11 = 0x7fffffff;
      }
      if (iStack_cc != 0) {
        if (iStack_c8 < iStack_c4) {
          if ((iStack_c8 != 0) && (iVar17 = iVar15, 0 < iStack_cc)) {
            do {
              iVar12 = iVar13 - iVar17;
              if (iStack_c8 < iVar12) {
                iVar12 = iStack_c8;
              }
              memmove(local_d8.Data + (longlong)iVar17 * 4,
                      local_d8.Data + ((longlong)iStack_c8 + (longlong)iVar17) * 4,
                      (longlong)iVar12 << 2);
              iVar17 = iVar17 + iVar12;
            } while (iVar17 < iVar13);
          }
        }
        else {
          local_a8.Data = (FScriptContainerElement *)0x0;
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_a8,0,iStack_c4,4);
          memmove(local_a8.Data,local_d8.Data,(longlong)iStack_c4 << 2);
          iVar17 = local_d0 - iStack_c8;
          if ((iStack_c8 != 0) && (iVar13 = iVar15, 0 < iVar17)) {
            do {
              iVar12 = iVar17 - iVar13;
              if (iStack_c8 < iVar17 - iVar13) {
                iVar12 = iStack_c8;
              }
              memmove(local_d8.Data + (longlong)iVar13 * 4,
                      local_d8.Data + ((longlong)iStack_c8 + (longlong)iVar13) * 4,
                      (longlong)iVar12 << 2);
              iVar13 = iVar13 + iVar12;
            } while (iVar13 < iVar17);
          }
          memmove(local_d8.Data + (longlong)iVar17 * 4,local_a8.Data,(longlong)iStack_c4 << 2);
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data);
          }
        }
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_d8,iStack_cc,iVar11,4);
      iStack_c4 = iStack_cc;
      local_d0 = iVar11;
    }
    iStack_c8 = 0;
    if (iStack_b0 < iStack_ac) {
      FVar9.Data = local_d8.Data;
      FVar10.Data = local_c0.Data + (longlong)iStack_b0 * 4;
      iVar17 = iStack_b4;
      iStack_cc = iStack_c4;
    }
    else {
      iVar17 = local_b8 - iStack_b0;
      iStack_cc = iStack_c4;
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                (local_d8.Data,(TTestToken<int> *)(local_c0.Data + (longlong)iStack_b0 * 4),iVar17);
      FVar9.Data = local_d8.Data + (longlong)iVar17 * 4;
      FVar10.Data = local_c0.Data;
      iVar17 = iStack_ac;
    }
    ConstructItems<TTestToken<int>,TTestToken<int>,int>
              (FVar9.Data,(TTestToken<int> *)FVar10.Data,iVar17);
    iStack_cc = iStack_b4;
    iStack_c4 = iStack_b4;
    if (local_d0 <= iStack_b4) {
      iStack_c4 = iStack_b4 - local_d0;
    }
  }
  iStack_c8 = 0;
  if (iStack_b4 == iStack_cc) {
    uVar16 = (ulonglong)iStack_b0;
    lVar7 = (longlong)(iStack_b0 + iStack_b4) * 4;
    iVar17 = iVar15;
    if (local_c0.Data + uVar16 * 4 != local_c0.Data + lVar7) {
      do {
        iVar11 = (int)uVar16;
        uVar16 = (ulonglong)(iVar11 + 1U);
        iVar13 = iVar17;
        if (local_d0 <= iVar17) {
          iVar13 = iVar17 - local_d0;
        }
        iVar12 = iVar11;
        if ((int)local_b8 <= iVar11) {
          iVar12 = iVar11 - local_b8;
        }
        if (*(int *)(local_c0.Data + (longlong)iVar12 * 4) !=
            *(int *)(local_d8.Data + (longlong)iVar13 * 4)) goto LAB_141b6e5ae;
        iVar17 = iVar17 + 1;
      } while ((longlong)(int)(iVar11 + 1U) * 4 != lVar7);
    }
  }
  else {
LAB_141b6e5ae:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Condition failed");
    (*pcVar2)(pFVar1,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_d0 != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((iStack_cc < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < Count)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                         ,0x248,L"Parameter index %d exceeds container size %d"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar17 = iStack_cc;
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
  iStack_c8 = iStack_c8 + 1;
  if (local_d0 <= iStack_c8) {
    iStack_c8 = iStack_c8 - local_d0;
  }
  iVar13 = iStack_cc + -1;
  if (iVar13 == local_d0) {
    uVar16 = (ulonglong)iStack_cc;
    if (local_d0 == 0) {
      uVar8 = 4;
      if (4 < uVar16) {
        uVar8 = uVar16;
      }
    }
    else {
      uVar8 = (uVar16 * 3 >> 3) + 0x10 + uVar16;
    }
    iStack_cc = iVar13;
    uVar5 = FMemory::QuantizeSize(uVar8 * 4,0);
    iVar13 = iStack_cc;
    iVar11 = (int)(uVar5 >> 2);
    if (iVar11 < iVar17) {
      iVar11 = 0x7fffffff;
    }
    if (iStack_cc != 0) {
      if (iStack_c8 < iStack_c4) {
        if ((iStack_c8 != 0) && (0 < iStack_cc)) {
          do {
            iVar17 = iVar13 - iVar15;
            if (iStack_c8 < iVar17) {
              iVar17 = iStack_c8;
            }
            memmove(local_d8.Data + (longlong)iVar15 * 4,
                    local_d8.Data + ((longlong)iStack_c8 + (longlong)iVar15) * 4,
                    (longlong)iVar17 << 2);
            iVar15 = iVar15 + iVar17;
          } while (iVar15 < iVar13);
        }
      }
      else {
        local_a0.Data = (FScriptContainerElement *)0x0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&local_a0,0,iStack_c4,4);
        memmove(local_a0.Data,local_d8.Data,(longlong)iStack_c4 << 2);
        iVar17 = local_d0 - iStack_c8;
        if ((iStack_c8 != 0) && (0 < iVar17)) {
          do {
            iVar13 = iVar17 - iVar15;
            if (iStack_c8 < iVar17 - iVar15) {
              iVar13 = iStack_c8;
            }
            memmove(local_d8.Data + (longlong)iVar15 * 4,
                    local_d8.Data + ((longlong)iStack_c8 + (longlong)iVar15) * 4,
                    (longlong)iVar13 << 2);
            iVar15 = iVar15 + iVar13;
          } while (iVar15 < iVar17);
        }
        memmove(local_d8.Data + (longlong)iVar17 * 4,local_a0.Data,(longlong)iStack_c4 << 2);
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_d8,iStack_cc,iVar11,4);
    iStack_c4 = iStack_cc;
    iStack_c8 = 0;
    local_d0 = iVar11;
    iVar13 = iStack_cc;
  }
  iStack_cc = iVar13;
  iVar17 = local_d0;
  FVar9.Data = local_d8.Data;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(local_d8.Data + (longlong)iStack_c4 * 4) = 4;
  iStack_c4 = iStack_c4 + 1;
  uVar16 = (ulonglong)iStack_c8;
  if (local_d0 <= iStack_c4) {
    iStack_c4 = iStack_c4 - local_d0;
  }
  iVar4 = iStack_c8 + iStack_cc + 1;
  lVar7 = uVar16 << 2;
  iVar15 = iStack_cc + 1;
  iVar13 = 1;
  FVar10.Data = local_d8.Data;
  iVar11 = local_d0;
  iVar12 = iStack_c8;
  while (iStack_c8 = iVar12, local_d8.Data = FVar10.Data, local_d0 = iVar11, iStack_cc = iVar15,
        lVar7 != (longlong)iVar4 * 4) {
    iVar11 = (int)uVar16;
    iVar15 = iVar11;
    if (iVar17 <= iVar11) {
      iVar15 = iVar11 - iVar17;
    }
    if (*(int *)(FVar9.Data + (longlong)iVar15 * 4) != iVar13) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_58,L"Condition failed");
      (*pcVar2)(pFVar1,&local_58,0);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    uVar16 = (ulonglong)(iVar11 + 1U);
    lVar7 = (longlong)(int)(iVar11 + 1U) * 4;
    iVar15 = iStack_cc;
    iVar13 = iVar13 + 1;
    FVar10.Data = local_d8.Data;
    iVar11 = local_d0;
    iVar12 = iStack_c8;
  }
  if (iVar15 != 0) {
    if (iStack_c4 <= iVar12) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar10.Data,iStack_c4);
      iVar15 = iVar11 - iVar12;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)(FVar10.Data + (longlong)iVar12 * 4),iVar15);
  }
  iStack_cc = 0;
  iStack_c8 = 0;
  iStack_c4 = 0;
  if (iVar11 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,4);
    local_d0 = 0;
    FVar10.Data = local_d8.Data;
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  iVar17 = iStack_b0;
  uVar14 = local_b8;
  FVar9.Data = local_c0.Data;
  if (iStack_b4 != 0) {
    lVar7 = (longlong)iStack_b0;
    iVar15 = iStack_b4;
    if (iStack_ac <= iStack_b0) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_c0.Data,iStack_ac);
      iVar15 = uVar14 - iVar17;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar9.Data + lVar7 * 4),iVar15);
  }
  iStack_b4 = 0;
  iStack_b0 = 0;
  iStack_ac = 0;
  if (uVar14 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,4);
    local_b8 = 0;
    FVar9.Data = local_c0.Data;
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if ((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
      TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

