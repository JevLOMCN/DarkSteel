// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 22

// DoAllTests<signed_char> @ 141bd2e70

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<signed_char>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,schar param_3,schar param_4,
          bool param_5,bool param_6,wchar_t *param_7)

{
  size_t sVar1;
  FNumberParsingOptions *pFVar2;
  FNumberParsingOptions local_28 [5];
  
  sVar1 = wcslen(param_1);
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  DoTest<signed_char>(param_1,(int)sVar1,param_2,pFVar2,param_3,param_5,param_7);
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar2->UseGrouping = true;
  pFVar2->UseClamping = true;
  sVar1 = wcslen(param_1);
  DoTest<signed_char>(param_1,(int)sVar1,param_2,pFVar2,param_4,param_5,param_7);
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar2->UseGrouping = true;
  pFVar2->InsideLimits = true;
  sVar1 = wcslen(param_1);
  DoTest<signed_char>(param_1,(int)sVar1,param_2,pFVar2,param_3,param_6,param_7);
  return;
}

// DoAllTests<unsigned_char> @ 141bd2f80

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned_char>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,uchar param_3,uchar param_4,
          bool param_5,bool param_6,wchar_t *param_7)

{
  size_t sVar1;
  FNumberParsingOptions *pFVar2;
  FNumberParsingOptions local_28 [5];
  
  sVar1 = wcslen(param_1);
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  DoTest<unsigned_char>(param_1,(int)sVar1,param_2,pFVar2,param_3,param_5,param_7);
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar2->UseGrouping = true;
  pFVar2->UseClamping = true;
  sVar1 = wcslen(param_1);
  DoTest<unsigned_char>(param_1,(int)sVar1,param_2,pFVar2,param_4,param_5,param_7);
  pFVar2 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar2->UseGrouping = true;
  pFVar2->InsideLimits = true;
  sVar1 = wcslen(param_1);
  DoTest<unsigned_char>(param_1,(int)sVar1,param_2,pFVar2,param_3,param_6,param_7);
  return;
}

// DoAllTests<int> @ 141bd3090

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<int>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,int param_3,int param_4,
          bool param_5,bool param_6,wchar_t *param_7)

{
  FNumberParsingOptions *pFVar1;
  size_t sVar2;
  FNumberParsingOptions local_28 [5];
  
  DoGroupingTest<int>(param_1,param_2,param_3,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar1->UseGrouping = true;
  pFVar1->UseClamping = true;
  sVar2 = wcslen(param_1);
  DoTest<int>(param_1,(int)sVar2,param_2,pFVar1,param_4,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar1->UseGrouping = true;
  pFVar1->InsideLimits = true;
  sVar2 = wcslen(param_1);
  DoTest<int>(param_1,(int)sVar2,param_2,pFVar1,param_3,param_6,param_7);
  return;
}

// DoAllTests<unsigned_int> @ 141bd3180

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned_int>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,uint param_3,uint param_4,
          bool param_5,bool param_6,wchar_t *param_7)

{
  FNumberParsingOptions *pFVar1;
  size_t sVar2;
  FNumberParsingOptions local_28 [5];
  
  DoGroupingTest<unsigned_int>(param_1,param_2,param_3,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar1->UseGrouping = true;
  pFVar1->UseClamping = true;
  sVar2 = wcslen(param_1);
  DoTest<unsigned_int>(param_1,(int)sVar2,param_2,pFVar1,param_4,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar1->UseGrouping = true;
  pFVar1->InsideLimits = true;
  sVar2 = wcslen(param_1);
  DoTest<unsigned_int>(param_1,(int)sVar2,param_2,pFVar1,param_3,param_6,param_7);
  return;
}

// DoAllTests<float> @ 141bd3270

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<float>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,float param_3,float param_4,
          bool param_5,bool param_6,wchar_t *param_7)

{
  FNumberParsingOptions *pFVar1;
  size_t sVar2;
  FNumberParsingOptions local_38 [16];
  
  DoGroupingTest<float>(param_1,param_2,param_3,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_38);
  pFVar1->UseGrouping = true;
  pFVar1->UseClamping = true;
  sVar2 = wcslen(param_1);
  DoTest<float>(param_1,(int)sVar2,param_2,pFVar1,param_4,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_38);
  pFVar1->UseGrouping = true;
  pFVar1->InsideLimits = true;
  sVar2 = wcslen(param_1);
  DoTest<float>(param_1,(int)sVar2,param_2,pFVar1,param_3,param_6,param_7);
  return;
}

// DoAllTests<double> @ 141bd3370

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<double>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,double param_3,double param_4,
          bool param_5,bool param_6,wchar_t *param_7)

{
  FNumberParsingOptions *pFVar1;
  size_t sVar2;
  FNumberParsingOptions local_38 [16];
  
  DoGroupingTest<double>(param_1,param_2,param_3,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_38);
  pFVar1->UseGrouping = true;
  pFVar1->UseClamping = true;
  sVar2 = wcslen(param_1);
  DoTest<double>(param_1,(int)sVar2,param_2,pFVar1,param_4,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_38);
  pFVar1->UseGrouping = true;
  pFVar1->InsideLimits = true;
  sVar2 = wcslen(param_1);
  DoTest<double>(param_1,(int)sVar2,param_2,pFVar1,param_3,param_6,param_7);
  return;
}

// DoAllTests<unsigned___int64> @ 141bd3470

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoAllTests<unsigned___int64>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,ulong64 param_3,ulong64 param_4,
          bool param_5,bool param_6,wchar_t *param_7)

{
  FNumberParsingOptions *pFVar1;
  size_t sVar2;
  FNumberParsingOptions local_28 [5];
  
  DoGroupingTest<unsigned___int64>(param_1,param_2,param_3,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar1->UseGrouping = true;
  pFVar1->UseClamping = true;
  sVar2 = wcslen(param_1);
  DoTest<unsigned___int64>(param_1,(int)sVar2,param_2,pFVar1,param_4,param_5,param_7);
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_28);
  pFVar1->UseGrouping = true;
  pFVar1->InsideLimits = true;
  sVar2 = wcslen(param_1);
  DoTest<unsigned___int64>(param_1,(int)sVar2,param_2,pFVar1,param_3,param_6,param_7);
  return;
}

// DoClampTest<__int64> @ 141bd3560

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoClampTest<__int64>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,long64 param_3,bool param_4,
          wchar_t *param_5)

{
  FNumberParsingOptions *pFVar1;
  size_t sVar2;
  FNumberParsingOptions local_18 [5];
  
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_18);
  pFVar1->UseGrouping = true;
  pFVar1->UseClamping = true;
  sVar2 = wcslen(param_1);
  DoTest<__int64>(param_1,(int)sVar2,param_2,pFVar1,param_3,param_4,param_5);
  return;
}

// DoGroupingTest<int> @ 141bd35f0

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoGroupingTest<int>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,int param_3,bool param_4,
          wchar_t *param_5)

{
  size_t sVar1;
  FNumberParsingOptions *pFVar2;
  
  sVar1 = wcslen(param_1);
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  DoTest<int>(param_1,(int)sVar1,param_2,pFVar2,param_3,param_4,param_5);
  return;
}

// DoGroupingTest<unsigned_int> @ 141bd3670

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoGroupingTest<unsigned_int>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,uint param_3,bool param_4,
          wchar_t *param_5)

{
  size_t sVar1;
  FNumberParsingOptions *pFVar2;
  
  sVar1 = wcslen(param_1);
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  DoTest<unsigned_int>(param_1,(int)sVar1,param_2,pFVar2,param_3,param_4,param_5);
  return;
}

// DoGroupingTest<float> @ 141bd36f0

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoGroupingTest<float>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,float param_3,bool param_4,
          wchar_t *param_5)

{
  size_t sVar1;
  FNumberParsingOptions *pFVar2;
  
  sVar1 = wcslen(param_1);
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  DoTest<float>(param_1,(int)sVar1,param_2,pFVar2,param_3,param_4,param_5);
  return;
}

// DoGroupingTest<double> @ 141bd3770

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoGroupingTest<double>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,double param_3,bool param_4,
          wchar_t *param_5)

{
  size_t sVar1;
  FNumberParsingOptions *pFVar2;
  
  sVar1 = wcslen(param_1);
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  DoTest<double>(param_1,(int)sVar1,param_2,pFVar2,param_3,param_4,param_5);
  return;
}

// DoGroupingTest<unsigned___int64> @ 141bd37f0

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoGroupingTest<unsigned___int64>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,ulong64 param_3,bool param_4,
          wchar_t *param_5)

{
  size_t sVar1;
  FNumberParsingOptions *pFVar2;
  
  sVar1 = wcslen(param_1);
  pFVar2 = FNumberParsingOptions::DefaultWithGrouping();
  DoTest<unsigned___int64>(param_1,(int)sVar1,param_2,pFVar2,param_3,param_4,param_5);
  return;
}

// DoLimitsTest<__int64> @ 141bd8e90

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoLimitsTest<__int64>
          (wchar_t *param_1,FDecimalNumberFormattingRules *param_2,long64 param_3,bool param_4,
          wchar_t *param_5)

{
  FNumberParsingOptions *pFVar1;
  size_t sVar2;
  FNumberParsingOptions local_18 [5];
  
  pFVar1 = FNumberParsingOptions::FNumberParsingOptions(local_18);
  pFVar1->UseGrouping = true;
  pFVar1->InsideLimits = true;
  sVar2 = wcslen(param_1);
  DoTest<__int64>(param_1,(int)sVar2,param_2,pFVar1,param_3,param_4,param_5);
  return;
}

// DoTest<signed_char> @ 141bd8f20

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<signed_char>
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,schar param_5,bool param_6,wchar_t *param_7)

{
  bool bVar1;
  FAutomationTestFramework *pFVar2;
  char cVar3;
  code *pcVar4;
  FAutomationTestBase *pFVar5;
  bool local_38 [8];
  FString local_30;
  FDecimalNumberIntegralLimits local_20;
  
  local_20.NumericLimitLowest = -0x80;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.NumericLimitMax = 0x7f;
  local_38[0] = false;
  local_20.bIsNumericSigned = true;
  bVar1 = FastDecimalFormat::Internal::StringToIntegral
                    (param_1,param_2,param_3,param_4,&local_20,local_38,(ulong64 *)&local_30,
                     (int *)0x0);
  cVar3 = '\x01';
  if (local_38[0] != false) {
    cVar3 = -1;
  }
  if (bVar1 == param_6) {
    if (!bVar1) {
      return;
    }
    if ((char)(cVar3 * (char)local_30.Data.AllocatorInstance.Data) == param_5) {
      return;
    }
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar4 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s.");
  }
  else {
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar4 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
  }
  (*pcVar4)(pFVar5,&local_30,0);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// DoTest<unsigned_char> @ 141bd90b0

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<unsigned_char>
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,uchar param_5,bool param_6,wchar_t *param_7)

{
  bool bVar1;
  FAutomationTestFramework *pFVar2;
  char cVar3;
  code *pcVar4;
  FAutomationTestBase *pFVar5;
  bool local_38 [8];
  FString local_30;
  FDecimalNumberIntegralLimits local_20;
  
  local_38[0] = false;
  local_20.NumericLimitLowest = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.NumericLimitMax = 0xff;
  local_20.bIsNumericSigned = false;
  bVar1 = FastDecimalFormat::Internal::StringToIntegral
                    (param_1,param_2,param_3,param_4,&local_20,local_38,(ulong64 *)&local_30,
                     (int *)0x0);
  cVar3 = '\x01';
  if (local_38[0] != false) {
    cVar3 = -1;
  }
  if (bVar1 == param_6) {
    if (!bVar1) {
      return;
    }
    if ((uchar)(cVar3 * (char)local_30.Data.AllocatorInstance.Data) == param_5) {
      return;
    }
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar4 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s.");
  }
  else {
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar4 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
  }
  (*pcVar4)(pFVar5,&local_30,0);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// DoTest<int> @ 141bd9230

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<int>
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,int param_5,bool param_6,wchar_t *param_7)

{
  bool bVar1;
  FAutomationTestFramework *pFVar2;
  code *pcVar3;
  int iVar4;
  FAutomationTestBase *pFVar5;
  bool local_38 [8];
  FString local_30;
  FDecimalNumberIntegralLimits local_20;
  
  local_20.NumericLimitLowest = -0x80000000;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.NumericLimitMax = 0x7fffffff;
  local_38[0] = false;
  local_20.bIsNumericSigned = true;
  bVar1 = FastDecimalFormat::Internal::StringToIntegral
                    (param_1,param_2,param_3,param_4,&local_20,local_38,(ulong64 *)&local_30,
                     (int *)0x0);
  iVar4 = 1;
  if (local_38[0] != false) {
    iVar4 = -1;
  }
  if (bVar1 == param_6) {
    if (!bVar1) {
      return;
    }
    if (iVar4 * (int)local_30.Data.AllocatorInstance.Data == param_5) {
      return;
    }
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar3 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s.");
  }
  else {
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar3 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
  }
  (*pcVar3)(pFVar5,&local_30,0);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// DoTest<unsigned_int> @ 141bd93b0

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<unsigned_int>
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,uint param_5,bool param_6,wchar_t *param_7)

{
  bool bVar1;
  FAutomationTestFramework *pFVar2;
  code *pcVar3;
  int iVar4;
  FAutomationTestBase *pFVar5;
  bool local_38 [8];
  FString local_30;
  FDecimalNumberIntegralLimits local_20;
  
  local_38[0] = false;
  local_20.NumericLimitLowest = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.NumericLimitMax = 0xffffffff;
  local_20.bIsNumericSigned = false;
  bVar1 = FastDecimalFormat::Internal::StringToIntegral
                    (param_1,param_2,param_3,param_4,&local_20,local_38,(ulong64 *)&local_30,
                     (int *)0x0);
  iVar4 = 1;
  if (local_38[0] != false) {
    iVar4 = -1;
  }
  if (bVar1 == param_6) {
    if (!bVar1) {
      return;
    }
    if (iVar4 * (int)local_30.Data.AllocatorInstance.Data == param_5) {
      return;
    }
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar3 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s.");
  }
  else {
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar3 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
  }
  (*pcVar3)(pFVar5,&local_30,0);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// DoTest<float> @ 141bd9530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<float>
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,float param_5,bool param_6,wchar_t *param_7)

{
  bool bVar1;
  FAutomationTestFramework *pFVar2;
  code *pcVar3;
  FAutomationTestBase *pFVar4;
  FString local_38;
  FDecimalNumberFractionalLimits local_28 [2];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28[0].NumericLimitLowest = ___xmm_47efffffe0000000c7efffffe0000000;
  local_28[0].NumericLimitMax = _UNK_150744188;
  bVar1 = FastDecimalFormat::Internal::StringToFractional
                    (param_1,param_2,param_3,param_4,local_28,(double *)&local_38,(int *)0x0);
  if (bVar1 == param_6) {
    if (!bVar1) {
      return;
    }
    if ((float)(double)local_38.Data.AllocatorInstance.Data == param_5) {
      return;
    }
    pFVar2 = FAutomationTestFramework::Get();
    pFVar4 = pFVar2->CurrentTest;
    pcVar3 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_38,
               L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s.");
  }
  else {
    pFVar2 = FAutomationTestFramework::Get();
    pFVar4 = pFVar2->CurrentTest;
    pcVar3 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_38,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
  }
  (*pcVar3)(pFVar4,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// DoTest<double> @ 141bd9690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<double>
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,double param_5,bool param_6,wchar_t *param_7)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  FString local_38;
  FDecimalNumberFractionalLimits local_28 [2];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28[0].NumericLimitLowest = ___xmm_7fefffffffffffffffefffffffffffff;
  local_28[0].NumericLimitMax = _UNK_1506896f8;
  bVar3 = FastDecimalFormat::Internal::StringToFractional
                    (param_1,param_2,param_3,param_4,local_28,(double *)&local_38,(int *)0x0);
  if (bVar3 == param_6) {
    if ((bVar3) && ((double)local_38.Data.AllocatorInstance.Data != param_5)) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_38,
                 L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s."
                );
      (*pcVar2)(pFVar1,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_38,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DoTest<__int64> @ 141bd9810

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<__int64>
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,long64 param_5,bool param_6,wchar_t *param_7)

{
  bool bVar1;
  FAutomationTestFramework *pFVar2;
  code *pcVar3;
  longlong lVar4;
  FAutomationTestBase *pFVar5;
  bool local_38 [8];
  FString local_30;
  FDecimalNumberIntegralLimits local_20;
  
  local_38[0] = false;
  local_20.NumericLimitLowest = -0x8000000000000000;
  local_20.NumericLimitMax = 0x7fffffffffffffff;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.bIsNumericSigned = true;
  bVar1 = FastDecimalFormat::Internal::StringToIntegral
                    (param_1,param_2,param_3,param_4,&local_20,local_38,(ulong64 *)&local_30,
                     (int *)0x0);
  lVar4 = 1;
  if (local_38[0] != false) {
    lVar4 = -1;
  }
  if (bVar1 == param_6) {
    if (!bVar1) {
      return;
    }
    if (lVar4 * (longlong)local_30.Data.AllocatorInstance.Data - param_5 == 0) {
      return;
    }
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar3 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s.");
  }
  else {
    pFVar2 = FAutomationTestFramework::Get();
    pFVar5 = pFVar2->CurrentTest;
    pcVar3 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
  }
  (*pcVar3)(pFVar5,&local_30,0);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// DoTest<unsigned___int64> @ 141bd99b0

void __cdecl
FTextNumericParsingTestClass::FTextNumericParsingTestUtil::DoTest<unsigned___int64>
          (wchar_t *param_1,int param_2,FDecimalNumberFormattingRules *param_3,
          FNumberParsingOptions *param_4,ulong64 param_5,bool param_6,wchar_t *param_7)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  longlong lVar5;
  bool local_38 [8];
  FString local_30;
  FDecimalNumberIntegralLimits local_20;
  
  local_38[0] = false;
  local_20.NumericLimitLowest = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.NumericLimitMax = 0xffffffffffffffff;
  local_20.bIsNumericSigned = false;
  bVar3 = FastDecimalFormat::Internal::StringToIntegral
                    (param_1,param_2,param_3,param_4,&local_20,local_38,(ulong64 *)&local_30,
                     (int *)0x0);
  lVar5 = 1;
  if (local_38[0] != false) {
    lVar5 = -1;
  }
  if (bVar3 == param_6) {
    if (!bVar3) {
      return;
    }
    if (lVar5 * (longlong)local_30.Data.AllocatorInstance.Data - param_5 == 0) {
      return;
    }
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected value \'%f\' - result \'%f\'. %s.");
    (*pcVar2)(pFVar1,&local_30,0);
  }
  else {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_30,
               L"Text parsing failure: source \'%s\' - expected to parse \'%s\' - result \'%s\'. %s."
              );
    (*pcVar2)(pFVar1,&local_30,0);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

