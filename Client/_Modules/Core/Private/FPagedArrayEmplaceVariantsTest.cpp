// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141accf40

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::GetTestFlags(FPagedArrayEmplaceVariantsTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141accf50

bool __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::IsStressTest(FPagedArrayEmplaceVariantsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141accf60

uint __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::GetRequiredDeviceNum
          (FPagedArrayEmplaceVariantsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141accf70

FString * __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::GetTestSourceFileName
          (FPagedArrayEmplaceVariantsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141accfa0

int __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::GetTestSourceFileLine
          (FPagedArrayEmplaceVariantsTest *this)

{
  return 0xa5;
}

// GetTests @ 141accfb0

/* WARNING: Removing unreachable block (ram,0x000141acd12e) */

void __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::GetTests
          (FPagedArrayEmplaceVariantsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
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

// RunTest @ 141acd150

bool __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::RunTest
          (FPagedArrayEmplaceVariantsTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acd180

FString * __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::GetBeautifiedTestName
          (FPagedArrayEmplaceVariantsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayEmplaceVariantsTest @ 141b233e0

FPagedArrayEmplaceVariantsTest * __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::FPagedArrayEmplaceVariantsTest
          (FPagedArrayEmplaceVariantsTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayEmplaceVariantsTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::Emplace variants");
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

// TestBody @ 141b8e9a0

void __thiscall
PagedArray::FPagedArrayEmplaceVariantsTest::TestBody
          (FPagedArrayEmplaceVariantsTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FAutomationTestFramework *pFVar10;
  TTestToken<int> *pTVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong local_res20;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_c8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Pages.ArrayNum = 0;
  local_c8.Pages.ArrayMax = 0;
  local_c8.Count = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,(ForAnyElementType *)&local_c8,&local_c8.Pages.ArrayMax);
  pFVar15 = local_c8.Pages.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  local_c8.Pages.ArrayNum = iVar5 + 1;
  *(FScriptContainerElement **)&pFVar15->field_0x0 = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar15 + 8) = 0;
  *(int *)(pFVar15 + 0xc) = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x20,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
  uVar6 = (int)(local_c8.Count + (local_c8.Count >> 0x1f & 0x1fU)) >> 5;
  uVar14 = 0;
  if ((int)uVar6 < local_c8.Pages.ArrayNum) {
    uVar14 = ~uVar6 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar15 = local_c8.Pages.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
  iVar5 = *(int *)(pFVar15 + 8);
  if (iVar5 == *(int *)(pFVar15 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
  }
  *(int *)(pFVar15 + 8) = iVar5 + 1;
  pFVar15 = *(FScriptContainerElement **)&pFVar15->field_0x0;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(pFVar15 + (longlong)iVar5 * 4) = 0;
  local_c8.Count = local_c8.Count + 1;
  pFVar9 = (FScriptContainerElement *)
           TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator[](&local_c8,0);
  if (pFVar15 + (longlong)iVar5 * 4 != pFVar9) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_b0,0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_c8.Count == local_c8.Pages.ArrayNum << 5) {
    iVar5 = local_c8.Pages.ArrayNum;
    if (local_c8.Pages.ArrayNum == local_c8.Pages.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&local_c8,&local_c8.Pages.ArrayMax);
    }
    local_c8.Pages.ArrayNum = iVar5 + 1;
    pFVar15 = local_c8.Pages.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(FScriptContainerElement **)&pFVar15->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar15 + 8) = 0;
    *(int *)(pFVar15 + 0xc) = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x20,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
  }
  iVar5 = local_c8.Count;
  uVar6 = (int)(local_c8.Count + (local_c8.Count >> 0x1f & 0x1fU)) >> 5;
  uVar14 = 0;
  if ((int)uVar6 < local_c8.Pages.ArrayNum) {
    uVar14 = ~uVar6 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar15 = local_c8.Pages.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
  iVar7 = *(int *)(pFVar15 + 8);
  if (iVar7 == *(int *)(pFVar15 + 0xc)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
  }
  *(int *)(pFVar15 + 8) = iVar7 + 1;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar7 * 4) = 0xd;
  iVar7 = local_c8.Count + 1;
  bVar4 = iVar5 != local_c8.Count;
  local_c8.Count = iVar7;
  if (bVar4) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a0,0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  pTVar11 = TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator[]
                      (&local_c8,iVar5);
  if (pTVar11->Value != 0xd) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition failed");
    (*pcVar2)(pFVar1,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = local_c8.Pages.ArrayNum;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reset(&local_c8);
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reserve(&local_c8,iVar5 * 0x60);
  if (local_c8.Count == local_c8.Pages.ArrayNum << 5) {
    iVar5 = local_c8.Pages.ArrayNum;
    if (local_c8.Pages.ArrayNum == local_c8.Pages.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&local_c8,&local_c8.Pages.ArrayMax);
    }
    local_c8.Pages.ArrayNum = iVar5 + 1;
    pFVar15 = local_c8.Pages.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(FScriptContainerElement **)&pFVar15->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar15 + 8) = 0;
    *(int *)(pFVar15 + 0xc) = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x20,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
  }
  uVar6 = (int)(local_c8.Count + (local_c8.Count >> 0x1f & 0x1fU)) >> 5;
  uVar14 = 0;
  if ((int)uVar6 < local_c8.Pages.ArrayNum) {
    uVar14 = ~uVar6 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar15 = local_c8.Pages.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
  iVar5 = *(int *)(pFVar15 + 8);
  if (iVar5 == *(int *)(pFVar15 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
  }
  *(int *)(pFVar15 + 8) = iVar5 + 1;
  pFVar15 = *(FScriptContainerElement **)&pFVar15->field_0x0;
  TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
  *(undefined4 *)(pFVar15 + (longlong)iVar5 * 4) = 0;
  local_c8.Count = local_c8.Count + 1;
  pFVar9 = (FScriptContainerElement *)
           TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator[](&local_c8,0);
  if (pFVar15 + (longlong)iVar5 * 4 != pFVar9) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_80,L"Condition failed");
    (*pcVar2)(pFVar1,&local_80,0);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = 1;
  local_res20 = 0x20;
  while( true ) {
    if (local_c8.Count == local_c8.Pages.ArrayNum << 5) {
      iVar7 = local_c8.Pages.ArrayNum;
      if (local_c8.Pages.ArrayNum == local_c8.Pages.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_c8,&local_c8.Pages.ArrayMax);
      }
      local_c8.Pages.ArrayNum = iVar7 + 1;
      lVar12 = (longlong)iVar7 * 0x10;
      *(undefined8 *)&local_c8.Pages.AllocatorInstance.Data[lVar12].field_0x0 = 0;
      *(undefined4 *)(local_c8.Pages.AllocatorInstance.Data + lVar12 + 8) = 0;
      *(int *)(local_c8.Pages.AllocatorInstance.Data + lVar12 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)(local_c8.Pages.AllocatorInstance.Data + lVar12),0,
                 (int *)(local_c8.Pages.AllocatorInstance.Data + lVar12 + 0xc));
    }
    iVar7 = local_c8.Count;
    uVar13 = local_c8.Count >> 0x1f & 0x1f;
    uVar6 = local_c8.Count + uVar13;
    uVar13 = (uVar6 & 0x1f) - uVar13;
    uVar6 = (int)uVar6 >> 5;
    uVar14 = 0;
    if ((int)uVar6 < local_c8.Pages.ArrayNum) {
      uVar14 = ~uVar6 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar12 = (longlong)(int)uVar6 * 0x10;
    pFVar15 = local_c8.Pages.AllocatorInstance.Data + lVar12;
    iVar8 = *(int *)(pFVar15 + 8);
    if (iVar8 == *(int *)(pFVar15 + 0xc)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
    }
    *(int *)(pFVar15 + 8) = iVar8 + 1;
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    *(int *)(*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar8 * 4) = iVar5;
    uVar14 = local_c8.Count + 1;
    bVar4 = iVar7 != local_c8.Count;
    local_c8.Count = uVar14;
    if (bVar4) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_70,L"Condition failed");
      (*pcVar2)(pFVar1,&local_70,0);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    uVar14 = 0;
    if (iVar7 < local_c8.Count) {
      uVar14 = (uint)~iVar7 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < Count)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                           ,0x33c,L"Parameter index %d exceeds container size %d"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar14 = 0;
    if ((int)uVar6 < local_c8.Pages.ArrayNum) {
      uVar14 = ~uVar6 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar3.Data = local_c8.Pages.AllocatorInstance.Data;
    uVar14 = 0;
    if ((int)uVar13 < *(int *)(local_c8.Pages.AllocatorInstance.Data + lVar12 + 8)) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    if (*(int *)(*(longlong *)&FVar3.Data[lVar12].field_0x0 + (longlong)(int)uVar13 * 4) != iVar5) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_60,L"Condition failed");
      (*pcVar2)(pFVar1,&local_60,0);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    iVar5 = iVar5 + 1;
    local_res20 = local_res20 + -1;
    if (local_res20 == 0) {
      DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                 local_c8.Pages.AllocatorInstance.Data,local_c8.Pages.ArrayNum);
      if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
          local_c8.Pages.AllocatorInstance.Data !=
          (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_c8.Pages.AllocatorInstance.Data);
      }
      if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
           TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
         (TTestToken<int>::DestructorCalls != 0x23)) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_50,L"Condition failed");
        (*pcVar2)(pFVar1,&local_50,0);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

