// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 10

// GetTestFlags @ 141e03530

EAutomationTestFlags __thiscall
FProjectsLoadingProjectDescriptorTests::GetTestFlags(FProjectsLoadingProjectDescriptorTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141e03540

bool __thiscall
FProjectsLoadingProjectDescriptorTests::IsStressTest(FProjectsLoadingProjectDescriptorTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e03550

uint __thiscall
FProjectsLoadingProjectDescriptorTests::GetRequiredDeviceNum
          (FProjectsLoadingProjectDescriptorTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e03560

FString * __thiscall
FProjectsLoadingProjectDescriptorTests::GetTestSourceFileName
          (FProjectsLoadingProjectDescriptorTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\Tests\\RapidJsonPluginLoadingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e03590

int __thiscall
FProjectsLoadingProjectDescriptorTests::GetTestSourceFileLine
          (FProjectsLoadingProjectDescriptorTests *this)

{
  return 0x176;
}

// GetTests @ 141e035a0

/* WARNING: Removing unreachable block (ram,0x000141e0371e) */

void __thiscall
FProjectsLoadingProjectDescriptorTests::GetTests
          (FProjectsLoadingProjectDescriptorTests *this,
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

// RunTest @ 141e03740

bool __thiscall
FProjectsLoadingProjectDescriptorTests::RunTest
          (FProjectsLoadingProjectDescriptorTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141e03770

FString * __thiscall
FProjectsLoadingProjectDescriptorTests::GetBeautifiedTestName
          (FProjectsLoadingProjectDescriptorTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FProjectsLoadingProjectDescriptorTests @ 141e0e440

FProjectsLoadingProjectDescriptorTests * __thiscall
FProjectsLoadingProjectDescriptorTests::FProjectsLoadingProjectDescriptorTests
          (FProjectsLoadingProjectDescriptorTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FProjectsLoadingProjectDescriptorTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Engine::Projects::Loading::ProjectDescriptor");
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

// TestBody @ 141e3b070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProjectsLoadingProjectDescriptorTests::TestBody
          (FProjectsLoadingProjectDescriptorTests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FString *pFVar7;
  FAutomationTestFramework *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  undefined1 auStack_8f8 [32];
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_8d8;
  FString local_8d0;
  FScriptContainerElement *local_8c0;
  int local_8b8;
  int local_8b4;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_8b0;
  FText local_8a0;
  wchar_t *local_888;
  int iStack_880;
  undefined4 uStack_87c;
  wchar_t *local_878;
  int iStack_870;
  undefined4 uStack_86c;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
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
  TStringView<wchar_t> local_788;
  TStringView<wchar_t> local_778;
  FString local_768;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_758;
  FProjectDescriptor local_6e8;
  wchar_t local_5a8 [712];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_8f8;
  local_8d8 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              ((ulonglong)local_8d8 & 0xffffffff00000000);
  memcpy(local_5a8,
         L"\n{\n\t\"FileVersion\": 3,\n\t\"EngineAssociation\": \"EngineAssociation goes here\",\n\t\"Category\": \"Category goes here\",\n\t\"Description\": \"Description goes here\",\n\t\"Enterprise\": true,\n\t\"DisableEnginePluginsByDefault\": true,\n\t\"AdditionalPluginDirectories\": [\"Content\"],\n\t\"AdditionalRootDirectories\": [\"/RootDir\"],\n\t\"TargetPlatforms\": [\"Windows\", \"Linux\"],\n\t\"EpicSampleNameHash\": 1234,\n\t\"Modules\": [\n\t\t{\n\t\t\t\"Name\": \"ModuleA\",\n\t\t\t\"Type\": \"Editor\",\n\t\t\t\"LoadingPhase\": \"Default\"\n\t\t}\n\t],\n\t\"Plugins\": [\n\t\t{\n\t\t\t\"Name\": \"PluginA\",\n\t\t\t\"Enabled\": true\n\t\t}\n\t],\n\t\"PreBuildSteps\": {\n\t\t\"PreBuildStepA\": [\n\t\t\t\"Step 1a\",\n\t\t\t\"Step 2a\",\n\t\t]\n\t},\n\t\"PostBuildSteps\": {\n\t\t\"PostBuildStepA\": [\"Step 1b\"],\n\t\t\"PostBuildStepB\": [\"Step 2b\"],\n\t},\t\n}"
         ,0x588);
  FProjectDescriptor::FProjectDescriptor(&local_6e8);
  local_888 = local_5a8;
  sVar6 = wcslen(local_5a8);
  iStack_880 = (int)sVar6;
  local_788._12_4_ = uStack_87c;
  local_788.Size = iStack_880;
  local_788.DataPtr = local_888;
  UE::Json::Parse(&local_758,&local_788);
  uVar10 = (ulonglong)local_758.Variant.TypeIndex;
  if (2 < uVar10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10) == '\0') {
    local_8d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar7 = &local_8d0;
    local_8d0.Data.ArrayNum = 0;
    local_8d0.Data.ArrayMax = 0;
    bVar3 = false;
    bVar4 = true;
  }
  else {
    if (local_758.Variant.TypeIndex != 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_878 = local_5a8;
    sVar6 = wcslen(local_5a8);
    iStack_870 = (int)sVar6;
    local_778._12_4_ = uStack_86c;
    local_778.Size = iStack_870;
    local_778.DataPtr = local_878;
    pFVar7 = UE::Json::FParseError::CreateMessage((FParseError *)&local_758,&local_768,&local_778);
    bVar3 = true;
    bVar4 = false;
  }
  local_8c0 = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8b8 = (pFVar7->Data).ArrayNum;
  local_8b4 = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  if (bVar4) {
    if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_768.Data.AllocatorInstance.Data);
  }
  uVar10 = (ulonglong)local_758.Variant.TypeIndex;
  if (2 < uVar10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10 + 4) == '\0') {
    pFVar8 = FAutomationTestFramework::Get();
    (**(code **)(pFVar8->CurrentTest->_padding_ + 0x28))(pFVar8->CurrentTest,&local_8c0,0);
    goto LAB_141e3b737;
  }
  if (local_758.Variant.TypeIndex != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Json::GetRootObject
            (&local_8b0,
             (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
              *)&local_758);
  if (local_8b0.bIsSet == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_868,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_868,0);
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
    goto LAB_141e3b737;
  }
  FText::FText(&local_8a0);
  ::FString::FString(&local_858,"UnitTest");
  if (local_8b0.bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_8d8 = local_8b0.TypedValue.value_;
  bVar4 = FProjectDescriptor::Read
                    (&local_6e8,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_8d8,&local_858,&local_8a0);
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_6e8.EngineAssociation.Data.ArrayNum != 0) {
      FVar9.Data = local_6e8.EngineAssociation.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"EngineAssociation goes here");
    if (iVar5 == 0) {
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_6e8.Category.Data.ArrayNum != 0) {
        FVar9.Data = local_6e8.Category.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"Category goes here");
      if (iVar5 == 0) {
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_6e8.Description.Data.ArrayNum != 0) {
          FVar9.Data = local_6e8.Description.Data.AllocatorInstance.Data;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"Description goes here");
        if (iVar5 == 0) {
          if (local_6e8.bIsEnterpriseProject == true) {
            if (local_6e8.bDisableEnginePluginsByDefault == true) {
              if (local_6e8.AdditionalPluginDirectories.ArrayNum == 1) {
                if (local_6e8.TargetPlatforms.ArrayNum < 2) {
                  pFVar8 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar8->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_7e8,L"Required condition failed, interrupting test");
                  (*pcVar2)(pFVar1,&local_7e8,0);
                  local_848.Data.AllocatorInstance.Data = local_7e8.Data.AllocatorInstance.Data;
                }
                else if (local_6e8.EpicSampleNameHash == 0x4d2) {
                  if (local_6e8.Modules.ArrayNum == 1) {
                    if (local_6e8.Plugins.ArrayNum == 1) {
                      if (local_6e8.PreBuildSteps.HostPlatformToCommands._8_4_ -
                          local_6e8.PreBuildSteps.HostPlatformToCommands._52_4_ == 1) {
                        if (local_6e8.PostBuildSteps.HostPlatformToCommands._8_4_ -
                            local_6e8.PostBuildSteps.HostPlatformToCommands._52_4_ == 2)
                        goto LAB_141e3b727;
                        pFVar8 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar8->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_798,
                                           L"Required condition failed, interrupting test");
                        (*pcVar2)(pFVar1,&local_798,0);
                        local_848.Data.AllocatorInstance.Data =
                             local_798.Data.AllocatorInstance.Data;
                      }
                      else {
                        pFVar8 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar8->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_7a8,
                                           L"Required condition failed, interrupting test");
                        (*pcVar2)(pFVar1,&local_7a8,0);
                        local_848.Data.AllocatorInstance.Data =
                             local_7a8.Data.AllocatorInstance.Data;
                      }
                    }
                    else {
                      pFVar8 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar8->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_7b8,L"Required condition failed, interrupting test")
                      ;
                      (*pcVar2)(pFVar1,&local_7b8,0);
                      local_848.Data.AllocatorInstance.Data = local_7b8.Data.AllocatorInstance.Data;
                    }
                  }
                  else {
                    pFVar8 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar8->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_7c8,L"Required condition failed, interrupting test");
                    (*pcVar2)(pFVar1,&local_7c8,0);
                    local_848.Data.AllocatorInstance.Data = local_7c8.Data.AllocatorInstance.Data;
                  }
                }
                else {
                  pFVar8 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar8->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_7d8,L"Required condition failed, interrupting test");
                  (*pcVar2)(pFVar1,&local_7d8,0);
                  local_848.Data.AllocatorInstance.Data = local_7d8.Data.AllocatorInstance.Data;
                }
              }
              else {
                pFVar8 = FAutomationTestFramework::Get();
                pFVar1 = pFVar8->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_7f8,L"Required condition failed, interrupting test");
                (*pcVar2)(pFVar1,&local_7f8,0);
                local_848.Data.AllocatorInstance.Data = local_7f8.Data.AllocatorInstance.Data;
              }
            }
            else {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar1 = pFVar8->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_808,L"Required condition failed, interrupting test");
              (*pcVar2)(pFVar1,&local_808,0);
              local_848.Data.AllocatorInstance.Data = local_808.Data.AllocatorInstance.Data;
            }
          }
          else {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar1 = pFVar8->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_818,L"Required condition failed, interrupting test");
            (*pcVar2)(pFVar1,&local_818,0);
            local_848.Data.AllocatorInstance.Data = local_818.Data.AllocatorInstance.Data;
          }
        }
        else {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar1 = pFVar8->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_828,L"Required condition failed, interrupting test");
          (*pcVar2)(pFVar1,&local_828,0);
          local_848.Data.AllocatorInstance.Data = local_828.Data.AllocatorInstance.Data;
        }
      }
      else {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar1 = pFVar8->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_838,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_838,0);
        local_848.Data.AllocatorInstance.Data = local_838.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar1 = pFVar8->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_848,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_848,0);
    }
    if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    pFVar7 = FText::ToString(&local_8a0);
    (*pcVar2)(pFVar1,pFVar7,0);
  }
LAB_141e3b727:
  if (local_8a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8a0.TextData.Reference + 0x10))();
  }
LAB_141e3b737:
  if (local_8c0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0);
  }
  if (2 < local_758.Variant.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_758.Variant.TypeIndex])(&local_758);
  FProjectDescriptor::~FProjectDescriptor(&local_6e8);
  return;
}

