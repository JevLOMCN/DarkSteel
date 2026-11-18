// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad6590

EAutomationTestFlags __thiscall
PagedArray::FPagedArraySetNumTest::GetTestFlags(FPagedArraySetNumTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad65a0

bool __thiscall PagedArray::FPagedArraySetNumTest::IsStressTest(FPagedArraySetNumTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad65b0

uint __thiscall PagedArray::FPagedArraySetNumTest::GetRequiredDeviceNum(FPagedArraySetNumTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad65c0

FString * __thiscall
PagedArray::FPagedArraySetNumTest::GetTestSourceFileName
          (FPagedArraySetNumTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad65f0

int __thiscall PagedArray::FPagedArraySetNumTest::GetTestSourceFileLine(FPagedArraySetNumTest *this)

{
  return 0x1fb;
}

// GetTests @ 141ad6600

/* WARNING: Removing unreachable block (ram,0x000141ad677e) */

void __thiscall
PagedArray::FPagedArraySetNumTest::GetTests
          (FPagedArraySetNumTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad67a0

bool __thiscall
PagedArray::FPagedArraySetNumTest::RunTest(FPagedArraySetNumTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad67d0

FString * __thiscall
PagedArray::FPagedArraySetNumTest::GetBeautifiedTestName
          (FPagedArraySetNumTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArraySetNumTest @ 141b25bc0

FPagedArraySetNumTest * __thiscall
PagedArray::FPagedArraySetNumTest::FPagedArraySetNumTest
          (FPagedArraySetNumTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArraySetNumTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::TPagedArray::SetNum");
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

// TestBody @ 141b97e40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
PagedArray::FPagedArraySetNumTest::TestBody(FPagedArraySetNumTest *this,FString *param_1)

{
  int *piVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  FAutomationTestFramework *pFVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_2a8;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> local_290;
  int local_278 [2];
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
  
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_2a8.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Pages.ArrayNum = 0;
  local_2a8.Pages.ArrayMax = 0;
  local_2a8.Count = 0;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_2a8,0,Default);
  if (local_2a8.Pages.ArrayNum != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_270,L"Condition failed");
    (*pcVar3)(pFVar2,&local_270,0);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Count != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_260,L"Condition failed");
    (*pcVar3)(pFVar2,&local_260,0);
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_2a8,0x1f,Default);
  if (local_2a8.Count != 0x1f) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_250,L"Condition failed");
    (*pcVar3)(pFVar2,&local_250,0);
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Pages.ArrayNum != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_240,L"Condition failed");
    (*pcVar3)(pFVar2,&local_240,0);
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Count == 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_230,L"Condition failed");
    (*pcVar3)(pFVar2,&local_230,0);
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_2a8,0x20,Default);
  if (local_2a8.Count != 0x20) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_220,L"Condition failed");
    (*pcVar3)(pFVar2,&local_220,0);
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Pages.ArrayNum != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_210,L"Condition failed");
    (*pcVar3)(pFVar2,&local_210,0);
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Count == 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_200,L"Condition failed");
    (*pcVar3)(pFVar2,&local_200,0);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_2a8,0x21,Default);
  if (local_2a8.Count != 0x21) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1f0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_1f0,0);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Pages.ArrayNum != 2) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1e0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_1e0,0);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Count == 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1d0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_1d0,0);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_2a8,0x20,Default);
  if (local_2a8.Count != 0x20) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1c0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_1c0,0);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Pages.ArrayNum != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1b0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_1b0,0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Count == 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1a0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_1a0,0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_2a8,0x1f,Default);
  if (local_2a8.Count != 0x1f) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_190,L"Condition failed");
    (*pcVar3)(pFVar2,&local_190,0);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Pages.ArrayNum != 1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_180,L"Condition failed");
    (*pcVar3)(pFVar2,&local_180,0);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Count == 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_170,L"Condition failed");
    (*pcVar3)(pFVar2,&local_170,0);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_2a8,0,Default);
  if (local_2a8.Pages.ArrayNum != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_60,L"Condition failed");
    (*pcVar3)(pFVar2,&local_60,0);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a8.Count != 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_50,L"Condition failed");
    (*pcVar3)(pFVar2,&local_50,0);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             local_2a8.Pages.AllocatorInstance.Data,local_2a8.Pages.ArrayNum);
  if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)local_2a8.Pages.AllocatorInstance.Data
      != (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_2a8.Pages.AllocatorInstance.Data);
  }
  if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
       TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0) ||
     (TTestToken<int>::DestructorCalls != 0x21)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_160,L"Condition failed");
    (*pcVar3)(pFVar2,&local_160,0);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_290.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.Pages.ArrayNum = 0;
  local_290.Pages.ArrayMax = 0;
  local_290.Count = 0;
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_290,0x7f,Default);
  if (local_290.Count != 0x7f) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_150,L"Condition failed");
    (*pcVar3)(pFVar2,&local_150,0);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  if (local_290.Pages.ArrayNum != 4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_140,L"Condition failed");
    (*pcVar3)(pFVar2,&local_140,0);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  if (local_290.Count == 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_130,L"Condition failed");
    (*pcVar3)(pFVar2,&local_130,0);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum(&local_290,0xc0,Default);
  if (local_290.Count != 0xc0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_120,L"Condition failed");
    (*pcVar3)(pFVar2,&local_120,0);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  if (local_290.Pages.ArrayNum != 6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_110,L"Condition failed");
    (*pcVar3)(pFVar2,&local_110,0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  if (local_290.Count == 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_100,L"Condition failed");
    (*pcVar3)(pFVar2,&local_100,0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  FVar4.Data = local_290.Pages.AllocatorInstance.Data;
  iVar12 = (local_290.Count >> 0x1f & 0x1fU) + local_290.Count;
  uVar9 = local_290.Count & 0x8000001f;
  iVar8 = 0;
  iVar10 = 0;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
    iVar8 = 0;
    iVar10 = 0;
  }
  do {
    uVar13 = 0;
    iVar11 = iVar10;
    do {
      if ((iVar8 == iVar12 >> 5) && (uVar13 == uVar9)) {
        TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum
                  (&local_290,0x5f,Default);
        if (local_290.Count != 0x5f) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_f0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_f0,0);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
        }
        if (local_290.Pages.ArrayNum != 3) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_e0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_e0,0);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
        if (local_290.Count == 0) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_d0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_d0,0);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        FVar4.Data = local_290.Pages.AllocatorInstance.Data;
        iVar12 = local_290.Count + (local_290.Count >> 0x1f & 0x1fU);
        uVar9 = local_290.Count & 0x8000001f;
        iVar8 = 0;
        iVar10 = 0;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          iVar8 = 0;
          iVar10 = 0;
        }
        do {
          uVar13 = 0;
          iVar11 = iVar8;
          do {
            if ((iVar10 == iVar12 >> 5) && (uVar13 == uVar9)) {
              TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum
                        (&local_290,0x20,Default);
              if (local_290.Count != 0x20) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_b0,L"Condition failed");
                (*pcVar3)(pFVar2,&local_b0,0);
                if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                }
              }
              if (local_290.Pages.ArrayNum != 1) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_a0,L"Condition failed");
                (*pcVar3)(pFVar2,&local_a0,0);
                if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                }
              }
              if (local_290.Count == 0) {
                pFVar7 = FAutomationTestFramework::Get();
                pFVar2 = pFVar7->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_90,L"Condition failed");
                (*pcVar3)(pFVar2,&local_90,0);
                if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_90.Data.AllocatorInstance.Data);
                }
              }
              FVar4.Data = local_290.Pages.AllocatorInstance.Data;
              iVar12 = local_290.Count + (local_290.Count >> 0x1f & 0x1fU);
              uVar9 = local_290.Count & 0x8000001f;
              iVar8 = 0;
              iVar10 = 0;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
                iVar8 = 0;
                iVar10 = 0;
              }
              do {
                uVar13 = 0;
                iVar11 = iVar8;
                do {
                  if ((iVar10 == iVar12 >> 5) && (uVar13 == uVar9)) {
                    DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                               local_290.Pages.AllocatorInstance.Data,local_290.Pages.ArrayNum);
                    if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                        local_290.Pages.AllocatorInstance.Data !=
                        (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_290.Pages.AllocatorInstance.Data);
                    }
                    if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls)
                         + TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls
                         != 0) || (TTestToken<int>::DestructorCalls != 0x180)) {
                      pFVar7 = FAutomationTestFramework::Get();
                      pFVar2 = pFVar7->CurrentTest;
                      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                      ::FString::FString(&local_70,L"Condition failed");
                      (*pcVar3)(pFVar2,&local_70,0);
                      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_70.Data.AllocatorInstance.Data);
                      }
                    }
                    return;
                  }
                  uVar6 = 0;
                  if ((int)uVar13 < *(int *)(FVar4.Data + (longlong)iVar10 * 0x10 + 8)) {
                    uVar6 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar6 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  iVar8 = iVar11 + 1;
                  if (*(int *)(*(longlong *)&FVar4.Data[(longlong)iVar10 * 0x10].field_0x0 +
                              (longlong)(int)uVar13 * 4) != iVar11) {
                    pFVar7 = FAutomationTestFramework::Get();
                    pFVar2 = pFVar7->CurrentTest;
                    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                    ::FString::FString(&local_80,L"Condition failed");
                    (*pcVar3)(pFVar2,&local_80,0);
                    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_80.Data.AllocatorInstance.Data);
                    }
                  }
                  uVar13 = uVar13 + 1;
                  iVar11 = iVar8;
                } while (uVar13 != 0x20);
                iVar10 = iVar10 + 1;
              } while( true );
            }
            uVar6 = 0;
            if ((int)uVar13 < *(int *)(FVar4.Data + (longlong)iVar10 * 0x10 + 8)) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = iVar11 + 1;
            if (*(int *)(*(longlong *)&FVar4.Data[(longlong)iVar10 * 0x10].field_0x0 +
                        (longlong)(int)uVar13 * 4) != iVar11) {
              pFVar7 = FAutomationTestFramework::Get();
              pFVar2 = pFVar7->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_c0,L"Condition failed");
              (*pcVar3)(pFVar2,&local_c0,0);
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
            }
            uVar13 = uVar13 + 1;
            iVar11 = iVar8;
          } while (uVar13 != 0x20);
          iVar10 = iVar10 + 1;
        } while( true );
      }
      uVar6 = 0;
      if ((int)uVar13 < *(int *)(FVar4.Data + (longlong)iVar8 * 0x10 + 8)) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
      iVar10 = iVar11 + 1;
      piVar1 = (int *)(*(longlong *)&FVar4.Data[(longlong)iVar8 * 0x10].field_0x0 +
                      (longlong)(int)uVar13 * 4);
      if ((local_278 == piVar1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3577702131160842175>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                             ,0x41,"&Other != this"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *piVar1 = iVar11;
      uVar13 = uVar13 + 1;
      TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
      TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
      iVar11 = iVar10;
    } while (uVar13 != 0x20);
    iVar8 = iVar8 + 1;
  } while( true );
}

