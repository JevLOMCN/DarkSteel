// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c602e0

EAutomationTestFlags __thiscall FAtomicSmokeTest::GetTestFlags(FAtomicSmokeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c602f0

bool __thiscall FAtomicSmokeTest::IsStressTest(FAtomicSmokeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c60300

uint __thiscall FAtomicSmokeTest::GetRequiredDeviceNum(FAtomicSmokeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c60310

FString * __thiscall
FAtomicSmokeTest::GetTestSourceFileName(FAtomicSmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AtomicTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c60340

int __thiscall FAtomicSmokeTest::GetTestSourceFileLine(FAtomicSmokeTest *this)

{
  return 0x171;
}

// GetTests @ 141c60350

/* WARNING: Removing unreachable block (ram,0x000141c604ce) */

void __thiscall
FAtomicSmokeTest::GetTests
          (FAtomicSmokeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c604f0

bool __thiscall FAtomicSmokeTest::RunTest(FAtomicSmokeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c60520

FString * __thiscall
FAtomicSmokeTest::GetBeautifiedTestName(FAtomicSmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FAtomicSmokeTest @ 141c8a210

FAtomicSmokeTest * __thiscall
FAtomicSmokeTest::FAtomicSmokeTest(FAtomicSmokeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FAtomicSmokeTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::Atomic");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
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

// TestBody @ 141c99460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAtomicSmokeTest::TestBody(FAtomicSmokeTest *this,FString *param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_688 [32];
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined4 local_608;
  short asStack_604 [30];
  undefined1 local_5c8 [40];
  int local_5a0 [50];
  long64 local_4d8 [50];
  FString local_348 [49];
  ulonglong local_38 [4];
  
  local_38[2] = __security_cookie.value ^ (ulonglong)auStack_688;
  ::`anonymous_namespace'::RunBasicAtomicTests<signed_char>();
  ::`anonymous_namespace'::RunArithmeticAtomicTests<signed_char>('2');
  ::`anonymous_namespace'::RunBitwiseOperationsAtomicTests<signed_char>();
  ::`anonymous_namespace'::RunBasicAtomicTests<unsigned_char>();
  ::`anonymous_namespace'::RunArithmeticAtomicTests<unsigned_char>('2');
  ::`anonymous_namespace'::RunBitwiseOperationsAtomicTests<unsigned_char>();
  ::`anonymous_namespace'::RunBasicAtomicTests<short>();
  ::`anonymous_namespace'::RunArithmeticAtomicTests<short>(0x32);
  ::`anonymous_namespace'::RunBitwiseOperationsAtomicTests<short>();
  ::`anonymous_namespace'::RunBasicAtomicTests<unsigned_short>();
  ::`anonymous_namespace'::RunArithmeticAtomicTests<unsigned_short>(0x32);
  ::`anonymous_namespace'::RunBitwiseOperationsAtomicTests<unsigned_short>();
  ::`anonymous_namespace'::RunBasicAtomicTests<int>();
  ::`anonymous_namespace'::RunArithmeticAtomicTests<int>(0x32);
  ::`anonymous_namespace'::RunBitwiseOperationsAtomicTests<int>();
  ::`anonymous_namespace'::RunBasicAtomicTests<unsigned_int>();
  ::`anonymous_namespace'::RunArithmeticAtomicTests<unsigned_int>(0x32);
  ::`anonymous_namespace'::RunBitwiseOperationsAtomicTests<unsigned_int>();
  ::`anonymous_namespace'::RunBasicAtomicTests<__int64>();
  ::`anonymous_namespace'::RunArithmeticAtomicTests<__int64>(0x32);
  ::`anonymous_namespace'::RunBitwiseOperationsAtomicTests<__int64>();
  ::`anonymous_namespace'::RunBasicAtomicTests<unsigned___int64>();
  ::`anonymous_namespace'::RunArithmeticAtomicTests<unsigned___int64>(0x32);
  ::`anonymous_namespace'::RunBitwiseOperationsAtomicTests<unsigned___int64>();
  ::`anonymous_namespace'::RunBasicAtomicTests<void_*>();
  ::`anonymous_namespace'::RunBasicAtomicTests<void_const_*>();
  ::`anonymous_namespace'::RunBasicAtomicTests<void_volatile_*>();
  ::`anonymous_namespace'::RunBasicAtomicTests<void_const_volatile_*>();
  ::`anonymous_namespace'::RunBasicAtomicTests<signed_char_*>();
  local_668 = 0;
  uStack_660 = 0;
  local_608 = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  uStack_610 = 0;
  ::`anonymous_namespace'::RunArithmeticAtomicTests<signed_char_*>
            ((schar *)((longlong)&local_638 + 2));
  ::`anonymous_namespace'::RunBasicAtomicTests<short_*>();
  memset(&local_668,0,200);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<short_*>(asStack_604);
  ::`anonymous_namespace'::RunBasicAtomicTests<int_*>();
  memset(&local_668,0,400);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<int_*>(local_5a0);
  ::`anonymous_namespace'::RunBasicAtomicTests<__int64_*>();
  memset(&local_668,0,800);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<__int64_*>(local_4d8);
  ::`anonymous_namespace'::RunBasicAtomicTests<FString_*>();
  memset(local_5c8,0,0x5a0);
  lVar6 = 10;
  puVar2 = &local_668;
  lVar3 = 10;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2 = puVar2 + 0x14;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<FString_*>(local_348);
  lVar3 = 100;
  puVar4 = local_38 + 2;
  lVar5 = 100;
  do {
    puVar1 = puVar4 + -2;
    puVar4 = puVar4 + -2;
    lVar5 = lVar5 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar5 != 0);
  ::`anonymous_namespace'::RunBasicAtomicTests<signed_char_const_*>();
  local_668 = 0;
  uStack_660 = 0;
  local_608 = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  uStack_610 = 0;
  ::`anonymous_namespace'::RunArithmeticAtomicTests<signed_char_const_*>
            ((schar *)((longlong)&local_638 + 2));
  ::`anonymous_namespace'::RunBasicAtomicTests<short_const_*>();
  memset(&local_668,0,200);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<short_const_*>(asStack_604);
  ::`anonymous_namespace'::RunBasicAtomicTests<int_const_*>();
  memset(&local_668,0,400);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<int_const_*>(local_5a0);
  ::`anonymous_namespace'::RunBasicAtomicTests<__int64_const_*>();
  memset(&local_668,0,800);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<__int64_const_*>(local_4d8);
  ::`anonymous_namespace'::RunBasicAtomicTests<FString_const_*>();
  memset(local_5c8,0,0x5a0);
  puVar2 = &local_668;
  lVar5 = 10;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2 = puVar2 + 0x14;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<FString_const_*>(local_348);
  puVar4 = local_38 + 2;
  lVar5 = 100;
  do {
    puVar1 = puVar4 + -2;
    puVar4 = puVar4 + -2;
    lVar5 = lVar5 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar5 != 0);
  ::`anonymous_namespace'::RunBasicAtomicTests<signed_char_volatile_*>();
  local_668 = 0;
  uStack_660 = 0;
  local_608 = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  uStack_610 = 0;
  ::`anonymous_namespace'::RunArithmeticAtomicTests<signed_char_volatile_*>
            ((schar *)((longlong)&local_638 + 2));
  ::`anonymous_namespace'::RunBasicAtomicTests<short_volatile_*>();
  memset(&local_668,0,200);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<short_volatile_*>(asStack_604);
  ::`anonymous_namespace'::RunBasicAtomicTests<int_volatile_*>();
  memset(&local_668,0,400);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<int_volatile_*>(local_5a0);
  ::`anonymous_namespace'::RunBasicAtomicTests<__int64_volatile_*>();
  memset(&local_668,0,800);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<__int64_volatile_*>(local_4d8);
  ::`anonymous_namespace'::RunBasicAtomicTests<FString_volatile_*>();
  memset(local_5c8,0,0x5a0);
  puVar2 = &local_668;
  lVar5 = 10;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2 = puVar2 + 0x14;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<FString_volatile_*>(local_348);
  puVar4 = local_38 + 2;
  lVar5 = 100;
  do {
    puVar1 = puVar4 + -2;
    puVar4 = puVar4 + -2;
    lVar5 = lVar5 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar5 != 0);
  ::`anonymous_namespace'::RunBasicAtomicTests<signed_char_const_volatile_*>();
  local_668 = 0;
  uStack_660 = 0;
  local_608 = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  uStack_610 = 0;
  ::`anonymous_namespace'::RunArithmeticAtomicTests<signed_char_const_volatile_*>
            ((schar *)((longlong)&local_638 + 2));
  ::`anonymous_namespace'::RunBasicAtomicTests<short_const_volatile_*>();
  memset(&local_668,0,200);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<short_const_volatile_*>(asStack_604);
  ::`anonymous_namespace'::RunBasicAtomicTests<int_const_volatile_*>();
  memset(&local_668,0,400);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<int_const_volatile_*>(local_5a0);
  ::`anonymous_namespace'::RunBasicAtomicTests<__int64_const_volatile_*>();
  memset(&local_668,0,800);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<__int64_const_volatile_*>(local_4d8);
  ::`anonymous_namespace'::RunBasicAtomicTests<FString_const_volatile_*>();
  memset(local_5c8,0,0x5a0);
  puVar2 = &local_668;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2 = puVar2 + 0x14;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  ::`anonymous_namespace'::RunArithmeticAtomicTests<FString_const_volatile_*>(local_348);
  puVar4 = local_38 + 2;
  do {
    puVar1 = puVar4 + -2;
    puVar4 = puVar4 + -2;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  return;
}

