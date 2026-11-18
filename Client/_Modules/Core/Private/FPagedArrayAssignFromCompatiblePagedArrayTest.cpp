// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ade3d0

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::GetTestFlags
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ade3e0

bool __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::IsStressTest
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ade3f0

uint __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::GetRequiredDeviceNum
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ade400

FString * __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::GetTestSourceFileName
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ade430

int __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::GetTestSourceFileLine
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this)

{
  return 0x4ac;
}

// GetTests @ 141ade440

/* WARNING: Removing unreachable block (ram,0x000141ade5be) */

void __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::GetTests
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this,
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

// RunTest @ 141ade5e0

bool __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::RunTest
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ade610

FString * __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::GetBeautifiedTestName
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayAssignFromCompatiblePagedArrayTest @ 141b22730

FPagedArrayAssignFromCompatiblePagedArrayTest * __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::
FPagedArrayAssignFromCompatiblePagedArrayTest
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayAssignFromCompatiblePagedArrayTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TPagedArray::Assign from compatible paged array"
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

// TestBody @ 141b8b060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PagedArray::FPagedArrayAssignFromCompatiblePagedArrayTest::TestBody
          (FPagedArrayAssignFromCompatiblePagedArrayTest *this,FString *param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FAutomationTestFramework *pFVar8;
  int *piVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_308 [32];
  undefined1 local_2d4;
  undefined1 local_2d3;
  undefined1 local_2d2;
  undefined1 local_2d1;
  undefined1 local_2d0;
  undefined1 local_2cf [7];
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *local_2c8;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_2c0;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_2a8;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_290;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_278;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_260;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_248;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_230;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_218;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  TTestToken<int> local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  uVar15 = 0;
  local_ac = 1;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_b0.Value = 0;
  local_260.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.Pages.ArrayNum = 0;
  local_260.Pages.ArrayMax = 0;
  local_260.Count = 0;
  local_a8 = 2;
  TTestToken<int>::ConstructorCalls = 4;
  local_a4 = 3;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_260,4);
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked(&local_260,&local_b0,4)
  ;
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
  piVar9 = (int *)&DAT_00000008;
  local_290.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.Pages.ArrayNum = 0;
  local_290.Pages.ArrayMax = 0;
  local_290.Count = 0;
  while( true ) {
    if (local_290.Pages.ArrayNum != 0) {
      local_2d4 = 0;
      `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_2d4);
    }
    pFVar1 = (ForAnyElementType *)(piVar9 + -2);
    if (pFVar1 == (ForAnyElementType *)0x0) break;
    piVar2 = piVar9 + 1;
    if (*piVar2 < 0) {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar1->Data,*piVar9);
      *piVar9 = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,pFVar1,0,piVar2);
      }
      piVar9 = piVar9 + 4;
    }
    else {
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar1->Data,*piVar9);
      *piVar9 = 0;
      piVar9 = piVar9 + 4;
    }
  }
  if (local_290.Pages.ArrayNum * 8 < local_260.Count) {
    TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow(&local_290,local_260.Count);
  }
  iVar6 = local_260.Pages.ArrayNum;
  pTVar12 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            (local_260.Pages.AllocatorInstance.Data + (longlong)local_260.Pages.ArrayNum * 0x10);
  FVar10.Data = local_260.Pages.AllocatorInstance.Data;
  while( true ) {
    if (local_260.Pages.ArrayNum != iVar6) {
      local_2d3 = 0;
      `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_2d3);
    }
    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data == pTVar12) break;
    TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
              (&local_290,
               (TTestToken<int> *)
               (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data)->
               AllocatorInstance).Data,
               ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data)->ArrayNum);
    FVar10.Data = FVar10.Data + 0x10;
  }
  if (local_260.Pages.ArrayNum != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_120,L"Condition failed");
    (*pcVar4)(pFVar3,&local_120,0);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  if (local_290.Pages.ArrayNum != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_110,L"Condition failed");
    (*pcVar4)(pFVar3,&local_110,0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  if (local_290.Count != 4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_100,L"Condition failed");
    (*pcVar4)(pFVar3,&local_100,0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  local_2c8 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
              local_290.Pages.AllocatorInstance.Data;
  iVar6 = local_290.Count + (local_290.Count >> 0x1f & 7U);
  uVar11 = local_290.Count & 0x80000007;
  uVar16 = uVar15;
  uVar14 = uVar15;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
  }
  while ((uVar14 != iVar6 >> 3 || (uVar16 != uVar11))) {
    pTVar12 = local_2c8 + (int)uVar14;
    uVar13 = 0;
    if ((int)uVar16 < pTVar12->ArrayNum) {
      uVar13 = ~uVar16 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = uVar15 + 1;
    if (*(uint *)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) != uVar15) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_f0,L"Condition failed");
      (*pcVar4)(pFVar3,&local_f0,0);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    uVar16 = uVar16 + 1;
    uVar15 = uVar13;
    if (uVar16 == 8) {
      uVar16 = 0;
      uVar14 = uVar14 + 1;
    }
  }
  if (local_290.Count != uVar15) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_e0,L"Condition failed");
    (*pcVar4)(pFVar3,&local_e0,0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_290.Pages.AllocatorInstance.Data,local_290.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_290.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_290.Pages.AllocatorInstance.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_260.Pages.AllocatorInstance.Data,local_260.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_260.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_260.Pages.AllocatorInstance.Data);
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 8;
  local_2c0.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0 = __xmm_00000003000000020000000100000000;
  uStack_98 = _UNK_150631e08;
  local_2c0.Pages.ArrayNum = 0;
  local_2c0.Pages.ArrayMax = 0;
  local_2c0.Count = 0;
  local_90 = 4;
  local_8c = 5;
  local_88 = 6;
  local_84 = 7;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow(&local_2c0,8);
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
            (&local_2c0,(TTestToken<int> *)&local_a0,8);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 8;
  local_230.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.Pages.ArrayNum = 0;
  local_230.Pages.ArrayMax = 0;
  local_230.Count = 0;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_230);
  if (local_230.Pages.ArrayNum * 4 < local_230.Count + local_2c0.Count) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
              (&local_230,local_230.Count + local_2c0.Count);
  }
  iVar6 = local_2c0.Pages.ArrayNum;
  pTVar12 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            (local_2c0.Pages.AllocatorInstance.Data + (longlong)local_2c0.Pages.ArrayNum * 0x10);
  FVar10.Data = local_2c0.Pages.AllocatorInstance.Data;
  while( true ) {
    if (local_2c0.Pages.ArrayNum != iVar6) {
      local_2d2 = 0;
      `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_2d2);
    }
    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data == pTVar12) break;
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
              (&local_230,
               (TTestToken<int> *)
               (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data)->
               AllocatorInstance).Data,
               ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data)->ArrayNum);
    FVar10.Data = FVar10.Data + 0x10;
  }
  if (local_230.Pages.ArrayNum != 2) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_d0,L"Condition failed");
    (*pcVar4)(pFVar3,&local_d0,0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  if (local_2c0.Pages.ArrayNum != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_c0,L"Condition failed");
    (*pcVar4)(pFVar3,&local_c0,0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  if (local_2c0.Count != 8) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_200,L"Condition failed");
    (*pcVar4)(pFVar3,&local_200,0);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
  }
  local_2c8 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
              local_2c0.Pages.AllocatorInstance.Data;
  iVar7 = local_2c0.Count + (local_2c0.Count >> 0x1f & 7U);
  uVar16 = local_2c0.Count & 0x80000007;
  uVar15 = 0;
  iVar6 = 0;
  if ((int)uVar16 < 0) {
    uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
    uVar15 = 0;
    iVar6 = 0;
  }
  do {
    uVar11 = 0;
    uVar14 = uVar15;
    do {
      if ((iVar6 == iVar7 >> 3) && (uVar11 == uVar16)) {
        if (local_2c0.Count != uVar14) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar3 = pFVar8->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_1e0,L"Condition failed");
          (*pcVar4)(pFVar3,&local_1e0,0);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_230.Pages.AllocatorInstance.Data,local_230.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_230.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_230.Pages.AllocatorInstance.Data);
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_2c0.Pages.AllocatorInstance.Data,local_2c0.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_2c0.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_2c0.Pages.AllocatorInstance.Data);
        }
        TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 8;
        local_80 = __xmm_00000003000000020000000100000000;
        uStack_78 = _UNK_150631e08;
        local_70 = 4;
        local_6c = 5;
        local_68 = 6;
        local_64 = 7;
        local_248.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.Pages.ArrayNum = 0;
        local_248.Pages.ArrayMax = 0;
        local_248.Count = 0;
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_248,8);
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
                  (&local_248,(TTestToken<int> *)&local_80,8);
        TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 8;
        piVar9 = (int *)&DAT_00000008;
        local_278.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_278.Pages.ArrayNum = 0;
        local_278.Pages.ArrayMax = 0;
        local_278.Count = 0;
        while( true ) {
          if (local_278.Pages.ArrayNum != 0) {
            local_2d1 = 0;
            `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_2d1);
          }
          pFVar1 = (ForAnyElementType *)(piVar9 + -2);
          if (pFVar1 == (ForAnyElementType *)0x0) break;
          if (piVar9[1] < 0) {
            DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar1->Data,*piVar9);
            *piVar9 = 0;
            if (piVar9[1] != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,pFVar1,0,piVar9 + 1);
            }
            piVar9 = piVar9 + 4;
          }
          else {
            DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar1->Data,*piVar9);
            *piVar9 = 0;
            piVar9 = piVar9 + 4;
          }
        }
        if (local_278.Pages.ArrayNum * 8 < local_248.Count) {
          TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow
                    (&local_278,local_248.Count);
        }
        iVar6 = local_248.Pages.ArrayNum;
        pTVar12 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  (local_248.Pages.AllocatorInstance.Data +
                  (longlong)local_248.Pages.ArrayNum * 0x10);
        FVar10.Data = local_248.Pages.AllocatorInstance.Data;
        while( true ) {
          if (local_248.Pages.ArrayNum != iVar6) {
            local_2d0 = 0;
            `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_2d0);
          }
          if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data == pTVar12) break;
          TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
                    (&local_278,
                     (TTestToken<int> *)
                     (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data)->
                     AllocatorInstance).Data,
                     ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data)->ArrayNum)
          ;
          FVar10.Data = FVar10.Data + 0x10;
        }
        if (local_248.Pages.ArrayNum != 2) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar3 = pFVar8->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_1d0,L"Condition failed");
          (*pcVar4)(pFVar3,&local_1d0,0);
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
        }
        if (local_278.Pages.ArrayNum != 1) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar3 = pFVar8->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_1c0,L"Condition failed");
          (*pcVar4)(pFVar3,&local_1c0,0);
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
        }
        if (local_278.Count != 8) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar3 = pFVar8->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_1b0,L"Condition failed");
          (*pcVar4)(pFVar3,&local_1b0,0);
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
        }
        local_2c8 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                    local_278.Pages.AllocatorInstance.Data;
        iVar6 = local_278.Count + (local_278.Count >> 0x1f & 7U);
        iVar7 = 0;
        uVar16 = local_278.Count & 0x80000007;
        uVar15 = 0;
        if ((int)uVar16 < 0) {
          uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
          uVar15 = 0;
        }
        do {
          uVar11 = 0;
          uVar14 = uVar15;
          do {
            if ((iVar7 == iVar6 >> 3) && (uVar11 == uVar16)) {
              if (local_278.Count != uVar14) {
                pFVar8 = FAutomationTestFramework::Get();
                pFVar3 = pFVar8->CurrentTest;
                pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
                ::FString::FString(&local_190,L"Condition failed");
                (*pcVar4)(pFVar3,&local_190,0);
                if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_190.Data.AllocatorInstance.Data);
                }
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_278.Pages.AllocatorInstance.Data,local_278.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_278.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_278.Pages.AllocatorInstance.Data);
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_248.Pages.AllocatorInstance.Data,local_248.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_248.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_248.Pages.AllocatorInstance.Data);
              }
              TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 10;
              local_60 = __xmm_00000003000000020000000100000000;
              uStack_58 = _UNK_150631e08;
              local_40 = 8;
              local_50 = ___xmm_00000007000000060000000500000004;
              uStack_48 = _UNK_150631eb8;
              local_3c = 9;
              local_2a8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2a8.Pages.ArrayNum = 0;
              local_2a8.Pages.ArrayMax = 0;
              local_2a8.Count = 0;
              TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow(&local_2a8,10);
              TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
                        (&local_2a8,(TTestToken<int> *)&local_60,10);
              TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 10;
              local_218.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_218.Pages.ArrayNum = 0;
              local_218.Pages.ArrayMax = 0;
              local_218.Count = 0;
              TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_218);
              if (local_218.Pages.ArrayNum * 4 < local_218.Count + local_2a8.Count) {
                TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
                          (&local_218,local_218.Count + local_2a8.Count);
              }
              iVar6 = local_2a8.Pages.ArrayNum;
              pTVar12 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                        (local_2a8.Pages.AllocatorInstance.Data +
                        (longlong)local_2a8.Pages.ArrayNum * 0x10);
              FVar10.Data = local_2a8.Pages.AllocatorInstance.Data;
              while( true ) {
                if (local_2a8.Pages.ArrayNum != iVar6) {
                  local_2cf[0] = 0;
                  `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_2cf);
                }
                if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data == pTVar12)
                break;
                TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
                          (&local_218,
                           (TTestToken<int> *)
                           (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data)->
                           AllocatorInstance).Data,
                           ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar10.Data)->
                           ArrayNum);
                FVar10.Data = FVar10.Data + 0x10;
              }
              if (local_218.Pages.ArrayNum != 3) {
                pFVar8 = FAutomationTestFramework::Get();
                pFVar3 = pFVar8->CurrentTest;
                pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
                ::FString::FString(&local_180,L"Condition failed");
                (*pcVar4)(pFVar3,&local_180,0);
                if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_180.Data.AllocatorInstance.Data);
                }
              }
              if (local_2a8.Pages.ArrayNum != 2) {
                pFVar8 = FAutomationTestFramework::Get();
                pFVar3 = pFVar8->CurrentTest;
                pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
                ::FString::FString(&local_170,L"Condition failed");
                (*pcVar4)(pFVar3,&local_170,0);
                if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_170.Data.AllocatorInstance.Data);
                }
              }
              if (local_2a8.Count != 10) {
                pFVar8 = FAutomationTestFramework::Get();
                pFVar3 = pFVar8->CurrentTest;
                pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
                ::FString::FString(&local_160,L"Condition failed");
                (*pcVar4)(pFVar3,&local_160,0);
                if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_160.Data.AllocatorInstance.Data);
                }
              }
              local_2c8 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                          local_2a8.Pages.AllocatorInstance.Data;
              iVar6 = local_2a8.Count + (local_2a8.Count >> 0x1f & 7U);
              iVar7 = 0;
              uVar16 = local_2a8.Count & 0x80000007;
              uVar15 = 0;
              if ((int)uVar16 < 0) {
                uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
                uVar15 = 0;
              }
              do {
                uVar11 = 0;
                uVar14 = uVar15;
                do {
                  if ((iVar7 == iVar6 >> 3) && (uVar11 == uVar16)) {
                    if (local_2a8.Count != uVar14) {
                      pFVar8 = FAutomationTestFramework::Get();
                      pFVar3 = pFVar8->CurrentTest;
                      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
                      ::FString::FString(&local_140,L"Condition failed");
                      (*pcVar4)(pFVar3,&local_140,0);
                      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_140.Data.AllocatorInstance.Data);
                      }
                    }
                    DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                               local_218.Pages.AllocatorInstance.Data,local_218.Pages.ArrayNum);
                    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                        local_218.Pages.AllocatorInstance.Data !=
                        (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_218.Pages.AllocatorInstance.Data);
                    }
                    DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                               local_2a8.Pages.AllocatorInstance.Data,local_2a8.Pages.ArrayNum);
                    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                        local_2a8.Pages.AllocatorInstance.Data !=
                        (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_2a8.Pages.AllocatorInstance.Data);
                    }
                    if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls)
                         + TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls
                         != 0) || (TTestToken<int>::DestructorCalls != 0x5a)) {
                      pFVar8 = FAutomationTestFramework::Get();
                      pFVar3 = pFVar8->CurrentTest;
                      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
                      ::FString::FString(&local_130,L"Condition failed");
                      (*pcVar4)(pFVar3,&local_130,0);
                      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_130.Data.AllocatorInstance.Data);
                      }
                    }
                    return;
                  }
                  pTVar12 = local_2c8 + iVar7;
                  uVar15 = 0;
                  if ((int)uVar11 < pTVar12->ArrayNum) {
                    uVar15 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar15 = uVar14 + 1;
                  if (*(uint *)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) !=
                      uVar14) {
                    pFVar8 = FAutomationTestFramework::Get();
                    pFVar3 = pFVar8->CurrentTest;
                    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
                    ::FString::FString(&local_150,L"Condition failed");
                    (*pcVar4)(pFVar3,&local_150,0);
                    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_150.Data.AllocatorInstance.Data);
                    }
                  }
                  uVar11 = uVar11 + 1;
                  uVar14 = uVar15;
                } while (uVar11 != 8);
                iVar7 = iVar7 + 1;
              } while( true );
            }
            pTVar12 = local_2c8 + iVar7;
            uVar15 = 0;
            if ((int)uVar11 < pTVar12->ArrayNum) {
              uVar15 = ~uVar11 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar15 = uVar14 + 1;
            if (*(uint *)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) != uVar14)
            {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar3 = pFVar8->CurrentTest;
              pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
              ::FString::FString(&local_1a0,L"Condition failed");
              (*pcVar4)(pFVar3,&local_1a0,0);
              if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
              }
            }
            uVar11 = uVar11 + 1;
            uVar14 = uVar15;
          } while (uVar11 != 8);
          iVar7 = iVar7 + 1;
        } while( true );
      }
      pTVar12 = local_2c8 + iVar6;
      uVar15 = 0;
      if ((int)uVar11 < pTVar12->ArrayNum) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar15 = uVar14 + 1;
      if (*(uint *)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) != uVar14) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar3 = pFVar8->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_1f0,L"Condition failed");
        (*pcVar4)(pFVar3,&local_1f0,0);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      uVar11 = uVar11 + 1;
      uVar14 = uVar15;
    } while (uVar11 != 8);
    iVar6 = iVar6 + 1;
  } while( true );
}

