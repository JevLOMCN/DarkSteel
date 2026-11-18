// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bce460

EAutomationTestFlags __thiscall FStringViewEqualityTest::GetTestFlags(FStringViewEqualityTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bce470

bool __thiscall FStringViewEqualityTest::IsStressTest(FStringViewEqualityTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bce480

uint __thiscall FStringViewEqualityTest::GetRequiredDeviceNum(FStringViewEqualityTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bce490

FString * __thiscall
FStringViewEqualityTest::GetTestSourceFileName
          (FStringViewEqualityTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\StringViewTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bce4c0

int __thiscall FStringViewEqualityTest::GetTestSourceFileLine(FStringViewEqualityTest *this)

{
  return 0xad;
}

// GetTests @ 141bce4d0

/* WARNING: Removing unreachable block (ram,0x000141bce64e) */

void __thiscall
FStringViewEqualityTest::GetTests
          (FStringViewEqualityTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bce670

bool __thiscall FStringViewEqualityTest::RunTest(FStringViewEqualityTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bce6a0

FString * __thiscall
FStringViewEqualityTest::GetBeautifiedTestName
          (FStringViewEqualityTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStringViewEqualityTest @ 141be75e0

FStringViewEqualityTest * __thiscall
FStringViewEqualityTest::FStringViewEqualityTest(FStringViewEqualityTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStringViewEqualityTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::String::StringView::Equality");
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

// TestBody @ 141c359e0

/* WARNING: Removing unreachable block (ram,0x000141c36b5e) */
/* WARNING: Removing unreachable block (ram,0x000141c36a5b) */
/* WARNING: Removing unreachable block (ram,0x000141c363df) */
/* WARNING: Removing unreachable block (ram,0x000141c362e1) */
/* WARNING: Removing unreachable block (ram,0x000141c3625d) */
/* WARNING: Removing unreachable block (ram,0x000141c3635e) */
/* WARNING: Removing unreachable block (ram,0x000141c3645e) */
/* WARNING: Removing unreachable block (ram,0x000141c36ada) */
/* WARNING: Removing unreachable block (ram,0x000141c36bdd) */
/* WARNING: Removing unreachable block (ram,0x000141c36c61) */

void __thiscall FStringViewEqualityTest::TestBody(FStringViewEqualityTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  FAutomationTestFramework *pFVar8;
  TStringView<wchar_t> local_848;
  TStringView<wchar_t> local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FScriptContainerElement *local_638;
  int iStack_630;
  undefined4 uStack_62c;
  FString local_628;
  FScriptContainerElement *local_618;
  int iStack_610;
  undefined4 uStack_60c;
  FString local_608;
  FScriptContainerElement *local_5f8;
  int iStack_5f0;
  undefined4 uStack_5ec;
  FString local_5e8;
  FScriptContainerElement *local_5d8;
  int iStack_5d0;
  undefined4 uStack_5cc;
  FString local_5c8;
  FScriptContainerElement *local_5b8;
  int iStack_5b0;
  undefined4 uStack_5ac;
  FString local_5a8;
  FScriptContainerElement *local_598;
  int iStack_590;
  undefined4 uStack_58c;
  FString local_588;
  FScriptContainerElement *local_578;
  int iStack_570;
  undefined4 uStack_56c;
  FString local_568;
  FScriptContainerElement *local_558;
  int iStack_550;
  undefined4 uStack_54c;
  FString local_548;
  FScriptContainerElement *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  FString local_528;
  FScriptContainerElement *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FScriptContainerElement *local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  FString local_3b8;
  FScriptContainerElement *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  FString local_398;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  FString local_378;
  FScriptContainerElement *local_368;
  int iStack_360;
  undefined4 uStack_35c;
  FString local_358;
  FScriptContainerElement *local_348;
  int iStack_340;
  undefined4 uStack_33c;
  FString local_338;
  FScriptContainerElement *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  FString local_318;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FString local_2f8;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
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
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  local_838.DataPtr = L"String To Test!";
  local_838.Size = 0xf;
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_238,L"TCHAR Equals TCHAR Literal");
  (*pcVar2)(pFVar1,&local_238,0,0);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_7d8,0);
    if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7c8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_7c8,0);
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"string to test!",0xf);
  if ((iVar7 != 0) || (u_string_to_test_[0xf] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7b8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_7b8,0);
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"string to test!",0xf);
  if ((iVar7 != 0) || (u_string_to_test_[0xf] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7a8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_7a8,0);
    if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"STRING TO TEST!",0xf);
  if ((iVar7 != 0) || (u_STRING_TO_TEST_[0xf] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_798,L"Condition failed");
    (*pcVar2)(pFVar1,&local_798,0);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"STRING TO TEST!",0xf);
  if ((iVar7 != 0) || (u_STRING_TO_TEST_[0xf] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_788,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_788,0);
    if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[3] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_778,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_778,0);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[3] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_768,L"Condition failed");
    (*pcVar2)(pFVar1,&local_768,0);
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test! Extended",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[0xf] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_758,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_758,0);
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test! Extended",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[0xf] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_748,L"Condition failed");
    (*pcVar2)(pFVar1,&local_748,0);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_738,L"Condition failed");
    (*pcVar2)(pFVar1,&local_738,0);
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_728,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_728,0);
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"string to test!",0xf);
  if ((iVar7 != 0) || (u_string_to_test_[0xf] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_718,L"Condition failed");
    (*pcVar2)(pFVar1,&local_718,0);
    if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_718.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"string to test!",0xf);
  if ((iVar7 != 0) || (u_string_to_test_[0xf] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_708,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_708,0);
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"STRING TO TEST!",0xf);
  if ((iVar7 != 0) || (u_STRING_TO_TEST_[0xf] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6f8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_6f8,0);
    if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"STRING TO TEST!",0xf);
  if ((iVar7 != 0) || (u_STRING_TO_TEST_[0xf] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6e8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_6e8,0);
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[3] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_6d8,0);
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[3] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_6c8,0);
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test! Extended",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[0xf] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6b8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_6b8,0);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test! Extended",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[0xf] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_6a8,0);
    if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_818,L"String To Test!");
  ::FString::FString(&local_7e8,L"string to test!");
  ::FString::FString(&local_7f8,L"STRING TO TEST!");
  ::FString::FString(&local_828,L"String To");
  ::FString::FString(&local_808,L"String To Test! Extended");
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_698,L"TCHAR Equals FString");
  (*pcVar2)(pFVar1,&local_698,0,0);
  if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data.AllocatorInstance.Data);
  }
  iVar7 = local_818.Data.ArrayNum + -1;
  if (local_818.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 != 0xf) ||
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_818.Data.AllocatorInstance.Data,0xf),
     iVar7 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_688,L"Condition failed");
    (*pcVar2)(pFVar1,&local_688,0);
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_818.Data.ArrayNum + -1;
  if (local_818.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 != 0xf) ||
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_818.Data.AllocatorInstance.Data,0xf),
     iVar7 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_678,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_678,0);
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_7e8.Data.ArrayNum + -1;
  if (local_7e8.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 != 0xf) ||
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_7e8.Data.AllocatorInstance.Data,0xf),
     iVar7 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_668,L"Condition failed");
    (*pcVar2)(pFVar1,&local_668,0);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_7e8.Data.ArrayNum + -1;
  if (local_7e8.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 != 0xf) ||
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_7e8.Data.AllocatorInstance.Data,0xf),
     iVar7 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_658,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_658,0);
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_7f8.Data.ArrayNum + -1;
  if (local_7f8.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 != 0xf) ||
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_7f8.Data.AllocatorInstance.Data,0xf),
     iVar7 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_648,L"Condition failed");
    (*pcVar2)(pFVar1,&local_648,0);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = local_838._8_8_;
  pwVar3 = local_838.DataPtr;
  local_638 = local_7f8.Data.AllocatorInstance.Data;
  iStack_630 = local_7f8.Data.ArrayNum + -1;
  if (local_7f8.Data.ArrayNum == 0) {
    iStack_630 = 0;
  }
  local_848._12_4_ = uStack_62c;
  local_848.Size = iStack_630;
  local_848.DataPtr = (wchar_t *)local_7f8.Data.AllocatorInstance.Data;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_628,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_628,0);
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
  }
  local_618 = local_828.Data.AllocatorInstance.Data;
  iStack_610 = local_828.Data.ArrayNum + -1;
  if (local_828.Data.ArrayNum == 0) {
    iStack_610 = 0;
  }
  local_848._12_4_ = uStack_60c;
  local_848.Size = iStack_610;
  local_848.DataPtr = (wchar_t *)local_828.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_608,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_608,0);
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
  }
  local_5f8 = local_828.Data.AllocatorInstance.Data;
  iStack_5f0 = local_828.Data.ArrayNum + -1;
  if (local_828.Data.ArrayNum == 0) {
    iStack_5f0 = 0;
  }
  local_848._12_4_ = uStack_5ec;
  local_848.Size = iStack_5f0;
  local_848.DataPtr = (wchar_t *)local_828.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_5e8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_5e8,0);
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
  }
  local_5d8 = local_808.Data.AllocatorInstance.Data;
  iStack_5d0 = local_808.Data.ArrayNum + -1;
  if (local_808.Data.ArrayNum == 0) {
    iStack_5d0 = 0;
  }
  local_848._12_4_ = uStack_5cc;
  local_848.Size = iStack_5d0;
  local_848.DataPtr = (wchar_t *)local_808.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_5c8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_5c8,0);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
  }
  local_5b8 = local_808.Data.AllocatorInstance.Data;
  iStack_5b0 = local_808.Data.ArrayNum + -1;
  if (local_808.Data.ArrayNum == 0) {
    iStack_5b0 = 0;
  }
  local_848._12_4_ = uStack_5ac;
  local_848.Size = iStack_5b0;
  local_848.DataPtr = (wchar_t *)local_808.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_5a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_5a8,0);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
  }
  local_598 = local_818.Data.AllocatorInstance.Data;
  iStack_590 = local_818.Data.ArrayNum + -1;
  if (local_818.Data.ArrayNum == 0) {
    iStack_590 = 0;
  }
  local_848._12_4_ = uStack_58c;
  local_848.Size = iStack_590;
  local_848.DataPtr = (wchar_t *)local_818.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_588,L"Condition failed");
    (*pcVar2)(pFVar1,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  local_578 = local_818.Data.AllocatorInstance.Data;
  iStack_570 = local_818.Data.ArrayNum + -1;
  if (local_818.Data.ArrayNum == 0) {
    iStack_570 = 0;
  }
  local_848._12_4_ = uStack_56c;
  local_848.Size = iStack_570;
  local_848.DataPtr = (wchar_t *)local_818.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_568,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_568,0);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  local_558 = local_7e8.Data.AllocatorInstance.Data;
  iStack_550 = local_7e8.Data.ArrayNum + -1;
  if (local_7e8.Data.ArrayNum == 0) {
    iStack_550 = 0;
  }
  local_848._12_4_ = uStack_54c;
  local_848.Size = iStack_550;
  local_848.DataPtr = (wchar_t *)local_7e8.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_548,L"Condition failed");
    (*pcVar2)(pFVar1,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  local_538 = local_7e8.Data.AllocatorInstance.Data;
  iStack_530 = local_7e8.Data.ArrayNum + -1;
  if (local_7e8.Data.ArrayNum == 0) {
    iStack_530 = 0;
  }
  local_848._12_4_ = uStack_52c;
  local_848.Size = iStack_530;
  local_848.DataPtr = (wchar_t *)local_7e8.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_528,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_528,0);
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
  }
  local_518 = local_7f8.Data.AllocatorInstance.Data;
  iStack_510 = local_7f8.Data.ArrayNum + -1;
  if (local_7f8.Data.ArrayNum == 0) {
    iStack_510 = 0;
  }
  local_848._12_4_ = uStack_50c;
  local_848.Size = iStack_510;
  local_848.DataPtr = (wchar_t *)local_7f8.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_508,L"Condition failed");
    (*pcVar2)(pFVar1,&local_508,0);
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_7f8.Data.ArrayNum + -1;
  if (local_7f8.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 != 0xf) ||
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_7f8.Data.AllocatorInstance.Data,0xf),
     iVar7 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4f8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_4f8,0);
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_828.Data.ArrayNum + -1;
  if (local_828.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 == 0xf) &&
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_828.Data.AllocatorInstance.Data,0xf),
     iVar7 == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4e8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_4e8,0);
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_828.Data.ArrayNum + -1;
  if (local_828.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 == 0xf) &&
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_828.Data.AllocatorInstance.Data,0xf),
     iVar7 == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_4d8,0);
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_808.Data.ArrayNum + -1;
  if (local_808.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 == 0xf) &&
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_808.Data.AllocatorInstance.Data,0xf),
     iVar7 == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4c8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_4c8,0);
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_808.Data.ArrayNum + -1;
  if (local_808.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((iVar7 == 0xf) &&
     (iVar7 = FGenericPlatformStricmp::Strnicmp
                        (L"String To Test!",(wchar_t *)local_808.Data.AllocatorInstance.Data,0xf),
     iVar7 == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4b8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_4b8,0);
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4a8,L"TCHAR Equals Identical");
  (*pcVar2)(pFVar1,&local_4a8,0,0);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_498,L"Condition failed");
    (*pcVar2)(pFVar1,&local_498,0);
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_488,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_488,0);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_478,L"Condition failed");
    (*pcVar2)(pFVar1,&local_478,0);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_468,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_468,0);
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_458,L"ANSI Equals ANSI NoTerminator");
  (*pcVar2)(pFVar1,&local_458,0,0);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  local_838.DataPtr = L"String To Test!";
  local_838.Size = 9;
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To",9);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_448,L"Condition failed");
    (*pcVar2)(pFVar1,&local_448,0);
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To",9);
  if ((iVar7 != 0) || (u_String_To[9] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_438,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_438,0);
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To",9);
  if ((iVar7 != 0) || (u_String_To[9] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_428,L"Condition failed");
    (*pcVar2)(pFVar1,&local_428,0);
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To",9);
  if ((iVar7 != 0) || (u_String_To[9] != L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_418,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_418,0);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",9);
  if ((iVar7 == 0) && (DAT_1507274fa == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_408,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_408,0);
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",9);
  if ((iVar7 == 0) && (DAT_1507274fa == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3f8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3f8,0);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",9);
  if ((iVar7 == 0) && (DAT_1507274fa == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_3e8,0);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!",L"String To Test!",9);
  if ((iVar7 == 0) && (DAT_1507274fa == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3d8,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = local_838._8_8_;
  pwVar3 = local_838.DataPtr;
  local_3c8 = local_828.Data.AllocatorInstance.Data;
  iStack_3c0 = local_828.Data.ArrayNum + -1;
  if (local_828.Data.ArrayNum == 0) {
    iStack_3c0 = 0;
  }
  local_848._12_4_ = uStack_3bc;
  local_848.Size = iStack_3c0;
  local_848.DataPtr = (wchar_t *)local_828.Data.AllocatorInstance.Data;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3b8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3b8,0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
  }
  local_3a8 = local_828.Data.AllocatorInstance.Data;
  iStack_3a0 = local_828.Data.ArrayNum + -1;
  if (local_828.Data.ArrayNum == 0) {
    iStack_3a0 = 0;
  }
  local_848._12_4_ = uStack_39c;
  local_848.Size = iStack_3a0;
  local_848.DataPtr = (wchar_t *)local_828.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_398,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_398,0);
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  }
  local_388 = local_828.Data.AllocatorInstance.Data;
  iStack_380 = local_828.Data.ArrayNum + -1;
  if (local_828.Data.ArrayNum == 0) {
    iStack_380 = 0;
  }
  local_848._12_4_ = uStack_37c;
  local_848.Size = iStack_380;
  local_848.DataPtr = (wchar_t *)local_828.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_378,L"Condition failed");
    (*pcVar2)(pFVar1,&local_378,0);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  local_368 = local_828.Data.AllocatorInstance.Data;
  iStack_360 = local_828.Data.ArrayNum + -1;
  if (local_828.Data.ArrayNum == 0) {
    iStack_360 = 0;
  }
  local_848._12_4_ = uStack_35c;
  local_848.Size = iStack_360;
  local_848.DataPtr = (wchar_t *)local_828.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_358,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_358,0);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
  }
  local_348 = local_818.Data.AllocatorInstance.Data;
  iStack_340 = local_818.Data.ArrayNum + -1;
  if (local_818.Data.ArrayNum == 0) {
    iStack_340 = 0;
  }
  local_848._12_4_ = uStack_33c;
  local_848.Size = iStack_340;
  local_848.DataPtr = (wchar_t *)local_818.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_338,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_338,0);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  local_328 = local_818.Data.AllocatorInstance.Data;
  iStack_320 = local_818.Data.ArrayNum + -1;
  if (local_818.Data.ArrayNum == 0) {
    iStack_320 = 0;
  }
  local_848._12_4_ = uStack_31c;
  local_848.Size = iStack_320;
  local_848.DataPtr = (wchar_t *)local_818.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_318,L"Condition failed");
    (*pcVar2)(pFVar1,&local_318,0);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  local_308 = local_818.Data.AllocatorInstance.Data;
  iStack_300 = local_818.Data.ArrayNum + -1;
  if (local_818.Data.ArrayNum == 0) {
    iStack_300 = 0;
  }
  local_848._12_4_ = uStack_2fc;
  local_848.Size = iStack_300;
  local_848.DataPtr = (wchar_t *)local_818.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2f8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_2f8,0);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  local_2e8 = local_818.Data.AllocatorInstance.Data;
  iStack_2e0 = local_818.Data.ArrayNum + -1;
  if (local_818.Data.ArrayNum == 0) {
    iStack_2e0 = 0;
  }
  local_848._12_4_ = uStack_2dc;
  local_848.Size = iStack_2e0;
  local_848.DataPtr = (wchar_t *)local_818.Data.AllocatorInstance.Data;
  local_838.DataPtr = pwVar3;
  local_838._8_8_ = uVar4;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_838,&local_848);
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2d8,0);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_2c8,L"TCHAR Equals TCHAR NoTerminator");
  (*pcVar2)(pFVar1,&local_2c8,0,0);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  local_838.DataPtr = L"String To Test! Extended";
  uVar5 = local_838._12_4_;
  local_838.Size = 0xf;
  local_848.DataPtr = L"String To Test! Extended";
  local_848.Size = 0xf;
  local_848._12_4_ = local_838._12_4_;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_848,L"String To Test!");
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2b8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_2b8,0);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  local_848.DataPtr = L"String To Test! Extended";
  local_848.Size = 0xf;
  local_848._12_4_ = uVar5;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_848,L"String To Test!");
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2a8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_2a8,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  local_848.DataPtr = L"String To Test! Extended";
  local_848.Size = 0xf;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_848,L"String To Test!");
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_298,L"Condition failed");
    (*pcVar2)(pFVar1,&local_298,0);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  local_848.DataPtr = L"String To Test! Extended";
  local_848.Size = 0xf;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_848,L"String To Test!");
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_288,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_288,0);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  local_848.DataPtr = L"String To Test! Extended";
  local_848.Size = 0xf;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_848,L"String To Test! Extended");
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_278,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_278,0);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
  local_848.DataPtr = L"String To Test! Extended";
  local_848.Size = 0xf;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_848,L"String To Test! Extended");
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_268,L"Condition failed");
    (*pcVar2)(pFVar1,&local_268,0);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  local_848.DataPtr = L"String To Test! Extended";
  local_848.Size = 0xf;
  bVar6 = TStringView<wchar_t>::PrivateEquals(&local_848,L"String To Test! Extended");
  if (bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_258,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_258,0);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp
                    (L"String To Test! Extended",L"String To Test! Extended",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[0xf] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_248,L"Condition failed");
    (*pcVar2)(pFVar1,&local_248,0);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test! Extended",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_138,L"Condition failed");
    (*pcVar2)(pFVar1,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test! Extended",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_228,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_228,0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test! Extended",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_218,L"Condition failed");
    (*pcVar2)(pFVar1,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test! Extended",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_208,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_208,0);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp
                    (L"String To Test! Extended",L"String To Test! Extended",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[0xf] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1f8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1f8,0);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp
                    (L"String To Test! Extended",L"String To Test! Extended",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[0xf] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1e8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1e8,0);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp
                    (L"String To Test! Extended",L"String To Test! Extended",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[0xf] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp
                    (L"String To Test! Extended",L"String To Test! Extended",0xf);
  if ((iVar7 == 0) && (u_String_To_Test_[0xf] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1b8,L"ANSICHAR Equals TCHAR");
  (*pcVar2)(pFVar1,&local_1b8,0,0);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  iVar7 = FGenericPlatformString::Strncmp("String To Test!",L"String To Test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1a8,0);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp(L"String To Test!","String To Test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_198,L"Condition failed");
    (*pcVar2)(pFVar1,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp("string to test!",L"String To Test!",0xf);
  if (iVar7 == 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_188,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_188,0);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp("string to test!",L"String To Test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_178,L"Condition failed");
    (*pcVar2)(pFVar1,&local_178,0);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp(L"String To Test!","string to test!",0xf);
  if (iVar7 == 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_168,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!","string to test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_158,L"Condition failed");
    (*pcVar2)(pFVar1,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp("STRING TO TEST!",L"String To Test!",0xf);
  if (iVar7 == 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp("STRING TO TEST!",L"String To Test!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_38,L"Condition failed");
    (*pcVar2)(pFVar1,local_38,0);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp(L"String To Test!","STRING TO TEST!",0xf);
  if (iVar7 == 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_128,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!","STRING TO TEST!",0xf);
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_118,L"Condition failed");
    (*pcVar2)(pFVar1,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp(L"String To Test!","String To Test!",0xf);
  if ((iVar7 != 0) || (s_String_To_Test_[0xf] != '\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_108,L"Condition failed");
    (*pcVar2)(pFVar1,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp(L"String To Test!","string to test!",0xf);
  if ((iVar7 == 0) && (s_string_to_test_[0xf] == '\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!","string to test!",0xf);
  if ((iVar7 != 0) || (s_string_to_test_[0xf] != '\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_e8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp(L"String To Test!","STRING TO TEST!",0xf);
  if ((iVar7 == 0) && (s_STRING_TO_TEST_[0xf] == '\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp(L"String To Test!","STRING TO TEST!",0xf);
  if ((iVar7 != 0) || (s_STRING_TO_TEST_[0xf] != '\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp("String To Test!",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_b8,0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp("string to test!",L"String To Test!",0xf);
  if ((iVar7 == 0) && (DAT_150727506 == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp("string to test!",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_98,L"Condition failed");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformString::Strncmp("STRING TO TEST!",L"String To Test!",0xf);
  if ((iVar7 == 0) && (DAT_150727506 == 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FGenericPlatformStricmp::Strnicmp("STRING TO TEST!",L"String To Test!",0xf);
  if ((iVar7 != 0) || (DAT_150727506 != 0)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Condition failed");
    (*pcVar2)(pFVar1,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_68,L"Empty String Equality");
  (*pcVar2)(pFVar1,&local_68,0,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_848.Size = 3;
  iVar7 = wcsncmp(L"ABC",L"",3);
  if ((iVar7 == 0) && (::u_C__Workspace_Un[1] == L'\0')) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_48,L"Types Convertible to TStringView");
  (*pcVar2)(pFVar1,&local_48,0,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.Data.AllocatorInstance.Data);
  }
  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data.AllocatorInstance.Data);
  }
  if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
  }
  if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
  }
  if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_818.Data.AllocatorInstance.Data);
  }
  return;
}

