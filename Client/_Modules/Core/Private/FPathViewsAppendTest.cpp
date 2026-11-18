// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc7880

EAutomationTestFlags __thiscall FPathViewsAppendTest::GetTestFlags(FPathViewsAppendTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc7890

bool __thiscall FPathViewsAppendTest::IsStressTest(FPathViewsAppendTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc78a0

uint __thiscall FPathViewsAppendTest::GetRequiredDeviceNum(FPathViewsAppendTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc78b0

FString * __thiscall
FPathViewsAppendTest::GetTestSourceFileName
          (FPathViewsAppendTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc78e0

int __thiscall FPathViewsAppendTest::GetTestSourceFileLine(FPathViewsAppendTest *this)

{
  return 0x2a5;
}

// GetTests @ 141cc78f0

/* WARNING: Removing unreachable block (ram,0x000141cc7a6e) */

void __thiscall
FPathViewsAppendTest::GetTests
          (FPathViewsAppendTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc7ae0

bool __thiscall FPathViewsAppendTest::RunTest(FPathViewsAppendTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc7b10

FString * __thiscall
FPathViewsAppendTest::GetBeautifiedTestName
          (FPathViewsAppendTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathViewsAppendTest @ 141ce8ab0

FPathViewsAppendTest * __thiscall
FPathViewsAppendTest::FPathViewsAppendTest(FPathViewsAppendTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPathViewsAppendTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::Append");
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

// TestBody @ 141d36c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPathViewsAppendTest::TestBody(FPathViewsAppendTest *this,FString *param_1)

{
  FAutomationTestFramework *pFVar1;
  undefined1 auStack_278 [32];
  TStringView<wchar_t> local_258;
  TStringView<wchar_t> local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"A",1);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"",0);
  pFVar1 = FAutomationTestFramework::Get();
  local_248.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_258.Size = 2;
  local_248.DataPtr = local_238.Base;
  local_258.DataPtr = L"A/";
  FAutomationTestBase::TestEqual
            (pFVar1->CurrentTest,L"FPathViews::Append(\'A\', \'\')",&local_248,&local_258);
  local_238.CurPos = local_238.Base;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"",0);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"B",1);
  pFVar1 = FAutomationTestFramework::Get();
  local_258.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.Size = 1;
  local_258.DataPtr = local_238.Base;
  local_248.DataPtr = L"B";
  FAutomationTestBase::TestEqual
            (pFVar1->CurrentTest,L"FPathViews::Append(\'\', \'B\')",&local_258,&local_248);
  local_238.CurPos = local_238.Base;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"/",1);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"B",1);
  pFVar1 = FAutomationTestFramework::Get();
  local_258.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.Size = 2;
  local_258.DataPtr = local_238.Base;
  local_248.DataPtr = L"/B";
  FAutomationTestBase::TestEqual
            (pFVar1->CurrentTest,L"FPathViews::Append(\'/\', \'B\')",&local_258,&local_248);
  local_238.CurPos = local_238.Base;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"A",1);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"B",1);
  pFVar1 = FAutomationTestFramework::Get();
  local_258.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.Size = 3;
  local_258.DataPtr = local_238.Base;
  local_248.DataPtr = L"A/B";
  FAutomationTestBase::TestEqual
            (pFVar1->CurrentTest,L"FPathViews::Append(\'A\', \'B\')",&local_258,&local_248);
  local_238.CurPos = local_238.Base;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"A/",2);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"B",1);
  pFVar1 = FAutomationTestFramework::Get();
  local_258.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.Size = 3;
  local_258.DataPtr = local_238.Base;
  local_248.DataPtr = L"A/B";
  FAutomationTestBase::TestEqual
            (pFVar1->CurrentTest,L"FPathViews::Append(\'A/\', \'B\')",&local_258,&local_248);
  local_238.CurPos = local_238.Base;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"A\\",2);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"B",1);
  pFVar1 = FAutomationTestFramework::Get();
  local_258.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.Size = 3;
  local_258.DataPtr = local_238.Base;
  local_248.DataPtr = L"A\\B";
  FAutomationTestBase::TestEqual
            (pFVar1->CurrentTest,L"FPathViews::Append(\'A\\\', \'B\')",&local_258,&local_248);
  local_238.CurPos = local_238.Base;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"A/B",3);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"C/D",3);
  pFVar1 = FAutomationTestFramework::Get();
  local_258.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.Size = 7;
  local_258.DataPtr = local_238.Base;
  local_248.DataPtr = L"A/B/C/D";
  FAutomationTestBase::TestEqual
            (pFVar1->CurrentTest,L"FPathViews::Append(\'A/B\', \'C/D\')",&local_258,&local_248);
  local_238.CurPos = local_238.Base;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"A/",2);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"B",1);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"C/",2);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"D",1);
  pFVar1 = FAutomationTestFramework::Get();
  local_258.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.Size = 7;
  local_258.DataPtr = local_238.Base;
  local_248.DataPtr = L"A/B/C/D";
  FAutomationTestBase::TestEqual
            (pFVar1->CurrentTest,L"FPathViews::Append(\'A/\', \'B\', \'C/\', \'D\')",&local_258,
             &local_248);
  local_238.CurPos = local_238.Base;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"A/",2);
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_238,L"%d");
  if ((((int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) != 0) &&
      (local_238.CurPos[-1] != L'/')) && (local_238.CurPos[-1] != L'\\')) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'/';
    local_238.CurPos = local_238.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"B",1);
  pFVar1 = FAutomationTestFramework::Get();
  local_258.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
  local_248.Size = 6;
  local_258.DataPtr = local_238.Base;
  local_248.DataPtr = L"A/16/B";
  FAutomationTestBase::TestEqual
            (pFVar1->CurrentTest,L"FPathViews::Append(\'A/\', 16, \'B\')",&local_258,&local_248);
  local_238.CurPos = local_238.Base;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return;
}

