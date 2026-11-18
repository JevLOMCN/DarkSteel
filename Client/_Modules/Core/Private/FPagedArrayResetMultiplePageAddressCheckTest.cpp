// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ace2d0

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::GetTestFlags
          (FPagedArrayResetMultiplePageAddressCheckTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ace2e0

bool __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::IsStressTest
          (FPagedArrayResetMultiplePageAddressCheckTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ace2f0

uint __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::GetRequiredDeviceNum
          (FPagedArrayResetMultiplePageAddressCheckTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ace300

FString * __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::GetTestSourceFileName
          (FPagedArrayResetMultiplePageAddressCheckTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ace330

int __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::GetTestSourceFileLine
          (FPagedArrayResetMultiplePageAddressCheckTest *this)

{
  return 0xec;
}

// GetTests @ 141ace340

/* WARNING: Removing unreachable block (ram,0x000141ace4be) */

void __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::GetTests
          (FPagedArrayResetMultiplePageAddressCheckTest *this,
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

// RunTest @ 141ace4e0

bool __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::RunTest
          (FPagedArrayResetMultiplePageAddressCheckTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ace510

FString * __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::GetBeautifiedTestName
          (FPagedArrayResetMultiplePageAddressCheckTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayResetMultiplePageAddressCheckTest @ 141b252b0

FPagedArrayResetMultiplePageAddressCheckTest * __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::
FPagedArrayResetMultiplePageAddressCheckTest
          (FPagedArrayResetMultiplePageAddressCheckTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayResetMultiplePageAddressCheckTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TPagedArray::Reset multiple-page plus consistent address check"
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
  ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
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

// TestBody @ 141b95a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PagedArray::FPagedArrayResetMultiplePageAddressCheckTest::TestBody
          (FPagedArrayResetMultiplePageAddressCheckTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  FAutomationTestFramework *pFVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_118;
  ForAnyElementType local_100;
  int local_f8;
  int iStack_f4;
  uint local_f0;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_148;
  uVar14 = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_80 = __xmm_00000003000000020000000100000000;
  uStack_78 = _UNK_150631e08;
  local_118.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70 = ___xmm_00000007000000060000000500000004;
  uStack_68 = _UNK_150631eb8;
  local_118.Pages.ArrayNum = 0;
  local_118.Pages.ArrayMax = 0;
  local_118.Count = 0;
  local_60 = 8;
  TTestToken<int>::ConstructorCalls = 10;
  local_5c = 9;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_118,10);
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
            (&local_118,(TTestToken<int> *)&local_80,10);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 10;
  if ((local_118.Pages.ArrayNum & 0x3fffffffU) != 3) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_e0,L"Condition failed");
    (*pcVar5)(pFVar4,&local_e0,0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  FVar7.Data = local_118.Pages.AllocatorInstance.Data;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  iStack_f4 = 0;
  iVar3 = (local_118.Count >> 0x1f & 3U) + local_118.Count;
  uVar15 = local_118.Count & 0x80000003;
  uVar11 = uVar14;
  uVar13 = uVar14;
  if ((int)uVar15 < 0) {
    uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
    uVar13 = 0;
  }
  while ((uVar13 != iVar3 >> 2 || (uVar11 != uVar15))) {
    iVar2 = *(int *)(FVar7.Data + (longlong)(int)uVar13 * 0x10 + 8);
    uVar9 = 0;
    if ((int)uVar11 < iVar2) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_128 = (longlong)(int)uVar11;
      local_120 = (longlong)iVar2;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar17 = *(longlong *)&FVar7.Data[(longlong)(int)uVar13 * 0x10].field_0x0;
    if (local_f8 == iStack_f4) {
      local_f8 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_100,&iStack_f4);
    }
    lVar12 = (longlong)local_f8;
    local_f8 = local_f8 + 1;
    *(longlong *)(local_100.Data + lVar12 * 8) = lVar17 + (longlong)(int)uVar11 * 4;
    uVar11 = uVar11 + 1;
    if (uVar11 == 4) {
      uVar13 = uVar13 + 1;
      uVar11 = uVar14;
    }
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_118);
  if (local_118.Count != 0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_d0,L"Condition failed");
    (*pcVar5)(pFVar4,&local_d0,0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_118.Count != 0) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_c0,L"Condition failed");
      (*pcVar5)(pFVar4,&local_c0,0);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((local_118.Pages.ArrayNum & 0x3fffffffU) != 3) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_b0,L"Condition failed");
    (*pcVar5)(pFVar4,&local_b0,0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 10;
  local_58 = __xmm_00000003000000020000000100000000;
  uStack_50 = _UNK_150631e08;
  local_38 = 8;
  local_48 = ___xmm_00000007000000060000000500000004;
  uStack_40 = _UNK_150631eb8;
  local_34 = 9;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_118);
  if (local_118.Pages.ArrayNum * 4 < (int)(local_118.Count + 10U)) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
              (&local_118,local_118.Count + 10U);
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
            (&local_118,(TTestToken<int> *)&local_58,10);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 10;
  local_f0 = local_118.Count >> 0x1f & 3;
  uVar15 = local_118.Count + local_f0;
  local_e8 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_118.Pages.AllocatorInstance.Data;
  local_f0 = (uVar15 & 3) - local_f0;
  lVar17 = 0;
  uVar11 = uVar14;
  uVar13 = uVar14;
  while ((uVar13 != (int)uVar15 >> 2 || (uVar11 != local_f0))) {
    pTVar16 = local_e8 + (int)uVar13;
    iVar3 = pTVar16->ArrayNum;
    uVar9 = 0;
    if ((int)uVar11 < iVar3) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_128 = (longlong)(int)uVar11;
      local_120 = (longlong)iVar3;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar6 = (pTVar16->AllocatorInstance).Data;
    uVar9 = 0;
    if ((int)uVar14 < local_f8) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_128 = (longlong)(int)uVar14;
      local_120 = (longlong)local_f8;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar14 = uVar14 + 1;
    pFVar1 = local_100.Data + lVar17;
    lVar17 = lVar17 + 8;
    if (*(FScriptContainerElement **)pFVar1 != pFVar6 + (longlong)(int)uVar11 * 4) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_a0,L"Condition failed");
      (*pcVar5)(pFVar4,&local_a0,0);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == 4) {
      uVar11 = 0;
      uVar13 = uVar13 + 1;
    }
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_118.Pages.AllocatorInstance.Data,local_118.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_118.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_118.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0x28)) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar4 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar5)(pFVar4,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  return;
}

