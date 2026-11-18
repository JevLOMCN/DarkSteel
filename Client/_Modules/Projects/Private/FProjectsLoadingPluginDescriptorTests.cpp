// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 10

// GetTestFlags @ 141e03270

EAutomationTestFlags __thiscall
FProjectsLoadingPluginDescriptorTests::GetTestFlags(FProjectsLoadingPluginDescriptorTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141e03280

bool __thiscall
FProjectsLoadingPluginDescriptorTests::IsStressTest(FProjectsLoadingPluginDescriptorTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e03290

uint __thiscall
FProjectsLoadingPluginDescriptorTests::GetRequiredDeviceNum
          (FProjectsLoadingPluginDescriptorTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e032a0

FString * __thiscall
FProjectsLoadingPluginDescriptorTests::GetTestSourceFileName
          (FProjectsLoadingPluginDescriptorTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\Tests\\RapidJsonPluginLoadingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e032d0

int __thiscall
FProjectsLoadingPluginDescriptorTests::GetTestSourceFileLine
          (FProjectsLoadingPluginDescriptorTests *this)

{
  return 0x8d;
}

// GetTests @ 141e032e0

/* WARNING: Removing unreachable block (ram,0x000141e0345e) */

void __thiscall
FProjectsLoadingPluginDescriptorTests::GetTests
          (FProjectsLoadingPluginDescriptorTests *this,
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

// RunTest @ 141e03480

bool __thiscall
FProjectsLoadingPluginDescriptorTests::RunTest
          (FProjectsLoadingPluginDescriptorTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141e034b0

FString * __thiscall
FProjectsLoadingPluginDescriptorTests::GetBeautifiedTestName
          (FProjectsLoadingPluginDescriptorTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FProjectsLoadingPluginDescriptorTests @ 141e0e270

FProjectsLoadingPluginDescriptorTests * __thiscall
FProjectsLoadingPluginDescriptorTests::FProjectsLoadingPluginDescriptorTests
          (FProjectsLoadingPluginDescriptorTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FProjectsLoadingPluginDescriptorTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Engine::Projects::Loading::PluginDescriptor");
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

// TestBody @ 141e37f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FProjectsLoadingPluginDescriptorTests::TestBody
          (FProjectsLoadingPluginDescriptorTests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FAutomationTestFramework *pFVar6;
  FString *pFVar7;
  TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_1e68 [32];
  undefined8 local_1e48;
  longlong local_1e40;
  FString local_1e38;
  FText local_1e28;
  FString local_1e18;
  FString local_1e08;
  FString local_1df8;
  FString local_1de8;
  FString local_1dd8;
  FString local_1dc8;
  FString local_1db8;
  FString local_1da8;
  FString local_1d98;
  FString local_1d88;
  FString local_1d78;
  FString local_1d68;
  FString local_1d58;
  FString local_1d48;
  FString local_1d38;
  FString local_1d28;
  FString local_1d18;
  FString local_1d08;
  FString local_1cf8;
  FString local_1ce8;
  FString local_1cd8;
  FString local_1cc8;
  FString local_1cb8;
  FString local_1ca8;
  FString local_1c98;
  FString local_1c88;
  FString local_1c78;
  FString local_1c68;
  FString local_1c58;
  FString local_1c48;
  FString local_1c38;
  FString local_1c28;
  FString local_1c18;
  FString local_1c08;
  FString local_1bf8;
  FString local_1be8;
  FString local_1bd8;
  FString local_1bc8;
  FString local_1bb8;
  FString local_1ba8;
  FString local_1b98;
  FString local_1b88;
  FString local_1b78;
  FString local_1b68;
  FString local_1b58;
  FString local_1b48;
  FString local_1b38;
  FString local_1b28;
  FString local_1b18;
  FString local_1b08;
  FString local_1af8;
  FString local_1ae8;
  FString local_1ad8;
  FString local_1ac8;
  FString local_1ab8;
  FString local_1aa8;
  FString local_1a98;
  FString local_1a88;
  FString local_1a78;
  FString local_1a68;
  FString local_1a58;
  FString local_1a48;
  FString local_1a38;
  FString local_1a28;
  FString local_1a18;
  FString local_1a08;
  FString local_19f8;
  FString local_19e8;
  FString local_19d8;
  FString local_19c8;
  FString local_19b8;
  FString local_19a8;
  FString local_1998;
  FString local_1988;
  FString local_1978;
  FString local_1968;
  FString local_1958;
  FString local_1948;
  FString local_1938;
  FString local_1928;
  FString local_1918;
  FString local_1908;
  FString local_18f8;
  FString local_18e8;
  FString local_18d8;
  FString local_18c8;
  FString local_18b8;
  FString local_18a8;
  FString local_1898;
  FString local_1888;
  FString local_1878;
  FString local_1868;
  FString local_1858;
  FString local_1848;
  FString local_1838;
  FString local_1828;
  FString local_1818;
  FString local_1808;
  FPluginDescriptor local_17f8;
  wchar_t local_15e8 [2792];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x141e37f54;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1e68;
  memcpy(local_15e8,
         L"\n{\n\t\"FileVersion\": 3,\n\t\"Version\": 8,\n\t\"VersionName\": \"0.2\",\n\t\"FriendlyName\": \"Test Plugin\",\n\t\"Description\": \"Test Plugin for unit testing\",\n\t\"Category\": \"Editor\",\n\t\"CreatedBy\": \"Epic Games, Inc.\",\n\t\"CreatedByURL\": \"https://epicgames.com\",\n\t\"DocsURL\": \"DocsURL goes here\",\n\t\"MarketplaceURL\": \"MarketplaceURL goes here\",\n\t\"SupportURL\": \"SupportURL goes here\",\n\t\"EngineVersion\": \"5.5\",\n\t\"EditorCustomVirtualPath\": \"EditorCustomVirtualPath goes here\",\n\t\"SupportedTargetPlatforms\": [\"Win64\", \"Mac\"],\n\t\"SupportedPrograms\": [\"UnrealInsights\"],\n\t\"bIsPluginExtension\": true,\n\t\"EnabledByDefault\": false,\n\t\"Installed\": true,\n\t\"VersePath\": \"/VersePath.com\",\n\t\"DeprecatedEngineVersion\": \"5.5\",\n\t\"VerseScope\": \"InternalAPI\",\n\t\"VerseVersion\": 1,\n\t\"EnableSceneGraph\": true,\n\t\"EnableVerseAssetReflection\": true,\n\t\"EnableIAD\": true,\n\t\"CanContainContent\": true,\n\t\"CanContainVerse\": true,\n\t\"NoCode\": true,\n\t\"IsBetaVersion\": true,\n\t\"IsExperimentalVersion\": true,\n\t\"RequiresBuildPlatform\": true,\n\t\"Hidden\": true,\n\t\"Sealed\": true,\n\t\"ExplicitlyLoaded\": true,\n\t\"HasExplicitPlatforms\": true,\n\t\"CanBeUsedWithUnrealHeaderTool\": true,\n\t\"LocalizationTargets\": [\n\t\t{\n\t\t\t\"Name\": \"LocalizationTarget AAA\",\n\t\t\t\"LoadingPolicy\": \"Always\",\n\t\t\t\"ConfigGenerationPolicy\": \"Auto\"\n\t\t}\n\t],\n\t\"Modules\": [\n\t\t{\n\t\t\t\"Name\": \"AAA\",\n\t\t\t\"Type\": \"DeveloperTool\",\n\t\t\t\"LoadingPhase\": \"Default\",\n\t\t\t\"HasExplicitPlatforms\": true,\n\t\t\t\"PlatformAllowList\": [\"Win64\"],\n\t\t\t\"PlatformDenyList\": [\"Mac\"],\n\t\t\t\"TargetAllowList\" : [\"Editor\"],\n\t\t\t\"TargetDenyList\" : [\"Client\"],\n\t\t\t\"TargetConfigurationAllowList\" : [\"Test\"],\n\t\t\t\"TargetConfigurationDenyList\" : [\"DebugGame\"],\n\t\t\t\"ProgramAllowList\" : [\"UnrealInsights\"],\n\t\t\t\"ProgramDenyList\" : [\"LiveLinkHub\"],\n\t\t\t\"GameTargetAllowList\" : [\"AAA\"],\n\t\t\t\"GameTargetDenyList\" : [\"BBB\"],\n\t\t\t\"AdditionalDependencies\" : [\"AAA\", \"BBB\"]\n\t\t},\n\t\t{\n\t\t\t\"Name\": \"BBB\",\n\t\t\t\"Type\": \"Editor\",\n\t\t\t\"LoadingPhase\": \"Default\"\n\t\t},\n\t\t{\n\t\t\t\"Name\": \"CCC\",\n\t\t\t\"Type\": \"Runtime\",\n\t\t\t\"LoadingPhase\": \"PostConfigInit\"\n\t\t}\n\t],\n\t\"Plugins\": [\n\t\t{\n\t\t\t\"Name\": \"DDD\",\n\t\t\t\"Enabled\": true,\n\t\t\t\"Optional\": t..." /* TRUNCATED STRING LITERAL */
         ,0x15cc);
  FText::FText(&local_1e28);
  FPluginDescriptor::FPluginDescriptor(&local_17f8);
  ::FString::FString(&local_1e18,local_15e8);
  bVar3 = FPluginDescriptor::Read(&local_17f8,&local_1e18,&local_1e28);
  if (local_1e18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (local_17f8.Version == 8) {
      pwVar11 = L"";
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_17f8.VersionName.Data.ArrayNum != 0) {
        FVar9.Data = local_17f8.VersionName.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"0.2");
      if (iVar4 == 0) {
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_17f8.FriendlyName.Data.ArrayNum != 0) {
          FVar9.Data = local_17f8.FriendlyName.Data.AllocatorInstance.Data;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"Test Plugin");
        if (iVar4 == 0) {
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_17f8.Description.Data.ArrayNum != 0) {
            FVar9.Data = local_17f8.Description.Data.AllocatorInstance.Data;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)FVar9.Data,L"Test Plugin for unit testing");
          if (iVar4 == 0) {
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_17f8.Category.Data.ArrayNum != 0) {
              FVar9.Data = local_17f8.Category.Data.AllocatorInstance.Data;
            }
            iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"Editor");
            if (iVar4 == 0) {
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_17f8.CreatedBy.Data.ArrayNum != 0) {
                FVar9.Data = local_17f8.CreatedBy.Data.AllocatorInstance.Data;
              }
              iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"Epic Games, Inc.");
              if (iVar4 == 0) {
                FVar9.Data = (FScriptContainerElement *)L"";
                if (local_17f8.CreatedByURL.Data.ArrayNum != 0) {
                  FVar9.Data = local_17f8.CreatedByURL.Data.AllocatorInstance.Data;
                }
                iVar4 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)FVar9.Data,L"https://epicgames.com");
                if (iVar4 == 0) {
                  FVar9.Data = (FScriptContainerElement *)L"";
                  if (local_17f8.DocsURL.Data.ArrayNum != 0) {
                    FVar9.Data = local_17f8.DocsURL.Data.AllocatorInstance.Data;
                  }
                  iVar4 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)FVar9.Data,L"DocsURL goes here");
                  if (iVar4 == 0) {
                    FVar9.Data = (FScriptContainerElement *)L"";
                    if (local_17f8.MarketplaceURL.Data.ArrayNum != 0) {
                      FVar9.Data = local_17f8.MarketplaceURL.Data.AllocatorInstance.Data;
                    }
                    iVar4 = FGenericPlatformStricmp::Stricmp
                                      ((wchar_t *)FVar9.Data,L"MarketplaceURL goes here");
                    if (iVar4 == 0) {
                      FVar9.Data = (FScriptContainerElement *)L"";
                      if (local_17f8.SupportURL.Data.ArrayNum != 0) {
                        FVar9.Data = local_17f8.SupportURL.Data.AllocatorInstance.Data;
                      }
                      iVar4 = FGenericPlatformStricmp::Stricmp
                                        ((wchar_t *)FVar9.Data,L"SupportURL goes here");
                      if (iVar4 == 0) {
                        FVar9.Data = (FScriptContainerElement *)L"";
                        if (local_17f8.EngineVersion.Data.ArrayNum != 0) {
                          FVar9.Data = local_17f8.EngineVersion.Data.AllocatorInstance.Data;
                        }
                        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L"5.5");
                        if (iVar4 == 0) {
                          FVar9.Data = (FScriptContainerElement *)L"";
                          if (local_17f8.EditorCustomVirtualPath.Data.ArrayNum != 0) {
                            FVar9.Data = local_17f8.EditorCustomVirtualPath.Data.AllocatorInstance.
                                         Data;
                          }
                          iVar4 = FGenericPlatformStricmp::Stricmp
                                            ((wchar_t *)FVar9.Data,
                                             L"EditorCustomVirtualPath goes here");
                          if (iVar4 == 0) {
                            if (local_17f8.SupportedTargetPlatforms.ArrayNum == 2) {
                              if (*(int *)(local_17f8.SupportedTargetPlatforms.AllocatorInstance.
                                           Data + 8) == 0) {
                                pwVar10 = L"";
                              }
                              else {
                                pwVar10 = *(wchar_t **)
                                           local_17f8.SupportedTargetPlatforms.AllocatorInstance.
                                           Data;
                              }
                              iVar4 = FGenericPlatformStricmp::Stricmp(pwVar10,L"Win64");
                              if (iVar4 == 0) {
                                if (local_17f8.SupportedTargetPlatforms.ArrayNum < 2) {
                                  local_1e40 = (longlong)
                                               local_17f8.SupportedTargetPlatforms.ArrayNum;
                                  local_1e48 = 1;
                                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                  if (bVar3) {
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                }
                                if (*(int *)(local_17f8.SupportedTargetPlatforms.AllocatorInstance.
                                             Data + 0x18) == 0) {
                                  pwVar10 = L"";
                                }
                                else {
                                  pwVar10 = *(wchar_t **)
                                             (local_17f8.SupportedTargetPlatforms.AllocatorInstance.
                                              Data + 0x10);
                                }
                                iVar4 = FGenericPlatformStricmp::Stricmp(pwVar10,L"Mac");
                                if (iVar4 == 0) {
                                  if (local_17f8.SupportedPrograms.ArrayNum == 2) {
                                    if (*(int *)(local_17f8.SupportedPrograms.AllocatorInstance.Data
                                                + 8) == 0) {
                                      pwVar10 = L"";
                                    }
                                    else {
                                      pwVar10 = *(wchar_t **)
                                                 local_17f8.SupportedPrograms.AllocatorInstance.Data
                                      ;
                                    }
                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                      (pwVar10,L"UnrealInsights");
                                    if (iVar4 == 0) {
                                      if (local_17f8.SupportedPrograms.ArrayNum < 2) {
                                        local_1e40 = (longlong)local_17f8.SupportedPrograms.ArrayNum
                                        ;
                                        local_1e48 = 1;
                                        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                          ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                        if (bVar3) {
                                          pcVar2 = (code *)swi(3);
                                          (*pcVar2)();
                                          return;
                                        }
                                      }
                                      if (*(int *)(local_17f8.SupportedPrograms.AllocatorInstance.
                                                   Data + 0x18) == 0) {
                                        pwVar10 = L"";
                                      }
                                      else {
                                        pwVar10 = *(wchar_t **)
                                                   (local_17f8.SupportedPrograms.AllocatorInstance.
                                                    Data + 0x10);
                                      }
                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                        (pwVar10,L"UnrealHeaderTool");
                                      if (iVar4 == 0) {
                                        if (local_17f8.bIsPluginExtension == true) {
                                          FVar9.Data = (FScriptContainerElement *)L"";
                                          if (local_17f8.VersePath.Data.ArrayNum != 0) {
                                            FVar9.Data = local_17f8.VersePath.Data.AllocatorInstance
                                                         .Data;
                                          }
                                          iVar4 = FGenericPlatformStricmp::Stricmp
                                                            ((wchar_t *)FVar9.Data,L"/VersePath.com"
                                                            );
                                          if (iVar4 == 0) {
                                            FVar9.Data = (FScriptContainerElement *)L"";
                                            if (local_17f8.DeprecatedEngineVersion.Data.ArrayNum !=
                                                0) {
                                              FVar9.Data = local_17f8.DeprecatedEngineVersion.Data.
                                                           AllocatorInstance.Data;
                                            }
                                            iVar4 = FGenericPlatformStricmp::Stricmp
                                                              ((wchar_t *)FVar9.Data,L"5.5");
                                            if (iVar4 == 0) {
                                              if (local_17f8.VerseScope == InternalAPI) {
                                                if ((local_17f8.VerseVersion.bIsSet == true) &&
                                                   (local_17f8.VerseVersion.TypedValue == 1)) {
                                                  if (local_17f8.bEnableSceneGraph == true) {
                                                    if (local_17f8.bEnableVerseAssetReflection ==
                                                        true) {
                                                      if (local_17f8.bEnableIAD == true) {
                                                        if (local_17f8.EnabledByDefault == Disabled)
                                                        {
                                                          if (local_17f8.bCanContainContent == true)
                                                          {
                                                            if (local_17f8.bCanContainVerse == true)
                                                            {
                                                              if (local_17f8.bNoCode == true) {
                                                                if (local_17f8.bIsBetaVersion ==
                                                                    true) {
                                                                  if (local_17f8.
                                                                      bIsExperimentalVersion == true
                                                                     ) {
                                                                    if (local_17f8.bInstalled ==
                                                                        true) {
                                                                      if (local_17f8.
                                                                          bRequiresBuildPlatform ==
                                                                          true) {
                                                                        if (local_17f8.bIsHidden ==
                                                                            true) {
                                                                          if (local_17f8.bIsSealed
                                                                              == true) {
                                                                            if (local_17f8.
                                                                                bExplicitlyLoaded ==
                                                                                true) {
                                                                              if (local_17f8.
                                                                                                                                                                    
                                                  bHasExplicitPlatforms == true) {
                                                    if (local_17f8.LocalizationTargets.ArrayNum == 1
                                                       ) {
                                                      if (*(int *)(local_17f8.LocalizationTargets.
                                                                   AllocatorInstance.Data + 8) == 0)
                                                      {
                                                        pwVar10 = L"";
                                                      }
                                                      else {
                                                        pwVar10 = *(wchar_t **)
                                                                   local_17f8.LocalizationTargets.
                                                                   AllocatorInstance.Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        (pwVar10,
                                                  L"LocalizationTarget AAA");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.LocalizationTargets.ArrayNum < 1)
                                                    {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.LocalizationTargets.
                                                                   ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.LocalizationTargets.
                                                               AllocatorInstance.Data + 0x10) == 1)
                                                  {
                                                    if (local_17f8.LocalizationTargets.ArrayNum < 1)
                                                    {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.LocalizationTargets.
                                                                   ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.LocalizationTargets.
                                                               AllocatorInstance.Data + 0x14) == 2)
                                                  {
                                                    if (local_17f8.Modules.ArrayNum == 3) {
                                                      bVar3 = ::FName::Equals(*(FName *)local_17f8.
                                                                                        Modules.
                                                  AllocatorInstance.Data,L"AAA");
                                                  if (bVar3) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       8))->ComparisonIndex).Value == 6) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(uint *)(local_17f8.Modules.AllocatorInstance
                                                                .Data + 0xc) == 6) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((char)(((FName *)
                                                             (local_17f8.Modules.AllocatorInstance.
                                                              Data + 0x160))->ComparisonIndex).Value
                                                      == '\x01') {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0x18))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0x18))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)((longlong)
                                                               *(FName *)(FVar9.Data + 0x10) + 8) ==
                                                      0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               *(FName *)(FVar9.Data + 0x10);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"Win64");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0x28))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)((longlong)
                                                               *(FName *)(FVar9.Data + 0x20) + 8) ==
                                                      0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               *(FName *)(FVar9.Data + 0x20);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"Mac");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0x28))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0xd8))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0xd8))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(char *)*(FName *)(FVar9.Data + 0xd0) ==
                                                      '\x04') {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0xe8))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0xe8))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(char *)*(FName *)(FVar9.Data + 0xe0) ==
                                                      '\x03') {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0xf8))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0xf8))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(char *)*(FName *)(FVar9.Data + 0xf0) ==
                                                      '\x05') {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0x108))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0x108))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(char *)*(FName *)(FVar9.Data + 0x100) ==
                                                      '\x02') {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0x118))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0x118))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)((longlong)
                                                               *(FName *)(FVar9.Data + 0x110) + 8)
                                                      == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               *(FName *)(FVar9.Data + 0x110);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"UnrealInsights");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0x128))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0x128))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)((longlong)
                                                               *(FName *)(FVar9.Data + 0x120) + 8)
                                                      == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               *(FName *)(FVar9.Data + 0x120);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"LiveLinkHub");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0x138))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0x138))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)((longlong)
                                                               *(FName *)(FVar9.Data + 0x130) + 8)
                                                      == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               *(FName *)(FVar9.Data + 0x130);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"AAA");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0x148))->ComparisonIndex).Value == 1) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0x148))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)((longlong)
                                                               *(FName *)(FVar9.Data + 0x140) + 8)
                                                      == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               *(FName *)(FVar9.Data + 0x140);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"BBB");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if ((((FName *)
                                                       (local_17f8.Modules.AllocatorInstance.Data +
                                                       0x158))->ComparisonIndex).Value == 2) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Modules.AllocatorInstance.
                                                               Data;
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0x158))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)((longlong)
                                                               *(FName *)(FVar9.Data + 0x150) + 8)
                                                      == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               *(FName *)(FVar9.Data + 0x150);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"AAA");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Modules.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Modules.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  uVar5 = (((FName *)
                                                           (local_17f8.Modules.AllocatorInstance.
                                                            Data + 0x158))->ComparisonIndex).Value;
                                                  if ((int)uVar5 < 2) {
                                                    local_1e48 = 1;
                                                    local_1e40 = (longlong)(int)uVar5;
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)((longlong)
                                                               *(FName *)(local_17f8.Modules.
                                                                          AllocatorInstance.Data +
                                                                         0x150) + 0x18) == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               ((longlong)
                                                                *(FName *)(local_17f8.Modules.
                                                                           AllocatorInstance.Data +
                                                                          0x150) + 0x10);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"BBB");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Plugins.ArrayNum == 2) {
                                                      if (*(int *)(local_17f8.Plugins.
                                                                   AllocatorInstance.Data + 8) == 0)
                                                      {
                                                        pwVar10 = L"";
                                                      }
                                                      else {
                                                        pwVar10 = *(wchar_t **)
                                                                   local_17f8.Plugins.
                                                                   AllocatorInstance.Data;
                                                      }
                                                      iVar4 = FGenericPlatformStricmp::Stricmp
                                                                        (pwVar10,L"DDD");
                                                      if (iVar4 == 0) {
                                                        if (local_17f8.Plugins.ArrayNum < 1) {
                                                          local_1e40 = (longlong)
                                                                       local_17f8.Plugins.ArrayNum;
                                                          local_1e48 = 0;
                                                          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                            (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (local_17f8.Plugins.AllocatorInstance.Data
                                                      [0x10] == (FScriptContainerElement)0x1) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (local_17f8.Plugins.AllocatorInstance.Data
                                                      [0x11] == (FScriptContainerElement)0x1) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x20) == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               (local_17f8.Plugins.AllocatorInstance
                                                                .Data + 0x18);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,
                                                  L"Ref Description goes here");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x30) == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               (local_17f8.Plugins.AllocatorInstance
                                                                .Data + 0x28);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,
                                                  L"Ref MarketplaceURL goes here");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x40) == 1) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Plugins.AllocatorInstance.
                                                               Data;
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x40) < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)
                                                                 *(int *)(local_17f8.Plugins.
                                                                          AllocatorInstance.Data +
                                                                         0x40);
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(*(undefined8 **)(FVar9.Data + 0x38) +
                                                              1) == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = (wchar_t *)
                                                              **(undefined8 **)(FVar9.Data + 0x38);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"Win64");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Plugins.AllocatorInstance.
                                                               Data;
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x50) < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)
                                                                 *(int *)(local_17f8.Plugins.
                                                                          AllocatorInstance.Data +
                                                                         0x50);
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(*(undefined8 **)(FVar9.Data + 0x48) +
                                                              1) == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = (wchar_t *)
                                                              **(undefined8 **)(FVar9.Data + 0x48);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"Mac");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x50) == 1) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x80) == 1) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Plugins.AllocatorInstance.
                                                               Data;
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x80) < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)
                                                                 *(int *)(local_17f8.Plugins.
                                                                          AllocatorInstance.Data +
                                                                         0x80);
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (**(char **)(FVar9.Data + 0x78) == '\x04') {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x90) == 1) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Plugins.AllocatorInstance.
                                                               Data;
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x90) < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)
                                                                 *(int *)(local_17f8.Plugins.
                                                                          AllocatorInstance.Data +
                                                                         0x90);
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (**(char **)(FVar9.Data + 0x88) == '\x03') {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x60) == 1) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  FVar9.Data = local_17f8.Plugins.AllocatorInstance.
                                                               Data;
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x60) < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)
                                                                 *(int *)(local_17f8.Plugins.
                                                                          AllocatorInstance.Data +
                                                                         0x60);
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (**(char **)(FVar9.Data + 0x58) == '\x05') {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x70) == 1) {
                                                    if (local_17f8.Plugins.ArrayNum < 1) {
                                                      local_1e40 = (longlong)
                                                                   local_17f8.Plugins.ArrayNum;
                                                      local_1e48 = 0;
                                                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(local_17f8.Plugins.AllocatorInstance.
                                                               Data + 0x70) < 1) {
                                                    local_1e48 = 0;
                                                    local_1e40 = (longlong)
                                                                 *(int *)(local_17f8.Plugins.
                                                                          AllocatorInstance.Data +
                                                                         0x70);
                                                    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (**(char **)(local_17f8.Plugins.
                                                                  AllocatorInstance.Data + 0x68) ==
                                                      '\x02') {
                                                    if (local_17f8.PreBuildSteps.
                                                        HostPlatformToCommands._8_4_ -
                                                        local_17f8.PreBuildSteps.
                                                        HostPlatformToCommands._52_4_ == 1) {
                                                      ::FString::FString(&local_1e38,
                                                                         L"PreBuildStepA");
                                                      iVar4 = local_1e38.Data.ArrayNum + -1;
                                                      FVar9.Data = local_1e38.Data.AllocatorInstance
                                                                   .Data;
                                                      if (local_1e38.Data.ArrayNum == 0) {
                                                        iVar4 = 0;
                                                        FVar9.Data = (FScriptContainerElement *)L"";
                                                      }
                                                      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>
                                                                        (iVar4,(wchar_t *)FVar9.Data
                                                                        );
                                                      iVar4 = 
                                                  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                                  ::FindIndexByHash<FString>
                                                            ((
                                                  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                                  *)&local_17f8.PreBuildSteps,uVar5,&local_1e38);
                                                  if (local_1e38.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1e38.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (iVar4 == -1) {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1888,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1888,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1888.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    ::FString::FString(&local_1878,L"PreBuildStepA")
                                                    ;
                                                    pTVar8 = 
                                                  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                                  ::Find((
                                                  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                                  *)&local_17f8.PreBuildSteps,&local_1878);
                                                  if ((pTVar8 == (
                                                  TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>
                                                  *)0x0) && (bVar3 = ::FDebug::
                                                                     CheckVerifyFailedImpl2
                                                                               ("Pair != nullptr",
                                                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                                  ,0x288,L""), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  if (local_1878.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1878.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (*(int *)&pTVar8->field_0x18 == 2) {
                                                    if (*(int *)(*(undefined8 **)&pTVar8->field_0x10
                                                                + 1) == 0) {
                                                      pwVar10 = L"";
                                                    }
                                                    else {
                                                      pwVar10 = (wchar_t *)
                                                                **(undefined8 **)&pTVar8->field_0x10
                                                      ;
                                                    }
                                                    iVar4 = FGenericPlatformStricmp::Stricmp
                                                                      (pwVar10,L"Step 1a");
                                                    if (iVar4 == 0) {
                                                      if (*(int *)&pTVar8->field_0x18 < 2) {
                                                        local_1e48 = 1;
                                                        local_1e40 = (longlong)
                                                                     *(int *)&pTVar8->field_0x18;
                                                        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                                  if (bVar3) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  }
                                                  if (*(int *)(*(longlong *)&pTVar8->field_0x10 +
                                                              0x18) == 0) {
                                                    pwVar10 = L"";
                                                  }
                                                  else {
                                                    pwVar10 = *(wchar_t **)
                                                               (*(longlong *)&pTVar8->field_0x10 +
                                                               0x10);
                                                  }
                                                  iVar4 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar10,L"Step 2a");
                                                  if (iVar4 == 0) {
                                                    if (local_17f8.PostBuildSteps.
                                                        HostPlatformToCommands._8_4_ -
                                                        local_17f8.PostBuildSteps.
                                                        HostPlatformToCommands._52_4_ == 2) {
                                                      if (local_17f8.DisallowedPlugins.ArrayNum == 1
                                                         ) {
                                                        if (*(int *)(local_17f8.DisallowedPlugins.
                                                                     AllocatorInstance.Data + 8) !=
                                                            0) {
                                                          pwVar11 = *(wchar_t **)
                                                                     local_17f8.DisallowedPlugins.
                                                                     AllocatorInstance.Data;
                                                        }
                                                        iVar4 = FGenericPlatformStricmp::Stricmp
                                                                          (pwVar11,L"ABC");
                                                        if (iVar4 == 0) goto LAB_141e3b016;
                                                        pFVar6 = FAutomationTestFramework::Get();
                                                        pFVar1 = pFVar6->CurrentTest;
                                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28
                                                                           );
                                                        ::FString::FString(&local_1818,
                                                                                                                                                      
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1818,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1818.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1828,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1828,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1828.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1838,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1838,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1838.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1848,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1848,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1848.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1858,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1858,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1858.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1868,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1868,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1868.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1898,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1898,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1898.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_18a8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_18a8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_18a8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_18b8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_18b8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_18b8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_18c8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_18c8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_18c8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_18d8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_18d8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_18d8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_18e8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_18e8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_18e8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_18f8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_18f8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_18f8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1908,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1908,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1908.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1918,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1918,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1918.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1928,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1928,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1928.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1938,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1938,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1938.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1948,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1948,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1948.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1958,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1958,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1958.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1968,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1968,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1968.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1978,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1978,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1978.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1988,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1988,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1988.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1998,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1998,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1998.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_19a8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_19a8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_19a8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_19b8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_19b8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_19b8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_19c8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_19c8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_19c8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_19d8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_19d8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_19d8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_19e8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_19e8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_19e8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_19f8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_19f8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_19f8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a08,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a08,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a08.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a18,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a18,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a18.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a28,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a28,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a28.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a38,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a38,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a38.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a48,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a48,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a48.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a58,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a58,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a58.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a68,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a68,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a68.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a78,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a78,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a78.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a88,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a88,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a88.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a98,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1a98,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1a98.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1aa8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1aa8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1aa8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1ab8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1ab8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1ab8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1ac8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1ac8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1ac8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1ad8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1ad8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1ad8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1ae8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1ae8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1ae8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1af8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1af8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1af8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b08,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b08,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b08.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b18,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b18,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b18.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b28,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b28,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b28.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b38,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b38,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b38.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b48,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b48,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b48.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b58,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b58,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b58.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b68,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b68,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b68.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b78,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b78,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b78.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b88,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b88,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b88.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1b98,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1b98,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1b98.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1ba8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1ba8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1ba8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1bb8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1bb8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1bb8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1bc8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1bc8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1bc8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1bd8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1bd8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1bd8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1be8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1be8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1be8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1bf8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1bf8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1bf8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c08,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c08,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c08.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c18,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c18,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c18.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c28,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c28,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c28.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c38,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c38,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c38.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c48,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c48,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c48.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c58,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c58,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c58.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c68,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c68,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c68.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c78,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c78,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c78.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c88,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c88,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c88.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1c98,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1c98,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1c98.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  else {
                                                    pFVar6 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar6->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1ca8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1ca8,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1ca8.Data.AllocatorInstance.Data;
                                                  }
                                                }
                                                else {
                                                  pFVar6 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar6->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                  ::FString::FString(&local_1808,
                                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1808,0);
                                                  local_1e08.Data.AllocatorInstance.Data =
                                                       local_1808.Data.AllocatorInstance.Data;
                                                }
                                              }
                                              else {
                                                pFVar6 = FAutomationTestFramework::Get();
                                                pFVar1 = pFVar6->CurrentTest;
                                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                ::FString::FString(&local_1cb8,
                                                                                                                                      
                                                  L"Required condition failed, interrupting test");
                                                (*pcVar2)(pFVar1,&local_1cb8,0);
                                                local_1e08.Data.AllocatorInstance.Data =
                                                     local_1cb8.Data.AllocatorInstance.Data;
                                              }
                                            }
                                            else {
                                              pFVar6 = FAutomationTestFramework::Get();
                                              pFVar1 = pFVar6->CurrentTest;
                                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                              ::FString::FString(&local_1cc8,
                                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                              (*pcVar2)(pFVar1,&local_1cc8,0);
                                              local_1e08.Data.AllocatorInstance.Data =
                                                   local_1cc8.Data.AllocatorInstance.Data;
                                            }
                                          }
                                          else {
                                            pFVar6 = FAutomationTestFramework::Get();
                                            pFVar1 = pFVar6->CurrentTest;
                                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                            ::FString::FString(&local_1cd8,
                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                            (*pcVar2)(pFVar1,&local_1cd8,0);
                                            local_1e08.Data.AllocatorInstance.Data =
                                                 local_1cd8.Data.AllocatorInstance.Data;
                                          }
                                        }
                                        else {
                                          pFVar6 = FAutomationTestFramework::Get();
                                          pFVar1 = pFVar6->CurrentTest;
                                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                          ::FString::FString(&local_1ce8,
                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                          (*pcVar2)(pFVar1,&local_1ce8,0);
                                          local_1e08.Data.AllocatorInstance.Data =
                                               local_1ce8.Data.AllocatorInstance.Data;
                                        }
                                      }
                                      else {
                                        pFVar6 = FAutomationTestFramework::Get();
                                        pFVar1 = pFVar6->CurrentTest;
                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                        ::FString::FString(&local_1cf8,
                                                                                                                      
                                                  L"Required condition failed, interrupting test");
                                        (*pcVar2)(pFVar1,&local_1cf8,0);
                                        local_1e08.Data.AllocatorInstance.Data =
                                             local_1cf8.Data.AllocatorInstance.Data;
                                      }
                                    }
                                    else {
                                      pFVar6 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar6->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                      ::FString::FString(&local_1d08,
                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                      (*pcVar2)(pFVar1,&local_1d08,0);
                                      local_1e08.Data.AllocatorInstance.Data =
                                           local_1d08.Data.AllocatorInstance.Data;
                                    }
                                  }
                                  else {
                                    pFVar6 = FAutomationTestFramework::Get();
                                    pFVar1 = pFVar6->CurrentTest;
                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                    ::FString::FString(&local_1d18,
                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                    (*pcVar2)(pFVar1,&local_1d18,0);
                                    local_1e08.Data.AllocatorInstance.Data =
                                         local_1d18.Data.AllocatorInstance.Data;
                                  }
                                }
                                else {
                                  pFVar6 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar6->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_1d28,
                                                     L"Required condition failed, interrupting test"
                                                    );
                                  (*pcVar2)(pFVar1,&local_1d28,0);
                                  local_1e08.Data.AllocatorInstance.Data =
                                       local_1d28.Data.AllocatorInstance.Data;
                                }
                              }
                              else {
                                pFVar6 = FAutomationTestFramework::Get();
                                pFVar1 = pFVar6->CurrentTest;
                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                ::FString::FString(&local_1d38,
                                                   L"Required condition failed, interrupting test");
                                (*pcVar2)(pFVar1,&local_1d38,0);
                                local_1e08.Data.AllocatorInstance.Data =
                                     local_1d38.Data.AllocatorInstance.Data;
                              }
                            }
                            else {
                              pFVar6 = FAutomationTestFramework::Get();
                              pFVar1 = pFVar6->CurrentTest;
                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                              ::FString::FString(&local_1d48,
                                                 L"Required condition failed, interrupting test");
                              (*pcVar2)(pFVar1,&local_1d48,0);
                              local_1e08.Data.AllocatorInstance.Data =
                                   local_1d48.Data.AllocatorInstance.Data;
                            }
                          }
                          else {
                            pFVar6 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar6->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_1d58,
                                               L"Required condition failed, interrupting test");
                            (*pcVar2)(pFVar1,&local_1d58,0);
                            local_1e08.Data.AllocatorInstance.Data =
                                 local_1d58.Data.AllocatorInstance.Data;
                          }
                        }
                        else {
                          pFVar6 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar6->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                          ::FString::FString(&local_1d68,
                                             L"Required condition failed, interrupting test");
                          (*pcVar2)(pFVar1,&local_1d68,0);
                          local_1e08.Data.AllocatorInstance.Data =
                               local_1d68.Data.AllocatorInstance.Data;
                        }
                      }
                      else {
                        pFVar6 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar6->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_1d78,
                                           L"Required condition failed, interrupting test");
                        (*pcVar2)(pFVar1,&local_1d78,0);
                        local_1e08.Data.AllocatorInstance.Data =
                             local_1d78.Data.AllocatorInstance.Data;
                      }
                    }
                    else {
                      pFVar6 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar6->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_1d88,L"Required condition failed, interrupting test"
                                        );
                      (*pcVar2)(pFVar1,&local_1d88,0);
                      local_1e08.Data.AllocatorInstance.Data =
                           local_1d88.Data.AllocatorInstance.Data;
                    }
                  }
                  else {
                    pFVar6 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar6->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_1d98,L"Required condition failed, interrupting test");
                    (*pcVar2)(pFVar1,&local_1d98,0);
                    local_1e08.Data.AllocatorInstance.Data = local_1d98.Data.AllocatorInstance.Data;
                  }
                }
                else {
                  pFVar6 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar6->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_1da8,L"Required condition failed, interrupting test");
                  (*pcVar2)(pFVar1,&local_1da8,0);
                  local_1e08.Data.AllocatorInstance.Data = local_1da8.Data.AllocatorInstance.Data;
                }
              }
              else {
                pFVar6 = FAutomationTestFramework::Get();
                pFVar1 = pFVar6->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_1db8,L"Required condition failed, interrupting test");
                (*pcVar2)(pFVar1,&local_1db8,0);
                local_1e08.Data.AllocatorInstance.Data = local_1db8.Data.AllocatorInstance.Data;
              }
            }
            else {
              pFVar6 = FAutomationTestFramework::Get();
              pFVar1 = pFVar6->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_1dc8,L"Required condition failed, interrupting test");
              (*pcVar2)(pFVar1,&local_1dc8,0);
              local_1e08.Data.AllocatorInstance.Data = local_1dc8.Data.AllocatorInstance.Data;
            }
          }
          else {
            pFVar6 = FAutomationTestFramework::Get();
            pFVar1 = pFVar6->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_1dd8,L"Required condition failed, interrupting test");
            (*pcVar2)(pFVar1,&local_1dd8,0);
            local_1e08.Data.AllocatorInstance.Data = local_1dd8.Data.AllocatorInstance.Data;
          }
        }
        else {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_1de8,L"Required condition failed, interrupting test");
          (*pcVar2)(pFVar1,&local_1de8,0);
          local_1e08.Data.AllocatorInstance.Data = local_1de8.Data.AllocatorInstance.Data;
        }
      }
      else {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar1 = pFVar6->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_1df8,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_1df8,0);
        local_1e08.Data.AllocatorInstance.Data = local_1df8.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_1e08,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_1e08,0);
    }
    if (local_1e08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e08.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    pFVar7 = FText::ToString(&local_1e28);
    (*pcVar2)(pFVar1,pFVar7,0);
  }
LAB_141e3b016:
  FPluginDescriptor::~FPluginDescriptor(&local_17f8);
  if (local_1e28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e28.TextData.Reference + 0x10))();
  }
  return;
}

