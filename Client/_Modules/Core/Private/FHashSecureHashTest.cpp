// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbeab0

EAutomationTestFlags __thiscall FHashSecureHashTest::GetTestFlags(FHashSecureHashTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbeac0

bool __thiscall FHashSecureHashTest::IsStressTest(FHashSecureHashTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbead0

uint __thiscall FHashSecureHashTest::GetRequiredDeviceNum(FHashSecureHashTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbeae0

FString * __thiscall
FHashSecureHashTest::GetTestSourceFileName
          (FHashSecureHashTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\SecureHashTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbeb10

int __thiscall FHashSecureHashTest::GetTestSourceFileLine(FHashSecureHashTest *this)

{
  return 0x10;
}

// GetTests @ 141cbeb20

/* WARNING: Removing unreachable block (ram,0x000141cbec9e) */

void __thiscall
FHashSecureHashTest::GetTests
          (FHashSecureHashTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbecc0

bool __thiscall FHashSecureHashTest::RunTest(FHashSecureHashTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbecf0

FString * __thiscall
FHashSecureHashTest::GetBeautifiedTestName
          (FHashSecureHashTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FHashSecureHashTest @ 141ce74f0

FHashSecureHashTest * __thiscall
FHashSecureHashTest::FHashSecureHashTest(FHashSecureHashTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FHashSecureHashTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][SHA1][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Hash::SecureHash");
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
  ::FString::FString(&local_18,"[Core][SHA1][SmokeFilter]");
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

// TestBody @ 141d20bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FHashSecureHashTest::TestBody(FHashSecureHashTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  size_t sVar7;
  int iVar8;
  FSHA1TestCase *pFVar9;
  TStringView<char> *pTVar10;
  bool bVar11;
  undefined1 auStackY_2e8 [32];
  FString local_2b8;
  TArrayView<unsigned_char_const_,int> local_2a8;
  uchar *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  TArrayView<unsigned_char_const_,int> local_288;
  undefined4 local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [40];
  TArrayView<unsigned_char_const_,int> local_1f8;
  undefined4 local_1e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1d8;
  FSHA1 local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_2b8,L"Examples");
  (*pcVar2)(pFVar1,&local_2b8,0,0);
  if ((TArrayView<unsigned_char_const_,int> *)local_2b8.Data.AllocatorInstance.Data !=
      (TArrayView<unsigned_char_const_,int> *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  pFVar9 = TestCases;
  do {
    FSHA1::FSHA1(&local_b8);
    FSHA1::Update(&local_b8,(uchar *)(pFVar9->Input).DataPtr,(longlong)(pFVar9->Input).Size);
    local_268.Base = local_248;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.CurPos = local_248;
    local_268.End = (wchar_t *)&local_1f8;
    FSHA1::Final(&local_b8);
    local_288.DataPtr = (uchar *)0x0;
    local_288.ArrayNum = 0;
    local_288._12_4_ = 0;
    local_278 = 0;
    FSHA1::GetHash(&local_b8,(uchar *)&local_288);
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_288;
    local_2b8.Data.ArrayNum = 0x14;
    local_2a8.ArrayNum = 0x14;
    local_2a8._12_4_ = local_2b8.Data.ArrayMax;
    local_2a8.DataPtr = (uchar *)local_2b8.Data.AllocatorInstance.Data;
    UE::String::BytesToHex(&local_2a8,&local_268);
    pcVar3 = (pFVar9->Hash).DataPtr;
    local_1d8._padding_ = 0;
    if (pcVar3 == (char *)0x0) {
      local_1d8.StringLength = 0;
      local_1d8.Ptr = (wchar_t *)0x0;
    }
    else {
      sVar7 = strlen(pcVar3);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_1d8,pcVar3,(int)sVar7,Yes);
    }
    iVar4 = local_1d8.StringLength;
    iVar8 = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
    if (((iVar8 != local_1d8.StringLength) ||
        (((iVar8 != 0 && (local_1d8.StringLength != 0)) &&
         (iVar5 = FGenericPlatformStricmp::Strnicmp
                            (local_268.Base,local_1d8.Ptr,(longlong)local_1d8.StringLength),
         iVar5 != 0)))) || (bVar11 = false, iVar8 != iVar4)) {
      bVar11 = true;
    }
    if ((void *)local_1d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1d8._padding_);
    }
    if (bVar11) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_2a8,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_2a8,0);
      if ((TArrayView<unsigned_char_const_,int> *)local_2a8.DataPtr !=
          (TArrayView<unsigned_char_const_,int> *)0x0) {
        FMemory::Free(local_2a8.DataPtr);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
      FSHA1::~FSHA1(&local_b8);
      return;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    FSHA1::~FSHA1(&local_b8);
    pFVar9 = pFVar9 + 1;
  } while (pFVar9 != (FSHA1TestCase *)"a9993e364706816aba3e25717850c26c9cd0d89d");
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_2b8,L"Validation");
  (*pcVar2)(pFVar1,&local_2b8,0,0);
  if ((TArrayView<unsigned_char_const_,int> *)local_2b8.Data.AllocatorInstance.Data !=
      (TArrayView<unsigned_char_const_,int> *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  pTVar10 = &TestCases[0].Input;
  while( true ) {
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = 0;
    local_2b8.Data.ArrayMax = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,pTVar10->Size / 2,(ForAnyElementType *)&local_2b8,&local_2b8.Data.ArrayNum,
               &local_2b8.Data.ArrayMax);
    local_298 = (uchar *)pTVar10->DataPtr;
    iStack_290 = (int)*(undefined8 *)&pTVar10->Size;
    local_288._12_4_ = uStack_28c;
    local_288.ArrayNum = iStack_290;
    local_288.DataPtr = local_298;
    UE::String::HexToBytes
              ((TStringView<char8_t> *)&local_288,(uchar *)local_2b8.Data.AllocatorInstance.Data);
    local_1f8.DataPtr = (uchar *)0x0;
    local_1f8.ArrayNum = 0;
    local_1f8._12_4_ = 0;
    local_1e8 = 0;
    FSHA1::HashBuffer(local_2b8.Data.AllocatorInstance.Data,(longlong)local_2b8.Data.ArrayNum,
                      (uchar *)&local_1f8);
    local_268.Base = local_248;
    local_2a8.ArrayNum = 0x14;
    local_268.CurPos = local_248;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.End = (wchar_t *)&local_1f8;
    local_2a8.DataPtr = (uchar *)&local_1f8;
    local_288.ArrayNum = 0x14;
    local_288._12_4_ = local_2a8._12_4_;
    local_288.DataPtr = local_2a8.DataPtr;
    UE::String::BytesToHex(&local_288,&local_268);
    pcVar3 = (((FSHA1TestCase *)(pTVar10 + -1))->Hash).DataPtr;
    local_1d8._padding_ = 0;
    if (pcVar3 == (char *)0x0) {
      local_1d8.StringLength = 0;
      local_1d8.Ptr = (wchar_t *)0x0;
    }
    else {
      sVar7 = strlen(pcVar3);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_1d8,pcVar3,(int)sVar7,Yes);
    }
    iVar4 = local_1d8.StringLength;
    iVar8 = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
    if (((iVar8 != local_1d8.StringLength) ||
        (((iVar8 != 0 && (local_1d8.StringLength != 0)) &&
         (iVar5 = FGenericPlatformStricmp::Strnicmp
                            (local_268.Base,local_1d8.Ptr,(longlong)local_1d8.StringLength),
         iVar5 != 0)))) || (bVar11 = false, iVar8 != iVar4)) {
      bVar11 = true;
    }
    if ((void *)local_1d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1d8._padding_);
    }
    if (bVar11) break;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    bVar11 = pTVar10 == &TestCases[0x45].Input;
    pTVar10 = pTVar10 + 2;
    if (bVar11) {
      return;
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString((FString *)&local_2a8,L"Required condition failed, interrupting test");
  (*pcVar2)(pFVar1,&local_2a8,0);
  if ((TArrayView<unsigned_char_const_,int> *)local_2a8.DataPtr !=
      (TArrayView<unsigned_char_const_,int> *)0x0) {
    FMemory::Free(local_2a8.DataPtr);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  if (local_2b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  return;
}

