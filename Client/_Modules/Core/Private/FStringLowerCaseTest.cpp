// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc1d90

EAutomationTestFlags __thiscall
UE::String::FStringLowerCaseTest::GetTestFlags(FStringLowerCaseTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc1da0

bool __thiscall UE::String::FStringLowerCaseTest::IsStressTest(FStringLowerCaseTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc1db0

uint __thiscall UE::String::FStringLowerCaseTest::GetRequiredDeviceNum(FStringLowerCaseTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc1dc0

FString * __thiscall
UE::String::FStringLowerCaseTest::GetTestSourceFileName
          (FStringLowerCaseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\String\\CaseConversionTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc1df0

int __thiscall UE::String::FStringLowerCaseTest::GetTestSourceFileLine(FStringLowerCaseTest *this)

{
  return 0x34;
}

// GetTests @ 141cc1e10

/* WARNING: Removing unreachable block (ram,0x000141cc1f8e) */

void __thiscall
UE::String::FStringLowerCaseTest::GetTests
          (FStringLowerCaseTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc2010

bool __thiscall
UE::String::FStringLowerCaseTest::RunTest(FStringLowerCaseTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc2040

FString * __thiscall
UE::String::FStringLowerCaseTest::GetBeautifiedTestName
          (FStringLowerCaseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStringLowerCaseTest @ 141ced370

FStringLowerCaseTest * __thiscall
UE::String::FStringLowerCaseTest::FStringLowerCaseTest(FStringLowerCaseTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStringLowerCaseTest_String_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::String::LowerCase");
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

// TestBody @ 141d47910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::String::FStringLowerCaseTest::TestBody(FStringLowerCaseTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  undefined1 auStack_188 [32];
  TStringView<wchar_t> local_168;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [64];
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_168,L"LowerCase with ANSICHAR");
  (*pcVar2)(pFVar1,&local_168,0,0);
  if (local_168.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_168.DataPtr);
  }
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.Size = 0xc;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_168.DataPtr = L"NO LOWERCASE";
  LowerCaseTo((TStringView<char> *)&local_168,(TStringBuilderBase<char> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 0xc) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp("no lowercase",(char *)local_158.Base,0xc),
     iVar3 == 0)) {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
  }
  else {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 10;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_168.DataPtr = L"Mixed CASE";
  LowerCaseTo((TStringView<char> *)&local_168,(TStringBuilderBase<char> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 10) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp("mixed case",(char *)local_158.Base,10), iVar3 == 0)
     ) {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
  }
  else {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 0x11;
  local_158.End = local_b8;
  local_168.DataPtr = L"already lowercase";
  LowerCaseTo((TStringView<char> *)&local_168,(TStringBuilderBase<char> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 0x11) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp("already lowercase",(char *)local_158.Base,0x11),
     iVar3 == 0)) {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
  }
  else {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 0x14;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_168.DataPtr = L"  SPACES   AND\tTABS\n";
  LowerCaseTo((TStringView<char> *)&local_168,(TStringBuilderBase<char> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 0x14) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp
                        ("  spaces   and\ttabs\n",(char *)local_158.Base,0x14), iVar3 == 0)) {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
  }
  else {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"";
  LowerCaseTo((TStringView<char> *)&local_168,(TStringBuilderBase<char> *)&local_158);
  if ((int)local_158.CurPos == (int)local_158.Base) {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
  }
  else {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 1;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_168.DataPtr = L"A";
  LowerCaseTo((TStringView<char> *)&local_168,(TStringBuilderBase<char> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 1) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp("a",(char *)local_158.Base,1), iVar3 == 0)) {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
  }
  else {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.Base = local_138;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 1;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"z";
  LowerCaseTo((TStringView<char> *)&local_168,(TStringBuilderBase<char> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 1) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp("z",(char *)local_158.Base,1), iVar3 == 0)) {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
  }
  else {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 8;
  local_158.End = local_b8;
  local_168.DataPtr = L"1234!@#$";
  LowerCaseTo((TStringView<char> *)&local_168,(TStringBuilderBase<char> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 8) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp("1234!@#$",(char *)local_158.Base,8), iVar3 == 0)) {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
  }
  else {
    TStringBuilderBase<char>::~TStringBuilderBase<char>((TStringBuilderBase<char> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_168,L"LowerCase with WIDECHAR");
  (*pcVar2)(pFVar1,&local_168,0,0);
  if (local_168.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_168.DataPtr);
  }
  local_168.Size = 0xc;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"NO LOWERCASE";
  LowerCaseTo(&local_168,&local_158);
  if (((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1) == 0xc) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"no lowercase",local_158.Base,0xc), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_168.Size = 10;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"Mixed CASE";
  LowerCaseTo(&local_168,&local_158);
  if (((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1) == 10) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"mixed case",local_158.Base,10), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.Base = local_138;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 0x11;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"already lowercase";
  LowerCaseTo(&local_168,&local_158);
  if (((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1) == 0x11) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"already lowercase",local_158.Base,0x11),
     iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 0x14;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_168.DataPtr = L"  SPACES   AND\tTABS\n";
  LowerCaseTo(&local_168,&local_158);
  if (((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1) == 0x14) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"  spaces   and\ttabs\n",local_158.Base,0x14),
     iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"";
  LowerCaseTo(&local_168,&local_158);
  if ((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1) == 0) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_168.Size = 1;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"A";
  LowerCaseTo(&local_168,&local_158);
  if (((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1) == 1) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"a",local_158.Base,1), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.Base = local_138;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 1;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"z";
  LowerCaseTo(&local_168,&local_158);
  if (((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1) == 1) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"z",local_158.Base,1), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.Base = local_138;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 8;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"1234!@#$";
  LowerCaseTo(&local_168,&local_158);
  if (((int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1) == 8) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"1234!@#$",local_158.Base,8), iVar3 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_168,L"LowerCase with UTF8CHAR");
  (*pcVar2)(pFVar1,&local_168,0,0);
  if (local_168.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_168.DataPtr);
  }
  local_168.Size = 0xc;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"NO LOWERCASE";
  LowerCaseTo((TStringView<char8_t> *)&local_168,(TStringBuilderBase<char8_t> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 0xc) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp((uchar *)"no lowercase",(uchar *)local_158.Base,0xc)
     , iVar3 == 0)) {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
  }
  else {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_168.Size = 10;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"Mixed CASE";
  LowerCaseTo((TStringView<char8_t> *)&local_168,(TStringBuilderBase<char8_t> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 10) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp((uchar *)"mixed case",(uchar *)local_158.Base,10),
     iVar3 == 0)) {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
  }
  else {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.Base = local_138;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 0x11;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"already lowercase";
  LowerCaseTo((TStringView<char8_t> *)&local_168,(TStringBuilderBase<char8_t> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 0x11) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp
                        ((uchar *)"already lowercase",(uchar *)local_158.Base,0x11), iVar3 == 0)) {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
  }
  else {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 0x14;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_168.DataPtr = L"  SPACES   AND\tTABS\n";
  LowerCaseTo((TStringView<char8_t> *)&local_168,(TStringBuilderBase<char8_t> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 0x14) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp
                        ((uchar *)"  spaces   and\ttabs\n",(uchar *)local_158.Base,0x14), iVar3 == 0
     )) {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
  }
  else {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"";
  LowerCaseTo((TStringView<char8_t> *)&local_168,(TStringBuilderBase<char8_t> *)&local_158);
  if ((int)local_158.CurPos == (int)local_158.Base) {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
  }
  else {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_168.Size = 1;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"A";
  LowerCaseTo((TStringView<char8_t> *)&local_168,(TStringBuilderBase<char8_t> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 1) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp("a",(uchar *)local_158.Base,1), iVar3 == 0)) {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
  }
  else {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.Base = local_138;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 1;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"z";
  LowerCaseTo((TStringView<char8_t> *)&local_168,(TStringBuilderBase<char8_t> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 1) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp((uchar *)"z",(uchar *)local_158.Base,1), iVar3 == 0)
     ) {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
  }
  else {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  local_158.Base = local_138;
  local_168._12_4_ = local_168._12_4_;
  local_168.Size = 8;
  local_158.CurPos = local_138;
  local_158.End = local_b8;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_168.DataPtr = L"1234!@#$";
  LowerCaseTo((TStringView<char8_t> *)&local_168,(TStringBuilderBase<char8_t> *)&local_158);
  if (((int)local_158.CurPos - (int)local_158.Base == 8) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp((uchar *)"1234!@#$",(uchar *)local_158.Base,8),
     iVar3 == 0)) {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
  }
  else {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_158);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_168,L"Condition failed");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_168.DataPtr);
    }
  }
  return;
}

