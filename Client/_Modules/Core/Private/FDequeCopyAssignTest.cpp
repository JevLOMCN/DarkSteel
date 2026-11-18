// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141add610

EAutomationTestFlags __thiscall
Deque::FDequeCopyAssignTest::GetTestFlags(FDequeCopyAssignTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141add620

bool __thiscall Deque::FDequeCopyAssignTest::IsStressTest(FDequeCopyAssignTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141add630

uint __thiscall Deque::FDequeCopyAssignTest::GetRequiredDeviceNum(FDequeCopyAssignTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141add640

FString * __thiscall
Deque::FDequeCopyAssignTest::GetTestSourceFileName
          (FDequeCopyAssignTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141add670

int __thiscall Deque::FDequeCopyAssignTest::GetTestSourceFileLine(FDequeCopyAssignTest *this)

{
  return 0x480;
}

// GetTests @ 141add680

/* WARNING: Removing unreachable block (ram,0x000141add7fe) */

void __thiscall
Deque::FDequeCopyAssignTest::GetTests
          (FDequeCopyAssignTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141add820

bool __thiscall Deque::FDequeCopyAssignTest::RunTest(FDequeCopyAssignTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141add850

FString * __thiscall
Deque::FDequeCopyAssignTest::GetBeautifiedTestName
          (FDequeCopyAssignTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeCopyAssignTest @ 141b1c940

FDequeCopyAssignTest * __thiscall
Deque::FDequeCopyAssignTest::FDequeCopyAssignTest(FDequeCopyAssignTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeCopyAssignTest_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TDeque::Assign copy");
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

// TestBody @ 141b6d1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Deque::FDequeCopyAssignTest::TestBody(FDequeCopyAssignTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  ulong64 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  TTestToken<int> *pTVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  TTestToken<int> *pTVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_e8 [32];
  initializer_list<TTestToken<int>_> local_c8;
  undefined1 local_b8 [20];
  int local_a4;
  int local_a0;
  int iStack_9c;
  ForAnyElementType FStack_98;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined1 local_80 [20];
  int iStack_6c;
  int local_68;
  int iStack_64;
  ForAnyElementType FStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_c8,L"Default allocator");
  (*pcVar2)(pFVar1,&local_c8,0,0);
  if (local_c8._First != (TTestToken<int> *)0x0) {
    FMemory::Free(local_c8._First);
  }
  local_c8._First = (TTestToken<int> *)&local_48;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 6;
  local_c8._Last = (TTestToken<int> *)&local_30;
  local_38 = 4;
  local_34 = 5;
  local_80._0_8_ = (FScriptContainerElement *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
  local_80._16_4_ = 0;
  iStack_6c = 0;
  local_48 = __xmm_00000003000000020000000100000000;
  uStack_40 = _UNK_150631e08;
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>
            ((TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_b8,&local_c8);
  uVar3 = local_80._16_4_;
  uVar4 = local_80._0_8_;
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 6;
  if (local_80._12_4_ != 0) {
    lVar16 = (longlong)(int)local_80._16_4_;
    iVar11 = local_80._12_4_;
    if (iStack_6c <= (int)local_80._16_4_) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_80._0_8_,iStack_6c);
      iVar11 = local_80._8_4_ - uVar3;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)(uVar4 + lVar16 * 4),iVar11);
  }
  TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_>::CopyUnchecked
            ((TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_80,
             (TDeque<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_b8);
  if (local_80._12_4_ != 6) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (local_80._12_4_ != local_b8._12_4_) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (local_80._8_4_ != local_b8._8_4_) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  uVar3 = local_b8._8_4_;
  pFVar15 = (FScriptContainerElement *)local_b8._0_8_;
  if (local_b8._12_4_ != 0) {
    if (local_a4 <= (int)local_b8._16_4_) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_b8._0_8_,local_a4);
      local_b8._12_4_ = uVar3 - local_b8._16_4_;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)((undefined8)pFVar15 + (longlong)(int)local_b8._16_4_ * 4),
               local_b8._12_4_);
  }
  local_b8._12_4_ = 0;
  local_b8._16_4_ = 0;
  local_a4 = 0;
  if (uVar3 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)local_b8,0,0,4);
    local_b8._8_4_ = 0;
    pFVar15 = (FScriptContainerElement *)local_b8._0_8_;
  }
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  uVar3 = local_80._16_4_;
  pFVar15 = (FScriptContainerElement *)local_80._0_8_;
  if (local_80._12_4_ != 0) {
    lVar16 = (longlong)(int)local_80._16_4_;
    iVar11 = local_80._12_4_;
    if (iStack_6c <= (int)local_80._16_4_) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_80._0_8_,iStack_6c);
      iVar11 = local_80._8_4_ - uVar3;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)((undefined8)pFVar15 + lVar16 * 4),iVar11)
    ;
  }
  local_80._12_4_ = 0;
  local_80._16_4_ = 0;
  iStack_6c = 0;
  if (local_80._8_4_ != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)local_80,0,0,4);
    local_80._8_4_ = 0;
    pFVar15 = (FScriptContainerElement *)local_80._0_8_;
  }
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_c8,L"Inline allocation without growing");
  (*pcVar2)(pFVar1,&local_c8,0,0);
  if (local_c8._First != (TTestToken<int> *)0x0) {
    FMemory::Free(local_c8._First);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 6;
  FStack_98.Data._0_4_ = 0;
  FStack_98.Data._4_4_ = 0;
  local_90 = (int)___xmm_00000000000000000000000000000008;
  iStack_8c = (int)((ulonglong)___xmm_00000000000000000000000000000008 >> 0x20);
  iStack_88 = (int)_UNK_15071d218;
  iStack_84 = (int)((ulonglong)_UNK_15071d218 >> 0x20);
  local_38 = 4;
  local_48 = __xmm_00000003000000020000000100000000;
  uStack_40 = _UNK_150631e08;
  local_34 = 5;
  FStack_60.Data._0_4_ = 0;
  FStack_60.Data._4_4_ = 0;
  local_58 = local_90;
  iStack_54 = iStack_8c;
  iStack_50 = iStack_88;
  iStack_4c = iStack_84;
  TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Reserve
            ((TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_80,6);
  puVar9 = local_80;
  if ((undefined1 *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data) != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
  }
  ConstructItems<TTestToken<int>,TTestToken<int>,int>(puVar9,(TTestToken<int> *)&local_48,6);
  iVar11 = iStack_88;
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 6;
  iStack_54 = 6;
  iStack_4c = 6;
  if (iStack_8c != 0) {
    lVar16 = (longlong)iStack_88;
    if (iStack_88 < iStack_84) {
      pTVar10 = (TTestToken<int> *)local_b8;
      iVar11 = iStack_8c;
      if ((TTestToken<int> *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data) !=
          (TTestToken<int> *)0x0) {
        pTVar10 = (TTestToken<int> *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
      }
    }
    else {
      pTVar14 = (TTestToken<int> *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
      pTVar10 = (TTestToken<int> *)local_b8;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      DestructItems<TTestToken<int>,int>(pTVar10,iStack_84);
      pTVar10 = (TTestToken<int> *)local_b8;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      iVar11 = local_90 - iVar11;
    }
    DestructItems<TTestToken<int>,int>(pTVar10 + lVar16,iVar11);
  }
  TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Reserve
            ((TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_b8,6);
  puVar9 = (undefined1 *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
  if (iStack_50 < iStack_4c) {
    puVar8 = local_80;
    if (puVar9 != (undefined1 *)0x0) {
      puVar8 = puVar9;
    }
    puVar9 = local_b8;
    if ((undefined1 *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data) != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
    }
    pTVar14 = (TTestToken<int> *)(puVar8 + (longlong)iStack_50 * 4);
    iVar11 = iStack_54;
  }
  else {
    iVar11 = local_58 - iStack_50;
    puVar8 = local_80;
    if (puVar9 != (undefined1 *)0x0) {
      puVar8 = puVar9;
    }
    puVar9 = local_b8;
    if ((undefined1 *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data) != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
    }
    ConstructItems<TTestToken<int>,TTestToken<int>,int>
              (puVar9,(TTestToken<int> *)(puVar8 + (longlong)iStack_50 * 4),iVar11);
    pTVar14 = (TTestToken<int> *)local_80;
    if ((TTestToken<int> *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data) !=
        (TTestToken<int> *)0x0) {
      pTVar14 = (TTestToken<int> *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
    }
    puVar9 = local_b8;
    if ((undefined1 *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data) != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
    }
    puVar9 = puVar9 + (longlong)iVar11 * 4;
    iVar11 = iStack_4c;
  }
  ConstructItems<TTestToken<int>,TTestToken<int>,int>(puVar9,pTVar14,iVar11);
  iStack_8c = iStack_54;
  iStack_84 = iStack_54;
  if (local_90 <= iStack_54) {
    iStack_84 = iStack_54 - local_90;
  }
  iStack_88 = 0;
  if (iStack_54 != 6) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (local_90 != 8) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (iStack_8c != iStack_54) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (local_90 != local_58) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  iVar17 = iStack_50;
  iVar11 = local_58;
  pTVar14 = (TTestToken<int> *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
  if (iStack_54 != 0) {
    lVar16 = (longlong)iStack_50;
    iVar13 = iStack_54;
    if (iStack_4c <= iStack_50) {
      pTVar10 = (TTestToken<int> *)local_80;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      DestructItems<TTestToken<int>,int>(pTVar10,iStack_4c);
      iVar13 = iVar11 - iVar17;
    }
    pTVar10 = (TTestToken<int> *)local_80;
    if (pTVar14 != (TTestToken<int> *)0x0) {
      pTVar10 = pTVar14;
    }
    DestructItems<TTestToken<int>,int>(pTVar10 + lVar16,iVar13);
  }
  iStack_54 = 0;
  iStack_50 = 0;
  iStack_4c = 0;
  if (iVar11 != 0) {
    if (pTVar14 != (TTestToken<int> *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,4);
      pTVar14 = (TTestToken<int> *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
    }
    local_58 = 8;
  }
  if (pTVar14 != (TTestToken<int> *)0x0) {
    FMemory::Free(pTVar14);
  }
  pTVar14 = (TTestToken<int> *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
  if (iStack_8c != 0) {
    iVar11 = iStack_8c;
    if (iStack_84 <= iStack_88) {
      pTVar10 = (TTestToken<int> *)local_b8;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      DestructItems<TTestToken<int>,int>(pTVar10,iStack_84);
      iVar11 = local_90 - iStack_88;
    }
    pTVar10 = (TTestToken<int> *)local_b8;
    if (pTVar14 != (TTestToken<int> *)0x0) {
      pTVar10 = pTVar14;
    }
    DestructItems<TTestToken<int>,int>(pTVar10 + iStack_88,iVar11);
  }
  iStack_8c = 0;
  iStack_88 = 0;
  iStack_84 = 0;
  if (local_90 != 0) {
    if (pTVar14 != (TTestToken<int> *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,4);
      pTVar14 = (TTestToken<int> *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
    }
    local_90 = 8;
  }
  if (pTVar14 != (TTestToken<int> *)0x0) {
    FMemory::Free(pTVar14);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_c8,L"Inline allocation without growing 2");
  (*pcVar2)(pFVar1,&local_c8,0,0);
  if (local_c8._First != (TTestToken<int> *)0x0) {
    FMemory::Free(local_c8._First);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 6;
  local_48 = __xmm_00000003000000020000000100000000;
  uStack_40 = _UNK_150631e08;
  local_38 = 4;
  local_90 = (int)___xmm_00000000000000000000000000000008;
  iStack_8c = (int)((ulonglong)___xmm_00000000000000000000000000000008 >> 0x20);
  iStack_88 = (int)_UNK_15071d218;
  iStack_84 = (int)((ulonglong)_UNK_15071d218 >> 0x20);
  local_34 = 5;
  FStack_98.Data._0_4_ = 0;
  FStack_98.Data._4_4_ = 0;
  TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Reserve
            ((TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_b8,6);
  puVar9 = local_b8;
  if ((undefined1 *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data) != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
  }
  ConstructItems<TTestToken<int>,TTestToken<int>,int>(puVar9,(TTestToken<int> *)&local_48,6);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 6;
  local_58 = (int)___xmm_00000000000000000000000000000008;
  iStack_54 = (int)((ulonglong)___xmm_00000000000000000000000000000008 >> 0x20);
  iStack_50 = (int)_UNK_15071d218;
  iStack_4c = (int)((ulonglong)_UNK_15071d218 >> 0x20);
  iStack_8c = 6;
  iStack_84 = 6;
  FStack_60.Data._0_4_ = 0;
  FStack_60.Data._4_4_ = 0;
  TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Reserve
            ((TDeque<TTestToken<int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_80,6);
  puVar9 = (undefined1 *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
  if (iStack_88 < iStack_84) {
    puVar8 = local_b8;
    if (puVar9 != (undefined1 *)0x0) {
      puVar8 = puVar9;
    }
    pTVar14 = (TTestToken<int> *)(puVar8 + (longlong)iStack_88 * 4);
    puVar9 = local_80;
    iVar11 = iStack_8c;
    if ((undefined1 *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data) != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
    }
  }
  else {
    iVar11 = local_90 - iStack_88;
    puVar8 = local_b8;
    if (puVar9 != (undefined1 *)0x0) {
      puVar8 = puVar9;
    }
    puVar9 = local_80;
    if ((undefined1 *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data) != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
    }
    ConstructItems<TTestToken<int>,TTestToken<int>,int>
              (puVar9,(TTestToken<int> *)(puVar8 + (longlong)iStack_88 * 4),iVar11);
    pTVar14 = (TTestToken<int> *)local_b8;
    if ((TTestToken<int> *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data) !=
        (TTestToken<int> *)0x0) {
      pTVar14 = (TTestToken<int> *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
    }
    puVar9 = local_80;
    if ((undefined1 *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data) != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
    }
    puVar9 = puVar9 + (longlong)iVar11 * 4;
    iVar11 = iStack_84;
  }
  ConstructItems<TTestToken<int>,TTestToken<int>,int>(puVar9,pTVar14,iVar11);
  iStack_54 = iStack_8c;
  iStack_4c = iStack_8c;
  if (local_58 <= iStack_8c) {
    iStack_4c = iStack_8c - local_58;
  }
  iStack_50 = 0;
  if (iStack_8c != 6) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (local_58 != 8) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (iStack_54 != iStack_8c) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (local_58 != local_90) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  pTVar14 = (TTestToken<int> *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
  if (iStack_54 != 0) {
    iVar11 = iStack_54;
    if (iStack_4c <= iStack_50) {
      pTVar10 = (TTestToken<int> *)local_80;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      DestructItems<TTestToken<int>,int>(pTVar10,iStack_4c);
      iVar11 = local_58 - iStack_50;
    }
    pTVar10 = (TTestToken<int> *)local_80;
    if (pTVar14 != (TTestToken<int> *)0x0) {
      pTVar10 = pTVar14;
    }
    DestructItems<TTestToken<int>,int>(pTVar10 + iStack_50,iVar11);
  }
  iStack_54 = 0;
  iStack_50 = 0;
  iStack_4c = 0;
  if (local_58 != 0) {
    if (pTVar14 != (TTestToken<int> *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,4);
      pTVar14 = (TTestToken<int> *)CONCAT44(FStack_60.Data._4_4_,(int)FStack_60.Data);
    }
    local_58 = 8;
  }
  if (pTVar14 != (TTestToken<int> *)0x0) {
    FMemory::Free(pTVar14);
  }
  iVar11 = iStack_88;
  pTVar14 = (TTestToken<int> *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
  if (iStack_8c != 0) {
    lVar16 = (longlong)iStack_88;
    iVar17 = iStack_8c;
    if (iStack_84 <= iStack_88) {
      pTVar10 = (TTestToken<int> *)local_b8;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      DestructItems<TTestToken<int>,int>(pTVar10,iStack_84);
      iVar17 = local_90 - iVar11;
    }
    pTVar10 = (TTestToken<int> *)local_b8;
    if (pTVar14 != (TTestToken<int> *)0x0) {
      pTVar10 = pTVar14;
    }
    DestructItems<TTestToken<int>,int>(pTVar10 + lVar16,iVar17);
  }
  iStack_8c = 0;
  iStack_88 = 0;
  iStack_84 = 0;
  if (local_90 != 0) {
    if (pTVar14 != (TTestToken<int> *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,4);
      pTVar14 = (TTestToken<int> *)CONCAT44(FStack_98.Data._4_4_,(int)FStack_98.Data);
    }
    local_90 = 8;
  }
  if (pTVar14 != (TTestToken<int> *)0x0) {
    FMemory::Free(pTVar14);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_c8,L"Inline allocation with growing");
  (*pcVar2)(pFVar1,&local_c8,0,0);
  if (local_c8._First != (TTestToken<int> *)0x0) {
    FMemory::Free(local_c8._First);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 6;
  local_a0 = (int)___xmm_00000000000000000000000000000004;
  iStack_9c = (int)((ulonglong)___xmm_00000000000000000000000000000004 >> 0x20);
  FStack_98.Data._0_4_ = (int)_UNK_15071d208;
  FStack_98.Data._4_4_ = (int)((ulonglong)_UNK_15071d208 >> 0x20);
  local_b8._16_4_ = 0;
  local_a4 = 0;
  local_48 = __xmm_00000003000000020000000100000000;
  uStack_40 = _UNK_150631e08;
  local_38 = 4;
  local_34 = 5;
  local_80._16_4_ = 0;
  iStack_6c = 0;
  local_68 = local_a0;
  iStack_64 = iStack_9c;
  FStack_60.Data._0_4_ = (int)FStack_98.Data;
  FStack_60.Data._4_4_ = FStack_98.Data._4_4_;
  uVar7 = FMemory::QuantizeSize(0x18,0);
  iVar11 = (int)(uVar7 >> 2);
  if (iVar11 < 6) {
    iVar11 = 0x7fffffff;
  }
  TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Grow
            ((TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             local_80,iVar11);
  puVar9 = local_80;
  if ((undefined1 *)CONCAT44(iStack_6c,local_80._16_4_) != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)CONCAT44(iStack_6c,local_80._16_4_);
  }
  ConstructItems<TTestToken<int>,TTestToken<int>,int>(puVar9,(TTestToken<int> *)&local_48,6);
  iVar17 = (int)FStack_98.Data;
  iVar11 = local_a0;
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 6;
  pTVar14 = (TTestToken<int> *)CONCAT44(local_a4,local_b8._16_4_);
  iStack_64 = 6;
  FStack_60.Data._4_4_ = 6;
  if (iStack_9c != 0) {
    lVar16 = (longlong)(int)FStack_98.Data;
    if ((int)FStack_98.Data < FStack_98.Data._4_4_) {
      iVar17 = iStack_9c;
      pTVar10 = (TTestToken<int> *)local_b8;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
    }
    else {
      pTVar10 = (TTestToken<int> *)local_b8;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      DestructItems<TTestToken<int>,int>(pTVar10,FStack_98.Data._4_4_);
      pTVar10 = (TTestToken<int> *)local_b8;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      iVar17 = iVar11 - iVar17;
    }
    DestructItems<TTestToken<int>,int>(pTVar10 + lVar16,iVar17);
  }
  iVar17 = 6;
  iVar13 = 6;
  if (iVar11 < 6) {
    uVar7 = FMemory::QuantizeSize(0x18,0);
    iVar11 = (int)(uVar7 >> 2);
    if (iVar11 < 6) {
      iVar11 = 0x7fffffff;
    }
    TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Grow
              ((TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
               local_b8,iVar11);
    pTVar14 = (TTestToken<int> *)CONCAT44(local_a4,local_b8._16_4_);
    iVar17 = FStack_60.Data._4_4_;
    iVar13 = iStack_64;
  }
  puVar9 = (undefined1 *)CONCAT44(iStack_6c,local_80._16_4_);
  if ((int)FStack_60.Data < iVar17) {
    puVar8 = local_80;
    if (puVar9 != (undefined1 *)0x0) {
      puVar8 = puVar9;
    }
    pTVar10 = (TTestToken<int> *)local_b8;
    if (pTVar14 != (TTestToken<int> *)0x0) {
      pTVar10 = pTVar14;
    }
    pTVar14 = (TTestToken<int> *)(puVar8 + (longlong)(int)FStack_60.Data * 4);
  }
  else {
    iVar11 = local_68 - (int)FStack_60.Data;
    puVar8 = local_80;
    if (puVar9 != (undefined1 *)0x0) {
      puVar8 = puVar9;
    }
    pTVar10 = (TTestToken<int> *)local_b8;
    if (pTVar14 != (TTestToken<int> *)0x0) {
      pTVar10 = pTVar14;
    }
    ConstructItems<TTestToken<int>,TTestToken<int>,int>
              (pTVar10,(TTestToken<int> *)(puVar8 + (longlong)(int)FStack_60.Data * 4),iVar11);
    pTVar14 = (TTestToken<int> *)local_80;
    if ((TTestToken<int> *)CONCAT44(iStack_6c,local_80._16_4_) != (TTestToken<int> *)0x0) {
      pTVar14 = (TTestToken<int> *)CONCAT44(iStack_6c,local_80._16_4_);
    }
    puVar9 = local_b8;
    if ((undefined1 *)CONCAT44(local_a4,local_b8._16_4_) != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)CONCAT44(local_a4,local_b8._16_4_);
    }
    pTVar10 = (TTestToken<int> *)(puVar9 + (longlong)iVar11 * 4);
    iVar13 = FStack_60.Data._4_4_;
  }
  ConstructItems<TTestToken<int>,TTestToken<int>,int>(pTVar10,pTVar14,iVar13);
  iStack_9c = iStack_64;
  FStack_98.Data._0_4_ = 0;
  FStack_98.Data._4_4_ = iStack_64;
  if (local_a0 <= iStack_64) {
    FStack_98.Data._4_4_ = iStack_64 - local_a0;
  }
  if (local_a0 != local_68) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (TTestToken<int> *)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  iVar5 = (int)FStack_60.Data;
  iVar13 = local_68;
  iVar17 = (int)FStack_98.Data;
  iVar11 = local_a0;
  pTVar14 = (TTestToken<int> *)CONCAT44(iStack_6c,local_80._16_4_);
  if (iStack_64 != 0) {
    lVar16 = (longlong)(int)FStack_60.Data;
    iVar12 = iStack_64;
    if (FStack_60.Data._4_4_ <= (int)FStack_60.Data) {
      pTVar10 = (TTestToken<int> *)local_80;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      DestructItems<TTestToken<int>,int>(pTVar10,FStack_60.Data._4_4_);
      iVar12 = iVar13 - iVar5;
    }
    pTVar10 = (TTestToken<int> *)local_80;
    if (pTVar14 != (TTestToken<int> *)0x0) {
      pTVar10 = pTVar14;
    }
    DestructItems<TTestToken<int>,int>(pTVar10 + lVar16,iVar12);
  }
  iStack_64 = 0;
  FStack_60.Data._0_4_ = 0;
  FStack_60.Data._4_4_ = 0;
  if (iVar13 != 0) {
    if (pTVar14 != (TTestToken<int> *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_80 + 0x10),0,0,4);
      pTVar14 = (TTestToken<int> *)CONCAT44(iStack_6c,local_80._16_4_);
      iVar11 = local_a0;
      iVar17 = (int)FStack_98.Data;
    }
    local_68 = 4;
  }
  if (pTVar14 != (TTestToken<int> *)0x0) {
    FMemory::Free(pTVar14);
    iVar11 = local_a0;
    iVar17 = (int)FStack_98.Data;
  }
  pTVar14 = (TTestToken<int> *)CONCAT44(local_a4,local_b8._16_4_);
  if (iStack_9c != 0) {
    iVar13 = iStack_9c;
    if (FStack_98.Data._4_4_ <= iVar17) {
      pTVar10 = (TTestToken<int> *)local_b8;
      if (pTVar14 != (TTestToken<int> *)0x0) {
        pTVar10 = pTVar14;
      }
      DestructItems<TTestToken<int>,int>(pTVar10,FStack_98.Data._4_4_);
      iVar13 = iVar11 - iVar17;
    }
    pTVar10 = (TTestToken<int> *)local_b8;
    if (pTVar14 != (TTestToken<int> *)0x0) {
      pTVar10 = pTVar14;
    }
    DestructItems<TTestToken<int>,int>(pTVar10 + iVar17,iVar13);
  }
  iStack_9c = 0;
  FStack_98.Data._0_4_ = 0;
  FStack_98.Data._4_4_ = 0;
  if (iVar11 != 0) {
    if (pTVar14 != (TTestToken<int> *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_b8 + 0x10),0,0,4);
      pTVar14 = (TTestToken<int> *)CONCAT44(local_a4,local_b8._16_4_);
    }
    local_a0 = 4;
  }
  if (pTVar14 != (TTestToken<int> *)0x0) {
    FMemory::Free(pTVar14);
  }
  return;
}

