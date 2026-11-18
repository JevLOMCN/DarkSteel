// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc2b00

EAutomationTestFlags __thiscall
UE::String::FStringPascalCaseTest::GetTestFlags(FStringPascalCaseTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc2b10

bool __thiscall UE::String::FStringPascalCaseTest::IsStressTest(FStringPascalCaseTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc2b30

uint __thiscall UE::String::FStringPascalCaseTest::GetRequiredDeviceNum(FStringPascalCaseTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc2b50

FString * __thiscall
UE::String::FStringPascalCaseTest::GetTestSourceFileName
          (FStringPascalCaseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\String\\CaseConversionTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc2b90

int __thiscall UE::String::FStringPascalCaseTest::GetTestSourceFileLine(FStringPascalCaseTest *this)

{
  return 0x5b;
}

// GetTests @ 141cc2c30

/* WARNING: Removing unreachable block (ram,0x000141cc2dae) */

void __thiscall
UE::String::FStringPascalCaseTest::GetTests
          (FStringPascalCaseTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 141cc2f70

bool __thiscall
UE::String::FStringPascalCaseTest::RunTest(FStringPascalCaseTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc2fa0

FString * __thiscall
UE::String::FStringPascalCaseTest::GetBeautifiedTestName
          (FStringPascalCaseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStringPascalCaseTest @ 141ced540

FStringPascalCaseTest * __thiscall
UE::String::FStringPascalCaseTest::FStringPascalCaseTest
          (FStringPascalCaseTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStringPascalCaseTest_String_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::String::PascalCase");
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
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 141d48df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::String::FStringPascalCaseTest::TestBody(FStringPascalCaseTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  undefined1 auStack_168 [32];
  TStringView<wchar_t> local_148;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_168;
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_148,L"PascalCase with WIDECHAR");
  (*pcVar2)(pFVar1,&local_148,0,0);
  if (local_148.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_148.DataPtr);
  }
  local_148.Size = 0xd;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_148.DataPtr = L"NO PASCALCASE";
  PascalCaseTo(&local_148,&local_138);
  if (((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) == 0xc) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"NoPascalcase",local_138.Base,0xc), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,L"Condition failed");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
  }
  local_148.Size = 10;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_148.DataPtr = L"Mixed CASE";
  PascalCaseTo(&local_148,&local_138);
  if (((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) == 9) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"MixedCase",local_138.Base,9), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,L"Condition failed");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
  }
  local_148.Size = 0xf;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_148.DataPtr = L"lowercase words";
  PascalCaseTo(&local_148,&local_138);
  if (((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) == 0xe) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"LowercaseWords",local_138.Base,0xe), iVar3 == 0))
  {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,L"Condition failed");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
  }
  local_148.Size = 0x14;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_148.DataPtr = L"  SPACES   AND\tTABS\n";
  PascalCaseTo(&local_148,&local_138);
  if (((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) == 0xe) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"SpacesAndTabs\n",local_138.Base,0xe), iVar3 == 0))
  {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,L"Condition failed");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
  }
  local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_148.DataPtr = L"";
  PascalCaseTo(&local_148,&local_138);
  if ((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) == 0) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,L"Condition failed");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
  }
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_148._12_4_ = local_148._12_4_;
  local_148.Size = 1;
  local_138.End = (wchar_t *)local_18;
  local_148.DataPtr = L"A";
  PascalCaseTo(&local_148,&local_138);
  if (((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) == 1) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"A",local_138.Base,1), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,L"Condition failed");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
  }
  local_148.Size = 1;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_148.DataPtr = L"z";
  PascalCaseTo(&local_148,&local_138);
  if (((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) == 1) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"Z",local_138.Base,1), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,L"Condition failed");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
  }
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_148._12_4_ = local_148._12_4_;
  local_148.Size = 8;
  local_138.End = (wchar_t *)local_18;
  local_148.DataPtr = L"1234!@#$";
  PascalCaseTo(&local_148,&local_138);
  if (((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) == 8) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"1234!@#$",local_138.Base,8), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,L"Condition failed");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
  }
  local_148.Size = 0xb;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_148.DataPtr = L"You\'re Text";
  PascalCaseTo(&local_148,&local_138);
  if (((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) == 9) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"YoureText",local_138.Base,9), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,L"Condition failed");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_148.DataPtr);
    }
  }
  return;
}

