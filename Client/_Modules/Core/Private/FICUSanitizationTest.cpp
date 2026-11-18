// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141bbf930

EAutomationTestFlags __thiscall FICUSanitizationTest::GetTestFlags(FICUSanitizationTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bbf940

bool __thiscall FICUSanitizationTest::IsStressTest(FICUSanitizationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bbf950

uint __thiscall FICUSanitizationTest::GetRequiredDeviceNum(FICUSanitizationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bbf960

FString * __thiscall
FICUSanitizationTest::GetTestSourceFileName
          (FICUSanitizationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\TextTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bbf990

int __thiscall FICUSanitizationTest::GetTestSourceFileLine(FICUSanitizationTest *this)

{
  return 0x57f;
}

// GetTests @ 141bbf9a0

/* WARNING: Removing unreachable block (ram,0x000141bbfb1e) */

void __thiscall
FICUSanitizationTest::GetTests
          (FICUSanitizationTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bbfb50

bool __thiscall FICUSanitizationTest::RunTest(FICUSanitizationTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bbfb90

FString * __thiscall
FICUSanitizationTest::GetBeautifiedTestName
          (FICUSanitizationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FICUSanitizationTest @ 141be32d0

FICUSanitizationTest * __thiscall
FICUSanitizationTest::FICUSanitizationTest(FICUSanitizationTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FICUSanitizationTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][EditorContext][ClientContext][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::ICUSanitization");
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
  ::FString::FString(&local_18,"[.][EditorContext][ClientContext][EngineFilter]");
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

// operator() @ 141bf38f0

void __thiscall
`FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()
          (void *this,FString *param_1,FString *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FString local_28;
  FString local_18;
  
  FCulture::GetCanonicalName(&local_28,param_1);
  FVar5.Data = local_28.Data.AllocatorInstance.Data;
  iVar3 = (param_2->Data).ArrayNum;
  if (local_28.Data.ArrayNum == iVar3) {
    if (local_28.Data.ArrayNum < 2) goto LAB_141bf39ac;
    iVar3 = wcscmp((wchar_t *)local_28.Data.AllocatorInstance.Data,
                   (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar6 = iVar3 == 0;
  }
  else {
    bVar6 = local_28.Data.ArrayNum + iVar3 == 1;
  }
  if (!bVar6) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,
               L"GetCanonicalName did not produce the expected result (got \'%s\', expected \'%s\')"
              );
    (*pcVar2)(pFVar1,&local_18,0);
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
LAB_141bf39ac:
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// TestBody @ 141c15390

void __thiscall FICUSanitizationTest::TestBody(FICUSanitizationTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 local_res18 [8];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"en-US");
  ::FString::FString(&local_18,L"en-US");
  InternationalizationUtilities::SanitizeCultureCode(&local_48,&local_18);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15409;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15409:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_28,
                 L"SanitizeCultureCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_28,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"en_US_POSIX");
  ::FString::FString(&local_28,L"en_US_POSIX");
  InternationalizationUtilities::SanitizeCultureCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c154e9;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c154e9:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeCultureCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"en-US");
  ::FString::FString(&local_28,L"en-US{}%");
  InternationalizationUtilities::SanitizeCultureCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c155c9;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c155c9:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeCultureCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"en-US");
  ::FString::FString(&local_28,L"en{}%-US");
  InternationalizationUtilities::SanitizeCultureCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c156a9;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c156a9:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeCultureCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Etc/Unknown");
  ::FString::FString(&local_28,L"Etc/Unknown");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15789;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15789:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"America/Sao_Paulo");
  ::FString::FString(&local_28,L"America/Sao_Paulo");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15869;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15869:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"America/Sao_Paulo");
  ::FString::FString(&local_28,L"America/Sao_Paulo{}%");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15949;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15949:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"America/Sao_Paulo");
  ::FString::FString(&local_28,L"America/Sao{}%_Paulo");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15a29;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15a29:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Antarctica/DumontDUrville");
  ::FString::FString(&local_28,L"Antarctica/DumontDUrville");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15b09;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15b09:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Antarctica/DumontDUrville");
  ::FString::FString(&local_28,L"Antarctica/DumontDUrville{}%");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15be9;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15be9:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Antarctica/DumontDUrville");
  ::FString::FString(&local_28,L"Antarctica/Dumont{}%DUrville");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15cc9;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15cc9:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Antarctica/DumontDUrville");
  ::FString::FString(&local_28,L"Antarctica/DumontD\'Urville");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15da9;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15da9:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Antarctica/DumontDUrville");
  ::FString::FString(&local_28,L"Antarctica/DumontDUrville_Dumont");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15e89;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15e89:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"GMT-8:00");
  ::FString::FString(&local_28,L"GMT-8:00");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c15f69;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c15f69:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"GMT-8:00");
  ::FString::FString(&local_28,L"GMT-8:00{}%");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c16049;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c16049:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"GMT-8:00");
  ::FString::FString(&local_28,L"GMT-{}%8:00");
  InternationalizationUtilities::SanitizeTimezoneCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c16129;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c16129:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeTimezoneCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"USD");
  ::FString::FString(&local_28,L"USD");
  InternationalizationUtilities::SanitizeCurrencyCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c16209;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c16209:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeCurrencyCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"USD");
  ::FString::FString(&local_28,L"USD{}%");
  InternationalizationUtilities::SanitizeCurrencyCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c162e9;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c162e9:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeCurrencyCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"USD");
  ::FString::FString(&local_28,L"U{}%SD");
  InternationalizationUtilities::SanitizeCurrencyCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c163c9;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c163c9:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeCurrencyCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"USD");
  ::FString::FString(&local_28,L"USDUSD");
  InternationalizationUtilities::SanitizeCurrencyCode(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c164a9;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c164a9:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"SanitizeCurrencyCode did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"en-US-POSIX");
  ::FString::FString(&local_28,L"");
  FCulture::GetCanonicalName(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c16585;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c16585:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"GetCanonicalName did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"en");
  ::FString::FString(&local_28,L"en");
  FCulture::GetCanonicalName(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c16665;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c16665:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"GetCanonicalName did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"en-US");
  ::FString::FString(&local_28,L"en_US");
  FCulture::GetCanonicalName(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_141c16745;
    }
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_141c16745:
    if (!bVar6) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_18,
                 L"GetCanonicalName did not produce the expected result (got \'%s\', expected \'%s\')"
                );
      (*pcVar2)(pFVar1,&local_18,0);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"en-US-POSIX");
  ::FString::FString(&local_28,L"en_US_POSIX");
  FCulture::GetCanonicalName(&local_48,&local_28);
  FVar5.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
    if (local_48.Data.ArrayNum < 2) goto LAB_141c16885;
    iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                   (wchar_t *)local_38.Data.AllocatorInstance.Data);
    bVar6 = iVar3 == 0;
  }
  else {
    bVar6 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
  }
  if (!bVar6) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,
               L"GetCanonicalName did not produce the expected result (got \'%s\', expected \'%s\')"
              );
    (*pcVar2)(pFVar1,&local_18,0);
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
LAB_141c16885:
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en-US-POSIX");
  ::FString::FString(&local_18,L"en_US@POSIX");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en-US");
  ::FString::FString(&local_18,L"en_US.utf8");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en-US-POSIX");
  ::FString::FString(&local_18,L"en_US.utf8@posix");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en-IE@currency=IEP");
  ::FString::FString(&local_18,L"en_IE_PREEURO");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en-IE@currency=IEP");
  ::FString::FString(&local_18,L"en_IE@CURRENCY=IEP");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"fr@calendar=islamic-civil;collation=phonebook");
  ::FString::FString(&local_18,L"fr@collation=phonebook;calendar=islamic-civil");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"sr-Latn-RS-REVISED@currency=USD");
  ::FString::FString(&local_18,L"sr_Latn_RS_REVISED@currency=USD");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en-US-POSIX");
  ::FString::FString(&local_18,L"%%%");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en-US-POSIX");
  ::FString::FString(&local_18,L"en____US_POSIX");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en--POSIX");
  ::FString::FString(&local_18,L"en_POSIX");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en--POSIX");
  ::FString::FString(&local_18,L"en__POSIX");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en-US");
  ::FString::FString(&local_18,L"en_US@wooble=USD");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"en-US-POSIX");
  ::FString::FString(&local_18,L"fred_wooble_bob_wibble");
  `FICUSanitizationTest::TestBody'::__l6::<lambda_4>::operator()(local_res18,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

