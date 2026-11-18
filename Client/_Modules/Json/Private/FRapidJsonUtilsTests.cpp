// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 10

// GetTestFlags @ 141d9f600

EAutomationTestFlags __thiscall FRapidJsonUtilsTests::GetTestFlags(FRapidJsonUtilsTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d9f610

bool __thiscall FRapidJsonUtilsTests::IsStressTest(FRapidJsonUtilsTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d9f620

uint __thiscall FRapidJsonUtilsTests::GetRequiredDeviceNum(FRapidJsonUtilsTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d9f630

FString * __thiscall
FRapidJsonUtilsTests::GetTestSourceFileName
          (FRapidJsonUtilsTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\RapidJsonUtilsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d9f660

int __thiscall FRapidJsonUtilsTests::GetTestSourceFileLine(FRapidJsonUtilsTests *this)

{
  return 0x10;
}

// GetTests @ 141d9f670

/* WARNING: Removing unreachable block (ram,0x000141d9f7ee) */

void __thiscall
FRapidJsonUtilsTests::GetTests
          (FRapidJsonUtilsTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d9f810

bool __thiscall FRapidJsonUtilsTests::RunTest(FRapidJsonUtilsTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d9f840

FString * __thiscall
FRapidJsonUtilsTests::GetBeautifiedTestName
          (FRapidJsonUtilsTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FRapidJsonUtilsTests @ 141dc5180

FRapidJsonUtilsTests * __thiscall
FRapidJsonUtilsTests::FRapidJsonUtilsTests(FRapidJsonUtilsTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FRapidJsonUtilsTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Engine::FileSystem::RapidJSONUtils::Basic");
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

// TestBody @ 141df7f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRapidJsonUtilsTests::TestBody(FRapidJsonUtilsTests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar4;
  bool bVar5;
  TOptional<bool> TVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  FAutomationTestFramework *pFVar10;
  undefined6 extraout_var;
  TOptional<int> TVar11;
  TOptional<unsigned_int> TVar12;
  TOptional<__int64> *pTVar13;
  TOptional<unsigned___int64> *pTVar14;
  TOptional<double> *pTVar15;
  TOptional<TStringView<wchar_t>_> *pTVar16;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  *pTVar17;
  ulonglong uVar18;
  undefined1 auStack_598 [32];
  char local_578;
  char local_577;
  undefined4 local_574;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_570;
  int local_568;
  char local_564;
  int local_560;
  char local_55c;
  int local_558;
  char local_554;
  int local_550;
  char local_54c;
  int local_548;
  char local_544;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_540;
  FString local_538;
  FScriptContainerElement *local_528;
  int local_520;
  int local_51c;
  longlong local_518;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_510;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_508;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_500;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4f8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4f0;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4e8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4e0;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4d8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4d0;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4c8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_4c0;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4b8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4b0;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4a8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_4a0;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_498;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_490;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_488;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_480;
  longlong local_478;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_470;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_468;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_460;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_458;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *local_450;
  FString local_448;
  FString local_438;
  wchar_t *local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  wchar_t *local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  TOptional<__int64> local_338;
  FString local_328;
  FString local_318;
  TOptional<__int64> local_308;
  FString local_2f8;
  FString local_2e8;
  TOptional<unsigned___int64> local_2d8;
  FString local_2c8;
  FString local_2b8;
  TOptional<double> local_2a8;
  FString local_298;
  FString local_288;
  TOptional<double> local_278;
  FString local_268;
  FString local_258;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_208;
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
  TOptional<TStringView<wchar_t>_> local_138;
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  TOptional<__int64> local_d8;
  TOptional<unsigned___int64> local_c8;
  TOptional<double> local_b8;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_a8;
  TOptional<TStringView<wchar_t>_> local_98;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_80;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_598;
  uStack_420 = 0x1b1;
  local_428 = 
  L"\n{\n\t\"on\": true,\n\t\"off\": false,\n\t\"zero\": 0,\n\t\"min_int32\": -2147483648,\n\t\"max_int32\":  2147483647,\n\t\"max_uint32\": 4294967295,\n\t\"min_int64\": -9223372036854775808,\n\t\"max_int64\":  9223372036854775807,\n\t\"max_uint64\": 18446744073709551615,\n\t\"double\": 1.1,\n\t\"big_double\": 18446744073709551615.18446744073709551615,\n\t\"string\": \"hello world\",\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
  ;
  local_108._12_4_ = uStack_41c;
  local_108.Size = 0x1b1;
  local_574 = 0;
  local_108.DataPtr =
       L"\n{\n\t\"on\": true,\n\t\"off\": false,\n\t\"zero\": 0,\n\t\"min_int32\": -2147483648,\n\t\"max_int32\":  2147483647,\n\t\"max_uint32\": 4294967295,\n\t\"min_int64\": -9223372036854775808,\n\t\"max_int64\":  9223372036854775807,\n\t\"max_uint64\": 18446744073709551615,\n\t\"double\": 1.1,\n\t\"big_double\": 18446744073709551615.18446744073709551615,\n\t\"string\": \"hello world\",\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
  ;
  UE::Json::Parse(&local_80,&local_108);
  uVar18 = (ulonglong)local_80.Variant.TypeIndex;
  if (2 < uVar18) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar18) == '\0') {
    local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9 = &local_538;
    local_538.Data.ArrayNum = 0;
    local_538.Data.ArrayMax = 0;
    bVar3 = false;
    bVar5 = true;
  }
  else {
    if (local_80.Variant.TypeIndex != 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_418 = 
    L"\n{\n\t\"on\": true,\n\t\"off\": false,\n\t\"zero\": 0,\n\t\"min_int32\": -2147483648,\n\t\"max_int32\":  2147483647,\n\t\"max_uint32\": 4294967295,\n\t\"min_int64\": -9223372036854775808,\n\t\"max_int64\":  9223372036854775807,\n\t\"max_uint64\": 18446744073709551615,\n\t\"double\": 1.1,\n\t\"big_double\": 18446744073709551615.18446744073709551615,\n\t\"string\": \"hello world\",\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
    ;
    uStack_410 = 0x1b1;
    local_f8._12_4_ = uStack_40c;
    local_f8.Size = 0x1b1;
    local_f8.DataPtr =
         L"\n{\n\t\"on\": true,\n\t\"off\": false,\n\t\"zero\": 0,\n\t\"min_int32\": -2147483648,\n\t\"max_int32\":  2147483647,\n\t\"max_uint32\": 4294967295,\n\t\"min_int64\": -9223372036854775808,\n\t\"max_int64\":  9223372036854775807,\n\t\"max_uint64\": 18446744073709551615,\n\t\"double\": 1.1,\n\t\"big_double\": 18446744073709551615.18446744073709551615,\n\t\"string\": \"hello world\",\n\t\"object\": {\n\t\t\"value\": 42\n\t},\n\t\"array\": [\n\t\t\"aaa\",\n\t\t\"bbb\",\n\t\t\"ccc\",\n\t\t\"ddd\"\n\t],\t\n\t\"null\": null\n}\n\n"
    ;
    pFVar9 = UE::Json::FParseError::CreateMessage((FParseError *)&local_80,&local_e8,&local_f8);
    bVar3 = true;
    bVar5 = false;
  }
  local_528 = (pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_520 = (pFVar9->Data).ArrayNum;
  local_51c = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  if (bVar5) {
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  uVar18 = (ulonglong)local_80.Variant.TypeIndex;
  if (2 < uVar18) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar18 + 4) == '\0') {
    pFVar10 = FAutomationTestFramework::Get();
    (**(code **)(pFVar10->CurrentTest->_padding_ + 0x28))(pFVar10->CurrentTest,&local_528,0);
    goto LAB_141df9113;
  }
  if (local_80.Variant.TypeIndex != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_80.Variant._padding_._6_2_ == 3) {
    local_570.value_ =
         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_80;
    rapidjson::
    GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
    ::FindMember(&local_570,(wchar_t *)&local_518);
    GVar4.value_ = local_570.value_;
    if (((local_570.value_)->data_).f.flags != 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x500,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((local_518 ==
         ((ulonglong)((GVar4.value_)->data_).s.str & 0xffffffffffff) +
         (ulonglong)((GVar4.value_)->data_).s.length * 0x20) ||
       ((*(byte *)(local_518 + 0x1e) & 8) == 0)) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_438,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_438,0);
      local_408.Data.AllocatorInstance.Data = local_438.Data.AllocatorInstance.Data;
    }
    else if (*(short *)(local_518 + 0x1e) == 10) {
      local_510 = &local_80;
      UE::Json::GetBoolField
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_578,(wchar_t *)&local_510);
      if (local_577 == '\0') {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_3e8,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_3e8,0);
        local_408.Data.AllocatorInstance.Data = local_3e8.Data.AllocatorInstance.Data;
      }
      else if (local_578 == '\0') {
        local_508 = &local_80;
        UE::Json::GetInt32Field
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_568,(wchar_t *)&local_508);
        if (local_564 == '\0') {
          pFVar10 = FAutomationTestFramework::Get();
          pFVar1 = pFVar10->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_3c8,L"Required condition failed, interrupting test");
          (*pcVar2)(pFVar1,&local_3c8,0);
          local_408.Data.AllocatorInstance.Data = local_3c8.Data.AllocatorInstance.Data;
        }
        else if (local_568 == 0) {
          local_500 = &local_80;
          UE::Json::GetInt32Field
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_560,(wchar_t *)&local_500);
          if (local_55c == '\0') {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar1 = pFVar10->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_3a8,L"Required condition failed, interrupting test");
            (*pcVar2)(pFVar1,&local_3a8,0);
            local_408.Data.AllocatorInstance.Data = local_3a8.Data.AllocatorInstance.Data;
          }
          else if (local_560 == -0x80000000) {
            local_4f8 = &local_80;
            UE::Json::GetInt32Field
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_558,(wchar_t *)&local_4f8);
            if (local_554 == '\0') {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar1 = pFVar10->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_388,L"Required condition failed, interrupting test");
              (*pcVar2)(pFVar1,&local_388,0);
              local_408.Data.AllocatorInstance.Data = local_388.Data.AllocatorInstance.Data;
            }
            else if (local_558 == 0x7fffffff) {
              local_4f0 = &local_80;
              UE::Json::GetUint32Field
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_550,(wchar_t *)&local_4f0);
              if (local_54c == '\0') {
                pFVar10 = FAutomationTestFramework::Get();
                pFVar1 = pFVar10->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_368,L"Required condition failed, interrupting test");
                (*pcVar2)(pFVar1,&local_368,0);
                local_408.Data.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
              }
              else if (local_550 == -1) {
                local_4e8 = &local_80;
                UE::Json::GetInt64Field
                          (&local_338,
                           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                            *)&local_4e8,L"min_int64");
                if (local_338.bIsSet == false) {
                  pFVar10 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar10->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_348,L"Required condition failed, interrupting test");
                  (*pcVar2)(pFVar1,&local_348,0);
                  local_408.Data.AllocatorInstance.Data = local_348.Data.AllocatorInstance.Data;
                }
                else if (local_338.TypedValue == -0x8000000000000000) {
                  local_4e0 = &local_80;
                  UE::Json::GetInt64Field
                            (&local_308,
                             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                              *)&local_4e0,L"max_int64");
                  if (local_308.bIsSet == false) {
                    pFVar10 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar10->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_318,L"Required condition failed, interrupting test");
                    (*pcVar2)(pFVar1,&local_318,0);
                    local_408.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
                  }
                  else if (local_308.TypedValue == 0x7fffffffffffffff) {
                    local_4d8 = &local_80;
                    UE::Json::GetUint64Field
                              (&local_2d8,
                               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                *)&local_4d8,L"max_uint64");
                    if (local_2d8.bIsSet == false) {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar10->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_2e8,L"Required condition failed, interrupting test")
                      ;
                      (*pcVar2)(pFVar1,&local_2e8,0);
                      local_408.Data.AllocatorInstance.Data = local_2e8.Data.AllocatorInstance.Data;
                    }
                    else if (local_2d8.TypedValue == 0xffffffffffffffff) {
                      local_450 = &local_80;
                      UE::Json::GetDoubleField
                                (&local_2a8,
                                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                  *)&local_450,L"double");
                      if (local_2a8.bIsSet == false) {
                        pFVar10 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar10->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_2b8,
                                           L"Required condition failed, interrupting test");
                        (*pcVar2)(pFVar1,&local_2b8,0);
                        local_408.Data.AllocatorInstance.Data =
                             local_2b8.Data.AllocatorInstance.Data;
                      }
                      else if (local_2a8.TypedValue == __real_3ff199999999999a) {
                        local_458 = &local_80;
                        UE::Json::GetDoubleField
                                  (&local_278,
                                   (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                    *)&local_458,L"big_double");
                        if (local_278.bIsSet == false) {
                          pFVar10 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar10->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                          ::FString::FString(&local_288,
                                             L"Required condition failed, interrupting test");
                          (*pcVar2)(pFVar1,&local_288,0);
                          local_408.Data.AllocatorInstance.Data =
                               local_288.Data.AllocatorInstance.Data;
                        }
                        else if (local_278.TypedValue == __real_43f0000000000000) {
                          local_4d0 = &local_80;
                          UE::Json::GetStringField
                                    (&local_138,
                                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                      *)&local_4d0,L"string");
                          if (local_138.bIsSet == false) {
                            pFVar10 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar10->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_258,
                                               L"Required condition failed, interrupting test");
                            (*pcVar2)(pFVar1,&local_258,0);
                            local_408.Data.AllocatorInstance.Data =
                                 local_258.Data.AllocatorInstance.Data;
                          }
                          else {
                            if (local_138.TypedValue.Size != 0) {
                              iVar7 = wcsncmp(local_138.TypedValue.DataPtr,L"hello world",
                                              (longlong)local_138.TypedValue.Size);
                              if ((iVar7 == 0) &&
                                 (L"hello world"[local_138.TypedValue.Size] == L'\0')) {
                                local_4c8 = &local_80;
                                UE::Json::GetObjectField
                                          (&local_248,
                                           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                            *)&local_4c8,L"object");
                                if (local_248.bIsSet == false) {
                                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("IsSet()",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                                  ,0x1bd,
                                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                                  );
                                  if (bVar5) {
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                }
                                local_4c0 = local_248.TypedValue.value_;
                                UE::Json::GetInt32Field
                                          ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                            *)&local_548,(wchar_t *)&local_4c0);
                                if (local_544 == '\0') {
                                  pFVar10 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar10->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_238,
                                                     L"Required condition failed, interrupting test"
                                                    );
                                  (*pcVar2)(pFVar1,&local_238,0);
                                  local_408.Data.AllocatorInstance.Data =
                                       local_238.Data.AllocatorInstance.Data;
                                }
                                else if (local_548 == 0x2a) {
                                  local_4b8 = &local_80;
                                  UE::Json::GetArrayField
                                            (&local_208,
                                             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                              *)&local_4b8,L"array");
                                  if (local_208.bIsSet == false) {
                                    pFVar10 = FAutomationTestFramework::Get();
                                    pFVar1 = pFVar10->CurrentTest;
                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                    ::FString::FString(&local_218,
                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                    (*pcVar2)(pFVar1,&local_218,0);
                                    local_408.Data.AllocatorInstance.Data =
                                         local_218.Data.AllocatorInstance.Data;
                                  }
                                  else {
                                    uVar8 = rapidjson::
                                            GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                                            ::Size(&local_208.TypedValue);
                                    if (uVar8 == 4) {
                                      local_4b0 = &local_80;
                                      bVar5 = UE::Json::HasNullField
                                                        ((
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)&local_4b0,L"null");
                                      if (bVar5) {
                                        local_4a8 = &local_80;
                                        TVar6 = UE::Json::GetBoolField
                                                          ((
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)&local_574,(wchar_t *)&local_4a8);
                                        if (*(char *)(CONCAT62(extraout_var,TVar6) + 1) == '\0') {
                                          local_4a0 = &local_80;
                                          TVar11 = UE::Json::GetInt32Field
                                                             ((
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)local_120,(wchar_t *)&local_4a0);
                                          if (*(char *)((longlong)TVar11 + 4) == '\0') {
                                            local_498 = &local_80;
                                            TVar12 = UE::Json::GetUint32Field
                                                               ((
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)local_118,(wchar_t *)&local_498);
                                            if (*(char *)((longlong)TVar12 + 4) == '\0') {
                                              local_490 = &local_80;
                                              pTVar13 = UE::Json::GetInt64Field
                                                                  (&local_d8,
                                                                   (
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)&local_490,L"missing");
                                              if (pTVar13->bIsSet == false) {
                                                local_488 = &local_80;
                                                pTVar14 = UE::Json::GetUint64Field
                                                                    (&local_c8,
                                                                     (
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)&local_488,L"missing");
                                                if (pTVar14->bIsSet == false) {
                                                  local_480 = &local_80;
                                                  pTVar15 = UE::Json::GetDoubleField
                                                                      (&local_b8,
                                                                       (
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)&local_480,L"missing");
                                                  if (pTVar15->bIsSet == false) {
                                                    local_540.value_ =
                                                         (
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)&local_80;
                                                  rapidjson::
                                                  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                                                  ::FindMember(&local_540,(wchar_t *)&local_478);
                                                  GVar4.value_ = local_540.value_;
                                                  if (((local_540.value_)->data_).f.flags != 3) {
                                                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                      ("IsObject()",
                                                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                                  ,0x500,L"");
                                                  if (bVar5) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((local_478 ==
                                                       ((ulonglong)((GVar4.value_)->data_).s.str &
                                                       0xffffffffffff) +
                                                       (ulonglong)((GVar4.value_)->data_).s.length *
                                                       0x20) || (*(short *)(local_478 + 0x1e) != 3))
                                                  {
                                                    local_470 = &local_80;
                                                    pTVar16 = UE::Json::GetStringField
                                                                        (&local_98,
                                                                         (
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)&local_470,L"missing");
                                                  if (pTVar16->bIsSet == false) {
                                                    local_468 = &local_80;
                                                    pTVar17 = UE::Json::GetArrayField
                                                                        (&local_a8,
                                                                         (
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)&local_468,L"missing");
                                                  if (pTVar17->bIsSet == false) {
                                                    local_460 = &local_80;
                                                    bVar5 = UE::Json::HasNullField
                                                                      ((
                                                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                                  *)&local_460,L"missing");
                                                  if (!bVar5) goto LAB_141df9113;
                                                  pFVar10 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar10->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                  ::FString::FString(&local_148,
                                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_148,0);
                                                  local_408.Data.AllocatorInstance.Data =
                                                       local_148.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_158,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_158,0);
                                                  local_408.Data.AllocatorInstance.Data =
                                                       local_158.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_168,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_168,0);
                                                  local_408.Data.AllocatorInstance.Data =
                                                       local_168.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_178,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_178,0);
                                                  local_408.Data.AllocatorInstance.Data =
                                                       local_178.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar10 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar10->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_188,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_188,0);
                                                  local_408.Data.AllocatorInstance.Data =
                                                       local_188.Data.AllocatorInstance.Data;
                                                  }
                                                }
                                                else {
                                                  pFVar10 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar10->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                  ::FString::FString(&local_198,
                                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_198,0);
                                                  local_408.Data.AllocatorInstance.Data =
                                                       local_198.Data.AllocatorInstance.Data;
                                                }
                                              }
                                              else {
                                                pFVar10 = FAutomationTestFramework::Get();
                                                pFVar1 = pFVar10->CurrentTest;
                                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                ::FString::FString(&local_1a8,
                                                                                                                                      
                                                  L"Required condition failed, interrupting test");
                                                (*pcVar2)(pFVar1,&local_1a8,0);
                                                local_408.Data.AllocatorInstance.Data =
                                                     local_1a8.Data.AllocatorInstance.Data;
                                              }
                                            }
                                            else {
                                              pFVar10 = FAutomationTestFramework::Get();
                                              pFVar1 = pFVar10->CurrentTest;
                                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                              ::FString::FString(&local_1b8,
                                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                              (*pcVar2)(pFVar1,&local_1b8,0);
                                              local_408.Data.AllocatorInstance.Data =
                                                   local_1b8.Data.AllocatorInstance.Data;
                                            }
                                          }
                                          else {
                                            pFVar10 = FAutomationTestFramework::Get();
                                            pFVar1 = pFVar10->CurrentTest;
                                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                            ::FString::FString(&local_1c8,
                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                            (*pcVar2)(pFVar1,&local_1c8,0);
                                            local_408.Data.AllocatorInstance.Data =
                                                 local_1c8.Data.AllocatorInstance.Data;
                                          }
                                        }
                                        else {
                                          pFVar10 = FAutomationTestFramework::Get();
                                          pFVar1 = pFVar10->CurrentTest;
                                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                          ::FString::FString(&local_1d8,
                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                          (*pcVar2)(pFVar1,&local_1d8,0);
                                          local_408.Data.AllocatorInstance.Data =
                                               local_1d8.Data.AllocatorInstance.Data;
                                        }
                                      }
                                      else {
                                        pFVar10 = FAutomationTestFramework::Get();
                                        pFVar1 = pFVar10->CurrentTest;
                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                        ::FString::FString(&local_1e8,
                                                                                                                      
                                                  L"Required condition failed, interrupting test");
                                        (*pcVar2)(pFVar1,&local_1e8,0);
                                        local_408.Data.AllocatorInstance.Data =
                                             local_1e8.Data.AllocatorInstance.Data;
                                      }
                                    }
                                    else {
                                      pFVar10 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar10->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                      ::FString::FString(&local_1f8,
                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                      (*pcVar2)(pFVar1,&local_1f8,0);
                                      local_408.Data.AllocatorInstance.Data =
                                           local_1f8.Data.AllocatorInstance.Data;
                                    }
                                  }
                                }
                                else {
                                  pFVar10 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar10->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_228,
                                                     L"Required condition failed, interrupting test"
                                                    );
                                  (*pcVar2)(pFVar1,&local_228,0);
                                  local_408.Data.AllocatorInstance.Data =
                                       local_228.Data.AllocatorInstance.Data;
                                }
                                goto LAB_141df9109;
                              }
                            }
                            pFVar10 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar10->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_448,
                                               L"Required condition failed, interrupting test");
                            (*pcVar2)(pFVar1,&local_448,0);
                            local_408.Data.AllocatorInstance.Data =
                                 local_448.Data.AllocatorInstance.Data;
                          }
                        }
                        else {
                          pFVar10 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar10->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                          ::FString::FString(&local_268,
                                             L"Required condition failed, interrupting test");
                          (*pcVar2)(pFVar1,&local_268,0);
                          local_408.Data.AllocatorInstance.Data =
                               local_268.Data.AllocatorInstance.Data;
                        }
                      }
                      else {
                        pFVar10 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar10->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_298,
                                           L"Required condition failed, interrupting test");
                        (*pcVar2)(pFVar1,&local_298,0);
                        local_408.Data.AllocatorInstance.Data =
                             local_298.Data.AllocatorInstance.Data;
                      }
                    }
                    else {
                      pFVar10 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar10->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_2c8,L"Required condition failed, interrupting test")
                      ;
                      (*pcVar2)(pFVar1,&local_2c8,0);
                      local_408.Data.AllocatorInstance.Data = local_2c8.Data.AllocatorInstance.Data;
                    }
                  }
                  else {
                    pFVar10 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar10->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_2f8,L"Required condition failed, interrupting test");
                    (*pcVar2)(pFVar1,&local_2f8,0);
                    local_408.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
                  }
                }
                else {
                  pFVar10 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar10->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_328,L"Required condition failed, interrupting test");
                  (*pcVar2)(pFVar1,&local_328,0);
                  local_408.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
                }
              }
              else {
                pFVar10 = FAutomationTestFramework::Get();
                pFVar1 = pFVar10->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_358,L"Required condition failed, interrupting test");
                (*pcVar2)(pFVar1,&local_358,0);
                local_408.Data.AllocatorInstance.Data = local_358.Data.AllocatorInstance.Data;
              }
            }
            else {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar1 = pFVar10->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_378,L"Required condition failed, interrupting test");
              (*pcVar2)(pFVar1,&local_378,0);
              local_408.Data.AllocatorInstance.Data = local_378.Data.AllocatorInstance.Data;
            }
          }
          else {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar1 = pFVar10->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_398,L"Required condition failed, interrupting test");
            (*pcVar2)(pFVar1,&local_398,0);
            local_408.Data.AllocatorInstance.Data = local_398.Data.AllocatorInstance.Data;
          }
        }
        else {
          pFVar10 = FAutomationTestFramework::Get();
          pFVar1 = pFVar10->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_3b8,L"Required condition failed, interrupting test");
          (*pcVar2)(pFVar1,&local_3b8,0);
          local_408.Data.AllocatorInstance.Data = local_3b8.Data.AllocatorInstance.Data;
        }
      }
      else {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_3d8,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_3d8,0);
        local_408.Data.AllocatorInstance.Data = local_3d8.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_3f8,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_3f8,0);
      local_408.Data.AllocatorInstance.Data = local_3f8.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_408,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_408,0);
  }
LAB_141df9109:
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
LAB_141df9113:
  if (local_528 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528);
  }
  if (2 < local_80.Variant.TypeIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_80.Variant.TypeIndex])(&local_80);
  return;
}

