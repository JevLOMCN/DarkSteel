// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c60850

EAutomationTestFlags __thiscall TCharTest::GetTestFlags(TCharTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c60860

bool __thiscall TCharTest::IsStressTest(TCharTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c60870

uint __thiscall TCharTest::GetRequiredDeviceNum(TCharTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c60880

FString * __thiscall
TCharTest::GetTestSourceFileName(TCharTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\CharTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c608b0

int __thiscall TCharTest::GetTestSourceFileLine(TCharTest *this)

{
  return 0x22;
}

// GetTests @ 141c608c0

/* WARNING: Removing unreachable block (ram,0x000141c60a3e) */

void __thiscall
TCharTest::GetTests(TCharTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c60a60

bool __thiscall TCharTest::RunTest(TCharTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c60a90

FString * __thiscall
TCharTest::GetBeautifiedTestName(TCharTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// TCharTest @ 141c8eae0

TCharTest * __thiscall TCharTest::TCharTest(TCharTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7TCharTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter][AndroidSkip]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::Char");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter][AndroidSkip]");
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

// TestBody @ 141cb4f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall TCharTest::TestBody(TCharTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  wint_t _C;
  wint_t wVar3;
  int iVar4;
  char *_Str2;
  FAutomationTestFramework *pFVar5;
  size_t sVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int _C_00;
  undefined1 auStack_168 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  _Str2 = setlocale(2,(char *)0x0);
  if (_Str2 == (char *)0x0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_148,L"Locale is null but should be \"C\". Did something call setlocale()?");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar4 = strcmp("C",_Str2);
    if (iVar4 == 0) {
      uVar9 = 0;
      uVar8 = 0;
      do {
        pFVar5 = FAutomationTestFramework::Get();
        cVar7 = (char)uVar8;
        _C_00 = (int)cVar7;
        pFVar1 = pFVar5->CurrentTest;
        iVar4 = tolower(_C_00);
        FAutomationTestBase::TestEqual
                  (pFVar1,L"TChar::ToLower()",(int)(char)((-(_C_00 - 0x41U < 0x1a) & 0x20U) + cVar7)
                   ,iVar4);
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        iVar4 = toupper(_C_00);
        FAutomationTestBase::TestEqual
                  (pFVar1,L"TChar::ToUpper()",(int)(char)(cVar7 - (-(_C_00 - 0x61U < 0x1a) & 0x20U))
                   ,iVar4);
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x80);
      do {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        _C = (wint_t)uVar9;
        wVar3 = towlower(_C);
        FAutomationTestBase::TestEqual
                  (pFVar1,L"TChar::ToLower()",
                   (uint)(ushort)((-(ushort)((uVar9 & 0xffff) - 0x41 < 0x1a) & 0x20) + _C),
                   (uint)wVar3);
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        wVar3 = towupper(_C);
        FAutomationTestBase::TestEqual
                  (pFVar1,L"TChar::ToUpper()",
                   (uint)(ushort)(_C - (-(ushort)((uVar9 & 0xffff) - 0x61 < 0x1a) & 0x20)),
                   (uint)wVar3);
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x10000);
    }
    else {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      local_138._padding_ = 0;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      sVar6 = strlen(_Str2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str2,(int)sVar6,Yes);
      ::FString::PrintfImpl
                (&local_148,L"Locale is \"%s\" but should be \"C\". Did something call setlocale()?"
                );
      (*pcVar2)(pFVar1,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

