// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acd510

EAutomationTestFlags __thiscall FBitArrayTestMisc::GetTestFlags(FBitArrayTestMisc *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acd520

bool __thiscall FBitArrayTestMisc::IsStressTest(FBitArrayTestMisc *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acd530

uint __thiscall FBitArrayTestMisc::GetRequiredDeviceNum(FBitArrayTestMisc *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acd540

FString * __thiscall
FBitArrayTestMisc::GetTestSourceFileName(FBitArrayTestMisc *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acd570

int __thiscall FBitArrayTestMisc::GetTestSourceFileLine(FBitArrayTestMisc *this)

{
  return 0x5ff;
}

// GetTests @ 141acd5e0

/* WARNING: Removing unreachable block (ram,0x000141acd75e) */

void __thiscall
FBitArrayTestMisc::GetTests
          (FBitArrayTestMisc *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141acd790

bool __thiscall FBitArrayTestMisc::RunTest(FBitArrayTestMisc *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acd7c0

FString * __thiscall
FBitArrayTestMisc::GetBeautifiedTestName(FBitArrayTestMisc *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayTestMisc @ 141b1b550

FBitArrayTestMisc * __thiscall
FBitArrayTestMisc::FBitArrayTestMisc(FBitArrayTestMisc *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayTestMisc__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::Misc");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
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

// TestBody @ 141b65d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTestMisc::TestBody(FBitArrayTestMisc *this,FString *param_1)

{
  uint *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  uint uVar6;
  undefined1 auStack_238 [32];
  TBitArray<TSizedDefaultAllocator<32>_> local_218;
  FString local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_238;
  FBitArrayTest::FBitArrayTest((FBitArrayTest *)local_1f8);
  bVar4 = FBitArrayTest::ConstructAndTestConstructors((FBitArrayTest *)local_1f8);
  if (bVar4) {
    FBitArrayTest::TestEqualityOperator((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestOtherConstructorAndAssignment((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestLessThan((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestRemoveAt((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestRemoveAtSwap((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestSerialize((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestAdd((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestAddFromRange((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestInsert((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestInsertFromRange((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestSetRange((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestGetRange((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestEmpty((FBitArrayTest *)local_1f8);
    FBitArrayTest::TestReserve((FBitArrayTest *)local_1f8);
    local_218.NumBits = 0x20;
    local_218.MaxBits = 0;
    local_218.AllocatorInstance = (ForElementType<unsigned_int>)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_218,0,1,4);
    *(undefined4 *)local_218.AllocatorInstance = 0xffffffff;
    uVar6 = local_218.NumBits & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    if (uVar6 != 0) {
      puVar1 = (uint *)((longlong)local_218.AllocatorInstance +
                       (longlong)
                       ((int)(local_218.NumBits + (local_218.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar6 & 0x1f);
    }
    local_218.NumBits = 0;
    local_218.MaxBits = 0x20;
    TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants(&local_218);
    if (local_218.NumBits != 0) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_208,L"Reset from filled sets num to 0");
      (*pcVar3)(pFVar2,&local_208,0);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
    }
    if (local_218.MaxBits != 0x20) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_208,L"Reset from filled sets not change max");
      (*pcVar3)(pFVar2,&local_208,0);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
    }
    if (local_218.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_218.AllocatorInstance);
    }
    FBitArrayTest::TestInitAndSetNumUninitialized((FBitArrayTest *)local_1f8);
  }
  else {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_218,L"Required condition failed, interrupting test");
    (*pcVar3)(pFVar2,&local_218,0);
    if (local_218.AllocatorInstance != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_218.AllocatorInstance);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)(local_1f8 + 0xc0));
  if ((ForElementType<unsigned_int>)local_1f8._176_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1f8._176_8_);
  }
  if ((ForElementType<unsigned_int>)local_1f8._144_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1f8._144_8_);
  }
  if ((ForElementType<unsigned_int>)local_1f8._112_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1f8._112_8_);
  }
  if ((ForElementType<unsigned_int>)local_1f8._80_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1f8._80_8_);
  }
  if ((ForElementType<unsigned_int>)local_1f8._40_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1f8._40_8_);
  }
  return;
}

