// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 560

// ActiveTestName'' @ 141166910

void __cdecl `dynamic_initializer_for_'FFunctionalTestBase::ActiveTestName__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FFunctionalTestBase::ActiveTestName__);
  return;
}

// `dynamic_initializer_for_'Approved'' @ 141166930

void __cdecl ComparisonFileTypes::_dynamic_initializer_for__Approved__(void)

{
  ::FString::FString(&Approved,L"approved");
  atexit(_dynamic_atexit_destructor_for__Approved__);
  return;
}

// `dynamic_initializer_for_'AutomationFunctionLibrary'' @ 141166960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__AutomationFunctionLibrary__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&AutomationFunctionLibrary,L"AutomationFunctionLibrary",Log,Log);
  atexit(_dynamic_atexit_destructor_for__AutomationFunctionLibrary__);
  return;
}

// `dynamic_initializer_for_'BlueprintAssertion'' @ 1411669a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__BlueprintAssertion__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&BlueprintAssertion,L"BlueprintAssertion",Error,Error);
  atexit(_dynamic_atexit_destructor_for__BlueprintAssertion__);
  return;
}

// `dynamic_initializer_for_'CVarAutomationScreenshotResolutionHeight'' @ 1411669e0

void __cdecl _dynamic_initializer_for__CVarAutomationScreenshotResolutionHeight__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAutomationScreenshotResolutionHeight,L"AutomationScreenshotResolutionHeight",
             local_res8,L"The height of automation screenshots.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAutomationScreenshotResolutionHeight__);
  return;
}

// `dynamic_initializer_for_'CVarAutomationScreenshotResolutionWidth'' @ 141166a30

void __cdecl _dynamic_initializer_for__CVarAutomationScreenshotResolutionWidth__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAutomationScreenshotResolutionWidth,L"AutomationScreenshotResolutionWidth",
             local_res8,L"The width of automation screenshots.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAutomationScreenshotResolutionWidth__);
  return;
}

// `dynamic_initializer_for_'CVarEmulateSplitscreenMode'' @ 141166a80

void __cdecl _dynamic_initializer_for__CVarEmulateSplitscreenMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEmulateSplitscreenMode,L"r.ScreenshotTest.EmulateSplitscreenMode",local_res8,
             L"Allows automtically emulating splitscreen rendering for all screenshot functional tests. Useful for catching splitscreen exclusive rendering issues.\nWhen active and bAllowEmulatingSplitscreen=true for a test, two full size views will be rendered, and screenshot comparison tests will capture only the second.\nTests with existing ground truths should pass if there are no splitscreen rendering issues.If a test is failing in splitscreen due to differences that do not impact correctness (such as changes in noise patterns), you can exempt it by setting \"Allow Emulating Splitscren\" to false under the Screenshot Options.\n0 - Off\n1 - Horizontal: Viewports are side by side\n2 - Vertical: Viewports are at the top and bottom\n3 - Diagonal: Viewports are in the upper left and lower right, leaving gaps in the other corners of the render target"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEmulateSplitscreenMode__);
  return;
}

// `dynamic_initializer_for_'DebugTimeSliceDefaultSectionName'' @ 141166ad0

void __cdecl FNavigationSystem::_dynamic_initializer_for__DebugTimeSliceDefaultSectionName__(void)

{
  ::FName::FName(&DebugTimeSliceDefaultSectionName,L"DefaultSection");
  return;
}

// `dynamic_initializer_for_'Difference'' @ 141166af0

void __cdecl ComparisonFileTypes::_dynamic_initializer_for__Difference__(void)

{
  ::FString::FString(&Difference,L"difference");
  atexit(_dynamic_atexit_destructor_for__Difference__);
  return;
}

// `dynamic_initializer_for_'FClientFunctionalTestingMapsEditorAutomationTestInstance'' @ 141166b20

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FClientFunctionalTestingMapsEditorAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FClientFunctionalTestingMapsEditor");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FClientFunctionalTestingMapsEditorAutomationTestInstance,
             &local_18,true);
  FClientFunctionalTestingMapsEditorAutomationTestInstance._240_4_ = 0x10000;
  FFunctionalTestBase::bIsFunctionalTestRunning = false;
  FClientFunctionalTestingMapsEditorAutomationTestInstance._0_8_ =
       &___7FClientFunctionalTestingMapsEditor__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FClientFunctionalTestingMapsEditorAutomationTestInstance__)
  ;
  return;
}

// `dynamic_initializer_for_'FClientFunctionalTestingMapsRuntimeAutomationTestInstance'' @ 141166b90

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FClientFunctionalTestingMapsRuntimeAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FClientFunctionalTestingMapsRuntime");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FClientFunctionalTestingMapsRuntimeAutomationTestInstance,
             &local_18,true);
  FClientFunctionalTestingMapsRuntimeAutomationTestInstance._240_4_ = 0x10000;
  FFunctionalTestBase::bIsFunctionalTestRunning = false;
  FClientFunctionalTestingMapsRuntimeAutomationTestInstance._0_8_ =
       &___7FClientFunctionalTestingMapsRuntime__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FClientFunctionalTestingMapsRuntimeAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FuncTestExecRegistration'' @ 141166c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__FuncTestExecRegistration__(void)

{
  FStaticSelfRegisteringExec::FStaticSelfRegisteringExec(&FuncTestExecRegistration,FuncTestExec);
  atexit(_dynamic_atexit_destructor_for__FuncTestExecRegistration__);
  return;
}

// `dynamic_initializer_for_'GDumpGPUDumpOnScreenshotTest'' @ 141166c30

void __cdecl _dynamic_initializer_for__GDumpGPUDumpOnScreenshotTest__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GDumpGPUDumpOnScreenshotTest,L"r.DumpGPU.DumpOnScreenshotTest",local_res8,
             L"Allows to filter the tree when using r.DumpGPU command, the pattern match is case sensitive."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GDumpGPUDumpOnScreenshotTest__);
  return;
}

// `dynamic_initializer_for_'GroundTruthLog'' @ 141166c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GroundTruthLog__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&GroundTruthLog,L"GroundTruthLog",Log,Log);
  atexit(_dynamic_atexit_destructor_for__GroundTruthLog__);
  return;
}

// `dynamic_initializer_for_'LogFunctionalTest'' @ 141166cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogFunctionalTest__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogFunctionalTest,L"LogFunctionalTest",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogFunctionalTest__);
  return;
}

// `dynamic_initializer_for_'LogFunctionalTesting'' @ 141166d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogFunctionalTesting__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogFunctionalTesting,L"LogFunctionalTesting",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogFunctionalTesting__);
  return;
}

// `dynamic_initializer_for_'LogScreenshotFunctionalTest'' @ 141166d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogScreenshotFunctionalTest__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogScreenshotFunctionalTest,L"LogScreenshotFunctionalTest",Log,Log
            );
  atexit(_dynamic_atexit_destructor_for__LogScreenshotFunctionalTest__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 141166d80

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantFunctionalTesting'' @ 141166da0

void __cdecl _dynamic_initializer_for__ModuleRegistrantFunctionalTesting__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "FunctionalTesting";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"FunctionalTesting",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FFunctionalTestingModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'NAME_AFunctionalTest_DebugGatherRelevantActors'' @ 141166df0

void __cdecl _dynamic_initializer_for__NAME_AFunctionalTest_DebugGatherRelevantActors__(void)

{
  FName::FName(&NAME_AFunctionalTest_DebugGatherRelevantActors,L"DebugGatherRelevantActors");
  return;
}

// `dynamic_initializer_for_'NAME_AFunctionalTest_IsReady'' @ 141166e10

void __cdecl _dynamic_initializer_for__NAME_AFunctionalTest_IsReady__(void)

{
  FName::FName(&NAME_AFunctionalTest_IsReady,L"IsReady");
  return;
}

// `dynamic_initializer_for_'NAME_AFunctionalTest_OnAdditionalTestFinishedMessageRequest'' @ 141166e30

void __cdecl
_dynamic_initializer_for__NAME_AFunctionalTest_OnAdditionalTestFinishedMessageRequest__(void)

{
  FName::FName(&NAME_AFunctionalTest_OnAdditionalTestFinishedMessageRequest,
               L"OnAdditionalTestFinishedMessageRequest");
  return;
}

// `dynamic_initializer_for_'NAME_AFunctionalTest_OnWantsReRunCheck'' @ 141166e50

void __cdecl _dynamic_initializer_for__NAME_AFunctionalTest_OnWantsReRunCheck__(void)

{
  FName::FName(&NAME_AFunctionalTest_OnWantsReRunCheck,L"OnWantsReRunCheck");
  return;
}

// `dynamic_initializer_for_'NAME_AFunctionalTest_ReceivePrepareTest'' @ 141166e70

void __cdecl _dynamic_initializer_for__NAME_AFunctionalTest_ReceivePrepareTest__(void)

{
  FName::FName(&NAME_AFunctionalTest_ReceivePrepareTest,L"ReceivePrepareTest");
  return;
}

// `dynamic_initializer_for_'NAME_AFunctionalTest_ReceiveStartTest'' @ 141166e90

void __cdecl _dynamic_initializer_for__NAME_AFunctionalTest_ReceiveStartTest__(void)

{
  FName::FName(&NAME_AFunctionalTest_ReceiveStartTest,L"ReceiveStartTest");
  return;
}

// `dynamic_initializer_for_'NAME_AFunctionalTest_ReceiveTestFinished'' @ 141166eb0

void __cdecl _dynamic_initializer_for__NAME_AFunctionalTest_ReceiveTestFinished__(void)

{
  FName::FName(&NAME_AFunctionalTest_ReceiveTestFinished,L"ReceiveTestFinished");
  return;
}

// `dynamic_initializer_for_'NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin'' @ 141166ed0

void __cdecl
_dynamic_initializer_for__NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin__(void)

{
  FName::FName(&NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin,L"OnFunctionalTestingBegin"
              );
  return;
}

// `dynamic_initializer_for_'NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete'' @ 141166ef0

void __cdecl
_dynamic_initializer_for__NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete__(void)

{
  FName::FName(&NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete,
               L"OnFunctionalTestingComplete");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 141166f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FunctionalTest_FinishTest'' @ 141166fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FunctionalTest_FinishTest__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FunctionalTest_FinishTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_FinishTest>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FunctionalTest_FinishTest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_FinishTest,*pFVar1,
               L"FunctionalTest - FinishTest","STATGROUP_FunctionalTest","STATCAT_Advanced",
               L"FunctionalTest",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FunctionalTest_PrepareTest'' @ 141167030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FunctionalTest_PrepareTest__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FunctionalTest_PrepareTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_PrepareTest>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FunctionalTest_PrepareTest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_PrepareTest,*pFVar1,
               L"FunctionalTest - PrepareTest","STATGROUP_FunctionalTest","STATCAT_Advanced",
               L"FunctionalTest",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FunctionalTest_RunTest'' @ 1411670c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FunctionalTest_RunTest__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FunctionalTest_RunTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_RunTest>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FunctionalTest_RunTest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_RunTest,*pFVar1,
               L"FunctionalTest - RunTest","STATGROUP_FunctionalTest","STATCAT_Advanced",
               L"FunctionalTest",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FunctionalTest_StartTest'' @ 141167150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FunctionalTest_StartTest__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FunctionalTest_StartTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_StartTest>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FunctionalTest_StartTest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_StartTest,*pFVar1,
               L"FunctionalTest - StartTest","STATGROUP_FunctionalTest","STATCAT_Advanced",
               L"FunctionalTest",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FunctionalTest_TickTest'' @ 1411671e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FunctionalTest_TickTest__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FunctionalTest_TickTest ==
      (FThreadSafeStaticStat<FStat_STAT_FunctionalTest_TickTest>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FunctionalTest_TickTest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FunctionalTest_TickTest,*pFVar1,
               L"FunctionalTest - Tick","STATGROUP_FunctionalTest","STATCAT_Advanced",
               L"FunctionalTest",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Unapproved'' @ 141167270

void __cdecl ComparisonFileTypes::_dynamic_initializer_for__Unapproved__(void)

{
  ::FString::FString(&Unapproved,L"unapproved");
  atexit(_dynamic_atexit_destructor_for__Unapproved__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h__Script_FunctionalTesting_264653390'' @ 1411672a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h__Script_FunctionalTesting_264653390__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h__Script_FunctionalTesting_3428745270'' @ 1411672e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h__Script_FunctionalTesting_3428745270__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h__Script_FunctionalTesting_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h__Script_FunctionalTesting_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h__Script_FunctionalTesting_2421127036'' @ 141167330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h__Script_FunctionalTesting_2421127036__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h__Script_FunctionalTesting_194730540'' @ 141167370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h__Script_FunctionalTesting_194730540__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h__Script_FunctionalTesting_2903164752'' @ 1411673b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h__Script_FunctionalTesting_2903164752__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h__Script_FunctionalTesting_699158863'' @ 1411673f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h__Script_FunctionalTesting_699158863__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h__Script_FunctionalTesting_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h__Script_FunctionalTesting_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h__Script_FunctionalTesting_3900035158'' @ 141167440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h__Script_FunctionalTesting_3900035158__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h__Script_FunctionalTesting_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h__Script_FunctionalTesting_3453078496'' @ 141167480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h__Script_FunctionalTesting_3453078496__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h__Script_FunctionalTesting_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h__Script_FunctionalTesting_3514566009'' @ 1411674d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h__Script_FunctionalTesting_3514566009__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTest_h__Script_FunctionalTesting_1434590913'' @ 141167510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTest_h__Script_FunctionalTesting_1434590913__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTest_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h__Script_FunctionalTesting_2923366589'' @ 141167550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h__Script_FunctionalTesting_2923366589__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h__Script_FunctionalTesting_3965485405'' @ 141167590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h__Script_FunctionalTesting_3965485405__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h__Script_FunctionalTesting_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h__Script_FunctionalTesting_2298324014'' @ 1411675e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h__Script_FunctionalTesting_2298324014__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h__Script_FunctionalTesting_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h__Script_FunctionalTesting_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h__Script_FunctionalTesting_2438679678'' @ 141167630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h__Script_FunctionalTesting_2438679678__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h__Script_FunctionalTesting_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h__Script_FunctionalTesting_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h__Script_FunctionalTesting_1481598736'' @ 141167680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h__Script_FunctionalTesting_1481598736__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h__Script_FunctionalTesting_2794679352'' @ 1411676c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h__Script_FunctionalTesting_2794679352__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FunctionalTesting",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h__Script_FunctionalTesting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_FunctionalTesting'' @ 141167700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_FunctionalTesting__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x4704d7e;
  local_res8[0].DeclarationsHash = 0x91c6d7a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_FunctionalTesting,L"/Script/FunctionalTesting",
             &Z_Registration_Info_UPackage__Script_FunctionalTesting,local_res8);
  return;
}

// Z_Construct_UFunction_AFunctionalTest_FinishTest @ 148c6f800

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_FinishTest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTraceQueryTestResults_ToString @ 148c6f840

UFunction * __cdecl Z_Construct_UFunction_UTraceQueryTestResults_ToString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 148c6f880

void * __cdecl Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAITestSpawnInfoBase,&UE::CoreUObject::Private::Construct<FAITestSpawnInfoBase>,&UE::CoreUObject::Private::ConstructForTests<FAITestSpawnInfoBase>,&UE::CoreUObject::Private::Destruct<FAITestSpawnInfoBase>,&UE::CoreUObject::Private::Copy<FAITestSpawnInfoBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason @ 148c6f8c0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c6f940

void __cdecl
Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_IsEnabled @ 148c6f960

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_IsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 148c6f9a0

void * __cdecl Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAITestSpawnInfo,&UE::CoreUObject::Private::Construct<FAITestSpawnInfo>,&UE::CoreUObject::Private::ConstructForTests<FAITestSpawnInfo>,&UE::CoreUObject::Private::Destruct<FAITestSpawnInfo>,&UE::CoreUObject::Private::Copy<FAITestSpawnInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 148c6fa20

void __cdecl
Z_Construct_UFunction_AFunctionalTest_IsEnabledInWorld_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_IsEnabledInWorld @ 148c6fa30

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_IsEnabledInWorld(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_IsEnabledInWorld_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c6fa70

void __cdecl
Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 148c6fa80

void * __thiscall
IFunctionalTestingModule::_scalar_deleting_destructor_(IFunctionalTestingModule *this,uint param_1)

{
  *this = (IFunctionalTestingModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_AFunctionalTest_IsReady @ 148c6fac0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_IsReady(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 148c6fb00

void * __cdecl Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPendingDelayedSpawn,&UE::CoreUObject::Private::Construct<FPendingDelayedSpawn>,&UE::CoreUObject::Private::ConstructForTests<FPendingDelayedSpawn>,&UE::CoreUObject::Private::Destruct<FPendingDelayedSpawn>,&UE::CoreUObject::Private::Copy<FPendingDelayedSpawn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 148c6fb40

void __cdecl
Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_IsRunning @ 148c6fc10

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_IsRunning(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_LogMessage @ 148c6fc50

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_LogMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 148c6fc90

void __cdecl
Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) | 1;
  return;
}

// NewStructOps @ 148c6fca0

void * __cdecl Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAITestSpawnSetBase,&UE::CoreUObject::Private::Construct<FAITestSpawnSetBase>,&UE::CoreUObject::Private::ConstructForTests<FAITestSpawnSetBase>,&UE::CoreUObject::Private::Destruct<FAITestSpawnSetBase>,&UE::CoreUObject::Private::Copy<FAITestSpawnSetBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest @ 148c6fce0

UFunction * __cdecl
Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 148c6fd20

void * __cdecl Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAITestSpawnSet,&UE::CoreUObject::Private::Construct<FAITestSpawnSet>,&UE::CoreUObject::Private::ConstructForTests<FAITestSpawnSet>,&UE::CoreUObject::Private::Destruct<FAITestSpawnSet>,&UE::CoreUObject::Private::Copy<FAITestSpawnSet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 148c6fd60

void __cdecl
Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck @ 148c6fd70

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest @ 148c6fdb0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest @ 148c6fdf0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c6fe30

void __cdecl
Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_ReceiveTestFinished @ 148c6fe40

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_ReceiveTestFinished(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_ReceiveTestFinished_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns @ 148c6fe80

UFunction * __cdecl Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor @ 148c6fec0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWaitForNavMesh_SetBit @ 148c6ff00

void __cdecl
Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bWaitForNavMesh_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d8) = *(uint *)((longlong)param_1 + 0x4d8) | 1;
  return;
}

// NewProp_bDebugNavMeshOnTimeout_SetBit @ 148c6ff10

void __cdecl
Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bDebugNavMeshOnTimeout_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4d8) = *(uint *)((longlong)param_1 + 0x4d8) | 2;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable @ 148c6ff20

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InValue_SetBit @ 148c6ff60

void __cdecl
Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::NewProp_InValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean @ 148c6ff70

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat @ 148c6ffb0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger @ 148c6fff0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_SetTimeLimit @ 148c700f0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_SetTimeLimit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 148c70130

void __cdecl Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x318) = *(uint *)((longlong)param_1 + 0x318) | 1;
  return;
}

// NewProp_bIsInSublevel_SetBit @ 148c70140

void __cdecl Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsInSublevel_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x318) = *(uint *)((longlong)param_1 + 0x318) | 2;
  return;
}

// NewProp_bShouldDelayGarbageCollection_SetBit @ 148c70150

void __cdecl
Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bShouldDelayGarbageCollection_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x330) = *(uint *)((longlong)param_1 + 0x330) | 1;
  return;
}

// NewProp_bIsRunning_SetBit @ 148c70160

void __cdecl Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3f8) = 1;
  return;
}

// Z_Construct_UClass_UAutomationViewSettings_NoRegister @ 148c70170

UClass * __cdecl Z_Construct_UClass_UAutomationViewSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationViewSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationViewSettings",
               &Z_Registration_Info_UClass_UAutomationViewSettings.InnerSingleton,
               UAutomationViewSettings::StaticRegisterNativesUAutomationViewSettings,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAutomationViewSettings>
               ,InternalVTableHelperCtorCaller<UAutomationViewSettings>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationViewSettings.InnerSingleton;
}

// Z_Construct_UClass_UAutomationBlueprintFunctionLibrary @ 148c704a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationBlueprintFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.OuterSingleton;
}

// Z_Construct_UClass_UAutomationEditorTask @ 148c704e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationEditorTask(void)

{
  if (Z_Registration_Info_UClass_UAutomationEditorTask.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationEditorTask.OuterSingleton,
               &Z_Construct_UClass_UAutomationEditorTask_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationEditorTask.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions @ 148c70520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWaitForLoadingOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationWaitForLoadingOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationWaitForLoadingOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationWaitForLoadingOptions.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_ReturnValue_SetBit @ 148c705e0

void __cdecl
Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone @ 148c705f0

UFunction * __cdecl Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c70630

void __cdecl
Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAutomationEditorTask_IsValidTask @ 148c70640

UFunction * __cdecl Z_Construct_UFunction_UAutomationEditorTask_IsValidTask(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance @ 148c70680

UEnum * __cdecl Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance(void)

{
  if (Z_Registration_Info_UEnum_EComparisonTolerance.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EComparisonTolerance.InnerSingleton,
               &Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EComparisonTolerance.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAutomationScreenshotOptions @ 148c706c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationScreenshotOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationScreenshotOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationScreenshotOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationScreenshotOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationScreenshotOptions.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FComparisonToleranceAmount @ 148c70740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComparisonToleranceAmount(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComparisonToleranceAmount.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComparisonToleranceAmount.InnerSingleton,
               &Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComparisonToleranceAmount.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComparisonToleranceAmount.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UPackage__Script_FunctionalTesting @ 148c707c0

UPackage * __cdecl Z_Construct_UPackage__Script_FunctionalTesting(void)

{
  if (Z_Registration_Info_UPackage__Script_FunctionalTesting.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_FunctionalTesting.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_FunctionalTesting.OuterSingleton;
}

// Z_Construct_UClass_AFunctionalTest_NoRegister @ 148c70800

UClass * __cdecl Z_Construct_UClass_AFunctionalTest_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTest",
               &Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton,
               AFunctionalTest::StaticRegisterNativesAFunctionalTest,0x438,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AFunctionalTest>,InternalVTableHelperCtorCaller<AFunctionalTest>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalTest.InnerSingleton;
}

// EComparisonTolerance_StaticEnum @ 148c708c0

UEnum * __cdecl EComparisonTolerance_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComparisonTolerance.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EComparisonTolerance.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance,(UObject *)pUVar1,
                       L"EComparisonTolerance");
  }
  return Z_Registration_Info_UEnum_EComparisonTolerance.OuterSingleton;
}

// NewStructOps @ 148c70900

void * __cdecl Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 6;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComparisonToleranceAmount,&UE::CoreUObject::Private::Construct<FComparisonToleranceAmount>,&UE::CoreUObject::Private::ConstructForTests<FComparisonToleranceAmount>,&UE::CoreUObject::Private::Destruct<FComparisonToleranceAmount>,&UE::CoreUObject::Private::Copy<FComparisonToleranceAmount>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverride_OverrideTimeTo_SetBit @ 148c709f0

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::
NewProp_bOverride_OverrideTimeTo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bDisableNoisyRenderingFeatures_SetBit @ 148c70a00

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::
NewProp_bDisableNoisyRenderingFeatures_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bDisableTonemapping_SetBit @ 148c70a10

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bIgnoreAntiAliasing_SetBit @ 148c70a20

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bIgnoreColors_SetBit @ 148c70a30

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewProp_bAllowEmulatingSplitscreen_SetBit @ 148c70a40

void __cdecl
Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::
NewProp_bAllowEmulatingSplitscreen_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  return;
}

// NewStructOps @ 148c70a50

void * __cdecl Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationScreenshotOptions,&UE::CoreUObject::Private::Construct<FAutomationScreenshotOptions>,&UE::CoreUObject::Private::ConstructForTests<FAutomationScreenshotOptions>,&UE::CoreUObject::Private::Destruct<FAutomationScreenshotOptions>,&UE::CoreUObject::Private::Copy<FAutomationScreenshotOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTraceQueryTestResults_NoRegister @ 148c70a90

UClass * __cdecl Z_Construct_UClass_UTraceQueryTestResults_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTraceQueryTestResults.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"TraceQueryTestResults",
               &Z_Registration_Info_UClass_UTraceQueryTestResults.InnerSingleton,
               UTraceQueryTestResults::StaticRegisterNativesUTraceQueryTestResults,0xf90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UTraceQueryTestResults>,
               InternalVTableHelperCtorCaller<UTraceQueryTestResults>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTraceQueryTestResults.InnerSingleton;
}

// NewProp_WaitForReplicationToSettle_SetBit @ 148c72160

void __cdecl
Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::
NewProp_WaitForReplicationToSettle_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 148c72170

void * __cdecl
Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationWaitForLoadingOptions,&UE::CoreUObject::Private::Construct<FAutomationWaitForLoadingOptions>,&UE::CoreUObject::Private::ConstructForTests<FAutomationWaitForLoadingOptions>,&UE::CoreUObject::Private::Destruct<FAutomationWaitForLoadingOptions>,&UE::CoreUObject::Private::Copy<FAutomationWaitForLoadingOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAutomationViewSettings @ 148c721b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationViewSettings(void)

{
  if (Z_Registration_Info_UClass_UAutomationViewSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationViewSettings.OuterSingleton,
               &Z_Construct_UClass_UAutomationViewSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationViewSettings.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148c721f0

void * __thiscall
FFunctionalTestingModule::_scalar_deleting_destructor_(FFunctionalTestingModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewProp_AntiAliasing_SetBit @ 148c72230

void __cdecl
Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_MotionBlur_SetBit @ 148c72240

void __cdecl
Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_TemporalAA_SetBit @ 148c72250

void __cdecl
Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// NewProp_ScreenSpaceReflections_SetBit @ 148c72260

void __cdecl
Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  return;
}

// NewProp_ScreenSpaceAO_SetBit @ 148c72270

void __cdecl
Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// NewProp_DistanceFieldAO_SetBit @ 148c72280

void __cdecl
Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  return;
}

// NewProp_ContactShadows_SetBit @ 148c72290

void __cdecl
Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return;
}

// NewProp_EyeAdaptation_SetBit @ 148c722a0

void __cdecl
Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  return;
}

// NewProp_Bloom_SetBit @ 148c722b0

void __cdecl Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_ExactMatch_SetBit @ 148c722c0

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::
NewProp_ExactMatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_IsRegex_SetBit @ 148c722d0

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::
NewProp_IsRegex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError @ 148c722e0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ExactMatch_SetBit @ 148c72320

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogMessage_Statics::
NewProp_ExactMatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_IsRegex_SetBit @ 148c72330

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogMessage_Statics::
NewProp_IsRegex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogMessage @ 148c72340

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogMessage_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature @ 148c72380

UFunction * __cdecl
Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature @ 148c723c0

UFunction * __cdecl
Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ExactMatch_SetBit @ 148c72400

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedPlainLogError_Statics::
NewProp_ExactMatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UClass_UAutomationEditorTask_NoRegister @ 148c72410

UClass * __cdecl Z_Construct_UClass_UAutomationEditorTask_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationEditorTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationEditorTask",
               &Z_Registration_Info_UClass_UAutomationEditorTask.InnerSingleton,
               UAutomationEditorTask::StaticRegisterNativesUAutomationEditorTask,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationEditorTask>,
               InternalVTableHelperCtorCaller<UAutomationEditorTask>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationEditorTask.InnerSingleton;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedPlainLogError @ 148c724c0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedPlainLogError(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedPlainLogError_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ExactMatch_SetBit @ 148c725b0

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedPlainLogMessage_Statics::
NewProp_ExactMatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedPlainLogMessage @ 148c725c0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedPlainLogMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedPlainLogMessage_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestError @ 148c727b0

UFunction * __cdecl Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestError(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestError_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestInfo @ 148c727f0

UFunction * __cdecl Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestInfo_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData @ 148c72930

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAutomationPerformaceHelper @ 148c72970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationPerformaceHelper(void)

{
  if (Z_Registration_Info_UClass_UAutomationPerformaceHelper.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationPerformaceHelper.OuterSingleton,
               &Z_Construct_UClass_UAutomationPerformaceHelper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationPerformaceHelper.OuterSingleton;
}

// Z_Construct_UEnum_FunctionalTesting_EComparisonMethod @ 148c729b0

UEnum * __cdecl Z_Construct_UEnum_FunctionalTesting_EComparisonMethod(void)

{
  if (Z_Registration_Info_UEnum_EComparisonMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EComparisonMethod.InnerSingleton,
               &Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EComparisonMethod.InnerSingleton;
}

// Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling @ 148c729f0

UEnum * __cdecl Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling(void)

{
  if (Z_Registration_Info_UEnum_EFunctionalTestLogHandling.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFunctionalTestLogHandling.InnerSingleton,
               &Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFunctionalTestLogHandling.InnerSingleton;
}

// Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult @ 148c72a30

UEnum * __cdecl Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult(void)

{
  if (Z_Registration_Info_UEnum_EFunctionalTestResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFunctionalTestResult.InnerSingleton,
               &Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFunctionalTestResult.InnerSingleton;
}

// EComparisonMethod_StaticEnum @ 148c72a70

UEnum * __cdecl EComparisonMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod,(UObject *)pUVar1,
                       L"EComparisonMethod");
  }
  return Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestWarning @ 148c72ab0

UFunction * __cdecl Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestWarning(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestWarning_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c72b70

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning @ 148c72c80

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording @ 148c72d80

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading @ 148c72dc0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline @ 148c72e00

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c72e40

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile @ 148c72e50

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording @ 148c72e90

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference @ 148c72ed0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline @ 148c72f10

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile @ 148c72f50

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup @ 148c72f90

UFunction * __cdecl Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c72fd0

void __cdecl
Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget @ 148c72fe0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c73020

void __cdecl
Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup @ 148c73030

UFunction * __cdecl Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget @ 148c73070

UFunction * __cdecl
Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot @ 148c730b0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c730f0

void __cdecl
Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_AFunctionalTestGameMode @ 148c73100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AFunctionalTestGameMode(void)

{
  if (Z_Registration_Info_UClass_AFunctionalTestGameMode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AFunctionalTestGameMode.OuterSingleton,
               &Z_Construct_UClass_AFunctionalTestGameMode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AFunctionalTestGameMode.OuterSingleton;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget @ 148c73140

UFunction * __cdecl
Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay @ 148c731a0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c732d0

void __cdecl
Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording @ 148c73380

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete @ 148c733c0

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering @ 148c73400

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests @ 148c73440

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_Sample @ 148c73480

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_Sample(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetEditorActiveViewportViewMode @ 148c73580

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetEditorActiveViewportViewMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetEditorActiveViewportViewMode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling @ 148c735c0

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling @ 148c73600

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetEditorActiveViewportWireframeOpacity @ 148c73640

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetEditorActiveViewportWireframeOpacity
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetEditorActiveViewportWireframeOpacity_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AFunctionalTestLevelScript @ 148c73680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AFunctionalTestLevelScript(void)

{
  if (Z_Registration_Info_UClass_AFunctionalTestLevelScript.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AFunctionalTestLevelScript.OuterSingleton,
               &Z_Construct_UClass_AFunctionalTestLevelScript_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AFunctionalTestLevelScript.OuterSingleton;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_Tick @ 148c736c0

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_Tick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount @ 148c73700

UFunction * __cdecl Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget @ 148c73740

UFunction * __cdecl
Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage @ 148c73780

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile @ 148c737c0

UFunction * __cdecl Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UFuncTestRenderingComponent @ 148c73800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFuncTestRenderingComponent(void)

{
  if (Z_Registration_Info_UClass_UFuncTestRenderingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFuncTestRenderingComponent.OuterSingleton,
               &Z_Construct_UClass_UFuncTestRenderingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFuncTestRenderingComponent.OuterSingleton;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax @ 148c73900

UFunction * __cdecl Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage @ 148c73940

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax @ 148c73a10

UFunction * __cdecl Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UFunctionalTestUtilityLibrary @ 148c73a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFunctionalTestUtilityLibrary(void)

{
  if (Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.OuterSingleton,
               &Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions @ 148c73a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceChannelTestBatchOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceChannelTestBatchOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceChannelTestBatchOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceChannelTestBatchOptions.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorActiveViewportViewMode @ 148c73b70

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorActiveViewportViewMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorActiveViewportViewMode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTraceComplex_SetBit @ 148c73d40

void __cdecl
Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::
NewProp_bTraceComplex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_bIgnoreSelf_SetBit @ 148c73d50

void __cdecl
Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::
NewProp_bIgnoreSelf_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorActiveViewportWireframeOpacity @ 148c73d60

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorActiveViewportWireframeOpacity
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorActiveViewportWireframeOpacity_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode @ 148c73da0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EFunctionalTestResult_StaticEnum @ 148c73de0

UEnum * __cdecl EFunctionalTestResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult,(UObject *)pUVar1,
                       L"EFunctionalTestResult");
  }
  return Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer @ 148c73e20

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil @ 148c73e60

UFunction * __cdecl Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EFunctionalTestLogHandling_StaticEnum @ 148c73ea0

UEnum * __cdecl EFunctionalTestLogHandling_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling,
                       (UObject *)pUVar1,L"EFunctionalTestLogHandling");
  }
  return Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton;
}

// Z_Construct_UClass_UGroundTruthData @ 148c73ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGroundTruthData(void)

{
  if (Z_Registration_Info_UClass_UGroundTruthData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGroundTruthData.OuterSingleton,
               &Z_Construct_UClass_UGroundTruthData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGroundTruthData.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 148c73f20

void __cdecl
Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax @ 148c73f30

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroundTruthData_CanModify @ 148c73f70

UFunction * __cdecl Z_Construct_UFunction_UGroundTruthData_CanModify(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic @ 148c73fb0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_AddError @ 148c73ff0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AddError(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_AddError_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroundTruthData_LoadObject @ 148c74030

UFunction * __cdecl Z_Construct_UFunction_UGroundTruthData_LoadObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow @ 148c74070

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroundTruthData_ResetObject @ 148c740b0

UFunction * __cdecl Z_Construct_UFunction_UGroundTruthData_ResetObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroundTruthData_ResetObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_AddInfo @ 148c740f0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AddInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage @ 148c74170

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroundTruthData_SaveObject @ 148c741f0

UFunction * __cdecl Z_Construct_UFunction_UGroundTruthData_SaveObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_AddRerun @ 148c74240

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AddRerun(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bResetGroundTruth_SetBit @ 148c74280

void __cdecl
Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AddWarning @ 148c743a0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AddWarning(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot @ 148c743e0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Actual_SetBit @ 148c74470

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Actual_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_Expected_SetBit @ 148c74480

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Expected_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148c74490

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera @ 148c744e0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool @ 148c74520

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148c745e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FAITestSpawnInfoBase::_scalar_deleting_destructor_(FAITestSpawnInfoBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 148c746d0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI @ 148c746e0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D @ 148c74720

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bMaskEnabled_SetBit @ 148c74760

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::
NewProp_bMaskEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bCaptureHDR_SetBit @ 148c74770

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::
NewProp_bCaptureHDR_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_bForceGameView_SetBit @ 148c74780

void __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::
NewProp_bForceGameView_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148c74790

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double @ 148c747a0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot @ 148c747e0

UFunction * __cdecl
Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c74820

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float @ 148c748a0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AFunctionalUIScreenshotTest @ 148c749a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AFunctionalUIScreenshotTest(void)

{
  if (Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.OuterSingleton,
               &Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.OuterSingleton;
}

// Z_Construct_UClass_AScreenshotFunctionalTestBase @ 148c749e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AScreenshotFunctionalTestBase(void)

{
  if (Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.OuterSingleton,
               &Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.OuterSingleton;
}

// Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation @ 148c74a20

UEnum * __cdecl Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation(void)

{
  if (Z_Registration_Info_UEnum_EWidgetTestAppearLocation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetTestAppearLocation.InnerSingleton,
               &Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetTestAppearLocation.InnerSingleton;
}

// EWidgetTestAppearLocation_StaticEnum @ 148c74a60

UEnum * __cdecl EWidgetTestAppearLocation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetTestAppearLocation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EWidgetTestAppearLocation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation,
                       (UObject *)pUVar1,L"EWidgetTestAppearLocation");
  }
  return Z_Registration_Info_UEnum_EWidgetTestAppearLocation.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 148c74b40

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bHideDebugCanvas_SetBit @ 148c74b90

void __cdecl
Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_bHideDebugCanvas_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4e8) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int @ 148c74ba0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c74be0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UClass_AScreenshotFunctionalTest @ 148c74bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AScreenshotFunctionalTest(void)

{
  if (Z_Registration_Info_UClass_AScreenshotFunctionalTest.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AScreenshotFunctionalTest.OuterSingleton,
               &Z_Construct_UClass_AScreenshotFunctionalTest_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AScreenshotFunctionalTest.OuterSingleton;
}

// NewProp_bCameraCutOnScreenshotPrep_SetBit @ 148c74c30

void __cdecl
Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c8) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix @ 148c74c40

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75240

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// `scalar_deleting_destructor' @ 148c75250

void * __thiscall
FAITestSpawnInfo::_scalar_deleting_destructor_(FAITestSpawnInfo *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name @ 148c75280

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75340

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// `scalar_deleting_destructor' @ 148c75440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FAITestSpawnSetBase::_scalar_deleting_destructor_(FAITestSpawnSetBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object @ 148c75470

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c754b0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane @ 148c754c0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75500

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat @ 148c75510

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75550

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator @ 148c757c0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75800

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation @ 148c75810

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75850

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_String @ 148c75860

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_String(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c758a0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults @ 148c75960

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c759a0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe0) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform @ 148c759b0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c759f0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector @ 148c75a00

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148c75a40

void * __thiscall FAITestSpawnSet::_scalar_deleting_destructor_(FAITestSpawnSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SpawnInfoContainer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 148c75a90

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D @ 148c75b60

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75ba0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4 @ 148c75bb0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Condition_SetBit @ 148c75bf0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Condition_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148c75c30

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertFalse @ 148c75d10

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertFalse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75d50

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertIsValid @ 148c75d60

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertIsValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75da0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D @ 148c75db0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75df0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix @ 148c75e00

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75e40

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane @ 148c75f10

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c75f50

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat @ 148c75f60

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTestPhaseComponent @ 148c75fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTestPhaseComponent(void)

{
  if (Z_Registration_Info_UClass_UTestPhaseComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTestPhaseComponent.OuterSingleton,
               &Z_Construct_UClass_UTestPhaseComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTestPhaseComponent.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 148c75fe0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator @ 148c75ff0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c76030

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// `scalar_deleting_destructor' @ 148c76730

void * __thiscall
FClientFunctionalTestingMapsBase::_scalar_deleting_destructor_
          (FClientFunctionalTestingMapsBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String @ 148c76770

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c767b0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform @ 148c767c0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_APhasedAutomationActorBase @ 148c76800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APhasedAutomationActorBase(void)

{
  if (Z_Registration_Info_UClass_APhasedAutomationActorBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APhasedAutomationActorBase.OuterSingleton,
               &Z_Construct_UClass_APhasedAutomationActorBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APhasedAutomationActorBase.OuterSingleton;
}

// Z_Construct_UClass_UFunctionalTestingManager @ 148c76840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFunctionalTestingManager(void)

{
  if (Z_Registration_Info_UClass_UFunctionalTestingManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFunctionalTestingManager.OuterSingleton,
               &Z_Construct_UClass_UFunctionalTestingManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFunctionalTestingManager.OuterSingleton;
}

// NewProp_bNewLog_SetBit @ 148c76880

void __cdecl
Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::
NewProp_bNewLog_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bRunLooped_SetBit @ 148c76890

void __cdecl
Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::
NewProp_bRunLooped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148c768a0

void __cdecl
Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148c768b0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector @ 148c76a80

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests @ 148c76ac0

UFunction * __cdecl Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c76d90

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// `scalar_deleting_destructor' @ 148c76de0

void * __thiscall
FClientFunctionalTestingMapsRuntime::_scalar_deleting_destructor_
          (FClientFunctionalTestingMapsRuntime *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D @ 148c76e20

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148c76f20

void * __thiscall
FClientFunctionalTestingMapsEditor::_scalar_deleting_destructor_
          (FClientFunctionalTestingMapsEditor *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 148c76f60

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4 @ 148c76f70

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTraceQueryTestResults @ 148c76fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTraceQueryTestResults(void)

{
  if (Z_Registration_Info_UClass_UTraceQueryTestResults.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTraceQueryTestResults.OuterSingleton,
               &Z_Construct_UClass_UTraceQueryTestResults_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTraceQueryTestResults.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTraceQueryTestNames @ 148c76ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceQueryTestNames(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceQueryTestNames.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceQueryTestNames.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceQueryTestNames.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTraceQueryTestNames.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTraceQueryTestResultsInner @ 148c77070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceQueryTestResultsInner(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInner.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInner.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInner.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInner.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost @ 148c770f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInnerMost.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInnerMost.InnerSingleton,
               &Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInnerMost.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInnerMost.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bLineTrace_SetBit @ 148c77170

void __cdecl
Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin @ 148c77180

UFunction * __cdecl Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSphereTrace_SetBit @ 148c771c0

void __cdecl
Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bCapsuleTrace_SetBit @ 148c771d0

void __cdecl
Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bBoxTrace_SetBit @ 148c771e0

void __cdecl
Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bChannelTrace_SetBit @ 148c771f0

void __cdecl
Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bObjectsTrace_SetBit @ 148c77200

void __cdecl
Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bProfileTrace_SetBit @ 148c77210

void __cdecl
Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewStructOps @ 148c77220

void * __cdecl Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceChannelTestBatchOptions,&UE::CoreUObject::Private::Construct<FTraceChannelTestBatchOptions>,&UE::CoreUObject::Private::ConstructForTests<FTraceChannelTestBatchOptions>,&UE::CoreUObject::Private::Destruct<FTraceChannelTestBatchOptions>,&UE::CoreUObject::Private::Copy<FTraceChannelTestBatchOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_Condition_SetBit @ 148c77260

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Condition_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete @ 148c77270

UFunction * __cdecl
Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c772b0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertTrue @ 148c772d0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertTrue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c77360

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime @ 148c77370

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 148c773b0

void * __cdecl Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceQueryTestNames,&UE::CoreUObject::Private::Construct<FTraceQueryTestNames>,&UE::CoreUObject::Private::ConstructForTests<FTraceQueryTestNames>,&UE::CoreUObject::Private::Destruct<FTraceQueryTestNames>,&UE::CoreUObject::Private::Copy<FTraceQueryTestNames>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 148c773f0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertValue_Double @ 148c77510

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertValue_Double(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSingleResult_SetBit @ 148c77590

void __cdecl
Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148c775a0

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bMultiResult_SetBit @ 148c775b0

void __cdecl
Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// NewStructOps @ 148c775c0

void * __cdecl Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x148;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceQueryTestResultsInnerMost,&UE::CoreUObject::Private::Construct<FTraceQueryTestResultsInnerMost>,&UE::CoreUObject::Private::ConstructForTests<FTraceQueryTestResultsInnerMost>,&UE::CoreUObject::Private::Destruct<FTraceQueryTestResultsInnerMost>,&UE::CoreUObject::Private::Copy<FTraceQueryTestResultsInnerMost>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AFunctionalTest_AssertValue_Float @ 148c77600

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertValue_Float(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148c77640

void __cdecl
Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_AFunctionalTest_AssertValue_Int @ 148c77650

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_AssertValue_Int(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 148c77690

void * __cdecl Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x520;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTraceQueryTestResultsInner,&UE::CoreUObject::Private::Construct<FTraceQueryTestResultsInner>,&UE::CoreUObject::Private::ConstructForTests<FTraceQueryTestResultsInner>,&UE::CoreUObject::Private::Destruct<FTraceQueryTestResultsInner>,&UE::CoreUObject::Private::Copy<FTraceQueryTestResultsInner>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors @ 148c776d0

UFunction * __cdecl Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AFunctionalAITest @ 148c77710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AFunctionalAITest(void)

{
  if (Z_Registration_Info_UClass_AFunctionalAITest.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AFunctionalAITest.OuterSingleton,
               &Z_Construct_UClass_AFunctionalAITest_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AFunctionalAITest.OuterSingleton;
}

// Z_Construct_UClass_AFunctionalAITestBase @ 148c77750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AFunctionalAITestBase(void)

{
  if (Z_Registration_Info_UClass_AFunctionalAITestBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AFunctionalAITestBase.OuterSingleton,
               &Z_Construct_UClass_AFunctionalAITestBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AFunctionalAITestBase.OuterSingleton;
}

// Z_Construct_UClass_AFunctionalTest @ 148c77790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AFunctionalTest(void)

{
  if (Z_Registration_Info_UClass_AFunctionalTest.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AFunctionalTest.OuterSingleton,
               &Z_Construct_UClass_AFunctionalTest_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AFunctionalTest.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAITestSpawnInfo @ 148c777d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAITestSpawnInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAITestSpawnInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAITestSpawnInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAITestSpawnInfoBase @ 148c77850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAITestSpawnInfoBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnInfoBase.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAITestSpawnInfoBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnInfoBase.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAITestSpawnInfoBase.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAITestSpawnSet @ 148c778d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAITestSpawnSet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnSet.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAITestSpawnSet.InnerSingleton,
               &Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnSet.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAITestSpawnSet.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAITestSpawnSetBase @ 148c77950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAITestSpawnSetBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnSetBase.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAITestSpawnSetBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnSetBase.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAITestSpawnSetBase.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPendingDelayedSpawn @ 148c779d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPendingDelayedSpawn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPendingDelayedSpawn.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPendingDelayedSpawn.InnerSingleton,
               &Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPendingDelayedSpawn.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPendingDelayedSpawn.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CastChecked<AFunctionalTest,AActor> @ 148c79e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AFunctionalTest * __cdecl CastChecked<AFunctionalTest,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<AFunctionalTest>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AFunctionalTest::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AFunctionalTest *)param_1;
  }
  pFVar3 = GetTypeName<AFunctionalTest>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<APhasedAutomationActorBase,AActor> @ 148c79ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhasedAutomationActorBase * __cdecl CastChecked<APhasedAutomationActorBase,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<APhasedAutomationActorBase>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = APhasedAutomationActorBase::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (APhasedAutomationActorBase *)param_1;
  }
  pFVar3 = GetTypeName<APhasedAutomationActorBase>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<AFunctionalTest>,TObjectPtr<AFunctionalTest>,int> @ 148c79f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ConstructItems<TObjectPtr<AFunctionalTest>,TObjectPtr<AFunctionalTest>,int>
          (void *param_1,TObjectPtr<AFunctionalTest> *param_2,int param_3)

{
  TObjectPtr<AFunctionalTest> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<AFunctionalTest>_u_0)param_2->field0_0x0;
      ((TObjectPtr<AFunctionalTest>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (AFunctionalTest *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (AFunctionalTest *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAITestSpawnInfo,FAITestSpawnInfo,int> @ 148c79fe0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
ConstructItems<FAITestSpawnInfo,FAITestSpawnInfo,int>
          (void *param_1,FAITestSpawnInfo *param_2,int param_3)

{
  UObject *pUVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  TObjectPtr<UBehaviorTree> TVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    plVar4 = &param_2->_padding_;
    puVar5 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)plVar4) =
           &___7FAITestSpawnInfoBase__6B_;
      pUVar1 = (UObject *)plVar4[-1];
      *(UObject **)(puVar5 + -2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      *puVar5 = (int)*plVar4;
      puVar5[1] = *(undefined4 *)((longlong)plVar4 + 4);
      puVar5[2] = (int)plVar4[1];
      *(undefined8 *)(puVar5 + 3) = *(undefined8 *)((longlong)plVar4 + 0xc);
      *(undefined ***)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)plVar4) =
           &___7FAITestSpawnInfo__6B_;
      TVar2 = (TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)(plVar4 + 3))->DebugPtr;
      ((TObjectPtr<UClass> *)(puVar5 + 6))->field0_0x0 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2 != (TObjectPtr<UClass>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      TVar2 = (TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)(plVar4 + 4))->DebugPtr;
      ((TObjectPtr<UClass> *)(puVar5 + 8))->field0_0x0 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2 != (TObjectPtr<UClass>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      *(uchar *)(puVar5 + 10) = ((FGenericTeamId *)(plVar4 + 5))->TeamID;
      TVar3.field0_0x0 =
           (TObjectPtr<UBehaviorTree>_u_0)((TObjectPtr<UBehaviorTree>_u_0 *)(plVar4 + 6))->DebugPtr;
      ((TObjectPtr<UBehaviorTree>_u_0 *)(puVar5 + 0xc))->DebugPtr =
           (UBehaviorTree *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UBehaviorTree *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      puVar5 = puVar5 + 0x12;
      plVar4 = plVar4 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FAITestSpawnSet,int> @ 148c7a1f0

void __cdecl DestructItems<FAITestSpawnSet,int>(FAITestSpawnSet *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAITestSpawnInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->SpawnInfoContainer;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFunctionalTestInfo,int> @ 148c7a230

void __cdecl DestructItems<FFunctionalTestInfo,int>(FFunctionalTestInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->TestCommand;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FFunctionalTestInfo *)(pFVar2 + -1))->BeautifiedName).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPerfStatsRecord,int> @ 148c7a290

void __cdecl DestructItems<FPerfStatsRecord,int>(FPerfStatsRecord *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`ReadBackbuffer'::__l2::TSTR_CopyBackbufferCmd179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148c7a2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ReadBackbuffer_::__l2::TSTR_CopyBackbufferCmd179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`ReadBackbuffer'::__l2::TSTR_CopyBackbufferCmd179>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148c7a421;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148c7a615;
  }
LAB_148c7a421:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148c7a4ff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148c7a4ff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148c7a615:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`GetBackbufferInfo'::__l2::TSTR_GetBackbufferFormatCmd45>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148c7a650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_GetBackbufferInfo_::__l2::TSTR_GetBackbufferFormatCmd45>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`GetBackbufferInfo'::__l2::TSTR_GetBackbufferFormatCmd45>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148c7a7a1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148c7a995;
  }
LAB_148c7a7a1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148c7a87f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148c7a87f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148c7a995:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`ReadPixelsFromRT'::__l2::TSTR_ReadScreenshotRTCmd195>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148c7a9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_ReadPixelsFromRT_::__l2::TSTR_ReadScreenshotRTCmd195>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`ReadPixelsFromRT'::__l2::TSTR_ReadScreenshotRTCmd195>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148c7ab21;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148c7ad15;
  }
LAB_148c7ab21:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148c7abff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148c7abff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_148c7ad15:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindElementsWithBoundsTestInternal<`AFunctionalAITestBase::OnTimeout'::__l5::<lambda_1>_> @ 148c7ad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
FindElementsWithBoundsTestInternal<_AFunctionalAITestBase::OnTimeout_::__l5::<lambda_1>_>
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,uint param_1,
          FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  FNavigationOctreeElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  bool bVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulonglong extraout_RAX;
  undefined4 uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined1 *this_00;
  <lambda_1> *p<Var33;
  uint uVar34;
  FNavigationOctreeElement *pFVar35;
  byte bVar36;
  FNavigationOctreeElement *pFVar38;
  uint uVar39;
  longlong lVar40;
  longlong lVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  double dVar50;
  uint uVar51;
  double dVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar58;
  undefined1 local_res8 [8];
  uint local_res10;
  FOctreeNodeContext *local_res18;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  uint uVar37;
  
  uVar39 = ~param_1 >> 0x1f;
  uVar23 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar23 = uVar39;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  if ((uVar23 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)param_1 * 8 + 4) != 0) {
    uVar23 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar23 = uVar39;
    }
    uVar28 = (ulonglong)uVar23;
    if (uVar23 == 0) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar28 = CONCAT71(extraout_var,bVar22);
      if (bVar22) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar34 = _UNK_15061cc8c;
    uVar27 = _UNK_15061cc88;
    uVar26 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar38 = (FNavigationOctreeElement *)
              ((this->TreeElements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x490);
    iVar31 = *(int *)((longlong)&pFVar38[0x10].Bounds.Origin.field0_0x0 + 8);
    pFVar35 = *(FNavigationOctreeElement **)&pFVar38[0x10].Bounds.Origin.field0_0x0;
    if (pFVar35 == (FNavigationOctreeElement *)0x0) {
      pFVar35 = pFVar38;
    }
    p<Var33 = (<lambda_1> *)((longlong)iVar31 * 9);
    pFVar1 = pFVar35 + iVar31;
    while( true ) {
      uVar24 = (undefined4)uVar28;
      uVar29 = SUB84(p<Var33,0);
      if (*(int *)((longlong)&pFVar38[0x10].Bounds.Origin.field0_0x0 + 8) != iVar31) {
        this_00 = local_res8;
        local_res8[0] = 0;
        bVar22 = `TCheckedPointerIterator<FNavigationOctreeElement_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar29 = SUB84(this_00,0);
        uVar24 = (undefined4)CONCAT71(extraout_var_00,bVar22);
      }
      uVar25 = local_res10;
      if (pFVar35 == pFVar1) break;
      dVar50 = (pFVar35->Bounds).Origin.field0_0x0._s_0.Z - (param_3->Center).field0_0x0._s_0.Z;
      dVar52 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar40 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar34,SUB84(dVar52,0) & uVar27
                                ));
      auVar9._8_4_ = (int)lVar40;
      auVar9._0_8_ = -(ulonglong)
                      ((pFVar35->Bounds).BoxExtent.field0_0x0._s_0.Z +
                       (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar26,
                                       SUB84(dVar50,0) & uVar23));
      auVar9._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      iVar30 = movmskpd(uVar29,auVar9);
      dVar50 = (pFVar35->Bounds).Origin.field0_0x0._s_0.X - (param_3->Center).field0_0x0._s_0.X;
      dVar52 = (pFVar35->Bounds).Origin.field0_0x0._s_0.Y - (param_3->Center).field0_0x0._s_0.Y;
      lVar40 = -(ulonglong)
                ((pFVar35->Bounds).BoxExtent.field0_0x0._s_0.Y + (param_3->Extent).field0_0x0._s_0.Y
                < (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar34,
                                   SUB84(dVar52,0) & uVar27));
      auVar4._8_4_ = (int)lVar40;
      auVar4._0_8_ = -(ulonglong)
                      ((pFVar35->Bounds).BoxExtent.field0_0x0._s_0.X +
                       (param_3->Extent).field0_0x0._s_0.X <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar26,
                                       SUB84(dVar50,0) & uVar23));
      auVar4._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      uVar25 = movmskpd(uVar24,auVar4);
      uVar28 = (ulonglong)uVar25;
      uVar25 = iVar30 << 2 | uVar25;
      p<Var33 = (<lambda_1> *)(ulonglong)uVar25;
      if (uVar25 == 0) {
        p<Var33 = param_4;
        `AFunctionalAITestBase::OnTimeout'::__l5::<lambda_1>::operator()(param_4,pFVar35);
        uVar28 = extraout_RAX;
      }
      pFVar35 = pFVar35 + 1;
    }
    iVar31 = (this->TreeNodes).ArrayNum;
    lVar40 = (longlong)(int)local_res10;
    uVar23 = 0;
    if ((int)local_res10 < iVar31) {
      uVar23 = uVar39;
    }
    if (uVar23 == 0) {
      iVar31 = 0x506106c8;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar22) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar2 + lVar40 * 8) != -1) {
      dVar8 = (param_3->Center).field0_0x0._s_0.Z;
      dVar12 = (param_3->Center).field0_0x0._s_0.W;
      dVar13 = (local_res18->Bounds).Center.field0_0x0._s_0.Z;
      dVar14 = (local_res18->Bounds).Center.field0_0x0._s_0.W;
      dVar50 = local_res18->ChildCenterOffset;
      dVar52 = local_res18->ChildExtent;
      dVar15 = (local_res18->Bounds).Center.field0_0x0._s_0.X;
      dVar16 = (local_res18->Bounds).Center.field0_0x0._s_0.Y;
      dVar17 = (param_3->Center).field0_0x0._s_0.X;
      dVar18 = (param_3->Center).field0_0x0._s_0.Y;
      lVar41 = -(ulonglong)
                ((dVar50 + dVar14) - dVar52 < (param_3->Extent).field0_0x0._s_0.W + dVar12);
      auVar5._8_4_ = (int)lVar41;
      auVar5._0_8_ = -(ulonglong)
                      ((dVar50 + dVar13) - dVar52 < (param_3->Extent).field0_0x0._s_0.Z + dVar8);
      auVar5._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar34 = movmskpd((int)pFVar35,auVar5);
      lVar41 = -(ulonglong)
                ((dVar50 + dVar16) - dVar52 < (param_3->Extent).field0_0x0._s_0.Y + dVar18);
      auVar6._8_4_ = (int)lVar41;
      auVar6._0_8_ = -(ulonglong)
                      ((dVar50 + dVar15) - dVar52 < (param_3->Extent).field0_0x0._s_0.X + dVar17);
      auVar6._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar26 = movmskpd((int)pFVar2,auVar6);
      auVar57._8_8_ =
           -(ulonglong)(dVar12 - (param_3->Extent).field0_0x0._s_0.W <= (dVar14 - dVar50) + dVar52);
      auVar57._0_8_ =
           -(ulonglong)(dVar8 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar13 - dVar50) + dVar52);
      iVar31 = movmskpd(iVar31,auVar57);
      lVar41 = -(ulonglong)
                (dVar18 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar16 - dVar50) + dVar52);
      auVar11._8_4_ = (int)lVar41;
      auVar11._0_8_ =
           -(ulonglong)(dVar17 - (param_3->Extent).field0_0x0._s_0.X <= (dVar15 - dVar50) + dVar52);
      auVar11._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar27 = movmskpd(uVar26,auVar11);
      uVar23 = 0;
      if ((int)uVar25 < (this->TreeNodes).ArrayNum) {
        uVar23 = uVar39;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar21 = _UNK_15074415c;
      uVar25 = _UNK_150744158;
      uVar39 = _UNK_150744154;
      uVar23 = ___xmm_00000008000000040000000200000001;
      dVar52 = __real_3ff1000000000000;
      fVar20 = _UNK_15068954c;
      fVar19 = _UNK_150689548;
      dVar50 = __real_3fe0000000000000;
      uVar37 = 0;
      uVar58 = (uint)__xmm_80000000000000008000000000000000;
      uVar28 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar30 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar40 * 8);
      do {
        uVar32 = (~uVar37 & 7) << 3 | uVar37 & 7;
        if ((uVar32 & ((uVar34 & 1) << 2 | uVar26 & 7 | (iVar31 << 2 | uVar27) << 3)) == uVar32) {
          uVar53 = SUB84(local_res18->ChildCenterOffset,0) ^ uVar58;
          uVar54 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20) ^ (uint)uVar28;
          dVar8 = (double)(float)-(uint)((uVar37 & uVar23) == uVar23);
          uVar32 = SUB84(dVar8,0);
          uVar42 = (uint)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)(float)-(uint)((uVar37 & uVar39) == uVar39);
          uVar43 = SUB84(dVar8,0);
          uVar44 = (uint)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)(float)-(uint)((uVar37 & uVar25) == uVar25);
          uVar45 = SUB84(dVar8,0);
          uVar46 = (uint)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)(float)-(uint)((uVar37 & uVar21) == uVar21);
          uVar47 = SUB84(dVar8,0);
          uVar48 = (uint)((ulonglong)dVar8 >> 0x20);
          uVar49 = SUB84(local_res18->ChildCenterOffset,0);
          auVar56._0_4_ = uVar32 & uVar49;
          uVar51 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20);
          auVar56._4_4_ = uVar42 & uVar51;
          auVar56._8_4_ = uVar43 & uVar49;
          auVar56._12_4_ = uVar44 & uVar51;
          auVar7._4_4_ = ~uVar42 & uVar54;
          auVar7._0_4_ = ~uVar32 & uVar53;
          auVar7._8_4_ = ~uVar43 & uVar53;
          auVar7._12_4_ = ~uVar44 & uVar54;
          local_f8._s_0.X =
               SUB168(auVar56 | auVar7,0) + (local_res18->Bounds).Center.field0_0x0._s_0.X;
          local_f8._s_0.Y =
               SUB168(auVar56 | auVar7,8) + (local_res18->Bounds).Center.field0_0x0._s_0.Y;
          auVar55._0_4_ = uVar45 & uVar49;
          auVar55._4_4_ = uVar46 & uVar51;
          auVar55._8_4_ = uVar47 & uVar49;
          auVar55._12_4_ = uVar48 & uVar51;
          auVar10._4_4_ = ~uVar46 & uVar54;
          auVar10._0_4_ = ~uVar45 & uVar53;
          auVar10._8_4_ = ~uVar47 & uVar53;
          auVar10._12_4_ = ~uVar48 & uVar54;
          local_b0 = local_res18->ChildExtent;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          dVar8 = local_b0 * (double)fVar20;
          local_f8._16_8_ =
               (SUB168(auVar55 | auVar10,0) + (local_res18->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar19;
          local_f8._24_8_ =
               (SUB168(auVar55 | auVar10,8) + (local_res18->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar20;
          local_c8._8_4_ = SUB84(dVar8,0);
          local_c8._0_8_ = local_b0 * (double)fVar19;
          local_c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          local_b8 = local_b0 * dVar50 * dVar52;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_AFunctionalAITestBase::OnTimeout_::__l5::<lambda_1>_>
                    (this,uVar37 + iVar30,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar36 = (char)uVar37 + 1;
        uVar37 = (uint)bVar36;
      } while ((char)bVar36 < '\b');
    }
  }
  return;
}

// FindExistingActionWithPredicate<FTakeScreenshotAfterTimeLatentAction,`FLatentActionManager::FindExistingAction<FTakeScreenshotAfterTimeLatentAction>'::__l2::FFirstItemPredicate> @ 148c7b200

FTakeScreenshotAfterTimeLatentAction * __thiscall
FLatentActionManager::
FindExistingActionWithPredicate<FTakeScreenshotAfterTimeLatentAction,_FLatentActionManager::FindExistingAction<FTakeScreenshotAfterTimeLatentAction>_::__l2::FFirstItemPredicate>
          (FLatentActionManager *this,UObject *param_1,int param_2,FFirstItemPredicate *param_3)

{
  TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
  *this_00;
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  int iStack_2c;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (*(int *)&(this->ObjectToActionListMap).field_0x8 ==
      *(int *)&(this->ObjectToActionListMap).field_0x34) {
    return (FTakeScreenshotAfterTimeLatentAction *)0x0;
  }
  puVar3 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &(this->ObjectToActionListMap).field_0x38;
  }
  iVar1 = *(int *)(puVar3 + (((ulonglong)local_res8 >> 0x20 ^ (ulonglong)local_res8 & 0xffffffff) &
                            (ulonglong)(*(int *)&(this->ObjectToActionListMap).field_0x48 - 1)) * 4)
  ;
  if (iVar1 == -1) {
    return (FTakeScreenshotAfterTimeLatentAction *)0x0;
  }
  while( true ) {
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
    if (((int)*puVar2 == local_res8.ObjectIndex) &&
       ((int)((ulonglong)*puVar2 >> 0x20) == local_res8.ObjectSerialNumber)) break;
    iVar1 = *(int *)(puVar2 + 3);
    if (iVar1 == -1) {
      return (FTakeScreenshotAfterTimeLatentAction *)0x0;
    }
  }
  if (iVar1 == -1) {
    return (FTakeScreenshotAfterTimeLatentAction *)0x0;
  }
  puVar4 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (FTakeScreenshotAfterTimeLatentAction *)0x0;
  }
  this_00 = (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
             *)*puVar4;
  if (this_00 ==
      (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
       *)0x0) {
    return (FTakeScreenshotAfterTimeLatentAction *)0x0;
  }
  iVar1 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
          ::Num(this_00,param_2);
  if (iVar1 < 1) {
    return (FTakeScreenshotAfterTimeLatentAction *)0x0;
  }
  iStack_2c = -1;
  if (*(int *)&this_00->field_0x48 != 0) {
    puVar3 = *(undefined1 **)&this_00->field_0x40;
    if (*(undefined1 **)&this_00->field_0x40 == (undefined1 *)0x0) {
      puVar3 = &this_00->field_0x38;
    }
    iStack_2c = *(int *)(puVar3 + ((longlong)*(int *)&this_00->field_0x48 - 1U & (longlong)param_2)
                                  * 4);
    if (iStack_2c != -1) {
      do {
        iVar1 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iStack_2c * 0x18);
        if (*(int *)(*(longlong *)this_00 + (longlong)iStack_2c * 0x18) == param_2) break;
        iStack_2c = iVar1;
      } while (iVar1 != -1);
    }
  }
  if (iStack_2c == -1) {
    return (FTakeScreenshotAfterTimeLatentAction *)0x0;
  }
  return *(FTakeScreenshotAfterTimeLatentAction **)
          (*(longlong *)this_00 + 8 + (longlong)iStack_2c * 0x18);
}

// FindExistingActionWithPredicate<FWaitForLoadingToFinish,`FLatentActionManager::FindExistingAction<FWaitForLoadingToFinish>'::__l2::FFirstItemPredicate> @ 148c7b3c0

FWaitForLoadingToFinish * __thiscall
FLatentActionManager::
FindExistingActionWithPredicate<FWaitForLoadingToFinish,_FLatentActionManager::FindExistingAction<FWaitForLoadingToFinish>_::__l2::FFirstItemPredicate>
          (FLatentActionManager *this,UObject *param_1,int param_2,FFirstItemPredicate *param_3)

{
  TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
  *this_00;
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  int iStack_2c;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (*(int *)&(this->ObjectToActionListMap).field_0x8 ==
      *(int *)&(this->ObjectToActionListMap).field_0x34) {
    return (FWaitForLoadingToFinish *)0x0;
  }
  puVar3 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &(this->ObjectToActionListMap).field_0x38;
  }
  iVar1 = *(int *)(puVar3 + (((ulonglong)local_res8 >> 0x20 ^ (ulonglong)local_res8 & 0xffffffff) &
                            (ulonglong)(*(int *)&(this->ObjectToActionListMap).field_0x48 - 1)) * 4)
  ;
  if (iVar1 == -1) {
    return (FWaitForLoadingToFinish *)0x0;
  }
  while( true ) {
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
    if (((int)*puVar2 == local_res8.ObjectIndex) &&
       ((int)((ulonglong)*puVar2 >> 0x20) == local_res8.ObjectSerialNumber)) break;
    iVar1 = *(int *)(puVar2 + 3);
    if (iVar1 == -1) {
      return (FWaitForLoadingToFinish *)0x0;
    }
  }
  if (iVar1 == -1) {
    return (FWaitForLoadingToFinish *)0x0;
  }
  puVar4 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (FWaitForLoadingToFinish *)0x0;
  }
  this_00 = (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
             *)*puVar4;
  if (this_00 ==
      (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
       *)0x0) {
    return (FWaitForLoadingToFinish *)0x0;
  }
  iVar1 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
          ::Num(this_00,param_2);
  if (iVar1 < 1) {
    return (FWaitForLoadingToFinish *)0x0;
  }
  iStack_2c = -1;
  if (*(int *)&this_00->field_0x48 != 0) {
    puVar3 = *(undefined1 **)&this_00->field_0x40;
    if (*(undefined1 **)&this_00->field_0x40 == (undefined1 *)0x0) {
      puVar3 = &this_00->field_0x38;
    }
    iStack_2c = *(int *)(puVar3 + ((longlong)*(int *)&this_00->field_0x48 - 1U & (longlong)param_2)
                                  * 4);
    if (iStack_2c != -1) {
      do {
        iVar1 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iStack_2c * 0x18);
        if (*(int *)(*(longlong *)this_00 + (longlong)iStack_2c * 0x18) == param_2) break;
        iStack_2c = iVar1;
      } while (iVar1 != -1);
    }
  }
  if (iStack_2c == -1) {
    return (FWaitForLoadingToFinish *)0x0;
  }
  return *(FWaitForLoadingToFinish **)(*(longlong *)this_00 + 8 + (longlong)iStack_2c * 0x18);
}

// GetTypeName<AFunctionalTest> @ 148c7b580

FString * __cdecl GetTypeName<AFunctionalTest>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AFunctionalTest::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<APhasedAutomationActorBase> @ 148c7b5c0

FString * __cdecl GetTypeName<APhasedAutomationActorBase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = APhasedAutomationActorBase::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TObjectPtr<AFunctionalTest>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_> @ 148c7b600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<TObjectPtr<AFunctionalTest>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_>
          (TObjectPtr<AFunctionalTest> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName> param_4)

{
  FObjectPtr_u_0 FVar1;
  TObjectPtr<AFunctionalTest> TVar2;
  TObjectPtr<AFunctionalTest>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  FSortTestActorsByName *local_res20;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TObjectPtr<AFunctionalTest>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName> *)&local_res20)
  ;
  iVar12 = param_2 + -1;
  lVar11 = (longlong)iVar12;
  if (0 < iVar12) {
    do {
      FVar1 = *(FObjectPtr_u_0 *)&param_1->field0_0x0;
      param_1->field0_0x0 = param_1[lVar11].field0_0x0;
      param_1[lVar11].field0_0x0.ObjectPtr.field0_0x0 = FVar1;
      iVar13 = 0;
      if (1 < iVar12) {
        do {
          iVar7 = iVar13 * 2;
          iVar10 = iVar7 + 1;
          if (iVar7 + 2 < iVar12) {
            TVar2.field0_0x0 =
                 (TObjectPtr<AFunctionalTest>_u_0)param_1[(longlong)iVar7 + 2].field0_0x0.DebugPtr;
            local_88 = *(FName *)((longlong)param_1[iVar10].field0_0x0.DebugPtr + 0x18);
            ::FName::ToString(&local_88,&local_58);
            local_80 = *(FName *)((longlong)TVar2.field0_0x0 + 0x18);
            ::FName::ToString(&local_80,&local_68);
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar9.Data = local_68.Data.AllocatorInstance.Data;
            }
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_58.Data.ArrayNum != 0) {
              FVar8.Data = local_58.Data.AllocatorInstance.Data;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,(wchar_t *)FVar9.Data);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (iVar6 < 0) {
              iVar10 = iVar7;
            }
            iVar10 = iVar10 + 1;
          }
          TVar2.field0_0x0 = (TObjectPtr<AFunctionalTest>_u_0)param_1[iVar13].field0_0x0.DebugPtr;
          local_78 = *(FName *)((longlong)param_1[iVar10].field0_0x0.DebugPtr + 0x18);
          ::FName::ToString(&local_78,&local_38);
          local_70 = *(FName *)((longlong)TVar2.field0_0x0 + 0x18);
          ::FName::ToString(&local_70,&local_48);
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_48.Data.ArrayNum != 0) {
            FVar9.Data = local_48.Data.AllocatorInstance.Data;
          }
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_38.Data.ArrayNum != 0) {
            FVar8.Data = local_38.Data.AllocatorInstance.Data;
          }
          iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,(wchar_t *)FVar9.Data);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (-1 < iVar7) break;
          TVar3 = param_1[iVar13].field0_0x0;
          param_1[iVar13].field0_0x0 = param_1[iVar10].field0_0x0;
          param_1[iVar10].field0_0x0 = TVar3;
          iVar13 = iVar10;
        } while (iVar10 * 2 + 1 < iVar12);
      }
      iVar12 = iVar12 + -1;
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}

// HeapifyInternal<TObjectPtr<AFunctionalTest>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_>_> @ 148c7b850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapifyInternal<TObjectPtr<AFunctionalTest>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_>_>
          (TObjectPtr<AFunctionalTest> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_>
          param_4)

{
  TObjectPtr<AFunctionalTest> TVar1;
  TObjectPtr<AFunctionalTest>_u_0 TVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  int iVar11;
  int iVar12;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar4 = iVar8;
  iVar12 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_148c7ba40:
      if (iVar12 == 0) {
        return;
      }
      iVar6 = iVar12 + -1;
      iVar8 = iVar4 + -2;
      iVar4 = iVar8;
      iVar12 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar11 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      TVar1.field0_0x0 =
           (TObjectPtr<AFunctionalTest>_u_0)param_1[(longlong)iVar8 + 2].field0_0x0.DebugPtr;
      local_88 = *(FName *)((longlong)param_1[iVar11].field0_0x0.DebugPtr + 0x18);
      ::FName::ToString(&local_88,&local_58);
      local_80 = *(FName *)((longlong)TVar1.field0_0x0 + 0x18);
      ::FName::ToString(&local_80,&local_68);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar10.Data = local_68.Data.AllocatorInstance.Data;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (iVar7 < 0) {
        iVar11 = iVar8;
      }
      iVar11 = iVar11 + 1;
    }
    TVar1.field0_0x0 = (TObjectPtr<AFunctionalTest>_u_0)param_1[iVar6].field0_0x0.DebugPtr;
    local_78 = *(FName *)((longlong)param_1[iVar11].field0_0x0.DebugPtr + 0x18);
    ::FName::ToString(&local_78,&local_38);
    local_70 = *(FName *)((longlong)TVar1.field0_0x0 + 0x18);
    ::FName::ToString(&local_70,&local_48);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar10.Data = local_48.Data.AllocatorInstance.Data;
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar9.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (-1 < iVar8) goto LAB_148c7ba40;
    TVar2 = param_1[iVar6].field0_0x0;
    param_1[iVar6].field0_0x0 = param_1[iVar11].field0_0x0;
    param_1[iVar11].field0_0x0 = TVar2;
    iVar8 = iVar11 * 2 + 1;
    iVar6 = iVar11;
  } while( true );
}

// HelperGetStat<1,1> @ 148c7ba90

float __cdecl HelperGetStat<1,1>(FName param_1)

{
  FLatestGameThreadStatsData *pFVar1;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar2;
  
  pFVar1 = FLatestGameThreadStatsData::Get();
  if (pFVar1->Latest != (FGameThreadStatsData *)0x0) {
    pTVar2 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                     *)&pFVar1->Latest->NameToStatMap,param_1);
    if ((pTVar2 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0) &&
       (*(longlong *)&pTVar2->field_0x8 != 0)) {
      return (float)(*(longlong *)(*(longlong *)&pTVar2->field_0x8 + 8) >> 0x20 & 0xffffffff);
    }
  }
  return 0.0;
}

// HelperGetStat<1,0> @ 148c7baf0

float __cdecl HelperGetStat<1,0>(FName param_1)

{
  longlong lVar1;
  FLatestGameThreadStatsData *pFVar2;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar3;
  ulonglong uVar4;
  
  pFVar2 = FLatestGameThreadStatsData::Get();
  if (((pFVar2->Latest != (FGameThreadStatsData *)0x0) &&
      (pTVar3 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar2->Latest->NameToStatMap,param_1),
      pTVar3 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) &&
     (lVar1 = *(longlong *)&pTVar3->field_0x8, lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x44) & 0x100000) == 0) {
      uVar4 = *(ulonglong *)(lVar1 + 8);
    }
    else {
      uVar4 = (ulonglong)*(uint *)(lVar1 + 8);
    }
    return (float)((double)uVar4 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000
                  );
  }
  return 0.0;
}

// HelperGetStat<2,0> @ 148c7bb90

float __cdecl HelperGetStat<2,0>(FName param_1)

{
  longlong lVar1;
  FLatestGameThreadStatsData *pFVar2;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar3;
  ulonglong uVar4;
  
  pFVar2 = FLatestGameThreadStatsData::Get();
  if (((pFVar2->Latest != (FGameThreadStatsData *)0x0) &&
      (pTVar3 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar2->Latest->NameToStatMap,param_1),
      pTVar3 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) &&
     (lVar1 = *(longlong *)&pTVar3->field_0x8, lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x44) & 0x100000) == 0) {
      uVar4 = *(ulonglong *)(lVar1 + 0x10);
    }
    else {
      uVar4 = (ulonglong)*(uint *)(lVar1 + 0x10);
    }
    return (float)((double)uVar4 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000
                  );
  }
  return 0.0;
}

// HelperGetStat<5,0> @ 148c7bc30

float __cdecl HelperGetStat<5,0>(FName param_1)

{
  longlong lVar1;
  FLatestGameThreadStatsData *pFVar2;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar3;
  ulonglong uVar4;
  
  pFVar2 = FLatestGameThreadStatsData::Get();
  if (((pFVar2->Latest != (FGameThreadStatsData *)0x0) &&
      (pTVar3 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar2->Latest->NameToStatMap,param_1),
      pTVar3 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) &&
     (lVar1 = *(longlong *)&pTVar3->field_0x8, lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x44) & 0x100000) == 0) {
      uVar4 = *(ulonglong *)(lVar1 + 0x28);
    }
    else {
      uVar4 = (ulonglong)*(uint *)(lVar1 + 0x28);
    }
    return (float)((double)uVar4 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000
                  );
  }
  return 0.0;
}

// HelperGetStat<6,0> @ 148c7bcd0

float __cdecl HelperGetStat<6,0>(FName param_1)

{
  longlong lVar1;
  FLatestGameThreadStatsData *pFVar2;
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar3;
  ulonglong uVar4;
  
  pFVar2 = FLatestGameThreadStatsData::Get();
  if (((pFVar2->Latest != (FGameThreadStatsData *)0x0) &&
      (pTVar3 = TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
                        *)&pFVar2->Latest->NameToStatMap,param_1),
      pTVar3 != (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0)) &&
     (lVar1 = *(longlong *)&pTVar3->field_0x8, lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x44) & 0x100000) == 0) {
      uVar4 = *(ulonglong *)(lVar1 + 0x30);
    }
    else {
      uVar4 = (ulonglong)*(uint *)(lVar1 + 0x30);
    }
    return (float)((double)uVar4 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000
                  );
  }
  return 0.0;
}

// InternalConstructor<AFunctionalAITest> @ 148c7bd70

void __cdecl InternalConstructor<AFunctionalAITest>(FObjectInitializer *param_1)

{
  AFunctionalAITestBase *this;
  
  this = (AFunctionalAITestBase *)param_1->Obj;
  if (this != (AFunctionalAITestBase *)0x0) {
    AFunctionalAITestBase::AFunctionalAITestBase(this,param_1);
    this->_padding_ = (longlong)&___7AFunctionalAITest__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<AFunctionalAITestBase> @ 148c7bdb0

void __cdecl InternalConstructor<AFunctionalAITestBase>(FObjectInitializer *param_1)

{
  if ((AFunctionalAITestBase *)param_1->Obj != (AFunctionalAITestBase *)0x0) {
    AFunctionalAITestBase::AFunctionalAITestBase((AFunctionalAITestBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AFunctionalTest> @ 148c7bdd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AFunctionalTest>(FObjectInitializer *param_1)

{
  if ((AFunctionalTest *)param_1->Obj != (AFunctionalTest *)0x0) {
    AFunctionalTest::AFunctionalTest((AFunctionalTest *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AFunctionalTestGameMode> @ 148c7bdf0

void __cdecl InternalConstructor<AFunctionalTestGameMode>(FObjectInitializer *param_1)

{
  AGameModeBase *this;
  UClass *pUVar1;
  
  this = (AGameModeBase *)param_1->Obj;
  if (this != (AGameModeBase *)0x0) {
    AGameModeBase::AGameModeBase(this,param_1);
    this->_padding_ = (longlong)&___7AFunctionalTestGameMode__6B_;
    pUVar1 = Z_Construct_UClass_ASpectatorPawn_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->DefaultPawnClass).Class.field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// InternalConstructor<AFunctionalTestLevelScript> @ 148c7be50

void __cdecl InternalConstructor<AFunctionalTestLevelScript>(FObjectInitializer *param_1)

{
  ALevelScriptActor *this;
  
  this = (ALevelScriptActor *)param_1->Obj;
  if (this != (ALevelScriptActor *)0x0) {
    ALevelScriptActor::ALevelScriptActor(this,param_1);
    this->_padding_ = (longlong)&___7AFunctionalTestLevelScript__6B_;
  }
  return;
}

// InternalConstructor<AFunctionalUIScreenshotTest> @ 148c7be80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl InternalConstructor<AFunctionalUIScreenshotTest>(FObjectInitializer *param_1)

{
  AScreenshotFunctionalTestBase *this;
  
  this = (AScreenshotFunctionalTestBase *)param_1->Obj;
  if (this != (AScreenshotFunctionalTestBase *)0x0) {
    AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7AFunctionalUIScreenshotTest__6B_;
    this[1]._padding_ = 0x3f91111111111111;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
  }
  return;
}

// InternalConstructor<APhasedAutomationActorBase> @ 148c7bef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APhasedAutomationActorBase>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APhasedAutomationActorBase__6B_;
  }
  return;
}

// InternalConstructor<AScreenshotFunctionalTest> @ 148c7bf20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl InternalConstructor<AScreenshotFunctionalTest>(FObjectInitializer *param_1)

{
  uint *puVar1;
  AScreenshotFunctionalTestBase *this;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  
  this = (AScreenshotFunctionalTestBase *)param_1->Obj;
  if (this != (AScreenshotFunctionalTestBase *)0x0) {
    AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7AScreenshotFunctionalTest__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 2;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0;
    iVar3 = (int)this[1]._padding_;
    uVar4 = iVar3 >> 0x1f & 0x1f;
    uVar2 = iVar3 + uVar4;
    iVar3 = (uVar2 & 0x1f) - uVar4;
    if (iVar3 != 0) {
      plVar5 = (longlong *)this[1]._padding_;
      if ((longlong *)this[1]._padding_ == (longlong *)0x0) {
        plVar5 = &this[1]._padding_;
      }
      puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)uVar2 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<AScreenshotFunctionalTestBase> @ 148c7bfc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl InternalConstructor<AScreenshotFunctionalTestBase>(FObjectInitializer *param_1)

{
  if ((AScreenshotFunctionalTestBase *)param_1->Obj != (AScreenshotFunctionalTestBase *)0x0) {
    AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase
              ((AScreenshotFunctionalTestBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAutomationBlueprintFunctionLibrary> @ 148c7bfe0

void __cdecl InternalConstructor<UAutomationBlueprintFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAutomationBlueprintFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UAutomationEditorTask> @ 148c7c010

void __cdecl InternalConstructor<UAutomationEditorTask>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAutomationEditorTask__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAutomationPerformaceHelper> @ 148c7c050

void __cdecl InternalConstructor<UAutomationPerformaceHelper>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UAutomationPerformaceHelper__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined2 *)&this[1].field_0x14 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UAutomationViewSettings> @ 148c7c0a0

void __cdecl InternalConstructor<UAutomationViewSettings>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  FObjectInitializer *pFVar1;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UDataAsset::UDataAsset(this,pFVar1);
    *(undefined4 *)&this[1]._padding_ = 0x1010101;
    this->_padding_ = (longlong)&___7UAutomationViewSettings__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x1010101;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UFuncTestRenderingComponent> @ 148c7c0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UFuncTestRenderingComponent>(FObjectInitializer *param_1)

{
  UPrimitiveComponent *this;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    this->field_0x1ab = 1;
    *(undefined ***)this = &UFuncTestRenderingComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UFuncTestRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UFuncTestRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UFuncTestRenderingComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UFuncTestRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UFuncTestRenderingComponent::_vftable__for__IPhysicsComponent__;
    FBodyInstance::SetCollisionProfileName
              (&this->BodyInstance,UCollisionProfile::NoCollision_ProfileName);
    this->field_0x9b = this->field_0x9b | 2;
    UPrimitiveComponent::SetGenerateOverlapEvents(this,false);
    return;
  }
  return;
}

// InternalConstructor<UFunctionalTestUtilityLibrary> @ 148c7c1a0

void __cdecl InternalConstructor<UFunctionalTestUtilityLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UFunctionalTestUtilityLibrary__6B_;
  }
  return;
}

// InternalConstructor<UFunctionalTestingManager> @ 148c7c1d0

void __cdecl InternalConstructor<UFunctionalTestingManager>(FObjectInitializer *param_1)

{
  if ((UFunctionalTestingManager *)param_1->Obj != (UFunctionalTestingManager *)0x0) {
    UFunctionalTestingManager::UFunctionalTestingManager
              ((UFunctionalTestingManager *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGroundTruthData> @ 148c7c1f0

void __cdecl InternalConstructor<UGroundTruthData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UGroundTruthData__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UTestPhaseComponent> @ 148c7c230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UTestPhaseComponent>(FObjectInitializer *param_1)

{
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UTestPhaseComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UTestPhaseComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTestPhaseComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  }
  return;
}

// InternalConstructor<UTraceQueryTestResults> @ 148c7c280

void __cdecl InternalConstructor<UTraceQueryTestResults>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UTraceQueryTestResults__6B_;
    FTraceQueryTestResultsInner::FTraceQueryTestResultsInner
              ((FTraceQueryTestResultsInner *)(this + 1));
    FTraceQueryTestResultsInner::FTraceQueryTestResultsInner
              ((FTraceQueryTestResultsInner *)&this[0x21].field_0x20);
    FTraceQueryTestResultsInner::FTraceQueryTestResultsInner
              ((FTraceQueryTestResultsInner *)&this[0x42].field_0x18);
    *(undefined4 *)&this[99].field_0x10 = 1;
    *(undefined2 *)&this[99].field_0x14 = 1;
    this[99].field_0x16 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AFunctionalAITest> @ 148c7c2f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AFunctionalAITest>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AFunctionalAITestBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AFunctionalAITest::GetPrivateStaticClass();
  this = (AFunctionalAITestBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AFunctionalAITestBase *)0x0) {
    AFunctionalAITestBase::AFunctionalAITestBase(this,param_1);
    this->_padding_ = (longlong)&___7AFunctionalAITest__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AFunctionalAITestBase> @ 148c7c3b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AFunctionalAITestBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AFunctionalAITestBase *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AFunctionalAITestBase::GetPrivateStaticClass();
  pAVar3 = (AFunctionalAITestBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (AFunctionalAITestBase *)0x0) {
    pAVar3 = AFunctionalAITestBase::AFunctionalAITestBase(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AFunctionalTest> @ 148c7c450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AFunctionalTest>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AFunctionalTest *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AFunctionalTest::GetPrivateStaticClass();
  pAVar3 = (AFunctionalTest *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (AFunctionalTest *)0x0) {
    pAVar3 = AFunctionalTest::AFunctionalTest(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AFunctionalTestGameMode> @ 148c7c4f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AFunctionalTestGameMode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AGameModeBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AFunctionalTestGameMode::GetPrivateStaticClass();
  this = (AGameModeBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AGameModeBase *)0x0) {
    AGameModeBase::AGameModeBase(this,param_1);
    this->_padding_ = (longlong)&___7AFunctionalTestGameMode__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AFunctionalTestLevelScript> @ 148c7c5a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AFunctionalTestLevelScript>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ALevelScriptActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AFunctionalTestLevelScript::GetPrivateStaticClass();
  this = (ALevelScriptActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ALevelScriptActor *)0x0) {
    ALevelScriptActor::ALevelScriptActor(this,param_1);
    this->_padding_ = (longlong)&___7AFunctionalTestLevelScript__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AFunctionalUIScreenshotTest> @ 148c7c650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AFunctionalUIScreenshotTest>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AScreenshotFunctionalTestBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AFunctionalUIScreenshotTest::GetPrivateStaticClass();
  this = (AScreenshotFunctionalTestBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AScreenshotFunctionalTestBase *)0x0) {
    AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase(this,param_1);
    this->_padding_ = (longlong)&___7AFunctionalUIScreenshotTest__6B_;
    this[1]._padding_ = 0x3f91111111111111;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APhasedAutomationActorBase> @ 148c7c730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APhasedAutomationActorBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APhasedAutomationActorBase::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APhasedAutomationActorBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AScreenshotFunctionalTest> @ 148c7c7e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AScreenshotFunctionalTest>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AScreenshotFunctionalTestBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AScreenshotFunctionalTest::GetPrivateStaticClass();
  this = (AScreenshotFunctionalTestBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AScreenshotFunctionalTestBase *)0x0) {
    AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase(this,param_1);
    this->_padding_ = (longlong)&___7AScreenshotFunctionalTest__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AScreenshotFunctionalTestBase> @ 148c7c8b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AScreenshotFunctionalTestBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AScreenshotFunctionalTestBase *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AScreenshotFunctionalTestBase::GetPrivateStaticClass();
  pAVar3 = (AScreenshotFunctionalTestBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (AScreenshotFunctionalTestBase *)0x0) {
    pAVar3 = AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAutomationBlueprintFunctionLibrary> @ 148c7c950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAutomationBlueprintFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationBlueprintFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAutomationBlueprintFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAutomationEditorTask> @ 148c7ca00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAutomationEditorTask>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationEditorTask::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAutomationEditorTask__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAutomationPerformaceHelper> @ 148c7cab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAutomationPerformaceHelper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationPerformaceHelper::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAutomationPerformaceHelper__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    pUVar1[1].field_0x15 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAutomationViewSettings> @ 148c7cb80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAutomationViewSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationViewSettings::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UAutomationViewSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFuncTestRenderingComponent> @ 148c7cc30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFuncTestRenderingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimitiveComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFuncTestRenderingComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UFuncTestRenderingComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UFuncTestRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UFuncTestRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UFuncTestRenderingComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UFuncTestRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UFuncTestRenderingComponent::_vftable__for__IPhysicsComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFunctionalTestUtilityLibrary> @ 148c7cd20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFunctionalTestUtilityLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFunctionalTestUtilityLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFunctionalTestUtilityLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFunctionalTestingManager> @ 148c7cdd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFunctionalTestingManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFunctionalTestingManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFunctionalTestingManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGroundTruthData> @ 148c7cef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGroundTruthData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGroundTruthData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGroundTruthData__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTestPhaseComponent> @ 148c7cfa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTestPhaseComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTestPhaseComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UTestPhaseComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UTestPhaseComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTestPhaseComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTraceQueryTestResults> @ 148c7d060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTraceQueryTestResults>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTraceQueryTestResults::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTraceQueryTestResults__6B_;
    FTraceQueryTestResultsInner::FTraceQueryTestResultsInner
              ((FTraceQueryTestResultsInner *)(pUVar1 + 1));
    FTraceQueryTestResultsInner::FTraceQueryTestResultsInner
              ((FTraceQueryTestResultsInner *)&pUVar1[0x21].field_0x20);
    FTraceQueryTestResultsInner::FTraceQueryTestResultsInner
              ((FTraceQueryTestResultsInner *)&pUVar1[0x42].field_0x18);
    *(undefined4 *)&pUVar1[99].field_0x10 = 1;
    *(undefined2 *)&pUVar1[99].field_0x14 = 1;
    pUVar1[99].field_0x16 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TObjectPtr<AFunctionalTest>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_> @ 148c7d150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<TObjectPtr<AFunctionalTest>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_>
          (TObjectPtr<AFunctionalTest> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName> param_4)

{
  TObjectPtr<AFunctionalTest>_u_0 TVar1;
  AFunctionalTest *pAVar2;
  int iVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  TObjectPtr<AFunctionalTest>_u_0 *pTVar6;
  TObjectPtr<AFunctionalTest>_u_0 *pTVar7;
  TObjectPtr<AFunctionalTest>_u_0 *pTVar8;
  TObjectPtr<AFunctionalTest>_u_0 *pTVar9;
  TObjectPtr<AFunctionalTest>_u_0 *pTVar10;
  float fVar11;
  undefined1 auStack_408 [32];
  FName local_3e8;
  TObjectPtr<AFunctionalTest> **local_3e0;
  int local_3d8;
  FSortTestActorsByName *local_3d0;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378 [2];
  TObjectPtr<AFunctionalTest> *local_358;
  TObjectPtr<AFunctionalTest> *local_348;
  TObjectPtr<AFunctionalTest> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_3d0 = param_4.Predicate;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    local_3e0 = &local_348;
    do {
      pTVar8 = &local_3e0[1]->field0_0x0;
      pTVar7 = &(*local_3e0)->field0_0x0;
      local_358 = local_3e0[2];
      iVar3 = (int)((longlong)pTVar8 - (longlong)pTVar7 >> 3) + 1;
      local_3d8 = (int)local_358;
      pTVar6 = pTVar7;
      if ((int)local_358 != 0) {
LAB_148c7d220:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pTVar9 = pTVar8 + 1;
          TVar1 = pTVar6[iVar3 >> 1];
          pTVar6[iVar3 >> 1].DebugPtr = (AFunctionalTest *)*(AFunctionalTest **)pTVar6;
          *pTVar6 = TVar1;
          pTVar7 = pTVar6;
LAB_148c7d250:
          pTVar7 = pTVar7 + 1;
          if (pTVar7 <= pTVar8) goto code_r0x000148c7d25d;
          goto LAB_148c7d2f0;
        }
        for (; pTVar9 = pTVar6, pTVar7 = pTVar6, pTVar6 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar10 = pTVar9, pTVar7 = pTVar7 + 1, pTVar7 <= pTVar8) {
            pAVar2 = pTVar10->DebugPtr;
            local_3e8 = (FName)pTVar7->DebugPtr->_padding_;
            ::FName::ToString(&local_3e8,local_378);
            local_3e8 = (FName)pAVar2->_padding_;
            ::FName::ToString(&local_3e8,&local_388);
            FVar5.Data = (FScriptContainerElement *)L"";
            if (local_388.Data.ArrayNum != 0) {
              FVar5.Data = local_388.Data.AllocatorInstance.Data;
            }
            FVar4.Data = (FScriptContainerElement *)L"";
            if (local_378[0].Data.ArrayNum != 0) {
              FVar4.Data = local_378[0].Data.AllocatorInstance.Data;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,(wchar_t *)FVar5.Data);
            if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_388.Data.AllocatorInstance.Data);
            }
            if (local_378[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378[0].Data.AllocatorInstance.Data);
            }
            pTVar9 = pTVar7;
            if (-1 < iVar3) {
              pTVar9 = pTVar10;
            }
          }
          TVar1.DebugPtr = *(AFunctionalTest **)pTVar10;
          *pTVar10 = *(AFunctionalTest **)pTVar8;
          pTVar8->DebugPtr = (AFunctionalTest *)TVar1;
          param_4.Predicate = local_3d0;
        }
        goto LAB_148c7d456;
      }
LAB_148c7d440:
      HeapSortInternal<TObjectPtr<AFunctionalTest>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<AFunctionalTest>,FSortTestActorsByName>_>
                ((TObjectPtr<AFunctionalTest> *)&pTVar7->ObjectPtr,iVar3,param_3,param_4);
LAB_148c7d456:
      local_3e0 = local_3e0 + -3;
    } while (&local_348 <= local_3e0);
  }
  return;
code_r0x000148c7d25d:
  pAVar2 = pTVar6->DebugPtr;
  local_3e8 = (FName)pTVar7->DebugPtr->_padding_;
  ::FName::ToString(&local_3e8,&local_3b8);
  local_3e8 = (FName)pAVar2->_padding_;
  ::FName::ToString(&local_3e8,&local_3c8);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_3c8.Data.ArrayNum != 0) {
    FVar5.Data = local_3c8.Data.AllocatorInstance.Data;
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_3b8.Data.ArrayNum != 0) {
    FVar4.Data = local_3b8.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,(wchar_t *)FVar5.Data);
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (-1 < iVar3) goto LAB_148c7d250;
LAB_148c7d2f0:
  do {
    pTVar10 = pTVar9;
    pTVar9 = pTVar10 + -1;
    if (pTVar9 <= pTVar6) break;
    pAVar2 = pTVar9->DebugPtr;
    local_3e8 = (FName)pTVar6->DebugPtr->_padding_;
    ::FName::ToString(&local_3e8,&local_398);
    local_3e8 = (FName)pAVar2->_padding_;
    ::FName::ToString(&local_3e8,&local_3a8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_3a8.Data.ArrayNum != 0) {
      FVar5.Data = local_3a8.Data.AllocatorInstance.Data;
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_398.Data.ArrayNum != 0) {
      FVar4.Data = local_398.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,(wchar_t *)FVar5.Data);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  } while (-1 < iVar3);
  if (pTVar7 <= pTVar9) {
    TVar1.DebugPtr = *(AFunctionalTest **)pTVar7;
    pTVar7->DebugPtr = (AFunctionalTest *)*(AFunctionalTest **)pTVar9;
    pTVar9->DebugPtr = (AFunctionalTest *)TVar1;
    goto LAB_148c7d250;
  }
  TVar1.DebugPtr = *(AFunctionalTest **)pTVar6;
  pTVar6->DebugPtr = (AFunctionalTest *)*(AFunctionalTest **)pTVar9;
  local_3d8 = local_3d8 + -1;
  pTVar9->DebugPtr = (AFunctionalTest *)TVar1;
  if ((longlong)((longlong)pTVar9 + (-8 - (longlong)pTVar6) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar8 - (longlong)pTVar7 & 0xfffffffffffffff8U)) {
    if (pTVar7 < pTVar8) {
      *local_3e0 = (TObjectPtr<AFunctionalTest> *)pTVar7;
      local_3e0[1] = (TObjectPtr<AFunctionalTest> *)pTVar8;
      *(int *)(local_3e0 + 2) = local_3d8;
      local_3e0 = local_3e0 + 3;
    }
    if (pTVar9 <= pTVar6 + 1) goto LAB_148c7d456;
    pTVar8 = pTVar10 + -2;
    pTVar7 = pTVar6;
  }
  else {
    if (pTVar6 + 1 < pTVar9) {
      *local_3e0 = (TObjectPtr<AFunctionalTest> *)pTVar6;
      local_3e0[1] = (TObjectPtr<AFunctionalTest> *)(pTVar10 + -2);
      *(int *)(local_3e0 + 2) = local_3d8;
      local_3e0 = local_3e0 + 3;
    }
    if (pTVar8 <= pTVar7) goto LAB_148c7d456;
  }
  iVar3 = (int)((longlong)pTVar8 - (longlong)pTVar7 >> 3) + 1;
  pTVar6 = pTVar7;
  if (local_3d8 == 0) goto LAB_148c7d440;
  goto LAB_148c7d220;
}

// NewObject<UAutomationEditorTask> @ 148c7d590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAutomationEditorTask * __cdecl NewObject<UAutomationEditorTask>(UObject *param_1)

{
  UClass *pUVar1;
  UAutomationEditorTask *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAutomationEditorTask::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAutomationEditorTask *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UFunctionalTestingManager> @ 148c7d630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFunctionalTestingManager * __cdecl NewObject<UFunctionalTestingManager>(UObject *param_1)

{
  UClass *pUVar1;
  UFunctionalTestingManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UFunctionalTestingManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UFunctionalTestingManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTraceQueryTestResults> @ 148c7d6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTraceQueryTestResults * __cdecl NewObject<UTraceQueryTestResults>(UObject *param_1)

{
  UClass *pUVar1;
  UTraceQueryTestResults *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UTraceQueryTestResults::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTraceQueryTestResults *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EComparisonMethod> @ 148c7df80

UEnum * __cdecl StaticEnum<enum_EComparisonMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod,(UObject *)pUVar1,
                       L"EComparisonMethod");
  }
  return Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton;
}

// StaticEnum<enum_EComparisonTolerance> @ 148c7dfc0

UEnum * __cdecl StaticEnum<enum_EComparisonTolerance>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComparisonTolerance.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EComparisonTolerance.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance,(UObject *)pUVar1,
                       L"EComparisonTolerance");
  }
  return Z_Registration_Info_UEnum_EComparisonTolerance.OuterSingleton;
}

// StaticEnum<enum_EFunctionalTestLogHandling> @ 148c7e000

UEnum * __cdecl StaticEnum<enum_EFunctionalTestLogHandling>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling,
                       (UObject *)pUVar1,L"EFunctionalTestLogHandling");
  }
  return Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton;
}

// StaticEnum<enum_EFunctionalTestResult> @ 148c7e040

UEnum * __cdecl StaticEnum<enum_EFunctionalTestResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult,(UObject *)pUVar1,
                       L"EFunctionalTestResult");
  }
  return Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton;
}

// StaticEnum<enum_EWidgetTestAppearLocation> @ 148c7e080

UEnum * __cdecl StaticEnum<enum_EWidgetTestAppearLocation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetTestAppearLocation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EWidgetTestAppearLocation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation,
                       (UObject *)pUVar1,L"EWidgetTestAppearLocation");
  }
  return Z_Registration_Info_UEnum_EWidgetTestAppearLocation.OuterSingleton;
}

// ~TFunction_OwnedObject<`GetBackbufferInfo'::__l2::<lambda_1>,1,1> @ 148c80790

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`GetBackbufferInfo'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_GetBackbufferInfo_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`GetBackbufferInfo'::`2'::<lambda_1>,1,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`ReadBackbuffer'::__l2::<lambda_1>,1,0> @ 148c807b0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ReadBackbuffer'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_ReadBackbuffer_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`ReadBackbuffer'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ReadPixelsFromRT'::__l2::<lambda_1>,1,0> @ 148c807d0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ReadPixelsFromRT'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_ReadPixelsFromRT_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`ReadPixelsFromRT'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAutomationScreenshotTaker::DeleteSelfNextFrame'::__l5::<lambda_1>,1,0> @ 148c807f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationScreenshotTaker::DeleteSelfNextFrame'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FAutomationScreenshotTaker::DeleteSelfNextFrame_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__DeleteSelfNextFrame_FAutomationScreenshotTaker__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// operator() @ 148c81f70

void __thiscall
`GetBackbufferInfo'::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  FRHIResource *local_res8;
  
  this_00 = *(FRHIResource **)(*(longlong *)this + 0xa0);
  if (this_00 == (FRHIResource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewportRHI.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalUIScreenshotTest.cpp"
                       ,0x31,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FRHIResource::AddRef(this_00);
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x298))(GDynamicRHI,&local_res8,this_00);
  if ((local_res8 == (FRHIResource *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BackbufferTexture.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalUIScreenshotTest.cpp"
                         ,0x33,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar3 = (**(code **)(local_res8->_padding_ + 0x20))();
  **(undefined1 **)((longlong)this + 8) = *(undefined1 *)(lVar3 + 0x33);
  pbVar4 = (byte *)(**(code **)(local_res8->_padding_ + 0x20))();
  **(byte **)((longlong)this + 0x10) = *pbVar4 >> 4 & 1;
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  return;
}

// operator() @ 148c82060

void __thiscall
`ReadBackbuffer'::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  undefined4 uVar1;
  FRHIResource *this_00;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FRHITexture *local_res8;
  TIntRect<int>_u_0 local_68;
  FReadSurfaceDataFlags local_58;
  FReadSurfaceDataFlags local_38;
  
  this_00 = *(FRHIResource **)(*(longlong *)this + 0xa0);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x298))(GDynamicRHI,&local_res8,this_00);
  pTVar2 = *(TArray<FColor,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
  local_58._9_2_ = local_38._9_2_;
  local_58._11_1_ = local_38._11_1_;
  local_58._18_2_ = local_38._18_2_;
  local_58.CubeFace = CubeFace_MAX;
  local_58.CompressionMode = RCM_UNorm;
  local_58.bLinearToGamma = true;
  local_58.MaxDepthRange = 16000.0;
  local_58.bOutputStencil = false;
  local_58.MipLevel = '\0';
  local_58.ArrayIndex = 0;
  lVar3 = (**(code **)(local_res8->_padding_ + 0x20))();
  local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  uVar1 = *(undefined4 *)(lVar3 + 0x28);
  lVar3 = (**(code **)(local_res8->_padding_ + 0x20))();
  local_38._9_2_ = local_58._9_2_;
  local_38.bLinearToGamma = local_58.bLinearToGamma;
  local_38._11_1_ = local_58._11_1_;
  local_38.MaxDepthRange = local_58.MaxDepthRange;
  local_38._18_2_ = local_58._18_2_;
  local_38.bOutputStencil = local_58.bOutputStencil;
  local_38.MipLevel = local_58.MipLevel;
  local_38.ArrayIndex = local_58.ArrayIndex;
  local_68._8_4_ = *(undefined4 *)(lVar3 + 0x24);
  local_38.CubeFace = local_58.CubeFace;
  local_38.CompressionMode = local_58.CompressionMode;
  local_38.GPUIndex = 0;
  local_68._12_4_ = uVar1;
  FRHICommandListImmediate::ReadSurfaceData
            (param_1,local_res8,(TIntRect<int> *)&local_68._s_0,pTVar2,&local_38);
  if (local_res8 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_res8);
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  return;
}

// operator() @ 148c82180

void __thiscall
`ReadPixelsFromRT'::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  FTextureRenderTargetResource *pFVar1;
  TIntRect<int>_u_0 local_58;
  undefined8 local_48;
  undefined1 uStack_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined2 local_38;
  ushort uStack_36;
  undefined4 uStack_34;
  FReadSurfaceDataFlags local_28;
  
  pFVar1 = UTextureRenderTarget::GetRenderTargetResource(*(UTextureRenderTarget **)this);
  uStack_36 = local_28._18_2_;
  uStack_3f = local_28._9_2_;
  local_58._8_4_ = *(undefined4 *)(*(longlong *)this + 0x158);
  local_58._12_4_ = *(undefined4 *)(*(longlong *)this + 0x15c);
  uStack_3d = local_28._11_1_;
  local_38 = 0;
  uStack_34 = 0;
  local_28._16_8_ = (ulonglong)(ushort)local_28._18_2_ << 0x10;
  local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_28.GPUIndex = 0;
  local_48 = 6;
  uStack_40 = 1;
  uStack_3c = 0x467a0000;
  local_28.bLinearToGamma = true;
  local_28.MaxDepthRange = 16000.0;
  local_28.CubeFace = CubeFace_MAX;
  local_28.CompressionMode = RCM_UNorm;
  FRHICommandListImmediate::ReadSurfaceData
            (param_1,(FRHITexture *)pFVar1->_padding_,(TIntRect<int> *)&local_58._s_0,
             *(TArray<FColor,TSizedDefaultAllocator<32>_> **)((longlong)this + 8),&local_28);
  return;
}

// `vcall'{2280,{flat}}'_}' @ 148c82874

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]: __cdecl AScreenshotFunctionalTestBase::`vcall'{2280,{flat}}' }' */

void __thiscall
AScreenshotFunctionalTestBase::_vcall__2280__flat______(AScreenshotFunctionalTestBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148c82877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x8e8))();
  return;
}

// `vcall'{2296,{flat}}'_}' @ 148c82884

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]: __cdecl AScreenshotFunctionalTestBase::`vcall'{2296,{flat}}' }' */

void __thiscall
AScreenshotFunctionalTestBase::_vcall__2296__flat______(AScreenshotFunctionalTestBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148c82887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x8f8))();
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 148c82894

/* [thunk]:public: virtual void * __ptr64 __cdecl UFuncTestRenderingComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UFuncTestRenderingComponent::_vector_deleting_destructor__adjustor_592__
          (UFuncTestRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFuncTestRenderingComponent *)&this[-1].field_0x300,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 148c828a8

/* [thunk]:public: virtual void * __ptr64 __cdecl UFuncTestRenderingComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UFuncTestRenderingComponent::_vector_deleting_destructor__adjustor_600__
          (UFuncTestRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFuncTestRenderingComponent *)&this[-1].field_0x2f8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 148c828bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UFuncTestRenderingComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UFuncTestRenderingComponent::_vector_deleting_destructor__adjustor_608__
          (UFuncTestRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFuncTestRenderingComponent *)&this[-1].field_0x2f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148c828d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UFuncTestRenderingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UFuncTestRenderingComponent::_vector_deleting_destructor__adjustor_40__
          (UFuncTestRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFuncTestRenderingComponent *)&this[-1].field_0x528,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148c828e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UTestPhaseComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UTestPhaseComponent::_vector_deleting_destructor__adjustor_40__
          (UTestPhaseComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTestPhaseComponent *)&this[-1].field_0x228,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148c828f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82920

void * __thiscall
IBaseDelegateInstance<void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82950

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationScreenshotTaker,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationScreenshotTaker,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82980

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationScreenshotTaker,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationScreenshotTaker,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c829b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationScreenshotTaker,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationScreenshotTaker,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c829e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationScreenshotTaker,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationScreenshotTaker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82a10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTakeScreenshotAfterTimeLatentAction,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTakeScreenshotAfterTimeLatentAction,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82a40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWaitForLoadingToFinish,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWaitForLoadingToFinish,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82a70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWaitForScreenshotComparisonLatentAction,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWaitForScreenshotComparisonLatentAction,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82aa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AFunctionalAITestBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82ad0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTest,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82b00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82b30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82b60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AScreenshotFunctionalTestBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82b90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82bc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82bf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82c20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFunctionalTestingManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82c50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82c80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AFunctionalTest_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82cb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,AFunctionalTest_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82ce0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`GetBackbufferInfo'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`GetBackbufferInfo'::`2'::<lambda_1>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82d20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ReadBackbuffer'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`ReadBackbuffer'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82d60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ReadPixelsFromRT'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`ReadPixelsFromRT'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationScreenshotTaker::DeleteSelfNextFrame'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__DeleteSelfNextFrame_FAutomationScreenshotTaker__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82de0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationTestScreenshotEnvSetup,SharedPointerInternals::DefaultDeleter<FAutomationTestScreenshotEnvSetup>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationTestScreenshotEnvSetup,SharedPointerInternals::DefaultDeleter<FAutomationTestScreenshotEnvSetup>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82e20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationViewExtension,SharedPointerInternals::DefaultDeleter<FAutomationViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationViewExtension,SharedPointerInternals::DefaultDeleter<FAutomationViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82e60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStartFTestOnMap,SharedPointerInternals::DefaultDeleter<FStartFTestOnMap>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FStartFTestOnMap,SharedPointerInternals::DefaultDeleter<FStartFTestOnMap>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82ea0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStartFTestsOnMap,SharedPointerInternals::DefaultDeleter<FStartFTestsOnMap>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FStartFTestsOnMap,SharedPointerInternals::DefaultDeleter<FStartFTestsOnMap>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82ee0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTriggerFTest,SharedPointerInternals::DefaultDeleter<FTriggerFTest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTriggerFTest,SharedPointerInternals::DefaultDeleter<FTriggerFTest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82f20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTriggerFTests,SharedPointerInternals::DefaultDeleter<FTriggerFTests>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTriggerFTests,SharedPointerInternals::DefaultDeleter<FTriggerFTests>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82f60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWaitForFTestsToFinish,SharedPointerInternals::DefaultDeleter<FWaitForFTestsToFinish>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWaitForFTestsToFinish,SharedPointerInternals::DefaultDeleter<FWaitForFTestsToFinish>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c82fa0

void * __thiscall
AFunctionalAITest::_scalar_deleting_destructor_(AFunctionalAITest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AFunctionalAITest__6B_;
  DestructItems<FAITestSpawnSet,int>
            ((FAITestSpawnSet *)(this->SpawnSets).AllocatorInstance.Data,(this->SpawnSets).ArrayNum)
  ;
  pFVar1 = (this->SpawnSets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AFunctionalAITestBase::~AFunctionalAITestBase((AFunctionalAITestBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83030

void * __thiscall
AFunctionalAITestBase::_scalar_deleting_destructor_(AFunctionalAITestBase *this,uint param_1)

{
  ~AFunctionalAITestBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AFunctionalTest::_scalar_deleting_destructor_(AFunctionalTest *this,uint param_1)

{
  ~AFunctionalTest(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x438);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c830f0

void * __thiscall
AFunctionalTestGameMode::_scalar_deleting_destructor_(AFunctionalTestGameMode *this,uint param_1)

{
  *(undefined ***)this = &___7AFunctionalTestGameMode__6B_;
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83150

void * __thiscall
AFunctionalTestLevelScript::_scalar_deleting_destructor_
          (AFunctionalTestLevelScript *this,uint param_1)

{
  *(undefined ***)this = &___7AFunctionalTestLevelScript__6B_;
  ALevelScriptActor::~ALevelScriptActor((ALevelScriptActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c831b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AFunctionalUIScreenshotTest::_scalar_deleting_destructor_
          (AFunctionalUIScreenshotTest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTestBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  AFunctionalTest::~AFunctionalTest((AFunctionalTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x508);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
APhasedAutomationActorBase::_scalar_deleting_destructor_
          (APhasedAutomationActorBase *this,uint param_1)

{
  *(undefined ***)this = &___7APhasedAutomationActorBase__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AScreenshotFunctionalTest::_scalar_deleting_destructor_
          (AScreenshotFunctionalTest *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTest__6B_;
  FVar1 = (this->RequestedVariants).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTestBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  AFunctionalTest::~AFunctionalTest((AFunctionalTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x510);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83330

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AScreenshotFunctionalTestBase::_scalar_deleting_destructor_
          (AScreenshotFunctionalTestBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTestBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScreenshotEnvSetup).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Notes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AFunctionalTest::~AFunctionalTest((AFunctionalTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c833b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FAutomationScreenshotTaker::_scalar_deleting_destructor_
          (FAutomationScreenshotTaker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestFramework *pFVar2;
  UGameViewportClient *this_00;
  FSceneViewport *this_01;
  
  this->_padding_ = (longlong)&___7FAutomationScreenshotTaker__6B_;
  pFVar2 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->OnScreenshotCompared,
             this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FScreenshotRequest::ScreenshotProcessedDelegate,this);
  this_00 = AutomationCommon::GetAnyGameViewportClient();
  if (this_00 != (UGameViewportClient *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UGameViewportClient::ScreenshotCapturedDelegate,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelRemovedFromWorld,this);
  if ((this->bNeedsViewportSizeRestore != false) && (this_00 != (UGameViewportClient *)0x0)) {
    this_01 = UGameViewportClient::GetGameViewport(this_00);
    FSceneViewport::SetViewportSize
              (this_01,(this->ViewportRestoreSize).field0_0x0._s_0.X,
               (this->ViewportRestoreSize).field0_0x0._s_0.Y);
  }
  FAutomationTestScreenshotEnvSetup::Restore(&this->EnvSetup);
  pFVar2 = FAutomationTestFramework::Get();
  FAutomationTestFramework::NotifyScreenshotTakenAndCompared(pFVar2);
  FAutomationTestScreenshotEnvSetup::~FAutomationTestScreenshotEnvSetup(&this->EnvSetup);
  pFVar1 = (this->Notes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScreenShotName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Context).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c834d0

void * __thiscall
FAutomationViewExtension::_scalar_deleting_destructor_(FAutomationViewExtension *this,uint param_1)

{
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83510

void * __thiscall
FDelayForFramesLatentAction::_scalar_deleting_destructor_
          (FDelayForFramesLatentAction *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FFTestRenderingSceneProxy::_scalar_deleting_destructor_
          (FFTestRenderingSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Locations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c835a0

void * __thiscall
FFunctionalTestBase::_scalar_deleting_destructor_(FFunctionalTestBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c835e0

void * __thiscall
FStartFTestOnMap::_scalar_deleting_destructor_(FStartFTestOnMap *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FStartFTestOnMap__6B_;
  pFVar3 = (this->TestName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83660

void * __thiscall
FStartFTestsOnMap::_scalar_deleting_destructor_(FStartFTestsOnMap *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationLatentCommand__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c836d0

void * __thiscall
FTakeScreenshotAfterTimeLatentAction::_scalar_deleting_destructor_
          (FTakeScreenshotAfterTimeLatentAction *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestFramework *pFVar2;
  
  this->_padding_ = (longlong)&___7FTakeScreenshotAfterTimeLatentAction__6B_;
  pFVar2 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pFVar2->OnScreenshotTakenAndCompared,this);
  pFVar1 = (this->Notes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScreenshotName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83750

void * __thiscall FTriggerFTest::_scalar_deleting_destructor_(FTriggerFTest *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FTriggerFTest__6B_;
  pFVar3 = (this->TestName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c837d0

void * __thiscall FTriggerFTests::_scalar_deleting_destructor_(FTriggerFTests *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationLatentCommand__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83840

void * __thiscall
FWaitForFTestsToFinish::_scalar_deleting_destructor_(FWaitForFTestsToFinish *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationLatentCommand__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c838b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FWaitForLoadingToFinish::_scalar_deleting_destructor_(FWaitForLoadingToFinish *this,uint param_1)

{
  UWorld *this_00;
  
  this->_padding_ = (longlong)&___7FWaitForLoadingToFinish__6B_;
  this_00 = GetWorld(this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::RemoveOnActorSpawnedHandler
              (this_00,(FDelegateHandle)(this->ActorSpawnedDelegateHandle).ID);
  }
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83910

void * __thiscall
FWaitForScreenshotComparisonLatentAction::_scalar_deleting_destructor_
          (FWaitForScreenshotComparisonLatentAction *this,uint param_1)

{
  FAutomationTestFramework *pFVar1;
  
  this->_padding_ = (longlong)&___7FWaitForScreenshotComparisonLatentAction__6B_;
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pFVar1->OnScreenshotTakenAndCompared,this);
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83970

void * __thiscall
UAutomationBlueprintFunctionLibrary::_scalar_deleting_destructor_
          (UAutomationBlueprintFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAutomationBlueprintFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c839d0

void * __thiscall
UAutomationEditorTask::_scalar_deleting_destructor_(UAutomationEditorTask *this,uint param_1)

{
  FAutomationTaskStatusBase *pFVar1;
  
  pFVar1 = (this->Task).Ptr;
  if (pFVar1 != (FAutomationTaskStatusBase *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83a40

void * __thiscall
UAutomationPerformaceHelper::_scalar_deleting_destructor_
          (UAutomationPerformaceHelper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationPerformaceHelper__6B_;
  pFVar1 = (this->StartOfTestingTime).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputFileBase).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPerfStatsRecord,int>
            ((FPerfStatsRecord *)(this->Records).AllocatorInstance.Data,(this->Records).ArrayNum);
  pFVar1 = (this->Records).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83ae0

void * __thiscall
UAutomationViewSettings::_scalar_deleting_destructor_(UAutomationViewSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAutomationViewSettings__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UFuncTestRenderingComponent::_scalar_deleting_destructor_
          (UFuncTestRenderingComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x550);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83be0

void * __thiscall
UFunctionalTestUtilityLibrary::_scalar_deleting_destructor_
          (UFunctionalTestUtilityLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UFunctionalTestUtilityLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83c40

void * __thiscall
UFunctionalTestingManager::_scalar_deleting_destructor_
          (UFunctionalTestingManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UFunctionalTestingManager__6B_;
  DestructItems<FString,int>
            ((FString *)(this->TestReproStrings).AllocatorInstance.Data,
             (this->TestReproStrings).ArrayNum);
  pFVar1 = (this->TestReproStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StartingReproString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TestFinishedObserver);
  pvVar2 = *(void **)&(this->TestFinishedObserver).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TestFinishedObserver);
  pvVar2 = *(void **)&(this->OnTestsBegin).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestsBegin);
  pvVar2 = *(void **)&(this->OnTestsComplete).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestsComplete);
  pvVar2 = *(void **)&(this->OnSetupTests).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSetupTests);
  pFVar1 = (this->AllTests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestsLeft).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83d80

void * __thiscall
UGroundTruthData::_scalar_deleting_destructor_(UGroundTruthData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGroundTruthData__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UTestPhaseComponent::_scalar_deleting_destructor_(UTestPhaseComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c83e60

void * __thiscall
UTraceQueryTestResults::_scalar_deleting_destructor_(UTraceQueryTestResults *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTraceQueryTestResults__6B_;
  FTraceQueryTestResultsInner::~FTraceQueryTestResultsInner(&this->ProfileResults);
  FTraceQueryTestResultsInner::~FTraceQueryTestResultsInner(&this->ObjectResults);
  FTraceQueryTestResultsInner::~FTraceQueryTestResultsInner(&this->ChannelResults);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf90);
  }
  return this;
}

// CaptureNameHelper @ 148c8a780

void __cdecl CaptureNameHelper(FTraceQueryTestNames *param_1,FHitResult *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  FName FVar5;
  undefined8 local_res8 [2];
  
  pUVar3 = FWeakObjectPtr::Get(&(param_2->Component).WeakPtr);
  pUVar4 = FWeakObjectPtr::Get(&(param_2->PhysMaterial).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    FVar5.ComparisonIndex.Value = 0;
    FVar5.Number = 0;
  }
  else {
    FVar5.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
    FVar5.Number = *(uint *)&pUVar3->field_0x1c;
  }
  param_1->ComponentName = FVar5;
  bVar2 = FActorInstanceHandle::IsValid(&param_2->HitObjectHandle);
  if (bVar2) {
    FVar5 = FActorInstanceHandle::GetFName(&param_2->HitObjectHandle);
  }
  else {
    local_res8[0] = 0;
    FVar5 = (FName)local_res8;
  }
  param_1->ActorName = *(FName *)FVar5;
  if (pUVar4 != (UObject *)0x0) {
    uVar1 = *(undefined4 *)&pUVar4->field_0x1c;
    (param_1->PhysicalMaterialName).ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&pUVar4->field_0x18;
    (param_1->PhysicalMaterialName).Number = uVar1;
    return;
  }
  (param_1->PhysicalMaterialName).ComparisonIndex = 0;
  (param_1->PhysicalMaterialName).Number = 0;
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationBlueprintFunctionLibrary @ 148c8d2e0

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationBlueprintFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationScreenshotOptions @ 148c8d2f0

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationScreenshotOptions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationViewSettings @ 148c8d300

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationViewSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFuncTestRenderingComponent @ 148c8d310

void __cdecl EmptyLinkFunctionForGeneratedCodeFuncTestRenderingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFunctionalAITest @ 148c8d320

void __cdecl EmptyLinkFunctionForGeneratedCodeFunctionalAITest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFunctionalTest @ 148c8d330

void __cdecl EmptyLinkFunctionForGeneratedCodeFunctionalTest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFunctionalTestGameMode @ 148c8d340

void __cdecl EmptyLinkFunctionForGeneratedCodeFunctionalTestGameMode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFunctionalTestLevelScript @ 148c8d350

void __cdecl EmptyLinkFunctionForGeneratedCodeFunctionalTestLevelScript(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFunctionalTestUtilityLibrary @ 148c8d360

void __cdecl EmptyLinkFunctionForGeneratedCodeFunctionalTestUtilityLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFunctionalTestingManager @ 148c8d370

void __cdecl EmptyLinkFunctionForGeneratedCodeFunctionalTestingManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFunctionalTesting_init @ 148c8d380

void __cdecl EmptyLinkFunctionForGeneratedCodeFunctionalTesting_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFunctionalUIScreenshotTest @ 148c8d390

void __cdecl EmptyLinkFunctionForGeneratedCodeFunctionalUIScreenshotTest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGroundTruthData @ 148c8d3a0

void __cdecl EmptyLinkFunctionForGeneratedCodeGroundTruthData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeScreenshotFunctionalTest @ 148c8d3b0

void __cdecl EmptyLinkFunctionForGeneratedCodeScreenshotFunctionalTest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeScreenshotFunctionalTestBase @ 148c8d3c0

void __cdecl EmptyLinkFunctionForGeneratedCodeScreenshotFunctionalTestBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTestPhaseComponent @ 148c8d3d0

void __cdecl EmptyLinkFunctionForGeneratedCodeTestPhaseComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTraceQueryTestResults @ 148c8d3e0

void __cdecl EmptyLinkFunctionForGeneratedCodeTraceQueryTestResults(void)

{
  return;
}

// FFunctionalTestAISpawned_DelegateWrapper @ 148c8e890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FFunctionalTestAISpawned_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AAIController *param_2,
          APawn *param_3)

{
  AAIController *local_18;
  APawn *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FFunctionalTestEventSignature_DelegateWrapper @ 148c8e8c0

void __cdecl
FFunctionalTestEventSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FuncTestExec @ 148c8f230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FuncTestExec(UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  char cVar2;
  IFunctionalTestingModule *pIVar3;
  wchar_t *local_res10 [3];
  
  local_res10[0] = param_2;
  bVar1 = FParse::Command(local_res10,L"ftest",true);
  if (!bVar1) {
    return false;
  }
  bVar1 = FParse::Command(local_res10,L"start",true);
  if (bVar1) {
    bVar1 = FParse::Command(local_res10,L"loop",true);
    pIVar3 = IFunctionalTestingModule::Get();
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x60))(pIVar3);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3);
      if (cVar2 == '\0') {
        (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,1,bVar1);
      }
    }
  }
  return true;
}

// GetBackbufferInfo @ 148c8fff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl GetBackbufferInfo(FViewport *param_1,EPixelFormat *param_2,bool *param_3)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((param_1->ViewportRHI).Reference != (FRHIViewport *)0x0) {
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x20,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`GetBackbufferInfo'::`2'::<lambda_1>,1,1>::_vftable_;
    local_60[1] = (code *)param_1;
    local_60[2] = (code *)param_2;
    local_60[3] = (code *)param_3;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`GetBackbufferInfo'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_GetBackbufferInfo_::__l2::TSTR_GetBackbufferFormatCmd45>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_00 = FRenderCommandList::GetRenderThread(this);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`GetBackbufferInfo'::__l2::TSTR_GetBackbufferFormatCmd45>::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
    FlushRenderingCommands();
  }
  return;
}

// GetComparisonAsString @ 148c90440

FString * __cdecl
`anonymous_namespace'::GetComparisonAsString
          (FString *__return_storage_ptr__,EComparisonMethod param_1)

{
  UPackage *pUVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  if (Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod,(UObject *)pUVar1,
                       L"EComparisonMethod");
  }
  pFVar2 = UEnum::GetNameStringByValue
                     (Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton,&local_18,
                      (ulonglong)param_1);
  pFVar2 = ::FString::ToLower(pFVar2,&local_28);
  ::FString::Replace(pFVar2,__return_storage_ptr__,L"_",L" ",CaseSensitive);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HelperAssertFHitResultEqual @ 148c93310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
HelperAssertFHitResultEqual
          (FHitResult *param_1,FHitResult *param_2,FString *param_3,UObject *param_4,
          AFunctionalTest *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  FString local_b8;
  char local_a8 [14];
  char local_9a [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  pcVar1 = *(code **)(param_5->_padding_ + 0x7a0);
  FString::PrintfImpl(&local_b8,L"%s:bBlockingHit");
  local_a8[0] = (*pcVar1)(param_5,param_1->bBlockingHit,param_2->bBlockingHit,&local_b8,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7a0);
  FString::PrintfImpl(&local_b8,L"%s:bStartPenetrating");
  local_a8[1] = (*pcVar1)(param_5,param_1->bStartPenetrating,param_2->bStartPenetrating,&local_b8,
                          param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x798);
  FString::PrintfImpl(&local_b8,L"%s:Time");
  uVar2 = __real_38d1b717;
  local_a8[2] = (*pcVar1)(param_5,param_1->Time,param_2->Time,&local_b8,__real_38d1b717,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x798);
  FString::PrintfImpl(&local_b8,L"%s:Distance");
  local_a8[3] = (*pcVar1)(param_5,param_1->Distance,param_2->Distance,&local_b8,uVar2,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7e0);
  FString::PrintfImpl(&local_b8,L"%s:Location");
  local_98 = *(undefined8 *)&param_2->Location;
  uStack_90 = *(undefined8 *)&(param_2->Location).field_0x8;
  local_88 = *(undefined8 *)&(param_2->Location).field_0x10;
  local_78 = *(undefined8 *)&param_1->Location;
  uStack_70 = *(undefined8 *)&(param_1->Location).field_0x8;
  local_68 = *(undefined8 *)&(param_1->Location).field_0x10;
  local_a8[4] = (*pcVar1)(param_5,&local_78,&local_98,&local_b8,uVar2,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7e0);
  FString::PrintfImpl(&local_b8,L"%s:ImpactPoint");
  local_78 = *(undefined8 *)&param_2->ImpactPoint;
  uStack_70 = *(undefined8 *)&(param_2->ImpactPoint).field_0x8;
  local_68 = *(undefined8 *)&(param_2->ImpactPoint).field_0x10;
  local_98 = *(undefined8 *)&param_1->ImpactPoint;
  uStack_90 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
  local_88 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
  local_a8[5] = (*pcVar1)(param_5,&local_98,&local_78,&local_b8,uVar2,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7e0);
  FString::PrintfImpl(&local_b8,L"%s:Normal");
  local_78 = *(undefined8 *)&param_2->Normal;
  uStack_70 = *(undefined8 *)&(param_2->Normal).field_0x8;
  local_68 = *(undefined8 *)&(param_2->Normal).field_0x10;
  local_98 = *(undefined8 *)&param_1->Normal;
  uStack_90 = *(undefined8 *)&(param_1->Normal).field_0x8;
  local_88 = *(undefined8 *)&(param_1->Normal).field_0x10;
  local_a8[6] = (*pcVar1)(param_5,&local_98,&local_78,&local_b8,uVar2,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7e0);
  FString::PrintfImpl(&local_b8,L"%s:ImpactNormal");
  local_78 = *(undefined8 *)&param_2->ImpactNormal;
  uStack_70 = *(undefined8 *)&(param_2->ImpactNormal).field_0x8;
  local_68 = *(undefined8 *)&(param_2->ImpactNormal).field_0x10;
  local_98 = *(undefined8 *)&param_1->ImpactNormal;
  uStack_90 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
  local_88 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
  local_a8[7] = (*pcVar1)(param_5,&local_98,&local_78,&local_b8,uVar2,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7e0);
  FString::PrintfImpl(&local_b8,L"%s:TraceStart");
  local_78 = *(undefined8 *)&param_2->TraceStart;
  uStack_70 = *(undefined8 *)&(param_2->TraceStart).field_0x8;
  local_68 = *(undefined8 *)&(param_2->TraceStart).field_0x10;
  local_98 = *(undefined8 *)&param_1->TraceStart;
  uStack_90 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
  local_88 = *(undefined8 *)&(param_1->TraceStart).field_0x10;
  local_a8[8] = (*pcVar1)(param_5,&local_98,&local_78,&local_b8,uVar2,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7e0);
  FString::PrintfImpl(&local_b8,L"%s:TraceEnd");
  local_78 = *(undefined8 *)&param_2->TraceEnd;
  uStack_70 = *(undefined8 *)&(param_2->TraceEnd).field_0x8;
  local_68 = *(undefined8 *)&(param_2->TraceEnd).field_0x10;
  local_98 = *(undefined8 *)&param_1->TraceEnd;
  uStack_90 = *(undefined8 *)&(param_1->TraceEnd).field_0x8;
  local_88 = *(undefined8 *)&(param_1->TraceEnd).field_0x10;
  local_a8[9] = (*pcVar1)(param_5,&local_98,&local_78,&local_b8,uVar2,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x798);
  FString::PrintfImpl(&local_b8,L"%s:PenetrationDepth");
  local_a8[10] = (*pcVar1)(param_5,param_1->PenetrationDepth,param_2->PenetrationDepth,&local_b8,
                           uVar2,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7a8);
  FString::PrintfImpl(&local_b8,L"%s:Item");
  local_a8[0xb] = (*pcVar1)(param_5,param_1->Item,param_2->Item,&local_b8,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7b0);
  FString::PrintfImpl(&local_b8,L"%s:BoneName");
  local_a8[0xc] = (*pcVar1)(param_5,param_1->BoneName,param_2->BoneName,&local_b8,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7a8);
  FString::PrintfImpl(&local_b8,L"%s:FaceIndex");
  local_a8[0xd] = (*pcVar1)(param_5,param_1->FaceIndex,param_2->FaceIndex,&local_b8,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar3 = local_a8;
  do {
    if (*pcVar3 == '\0') {
      return false;
    }
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != local_9a);
  return true;
}

// HelperAssertNamesEqual @ 148c93970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
HelperAssertNamesEqual
          (FTraceQueryTestNames *param_1,FTraceQueryTestNames *param_2,FString *param_3,
          UObject *param_4,AFunctionalTest *param_5)

{
  code *pcVar1;
  char *pcVar2;
  char local_38 [3];
  char local_35 [5];
  FString local_30;
  
  pcVar1 = *(code **)(param_5->_padding_ + 0x7b0);
  FString::PrintfImpl(&local_30,L"%s:ComponentName");
  local_38[0] = (*pcVar1)(param_5,param_1->ComponentName,param_2->ComponentName,&local_30,param_4);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7b0);
  FString::PrintfImpl(&local_30,L"%s:ActorName");
  local_38[1] = (*pcVar1)(param_5,param_1->ActorName,param_2->ActorName,&local_30,param_4);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(param_5->_padding_ + 0x7b0);
  FString::PrintfImpl(&local_30,L"%s:PhysicalMaterialName");
  local_38[2] = (*pcVar1)(param_5,param_1->PhysicalMaterialName,param_2->PhysicalMaterialName,
                          &local_30,param_4);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pcVar2 = local_38;
  do {
    if (*pcVar2 == '\0') {
      return false;
    }
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 != local_35);
  return true;
}

// LexToString @ 148c944b0

FString * __cdecl LexToString(FString *__return_storage_ptr__,EFunctionalTestResult param_1)

{
  switch(param_1) {
  case Default:
    FString::FString(__return_storage_ptr__,"Default");
    return __return_storage_ptr__;
  case Invalid:
    FString::FString(__return_storage_ptr__,"Invalid");
    return __return_storage_ptr__;
  case Error:
    FString::FString(__return_storage_ptr__,"Error");
    return __return_storage_ptr__;
  case Running:
    FString::FString(__return_storage_ptr__,"Running");
    return __return_storage_ptr__;
  case Failed:
    FString::FString(__return_storage_ptr__,"Failed");
    return __return_storage_ptr__;
  case Succeeded:
    FString::FString(__return_storage_ptr__,"Succeeded");
    return __return_storage_ptr__;
  default:
    FString::FString(__return_storage_ptr__,"Unhandled EFunctionalTestResult Enum!");
    return __return_storage_ptr__;
  }
}

// MapPackageToAutomationPath @ 148c94ee0

FString * __cdecl MapPackageToAutomationPath(FString *__return_storage_ptr__,FAssetData *param_1)

{
  bool bVar1;
  FString *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FAssetTagValueRef_u_0 local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&TestPathOverrideName,"TestPathOverride");
      _Init_thread_footer(&_TSS0);
    }
  }
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar3 = 0;
  FAssetDataTagMapSharedView::FindTag(&param_1->TagsAndValues,(FName)&local_res10);
  if (local_res10.Loose == (FString *)0x0) {
    pFVar2 = FName::ToString(&param_1->PackageName,&local_48);
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    bVar1 = FString::StartsWith(pFVar2,L"/Game/",6,IgnoreCase);
    iVar3 = 6;
    if (!bVar1) {
      iVar3 = 1;
    }
    pFVar2 = FString::RightChop(pFVar2,&local_58,iVar3);
    if (&local_68 != pFVar2) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_68.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FString::Replace(&local_68,__return_storage_ptr__,L"/",L".",IgnoreCase);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar2 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_res10.Fixed,&local_58);
    iVar5 = iVar3;
    if (&local_38 != pFVar2) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar2->Data).ArrayNum;
      iVar5 = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = pFVar4;
    (__return_storage_ptr__->Data).ArrayNum = iVar3;
    (__return_storage_ptr__->Data).ArrayMax = iVar5;
  }
  return __return_storage_ptr__;
}

// MapPackageToAutomationPath @ 148c950c0

FString * __cdecl MapPackageToAutomationPath(FString *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  int iVar3;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar1 = FString::StartsWith(param_1,L"/Game/",6,IgnoreCase);
  iVar3 = 6;
  if (!bVar1) {
    iVar3 = 1;
  }
  pFVar2 = FString::RightChop(param_1,&local_18,iVar3);
  if (&local_28 != pFVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FString::Replace(&local_28,__return_storage_ptr__,L"/",L".",IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReadBackbuffer @ 148c97920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ReadBackbuffer(FViewport *param_1,TArray<FColor,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FViewport *pFStack_70;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FViewport *pFStack_40;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FlushRenderingCommands();
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ReadBackbuffer'::`2'::<lambda_1>,1,0>::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ReadBackbuffer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = param_1;
  local_68 = param_2;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_ReadBackbuffer_::__l2::TSTR_CopyBackbufferCmd179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`ReadBackbuffer'::__l2::TSTR_CopyBackbufferCmd179>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  FlushRenderingCommands();
  return;
}

// ReadPixelsFromRT @ 148c97a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ReadPixelsFromRT(UTextureRenderTarget2D *param_1,TArray<FColor,TSizedDefaultAllocator<32>_> *param_2
                )

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  UTextureRenderTarget2D *pUStack_70;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UTextureRenderTarget2D *pUStack_40;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ReadPixelsFromRT'::`2'::<lambda_1>,1,0>::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ReadPixelsFromRT'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pUStack_70 = param_1;
  local_68 = param_2;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_ReadPixelsFromRT_::__l2::TSTR_ReadScreenshotRTCmd195>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pUStack_40 = pUStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`ReadPixelsFromRT'::__l2::TSTR_ReadScreenshotRTCmd195>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  FlushRenderingCommands();
  return;
}

// TransformToString @ 148ca0920

FString * __cdecl
`anonymous_namespace'::TransformToString
          (FString *__return_storage_ptr__,TTransform<double> *param_1)

{
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_28.X = (param_1->Rotation).XY.m128d_f64[0];
  local_28.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_28.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_28.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"Translation: %f, %f, %f | Rotation: %f, %f, %f | Scale: %f, %f, %f");
  return __return_storage_ptr__;
}

// Z_Construct_UClass_AFunctionalAITestBase_NoRegister @ 148ca1d30

UClass * __cdecl Z_Construct_UClass_AFunctionalAITestBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalAITestBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalAITestBase",
               &Z_Registration_Info_UClass_AFunctionalAITestBase.InnerSingleton,
               AFunctionalAITestBase::StaticRegisterNativesAFunctionalAITestBase,0x4e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AFunctionalAITestBase>,
               InternalVTableHelperCtorCaller<AFunctionalAITestBase>,local_res8,
               AFunctionalTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalAITestBase.InnerSingleton;
}

// Z_Construct_UClass_AFunctionalAITest_NoRegister @ 148ca1df0

UClass * __cdecl Z_Construct_UClass_AFunctionalAITest_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalAITest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalAITest",
               &Z_Registration_Info_UClass_AFunctionalAITest.InnerSingleton,
               AFunctionalAITest::StaticRegisterNativesAFunctionalAITest,0x4f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AFunctionalAITest>,
               InternalVTableHelperCtorCaller<AFunctionalAITest>,local_res8,
               AFunctionalAITestBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalAITest.InnerSingleton;
}

// Z_Construct_UClass_AFunctionalTestGameMode_NoRegister @ 148ca1eb0

UClass * __cdecl Z_Construct_UClass_AFunctionalTestGameMode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalTestGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestGameMode",
               &Z_Registration_Info_UClass_AFunctionalTestGameMode.InnerSingleton,
               AFunctionalTestGameMode::StaticRegisterNativesAFunctionalTestGameMode,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AFunctionalTestGameMode>,
               InternalVTableHelperCtorCaller<AFunctionalTestGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalTestGameMode.InnerSingleton;
}

// Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister @ 148ca1f70

UClass * __cdecl Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalTestLevelScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestLevelScript",
               &Z_Registration_Info_UClass_AFunctionalTestLevelScript.InnerSingleton,
               AFunctionalTestLevelScript::StaticRegisterNativesAFunctionalTestLevelScript,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AFunctionalTestLevelScript>,
               InternalVTableHelperCtorCaller<AFunctionalTestLevelScript>,local_res8,
               ALevelScriptActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalTestLevelScript.InnerSingleton;
}

// Z_Construct_UClass_AFunctionalUIScreenshotTest_NoRegister @ 148ca2030

UClass * __cdecl Z_Construct_UClass_AFunctionalUIScreenshotTest_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalUIScreenshotTest",
               &Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.InnerSingleton,
               AFunctionalUIScreenshotTest::StaticRegisterNativesAFunctionalUIScreenshotTest,0x508,8
               ,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AFunctionalUIScreenshotTest>,
               InternalVTableHelperCtorCaller<AFunctionalUIScreenshotTest>,local_res8,
               AScreenshotFunctionalTestBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.InnerSingleton;
}

// Z_Construct_UClass_APhasedAutomationActorBase_NoRegister @ 148ca20f0

UClass * __cdecl Z_Construct_UClass_APhasedAutomationActorBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhasedAutomationActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"PhasedAutomationActorBase",
               &Z_Registration_Info_UClass_APhasedAutomationActorBase.InnerSingleton,
               APhasedAutomationActorBase::StaticRegisterNativesAPhasedAutomationActorBase,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<APhasedAutomationActorBase>,
               InternalVTableHelperCtorCaller<APhasedAutomationActorBase>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhasedAutomationActorBase.InnerSingleton;
}

// Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister @ 148ca21b0

UClass * __cdecl Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"ScreenshotFunctionalTestBase",
               &Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.InnerSingleton,
               AScreenshotFunctionalTestBase::StaticRegisterNativesAScreenshotFunctionalTestBase,
               0x4c8,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AScreenshotFunctionalTestBase>,
               InternalVTableHelperCtorCaller<AScreenshotFunctionalTestBase>,local_res8,
               AFunctionalTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.InnerSingleton;
}

// Z_Construct_UClass_AScreenshotFunctionalTest_NoRegister @ 148ca2270

UClass * __cdecl Z_Construct_UClass_AScreenshotFunctionalTest_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AScreenshotFunctionalTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"ScreenshotFunctionalTest",
               &Z_Registration_Info_UClass_AScreenshotFunctionalTest.InnerSingleton,
               AScreenshotFunctionalTest::StaticRegisterNativesAScreenshotFunctionalTest,0x510,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AScreenshotFunctionalTest>,
               InternalVTableHelperCtorCaller<AScreenshotFunctionalTest>,local_res8,
               AScreenshotFunctionalTestBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AScreenshotFunctionalTest.InnerSingleton;
}

// Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister @ 148ca2330

UClass * __cdecl Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.InnerSingleton,
               UAutomationBlueprintFunctionLibrary::
               StaticRegisterNativesUAutomationBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UAutomationBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UAutomationPerformaceHelper_NoRegister @ 148ca23f0

UClass * __cdecl Z_Construct_UClass_UAutomationPerformaceHelper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationPerformaceHelper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationPerformaceHelper",
               &Z_Registration_Info_UClass_UAutomationPerformaceHelper.InnerSingleton,
               UAutomationPerformaceHelper::StaticRegisterNativesUAutomationPerformaceHelper,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationPerformaceHelper>,
               InternalVTableHelperCtorCaller<UAutomationPerformaceHelper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationPerformaceHelper.InnerSingleton;
}

// Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister @ 148ca24a0

UClass * __cdecl Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFuncTestRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FuncTestRenderingComponent",
               &Z_Registration_Info_UClass_UFuncTestRenderingComponent.InnerSingleton,
               UFuncTestRenderingComponent::StaticRegisterNativesUFuncTestRenderingComponent,0x550,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFuncTestRenderingComponent>,
               InternalVTableHelperCtorCaller<UFuncTestRenderingComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFuncTestRenderingComponent.InnerSingleton;
}

// Z_Construct_UClass_UFunctionalTestUtilityLibrary_NoRegister @ 148ca2560

UClass * __cdecl Z_Construct_UClass_UFunctionalTestUtilityLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestUtilityLibrary",
               &Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.InnerSingleton,
               UFunctionalTestUtilityLibrary::StaticRegisterNativesUFunctionalTestUtilityLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFunctionalTestUtilityLibrary>,
               InternalVTableHelperCtorCaller<UFunctionalTestUtilityLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.InnerSingleton;
}

// Z_Construct_UClass_UFunctionalTestingManager_NoRegister @ 148ca2620

UClass * __cdecl Z_Construct_UClass_UFunctionalTestingManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFunctionalTestingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestingManager",
               &Z_Registration_Info_UClass_UFunctionalTestingManager.InnerSingleton,
               UFunctionalTestingManager::StaticRegisterNativesUFunctionalTestingManager,0xe0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFunctionalTestingManager>,
               InternalVTableHelperCtorCaller<UFunctionalTestingManager>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFunctionalTestingManager.InnerSingleton;
}

// Z_Construct_UClass_UGroundTruthData_NoRegister @ 148ca26e0

UClass * __cdecl Z_Construct_UClass_UGroundTruthData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroundTruthData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"GroundTruthData",
               &Z_Registration_Info_UClass_UGroundTruthData.InnerSingleton,
               UGroundTruthData::StaticRegisterNativesUGroundTruthData,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGroundTruthData>,
               InternalVTableHelperCtorCaller<UGroundTruthData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroundTruthData.InnerSingleton;
}

// Z_Construct_UClass_UTestPhaseComponent_NoRegister @ 148ca2790

UClass * __cdecl Z_Construct_UClass_UTestPhaseComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestPhaseComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"TestPhaseComponent",
               &Z_Registration_Info_UClass_UTestPhaseComponent.InnerSingleton,
               UTestPhaseComponent::StaticRegisterNativesUTestPhaseComponent,0x250,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestPhaseComponent>,
               InternalVTableHelperCtorCaller<UTestPhaseComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestPhaseComponent.InnerSingleton;
}

// IMPLEMENT_MODULE_FunctionalTesting @ 148cac320

void __cdecl IMPLEMENT_MODULE_FunctionalTesting(void)

{
  return;
}

// ActiveTestName'' @ 15040b4b0

void __cdecl `dynamic_atexit_destructor_for_'FFunctionalTestBase::ActiveTestName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FFunctionalTestBase::ActiveTestName.Data.AllocatorInstance.Data;
  if (FFunctionalTestBase::ActiveTestName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FFunctionalTestBase::ActiveTestName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Approved'' @ 15040b4d0

void __cdecl ComparisonFileTypes::_dynamic_atexit_destructor_for__Approved__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Approved.Data.AllocatorInstance.Data;
  if (Approved.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Approved.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AutomationFunctionLibrary'' @ 15040b4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__AutomationFunctionLibrary__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&AutomationFunctionLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'BlueprintAssertion'' @ 15040b510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__BlueprintAssertion__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&BlueprintAssertion);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutomationScreenshotResolutionHeight'' @ 15040b530

void __cdecl _dynamic_atexit_destructor_for__CVarAutomationScreenshotResolutionHeight__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAutomationScreenshotResolutionHeight);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutomationScreenshotResolutionWidth'' @ 15040b550

void __cdecl _dynamic_atexit_destructor_for__CVarAutomationScreenshotResolutionWidth__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAutomationScreenshotResolutionWidth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEmulateSplitscreenMode'' @ 15040b570

void __cdecl _dynamic_atexit_destructor_for__CVarEmulateSplitscreenMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEmulateSplitscreenMode);
  return;
}

// `dynamic_atexit_destructor_for_'Difference'' @ 15040b590

void __cdecl ComparisonFileTypes::_dynamic_atexit_destructor_for__Difference__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Difference.Data.AllocatorInstance.Data;
  if (Difference.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Difference.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FClientFunctionalTestingMapsEditorAutomationTestInstance'' @ 15040b5b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FClientFunctionalTestingMapsEditorAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FClientFunctionalTestingMapsEditorAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FClientFunctionalTestingMapsRuntimeAutomationTestInstance'' @ 15040b5d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FClientFunctionalTestingMapsRuntimeAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FClientFunctionalTestingMapsRuntimeAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FuncTestExecRegistration'' @ 15040b5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__FuncTestExecRegistration__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&FuncTestExecRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpGPUDumpOnScreenshotTest'' @ 15040b610

void __cdecl _dynamic_atexit_destructor_for__GDumpGPUDumpOnScreenshotTest__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpGPUDumpOnScreenshotTest);
  return;
}

// `dynamic_atexit_destructor_for_'GroundTruthLog'' @ 15040b630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GroundTruthLog__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&GroundTruthLog);
  return;
}

// `dynamic_atexit_destructor_for_'LogFunctionalTest'' @ 15040b650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogFunctionalTest__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogFunctionalTest);
  return;
}

// `dynamic_atexit_destructor_for_'LogFunctionalTesting'' @ 15040b670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogFunctionalTesting__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogFunctionalTesting);
  return;
}

// `dynamic_atexit_destructor_for_'LogScreenshotFunctionalTest'' @ 15040b690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogScreenshotFunctionalTest__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogScreenshotFunctionalTest);
  return;
}

// `dynamic_atexit_destructor_for_'Unapproved'' @ 15040b6b0

void __cdecl ComparisonFileTypes::_dynamic_atexit_destructor_for__Unapproved__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Unapproved.Data.AllocatorInstance.Data;
  if (Unapproved.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Unapproved.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'VariantInfoArray'' @ 15040b6d0

void __cdecl
`AScreenshotFunctionalTest::SetupVariant'::__l2::_dynamic_atexit_destructor_for__VariantInfoArray__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = VariantInfoArray.AllocatorInstance.Data;
  if (VariantInfoArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (VariantInfoArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

