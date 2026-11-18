// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// operator() @ 141bf0320

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
`FTextNumericParsingTestClass::TextNumericParsingTest'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  FInternationalization *this_00;
  FDecimalNumberFormattingRules *pFVar7;
  size_t sVar8;
  FNumberParsingOptions *pFVar9;
  FAutomationTestFramework *pFVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  short sVar13;
  bool local_res18 [8];
  bool local_res20 [8];
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FScriptContainerElement *local_408;
  FScriptContainerElement *local_400;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  TSharedPtr<FCulture,1> local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FDecimalNumberIntegralLimits local_88;
  FDecimalNumberIntegralLimits local_70 [2];
  
  this_00 = FInternationalization::Get();
  FInternationalization::GetCulture(this_00,&local_3c8,param_1);
  if (local_3c8.Object == (FCulture *)0x0) goto LAB_141bf2429;
  if ((local_3c8.Object == (FCulture *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = FCulture::GetDecimalNumberFormattingRules(local_3c8.Object);
  ::FString::PrintfImpl(&local_478,L"135%c456");
  ::FString::PrintfImpl(&local_438,L"%s135%c456");
  ::FString::PrintfImpl(&local_468,L"%s135%c456");
  ::FString::PrintfImpl(&local_3f8,L"+135%c456");
  ::FString::PrintfImpl(&local_3d8,L"-135%c456");
  ::FString::PrintfImpl(&local_418,L"1%c234%c5");
  ::FString::PrintfImpl(&local_3b8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_3b8.Data.ArrayNum != 0) {
    FVar11.Data = local_3b8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar12.Data = local_478.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<signed_char>
            ((wchar_t *)FVar12.Data,pFVar7,-0x79,'\x7f',true,false,(wchar_t *)FVar11.Data);
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_3a8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar11.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar12.Data = local_478.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned_char>
            ((wchar_t *)FVar12.Data,pFVar7,0x87,0x87,true,true,(wchar_t *)FVar11.Data);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_398,L"[%s] Parsing \'%s\' as \'%s\'");
  local_408 = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    local_408 = local_398.Data.AllocatorInstance.Data;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar11.Data = local_478.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar11.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  local_res18[0] = false;
  local_400 = (FScriptContainerElement *)0x0;
  local_88.NumericLimitLowest = -0x8000;
  local_88.NumericLimitMax = 0x7fff;
  local_88.bIsNumericSigned = true;
  local_res20[0] =
       FastDecimalFormat::Internal::StringToIntegral
                 ((wchar_t *)FVar11.Data,(int)sVar8,pFVar7,pFVar9,&local_88,local_res18,
                  (ulong64 *)&local_400,(int *)0x0);
  sVar13 = 1;
  if (local_res18[0] != false) {
    sVar13 = -1;
  }
  if (local_res20[0]) {
    if ((short)(sVar13 * (short)local_400) != 0x87) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_b8,
                 L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s."
                );
      (*pcVar2)(pFVar1,&local_b8,0);
      local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      goto LAB_141bf0749;
    }
  }
  else {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_c8,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
    (*pcVar2)(pFVar1,&local_c8,0);
LAB_141bf0749:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_388,L"[%s] Parsing \'%s\' as \'%s\'");
  local_400 = (FScriptContainerElement *)L"";
  if (local_388.Data.ArrayNum != 0) {
    local_400 = local_388.Data.AllocatorInstance.Data;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar11.Data = local_478.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar11.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  local_res20[0] = false;
  local_408 = (FScriptContainerElement *)0x0;
  local_70[0].NumericLimitLowest = 0;
  local_70[0].NumericLimitMax = 0xffff;
  local_70[0].bIsNumericSigned = false;
  local_res18[0] =
       FastDecimalFormat::Internal::StringToIntegral
                 ((wchar_t *)FVar11.Data,(int)sVar8,pFVar7,pFVar9,local_70,local_res20,
                  (ulong64 *)&local_408,(int *)0x0);
  sVar13 = 1;
  if (local_res20[0] != false) {
    sVar13 = -1;
  }
  if (local_res18[0]) {
    if ((short)(sVar13 * (short)local_408) != 0x87) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_98,
                 L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s."
                );
      (*pcVar2)(pFVar1,&local_98,0);
      local_a8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      goto LAB_141bf0929;
    }
  }
  else {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_a8,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
    (*pcVar2)(pFVar1,&local_a8,0);
LAB_141bf0929:
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_378,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_378.Data.ArrayNum != 0) {
    FVar11.Data = local_378.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar12.Data = local_478.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<int>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x87,true,(wchar_t *)FVar11.Data);
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_368,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_368.Data.ArrayNum != 0) {
    FVar11.Data = local_368.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar12.Data = local_478.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<unsigned_int>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x87,true,(wchar_t *)FVar11.Data);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_358,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_358.Data.ArrayNum != 0) {
    FVar11.Data = local_358.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar12.Data = local_478.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<__int64>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x87,true,(wchar_t *)FVar11.Data);
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_348,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_348.Data.ArrayNum != 0) {
    FVar11.Data = local_348.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar12.Data = local_478.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<unsigned___int64>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x87,true,(wchar_t *)FVar11.Data);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_338,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_338.Data.ArrayNum != 0) {
    FVar11.Data = local_338.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar12.Data = local_478.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  fVar4 = __real_430774bc;
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<float>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,__real_430774bc,true,
             (wchar_t *)FVar11.Data);
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_328,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_328.Data.ArrayNum != 0) {
    FVar11.Data = local_328.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_478.Data.ArrayNum != 0) {
    FVar12.Data = local_478.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  dVar3 = __real_4060ee978d4fdf3b;
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<double>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,__real_4060ee978d4fdf3b,true,
             (wchar_t *)FVar11.Data);
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_318,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_318.Data.ArrayNum != 0) {
    FVar11.Data = local_318.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_438.Data.ArrayNum != 0) {
    FVar12.Data = local_438.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<int>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x87,true,(wchar_t *)FVar11.Data);
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_308,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_308.Data.ArrayNum != 0) {
    FVar11.Data = local_308.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_438.Data.ArrayNum != 0) {
    FVar12.Data = local_438.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<unsigned_int>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x87,true,(wchar_t *)FVar11.Data);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_2f8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_2f8.Data.ArrayNum != 0) {
    FVar11.Data = local_2f8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_438.Data.ArrayNum != 0) {
    FVar12.Data = local_438.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<float>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,fVar4,true,(wchar_t *)FVar11.Data);
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_2e8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_2e8.Data.ArrayNum != 0) {
    FVar11.Data = local_2e8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_438.Data.ArrayNum != 0) {
    FVar12.Data = local_438.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<double>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,dVar3,true,(wchar_t *)FVar11.Data);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_2d8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_2d8.Data.ArrayNum != 0) {
    FVar11.Data = local_2d8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_468.Data.ArrayNum != 0) {
    FVar12.Data = local_468.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<signed_char>
            ((wchar_t *)FVar12.Data,pFVar7,'y',-0x80,true,false,(wchar_t *)FVar11.Data);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_2c8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_2c8.Data.ArrayNum != 0) {
    FVar11.Data = local_2c8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_468.Data.ArrayNum != 0) {
    FVar12.Data = local_468.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<int>
            ((wchar_t *)FVar12.Data,pFVar7,-0x87,-0x87,true,true,(wchar_t *)FVar11.Data);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_2b8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_2b8.Data.ArrayNum != 0) {
    FVar11.Data = local_2b8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_468.Data.ArrayNum != 0) {
    FVar12.Data = local_468.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned_int>
            ((wchar_t *)FVar12.Data,pFVar7,0xffffff79,0,true,false,(wchar_t *)FVar11.Data);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_2a8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_2a8.Data.ArrayNum != 0) {
    FVar11.Data = local_2a8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_468.Data.ArrayNum != 0) {
    FVar12.Data = local_468.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  fVar5 = __real_c30774bc;
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<float>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,__real_c30774bc,true,
             (wchar_t *)FVar11.Data);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_298,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_298.Data.ArrayNum != 0) {
    FVar11.Data = local_298.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_468.Data.ArrayNum != 0) {
    FVar12.Data = local_468.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<double>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,__real_c060ee978d4fdf3b,true,
             (wchar_t *)FVar11.Data);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_288,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar11.Data = local_288.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_3f8.Data.ArrayNum != 0) {
    FVar12.Data = local_3f8.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<int>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x87,true,(wchar_t *)FVar11.Data);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_278,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_278.Data.ArrayNum != 0) {
    FVar11.Data = local_278.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar12.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<int>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,-0x87,true,(wchar_t *)FVar11.Data);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_268,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_268.Data.ArrayNum != 0) {
    FVar11.Data = local_268.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_3f8.Data.ArrayNum != 0) {
    FVar12.Data = local_3f8.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<float>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,fVar4,true,(wchar_t *)FVar11.Data);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_258,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_258.Data.ArrayNum != 0) {
    FVar11.Data = local_258.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar12.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<float>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,fVar5,true,(wchar_t *)FVar11.Data);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_248,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar11.Data = local_248.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_418.Data.ArrayNum != 0) {
    FVar12.Data = local_418.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned_char>
            ((wchar_t *)FVar12.Data,pFVar7,0xd2,0xff,true,false,(wchar_t *)FVar11.Data);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_238,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_238.Data.ArrayNum != 0) {
    FVar11.Data = local_238.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_418.Data.ArrayNum != 0) {
    FVar12.Data = local_418.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<int>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x4d2,true,(wchar_t *)FVar11.Data);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_228,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar11.Data = local_228.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_418.Data.ArrayNum != 0) {
    FVar12.Data = local_418.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<unsigned_int>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x4d2,true,(wchar_t *)FVar11.Data);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_218,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar11.Data = local_218.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_418.Data.ArrayNum != 0) {
    FVar12.Data = local_418.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<float>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,__real_449a5000,true,
             (wchar_t *)FVar11.Data);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_448,L"9223372036854775809");
  ::FString::PrintfImpl(&local_428,L"%s9223372036854775809");
  ::FString::PrintfImpl(&local_3e8,L"%s9223372036854775809");
  ::FString::PrintfImpl(&local_458,L"9%c223%c372%c036%c854%c775%c800");
  ::FString::PrintfImpl(&local_208,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_208.Data.ArrayNum != 0) {
    FVar11.Data = local_208.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_448.Data.ArrayNum != 0) {
    FVar12.Data = local_448.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<int>
            ((wchar_t *)FVar12.Data,pFVar7,1,0x7fffffff,true,false,(wchar_t *)FVar11.Data);
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1f8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1f8.Data.ArrayNum != 0) {
    FVar11.Data = local_1f8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_448.Data.ArrayNum != 0) {
    FVar12.Data = local_448.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned_int>
            ((wchar_t *)FVar12.Data,pFVar7,1,0xffffffff,true,false,(wchar_t *)FVar11.Data);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1e8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    FVar11.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_448.Data.ArrayNum != 0) {
    FVar12.Data = local_448.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<__int64>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,-0x7fffffffffffffff,true,
             (wchar_t *)FVar11.Data);
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoClampTest<__int64>
            ((wchar_t *)FVar12.Data,pFVar7,0x7fffffffffffffff,true,(wchar_t *)FVar11.Data);
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoLimitsTest<__int64>
            ((wchar_t *)FVar12.Data,pFVar7,-0x7fffffffffffffff,false,(wchar_t *)FVar11.Data);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1d8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1d8.Data.ArrayNum != 0) {
    FVar11.Data = local_1d8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_448.Data.ArrayNum != 0) {
    FVar12.Data = local_448.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned___int64>
            ((wchar_t *)FVar12.Data,pFVar7,0x8000000000000001,0x8000000000000001,true,true,
             (wchar_t *)FVar11.Data);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1c8,L"[%s] Parsing \'%s\' as \'%s\'");
  fVar4 = __real_5f000000;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar11.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_448.Data.ArrayNum != 0) {
    FVar12.Data = local_448.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<float>
            ((wchar_t *)FVar12.Data,pFVar7,__real_5f000000,__real_5f000000,true,true,
             (wchar_t *)FVar11.Data);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1b8,L"[%s] Parsing \'%s\' as \'%s\'");
  dVar3 = __real_43e0000000000000;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1b8.Data.ArrayNum != 0) {
    FVar11.Data = local_1b8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_448.Data.ArrayNum != 0) {
    FVar12.Data = local_448.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<double>
            ((wchar_t *)FVar12.Data,pFVar7,__real_43e0000000000000,__real_43e0000000000000,true,true
             ,(wchar_t *)FVar11.Data);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1a8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1a8.Data.ArrayNum != 0) {
    FVar11.Data = local_1a8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_428.Data.ArrayNum != 0) {
    FVar12.Data = local_428.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<__int64>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,-0x7fffffffffffffff,true,
             (wchar_t *)FVar11.Data);
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoClampTest<__int64>
            ((wchar_t *)FVar12.Data,pFVar7,0x7fffffffffffffff,true,(wchar_t *)FVar11.Data);
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoLimitsTest<__int64>
            ((wchar_t *)FVar12.Data,pFVar7,-0x7fffffffffffffff,false,(wchar_t *)FVar11.Data);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_198,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar11.Data = local_198.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_428.Data.ArrayNum != 0) {
    FVar12.Data = local_428.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned___int64>
            ((wchar_t *)FVar12.Data,pFVar7,0x8000000000000001,0x8000000000000001,true,true,
             (wchar_t *)FVar11.Data);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_188,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar11.Data = local_188.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_428.Data.ArrayNum != 0) {
    FVar12.Data = local_428.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<float>
            ((wchar_t *)FVar12.Data,pFVar7,fVar4,fVar4,true,true,(wchar_t *)FVar11.Data);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_178,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    FVar11.Data = local_178.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_428.Data.ArrayNum != 0) {
    FVar12.Data = local_428.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<double>
            ((wchar_t *)FVar12.Data,pFVar7,dVar3,dVar3,true,true,(wchar_t *)FVar11.Data);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_168,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar11.Data = local_168.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_3e8.Data.ArrayNum != 0) {
    FVar12.Data = local_3e8.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<__int64>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x7fffffffffffffff,true,
             (wchar_t *)FVar11.Data);
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoClampTest<__int64>
            ((wchar_t *)FVar12.Data,pFVar7,-0x8000000000000000,true,(wchar_t *)FVar11.Data);
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoLimitsTest<__int64>
            ((wchar_t *)FVar12.Data,pFVar7,0x7fffffffffffffff,false,(wchar_t *)FVar11.Data);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_158,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar11.Data = local_158.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_3e8.Data.ArrayNum != 0) {
    FVar12.Data = local_3e8.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned___int64>
            ((wchar_t *)FVar12.Data,pFVar7,0x7fffffffffffffff,0,true,false,(wchar_t *)FVar11.Data);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_148,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    FVar11.Data = local_148.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_3e8.Data.ArrayNum != 0) {
    FVar12.Data = local_3e8.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<float>
            ((wchar_t *)FVar12.Data,pFVar7,__real_df000000,__real_df000000,true,true,
             (wchar_t *)FVar11.Data);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_138,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar11.Data = local_138.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_3e8.Data.ArrayNum != 0) {
    FVar12.Data = local_3e8.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<double>
            ((wchar_t *)FVar12.Data,pFVar7,__real_c3e0000000000000,__real_c3e0000000000000,true,true
             ,(wchar_t *)FVar11.Data);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_128,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar11.Data = local_128.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_458.Data.ArrayNum != 0) {
    FVar12.Data = local_458.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<int>
            ((wchar_t *)FVar12.Data,pFVar7,-8,0x7fffffff,true,false,(wchar_t *)FVar11.Data);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_118,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar11.Data = local_118.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_458.Data.ArrayNum != 0) {
    FVar12.Data = local_458.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned_int>
            ((wchar_t *)FVar12.Data,pFVar7,0xfffffff8,0xffffffff,true,false,(wchar_t *)FVar11.Data);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_108,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar11.Data = local_108.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_458.Data.ArrayNum != 0) {
    FVar12.Data = local_458.Data.AllocatorInstance.Data;
  }
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  pFVar9 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<__int64>
            ((wchar_t *)FVar12.Data,(int)sVar8,pFVar7,pFVar9,0x7ffffffffffffff8,true,
             (wchar_t *)FVar11.Data);
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoClampTest<__int64>
            ((wchar_t *)FVar12.Data,pFVar7,0x7ffffffffffffff8,true,(wchar_t *)FVar11.Data);
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoLimitsTest<__int64>
            ((wchar_t *)FVar12.Data,pFVar7,0x7ffffffffffffff8,true,(wchar_t *)FVar11.Data);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_f8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar11.Data = local_f8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_458.Data.ArrayNum != 0) {
    FVar12.Data = local_458.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned___int64>
            ((wchar_t *)FVar12.Data,pFVar7,0x7ffffffffffffff8,0x7ffffffffffffff8,true,true,
             (wchar_t *)FVar11.Data);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_e8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar11.Data = local_e8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_458.Data.ArrayNum != 0) {
    FVar12.Data = local_458.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<float>
            ((wchar_t *)FVar12.Data,pFVar7,fVar4,fVar4,true,true,(wchar_t *)FVar11.Data);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_d8,L"[%s] Parsing \'%s\' as \'%s\'");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar11.Data = local_d8.Data.AllocatorInstance.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_458.Data.ArrayNum != 0) {
    FVar12.Data = local_458.Data.AllocatorInstance.Data;
  }
  FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<double>
            ((wchar_t *)FVar12.Data,pFVar7,dVar3,dVar3,true,true,(wchar_t *)FVar11.Data);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
LAB_141bf2429:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c8.SharedReferenceCount.ReferenceController);
  return;
}

// TextNumericParsingTest @ 141c49f10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextNumericParsingTestClass::TextNumericParsingTest(FTextNumericParsingTestClass *this)

{
  FDecimalNumberFormattingRules *pFVar1;
  FNumberParsingOptions *pFVar2;
  FTextNumericParsingTestClass *local_res8;
  FString local_28;
  
  local_res8 = this;
  FInternationalization::Get();
  ::FString::FString(&local_28,L"en");
  `FTextNumericParsingTestClass::TextNumericParsingTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"fr");
  `FTextNumericParsingTestClass::TextNumericParsingTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"ar");
  `FTextNumericParsingTestClass::TextNumericParsingTest'::__l2::<lambda_1>::operator()
            (&local_res8,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestUtil::DoTest<int>
            (L"10a",3,pFVar1,pFVar2,0,false,L"Parsing \'10a\' as \'int32\'");
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestUtil::DoTest<unsigned_int>
            (L"10a",3,pFVar1,pFVar2,0,false,L"Parsing \'10a\' as \'uint32\'");
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestUtil::DoTest<int>
            (L"10a",2,pFVar1,pFVar2,10,true,L"Parsing \'10a\' (len 2) as \'int32\'");
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestUtil::DoTest<unsigned_int>
            (L"10a",2,pFVar1,pFVar2,10,true,L"Parsing \'10a\' (len 2) as \'uint32\'");
  pFVar1 = FastDecimalFormat::GetCultureAgnosticFormattingRules();
  FTextNumericParsingTestUtil::DoAllTests<signed_char>
            (L"-128",pFVar1,-0x80,-0x80,true,true,L"Parsing int8 lowest");
  FTextNumericParsingTestUtil::DoAllTests<signed_char>
            (L"127",pFVar1,'\x7f','\x7f',true,true,L"Parsing int8 max");
  FTextNumericParsingTestUtil::DoAllTests<unsigned_char>
            (L"0",pFVar1,'\0','\0',true,true,L"Parsing uint8 lowest");
  FTextNumericParsingTestUtil::DoAllTests<unsigned_char>
            (L"255",pFVar1,0xff,0xff,true,true,L"Parsing uint8 max");
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"-9223372036854775808",0x14,pFVar1,pFVar2,-0x8000000000000000,true,
             L"Parsing int64 lowest");
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->UseClamping = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"-9223372036854775808",0x14,pFVar1,pFVar2,-0x8000000000000000,true,
             L"Parsing int64 lowest");
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->InsideLimits = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"-9223372036854775808",0x14,pFVar1,pFVar2,-0x8000000000000000,true,
             L"Parsing int64 lowest");
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"9223372036854775807",0x13,pFVar1,pFVar2,0x7fffffffffffffff,true,L"Parsing int64 max")
  ;
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->UseClamping = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"9223372036854775807",0x13,pFVar1,pFVar2,0x7fffffffffffffff,true,L"Parsing int64 max")
  ;
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->InsideLimits = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"9223372036854775807",0x13,pFVar1,pFVar2,0x7fffffffffffffff,true,L"Parsing int64 max")
  ;
  FTextNumericParsingTestUtil::DoAllTests<unsigned___int64>
            (L"0",pFVar1,0,0,true,true,L"Parsing uint64 lowest");
  FTextNumericParsingTestUtil::DoAllTests<unsigned___int64>
            (L"18446744073709551615",pFVar1,0xffffffffffffffff,0xffffffffffffffff,true,true,
             L"Parsing uint64 max");
  FTextNumericParsingTestUtil::DoAllTests<signed_char>
            (L"-129",pFVar1,'\x7f',-0x80,true,false,L"Parsing int8 +/-1 lowest");
  FTextNumericParsingTestUtil::DoAllTests<signed_char>
            (L"128",pFVar1,-0x80,'\x7f',true,false,L"Parsing int8 +/-1 max");
  FTextNumericParsingTestUtil::DoAllTests<unsigned_char>
            (L"-1",pFVar1,0xff,'\0',true,false,L"Parsing uint8 +/-1 lowest");
  FTextNumericParsingTestUtil::DoAllTests<unsigned_char>
            (L"256",pFVar1,'\0',0xff,true,false,L"Parsing uint8 +/-1 max");
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"-9223372036854775809",0x14,pFVar1,pFVar2,0x7fffffffffffffff,true,
             L"Parsing int64 +/-1 lowest");
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->UseClamping = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"-9223372036854775809",0x14,pFVar1,pFVar2,-0x8000000000000000,true,
             L"Parsing int64 +/-1 lowest");
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->InsideLimits = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"-9223372036854775809",0x14,pFVar1,pFVar2,0x7fffffffffffffff,false,
             L"Parsing int64 +/-1 lowest");
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"9223372036854775808",0x13,pFVar1,pFVar2,-0x8000000000000000,true,
             L"Parsing +/-1 int64 max");
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->UseClamping = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"9223372036854775808",0x13,pFVar1,pFVar2,0x7fffffffffffffff,true,
             L"Parsing +/-1 int64 max");
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->InsideLimits = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"9223372036854775808",0x13,pFVar1,pFVar2,-0x8000000000000000,false,
             L"Parsing +/-1 int64 max");
  FTextNumericParsingTestUtil::DoAllTests<unsigned___int64>
            (L"-1",pFVar1,0xffffffffffffffff,0,true,false,L"Parsing uint64 +/-1 lowest");
  FTextNumericParsingTestUtil::DoAllTests<unsigned___int64>
            (L"18446744073709551616",pFVar1,0,0xffffffffffffffff,true,false,
             L"Parsing +/-1 uint64 max");
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"-18446744073709551616",0x15,pFVar1,pFVar2,0,true,
             L"Parsing negative overflow int64 max");
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->InsideLimits = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"-18446744073709551616",0x15,pFVar1,pFVar2,0,false,
             L"Parsing negative overflow int64 max");
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions((FNumberParsingOptions *)&local_res8);
  pFVar2->UseGrouping = true;
  pFVar2->UseClamping = true;
  FTextNumericParsingTestUtil::DoTest<__int64>
            (L"-18446744073709551616",0x15,pFVar1,pFVar2,-0x8000000000000000,true,
             L"Parsing negative overflow int64 max");
  return;
}

