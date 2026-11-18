// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad9e90

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayCopyTest::GetTestFlags(FPagedArrayCopyTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad9ea0

bool __thiscall PagedArray::FPagedArrayCopyTest::IsStressTest(FPagedArrayCopyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad9eb0

uint __thiscall PagedArray::FPagedArrayCopyTest::GetRequiredDeviceNum(FPagedArrayCopyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad9ec0

FString * __thiscall
PagedArray::FPagedArrayCopyTest::GetTestSourceFileName
          (FPagedArrayCopyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad9ef0

int __thiscall PagedArray::FPagedArrayCopyTest::GetTestSourceFileLine(FPagedArrayCopyTest *this)

{
  return 0x33e;
}

// GetTests @ 141ad9f00

/* WARNING: Removing unreachable block (ram,0x000141ada07e) */

void __thiscall
PagedArray::FPagedArrayCopyTest::GetTests
          (FPagedArrayCopyTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ada0b0

bool __thiscall PagedArray::FPagedArrayCopyTest::RunTest(FPagedArrayCopyTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ada0f0

FString * __thiscall
PagedArray::FPagedArrayCopyTest::GetBeautifiedTestName
          (FPagedArrayCopyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayCopyTest @ 141b22e70

FPagedArrayCopyTest * __thiscall
PagedArray::FPagedArrayCopyTest::FPagedArrayCopyTest(FPagedArrayCopyTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayCopyTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Copy");
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

// TestBody @ 141b8d4b0

void __thiscall
PagedArray::FPagedArrayCopyTest::TestBody(FPagedArrayCopyTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_d8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4 [3];
  ForAnyElementType local_a8;
  uint local_a0;
  int local_9c;
  int local_98;
  ForAnyElementType local_90;
  uint local_88;
  int local_84;
  int local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  uVar14 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_d8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Pages.ArrayNum = 0;
  local_d8.Pages.ArrayMax = 0;
  local_d8.Count = 0;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reserve(&local_d8,0x20);
  uVar5 = local_d8.Pages.ArrayNum;
  uVar15 = uVar14;
  if ((local_d8.Pages.ArrayNum & 0x7ffffffU) != 1) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Condition failed");
    (*pcVar2)(pFVar1,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    uVar5 = local_d8.Pages.ArrayNum;
  }
  do {
    if (local_d8.Count == uVar5 << 5) {
      if (uVar5 == local_d8.Pages.ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_d8,&local_d8.Pages.ArrayMax);
      }
      local_d8.Pages.ArrayNum = uVar5 + 1;
      lVar10 = (longlong)(int)uVar5 * 0x10;
      *(undefined8 *)&local_d8.Pages.AllocatorInstance.Data[lVar10].field_0x0 = 0;
      *(undefined4 *)(local_d8.Pages.AllocatorInstance.Data + lVar10 + 8) = 0;
      *(int *)(local_d8.Pages.AllocatorInstance.Data + lVar10 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_d8.Pages.AllocatorInstance.Data + lVar10),0,
                 (int *)(local_d8.Pages.AllocatorInstance.Data + lVar10 + 0xc));
      uVar5 = local_d8.Pages.ArrayNum;
    }
    uVar6 = (int)(local_d8.Count + (local_d8.Count >> 0x1f & 0x1fU)) >> 5;
    uVar13 = 0;
    if ((int)uVar6 < (int)uVar5) {
      uVar13 = ~uVar6 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = local_d8.Pages.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    iVar7 = *(int *)(pFVar12 + 8);
    if (iVar7 == *(int *)(pFVar12 + 0xc)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
    }
    FVar3.Data = local_d8.Pages.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = iVar7 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(uint *)(*(FScriptContainerElement **)&pFVar12->field_0x0 + (longlong)iVar7 * 4) = uVar15;
    uVar15 = uVar15 + 1;
    local_d8.Count = local_d8.Count + 1;
    iVar7 = local_d8.Pages.ArrayNum;
    uVar5 = local_d8.Pages.ArrayNum;
  } while ((int)uVar15 < 0x20);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = local_d8.Pages.ArrayNum;
  if (local_d8.Pages.ArrayNum == 0) {
    local_84 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_d8.Pages.ArrayNum,0,&local_90,local_d8.Pages.ArrayNum,&local_84);
    ConstructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
              (local_90.Data,(TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar3.Data,iVar7
              );
  }
  uVar15 = 0;
  uVar5 = uVar14;
  local_80 = local_d8.Count;
  if (0 < local_d8.Count) {
    do {
      uVar13 = uVar15;
      if ((int)uVar5 < local_80) {
        uVar13 = ~uVar5 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = (int)uVar5 >> 0x1f & 0x1f;
      uVar6 = uVar5 + uVar11;
      uVar11 = (uVar6 & 0x1f) - uVar11;
      uVar6 = (int)uVar6 >> 5;
      uVar13 = uVar15;
      if ((int)uVar6 < (int)local_88) {
        uVar13 = ~uVar6 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = local_90.Data + (longlong)(int)uVar6 * 0x10;
      uVar13 = 0;
      if ((int)uVar11 < *(int *)(pFVar12 + 8)) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(*(longlong *)&pFVar12->field_0x0 + (longlong)(int)uVar11 * 4) != uVar5) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_68,L"Condition failed");
        (*pcVar2)(pFVar1,&local_68,0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < local_80);
  }
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b4[0] = 0;
  local_b4[1] = 0;
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0,0);
  FVar3.Data = local_d8.Pages.AllocatorInstance.Data;
  iVar7 = local_d8.Pages.ArrayNum;
  local_b8 = local_d8.Pages.ArrayNum;
  if ((local_d8.Pages.ArrayNum != 0) || (uVar5 = 0, local_b4[0] != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_d8.Pages.ArrayNum,local_b4[0],&local_c0,local_d8.Pages.ArrayNum,local_b4
              );
    ConstructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
              (local_c0.Data,(TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar3.Data,iVar7
              );
    uVar5 = local_d8.Pages.ArrayNum;
  }
  local_b4[1] = local_d8.Count;
  uVar13 = uVar14;
  if (0 < local_d8.Count) {
    do {
      uVar5 = 0;
      if ((int)uVar13 < local_b4[1]) {
        uVar5 = ~uVar13 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = (int)uVar13 >> 0x1f & 0x1f;
      uVar6 = uVar13 + uVar11;
      uVar11 = (uVar6 & 0x1f) - uVar11;
      uVar6 = (int)uVar6 >> 5;
      uVar5 = uVar15;
      if ((int)uVar6 < local_b8) {
        uVar5 = ~uVar6 >> 0x1f;
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
      pFVar12 = local_c0.Data + (longlong)(int)uVar6 * 0x10;
      uVar5 = uVar15;
      if ((int)uVar11 < *(int *)(pFVar12 + 8)) {
        uVar5 = ~uVar11 >> 0x1f;
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
      if (*(uint *)(*(longlong *)&pFVar12->field_0x0 + (longlong)(int)uVar11 * 4) != uVar13) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_58,L"Condition failed");
        (*pcVar2)(pFVar1,&local_58,0);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < local_b4[1]);
    uVar5 = local_d8.Pages.ArrayNum;
  }
  iVar7 = 0x20;
  do {
    if (local_d8.Count == uVar5 * 0x20) {
      if (uVar5 == local_d8.Pages.ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_d8,&local_d8.Pages.ArrayMax);
      }
      local_d8.Pages.ArrayNum = uVar5 + 1;
      lVar10 = (longlong)(int)uVar5 * 0x10;
      *(undefined8 *)&local_d8.Pages.AllocatorInstance.Data[lVar10].field_0x0 = 0;
      *(undefined4 *)(local_d8.Pages.AllocatorInstance.Data + lVar10 + 8) = 0;
      *(int *)(local_d8.Pages.AllocatorInstance.Data + lVar10 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_d8.Pages.AllocatorInstance.Data + lVar10),0,
                 (int *)(local_d8.Pages.AllocatorInstance.Data + lVar10 + 0xc));
      uVar5 = local_d8.Pages.ArrayNum;
    }
    uVar13 = (int)(local_d8.Count + (local_d8.Count >> 0x1f & 0x1fU)) >> 5;
    uVar6 = 0;
    uVar15 = uVar6;
    if ((int)uVar13 < (int)uVar5) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = local_d8.Pages.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
    iVar8 = *(int *)(pFVar12 + 8);
    if (iVar8 == *(int *)(pFVar12 + 0xc)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
    }
    *(int *)(pFVar12 + 8) = iVar8 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(*(FScriptContainerElement **)&pFVar12->field_0x0 + (longlong)iVar8 * 4) = iVar7;
    local_d8.Count = local_d8.Count + 1;
    uVar5 = local_d8.Pages.ArrayNum;
    if ((local_d8.Pages.ArrayNum & 0x7ffffffU) != 2) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_48,L"Condition failed");
      (*pcVar2)(pFVar1,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar5 = local_d8.Pages.ArrayNum;
    }
    FVar3.Data = local_d8.Pages.AllocatorInstance.Data;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x40);
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = uVar5;
  if (uVar5 == 0) {
    local_9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar5,0,&local_a8,uVar5,&local_9c);
    ConstructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
              (local_a8.Data,(TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar3.Data,uVar5
              );
  }
  local_98 = local_d8.Count;
  uVar5 = uVar14;
  if (0 < local_d8.Count) {
    do {
      uVar15 = uVar6;
      if ((int)uVar5 < local_98) {
        uVar15 = ~uVar5 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = (int)uVar5 >> 0x1f & 0x1f;
      uVar13 = uVar5 + uVar11;
      uVar11 = (uVar13 & 0x1f) - uVar11;
      uVar13 = (int)uVar13 >> 5;
      uVar15 = uVar6;
      if ((int)uVar13 < (int)local_a0) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = local_a8.Data + (longlong)(int)uVar13 * 0x10;
      uVar15 = uVar6;
      if ((int)uVar11 < *(int *)(pFVar12 + 8)) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(*(longlong *)&pFVar12->field_0x0 + (longlong)(int)uVar11 * 4) != uVar5) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_38,L"Condition failed");
        (*pcVar2)(pFVar1,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < local_98);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_c0.Data,local_b8);
  FVar3.Data = local_d8.Pages.AllocatorInstance.Data;
  iVar7 = local_d8.Pages.ArrayNum;
  local_b8 = local_d8.Pages.ArrayNum;
  if ((local_d8.Pages.ArrayNum == 0) && (local_b4[0] == 0)) {
    local_b4[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_d8.Pages.ArrayNum,local_b4[0],&local_c0,local_d8.Pages.ArrayNum,local_b4
              );
    ConstructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
              (local_c0.Data,(TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar3.Data,iVar7
              );
  }
  local_b4[1] = local_d8.Count;
  if (0 < local_d8.Count) {
    do {
      uVar5 = uVar6;
      if ((int)uVar14 < local_b4[1]) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                             ,0x33c,L"Parameter index %d exceeds container size %d"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = (int)uVar14 >> 0x1f & 0x1f;
      uVar15 = uVar14 + uVar13;
      uVar13 = (uVar15 & 0x1f) - uVar13;
      uVar15 = (int)uVar15 >> 5;
      uVar5 = uVar6;
      if ((int)uVar15 < local_b8) {
        uVar5 = ~uVar15 >> 0x1f;
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
      pFVar12 = local_c0.Data + (longlong)(int)uVar15 * 0x10;
      uVar5 = uVar6;
      if ((int)uVar13 < *(int *)(pFVar12 + 8)) {
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
      if (*(uint *)(*(longlong *)&pFVar12->field_0x0 + (longlong)(int)uVar13 * 4) != uVar14) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar1 = pFVar9->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_28,L"Condition failed");
        (*pcVar2)(pFVar1,&local_28,0);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < local_b4[1]);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_a8.Data,local_a0);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_a8.Data !=
      (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_c0.Data,local_b8);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_c0.Data !=
      (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_90.Data,local_88);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_90.Data !=
      (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_90.Data);
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_d8.Pages.AllocatorInstance.Data,local_d8.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_d8.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_d8.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0x100)) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Condition failed");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

