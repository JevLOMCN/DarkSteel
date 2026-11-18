// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc4390

EAutomationTestFlags __thiscall
FStringViewTrimStartAndEndTest::GetTestFlags(FStringViewTrimStartAndEndTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc43a0

bool __thiscall FStringViewTrimStartAndEndTest::IsStressTest(FStringViewTrimStartAndEndTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc43b0

uint __thiscall
FStringViewTrimStartAndEndTest::GetRequiredDeviceNum(FStringViewTrimStartAndEndTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc4560

FString * __thiscall
FStringViewTrimStartAndEndTest::GetTestSourceFileName
          (FStringViewTrimStartAndEndTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\StringViewTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc4590

int __thiscall
FStringViewTrimStartAndEndTest::GetTestSourceFileLine(FStringViewTrimStartAndEndTest *this)

{
  return 0x2f6;
}

// GetTests @ 141bc4600

/* WARNING: Removing unreachable block (ram,0x000141bc477e) */

void __thiscall
FStringViewTrimStartAndEndTest::GetTests
          (FStringViewTrimStartAndEndTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
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

// RunTest @ 141bc47a0

bool __thiscall
FStringViewTrimStartAndEndTest::RunTest(FStringViewTrimStartAndEndTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc47d0

FString * __thiscall
FStringViewTrimStartAndEndTest::GetBeautifiedTestName
          (FStringViewTrimStartAndEndTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStringViewTrimStartAndEndTest @ 141be8f40

FStringViewTrimStartAndEndTest * __thiscall
FStringViewTrimStartAndEndTest::FStringViewTrimStartAndEndTest
          (FStringViewTrimStartAndEndTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStringViewTrimStartAndEndTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::String::StringView::TrimStartAndEnd");
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
  ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
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

// TestBody @ 141c39da0

/* WARNING: Removing unreachable block (ram,0x000141c3a02e) */
/* WARNING: Removing unreachable block (ram,0x000141c3a0fe) */
/* WARNING: Removing unreachable block (ram,0x000141c3a1cb) */

void __thiscall
FStringViewTrimStartAndEndTest::TestBody(FStringViewTrimStartAndEndTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  wint_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  longlong lVar10;
  FString local_38;
  
  iVar7 = 0;
  iVar9 = 0;
  pwVar6 = (wint_t *)&::u__;
  do {
    iVar3 = iswspace(*pwVar6);
    if (iVar3 == 0) break;
    iVar9 = iVar9 + 1;
    pwVar6 = pwVar6 + 1;
  } while (pwVar6 != &DAT_150613402);
  iVar3 = 1 - iVar9;
  if (iVar3 != 0) {
    lVar10 = (longlong)iVar3;
    pwVar6 = (wint_t *)(&::u__ + (lVar10 + -1 + (longlong)iVar9) * 2);
    do {
      iVar9 = iswspace(*pwVar6);
      if (iVar9 == 0) break;
      iVar3 = iVar3 + -1;
      pwVar6 = pwVar6 + -1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (iVar3 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = 0;
  pwVar6 = (wint_t *)&u___;
  do {
    iVar3 = iswspace(*pwVar6);
    if (iVar3 == 0) break;
    iVar9 = iVar9 + 1;
    pwVar6 = pwVar6 + 1;
  } while (pwVar6 != (wint_t *)&DAT_15066754c);
  iVar3 = 2 - iVar9;
  if (iVar3 != 0) {
    lVar10 = (longlong)iVar3;
    pwVar6 = (wint_t *)(&u___ + (lVar10 + -1 + (longlong)iVar9) * 2);
    do {
      iVar9 = iswspace(*pwVar6);
      if (iVar9 == 0) break;
      iVar3 = iVar3 + -1;
      pwVar6 = pwVar6 + -1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (iVar3 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = 0;
  pwVar6 = (wint_t *)&u_____;
  do {
    iVar3 = iswspace(*pwVar6);
    if (iVar3 == 0) break;
    iVar9 = iVar9 + 1;
    pwVar6 = pwVar6 + 1;
  } while (pwVar6 != (wint_t *)&DAT_150727bc0);
  iVar3 = 4 - iVar9;
  if (iVar3 != 0) {
    lVar10 = (longlong)iVar3;
    pwVar6 = (wint_t *)(&u_____ + (lVar10 + -1 + (longlong)iVar9) * 2);
    do {
      iVar9 = iswspace(*pwVar6);
      if (iVar9 == 0) break;
      iVar3 = iVar3 + -1;
      pwVar6 = pwVar6 + -1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (iVar3 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar6 = (wint_t *)&u_ABC123;
  iVar9 = 0;
  do {
    iVar3 = iswspace(*pwVar6);
    if (iVar3 == 0) break;
    iVar9 = iVar9 + 1;
    pwVar6 = pwVar6 + 1;
  } while (pwVar6 != (wint_t *)&DAT_150727bd4);
  iVar3 = 6 - iVar9;
  if (iVar3 != 0) {
    lVar10 = (longlong)iVar3;
    pwVar8 = (wchar_t *)((longlong)(&u_ABC123 + (longlong)iVar9 * 2) + (lVar10 + -1) * 2);
    do {
      iVar4 = iswspace(*pwVar8);
      if (iVar4 == 0) break;
      iVar3 = iVar3 + -1;
      pwVar8 = pwVar8 + -1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((iVar3 != 6) ||
     (iVar9 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)(&u_ABC123 + (longlong)iVar9 * 2),L"ABC123",6), iVar9 != 0)) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = 0;
  pwVar6 = (wint_t *)&u_A____B;
  do {
    iVar3 = iswspace(*pwVar6);
    if (iVar3 == 0) break;
    iVar9 = iVar9 + 1;
    pwVar6 = pwVar6 + 1;
  } while (pwVar6 != (wint_t *)&DAT_150727be4);
  iVar3 = 6 - iVar9;
  if (iVar3 != 0) {
    lVar10 = (longlong)iVar3;
    pwVar8 = (wchar_t *)((longlong)(&u_A____B + (longlong)iVar9 * 2) + (lVar10 + -1) * 2);
    do {
      iVar4 = iswspace(*pwVar8);
      if (iVar4 == 0) break;
      iVar3 = iVar3 + -1;
      pwVar8 = pwVar8 + -1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((iVar3 != 6) ||
     (iVar9 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)(&u_A____B + (longlong)iVar9 * 2),L"A \t\r\nB",6), iVar9 != 0))
  {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar6 = (wint_t *)&u_____ABC123____;
  do {
    iVar9 = iswspace(*pwVar6);
    if (iVar9 == 0) break;
    iVar7 = iVar7 + 1;
    pwVar6 = pwVar6 + 1;
  } while (pwVar6 != (wint_t *)&DAT_150727c04);
  iVar9 = 0xe - iVar7;
  if (iVar9 != 0) {
    lVar10 = (longlong)iVar9;
    pwVar8 = (wchar_t *)((longlong)(&u_____ABC123____ + (longlong)iVar7 * 2) + (lVar10 + -1) * 2);
    do {
      iVar3 = iswspace(*pwVar8);
      if (iVar3 == 0) break;
      iVar9 = iVar9 + -1;
      pwVar8 = pwVar8 + -1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((iVar9 != 6) ||
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)(&u_____ABC123____ + (longlong)iVar7 * 2),L"ABC123",6),
     iVar7 != 0)) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Condition failed");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

