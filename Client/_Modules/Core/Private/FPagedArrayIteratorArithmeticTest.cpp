// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac8d80

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::GetTestFlags(FPagedArrayIteratorArithmeticTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac8d90

bool __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::IsStressTest(FPagedArrayIteratorArithmeticTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac8da0

uint __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::GetRequiredDeviceNum
          (FPagedArrayIteratorArithmeticTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac8db0

FString * __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::GetTestSourceFileName
          (FPagedArrayIteratorArithmeticTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac8de0

int __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::GetTestSourceFileLine
          (FPagedArrayIteratorArithmeticTest *this)

{
  return 0x583;
}

// GetTests @ 141ac8df0

/* WARNING: Removing unreachable block (ram,0x000141ac8f6e) */

void __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::GetTests
          (FPagedArrayIteratorArithmeticTest *this,
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

// RunTest @ 141ac8fe0

bool __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::RunTest
          (FPagedArrayIteratorArithmeticTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac9010

FString * __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::GetBeautifiedTestName
          (FPagedArrayIteratorArithmeticTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayIteratorArithmeticTest @ 141b24430

FPagedArrayIteratorArithmeticTest * __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::FPagedArrayIteratorArithmeticTest
          (FPagedArrayIteratorArithmeticTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayIteratorArithmeticTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Iterator arithmetic"
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

// TestBody @ 141b91a20

/* WARNING: Removing unreachable block (ram,0x000141b924a4) */
/* WARNING: Removing unreachable block (ram,0x000141b924dc) */

void __thiscall
PagedArray::FPagedArrayIteratorArithmeticTest::TestBody
          (FPagedArrayIteratorArithmeticTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FAutomationTestFramework *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType local_158;
  undefined8 local_150;
  int local_148;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *local_138;
  int iStack_130;
  uint uStack_12c;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  local_148 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_158,(int *)((longlong)&local_150 + 4));
  pFVar11 = local_158.Data + (longlong)iVar6 * 0x10;
  local_150 = CONCAT44(local_150._4_4_,iVar6 + 1);
  *(FScriptContainerElement **)&pFVar11->field_0x0 = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar11 + 8) = 0;
  *(int *)(pFVar11 + 0xc) = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,(ForAnyElementType *)pFVar11,0,(int *)(pFVar11 + 0xc));
  uVar7 = (int)(local_148 + (local_148 >> 0x1f & 3U)) >> 2;
  uVar9 = 0;
  if ((int)uVar7 < (int)(uint)local_150) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar11 = local_158.Data + (longlong)(int)uVar7 * 0x10;
  iVar6 = *(int *)(pFVar11 + 8);
  if (iVar6 == *(int *)(pFVar11 + 0xc)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)(pFVar11 + 8) = iVar6 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar6 * 4) = 0xd;
  local_148 = local_148 + 1;
  if (local_148 == (uint)local_150 * 4) {
    iVar6 = (uint)local_150;
    if ((uint)local_150 == local_150._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_158,(int *)((longlong)&local_150 + 4));
    }
    local_150 = CONCAT44(local_150._4_4_,iVar6 + 1);
    pFVar11 = local_158.Data + (longlong)iVar6 * 0x10;
    *(FScriptContainerElement **)&pFVar11->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar11 + 8) = 0;
    *(int *)(pFVar11 + 0xc) = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,4,(ForAnyElementType *)pFVar11,0,(int *)(pFVar11 + 0xc));
  }
  uVar8 = (int)(local_148 + (local_148 >> 0x1f & 3U)) >> 2;
  uVar7 = 0;
  uVar9 = uVar7;
  if ((int)uVar8 < (int)(uint)local_150) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar11 = local_158.Data + (longlong)(int)uVar8 * 0x10;
  iVar6 = *(int *)(pFVar11 + 8);
  if (iVar6 == *(int *)(pFVar11 + 0xc)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)(pFVar11 + 8) = iVar6 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar6 * 4) = 0x2a;
  local_148 = local_148 + 1;
  if (local_148 == (uint)local_150 * 4) {
    iVar6 = (uint)local_150;
    if ((uint)local_150 == local_150._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_158,(int *)((longlong)&local_150 + 4));
    }
    local_150 = CONCAT44(local_150._4_4_,iVar6 + 1);
    pFVar11 = local_158.Data + (longlong)iVar6 * 0x10;
    *(FScriptContainerElement **)&pFVar11->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar11 + 8) = 0;
    *(int *)(pFVar11 + 0xc) = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,4,(ForAnyElementType *)pFVar11,0,(int *)(pFVar11 + 0xc));
  }
  uVar8 = (int)(local_148 + (local_148 >> 0x1f & 3U)) >> 2;
  uVar9 = uVar7;
  if ((int)uVar8 < (int)(uint)local_150) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar11 = local_158.Data + (longlong)(int)uVar8 * 0x10;
  iVar6 = *(int *)(pFVar11 + 8);
  if (iVar6 == *(int *)(pFVar11 + 0xc)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)(pFVar11 + 8) = iVar6 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar6 * 4) = 0x13;
  local_148 = local_148 + 1;
  if (((uint)local_150 & 0x3fffffff) != 1) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_128,L"Condition failed");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FVar3.Data = local_158.Data;
  local_138 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_158.Data;
  iStack_130 = 0;
  uStack_12c = 0;
  if ((*(int *)(local_158.Data + 8) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (**(int **)FVar3.Data != 0xd) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_118,L"Condition failed");
    (*pcVar2)(pFVar1,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  if ((*(int *)(FVar3.Data + 8) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
  if (**(int **)FVar3.Data != 0xd) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_108,L"Condition failed");
    (*pcVar2)(pFVar1,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(FVar3.Data + 8) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (**(int **)FVar3.Data != 0xd) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  uVar9 = uStack_12c;
  iVar6 = iStack_130;
  pTVar4 = local_138;
  if (((local_138 == (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)FVar3.Data) &&
      (iStack_130 == 0)) && (uStack_12c == 1)) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_e8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = uVar7;
  if ((int)uVar9 < pTVar4[iVar6].ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)(pTVar4[iVar6].AllocatorInstance.Data + (longlong)(int)uVar9 * 4) != 0xd) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(FVar3.Data + 8) < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)(*(longlong *)FVar3.Data + 4) != 0x2a) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  if ((*(int *)(FVar3.Data + 8) < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
  if (*(int *)(*(longlong *)FVar3.Data + 4) != 0x2a) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_b8,0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(FVar3.Data + 8) < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)(*(longlong *)FVar3.Data + 4) != 0x2a) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_148 == (uint)local_150 * 4) {
    iVar6 = (uint)local_150;
    if ((uint)local_150 == local_150._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_158,(int *)((longlong)&local_150 + 4));
    }
    local_150 = CONCAT44(local_150._4_4_,iVar6 + 1);
    pFVar11 = local_158.Data + (longlong)iVar6 * 0x10;
    *(FScriptContainerElement **)&pFVar11->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar11 + 8) = 0;
    *(int *)(pFVar11 + 0xc) = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,4,(ForAnyElementType *)pFVar11,0,(int *)(pFVar11 + 0xc));
  }
  uVar9 = (int)(local_148 + (local_148 >> 0x1f & 3U)) >> 2;
  if ((int)uVar9 < (int)(uint)local_150) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar11 = local_158.Data + (longlong)(int)uVar9 * 0x10;
  iVar6 = *(int *)(pFVar11 + 8);
  if (iVar6 == *(int *)(pFVar11 + 0xc)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)(pFVar11 + 8) = iVar6 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar6 * 4) = 0x49;
  local_148 = local_148 + 1;
  if (local_148 == (uint)local_150 * 4) {
    iVar6 = (uint)local_150;
    if ((uint)local_150 == local_150._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_158,(int *)((longlong)&local_150 + 4));
    }
    local_150 = CONCAT44(local_150._4_4_,iVar6 + 1);
    pFVar11 = local_158.Data + (longlong)iVar6 * 0x10;
    *(FScriptContainerElement **)&pFVar11->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar11 + 8) = 0;
    *(int *)(pFVar11 + 0xc) = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,4,(ForAnyElementType *)pFVar11,0,(int *)(pFVar11 + 0xc));
  }
  uVar7 = (int)(local_148 + (local_148 >> 0x1f & 3U)) >> 2;
  uVar9 = 0;
  if ((int)uVar7 < (int)(uint)local_150) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar11 = local_158.Data + (longlong)(int)uVar7 * 0x10;
  iVar6 = *(int *)(pFVar11 + 8);
  if (iVar6 == *(int *)(pFVar11 + 0xc)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
  }
  *(int *)(pFVar11 + 8) = iVar6 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar6 * 4) = 0xab;
  local_148 = local_148 + 1;
  if (((uint)local_150 & 0x3fffffff) != 2) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_98,L"Condition failed");
    (*pcVar2)(pFVar1,local_98,0);
    if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
    }
  }
  FVar3.Data = local_158.Data;
  local_138 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_158.Data;
  uStack_12c = 3;
  pFVar11 = local_158.Data + (longlong)iStack_130 * 0x10;
  if ((*(int *)(pFVar11 + 8) < 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)(*(longlong *)&pFVar11->field_0x0 + 0xc) != 0x49) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Condition failed");
    (*pcVar2)(pFVar1,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(FVar3.Data + 0x18) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)(((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)(FVar3.Data + 0x10))->
              AllocatorInstance).Data != 0xab) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  if ((*(int *)(FVar3.Data + 0x18) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
  if (*(int *)(((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)(FVar3.Data + 0x10))->
              AllocatorInstance).Data != 0xab) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition failed");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(FVar3.Data + 0x18) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)(((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)(FVar3.Data + 0x10))->
              AllocatorInstance).Data != 0xab) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Condition failed");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_158.Data,(uint)local_150);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_158.Data !=
      (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_158.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 8)) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"Condition failed");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

