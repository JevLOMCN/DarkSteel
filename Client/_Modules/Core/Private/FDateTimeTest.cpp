// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5a2b0

EAutomationTestFlags __thiscall FDateTimeTest::GetTestFlags(FDateTimeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5a2c0

bool __thiscall FDateTimeTest::IsStressTest(FDateTimeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5a2d0

uint __thiscall FDateTimeTest::GetRequiredDeviceNum(FDateTimeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5a2e0

FString * __thiscall
FDateTimeTest::GetTestSourceFileName(FDateTimeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\DateTimeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5a310

int __thiscall FDateTimeTest::GetTestSourceFileLine(FDateTimeTest *this)

{
  return 0x17;
}

// GetTests @ 141c5a320

/* WARNING: Removing unreachable block (ram,0x000141c5a49e) */

void __thiscall
FDateTimeTest::GetTests
          (FDateTimeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5a4c0

bool __thiscall FDateTimeTest::RunTest(FDateTimeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5a4f0

FString * __thiscall
FDateTimeTest::GetBeautifiedTestName(FDateTimeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDateTimeTest @ 141c8b260

FDateTimeTest * __thiscall FDateTimeTest::FDateTimeTest(FDateTimeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDateTimeTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::DateTime");
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

// TestBody @ 141c9bcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FDateTimeTest::TestBody(FDateTimeTest *this,FString *param_1)

{
  double dVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FDateTime *pFVar10;
  FAutomationTestFramework *pFVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStackY_168 [32];
  FString local_128;
  FDateTime local_118;
  FDateTime local_110;
  FDateTime local_108;
  FDateTime local_100;
  FDateTime local_f8;
  FDateTime local_f0;
  FDateTime local_e8;
  FDateTime local_e0;
  int local_d8;
  int local_d4;
  FDateTime local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  FDateTime local_b8;
  double local_b0 [6];
  double local_80 [11];
  
  local_80[0] = (double)(__security_cookie.value ^ (ulonglong)auStackY_168);
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
  local_118.Ticks = pFVar10->Ticks;
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
  local_110.Ticks = pFVar10->Ticks + 10000000000000000;
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
  local_108.Ticks = pFVar10->Ticks + 0x27797f26c57d80;
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
  local_100.Ticks = pFVar10->Ticks + 0x2bdc545d587500;
  FDateTime::FDateTime(&local_f8,0x7dd,8,0xe,0xc,0x22,0x38,0x315);
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
  lVar12 = local_118.Ticks - pFVar10->Ticks;
  lVar12 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar12),8) + lVar12;
  if (lVar12 >> 0x17 != lVar12 >> 0x3f) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
    ::FString::PrintfImpl(&local_128,L"%s - A=%lld B=%lld");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
  if (9999999 < (local_110.Ticks - pFVar10->Ticks) + 0xffdc790d903f0000U) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
    ::FString::PrintfImpl(&local_128,L"%s - A=%lld B=%lld");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
  if (9999999 < (local_108.Ticks - pFVar10->Ticks) + 0xffd88680d93a8280U) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
    ::FString::PrintfImpl(&local_128,L"%s - A=%lld B=%lld");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
  if (9999999 < (local_100.Ticks - pFVar10->Ticks) + 0xffd423aba2a78b00U) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::FDateTime(&local_f0,0x7b2,1,1,0,0,0,0);
    ::FString::PrintfImpl(&local_128,L"%s - A=%lld B=%lld");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetYear(&local_118);
  if (iVar9 != 0x7b2) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetYear(&local_118);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_118);
  if (iVar9 != 1) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_118);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_118);
  if (iVar9 != 1) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_118);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetDay(&local_118);
  if (iVar9 != 1) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetDay(&local_118);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_118.Ticks / 36000000000) != (int)((local_118.Ticks / 36000000000) / 0x18) * 0x18)
  {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_118.Ticks / 600000000;
  lVar13 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar12),8) + lVar12;
  if ((int)lVar12 + ((int)(lVar13 >> 5) - (int)(lVar13 >> 0x3f)) * -0x3c != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_118.Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_118.Ticks),8);
  lVar13 = (lVar12 >> 0x17) - (lVar12 >> 0x3f);
  lVar12 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar13),8) + lVar13;
  if ((int)lVar13 + ((int)(lVar12 >> 5) - (int)(lVar12 >> 0x3f)) * -0x3c != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_118.Ticks / 10000) + (int)((local_118.Ticks / 10000) / 1000) * -1000 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetYear(&local_110);
  if (iVar9 != 0x7d1) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetYear(&local_110);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_110);
  if (iVar9 != 9) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_110);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_110);
  if (iVar9 != 9) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_110);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetDay(&local_110);
  if (iVar9 != 9) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetDay(&local_110);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_110.Ticks / 36000000000) + (int)((local_110.Ticks / 36000000000) / 0x18) * -0x18
      != 1) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_110.Ticks / 600000000;
  lVar13 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar12),8) + lVar12;
  if ((int)lVar12 + ((int)(lVar13 >> 5) - (int)(lVar13 >> 0x3f)) * -0x3c != 0x2e) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_110.Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_110.Ticks),8);
  lVar13 = (lVar12 >> 0x17) - (lVar12 >> 0x3f);
  lVar12 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar13),8) + lVar13;
  if ((int)lVar13 + ((int)(lVar12 >> 5) - (int)(lVar12 >> 0x3f)) * -0x3c != 0x28) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_110.Ticks / 10000) + (int)((local_110.Ticks / 10000) / 1000) * -1000 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetYear(&local_108);
  if (iVar9 != 0x7d5) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetYear(&local_108);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_108);
  if (iVar9 != 3) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_108);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_108);
  if (iVar9 != 3) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_108);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetDay(&local_108);
  if (iVar9 != 0x12) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetDay(&local_108);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_108.Ticks / 36000000000) + (int)((local_108.Ticks / 36000000000) / 0x18) * -0x18
      != 1) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_108.Ticks / 600000000;
  lVar13 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar12),8) + lVar12;
  if ((int)lVar12 + ((int)(lVar13 >> 5) - (int)(lVar13 >> 0x3f)) * -0x3c != 0x3a) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_108.Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_108.Ticks),8);
  lVar13 = (lVar12 >> 0x17) - (lVar12 >> 0x3f);
  lVar12 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar13),8) + lVar13;
  if ((int)lVar13 + ((int)(lVar12 >> 5) - (int)(lVar12 >> 0x3f)) * -0x3c != 0x1f) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_108.Ticks / 10000) + (int)((local_108.Ticks / 10000) / 1000) * -1000 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetYear(&local_100);
  if (iVar9 != 0x7d9) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetYear(&local_100);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_100);
  if (iVar9 != 2) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_100);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_100);
  if (iVar9 != 2) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_100);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetDay(&local_100);
  if (iVar9 != 0xd) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetDay(&local_100);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_100.Ticks / 36000000000) + (int)((local_100.Ticks / 36000000000) / 0x18) * -0x18
      != 0x17) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_100.Ticks / 600000000;
  lVar13 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar12),8) + lVar12;
  if ((int)lVar12 + ((int)(lVar13 >> 5) - (int)(lVar13 >> 0x3f)) * -0x3c != 0x1f) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_100.Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_100.Ticks),8);
  lVar13 = (lVar12 >> 0x17) - (lVar12 >> 0x3f);
  lVar12 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar13),8) + lVar13;
  if ((int)lVar13 + ((int)(lVar12 >> 5) - (int)(lVar12 >> 0x3f)) * -0x3c != 0x1e) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_100.Ticks / 10000) + (int)((local_100.Ticks / 10000) / 1000) * -1000 != 0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetYear(&local_f8);
  if (iVar9 != 0x7dd) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetYear(&local_f8);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_f8);
  if (iVar9 != 8) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_f8);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetMonth(&local_f8);
  if (iVar9 != 8) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetMonth(&local_f8);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = FDateTime::GetDay(&local_f8);
  if (iVar9 != 0xe) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FDateTime::GetDay(&local_f8);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_f8.Ticks / 36000000000) + (int)((local_f8.Ticks / 36000000000) / 0x18) * -0x18 !=
      0xc) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_f8.Ticks / 600000000;
  lVar13 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar12),8) + lVar12;
  if ((int)lVar12 + ((int)(lVar13 >> 5) - (int)(lVar13 >> 0x3f)) * -0x3c != 0x22) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = local_f8.Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_f8.Ticks),8);
  lVar13 = (lVar12 >> 0x17) - (lVar12 >> 0x3f);
  lVar12 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar13),8) + lVar13;
  if ((int)lVar13 + ((int)(lVar12 >> 5) - (int)(lVar12 >> 0x3f)) * -0x3c != 0x38) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_f8.Ticks / 10000) + (int)((local_f8.Ticks / 10000) / 1000) * -1000 != 0x315) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s - A=%d B=%d");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  local_e8.Ticks = 0;
  bVar8 = FDateTime::ParseIso8601(L"",&local_e8);
  if (bVar8) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_128,L"Parsing an empty ISO string must fail");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FDateTime::ParseIso8601(L"2019-05-22",&local_e8);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar2 = pFVar11->CurrentTest;
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7e3,5,0x16,0,0,0,0);
  if (local_e8.Ticks != pFVar10->Ticks) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FDateTime::ParseIso8601(L"2019-05-20T19:41:38+01:30",&local_e8);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar2 = pFVar11->CurrentTest;
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7e3,5,0x14,0x12,0xb,0x26,0);
  if (local_e8.Ticks != pFVar10->Ticks) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FDateTime::ParseIso8601(L"2019-05-20T19:41:38-01:30",&local_e8);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar2 = pFVar11->CurrentTest;
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7e3,5,0x14,0x15,0xb,0x26,0);
  if (local_e8.Ticks != pFVar10->Ticks) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FDateTime::ParseIso8601(L"2019-05-20T19:41:38+0030",&local_e8);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar2 = pFVar11->CurrentTest;
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7e3,5,0x14,0x13,0xb,0x26,0);
  if (local_e8.Ticks != pFVar10->Ticks) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FDateTime::ParseIso8601(L"2019-05-20T19:41:38-01",&local_e8);
  pFVar11 = FAutomationTestFramework::Get();
  pFVar2 = pFVar11->CurrentTest;
  pFVar10 = FDateTime::FDateTime(&local_f0,0x7e3,5,0x14,0x14,0x29,0x26,0);
  if (local_e8.Ticks != pFVar10->Ticks) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  dVar7 = __real_413a445180000000;
  dVar6 = __real_3d745c7fe3bc40b0;
  dVar5 = __real_3f1a36e2e0000000;
  dVar4 = __real_4269254d38000000;
  pdVar14 = local_b0;
  local_b0[0] = ___xmm_408f4000000000000000000000000000;
  local_b0[1] = (double)_UNK_15076c098;
  local_b0[4] = (double)___xmm_41547f8b20000000413a445180000000;
  local_b0[5] = (double)_UNK_15076c238;
  local_b0[2] = (double)___xmm_413a445100000000413a445180000000;
  local_b0[3] = (double)_UNK_15076c218;
  do {
    dVar1 = *pdVar14;
    pFVar11 = FAutomationTestFramework::Get();
    lVar12 = (longlong)((dVar1 - dVar7) * dVar4);
    FAutomationTestBase::TestEqual
              (pFVar11->CurrentTest,L"convertion from/to JulianDay is stable",
               (double)(lVar12 % 864000000000) * dVar6 + (double)(lVar12 / 864000000000) + dVar7,
               dVar1,dVar5);
    pdVar14 = pdVar14 + 1;
  } while (pdVar14 != local_80);
  FDateTime::FDateTime(&local_d0,0x7e3,5,0x14,0x12,0xb,0x26,0);
  local_e0.Ticks = local_d0.Ticks - local_d0.Ticks % 864000000000;
  pFVar11 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar11->CurrentTest,L"GetDate returns a FDateTime at midnight",
             (int)(local_e0.Ticks / 36000000000) +
             (int)((local_e0.Ticks / 36000000000) / 0x18) * -0x18,0);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = __real_4259254d38002000;
  auVar15 = roundpd(auVar15,auVar15,1);
  lVar12 = (longlong)auVar15._0_8_ + local_e0.Ticks;
  pFVar11 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar11->CurrentTest,L"GetDate returns a FDateTime at midnight",
             (int)(lVar12 / 36000000000) + (int)((lVar12 / 36000000000) / 0x18) * -0x18,0xc);
  dVar4 = (double)(local_e0.Ticks % 864000000000) * dVar6 +
          (double)(local_e0.Ticks / 864000000000) + dVar7;
  pFVar11 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar11->CurrentTest,
             L"At midnight, fractionnal part of the JulianDay value should be 0.5",
             dVar4 - (double)(int)dVar4,__real_3fe0000000000000,dVar5);
  pFVar11 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar11->CurrentTest,L"A 12h timespan adds half a julianday",
             ((double)(lVar12 % 864000000000) * dVar6 + (double)(lVar12 / 864000000000) + dVar7) -
             dVar4,__real_3fe0000000000000,dVar5);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = __real_4342f25f22c5e000;
  auVar15 = roundpd(auVar16,auVar16,1);
  lVar12 = (longlong)auVar15._0_8_ + local_d0.Ticks;
  pFVar11 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar11->CurrentTest,
             L"An offset by a given numer of days leads to a similar JulianDay offset",
             ((double)(lVar12 / 864000000000) + dVar7 + (double)(lVar12 % 864000000000) * dVar6) -
             ((double)(local_d0.Ticks % 864000000000) * dVar6 +
              (double)(local_d0.Ticks / 864000000000) + dVar7),__real_40c81c8000000000,dVar5);
  FDateTime::GetDate(&local_e0,&local_c4,&local_c8,&local_d4);
  local_b8.Ticks = local_e0.Ticks + -1;
  FDateTime::GetDate(&local_b8,&local_bc,&local_c0,&local_d8);
  pFVar11 = FAutomationTestFramework::Get();
  if (local_d4 == local_d8) {
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_128,L"%s: The two values are equal.");
    (*pcVar3)(pFVar2,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  return;
}

