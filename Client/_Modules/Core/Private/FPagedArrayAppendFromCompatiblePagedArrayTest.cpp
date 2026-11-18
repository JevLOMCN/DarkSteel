// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac7200

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::GetTestFlags
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac7210

bool __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::IsStressTest
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac7220

uint __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::GetRequiredDeviceNum
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac7230

FString * __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::GetTestSourceFileName
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac7260

int __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::GetTestSourceFileLine
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this)

{
  return 0x4f9;
}

// GetTests @ 141ac7270

/* WARNING: Removing unreachable block (ram,0x000141ac73ee) */

void __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::GetTests
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this,
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

// RunTest @ 141ac7410

bool __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::RunTest
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac7440

FString * __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::GetBeautifiedTestName
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayAppendFromCompatiblePagedArrayTest @ 141b221c0

FPagedArrayAppendFromCompatiblePagedArrayTest * __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::
FPagedArrayAppendFromCompatiblePagedArrayTest
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayAppendFromCompatiblePagedArrayTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TPagedArray::Append from compatible paged array"
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

// TestBody @ 141b88e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PagedArray::FPagedArrayAppendFromCompatiblePagedArrayTest::TestBody
          (FPagedArrayAppendFromCompatiblePagedArrayTest *this,FString *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_478 [32];
  longlong local_458;
  longlong local_450;
  uint local_448;
  undefined1 local_444;
  undefined1 local_443;
  undefined1 local_442;
  undefined1 local_441;
  undefined1 local_440;
  undefined1 local_43f;
  undefined1 local_43e;
  undefined1 local_43d [5];
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *local_438;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_430;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_418;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_400;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_3e8;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_3d0;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_3b8;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_3a0;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_388;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_370;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_358;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_340;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> local_328;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
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
  TTestToken<int> local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  TTestToken<int> local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  TTestToken<int> local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  TTestToken<int> local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_478;
  local_cc = 1;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_430.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_430.Pages.ArrayNum = 0;
  local_430.Pages.ArrayMax = 0;
  local_430.Count = 0;
  local_d0.Value = 0;
  local_388.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.Pages.ArrayNum = 0;
  local_388.Pages.ArrayMax = 0;
  local_388.Count = 0;
  local_c8 = 2;
  TTestToken<int>::ConstructorCalls = 4;
  local_c4 = 3;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_388,4);
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked(&local_388,&local_d0,4)
  ;
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 4;
  local_100.Value = 4;
  local_fc = 5;
  local_f8 = 6;
  local_f4 = 7;
  local_3a0.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.Pages.ArrayNum = 0;
  local_3a0.Pages.ArrayMax = 0;
  local_3a0.Count = 0;
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow(&local_3a0,4);
  TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
            (&local_3a0,&local_100,4);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
  if (local_388.Pages.ArrayNum != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2d0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_2d0,0);
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
  }
  if (local_3a0.Pages.ArrayNum != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2c0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_2c0,0);
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
  }
  if (local_430.Pages.ArrayNum * 4 < local_388.Count + local_430.Count) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
              (&local_430,local_388.Count + local_430.Count);
  }
  iVar12 = local_388.Pages.ArrayNum;
  pTVar9 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
           (local_388.Pages.AllocatorInstance.Data + (longlong)local_388.Pages.ArrayNum * 0x10);
  FVar7.Data = local_388.Pages.AllocatorInstance.Data;
  while( true ) {
    if (local_388.Pages.ArrayNum != iVar12) {
      local_444 = 0;
      `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_444);
    }
    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data == pTVar9) break;
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
              (&local_430,
               (TTestToken<int> *)
               (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->
               AllocatorInstance).Data,
               ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->ArrayNum);
    FVar7.Data = FVar7.Data + 0x10;
  }
  if (local_430.Pages.ArrayNum != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2b0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_2b0,0);
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_430.Count != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_2a0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_2a0,0);
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
  }
  if (local_430.Pages.ArrayNum * 4 < local_3a0.Count + local_430.Count) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
              (&local_430,local_3a0.Count + local_430.Count);
  }
  iVar12 = local_3a0.Pages.ArrayNum;
  uVar6 = (ulonglong)local_3a0.Pages.ArrayNum;
  pTVar9 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
           (local_3a0.Pages.AllocatorInstance.Data + uVar6 * 0x10);
  FVar7.Data = local_3a0.Pages.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar12) {
      local_443 = 0;
      `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_443);
    }
    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data == pTVar9) break;
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
              (&local_430,
               (TTestToken<int> *)
               (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->
               AllocatorInstance).Data,
               ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->ArrayNum);
    uVar6 = local_3a0.Pages._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 0x10;
  }
  if (local_430.Pages.ArrayNum != 2) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_290,L"Condition failed");
    (*pcVar3)(pFVar2,&local_290,0);
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
  }
  if (local_430.Count != 8) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_280,L"Condition failed");
    (*pcVar3)(pFVar2,&local_280,0);
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
  }
  local_438 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
              local_430.Pages.AllocatorInstance.Data;
  local_448 = (int)(local_430.Count + (local_430.Count >> 0x1f & 3U)) >> 2;
  uVar8 = local_430.Count & 0x80000003;
  uVar10 = 0;
  uVar13 = 0;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    uVar10 = 0;
    uVar13 = 0;
  }
  do {
    uVar11 = 0;
    uVar14 = uVar10;
    do {
      if ((uVar13 == local_448) && (uVar11 == uVar8)) {
        if (local_430.Count != uVar14) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_260,L"Condition failed");
          (*pcVar3)(pFVar2,&local_260,0);
          if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_3a0.Pages.AllocatorInstance.Data,local_3a0.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_3a0.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_3a0.Pages.AllocatorInstance.Data);
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_388.Pages.AllocatorInstance.Data,local_388.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_388.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_388.Pages.AllocatorInstance.Data);
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_430.Pages.AllocatorInstance.Data,local_430.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_430.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_430.Pages.AllocatorInstance.Data);
        }
        TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 4;
        local_3e8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3e8.Pages.ArrayNum = 0;
        local_3e8.Pages.ArrayMax = 0;
        local_3e8.Count = 0;
        local_f0.Value = 0;
        local_ec = 1;
        local_e8 = 2;
        local_e4 = 3;
        local_358.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_358.Pages.ArrayNum = 0;
        local_358.Pages.ArrayMax = 0;
        local_358.Count = 0;
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_358,4);
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
                  (&local_358,&local_f0,4);
        TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
        TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 4;
        local_e0.Value = 4;
        local_dc = 5;
        local_d8 = 6;
        local_d4 = 7;
        local_370.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_370.Pages.ArrayNum = 0;
        local_370.Pages.ArrayMax = 0;
        local_370.Count = 0;
        TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow(&local_370,4);
        TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
                  (&local_370,&local_e0,4);
        TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
        if (local_358.Pages.ArrayNum != 1) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_250,L"Condition failed");
          (*pcVar3)(pFVar2,&local_250,0);
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
        }
        if (local_370.Pages.ArrayNum != 1) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_240,L"Condition failed");
          (*pcVar3)(pFVar2,&local_240,0);
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
        }
        if (local_3e8.Pages.ArrayNum * 8 < local_358.Count + local_3e8.Count) {
          TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow
                    (&local_3e8,local_358.Count + local_3e8.Count);
        }
        iVar12 = local_358.Pages.ArrayNum;
        pTVar9 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                 (local_358.Pages.AllocatorInstance.Data + (longlong)local_358.Pages.ArrayNum * 0x10
                 );
        FVar7.Data = local_358.Pages.AllocatorInstance.Data;
        while( true ) {
          if (local_358.Pages.ArrayNum != iVar12) {
            local_442 = 0;
            `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_442);
          }
          if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data == pTVar9) break;
          TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
                    (&local_3e8,
                     (TTestToken<int> *)
                     (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->
                     AllocatorInstance).Data,
                     ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->ArrayNum);
          FVar7.Data = FVar7.Data + 0x10;
        }
        if (local_3e8.Pages.ArrayNum != 1) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_230,L"Condition failed");
          (*pcVar3)(pFVar2,&local_230,0);
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
        }
        if (local_3e8.Count != 4) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_220,L"Condition failed");
          (*pcVar3)(pFVar2,&local_220,0);
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
        }
        if (local_3e8.Pages.ArrayNum * 8 < local_370.Count + local_3e8.Count) {
          TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow
                    (&local_3e8,local_370.Count + local_3e8.Count);
        }
        iVar12 = local_370.Pages.ArrayNum;
        uVar6 = (ulonglong)local_370.Pages.ArrayNum;
        pTVar9 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                 (local_370.Pages.AllocatorInstance.Data + uVar6 * 0x10);
        FVar7.Data = local_370.Pages.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar6 != iVar12) {
            local_441 = 0;
            `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_441);
          }
          if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data == pTVar9) break;
          TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
                    (&local_3e8,
                     (TTestToken<int> *)
                     (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->
                     AllocatorInstance).Data,
                     ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->ArrayNum);
          uVar6 = local_370.Pages._8_8_ & 0xffffffff;
          FVar7.Data = FVar7.Data + 0x10;
        }
        if (local_3e8.Pages.ArrayNum != 1) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_210,L"Condition failed");
          (*pcVar3)(pFVar2,&local_210,0);
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
        }
        if (local_3e8.Count != 8) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_190,L"Condition failed");
          (*pcVar3)(pFVar2,&local_190,0);
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
        }
        local_438 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                    local_3e8.Pages.AllocatorInstance.Data;
        local_448 = (int)(local_3e8.Count + (local_3e8.Count >> 0x1f & 7U)) >> 3;
        uVar8 = local_3e8.Count & 0x80000007;
        uVar10 = 0;
        uVar13 = 0;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
          uVar10 = 0;
          uVar13 = 0;
        }
        do {
          uVar11 = 0;
          uVar14 = uVar10;
          do {
            if ((uVar13 == local_448) && (uVar11 == uVar8)) {
              if (local_3e8.Count != uVar14) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar2 = pFVar5->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_1b0,L"Condition failed");
                (*pcVar3)(pFVar2,&local_1b0,0);
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                }
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_370.Pages.AllocatorInstance.Data,local_370.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_370.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_370.Pages.AllocatorInstance.Data);
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_358.Pages.AllocatorInstance.Data,local_358.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_358.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_358.Pages.AllocatorInstance.Data);
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_3e8.Pages.AllocatorInstance.Data,local_3e8.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_3e8.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_3e8.Pages.AllocatorInstance.Data);
              }
              TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 7;
              local_c0 = __xmm_00000003000000020000000100000000;
              uStack_b8 = _UNK_150631e08;
              local_400.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_400.Pages.ArrayNum = 0;
              local_400.Pages.ArrayMax = 0;
              local_400.Count = 0;
              local_b0 = 4;
              local_ac = 5;
              local_a8 = 6;
              local_340.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_340.Pages.ArrayNum = 0;
              local_340.Pages.ArrayMax = 0;
              local_340.Count = 0;
              TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_340,7);
              TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
                        (&local_340,(TTestToken<int> *)&local_c0,7);
              TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 7;
              TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 9;
              local_60 = ___xmm_0000000a000000090000000800000007;
              uStack_58 = _UNK_15071d318;
              local_40 = 0xf;
              local_50 = ___xmm_0000000e0000000d0000000c0000000b;
              uStack_48 = _UNK_15071d338;
              local_3b8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3b8.Pages.ArrayNum = 0;
              local_3b8.Pages.ArrayMax = 0;
              local_3b8.Count = 0;
              TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow(&local_3b8,9);
              TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
                        (&local_3b8,(TTestToken<int> *)&local_60,9);
              TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 9;
              if (local_340.Pages.ArrayNum != 2) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar2 = pFVar5->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_1c0,L"Condition failed");
                (*pcVar3)(pFVar2,&local_1c0,0);
                if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                }
              }
              if (local_3b8.Pages.ArrayNum != 2) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar2 = pFVar5->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_140,L"Condition failed");
                (*pcVar3)(pFVar2,&local_140,0);
                if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_140.Data.AllocatorInstance.Data);
                }
              }
              if (local_400.Pages.ArrayNum * 4 < local_340.Count + local_400.Count) {
                TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
                          (&local_400,local_340.Count + local_400.Count);
              }
              iVar12 = local_340.Pages.ArrayNum;
              pTVar9 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                       (local_340.Pages.AllocatorInstance.Data +
                       (longlong)local_340.Pages.ArrayNum * 0x10);
              FVar7.Data = local_340.Pages.AllocatorInstance.Data;
              while( true ) {
                if (local_340.Pages.ArrayNum != iVar12) {
                  local_440 = 0;
                  `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_440);
                }
                if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data == pTVar9)
                break;
                TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
                          (&local_400,
                           (TTestToken<int> *)
                           (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->
                           AllocatorInstance).Data,
                           ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->
                           ArrayNum);
                FVar7.Data = FVar7.Data + 0x10;
              }
              if (local_400.Pages.ArrayNum != 2) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar2 = pFVar5->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_180,L"Condition failed");
                (*pcVar3)(pFVar2,&local_180,0);
                if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_180.Data.AllocatorInstance.Data);
                }
              }
              if (local_400.Count != 7) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar2 = pFVar5->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_170,L"Condition failed");
                (*pcVar3)(pFVar2,&local_170,0);
                if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_170.Data.AllocatorInstance.Data);
                }
              }
              if (local_400.Pages.ArrayNum * 4 < local_3b8.Count + local_400.Count) {
                TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
                          (&local_400,local_3b8.Count + local_400.Count);
              }
              iVar12 = local_3b8.Pages.ArrayNum;
              uVar6 = (ulonglong)local_3b8.Pages.ArrayNum;
              pTVar9 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                       (local_3b8.Pages.AllocatorInstance.Data + uVar6 * 0x10);
              FVar7.Data = local_3b8.Pages.AllocatorInstance.Data;
              while( true ) {
                if ((int)uVar6 != iVar12) {
                  local_43f = 0;
                  `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_43f);
                }
                if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data == pTVar9)
                break;
                TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
                          (&local_400,
                           (TTestToken<int> *)
                           (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->
                           AllocatorInstance).Data,
                           ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)->
                           ArrayNum);
                uVar6 = local_3b8.Pages._8_8_ & 0xffffffff;
                FVar7.Data = FVar7.Data + 0x10;
              }
              if (local_400.Pages.ArrayNum != 4) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar2 = pFVar5->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_160,L"Condition failed");
                (*pcVar3)(pFVar2,&local_160,0);
                if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_160.Data.AllocatorInstance.Data);
                }
              }
              if (local_400.Count != 0x10) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar2 = pFVar5->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_150,L"Condition failed");
                (*pcVar3)(pFVar2,&local_150,0);
                if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_150.Data.AllocatorInstance.Data);
                }
              }
              local_438 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                          local_400.Pages.AllocatorInstance.Data;
              local_448 = (int)(local_400.Count + (local_400.Count >> 0x1f & 3U)) >> 2;
              uVar8 = local_400.Count & 0x80000003;
              uVar10 = 0;
              uVar13 = 0;
              if ((int)uVar8 < 0) {
                uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
                uVar10 = 0;
                uVar13 = 0;
              }
              do {
                uVar11 = 0;
                uVar14 = uVar10;
                do {
                  if ((uVar13 == local_448) && (uVar11 == uVar8)) {
                    if (local_400.Count != uVar14) {
                      pFVar5 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar5->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_120,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_120,0);
                      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_120.Data.AllocatorInstance.Data);
                      }
                    }
                    DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                               local_3b8.Pages.AllocatorInstance.Data,local_3b8.Pages.ArrayNum);
                    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                        local_3b8.Pages.AllocatorInstance.Data !=
                        (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_3b8.Pages.AllocatorInstance.Data);
                    }
                    DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                               local_340.Pages.AllocatorInstance.Data,local_340.Pages.ArrayNum);
                    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                        local_340.Pages.AllocatorInstance.Data !=
                        (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_340.Pages.AllocatorInstance.Data);
                    }
                    DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                               local_400.Pages.AllocatorInstance.Data,local_400.Pages.ArrayNum);
                    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                        local_400.Pages.AllocatorInstance.Data !=
                        (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_400.Pages.AllocatorInstance.Data);
                    }
                    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 6;
                    local_a0 = __xmm_00000003000000020000000100000000;
                    uStack_98 = _UNK_150631e08;
                    local_418.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_418.Pages.ArrayNum = 0;
                    local_418.Pages.ArrayMax = 0;
                    local_418.Count = 0;
                    local_90 = 4;
                    local_8c = 5;
                    local_3d0.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_3d0.Pages.ArrayNum = 0;
                    local_3d0.Pages.ArrayMax = 0;
                    local_3d0.Count = 0;
                    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_3d0,6);
                    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
                              (&local_3d0,(TTestToken<int> *)&local_a0,6);
                    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 6;
                    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 10;
                    local_88 = ___xmm_00000009000000080000000700000006;
                    uStack_80 = _UNK_15071d308;
                    local_68 = 0xe;
                    local_78 = ___xmm_0000000d0000000c0000000b0000000a;
                    uStack_70 = _UNK_15071d328;
                    local_64 = 0xf;
                    local_328.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_328.Pages.ArrayNum = 0;
                    local_328.Pages.ArrayMax = 0;
                    local_328.Count = 0;
                    TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow(&local_328,10)
                    ;
                    TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
                              (&local_328,(TTestToken<int> *)&local_88,10);
                    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 10;
                    if (local_3d0.Pages.ArrayNum != 2) {
                      pFVar5 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar5->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_110,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_110,0);
                      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_110.Data.AllocatorInstance.Data);
                      }
                    }
                    if (local_328.Pages.ArrayNum != 2) {
                      pFVar5 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar5->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_300,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_300,0);
                      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_300.Data.AllocatorInstance.Data);
                      }
                    }
                    if (local_418.Pages.ArrayNum * 8 < local_3d0.Count + local_418.Count) {
                      TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow
                                (&local_418,local_3d0.Count + local_418.Count);
                    }
                    iVar12 = local_3d0.Pages.ArrayNum;
                    pTVar9 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                             (local_3d0.Pages.AllocatorInstance.Data +
                             (longlong)local_3d0.Pages.ArrayNum * 0x10);
                    FVar7.Data = local_3d0.Pages.AllocatorInstance.Data;
                    while( true ) {
                      if (local_3d0.Pages.ArrayNum != iVar12) {
                        local_43e = 0;
                        `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_43e);
                      }
                      if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data ==
                          pTVar9) break;
                      TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
                                (&local_418,
                                 (TTestToken<int> *)
                                 (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data
                                  )->AllocatorInstance).Data,
                                 ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)
                                 ->ArrayNum);
                      FVar7.Data = FVar7.Data + 0x10;
                    }
                    if (local_418.Pages.ArrayNum != 1) {
                      pFVar5 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar5->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_2f0,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_2f0,0);
                      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
                      }
                    }
                    if (local_418.Count != 6) {
                      pFVar5 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar5->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_2e0,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_2e0,0);
                      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
                      }
                    }
                    if (local_418.Pages.ArrayNum * 8 < local_328.Count + local_418.Count) {
                      TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow
                                (&local_418,local_328.Count + local_418.Count);
                    }
                    iVar12 = local_328.Pages.ArrayNum;
                    uVar6 = (ulonglong)local_328.Pages.ArrayNum;
                    pTVar9 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                             (local_328.Pages.AllocatorInstance.Data + uVar6 * 0x10);
                    FVar7.Data = local_328.Pages.AllocatorInstance.Data;
                    while( true ) {
                      if ((int)uVar6 != iVar12) {
                        local_43d[0] = 0;
                        `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(local_43d);
                      }
                      if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data ==
                          pTVar9) break;
                      TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
                                (&local_418,
                                 (TTestToken<int> *)
                                 (((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data
                                  )->AllocatorInstance).Data,
                                 ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar7.Data)
                                 ->ArrayNum);
                      uVar6 = local_328.Pages._8_8_ & 0xffffffff;
                      FVar7.Data = FVar7.Data + 0x10;
                    }
                    if (local_418.Pages.ArrayNum != 2) {
                      pFVar5 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar5->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_310,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_310,0);
                      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_310.Data.AllocatorInstance.Data);
                      }
                    }
                    if (local_418.Count != 0x10) {
                      pFVar5 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar5->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_200,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_200,0);
                      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_200.Data.AllocatorInstance.Data);
                      }
                    }
                    local_438 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                                local_418.Pages.AllocatorInstance.Data;
                    local_448 = (int)(local_418.Count + (local_418.Count >> 0x1f & 7U)) >> 3;
                    uVar13 = local_418.Count & 0x80000007;
                    uVar10 = 0;
                    iVar12 = 0;
                    if ((int)uVar13 < 0) {
                      uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
                      uVar10 = 0;
                      iVar12 = 0;
                    }
                    do {
                      uVar14 = 0;
                      uVar8 = uVar10;
                      do {
                        if ((iVar12 == local_448) && (uVar14 == uVar13)) {
                          if (local_418.Count != uVar8) {
                            pFVar5 = FAutomationTestFramework::Get();
                            pFVar2 = pFVar5->CurrentTest;
                            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                            ::FString::FString(&local_1e0,L"Condition failed");
                            (*pcVar3)(pFVar2,&local_1e0,0);
                            if (local_1e0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                            }
                          }
                          DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                                    ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                                     local_328.Pages.AllocatorInstance.Data,local_328.Pages.ArrayNum
                                    );
                          if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                              local_328.Pages.AllocatorInstance.Data !=
                              (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                            FMemory::Free(local_328.Pages.AllocatorInstance.Data);
                          }
                          DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                                    ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                                     local_3d0.Pages.AllocatorInstance.Data,local_3d0.Pages.ArrayNum
                                    );
                          if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                              local_3d0.Pages.AllocatorInstance.Data !=
                              (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                            FMemory::Free(local_3d0.Pages.AllocatorInstance.Data);
                          }
                          DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                                    ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                                     local_418.Pages.AllocatorInstance.Data,local_418.Pages.ArrayNum
                                    );
                          if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                              local_418.Pages.AllocatorInstance.Data !=
                              (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                            FMemory::Free(local_418.Pages.AllocatorInstance.Data);
                          }
                          if (((TTestToken<int>::MoveConstructorCalls -
                               TTestToken<int>::DestructorCalls) +
                               TTestToken<int>::CopyConstructorCalls +
                               TTestToken<int>::ConstructorCalls != 0) ||
                             (TTestToken<int>::DestructorCalls != 0x90)) {
                            pFVar5 = FAutomationTestFramework::Get();
                            pFVar2 = pFVar5->CurrentTest;
                            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                            ::FString::FString(&local_1d0,L"Condition failed");
                            (*pcVar3)(pFVar2,&local_1d0,0);
                            if (local_1d0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                            }
                          }
                          return;
                        }
                        pTVar9 = local_438 + iVar12;
                        iVar1 = pTVar9->ArrayNum;
                        uVar10 = 0;
                        if ((int)uVar14 < iVar1) {
                          uVar10 = ~uVar14 >> 0x1f;
                        }
                        if (uVar10 == 0) {
                          local_458 = (longlong)(int)uVar14;
                          local_450 = (longlong)iVar1;
                          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar4) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                        }
                        uVar10 = uVar8 + 1;
                        if (*(uint *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar14 * 4)
                            != uVar8) {
                          pFVar5 = FAutomationTestFramework::Get();
                          pFVar2 = pFVar5->CurrentTest;
                          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                          ::FString::FString(&local_1f0,L"Condition failed");
                          (*pcVar3)(pFVar2,&local_1f0,0);
                          if (local_1f0.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
                          }
                        }
                        uVar14 = uVar14 + 1;
                        uVar8 = uVar10;
                      } while (uVar14 != 8);
                      iVar12 = iVar12 + 1;
                    } while( true );
                  }
                  pTVar9 = local_438 + (int)uVar13;
                  iVar12 = pTVar9->ArrayNum;
                  uVar10 = 0;
                  if ((int)uVar11 < iVar12) {
                    uVar10 = ~uVar11 >> 0x1f;
                  }
                  if (uVar10 == 0) {
                    local_458 = (longlong)(int)uVar11;
                    local_450 = (longlong)iVar12;
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar4) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  uVar10 = uVar14 + 1;
                  if (*(uint *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) !=
                      uVar14) {
                    pFVar5 = FAutomationTestFramework::Get();
                    pFVar2 = pFVar5->CurrentTest;
                    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                    ::FString::FString(&local_130,L"Condition failed");
                    (*pcVar3)(pFVar2,&local_130,0);
                    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_130.Data.AllocatorInstance.Data);
                    }
                  }
                  uVar11 = uVar11 + 1;
                  uVar14 = uVar10;
                } while (uVar11 != 4);
                uVar13 = uVar13 + 1;
              } while( true );
            }
            pTVar9 = local_438 + (int)uVar13;
            iVar12 = pTVar9->ArrayNum;
            uVar10 = 0;
            if ((int)uVar11 < iVar12) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if (uVar10 == 0) {
              local_458 = (longlong)(int)uVar11;
              local_450 = (longlong)iVar12;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar10 = uVar14 + 1;
            if (*(uint *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) != uVar14) {
              pFVar5 = FAutomationTestFramework::Get();
              pFVar2 = pFVar5->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_1a0,L"Condition failed");
              (*pcVar3)(pFVar2,&local_1a0,0);
              if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
              }
            }
            uVar11 = uVar11 + 1;
            uVar14 = uVar10;
          } while (uVar11 != 8);
          uVar13 = uVar13 + 1;
        } while( true );
      }
      pTVar9 = local_438 + (int)uVar13;
      iVar12 = pTVar9->ArrayNum;
      uVar10 = 0;
      if ((int)uVar11 < iVar12) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_458 = (longlong)(int)uVar11;
        local_450 = (longlong)iVar12;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar10 = uVar14 + 1;
      if (*(uint *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) != uVar14) {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar2 = pFVar5->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_270,L"Condition failed");
        (*pcVar3)(pFVar2,&local_270,0);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
      }
      uVar11 = uVar11 + 1;
      uVar14 = uVar10;
    } while (uVar11 != 4);
    uVar13 = uVar13 + 1;
  } while( true );
}

