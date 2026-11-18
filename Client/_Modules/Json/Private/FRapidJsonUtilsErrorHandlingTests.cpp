// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 10

// GetTestFlags @ 141d9f8c0

EAutomationTestFlags __thiscall
FRapidJsonUtilsErrorHandlingTests::GetTestFlags(FRapidJsonUtilsErrorHandlingTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d9f8d0

bool __thiscall
FRapidJsonUtilsErrorHandlingTests::IsStressTest(FRapidJsonUtilsErrorHandlingTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d9f8e0

uint __thiscall
FRapidJsonUtilsErrorHandlingTests::GetRequiredDeviceNum(FRapidJsonUtilsErrorHandlingTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d9f8f0

FString * __thiscall
FRapidJsonUtilsErrorHandlingTests::GetTestSourceFileName
          (FRapidJsonUtilsErrorHandlingTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\Tests\\RapidJsonUtilsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d9f920

int __thiscall
FRapidJsonUtilsErrorHandlingTests::GetTestSourceFileLine(FRapidJsonUtilsErrorHandlingTests *this)

{
  return 0x84;
}

// GetTests @ 141d9f930

/* WARNING: Removing unreachable block (ram,0x000141d9faae) */

void __thiscall
FRapidJsonUtilsErrorHandlingTests::GetTests
          (FRapidJsonUtilsErrorHandlingTests *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d9fad0

bool __thiscall
FRapidJsonUtilsErrorHandlingTests::RunTest(FRapidJsonUtilsErrorHandlingTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d9fb00

FString * __thiscall
FRapidJsonUtilsErrorHandlingTests::GetBeautifiedTestName
          (FRapidJsonUtilsErrorHandlingTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FRapidJsonUtilsErrorHandlingTests @ 141dc4de0

FRapidJsonUtilsErrorHandlingTests * __thiscall
FRapidJsonUtilsErrorHandlingTests::FRapidJsonUtilsErrorHandlingTests
          (FRapidJsonUtilsErrorHandlingTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FRapidJsonUtilsErrorHandlingTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Engine::FileSystem::RapidJSONUtils::ErrorHandling")
  ;
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

// TestBody @ 141df7540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRapidJsonUtilsErrorHandlingTests::TestBody
          (FRapidJsonUtilsErrorHandlingTests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  ulonglong uVar6;
  undefined1 auStackY_368 [32];
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  wchar_t *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  FString local_2e8;
  wchar_t *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  FString local_2b8;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  FString local_288;
  wchar_t *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  wchar_t *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  FString local_258;
  wchar_t *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  TStringView<wchar_t> local_238;
  TStringView<wchar_t> local_228;
  TStringView<wchar_t> local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_1b8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_150;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_e8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_80;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_368;
  uStack_2f0 = 0x18;
  local_2f8 = L"{\n\"ok\": 42,\n\"bad\": xyz\n}";
  local_238._12_4_ = uStack_2ec;
  local_238.Size = 0x18;
  local_238.DataPtr = L"{\n\"ok\": 42,\n\"bad\": xyz\n}";
  UE::Json::Parse(&local_80,&local_238);
  uVar6 = (ulonglong)local_80.Variant.TypeIndex;
  if ((2 < uVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6) == '\0') {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_2e8,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_2e8,0);
  }
  else {
    if ((local_80.Variant.TypeIndex != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2d8 = L"{\n\"ok\": 42,\n\"bad\": xyz\n}";
    uStack_2d0 = 0x18;
    local_228._12_4_ = uStack_2cc;
    local_228.Size = 0x18;
    local_228.DataPtr = L"{\n\"ok\": 42,\n\"bad\": xyz\n}";
    UE::Json::FParseError::CreateMessage((FParseError *)&local_80,&local_308,&local_228);
    iVar4 = ::FString::Find(&local_308,L"Line 3",6,IgnoreCase,FromStart,-1);
    if (iVar4 == -1) {
      pFVar5 = FAutomationTestFramework::Get();
      (**(code **)(pFVar5->CurrentTest->_padding_ + 0x28))(pFVar5->CurrentTest,&local_308,0);
      local_2e8.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
    }
    else {
      uStack_2c0 = 0x18;
      local_2c8 = L"{\r\"ok\": 42,\r\"bad\": xyz\r}";
      local_218._12_4_ = uStack_2bc;
      local_218.Size = 0x18;
      local_218.DataPtr = L"{\r\"ok\": 42,\r\"bad\": xyz\r}";
      UE::Json::Parse(&local_e8,&local_218);
      uVar6 = (ulonglong)local_e8.Variant.TypeIndex;
      if ((2 < uVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar6) == '\0') {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_2b8,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_2b8,0);
      }
      else {
        if ((local_e8.Variant.TypeIndex != 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_2a8 = L"{\r\"ok\": 42,\r\"bad\": xyz\r}";
        uStack_2a0 = 0x18;
        local_208._12_4_ = uStack_29c;
        local_208.Size = 0x18;
        local_208.DataPtr = L"{\r\"ok\": 42,\r\"bad\": xyz\r}";
        UE::Json::FParseError::CreateMessage((FParseError *)&local_e8,&local_318,&local_208);
        iVar4 = ::FString::Find(&local_318,L"Line 3",6,IgnoreCase,FromStart,-1);
        if (iVar4 == -1) {
          pFVar5 = FAutomationTestFramework::Get();
          (**(code **)(pFVar5->CurrentTest->_padding_ + 0x28))(pFVar5->CurrentTest,&local_318,0);
          local_2b8.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
        }
        else {
          uStack_290 = 0x1b;
          local_298 = L"{\r\n\"ok\": 42,\r\n\"bad\": xyz\r\n}";
          local_1f8._12_4_ = uStack_28c;
          local_1f8.Size = 0x1b;
          local_1f8.DataPtr = L"{\r\n\"ok\": 42,\r\n\"bad\": xyz\r\n}";
          UE::Json::Parse(&local_150,&local_1f8);
          uVar6 = (ulonglong)local_150.Variant.TypeIndex;
          if ((2 < uVar6) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar6) == '\0') {
            pFVar5 = FAutomationTestFramework::Get();
            pFVar1 = pFVar5->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_288,L"Required condition failed, interrupting test");
            (*pcVar2)(pFVar1,&local_288,0);
          }
          else {
            if ((local_150.Variant.TypeIndex != 1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_278 = L"{\r\n\"ok\": 42,\r\n\"bad\": xyz\r\n}";
            uStack_270 = 0x1b;
            local_1e8._12_4_ = uStack_26c;
            local_1e8.Size = 0x1b;
            local_1e8.DataPtr = L"{\r\n\"ok\": 42,\r\n\"bad\": xyz\r\n}";
            UE::Json::FParseError::CreateMessage((FParseError *)&local_150,&local_328,&local_1e8);
            iVar4 = ::FString::Find(&local_328,L"Line 3",6,IgnoreCase,FromStart,-1);
            if (iVar4 == -1) {
              pFVar5 = FAutomationTestFramework::Get();
              (**(code **)(pFVar5->CurrentTest->_padding_ + 0x28))(pFVar5->CurrentTest,&local_328,0)
              ;
              local_288.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
            }
            else {
              uStack_260 = 0x59;
              local_268 = 
              L"{\n\t\"array\": [\n\t\t0,\n\t\t1,\n\t\t2,\n\t\t3,\n\t\t4,\n\t\t5,\n\t\t6,\n\t\t7,\n\t\tbad_format, \n\t\t9,\n\t\t10,\n\t\t11\n\t]\n}"
              ;
              local_1d8._12_4_ = uStack_25c;
              local_1d8.Size = 0x59;
              local_1d8.DataPtr =
                   L"{\n\t\"array\": [\n\t\t0,\n\t\t1,\n\t\t2,\n\t\t3,\n\t\t4,\n\t\t5,\n\t\t6,\n\t\t7,\n\t\tbad_format, \n\t\t9,\n\t\t10,\n\t\t11\n\t]\n}"
              ;
              UE::Json::Parse(&local_1b8,&local_1d8);
              uVar6 = (ulonglong)local_1b8.Variant.TypeIndex;
              if ((2 < uVar6) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0x12f,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + uVar6) == '\0') {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar1 = pFVar5->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_258,L"Required condition failed, interrupting test");
                (*pcVar2)(pFVar1,&local_258,0);
              }
              else {
                if ((local_1b8.Variant.TypeIndex != 1) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index == TypeIndex",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                       ,0x97,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                local_248 = 
                L"{\n\t\"array\": [\n\t\t0,\n\t\t1,\n\t\t2,\n\t\t3,\n\t\t4,\n\t\t5,\n\t\t6,\n\t\t7,\n\t\tbad_format, \n\t\t9,\n\t\t10,\n\t\t11\n\t]\n}"
                ;
                uStack_240 = 0x59;
                local_1c8._12_4_ = uStack_23c;
                local_1c8.Size = 0x59;
                local_1c8.DataPtr =
                     L"{\n\t\"array\": [\n\t\t0,\n\t\t1,\n\t\t2,\n\t\t3,\n\t\t4,\n\t\t5,\n\t\t6,\n\t\t7,\n\t\tbad_format, \n\t\t9,\n\t\t10,\n\t\t11\n\t]\n}"
                ;
                UE::Json::FParseError::CreateMessage
                          ((FParseError *)&local_1b8,&local_338,&local_1c8);
                iVar4 = ::FString::Find(&local_338,L"bad_format",10,IgnoreCase,FromStart,-1);
                local_258.Data.AllocatorInstance.Data = local_338.Data.AllocatorInstance.Data;
                if (iVar4 == -1) {
                  pFVar5 = FAutomationTestFramework::Get();
                  (**(code **)(pFVar5->CurrentTest->_padding_ + 0x28))
                            (pFVar5->CurrentTest,&local_338,0);
                  local_258.Data.AllocatorInstance.Data = local_338.Data.AllocatorInstance.Data;
                }
              }
              if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258.Data.AllocatorInstance.Data);
              }
              if ((2 < local_1b8.Variant.TypeIndex) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_1b8.Variant.TypeIndex])(&local_1b8);
              local_288.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
            }
          }
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          if ((2 < local_150.Variant.TypeIndex) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_150.Variant.TypeIndex])(&local_150);
          local_2b8.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
        }
      }
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if ((2 < local_e8.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_e8.Variant.TypeIndex])(&local_e8);
      local_2e8.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
    }
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if ((2 < local_80.Variant.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_80.Variant.TypeIndex])(&local_80);
  return;
}

