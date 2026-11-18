// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141adb250

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayMoveTest::GetTestFlags(FPagedArrayMoveTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adb260

bool __thiscall PagedArray::FPagedArrayMoveTest::IsStressTest(FPagedArrayMoveTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adb270

uint __thiscall PagedArray::FPagedArrayMoveTest::GetRequiredDeviceNum(FPagedArrayMoveTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adb280

FString * __thiscall
PagedArray::FPagedArrayMoveTest::GetTestSourceFileName
          (FPagedArrayMoveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141adb2b0

int __thiscall PagedArray::FPagedArrayMoveTest::GetTestSourceFileLine(FPagedArrayMoveTest *this)

{
  return 0x372;
}

// GetTests @ 141adb2c0

/* WARNING: Removing unreachable block (ram,0x000141adb43e) */

void __thiscall
PagedArray::FPagedArrayMoveTest::GetTests
          (FPagedArrayMoveTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141adb460

bool __thiscall PagedArray::FPagedArrayMoveTest::RunTest(FPagedArrayMoveTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adb490

FString * __thiscall
PagedArray::FPagedArrayMoveTest::GetBeautifiedTestName
          (FPagedArrayMoveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayMoveTest @ 141b24600

FPagedArrayMoveTest * __thiscall
PagedArray::FPagedArrayMoveTest::FPagedArrayMoveTest(FPagedArrayMoveTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayMoveTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Move");
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

// TestBody @ 141b927d0

void __thiscall
PagedArray::FPagedArrayMoveTest::TestBody(FPagedArrayMoveTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FAutomationTestFramework *pFVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_118;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  uVar18 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_118.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Pages.ArrayNum = 0;
  local_118.Pages.ArrayMax = 0;
  local_118.Count = 0;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reserve(&local_118,0x20);
  uVar7 = local_118.Pages.ArrayNum;
  uVar17 = uVar18;
  if ((local_118.Pages.ArrayNum & 0x7ffffffU) != 1) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar1 = pFVar12->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_100,L"Condition failed");
    (*pcVar2)(pFVar1,&local_100,0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    uVar7 = local_118.Pages.ArrayNum;
  }
  do {
    if (local_118.Count == uVar7 << 5) {
      if (uVar7 == local_118.Pages.ArrayMax) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_118,&local_118.Pages.ArrayMax);
      }
      local_118.Pages.ArrayNum = uVar7 + 1;
      lVar13 = (longlong)(int)uVar7 * 0x10;
      *(undefined8 *)&local_118.Pages.AllocatorInstance.Data[lVar13].field_0x0 = 0;
      *(undefined4 *)(local_118.Pages.AllocatorInstance.Data + lVar13 + 8) = 0;
      *(int *)(local_118.Pages.AllocatorInstance.Data + lVar13 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_118.Pages.AllocatorInstance.Data + lVar13),0,
                 (int *)(local_118.Pages.AllocatorInstance.Data + lVar13 + 0xc));
      uVar7 = local_118.Pages.ArrayNum;
    }
    uVar8 = (int)(local_118.Count + (local_118.Count >> 0x1f & 0x1fU)) >> 5;
    uVar11 = 0;
    if ((int)uVar8 < (int)uVar7) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = local_118.Pages.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    iVar9 = *(int *)(pFVar15 + 8);
    if (iVar9 == *(int *)(pFVar15 + 0xc)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
    }
    FVar3.Data = local_118.Pages.AllocatorInstance.Data;
    *(int *)(pFVar15 + 8) = iVar9 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(uint *)(*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar9 * 4) = uVar17;
    uVar17 = uVar17 + 1;
    iVar16 = local_118.Count + 1;
    iVar9 = local_118.Pages.ArrayNum;
    uVar7 = local_118.Pages.ArrayNum;
    local_118.Count = iVar16;
  } while ((int)uVar17 < 0x20);
  local_118.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Pages.ArrayNum = 0;
  local_118.Pages.ArrayMax = 0;
  local_118.Count = 0;
  if (iVar16 != 0x20) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar1 = pFVar12->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_f0,0);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_118.Count != 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar1 = pFVar12->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_e0,L"Condition failed");
      (*pcVar2)(pFVar1,&local_e0,0);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
  }
  uVar17 = 0;
  uVar11 = 0;
  uVar7 = uVar18;
  if (0 < iVar16) {
    do {
      uVar8 = uVar11;
      if ((int)uVar7 < iVar16) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = (int)uVar7 >> 0x1f & 0x1f;
      uVar10 = uVar7 + uVar14;
      uVar14 = (uVar10 & 0x1f) - uVar14;
      uVar10 = (int)uVar10 >> 5;
      uVar8 = uVar11;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar17;
      if ((int)uVar14 < *(int *)(FVar3.Data + (longlong)(int)uVar10 * 0x10 + 8)) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(*(longlong *)&FVar3.Data[(longlong)(int)uVar10 * 0x10].field_0x0 +
                   (longlong)(int)uVar14 * 4) != uVar7) {
        pFVar12 = FAutomationTestFramework::Get();
        pFVar1 = pFVar12->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_d0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_d0,0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar16);
  }
  if (local_118.Count != 0) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar1 = pFVar12->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c0,0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0,0);
  if (iVar16 != 0x20) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar1 = pFVar12->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_b0,0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  uVar7 = uVar18;
  if (0 < iVar16) {
    do {
      uVar8 = uVar17;
      if ((int)uVar7 < iVar16) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = (int)uVar7 >> 0x1f & 0x1f;
      uVar10 = uVar7 + uVar14;
      uVar14 = (uVar10 & 0x1f) - uVar14;
      uVar10 = (int)uVar10 >> 5;
      uVar8 = uVar11;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar11;
      if ((int)uVar14 < *(int *)(FVar3.Data + (longlong)(int)uVar10 * 0x10 + 8)) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(*(longlong *)&FVar3.Data[(longlong)(int)uVar10 * 0x10].field_0x0 +
                   (longlong)(int)uVar14 * 4) != uVar7) {
        pFVar12 = FAutomationTestFramework::Get();
        pFVar1 = pFVar12->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_a0,L"Condition failed");
        (*pcVar2)(pFVar1,&local_a0,0);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar16);
  }
  do {
    if (local_118.Count == local_118.Pages.ArrayNum << 5) {
      iVar16 = local_118.Pages.ArrayNum;
      if (local_118.Pages.ArrayNum == local_118.Pages.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)&local_118,&local_118.Pages.ArrayMax);
      }
      local_118.Pages.ArrayNum = iVar16 + 1;
      lVar13 = (longlong)iVar16 * 0x10;
      *(undefined8 *)&local_118.Pages.AllocatorInstance.Data[lVar13].field_0x0 = 0;
      *(undefined4 *)(local_118.Pages.AllocatorInstance.Data + lVar13 + 8) = 0;
      *(int *)(local_118.Pages.AllocatorInstance.Data + lVar13 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_118.Pages.AllocatorInstance.Data + lVar13),0,
                 (int *)(local_118.Pages.AllocatorInstance.Data + lVar13 + 0xc));
    }
    uVar11 = (int)(local_118.Count + (local_118.Count >> 0x1f & 0x1fU)) >> 5;
    uVar7 = uVar17;
    if ((int)uVar11 < local_118.Pages.ArrayNum) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = local_118.Pages.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
    iVar16 = *(int *)(pFVar15 + 8);
    if (iVar16 == *(int *)(pFVar15 + 0xc)) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
    }
    FVar4.Data = local_118.Pages.AllocatorInstance.Data;
    *(int *)(pFVar15 + 8) = iVar16 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(uint *)(*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar16 * 4) = uVar18;
    uVar18 = uVar18 + 1;
    iVar16 = local_118.Count + 1;
    local_118.Count = iVar16;
  } while ((int)uVar18 < 0x60);
  iVar5 = local_118.Pages.ArrayNum;
  local_118.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Pages.ArrayNum = 0;
  local_118.Pages.ArrayMax = 0;
  local_118.Count = 0;
  if (iVar16 != 0x60) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar1 = pFVar12->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar2)(pFVar1,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_118.Count != 0) {
      pFVar12 = FAutomationTestFramework::Get();
      pFVar1 = pFVar12->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_80,L"Condition failed");
      (*pcVar2)(pFVar1,&local_80,0);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
  }
  uVar7 = 0;
  if (0 < iVar16) {
    do {
      uVar17 = 0;
      if ((int)uVar7 < iVar16) {
        uVar17 = ~uVar7 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = (int)uVar7 >> 0x1f & 0x1f;
      uVar18 = uVar7 + uVar11;
      uVar11 = (uVar18 & 0x1f) - uVar11;
      uVar18 = (int)uVar18 >> 5;
      uVar17 = 0;
      if ((int)uVar18 < iVar5) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar17 = 0;
      if ((int)uVar11 < *(int *)(FVar4.Data + (longlong)(int)uVar18 * 0x10 + 8)) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(*(longlong *)&FVar4.Data[(longlong)(int)uVar18 * 0x10].field_0x0 +
                   (longlong)(int)uVar11 * 4) != uVar7) {
        pFVar12 = FAutomationTestFramework::Get();
        pFVar1 = pFVar12->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_70,L"Condition failed");
        (*pcVar2)(pFVar1,&local_70,0);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar16);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar3.Data,iVar9);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar3.Data !=
      (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (iVar16 != 0x60) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar1 = pFVar12->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_60,L"Condition failed");
    (*pcVar2)(pFVar1,&local_60,0);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  uVar7 = 0;
  if (0 < iVar16) {
    do {
      uVar17 = 0;
      if ((int)uVar7 < iVar16) {
        uVar17 = ~uVar7 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = (int)uVar7 >> 0x1f & 0x1f;
      uVar18 = uVar7 + uVar11;
      uVar11 = (uVar18 & 0x1f) - uVar11;
      uVar18 = (int)uVar18 >> 5;
      uVar17 = 0;
      if ((int)uVar18 < iVar5) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar17 = 0;
      if ((int)uVar11 < *(int *)(FVar4.Data + (longlong)(int)uVar18 * 0x10 + 8)) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(*(longlong *)&FVar4.Data[(longlong)(int)uVar18 * 0x10].field_0x0 +
                   (longlong)(int)uVar11 * 4) != uVar7) {
        pFVar12 = FAutomationTestFramework::Get();
        pFVar1 = pFVar12->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_50,L"Condition failed");
        (*pcVar2)(pFVar1,&local_50,0);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar16);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0,0);
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar4.Data,iVar5);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar4.Data !=
      (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0,0);
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_118.Pages.AllocatorInstance.Data,local_118.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_118.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_118.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0x80)) {
    pFVar12 = FAutomationTestFramework::Get();
    pFVar1 = pFVar12->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_40,L"Condition failed");
    (*pcVar2)(pFVar1,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return;
}

