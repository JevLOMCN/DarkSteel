// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141adcb80

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::GetTestFlags(FPagedArrayAssignFromArrayTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adcb90

bool __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::IsStressTest(FPagedArrayAssignFromArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adcd40

uint __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::GetRequiredDeviceNum
          (FPagedArrayAssignFromArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adcd50

FString * __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::GetTestSourceFileName
          (FPagedArrayAssignFromArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141adcd80

int __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::GetTestSourceFileLine
          (FPagedArrayAssignFromArrayTest *this)

{
  return 0x41c;
}

// GetTests @ 141adcdf0

/* WARNING: Removing unreachable block (ram,0x000141adcf6e) */

void __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::GetTests
          (FPagedArrayAssignFromArrayTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

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

// RunTest @ 141adcf90

bool __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::RunTest
          (FPagedArrayAssignFromArrayTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adcfc0

FString * __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::GetBeautifiedTestName
          (FPagedArrayAssignFromArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayAssignFromArrayTest @ 141b22560

FPagedArrayAssignFromArrayTest * __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::FPagedArrayAssignFromArrayTest
          (FPagedArrayAssignFromArrayTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayAssignFromArrayTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Assign from TArray")
  ;
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

// TestBody @ 141b8a8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PagedArray::FPagedArrayAssignFromArrayTest::TestBody
          (FPagedArrayAssignFromArrayTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  int iVar6;
  uint uVar7;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStackY_198 [32];
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_150;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *local_138;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_130;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  TTestToken<int> local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_64 = 1;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_68.Value = 0;
  local_60 = 2;
  TTestToken<int>::ConstructorCalls = 4;
  local_5c = 3;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_118,4,&local_10c);
  ConstructItems<TTestToken<int>,TTestToken<int>,int>(local_118.Data,&local_68,4);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
  local_150.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.Pages.ArrayNum = 0;
  local_150.Pages.ArrayMax = 0;
  local_150.Count = 0;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_150);
  if (local_150.Pages.ArrayNum * 4 < local_150.Count) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_150,local_150.Count);
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
            (&local_150,(TTestToken<int> *)0x0,0);
  DestructItems<TTestToken<int>,int>((TTestToken<int> *)0x0,0);
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_150);
  iVar12 = local_110;
  FVar3.Data = local_118.Data;
  if (((local_118.Data == (FScriptContainerElement *)0x0) && (local_110 != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSource || !InSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                         ,0x188,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = local_150.Count + iVar12;
  if (local_150.Pages.ArrayNum * 4 < iVar6) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_150,iVar6);
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
            (&local_150,(TTestToken<int> *)FVar3.Data,iVar12);
  if (local_150.Count != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_150.Pages.ArrayNum & 0x3fffffffU) != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_e8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  local_138 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
              local_150.Pages.AllocatorInstance.Data;
  iVar6 = local_150.Count + (local_150.Count >> 0x1f & 3U);
  uVar11 = local_150.Count & 0x80000003;
  uVar10 = 0;
  iVar12 = 0;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
    uVar10 = 0;
    iVar12 = 0;
  }
  do {
    uVar7 = 0;
    uVar9 = uVar10;
    do {
      if ((iVar12 == iVar6 >> 2) && (uVar7 == uVar11)) {
        if (local_150.Count != uVar9) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar1 = pFVar5->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_c8,L"Condition failed");
          (*pcVar2)(pFVar1,&local_c8,0);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_150.Pages.AllocatorInstance.Data,local_150.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_150.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_150.Pages.AllocatorInstance.Data);
        }
        FVar3.Data = local_118.Data;
        DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_118.Data,local_110);
        if (FVar3.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar3.Data);
        }
        TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 10;
        local_58 = __xmm_00000003000000020000000100000000;
        uStack_50 = _UNK_150631e08;
        local_38 = 8;
        local_48 = ___xmm_00000007000000060000000500000004;
        uStack_40 = _UNK_150631eb8;
        local_34 = 9;
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = 10;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,10,0,&local_108,10,&local_fc);
        ConstructItems<TTestToken<int>,TTestToken<int>,int>
                  (local_108.Data,(TTestToken<int> *)&local_58,10);
        TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 10;
        local_130.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_130.Pages.ArrayNum = 0;
        local_130.Pages.ArrayMax = 0;
        local_130.Count = 0;
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_130);
        iVar12 = local_100;
        FVar3.Data = local_108.Data;
        if (((local_108.Data == (FScriptContainerElement *)0x0) && (local_100 != 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InSource || !InSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                               ,0x188,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = local_130.Count + iVar12;
        if (local_130.Pages.ArrayNum * 4 < iVar6) {
          TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow(&local_130,iVar6);
        }
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
                  (&local_130,(TTestToken<int> *)FVar3.Data,iVar12);
        if (local_130.Count != 10) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar1 = pFVar5->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_b8,L"Condition failed");
          (*pcVar2)(pFVar1,&local_b8,0);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        if ((local_130.Pages.ArrayNum & 0x3fffffffU) != 3) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar1 = pFVar5->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_a8,L"Condition failed");
          (*pcVar2)(pFVar1,&local_a8,0);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        local_138 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                    local_130.Pages.AllocatorInstance.Data;
        iVar6 = 0;
        iVar12 = local_130.Count + (local_130.Count >> 0x1f & 3U);
        uVar11 = local_130.Count & 0x80000003;
        uVar10 = 0;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
          uVar10 = 0;
        }
        do {
          uVar7 = 0;
          uVar9 = uVar10;
          do {
            if ((iVar6 == iVar12 >> 2) && (uVar7 == uVar11)) {
              if (local_130.Count != uVar9) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar1 = pFVar5->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_88,L"Condition failed");
                (*pcVar2)(pFVar1,&local_88,0);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_130.Pages.AllocatorInstance.Data,local_130.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_130.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_130.Pages.AllocatorInstance.Data);
              }
              FVar3.Data = local_108.Data;
              DestructItems<TTestToken<int>,int>((TTestToken<int> *)local_108.Data,local_100);
              if (FVar3.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar3.Data);
              }
              if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
                   TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0)
                 || (TTestToken<int>::DestructorCalls != 0x2a)) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar1 = pFVar5->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_78,L"Condition failed");
                (*pcVar2)(pFVar1,&local_78,0);
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
              }
              return;
            }
            pTVar8 = local_138 + iVar6;
            uVar10 = 0;
            if ((int)uVar7 < pTVar8->ArrayNum) {
              uVar10 = ~uVar7 >> 0x1f;
            }
            if ((uVar10 == 0) &&
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
            uVar10 = uVar9 + 1;
            if (*(uint *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) != uVar9) {
              pFVar5 = FAutomationTestFramework::Get();
              pFVar1 = pFVar5->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_98,L"Condition failed");
              (*pcVar2)(pFVar1,&local_98,0);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            uVar7 = uVar7 + 1;
            uVar9 = uVar10;
          } while (uVar7 != 4);
          iVar6 = iVar6 + 1;
        } while( true );
      }
      pTVar8 = local_138 + iVar12;
      uVar10 = 0;
      if ((int)uVar7 < pTVar8->ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = uVar9 + 1;
      if (*(uint *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) != uVar9) {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_d8,L"Condition failed");
        (*pcVar2)(pFVar1,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      uVar7 = uVar7 + 1;
      uVar9 = uVar10;
    } while (uVar7 != 4);
    iVar12 = iVar12 + 1;
  } while( true );
}

