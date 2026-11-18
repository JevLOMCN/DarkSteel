// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 783

// AIMessage_MoveFinished'' @ 1410ba760

void __cdecl `dynamic_initializer_for_'UBrainComponent::AIMessage_MoveFinished__(void)

{
  ::FName::FName(&UBrainComponent::AIMessage_MoveFinished,L"MoveFinished");
  return;
}

// AIMessage_QueryFinished'' @ 1410ba780

void __cdecl `dynamic_initializer_for_'UBrainComponent::AIMessage_QueryFinished__(void)

{
  ::FName::FName(&UBrainComponent::AIMessage_QueryFinished,L"QueryFinished");
  return;
}

// AIMessage_RepathFailed'' @ 1410ba7a0

void __cdecl `dynamic_initializer_for_'UBrainComponent::AIMessage_RepathFailed__(void)

{
  ::FName::FName(&UBrainComponent::AIMessage_RepathFailed,L"RepathFailed");
  return;
}

// DebuggerStats'' @ 1410ba7c0

void __cdecl `dynamic_initializer_for_'UEnvQueryManager::DebuggerStats__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UEnvQueryManager::DebuggerStats__);
  return;
}

// RegisteredItemTypes'' @ 1410ba7e0

void __cdecl `dynamic_initializer_for_'UEnvQueryManager::RegisteredItemTypes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UEnvQueryManager::RegisteredItemTypes__);
  return;
}

// `dynamic_initializer_for_'CVars'' @ 1410ba800

void __cdecl UE::GameplayDebuggerCategory_EQS::Tweakables::_dynamic_initializer_for__CVars__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (CVars,L"ai.debug.EQS.RefreshInterval",&RefreshInterval,
             L"Interval (in seconds) at which data will be collected.",0);
  atexit(_dynamic_atexit_destructor_for__CVars__);
  return;
}

// `dynamic_initializer_for_'CVars_GameplayDebuggerCategory_AI'' @ 1410ba850

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVars_GameplayDebuggerCategory_AI__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (CVars_GameplayDebuggerCategory_AI,L"ai.debug.DrawOverheadIcons",
             &FGameplayDebuggerCategoryTweakables::bDrawOverheadIcons,
             L"Should default AI overhead icons be drawn",0);
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (CVars_GameplayDebuggerCategory_AI + 1,L"ai.debug.DrawPaths",
             &FGameplayDebuggerCategoryTweakables::bDrawPaths,L"Should AI paths be drawn",0);
  atexit(_dynamic_atexit_destructor_for__CVars_GameplayDebuggerCategory_AI__);
  return;
}

// `dynamic_initializer_for_'ColorNameDisabled'' @ 1410ba8c0

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameDisabled__(void)

{
  ::FString::FString(&ColorNameDisabled,L"grey");
  atexit(_dynamic_atexit_destructor_for__ColorNameDisabled__);
  return;
}

// `dynamic_initializer_for_'ColorNameDisabledActiveRow'' @ 1410ba8f0

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameDisabledActiveRow__(void)

{
  ::FString::FString(&ColorNameDisabledActiveRow,L"black");
  atexit(_dynamic_atexit_destructor_for__ColorNameDisabledActiveRow__);
  return;
}

// `dynamic_initializer_for_'ColorNameEnabled'' @ 1410ba920

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameEnabled__(void)

{
  ::FString::FString(&ColorNameEnabled,L"green");
  atexit(_dynamic_atexit_destructor_for__ColorNameEnabled__);
  return;
}

// `dynamic_initializer_for_'ColorNameEnabledActiveRow'' @ 1410ba950

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameEnabledActiveRow__(void)

{
  ::FString::FString(&ColorNameEnabledActiveRow,L"green");
  atexit(_dynamic_atexit_destructor_for__ColorNameEnabledActiveRow__);
  return;
}

// `dynamic_initializer_for_'ColorNameInput'' @ 1410ba980

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameInput__(void)

{
  ::FString::FString(&ColorNameInput,L"white");
  atexit(_dynamic_atexit_destructor_for__ColorNameInput__);
  return;
}

// `dynamic_initializer_for_'DebugTimeSliceDefaultSectionName'' @ 1410ba9b0

void __cdecl FNavigationSystem::_dynamic_initializer_for__DebugTimeSliceDefaultSectionName__(void)

{
  ::FName::FName(&DebugTimeSliceDefaultSectionName,L"DefaultSection");
  return;
}

// `dynamic_initializer_for_'KeySelf'' @ 1410ba9d0

void __cdecl FBlackboard::_dynamic_initializer_for__KeySelf__(void)

{
  ::FName::FName(&KeySelf,L"SelfActor");
  return;
}

// `dynamic_initializer_for_'LogAIBlueprint'' @ 1410ba9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAIBlueprint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAIBlueprint,L"LogAIBlueprint",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAIBlueprint__);
  return;
}

// `dynamic_initializer_for_'LogBrain'' @ 1410baa30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBrain__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogBrain,L"LogBrain",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogBrain__);
  return;
}

// `dynamic_initializer_for_'LogEQS'' @ 1410baa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogEQS__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogEQS,L"LogEQS",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogEQS__);
  return;
}

// `dynamic_initializer_for_'NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet'' @ 1410baab0

void __cdecl _dynamic_initializer_for__NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet__(void)

{
  FName::FName(&NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet,L"ProvideActorsSet");
  return;
}

// `dynamic_initializer_for_'NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet'' @ 1410baad0

void __cdecl
_dynamic_initializer_for__NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet__(void)

{
  FName::FName(&NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet,L"ProvideLocationsSet");
  return;
}

// `dynamic_initializer_for_'NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor'' @ 1410baaf0

void __cdecl
_dynamic_initializer_for__NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor__(void)

{
  FName::FName(&NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor,L"ProvideSingleActor");
  return;
}

// `dynamic_initializer_for_'NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation'' @ 1410bab10

void __cdecl
_dynamic_initializer_for__NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation__(void)

{
  FName::FName(&NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation,L"ProvideSingleLocation");
  return;
}

// `dynamic_initializer_for_'NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration'' @ 1410bab30

void __cdecl
_dynamic_initializer_for__NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration__(void)

{
  FName::FName(&NAME_UEnvQueryGenerator_BlueprintBase_DoItemGeneration,L"DoItemGeneration");
  return;
}

// `dynamic_initializer_for_'NAME_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors'' @ 1410bab50

void __cdecl
_dynamic_initializer_for__NAME_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors__(void)

{
  FName::FName(&NAME_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors,
               L"DoItemGenerationFromActors");
  return;
}

// `dynamic_initializer_for_'Separator'' @ 1410bab70

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__Separator__(void)

{
  ::FString::FString(&Separator,L"{white} | ");
  atexit(_dynamic_atexit_destructor_for__Separator__);
  return;
}

// `dynamic_initializer_for_'SeparatorSpace'' @ 1410baba0

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__SeparatorSpace__(void)

{
  ::FString::FString(&SeparatorSpace,L"  ");
  atexit(_dynamic_atexit_destructor_for__SeparatorSpace__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_AvgInstanceResponseTime'' @ 1410babd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_AvgInstanceResponseTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_AvgInstanceResponseTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_AvgInstanceResponseTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_AvgInstanceResponseTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_AvgInstanceResponseTime,*pFVar1,
               L"Avg Instance Response Time (ms)","STATGROUP_AI_EQS","STATCAT_Advanced",
               L"Environment Query",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_Debug_StoreQuery'' @ 1410bac60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_Debug_StoreQuery__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_Debug_StoreQuery ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Debug_StoreQuery>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_Debug_StoreQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_Debug_StoreQuery,*pFVar1,
               L"EQS Debug StoreQuery","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_Debug_StoreStats'' @ 1410bacf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_Debug_StoreStats__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_Debug_StoreStats ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Debug_StoreStats>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_Debug_StoreStats");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_Debug_StoreStats,*pFVar1,
               L"EQS Debug StoreStats","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_Debug_StoreTickTime'' @ 1410bad80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_Debug_StoreTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_Debug_StoreTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Debug_StoreTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_Debug_StoreTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_Debug_StoreTickTime,*pFVar1,
               L"EQS Debug StoreTickTime","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_ExecuteOneStep'' @ 1410bae10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_ExecuteOneStep__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_ExecuteOneStep ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_ExecuteOneStep>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_ExecuteOneStep");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_ExecuteOneStep,*pFVar1,
               L"Execute One Step Time","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_GeneratorTime'' @ 1410baea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_GeneratorTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_GeneratorTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_GeneratorTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_GeneratorTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_GeneratorTime,*pFVar1,
               L"Generator Time","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_InstanceMemory'' @ 1410baf30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_InstanceMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_InstanceMemory ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_InstanceMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar1,
               L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_LoadTime'' @ 1410bafc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_LoadTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_LoadTime == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_LoadTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_LoadTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_LoadTime,*pFVar1,L"Load Time",
               "STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_NumInstances'' @ 1410bb050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_NumInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_NumInstances == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumInstances>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_NumInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_NumInstances,*pFVar1,
               L"Num Instances","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true,true
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_NumItems'' @ 1410bb0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_NumItems__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_NumItems == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_NumItems");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_NumItems,*pFVar1,L"Num Items",
               "STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true,true,ST_int64,false,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_TestTime'' @ 1410bb170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_TestTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_TestTime == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_TestTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_TestTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_TestTime,*pFVar1,L"Test Time",
               "STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_Tick'' @ 1410bb200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_Tick == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_Tick,*pFVar1,L"Tick",
               "STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_TickNotifies'' @ 1410bb290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_TickNotifies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_TickNotifies == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_TickNotifies>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_TickNotifies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_TickNotifies,*pFVar1,
               L"Tick - OnFinished delegates","STATGROUP_AI_EQS","STATCAT_Advanced",
               L"Environment Query",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_TickQueryRemovals'' @ 1410bb320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_TickQueryRemovals__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_TickQueryRemovals ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_TickQueryRemovals>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_TickQueryRemovals");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_TickQueryRemovals,*pFVar1,
               L"Tick - Removal of completed queries","STATGROUP_AI_EQS","STATCAT_Advanced",
               L"Environment Query",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_EQS_TickWork'' @ 1410bb3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_EQS_TickWork__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_EQS_TickWork == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_TickWork>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_EQS_TickWork");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_TickWork,*pFVar1,L"Tick - EQS work"
               ,"STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TAG_EQS'' @ 1410bb440

void __cdecl EVisLogTags::_dynamic_initializer_for__TAG_EQS__(void)

{
  ::FString::FString(&TAG_EQS,L"LogEQS");
  atexit(_dynamic_atexit_destructor_for__TAG_EQS__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h__Script_AIModule_3257814139'' @ 1410bb470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h__Script_AIModule_3257814139__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h__Script_AIModule_3567865861'' @ 1410bb4b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h__Script_AIModule_3567865861__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h__Script_AIModule_1100001167'' @ 1410bb4f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h__Script_AIModule_1100001167__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_Random_h__Script_AIModule_3557336408'' @ 1410bb530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_Random_h__Script_AIModule_3557336408__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_Random_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h__Script_AIModule_1582661276'' @ 1410bb570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h__Script_AIModule_1582661276__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h__Script_AIModule_Statics
             ::ScriptStructInfo,6,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DetourCrowdAIController_h__Script_AIModule_3022566670'' @ 1410bb5c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DetourCrowdAIController_h__Script_AIModule_3022566670__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DetourCrowdAIController_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h__Script_AIModule_3548659945'' @ 1410bb600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h__Script_AIModule_3548659945__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h__Script_AIModule_1063724005'' @ 1410bb640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h__Script_AIModule_1063724005__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Item_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_NavigationData_h__Script_AIModule_4091864318'' @ 1410bb680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_NavigationData_h__Script_AIModule_4091864318__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_NavigationData_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Querier_h__Script_AIModule_2276859024'' @ 1410bb6c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Querier_h__Script_AIModule_2276859024__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_Querier_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h__Script_AIModule_119726042'' @ 1410bb700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h__Script_AIModule_119726042__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSRenderingComponent_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h__Script_AIModule_786813016'' @ 1410bb740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h__Script_AIModule_786813016__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h__Script_AIModule_2332149476'' @ 1410bb790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h__Script_AIModule_2332149476__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h__Script_AIModule_337770314'' @ 1410bb7d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h__Script_AIModule_337770314__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h__Script_AIModule_227330052'' @ 1410bb810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h__Script_AIModule_227330052__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h__Script_AIModule_2505705087'' @ 1410bb850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h__Script_AIModule_2505705087__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h__Script_AIModule_3643991388'' @ 1410bb890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h__Script_AIModule_3643991388__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h__Script_AIModule_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h__Script_AIModule_2534693333'' @ 1410bb8e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h__Script_AIModule_2534693333__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h__Script_AIModule_3695433225'' @ 1410bb920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h__Script_AIModule_3695433225__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h__Script_AIModule_4033824822'' @ 1410bb960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h__Script_AIModule_4033824822__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h__Script_AIModule_534152538'' @ 1410bb9b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h__Script_AIModule_534152538__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h__Script_AIModule_Statics
             ::ScriptStructInfo,0xb,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h__Script_AIModule_Statics
             ::EnumInfo,0x11);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h__Script_AIModule_2719772890'' @ 1410bba00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h__Script_AIModule_2719772890__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h__Script_AIModule_2169187992'' @ 1410bba40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h__Script_AIModule_2169187992__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h__Script_AIModule_752448916'' @ 1410bba80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h__Script_AIModule_752448916__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h__Script_AIModule_3352256093'' @ 1410bbac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h__Script_AIModule_3352256093__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h__Script_AIModule_1674649635'' @ 1410bbb00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h__Script_AIModule_1674649635__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_CurrentLocation_h__Script_AIModule_2112984288'' @ 1410bbb40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_CurrentLocation_h__Script_AIModule_2112984288__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_CurrentLocation_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Donut_h__Script_AIModule_587684796'' @ 1410bbb80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Donut_h__Script_AIModule_587684796__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Donut_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h__Script_AIModule_9216624'' @ 1410bbbc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h__Script_AIModule_9216624__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h__Script_AIModule_2870413188'' @ 1410bbc10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h__Script_AIModule_2870413188__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h__Script_AIModule_2289197899'' @ 1410bbc50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h__Script_AIModule_2289197899__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h__Script_AIModule_531182157'' @ 1410bbc90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h__Script_AIModule_531182157__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h__Script_AIModule_3100018349'' @ 1410bbcd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h__Script_AIModule_3100018349__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h__Script_AIModule_1050789639'' @ 1410bbd10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h__Script_AIModule_1050789639__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_ActorBase_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h__Script_AIModule_2427568174'' @ 1410bbd50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h__Script_AIModule_2427568174__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h__Script_AIModule_670484503'' @ 1410bbd90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h__Script_AIModule_670484503__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Point_h__Script_AIModule_127306782'' @ 1410bbdd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Point_h__Script_AIModule_127306782__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Point_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h__Script_AIModule_549287738'' @ 1410bbe10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h__Script_AIModule_549287738__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_VectorBase_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_h__Script_AIModule_2847021755'' @ 1410bbe50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_h__Script_AIModule_2847021755__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h__Script_AIModule_3457290833'' @ 1410bbe90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h__Script_AIModule_3457290833__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h__Script_AIModule_196535466'' @ 1410bbee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h__Script_AIModule_196535466__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_GameplayTags_h__Script_AIModule_797633204'' @ 1410bbf30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_GameplayTags_h__Script_AIModule_797633204__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_GameplayTags_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Overlap_h__Script_AIModule_1136647827'' @ 1410bbf70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Overlap_h__Script_AIModule_1136647827__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Overlap_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_PathfindingBatch_h__Script_AIModule_2448415899'' @ 1410bbfb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_PathfindingBatch_h__Script_AIModule_2448415899__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_PathfindingBatch_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h__Script_AIModule_1301902155'' @ 1410bbff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h__Script_AIModule_1301902155__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h__Script_AIModule_865737307'' @ 1410bc040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h__Script_AIModule_865737307__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Random_h__Script_AIModule_1530327361'' @ 1410bc080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Random_h__Script_AIModule_1530327361__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Random_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Trace_h__Script_AIModule_1810956238'' @ 1410bc0c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Trace_h__Script_AIModule_1810956238__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Trace_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Volume_h__Script_AIModule_937797429'' @ 1410bc100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Volume_h__Script_AIModule_937797429__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Volume_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h__Script_AIModule_3973484600'' @ 1410bc140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h__Script_AIModule_3973484600__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Private_BehaviorTree_ValueOrBBKeyBlueprintUtility_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors @ 146f0d390

UFunction * __cdecl
Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f0d3d0

void __cdecl
Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations @ 146f0d3e0

UFunction * __cdecl
Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors @ 146f0d570

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations @ 146f0d710

UFunction * __cdecl
Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryItemType_NoRegister @ 146f0d750

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType",
               &Z_Registration_Info_UClass_UEnvQueryItemType.InnerSingleton,
               UEnvQueryItemType::StaticRegisterNativesUEnvQueryItemType,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryItemType>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType.InnerSingleton;
}

// Z_Construct_UClass_UAIBlueprintHelperLibrary @ 146f0d800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIBlueprintHelperLibrary(void)

{
  if (Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.OuterSingleton,
               &Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam @ 146f0d8f0

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStopOnOverlap_SetBit @ 146f0d930

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::
NewProp_bStopOnOverlap_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// Z_Construct_UClass_UEnvQueryGenerator_OnCircle @ 146f0d940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_OnCircle(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod @ 146f0d980

UEnum * __cdecl Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod(void)

{
  if (Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.InnerSingleton;
}

// EPointOnCircleSpacingMethod_StaticEnum @ 146f0da80

UEnum * __cdecl EPointOnCircleSpacingMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod,(UObject *)pUVar1,
                       L"EPointOnCircleSpacingMethod");
  }
  return Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.OuterSingleton;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject @ 146f0dac0

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryContext_NoRegister @ 146f0db00

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext",
               &Z_Registration_Info_UClass_UEnvQueryContext.InnerSingleton,
               UEnvQueryContext::StaticRegisterNativesUEnvQueryContext,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryContext>,
               InternalVTableHelperCtorCaller<UEnvQueryContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryItemType @ 146f0dbb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryItemType.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryItemType.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryItemType_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType.OuterSingleton;
}

// NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit @ 146f0dca0

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::
NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e0) = 1;
  return;
}

// NewProp_bDefineArc_SetBit @ 146f0dcb0

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x260) = *(uint *)((longlong)param_1 + 0x260) | 1;
  return;
}

// Z_Construct_UClass_UEnvQueryContext_Item @ 146f0dcc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext_Item(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryContext_Item.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryContext_Item.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryContext_Item_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_Item.OuterSingleton;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController @ 146f0dd00

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard @ 146f0de00

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryItemType_Actor @ 146f0def0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_Actor(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Actor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryItemType_Actor.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Actor.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryItemType_ActorBase @ 146f0df30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_ActorBase(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryItemType_ActorBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.OuterSingleton;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath @ 146f0e030

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPathIndex @ 146f0e070

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPathIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPathIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryContext_NavigationData @ 146f0e130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext_NavigationData(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryContext_NavigationData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Pathfinding @ 146f0e2d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Pathfinding(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestPathfinding @ 146f0e310

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestPathfinding(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestPathfinding.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestPathfinding.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestPathfinding_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestPathfinding.InnerSingleton;
}

// EEnvTestPathfinding_StaticEnum @ 146f0e350

UEnum * __cdecl EEnvTestPathfinding_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestPathfinding.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestPathfinding.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPathfinding,(UObject *)pUVar1,
                       L"EEnvTestPathfinding");
  }
  return Z_Registration_Info_UEnum_EEnvTestPathfinding.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister @ 146f0e450

UClass * __cdecl Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryInstanceBlueprintWrapper",
               &Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.InnerSingleton,
               UEnvQueryInstanceBlueprintWrapper::
               StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryInstanceBlueprintWrapper>,
               InternalVTableHelperCtorCaller<UEnvQueryInstanceBlueprintWrapper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.InnerSingleton;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPathPoints @ 146f0e500

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPathPoints(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPathPoints_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UValueOrBBKeyBlueprintUtility @ 146f0e540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UValueOrBBKeyBlueprintUtility(void)

{
  if (Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.OuterSingleton,
               &Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146f0e630

void __cdecl
Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UClass_UEnvQueryItemType_VectorBase @ 146f0e640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_VectorBase(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryItemType_VectorBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.OuterSingleton;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetNextNavLinkIndex @ 146f0e680

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetNextNavLinkIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetNextNavLinkIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool @ 146f0e6c0

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f0e7c0

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection @ 146f0e820

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass @ 146f0e960

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f0e9a0

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UClass_UEnvQueryContext_Querier @ 146f0e9b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext_Querier(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryContext_Querier.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryContext_Querier.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryContext_Querier_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_Querier.OuterSingleton;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation @ 146f0eaa0

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryManager @ 146f0eae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryManager(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryManager.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryManager.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvQueryRunMode @ 146f0eb20

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvQueryRunMode(void)

{
  if (Z_Registration_Info_UEnum_EEnvQueryRunMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvQueryRunMode.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvQueryRunMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FEnvQueryInstance @ 146f0eb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvQueryInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryInstance.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvQueryInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvQueryInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvQueryInstance.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvQueryInstance.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvQueryInstanceCache @ 146f0ebe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvQueryInstanceCache(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryInstanceCache.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvQueryInstanceCache.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvQueryInstanceCache.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvQueryInstanceCache.InnerSingleton;
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

// NewProp_bTestQueriesUsingBreadth_SetBit @ 146f0ec60

void __cdecl
Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146f0ed30

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum @ 146f0ed40

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetEnum_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146f0ed80

void * __cdecl Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvQueryManagerConfig,&UE::CoreUObject::Private::Construct<FEnvQueryManagerConfig>,&UE::CoreUObject::Private::ConstructForTests<FEnvQueryManagerConfig>,&UE::CoreUObject::Private::Destruct<FEnvQueryManagerConfig>,&UE::CoreUObject::Private::Copy<FEnvQueryManagerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation @ 146f0ee80

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLockMovement_SetBit @ 146f0eec0

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::
NewProp_bLockMovement_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_LockAILogic_SetBit @ 146f0eed0

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::
NewProp_LockAILogic_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat @ 146f0eee0

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation @ 146f0ef20

UFunction * __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryItemType_Direction @ 146f0ef60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_Direction(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Direction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryItemType_Direction.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Direction.OuterSingleton;
}

// Z_Construct_UClass_UEnvQuery_NoRegister @ 146f0efa0

UClass * __cdecl Z_Construct_UClass_UEnvQuery_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQuery.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQuery",&Z_Registration_Info_UClass_UEnvQuery.InnerSingleton,
               UEnvQuery::StaticRegisterNativesUEnvQuery,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQuery>,InternalVTableHelperCtorCaller<UEnvQuery>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQuery.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_PathingGrid @ 146f0f060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_PathingGrid(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid @ 146f0f0a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.OuterSingleton;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32 @ 146f0f1a0

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetInt32_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSuccess_SetBit @ 146f0f1e0

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_bSuccess_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 146f0f1f0

void * __cdecl Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvQueryRequest,&UE::CoreUObject::Private::Construct<FEnvQueryRequest>,&UE::CoreUObject::Private::ConstructForTests<FEnvQueryRequest>,&UE::CoreUObject::Private::Destruct<FEnvQueryRequest>,&UE::CoreUObject::Private::Copy<FEnvQueryRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage @ 146f0f270

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName @ 146f0f2b0

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor @ 146f0f3b0

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject @ 146f0f3f0

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146f0f430

void * __cdecl Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvQueryInstanceCache,&UE::CoreUObject::Private::Construct<FEnvQueryInstanceCache>,&UE::CoreUObject::Private::ConstructForTests<FEnvQueryInstanceCache>,&UE::CoreUObject::Private::Destruct<FEnvQueryInstanceCache>,&UE::CoreUObject::Private::Copy<FEnvQueryInstanceCache>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation @ 146f0f4b0

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator @ 146f0f5b0

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetRotator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryItemType_Point @ 146f0f5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_Point(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Point.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryItemType_Point.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryItemType_Point_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Point.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryOption @ 146f0f630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryOption(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryOption.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryOption.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryOption_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryOption.OuterSingleton;
}

// NewProp_bNoCollisionFail_SetBit @ 146f0f730

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::
NewProp_bNoCollisionFail_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString @ 146f0f860

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetString_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass @ 146f0f8e0

UFunction * __cdecl Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct @ 146f0f920

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetStruct_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery @ 146f0f9a0

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUnlockMovement_SetBit @ 146f0f9e0

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::
NewProp_bUnlockMovement_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_UnlockAILogic_SetBit @ 146f0f9f0

void __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::
NewProp_UnlockAILogic_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UClass_UEnvQueryTest @ 146f0fa00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvQueryTestClamping @ 146f0fa40

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvQueryTestClamping(void)

{
  if (Z_Registration_Info_UEnum_EEnvQueryTestClamping.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvQueryTestClamping.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvQueryTestClamping.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestFilterOperator @ 146f0fa80

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestFilterOperator(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestFilterOperator.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestFilterOperator.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestFilterOperator.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestFilterType @ 146f0fac0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestFilterType(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestFilterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestFilterType.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestFilterType.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestPurpose @ 146f0fb00

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestPurpose(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestPurpose.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestPurpose.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestPurpose.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestScoreEquation @ 146f0fb60

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestScoreEquation(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestScoreEquation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestScoreEquation.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestScoreEquation.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestScoreOperator @ 146f0fba0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestScoreOperator(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestScoreOperator.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestScoreOperator.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestScoreOperator.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEQSNormalizationType @ 146f0fbe0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEQSNormalizationType(void)

{
  if (Z_Registration_Info_UEnum_EEQSNormalizationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEQSNormalizationType.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEQSNormalizationType.InnerSingleton;
}

// Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation @ 146f0fc60

UFunction * __cdecl
Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTestQueriesUsingBreadth_SetBit @ 146f0fca0

void __cdecl
Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d0) = 1;
  return;
}

// Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector @ 146f0fcb0

UFunction * __cdecl Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UValueOrBBKeyBlueprintUtility_GetVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EEQSNormalizationType_StaticEnum @ 146f0fcf0

UEnum * __cdecl EEQSNormalizationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEQSNormalizationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEQSNormalizationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEQSNormalizationType,(UObject *)pUVar1,
                       L"EEQSNormalizationType");
  }
  return Z_Registration_Info_UEnum_EEQSNormalizationType.OuterSingleton;
}

// NewProp_bDefineReferenceValue_SetBit @ 146f0fe90

void __cdecl
Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e0) = 1;
  return;
}

// NewProp_bWorkOnFloatValues_SetBit @ 146f0fea0

void __cdecl
Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1f0) = *(uint *)((longlong)param_1 + 0x1f0) | 1;
  return;
}

// Z_Construct_UClass_UEnvQueryDebugHelpers @ 146f0feb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryDebugHelpers(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryDebugHelpers.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryDebugHelpers.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryDebugHelpers.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_NoRegister @ 146f10050

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator",
               &Z_Registration_Info_UClass_UEnvQueryGenerator.InnerSingleton,
               UEnvQueryGenerator::StaticRegisterNativesUEnvQueryGenerator,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator>,local_res8,
               UEnvQueryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Distance @ 146f10460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Distance(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_Distance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_Distance.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_Distance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Distance.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestDistance @ 146f104a0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestDistance(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestDistance.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestDistance.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestDistance_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestDistance.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_NoRegister @ 146f104e0

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest",
               &Z_Registration_Info_UClass_UEnvQueryTest.InnerSingleton,
               UEnvQueryTest::StaticRegisterNativesUEnvQueryTest,0x1f8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryTest>,InternalVTableHelperCtorCaller<UEnvQueryTest>,
               local_res8,UEnvQueryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest.InnerSingleton;
}

// EEnvTestDistance_StaticEnum @ 146f106f0

UEnum * __cdecl EEnvTestDistance_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestDistance.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestDistance.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDistance,(UObject *)pUVar1,
                       L"EEnvTestDistance");
  }
  return Z_Registration_Info_UEnum_EEnvTestDistance.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator @ 146f10930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryNode @ 146f10970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryNode(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryNode.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryNode.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvQueryResultNormalizationOption @ 146f109b0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvQueryResultNormalizationOption(void)

{
  if (Z_Registration_Info_UEnum_EEnvQueryResultNormalizationOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvQueryResultNormalizationOption.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvQueryResultNormalizationOption_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvQueryResultNormalizationOption.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryOption_NoRegister @ 146f109f0

UClass * __cdecl Z_Construct_UClass_UEnvQueryOption_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryOption",
               &Z_Registration_Info_UClass_UEnvQueryOption.InnerSingleton,
               UEnvQueryOption::StaticRegisterNativesUEnvQueryOption,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryOption>,
               InternalVTableHelperCtorCaller<UEnvQueryOption>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryOption.InnerSingleton;
}

// NewProp_bAutoSortTests_SetBit @ 146f10aa0

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 1;
  return;
}

// NewProp_bCanRunAsync_SetBit @ 146f10b60

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bCanRunAsync_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 2;
  return;
}

// Z_Construct_UClass_UEnvQuery @ 146f10b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQuery(void)

{
  if (Z_Registration_Info_UClass_UEnvQuery.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQuery.OuterSingleton,
               &Z_Construct_UClass_UEnvQuery_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQuery.OuterSingleton;
}

// Z_Construct_UClass_UBrainComponent @ 146f10d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBrainComponent(void)

{
  if (Z_Registration_Info_UClass_UBrainComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBrainComponent.OuterSingleton,
               &Z_Construct_UClass_UBrainComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBrainComponent.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146f10dd0

void __cdecl
Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBrainComponent_IsPaused @ 146f10de0

UFunction * __cdecl Z_Construct_UFunction_UBrainComponent_IsPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f10e20

void __cdecl
Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UBrainComponent_IsRunning @ 146f10ef0

UFunction * __cdecl Z_Construct_UFunction_UBrainComponent_IsRunning(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryTypes @ 146f10f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTypes(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTypes.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTypes.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTypes_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTypes.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EAIParamType @ 146f10f70

UEnum * __cdecl Z_Construct_UEnum_AIModule_EAIParamType(void)

{
  if (Z_Registration_Info_UEnum_EAIParamType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAIParamType.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EAIParamType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAIParamType.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvDirection @ 146f10fb0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvDirection(void)

{
  if (Z_Registration_Info_UEnum_EEnvDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvDirection.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvDirection.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvOverlapShape @ 146f10ff0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvOverlapShape(void)

{
  if (Z_Registration_Info_UEnum_EEnvOverlapShape.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvOverlapShape.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvOverlapShape.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvQueryTrace @ 146f11030

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvQueryTrace(void)

{
  if (Z_Registration_Info_UEnum_EEnvQueryTrace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvQueryTrace.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvQueryTrace.InnerSingleton;
}

// Z_Construct_UFunction_UBrainComponent_RestartLogic @ 146f11070

UFunction * __cdecl Z_Construct_UFunction_UBrainComponent_RestartLogic(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_AIModule_EEnvTraceShape @ 146f110b0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTraceShape(void)

{
  if (Z_Registration_Info_UEnum_EEnvTraceShape.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTraceShape.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTraceShape.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAIDynamicParam @ 146f110f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIDynamicParam(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIDynamicParam.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIDynamicParam.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIDynamicParam_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIDynamicParam.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIDynamicParam.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvDirection @ 146f11170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvDirection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvDirection.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvDirection.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvDirection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvDirection.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvDirection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvNamedValue @ 146f111f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvNamedValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvNamedValue.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvNamedValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvNamedValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvNamedValue.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvNamedValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvOverlapData @ 146f11270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvOverlapData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvOverlapData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvOverlapData.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvOverlapData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvOverlapData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvOverlapData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvQueryContextData @ 146f112f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvQueryContextData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryContextData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvQueryContextData.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvQueryContextData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvQueryContextData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FEnvQueryContextData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvQueryInstanceContextCacheItem @ 146f11370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvQueryInstanceContextCacheItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryInstanceContextCacheItem.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvQueryInstanceContextCacheItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvQueryInstanceContextCacheItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvQueryInstanceContextCacheItem.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvQueryInstanceContextCacheItem.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvQueryOptionInstance @ 146f113f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvQueryOptionInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryOptionInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvQueryOptionInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvQueryOptionInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvQueryOptionInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvQueryOptionInstance.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvQueryResult @ 146f11470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvQueryResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryResult.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvQueryResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvQueryResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvQueryResult.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvQueryResult.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvTraceData @ 146f114f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvTraceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvTraceData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvTraceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvTraceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvTraceData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvTraceData.InnerSingleton;
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

// EEnvTestPurpose_StaticEnum @ 146f11570

UEnum * __cdecl EEnvTestPurpose_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPurpose,(UObject *)pUVar1,
                       L"EEnvTestPurpose");
  }
  return Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton;
}

// Z_Construct_UFunction_UBrainComponent_StartLogic @ 146f115b0

UFunction * __cdecl Z_Construct_UFunction_UBrainComponent_StartLogic(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// EEnvTestFilterType_StaticEnum @ 146f115f0

UEnum * __cdecl EEnvTestFilterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterType,(UObject *)pUVar1,
                       L"EEnvTestFilterType");
  }
  return Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton;
}

// Z_Construct_UFunction_UBrainComponent_StopLogic @ 146f11630

UFunction * __cdecl Z_Construct_UFunction_UBrainComponent_StopLogic(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// EEnvTestScoreEquation_StaticEnum @ 146f11670

UEnum * __cdecl EEnvTestScoreEquation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation,(UObject *)pUVar1,
                       L"EEnvTestScoreEquation");
  }
  return Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton;
}

// EEnvTestWeight_StaticEnum @ 146f116c0

UEnum * __cdecl EEnvTestWeight_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestWeight,(UObject *)pUVar1,L"EEnvTestWeight"
                      );
  }
  return Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton;
}

// EEnvTestCost_StaticEnum @ 146f11770

UEnum * __cdecl EEnvTestCost_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestCost,(UObject *)pUVar1,L"EEnvTestCost");
  }
  return Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton;
}

// EEnvTestFilterOperator_StaticEnum @ 146f11870

UEnum * __cdecl EEnvTestFilterOperator_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator,(UObject *)pUVar1,
                       L"EEnvTestFilterOperator");
  }
  return Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton;
}

// EEnvTestScoreOperator_StaticEnum @ 146f118b0

UEnum * __cdecl EEnvTestScoreOperator_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator,(UObject *)pUVar1,
                       L"EEnvTestScoreOperator");
  }
  return Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton;
}

// EEnvQueryStatus_StaticEnum @ 146f118f0

UEnum * __cdecl EEnvQueryStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryStatus,(UObject *)pUVar1,
                       L"EEnvQueryStatus");
  }
  return Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Dot @ 146f11930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Dot(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_Dot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_Dot.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_Dot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Dot.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestDot @ 146f11970

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestDot(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestDot.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestDot.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestDot.InnerSingleton;
}

// EEnvTestDot_StaticEnum @ 146f119b0

UEnum * __cdecl EEnvTestDot_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDot,(UObject *)pUVar1,L"EEnvTestDot");
  }
  return Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton;
}

// EEnvQueryRunMode_StaticEnum @ 146f119f0

UEnum * __cdecl EEnvQueryRunMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryRunMode,(UObject *)pUVar1,
                       L"EEnvQueryRunMode");
  }
  return Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton;
}

// NewProp_bAbsoluteValue_SetBit @ 146f11a30

void __cdecl
Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x239) = 1;
  return;
}

// EEnvQueryResultNormalizationOption_StaticEnum @ 146f11a40

UEnum * __cdecl EEnvQueryResultNormalizationOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryResultNormalizationOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryResultNormalizationOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryResultNormalizationOption,
                       (UObject *)pUVar1,L"EEnvQueryResultNormalizationOption");
  }
  return Z_Registration_Info_UEnum_EEnvQueryResultNormalizationOption.OuterSingleton;
}

// EEnvQueryParam_StaticEnum @ 146f11a80

UEnum * __cdecl EEnvQueryParam_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryParam,(UObject *)pUVar1,L"EEnvQueryParam"
                      );
  }
  return Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton;
}

// EAIParamType_StaticEnum @ 146f11ac0

UEnum * __cdecl EAIParamType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAIParamType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAIParamType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAIParamType,(UObject *)pUVar1,L"EAIParamType");
  }
  return Z_Registration_Info_UEnum_EAIParamType.OuterSingleton;
}

// EEnvQueryTrace_StaticEnum @ 146f11b00

UEnum * __cdecl EEnvQueryTrace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTrace,(UObject *)pUVar1,L"EEnvQueryTrace"
                      );
  }
  return Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton;
}

// EEnvTraceShape_StaticEnum @ 146f11b40

UEnum * __cdecl EEnvTraceShape_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTraceShape,(UObject *)pUVar1,L"EEnvTraceShape"
                      );
  }
  return Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton;
}

// EEnvOverlapShape_StaticEnum @ 146f11be0

UEnum * __cdecl EEnvOverlapShape_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvOverlapShape,(UObject *)pUVar1,
                       L"EEnvOverlapShape");
  }
  return Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton;
}

// EEnvDirection_StaticEnum @ 146f11ce0

UEnum * __cdecl EEnvDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvDirection,(UObject *)pUVar1,L"EEnvDirection");
  }
  return Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton;
}

// EEnvQueryTestClamping_StaticEnum @ 146f11d20

UEnum * __cdecl EEnvQueryTestClamping_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping,(UObject *)pUVar1,
                       L"EEnvQueryTestClamping");
  }
  return Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton;
}

// NewStructOps @ 146f11d60

void * __cdecl Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvNamedValue,&UE::CoreUObject::Private::Construct<FEnvNamedValue>,&UE::CoreUObject::Private::ConstructForTests<FEnvNamedValue>,&UE::CoreUObject::Private::Destruct<FEnvNamedValue>,&UE::CoreUObject::Private::Copy<FEnvNamedValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146f11e60

void * __cdecl Z_Construct_UScriptStruct_FEnvDirection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvDirection,&UE::CoreUObject::Private::Construct<FEnvDirection>,&UE::CoreUObject::Private::ConstructForTests<FEnvDirection>,&UE::CoreUObject::Private::Destruct<FEnvDirection>,&UE::CoreUObject::Private::Copy<FEnvDirection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAIDataProvider_NoRegister @ 146f11ea0

UClass * __cdecl Z_Construct_UClass_UAIDataProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIDataProvider",
               &Z_Registration_Info_UClass_UAIDataProvider.InnerSingleton,
               UAIDataProvider::StaticRegisterNativesUAIDataProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIDataProvider>,InternalVTableHelperCtorCaller<UAIDataProvider>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIDataProvider.InnerSingleton;
}

// NewProp_bTraceComplex_SetBit @ 146f11f90

void __cdecl
Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bOnlyBlockingHits_SetBit @ 146f11fa0

void __cdecl
Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 2;
  return;
}

// NewProp_bCanTraceOnNavMesh_SetBit @ 146f11fb0

void __cdecl
Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 4;
  return;
}

// NewProp_bCanTraceOnGeometry_SetBit @ 146f11fc0

void __cdecl
Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 8;
  return;
}

// NewProp_bCanDisableTrace_SetBit @ 146f11fd0

void __cdecl
Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 0x10;
  return;
}

// NewProp_bCanProjectDown_SetBit @ 146f11fe0

void __cdecl
Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 0x20;
  return;
}

// Z_Construct_UClass_UEnvQueryTest_PathfindingBatch @ 146f11ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_PathfindingBatch(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.OuterSingleton;
}

// NewStructOps @ 146f12030

void * __cdecl Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvTraceData,&UE::CoreUObject::Private::Construct<FEnvTraceData>,&UE::CoreUObject::Private::ConstructForTests<FEnvTraceData>,&UE::CoreUObject::Private::Destruct<FEnvTraceData>,&UE::CoreUObject::Private::Copy<FEnvTraceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_AEQSTestingPawn @ 146f12100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AEQSTestingPawn(void)

{
  if (Z_Registration_Info_UClass_AEQSTestingPawn.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AEQSTestingPawn.OuterSingleton,
               &Z_Construct_UClass_AEQSTestingPawn_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AEQSTestingPawn.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode @ 146f12140

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode(void)

{
  if (Z_Registration_Info_UEnum_EEnvQueryHightlightMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvQueryHightlightMode.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvQueryHightlightMode.InnerSingleton;
}

// EEnvQueryHightlightMode_StaticEnum @ 146f122b0

UEnum * __cdecl EEnvQueryHightlightMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryHightlightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryHightlightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode,(UObject *)pUVar1,
                       L"EEnvQueryHightlightMode");
  }
  return Z_Registration_Info_UEnum_EEnvQueryHightlightMode.OuterSingleton;
}

// NewProp_bDrawLabels_SetBit @ 146f122f0

void __cdecl Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x6b4) = *(uint *)((longlong)param_1 + 0x6b4) | 1;
  return;
}

// NewProp_bDrawFailedItems_SetBit @ 146f12300

void __cdecl
Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x6b4) = *(uint *)((longlong)param_1 + 0x6b4) | 2;
  return;
}

// NewProp_bReRunQueryOnlyOnFinishedMove_SetBit @ 146f12310

void __cdecl
Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x6b4) = *(uint *)((longlong)param_1 + 0x6b4) | 4;
  return;
}

// NewProp_bShouldBeVisibleInGame_SetBit @ 146f12320

void __cdecl
Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x6b4) = *(uint *)((longlong)param_1 + 0x6b4) | 8;
  return;
}

// NewProp_bTickDuringGame_SetBit @ 146f12330

void __cdecl
Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x6b4) = *(uint *)((longlong)param_1 + 0x6b4) | 0x10;
  return;
}

// NewProp_bRunQueryOnSelectionChanged_SetBit @ 146f12340

void __cdecl
Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bRunQueryOnSelectionChanged_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x6b4) = *(uint *)((longlong)param_1 + 0x6b4) | 0x20;
  return;
}

// NewProp_bOnlyBlockingHits_SetBit @ 146f12350

void __cdecl
Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 1;
  return;
}

// NewProp_bOverlapComplex_SetBit @ 146f123a0

void __cdecl
Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 2;
  return;
}

// NewProp_bSkipOverlapQuerier_SetBit @ 146f123b0

void __cdecl
Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 4;
  return;
}

// NewStructOps @ 146f123c0

void * __cdecl Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvOverlapData,&UE::CoreUObject::Private::Construct<FEnvOverlapData>,&UE::CoreUObject::Private::ConstructForTests<FEnvOverlapData>,&UE::CoreUObject::Private::Destruct<FEnvOverlapData>,&UE::CoreUObject::Private::Copy<FEnvOverlapData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146f12520

void * __thiscall
FAIDataProviderStructValue::_scalar_deleting_destructor_
          (FAIDataProviderStructValue *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->StructName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 146f12630

void * __cdecl Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvQueryResult,&UE::CoreUObject::Private::Construct<FEnvQueryResult>,&UE::CoreUObject::Private::ConstructForTests<FEnvQueryResult>,&UE::CoreUObject::Private::Destruct<FEnvQueryResult>,&UE::CoreUObject::Private::Copy<FEnvQueryResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAIDataProvider @ 146f12820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIDataProvider(void)

{
  if (Z_Registration_Info_UClass_UAIDataProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIDataProvider.OuterSingleton,
               &Z_Construct_UClass_UAIDataProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIDataProvider.OuterSingleton;
}

// NewStructOps @ 146f12860

void * __cdecl Z_Construct_UScriptStruct_FEnvQueryContextData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvQueryContextData,&UE::CoreUObject::Private::Construct<FEnvQueryContextData>,&UE::CoreUObject::Private::ConstructForTests<FEnvQueryContextData>,&UE::CoreUObject::Private::Destruct<FEnvQueryContextData>,&UE::CoreUObject::Private::Copy<FEnvQueryContextData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FAIDataProviderBoolValue @ 146f128a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIDataProviderBoolValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderBoolValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIDataProviderBoolValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderBoolValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIDataProviderBoolValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAIDataProviderFloatValue @ 146f12920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIDataProviderFloatValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderFloatValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIDataProviderFloatValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderFloatValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIDataProviderFloatValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAIDataProviderIntValue @ 146f129a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIDataProviderIntValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderIntValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIDataProviderIntValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderIntValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIDataProviderIntValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAIDataProviderTypedValue @ 146f12a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIDataProviderTypedValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAIDataProviderValue @ 146f12aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIDataProviderValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderValue.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIDataProviderValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderValue.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAIDataProviderValue.InnerSingleton;
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

// NewStructOps @ 146f12b20

void * __cdecl Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIDataProviderValue,&UE::CoreUObject::Private::Construct<FAIDataProviderValue>,&UE::CoreUObject::Private::ConstructForTests<FAIDataProviderValue>,&UE::CoreUObject::Private::Destruct<FAIDataProviderValue>,&UE::CoreUObject::Private::Copy<FAIDataProviderValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146f12c20

void * __cdecl Z_Construct_UScriptStruct_FEnvQueryOptionInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvQueryOptionInstance,&UE::CoreUObject::Private::Construct<FEnvQueryOptionInstance>,&UE::CoreUObject::Private::ConstructForTests<FEnvQueryOptionInstance>,&UE::CoreUObject::Private::Destruct<FEnvQueryOptionInstance>,&UE::CoreUObject::Private::Copy<FEnvQueryOptionInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146f12c60

void * __cdecl Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIDataProviderTypedValue,&UE::CoreUObject::Private::Construct<FAIDataProviderTypedValue>,&UE::CoreUObject::Private::ConstructForTests<FAIDataProviderTypedValue>,&UE::CoreUObject::Private::Destruct<FAIDataProviderTypedValue>,&UE::CoreUObject::Private::SerializeArchive<FAIDataProviderTypedValue>,&UE::CoreUObject::Private::Copy<FAIDataProviderTypedValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass @ 146f12ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.OuterSingleton;
}

// Z_Construct_UClass_UAIDataProvider_QueryParams @ 146f12ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIDataProvider_QueryParams(void)

{
  if (Z_Registration_Info_UClass_UAIDataProvider_QueryParams.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIDataProvider_QueryParams.OuterSingleton,
               &Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIDataProvider_QueryParams.OuterSingleton;
}

// NewProp_BoolValue_SetBit @ 146f12d20

void __cdecl
Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewStructOps @ 146f12df0

void * __cdecl Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIDataProviderStructValue,&UE::CoreUObject::Private::Construct<FAIDataProviderStructValue>,&UE::CoreUObject::Private::ConstructForTests<FAIDataProviderStructValue>,&UE::CoreUObject::Private::Destruct<FAIDataProviderStructValue>,&UE::CoreUObject::Private::Copy<FAIDataProviderStructValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146f12e30

void * __cdecl
Z_Construct_UScriptStruct_FEnvQueryInstanceContextCacheItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvQueryInstanceContextCacheItem,&UE::CoreUObject::Private::Construct<FEnvQueryInstanceContextCacheItem>,&UE::CoreUObject::Private::ConstructForTests<FEnvQueryInstanceContextCacheItem>,&UE::CoreUObject::Private::Destruct<FEnvQueryInstanceContextCacheItem>,&UE::CoreUObject::Private::Copy<FEnvQueryInstanceContextCacheItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UEnvQueryTest_Project @ 146f12f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Project(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_Project.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_Project.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_Project_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Project.OuterSingleton;
}

// NewStructOps @ 146f12f90

void * __cdecl Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIDataProviderIntValue,&UE::CoreUObject::Private::Construct<FAIDataProviderIntValue>,&UE::CoreUObject::Private::ConstructForTests<FAIDataProviderIntValue>,&UE::CoreUObject::Private::Destruct<FAIDataProviderIntValue>,&UE::CoreUObject::Private::Copy<FAIDataProviderIntValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146f13240

void * __cdecl Z_Construct_UScriptStruct_FEnvQueryInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEnvQueryInstance,&UE::CoreUObject::Private::Construct<FEnvQueryInstance>,&UE::CoreUObject::Private::ConstructForTests<FEnvQueryInstance>,&UE::CoreUObject::Private::Destruct<FEnvQueryInstance>,&UE::CoreUObject::Private::Copy<FEnvQueryInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAIDataProvider_Random @ 146f13280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIDataProvider_Random(void)

{
  if (Z_Registration_Info_UClass_UAIDataProvider_Random.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIDataProvider_Random.OuterSingleton,
               &Z_Construct_UClass_UAIDataProvider_Random_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIDataProvider_Random.OuterSingleton;
}

// NewProp_bInteger_SetBit @ 146f132c0

void __cdecl
Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x48) = *(byte *)((longlong)param_1 + 0x48) | 1;
  return;
}

// NewStructOps @ 146f132d0

void * __cdecl Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIDataProviderFloatValue,&UE::CoreUObject::Private::Construct<FAIDataProviderFloatValue>,&UE::CoreUObject::Private::ConstructForTests<FAIDataProviderFloatValue>,&UE::CoreUObject::Private::Destruct<FAIDataProviderFloatValue>,&UE::CoreUObject::Private::Copy<FAIDataProviderFloatValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllowBBKey_SetBit @ 146f13490

void __cdecl
Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_bAllowBBKey_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) | 1;
  return;
}

// NewStructOps @ 146f134a0

void * __cdecl Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIDynamicParam,&UE::CoreUObject::Private::Construct<FAIDynamicParam>,&UE::CoreUObject::Private::ConstructForTests<FAIDynamicParam>,&UE::CoreUObject::Private::Destruct<FAIDynamicParam>,&UE::CoreUObject::Private::Copy<FAIDynamicParam>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase @ 146f134e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Random @ 146f13520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Random(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_Random.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_Random.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_Random_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Random.OuterSingleton;
}

// NewProp_DefaultValue_SetBit @ 146f13560

void __cdecl
Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 146f13570

void * __cdecl Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIDataProviderBoolValue,&UE::CoreUObject::Private::Construct<FAIDataProviderBoolValue>,&UE::CoreUObject::Private::ConstructForTests<FAIDataProviderBoolValue>,&UE::CoreUObject::Private::Destruct<FAIDataProviderBoolValue>,&UE::CoreUObject::Private::Copy<FAIDataProviderBoolValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor @ 146f13670

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector @ 146f136b0

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseBBKeyForQueryTemplate_SetBit @ 146f136f0

void __cdecl
Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::
NewProp_bUseBBKeyForQueryTemplate_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) | 1;
  return;
}

// NewStructOps @ 146f13700

void * __cdecl
Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEQSParametrizedQueryExecutionRequest,&UE::CoreUObject::Private::Construct<FEQSParametrizedQueryExecutionRequest>,&UE::CoreUObject::Private::ConstructForTests<FEQSParametrizedQueryExecutionRequest>,&UE::CoreUObject::Private::Destruct<FEQSParametrizedQueryExecutionRequest>,&UE::CoreUObject::Private::Copy<FEQSParametrizedQueryExecutionRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration @ 146f13800

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors @ 146f13930

UFunction * __cdecl
Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier @ 146f13970

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryGenerator_BlueprintBase_GetQuerier_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryTest_Trace @ 146f139b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Trace(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_Trace.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_Trace.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_Trace_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Trace.OuterSingleton;
}

// Z_Construct_UClass_ADetourCrowdAIController @ 146f13bd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADetourCrowdAIController(void)

{
  if (Z_Registration_Info_UClass_ADetourCrowdAIController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADetourCrowdAIController.OuterSingleton,
               &Z_Construct_UClass_ADetourCrowdAIController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADetourCrowdAIController.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_Composite @ 146f13c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_Composite(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.OuterSingleton;
}

// NewProp_bAllowDifferentItemTypes_SetBit @ 146f13c50

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x60) = *(uint *)((longlong)param_1 + 0x60) | 1;
  return;
}

// NewProp_bHasMatchingItemType_SetBit @ 146f13c60

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x60) = *(uint *)((longlong)param_1 + 0x60) | 2;
  return;
}

// Z_Construct_UClass_UEnvQueryItemType_VectorBase_NoRegister @ 146f13d30

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_VectorBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_VectorBase",
               &Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.InnerSingleton,
               UEnvQueryItemType_VectorBase::StaticRegisterNativesUEnvQueryItemType_VectorBase,0x30,
               8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryItemType_VectorBase>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_VectorBase>,local_res8,
               UEnvQueryItemType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_VectorBase.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryItemType_ActorBase_NoRegister @ 146f14160

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_ActorBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_ActorBase",
               &Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.InnerSingleton,
               UEnvQueryItemType_ActorBase::StaticRegisterNativesUEnvQueryItemType_ActorBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryItemType_ActorBase>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_ActorBase>,local_res8,
               UEnvQueryItemType_VectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_ActorBase.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Volume @ 146f14720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Volume(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_Volume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_Volume.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_Volume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Volume.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_Cone @ 146f14760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_Cone(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints @ 146f147a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.OuterSingleton;
}

// NewProp_bDoComplexVolumeTest_SetBit @ 146f147e0

void __cdecl
Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_bDoComplexVolumeTest_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x208) = *(uint *)((longlong)param_1 + 0x208) | 1;
  return;
}

// NewProp_bSkipTestIfNoVolumes_SetBit @ 146f147f0

void __cdecl
Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_bSkipTestIfNoVolumes_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x208) = *(uint *)((longlong)param_1 + 0x208) | 2;
  return;
}

// NewProp_bIncludeContextLocation_SetBit @ 146f14800

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x180) = *(byte *)((longlong)param_1 + 0x180) | 1;
  return;
}

// Z_Construct_UClass_UEnvQueryContext @ 146f14810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryContext.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryContext.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryContext_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryContext_BlueprintBase @ 146f14850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext_BlueprintBase(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.OuterSingleton;
}

// Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet @ 146f14a50

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet @ 146f14c10

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryTest_GameplayTags @ 146f14c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_GameplayTags(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation @ 146f14c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.OuterSingleton;
}

// Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor @ 146f14cd0

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSearchComponentsForTags_SetBit @ 146f14d10

void __cdecl
Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bSearchComponentsForTags_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x240) = 1;
  return;
}

// NewProp_bRejectIncompatibleItems_SetBit @ 146f14d20

void __cdecl
Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bRejectIncompatibleItems_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x241) = 1;
  return;
}

// NewProp_bUpdatedToUseQuery_SetBit @ 146f14d30

void __cdecl
Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x242) = 1;
  return;
}

// Z_Construct_UClass_UEQSRenderingComponent @ 146f14d40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEQSRenderingComponent(void)

{
  if (Z_Registration_Info_UClass_UEQSRenderingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEQSRenderingComponent.OuterSingleton,
               &Z_Construct_UClass_UEQSRenderingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEQSRenderingComponent.OuterSingleton;
}

// Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation @ 146f14d80

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors @ 146f14dc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.OuterSingleton;
}

// NewProp_bIncludeKnownActors_SetBit @ 146f14e00

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// Z_Construct_UClass_UEnvQueryGenerator_Donut @ 146f15090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_Donut(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.OuterSingleton;
}

// Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper @ 146f150d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.OuterSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvQueryStatus @ 146f15110

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvQueryStatus(void)

{
  if (Z_Registration_Info_UEnum_EEnvQueryStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvQueryStatus.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvQueryStatus.InnerSingleton;
}

// Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature @ 146f15150

UFunction * __cdecl
Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseSpiralPattern_SetBit @ 146f15190

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d0) = 1;
  return;
}

// NewProp_bDefineArc_SetBit @ 146f151a0

void __cdecl
Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1e0) = *(uint *)((longlong)param_1 + 0x1e0) | 1;
  return;
}

// Z_Construct_UClass_UEnvQueryTest_Overlap @ 146f15270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Overlap(void)

{
  if (Z_Registration_Info_UClass_UEnvQueryTest_Overlap.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvQueryTest_Overlap.OuterSingleton,
               &Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Overlap.OuterSingleton;
}

// Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore @ 146f152b0

UFunction * __cdecl Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f152f0

void __cdecl
Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// FDebugHelper,TSizedDefaultAllocator<32>_> @ 146f15720

FArchive * __cdecl
operator<<<EQSDebug::FDebugHelper_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FDebugHelper *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x38);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<EQSDebug::FDebugHelper,int>
                ((FDebugHelper *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x4924a)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              ::operator<<(param_1,(FDebugHelper *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x38)
                          );
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x838,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FDebugHelper *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x38)
              ;
              DefaultConstructItems<EQSDebug::FDebugHelper,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FItemData,TSizedDefaultAllocator<32>_> @ 146f15730

FArchive * __cdecl
operator<<<EQSDebug::FItemData_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<EQSDebug::FItemData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FItemData *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x38);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<EQSDebug::FItemData,int>
                ((FItemData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x4924a)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              ::operator<<(param_1,(FItemData *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x38)
                          );
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<EQSDebug::FItemData,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x838,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FItemData *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
              DefaultConstructItems<EQSDebug::FItemData,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FOptionData,TSizedDefaultAllocator<32>_> @ 146f15740

FArchive * __cdecl
operator<<<FEnvQueryDebugProfileData::FOptionData_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FOptionData *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
                ((FOptionData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FOptionData *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30)
                          );
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FOptionData *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
              DefaultConstructItems<FEnvQueryDebugProfileData::FOptionData,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FOptionStat,TSizedDefaultAllocator<32>_> @ 146f15750

FArchive * __cdecl
operator<<<FEnvQueryDebugProfileData::FOptionStat_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FEnvQueryDebugProfileData::FOptionStat,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FOptionStat *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
                ((FOptionStat *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              ::operator<<(param_1,(FOptionStat *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18
                                   ));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FEnvQueryDebugProfileData::FOptionStat,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FOptionStat *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
              DefaultConstructItems<FEnvQueryDebugProfileData::FOptionStat,int>(pFVar2,1);
              ::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FQueryData,TSizedDefaultAllocator<32>_> @ 146f15760

FArchive * __cdecl
operator<<<EQSDebug::FQueryData_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<EQSDebug::FQueryData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FQueryData *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x88);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<EQSDebug::FQueryData,int>
                ((FQueryData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1e1e2)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FQueryData *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x88)
                          );
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<EQSDebug::FQueryData,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x888,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FQueryData *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x88);
              DefaultConstructItems<EQSDebug::FQueryData,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FSphere,TSizedDefaultAllocator<32>_> @ 146f15770

FArchive * __cdecl
operator<<<FDebugRenderSceneProxy::FSphere_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FSphere *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x28);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x66667)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              ::operator<<(param_1,(FSphere *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28
                                   ));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FSphere *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<FDebugRenderSceneProxy::FSphere,int>(pFVar2,1);
              ::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FStep,TSizedDefaultAllocator<32>_> @ 146f15780

FArchive * __cdecl
operator<<<FEnvQueryDebugProfileData::FStep_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FEnvQueryDebugProfileData::FStep,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FStep *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              ::operator<<(param_1,(FStep *)((param_2->AllocatorInstance).Data +
                                            (longlong)(int)uVar10 * 8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FEnvQueryDebugProfileData::FStep,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FStep *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8);
              DefaultConstructItems<FEnvQueryDebugProfileData::FStep,int>(pFVar2,1);
              ::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FTestData,TSizedDefaultAllocator<32>_> @ 146f15790

FArchive * __cdecl
operator<<<EQSDebug::FTestData_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<EQSDebug::FTestData,int>
                ((FTestData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
              ::operator<<(param_1,(FString *)pFVar9);
              ::operator<<(param_1,(FString *)(pFVar9 + 0x10));
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
              DefaultConstructItems<EQSDebug::FTestData,int>(pFVar9,1);
              ::operator<<(param_1,(FString *)pFVar9);
              ::operator<<(param_1,(FString *)(pFVar9 + 0x10));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FText3d,TSizedDefaultAllocator<32>_> @ 146f157a0

FArchive * __cdecl
operator<<<FDebugRenderSceneProxy::FText3d_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FText3d *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FDebugRenderSceneProxy::FText3d,int>
                ((FText3d *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FText3d *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30)
                          );
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FText3d *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
              DefaultConstructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// CastChecked<AEQSTestingPawn,UObject> @ 146f16820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AEQSTestingPawn * __cdecl CastChecked<AEQSTestingPawn,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<AEQSTestingPawn>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AEQSTestingPawn::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (AEQSTestingPawn *)param_1;
  }
  pFVar3 = GetTypeName<AEQSTestingPawn>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<AVolume,AActor> @ 146f168e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AVolume * __cdecl CastChecked<AVolume,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<AVolume>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_AVolume_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AVolume *)param_1;
  }
  pFVar3 = GetTypeName<AVolume>(&local_28);
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

// ConstructItems<UEnvQueryGenerator_*,TObjectPtr<UEnvQueryGenerator>,int> @ 146f169a0

void __cdecl
ConstructItems<UEnvQueryGenerator_*,TObjectPtr<UEnvQueryGenerator>,int>
          (void *param_1,TObjectPtr<UEnvQueryGenerator> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UEnvQueryTest>,UEnvQueryTest_*,int> @ 146f169d0

void __cdecl
ConstructItems<TObjectPtr<UEnvQueryTest>,UEnvQueryTest_*,int>
          (void *param_1,UEnvQueryTest **param_2,int param_3)

{
  UEnvQueryTest *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UEnvQueryTest **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnvQueryTest *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UEnvQueryTest>,TObjectPtr<UEnvQueryTest>,int> @ 146f16a30

void __cdecl
ConstructItems<TObjectPtr<UEnvQueryTest>,TObjectPtr<UEnvQueryTest>,int>
          (void *param_1,TObjectPtr<UEnvQueryTest> *param_2,int param_3)

{
  TObjectPtr<UEnvQueryTest> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UEnvQueryTest>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UEnvQueryTest>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UEnvQueryTest *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UEnvQueryTest *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAIDynamicParam,FAIDynamicParam,int> @ 146f16a90

void __cdecl
ConstructItems<FAIDynamicParam,FAIDynamicParam,int>
          (void *param_1,FAIDynamicParam *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  TObjectPtr<UBlackboardKeyType> *pTVar5;
  FName FVar6;
  FName *pFVar7;
  byte *pbVar8;
  FName *pFVar9;
  
  if (param_3 != 0) {
    pbVar8 = (byte *)((longlong)param_1 + 9);
    pFVar9 = &(param_2->BBKey).SelectedKeyName;
    do {
      pFVar1 = (ForAnyElementType *)(pbVar8 + 7);
      bVar3 = *pbVar8;
      *(FName *)((longlong)pFVar9 + (longlong)param_1 + (-0x20 - (longlong)param_2)) = pFVar9[-4];
      pbVar8[-1] = (byte)pFVar9[-3].ComparisonIndex.Value;
      *pbVar8 = *pbVar8 ^ (bVar3 ^ *(byte *)((longlong)&pFVar9[-3].ComparisonIndex.Value + 1)) & 1;
      *(uint *)(pbVar8 + 3) = pFVar9[-3].Number;
      pbVar2 = pbVar8 + 0x13;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      uVar4 = pFVar9[-1].ComparisonIndex.Value;
      pTVar5 = *(TObjectPtr<UBlackboardKeyType> **)&pFVar9[-2].ComparisonIndex;
      *(uint *)(pbVar8 + 0xf) = uVar4;
      if (uVar4 == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar4,0,pFVar1,uVar4,(int *)pbVar2);
        ConstructItems<TObjectPtr<UBlackboardKeyType>,TObjectPtr<UBlackboardKeyType>,int>
                  (pFVar1->Data,pTVar5,uVar4);
      }
      *(FName *)(pbVar8 + 0x17) = *pFVar9;
      FVar6 = pFVar9[1];
      *(FName *)(pbVar8 + 0x1f) = FVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      *(uint *)(pbVar8 + 0x27) = pFVar9[2].ComparisonIndex.Value;
      pFVar7 = pFVar9 + 2;
      pFVar9 = pFVar9 + 7;
      *(uint *)(pbVar8 + 0x2b) =
           *(uint *)(pbVar8 + 0x2b) ^ (*(uint *)(pbVar8 + 0x2b) ^ pFVar7->Number) & 1;
      pbVar8 = pbVar8 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<EQSDebug::FDebugHelper,EQSDebug::FDebugHelper,int> @ 146f16bc0

void __cdecl
ConstructItems<EQSDebug::FDebugHelper,EQSDebug::FDebugHelper,int>
          (void *param_1,FDebugHelper *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x1c);
    piVar4 = &param_2->FailedTestIndex;
    do {
      puVar1 = (undefined8 *)((longlong)param_2 + (-0x1c - (longlong)param_1) + (longlong)piVar3);
      uVar2 = puVar1[1];
      *(undefined8 *)(piVar3 + -7) = *puVar1;
      *(undefined8 *)(piVar3 + -5) = uVar2;
      *(undefined8 *)(piVar3 + -3) =
           *(undefined8 *)((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)piVar3);
      piVar3[-1] = piVar4[-1];
      *piVar3 = *piVar4;
      piVar3[1] = piVar4[1];
      FString::FString((FString *)(piVar3 + 3),(FString *)(piVar4 + 3));
      piVar4 = piVar4 + 0xe;
      piVar3 = piVar3 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FEQSDebugger::FEnvQueryInfo,FEQSDebugger::FEnvQueryInfo,int> @ 146f16c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ConstructItems<FEQSDebugger::FEnvQueryInfo,FEQSDebugger::FEnvQueryInfo,int>
          (void *param_1,FEnvQueryInfo *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  
  if (param_3 != 0) {
    pdVar4 = &param_2->Timestamp;
    pdVar3 = (double *)((longlong)param_1 + 0x10);
    do {
      pdVar3[-2] = *(double *)((longlong)pdVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pTVar1 = ((FSharedReferencer<1> *)(pdVar4 + -1))->ReferenceController;
      pdVar3[-1] = (double)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      dVar2 = *pdVar4;
      pdVar4 = pdVar4 + 3;
      *pdVar3 = dVar2;
      pdVar3 = pdVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FEnvQueryInstanceContextCacheItem,FEnvQueryInstanceContextCacheItem,int> @ 146f16ca0

void __cdecl
ConstructItems<FEnvQueryInstanceContextCacheItem,FEnvQueryInstanceContextCacheItem,int>
          (void *param_1,FEnvQueryInstanceContextCacheItem *param_2,int param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
      *(UClass **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FEnvQueryContextData::FEnvQueryContextData
                ((FEnvQueryContextData *)(lVar2 + 8 + (longlong)param_2),&param_2->ContextData);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FEnvQueryItemDetails,FEnvQueryItemDetails,int> @ 146f16d10

void __cdecl
ConstructItems<FEnvQueryItemDetails,FEnvQueryItemDetails,int>
          (void *param_1,FEnvQueryItemDetails *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    piVar4 = &(param_2->TestResults).ArrayNum;
    lVar5 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar4 + lVar5) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)piVar4 + lVar5);
      iVar2 = *piVar4;
      _Src = (((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->AllocatorInstance).Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      piVar3[1] = 0;
      piVar3[2] = 0;
      iVar2 = piVar4[4];
      _Src_00 = *(void **)(piVar4 + 2);
      piVar3[3] = iVar2;
      if (iVar2 == 0) {
        piVar3[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,(ForAnyElementType *)(piVar3 + 1),iVar2,piVar3 + 4);
        memcpy(((ForAnyElementType *)(piVar3 + 1))->Data,_Src_00,(longlong)iVar2 << 2);
      }
      piVar3[5] = piVar4[6];
      piVar3[6] = piVar4[7];
      FString::FString((FString *)(piVar3 + 7),(FString *)(piVar4 + 8));
      piVar3 = piVar3 + 0xe;
      piVar4 = piVar4 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FEnvQueryOptionInstance,FEnvQueryOptionInstance,int> @ 146f16e60

void __cdecl
ConstructItems<FEnvQueryOptionInstance,FEnvQueryOptionInstance,int>
          (void *param_1,FEnvQueryOptionInstance *param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  UClass *pUVar6;
  ForAnyElementType *pFVar7;
  TArray<TObjectPtr<UEnvQueryTest>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  if (param_3 != 0) {
    pFVar7 = (ForAnyElementType *)((longlong)param_1 + 8);
    pTVar8 = &param_2->Tests;
    do {
      pUVar4 = *(UObject **)((longlong)(pTVar8 + -1) + 8);
      *(UObject **)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar8) = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pFVar7->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
      iVar3 = pTVar8->ArrayNum;
      pFVar5 = (pTVar8->AllocatorInstance).Data;
      *(int *)&pFVar7[1].Data = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar3,0,pFVar7,iVar3,piVar1);
        ConstructItems<TObjectPtr<UEnvQueryTest>,TObjectPtr<UEnvQueryTest>,int>
                  (pFVar7->Data,(TObjectPtr<UEnvQueryTest> *)pFVar5,iVar3);
      }
      *(int *)&pFVar7[2].Data = *(int *)(pTVar8 + 1);
      pUVar6 = (((TSubclassOf<UEnvQueryItemType> *)((longlong)(pTVar8 + 1) + 8))->Class).field0_0x0.
               DebugPtr;
      pFVar7[3].Data = (FScriptContainerElement *)pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      puVar2 = (uint *)(pTVar8 + 2);
      pTVar8 = pTVar8 + 3;
      *(uint *)&pFVar7[4].Data = *(uint *)&pFVar7[4].Data ^ (*(uint *)&pFVar7[4].Data ^ *puVar2) & 1
      ;
      pFVar7 = pFVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<EQSDebug::FItemData,EQSDebug::FItemData,int> @ 146f16f70

void __cdecl
ConstructItems<EQSDebug::FItemData,EQSDebug::FItemData,int>
          (void *param_1,FItemData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x30);
    piVar4 = &(param_2->TestScores).ArrayNum;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x30 - (longlong)param_2) + (longlong)piVar4),
                       (FString *)(piVar4 + -0xc));
      pFVar1 = (ForAnyElementType *)(piVar3 + -6);
      piVar3[-8] = piVar4[-8];
      piVar3[-7] = piVar4[-7];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar4[-4];
      _Src = *(void **)(piVar4 + -6);
      piVar3[-4] = iVar2;
      if (iVar2 == 0) {
        piVar3[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar3 + -3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      iVar2 = *piVar4;
      _Src_00 = (((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->AllocatorInstance).
                Data;
      *piVar3 = iVar2;
      if (iVar2 == 0) {
        piVar3[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,(ForAnyElementType *)(piVar3 + -2),iVar2,piVar3 + 1);
        memcpy(((ForAnyElementType *)(piVar3 + -2))->Data,_Src_00,(longlong)iVar2 << 2);
      }
      piVar4 = piVar4 + 0xe;
      piVar3 = piVar3 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FEnvQueryDebugProfileData::FOptionData,FEnvQueryDebugProfileData::FOptionData,int> @ 146f170b0

void __cdecl
ConstructItems<FEnvQueryDebugProfileData::FOptionData,FEnvQueryDebugProfileData::FOptionData,int>
          (void *param_1,FOptionData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x14);
    piVar4 = &(param_2->TestIndices).ArrayNum;
    do {
      iVar2 = piVar4[-10];
      pFVar1 = (ForAnyElementType *)(piVar3 + -3);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)piVar4 + (longlong)param_1 + (-0x28 - (longlong)param_2)) = iVar2;
      iVar2 = piVar4[-6];
      _Src = *(void **)(piVar4 + -8);
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
      }
      pFVar1 = (ForAnyElementType *)(piVar3 + 3);
      piVar3[1] = piVar4[-4];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar4;
      _Src_00 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->AllocatorInstance).Data
      ;
      piVar3[5] = iVar2;
      if (iVar2 == 0) {
        piVar3[6] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar3 + 6);
        memcpy(pFVar1->Data,_Src_00,(longlong)iVar2 << 2);
      }
      piVar3 = piVar3 + 0xc;
      piVar4 = piVar4 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FEnvQueryDebugProfileData::FOptionStat,FEnvQueryDebugProfileData::FOptionStat,int> @ 146f171e0

void __cdecl
ConstructItems<FEnvQueryDebugProfileData::FOptionStat,FEnvQueryDebugProfileData::FOptionStat,int>
          (void *param_1,FOptionStat *param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int *piVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar2 = (int *)((longlong)param_1 + 0xc);
    piVar3 = &param_2->NumRuns;
    do {
      piVar2[-3] = 0;
      piVar2[-2] = 0;
      iVar1 = piVar3[-2];
      _Src = (((FOptionStat *)(piVar3 + -4))->StepData).AllocatorInstance.Data;
      piVar2[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar1,0,(ForAnyElementType *)(piVar2 + -3),iVar1,piVar2);
        memcpy(((ForAnyElementType *)(piVar2 + -3))->Data,_Src,(longlong)iVar1 << 3);
      }
      iVar1 = *piVar3;
      piVar3 = piVar3 + 6;
      piVar2[1] = iVar1;
      piVar2 = piVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<EQSDebug::FTestData,EQSDebug::FTestData,int> @ 146f172b0

void __cdecl
ConstructItems<EQSDebug::FTestData,EQSDebug::FTestData,int>
          (void *param_1,FTestData *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->ShortName);
      FString::FString((FString *)(lVar1 + 0x10 + (longlong)param_2),&param_2->Detailed);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FDebugRenderSceneProxy::FText3d,FDebugRenderSceneProxy::FText3d,int> @ 146f17310

void __cdecl
ConstructItems<FDebugRenderSceneProxy::FText3d,FDebugRenderSceneProxy::FText3d,int>
          (void *param_1,FText3d *param_2,int param_3)

{
  undefined8 uVar1;
  FColor_u_0 *pFVar2;
  FColor_u_0 *pFVar3;
  
  if (param_3 != 0) {
    pFVar2 = (FColor_u_0 *)((longlong)param_1 + 0x28);
    pFVar3 = &(param_2->Color).field0_0x0;
    do {
      FString::FString((FString *)&pFVar2[-10]._s_0,
                       (FString *)
                       ((longlong)param_2 + (-0x28 - (longlong)param_1) + (longlong)pFVar2));
      uVar1 = *(undefined8 *)(pFVar3 + -4);
      *(undefined8 *)(pFVar2 + -6) = *(undefined8 *)(pFVar3 + -6);
      *(undefined8 *)(pFVar2 + -4) = uVar1;
      *(undefined8 *)(pFVar2 + -2) = *(undefined8 *)(pFVar3 + -2);
      *pFVar2 = *pFVar3;
      param_3 = param_3 + -1;
      pFVar2 = pFVar2 + 0xc;
      pFVar3 = pFVar3 + 0xc;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FEnvQueryInstance,1>,TSharedPtr<FEnvQueryInstance,1>,int> @ 146f17390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedPtr<FEnvQueryInstance,1>,TSharedPtr<FEnvQueryInstance,1>,int>
          (void *param_1,TSharedPtr<FEnvQueryInstance,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FEnvQueryInstance **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<EQSDebug::FDebugHelper,int> @ 146f173d0

void __cdecl DefaultConstructItems<EQSDebug::FDebugHelper,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)((longlong)param_1 + 0x1c);
    do {
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)(puVar2 + -7) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(puVar2 + -5) = uVar1;
      *(double *)(puVar2 + -3) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined8 *)(puVar2 + 3) = 0;
      *(undefined8 *)(puVar2 + 5) = 0;
      puVar2[-1] = 0;
      *puVar2 = 0xffffffff;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0xe;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FEQSDebugger::FEnvQueryInfo,int> @ 146f17420

void __cdecl DefaultConstructItems<FEQSDebugger::FEnvQueryInfo,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x18);
  }
  return;
}

// DefaultConstructItems<EQSDebug::FItemData,int> @ 146f17450

void __cdecl DefaultConstructItems<EQSDebug::FItemData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      lVar1 = lVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNavLocation,int> @ 146f17490

void __cdecl DefaultConstructItems<FNavLocation,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y = (double)uVar1;
    *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)param_1 + 8) = uVar1;
    *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(double *)((longlong)param_1 + 0x18) = 0.0;
    param_1 = (double *)((longlong)param_1 + 0x20);
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y = (double)uVar1;
  return;
}

// DefaultConstructItems<FEnvQueryDebugProfileData::FOptionData,int> @ 146f174d0

void __cdecl
DefaultConstructItems<FEnvQueryDebugProfileData::FOptionData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 1;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FEnvQueryDebugProfileData::FOptionStat,int> @ 146f17510

void __cdecl
DefaultConstructItems<FEnvQueryDebugProfileData::FOptionStat,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int> @ 146f17540

void __cdecl
DefaultConstructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<EQSDebug::FQueryData,int> @ 146f17570

void __cdecl DefaultConstructItems<EQSDebug::FQueryData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      lVar1 = lVar1 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRecastDebugPathfindingData,int> @ 146f175d0

void __cdecl DefaultConstructItems<FRecastDebugPathfindingData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined4 *)(lVar1 + 0x44) = 0xffffffff;
      *(undefined1 *)(lVar1 + 0x48) = 0;
      lVar1 = lVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDebugRenderSceneProxy::FSphere,int> @ 146f17630

void __cdecl DefaultConstructItems<FDebugRenderSceneProxy::FSphere,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x24);
    do {
      *puVar1 = 3;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FEnvQueryDebugProfileData::FStep,int> @ 146f17660

void __cdecl DefaultConstructItems<FEnvQueryDebugProfileData::FStep,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<EQSDebug::FTestData,int> @ 146f17690

void __cdecl DefaultConstructItems<EQSDebug::FTestData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDebugRenderSceneProxy::FText3d,int> @ 146f176c0

void __cdecl DefaultConstructItems<FDebugRenderSceneProxy::FText3d,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<EQSDebug::FDebugHelper,int> @ 146f177f0

void __cdecl DestructItems<EQSDebug::FDebugHelper,int>(FDebugHelper *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->AdditionalInformation;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FEQSDebugger::FEnvQueryInfo,int> @ 146f17830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DestructItems<FEQSDebugger::FEnvQueryInfo,int>(FEnvQueryInfo *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Instance).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FEnvQueryInstance,int> @ 146f17870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DestructItems<FEnvQueryInstance,int>(FEnvQueryInstance *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->NamedParams).field_0x40;
    do {
      FEnvQueryInstance::DecStats((FEnvQueryInstance *)(puVar1 + -0x17));
      FEnvQueryDebugData::~FEnvQueryDebugData((FEnvQueryDebugData *)(puVar1 + 0x12));
      DestructItems<FEnvQueryItemDetails,int>
                ((FEnvQueryItemDetails *)puVar1[7],*(int *)(puVar1 + 8));
      if ((void *)puVar1[7] != (void *)0x0) {
        FMemory::Free((void *)puVar1[7]);
      }
      DestructItems<FEnvQueryOptionInstance,int>
                ((FEnvQueryOptionInstance *)puVar1[4],*(int *)(puVar1 + 5));
      if ((void *)puVar1[4] != (void *)0x0) {
        FMemory::Free((void *)puVar1[4]);
      }
      DestructItems<FEnvQueryInstanceContextCacheItem,int>
                ((FEnvQueryInstanceContextCacheItem *)puVar1[2],*(int *)(puVar1 + 3));
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar1 + -0xb));
      if ((void *)puVar1[-0xf] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xf]);
      }
      if ((void *)puVar1[-0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x14]);
      }
      if ((void *)puVar1[-0x17] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x17]);
      }
      puVar1 = puVar1 + 0x37;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FEnvQueryInstanceCache,int> @ 146f17990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DestructItems<FEnvQueryInstanceCache,int>(FEnvQueryInstanceCache *param_1,int param_2)

{
  FEnvQueryInstance *this;
  
  if (param_2 != 0) {
    this = &param_1->Instance;
    do {
      FEnvQueryInstance::~FEnvQueryInstance(this);
      this = (FEnvQueryInstance *)&this[1]._padding_;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FEnvQueryInstanceContextCacheItem,int> @ 146f179d0

void __cdecl
DestructItems<FEnvQueryInstanceContextCacheItem,int>
          (FEnvQueryInstanceContextCacheItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->ContextData).RawData;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FEnvQueryItemDetails,int> @ 146f17a10

void __cdecl DestructItems<FEnvQueryItemDetails,int>(FEnvQueryItemDetails *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->TestWeightedScores;
    do {
      pFVar1 = (((FString *)((longlong)(pTVar2 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FEnvQueryItemDetails *)(pTVar2 + -1))->TestResults).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FEnvQueryOptionInstance,int> @ 146f17a70

void __cdecl
DestructItems<FEnvQueryOptionInstance,int>(FEnvQueryOptionInstance *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TObjectPtr<UEnvQueryTest>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Tests;
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

// DestructItems<EQSDebug::FItemData,int> @ 146f17ab0

void __cdecl DestructItems<EQSDebug::FItemData,int>(FItemData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->TestValues;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FEnvQueryDebugProfileData::FOptionData,int> @ 146f17b10

void __cdecl
DestructItems<FEnvQueryDebugProfileData::FOptionData,int>(FOptionData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->GeneratorNames;
    do {
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 1) + 8))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
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

// DestructItems<FEnvQueryDebugProfileData::FOptionStat,int> @ 146f17b60

void __cdecl
DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>(FOptionStat *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->StepData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int> @ 146f17ba0

void __cdecl
DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>(FPoly *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Points).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<EQSDebug::FQueryData,int> @ 146f17be0

void __cdecl DestructItems<EQSDebug::FQueryData,int>(FQueryData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Options;
    do {
      pFVar1 = (((FString *)(pTVar2 + 2))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<EQSDebug::FDebugHelper,int>
                ((FDebugHelper *)
                 (((TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 AllocatorInstance).Data,
                 ((TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 ArrayNum);
      pFVar1 = (((TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FDebugRenderSceneProxy::FText3d,int>
                ((FText3d *)
                 (((TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *)
                  (pTVar2 + -2))->AllocatorInstance).Data,
                 ((TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *)
                 (pTVar2 + -2))->ArrayNum);
      pFVar1 = (((TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -2))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -3))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<EQSDebug::FTestData,int>
                ((FTestData *)
                 (((TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->
                 AllocatorInstance).Data,
                 ((TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->
                 ArrayNum);
      pFVar1 = (((TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<EQSDebug::FItemData,int>
                ((FItemData *)(((FQueryData *)(pTVar2 + -5))->Items).AllocatorInstance.Data,
                 (((FQueryData *)(pTVar2 + -5))->Items).ArrayNum);
      pFVar1 = (((FQueryData *)(pTVar2 + -5))->Items).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 8) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRecastDebugPathfindingData,int> @ 146f17cc0

void __cdecl
DestructItems<FRecastDebugPathfindingData,int>(FRecastDebugPathfindingData *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Nodes).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FRecastDebugPathfindingNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FRecastDebugPathfindingNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FRecastDebugPathfindingNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData,int> @ 146f17d20

void __cdecl
DestructItems<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,int>
          (FSortHelperForDebugData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->ItemDetails).TestWeightedScores;
    do {
      pFVar1 = (((FString *)((longlong)(pTVar2 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FEnvQueryItemDetails *)(pTVar2 + -1))->TestResults).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<EQSDebug::FTestData,int> @ 146f17d80

void __cdecl DestructItems<EQSDebug::FTestData,int>(FTestData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Detailed).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ShortName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FEnvQueryInstance,1>,int> @ 146f17dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FEnvQueryInstance,1>,int>
          (TSharedPtr<FEnvQueryInstance,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetDefault<UAISystem> @ 146f1ac60

UAISystem * __cdecl GetDefault<UAISystem>(void)

{
  UClass *this;
  
  this = Z_Construct_UClass_UAISystem_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UAISystem *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UAISystem *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetTypeName<AEQSTestingPawn> @ 146f1ae40

FString * __cdecl GetTypeName<AEQSTestingPawn>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AEQSTestingPawn::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<AVolume> @ 146f1ae80

FString * __cdecl GetTypeName<AVolume>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_AVolume_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValid<UBrainComponent> @ 146f1aec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrainComponent * __cdecl GetValid<UBrainComponent>(UBrainComponent *param_1)

{
  bool bVar1;
  UBrainComponent *pUVar2;
  
  if ((param_1 == (UBrainComponent *)0x0) ||
     (bVar1 = true, ((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    bVar1 = false;
  }
  pUVar2 = (UBrainComponent *)0x0;
  if (bVar1) {
    pUVar2 = param_1;
  }
  return pUVar2;
}

// HeapSortInternal<AActor_*,int,FIdentityFunctor,TDereferenceWrapper<AActor_*,TLess<void>_>_> @ 146f1aef0

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
HeapSortInternal<AActor_*,int,FIdentityFunctor,TDereferenceWrapper<AActor_*,TLess<void>_>_>
          (AActor **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<AActor_*,TLess<void>_> param_4)

{
  AActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TLess<void> *local_res20;
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
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<AActor_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<AActor_*,TLess<void>_>_>_>
            (param_1,param_2,param_3,(TDereferenceWrapper<AActor_*,TLess<void>_> *)&local_res20);
  iVar10 = param_2 + -1;
  lVar9 = (longlong)iVar10;
  if (0 < iVar10) {
    do {
      pAVar1 = *param_1;
      *param_1 = param_1[lVar9];
      param_1[lVar9] = pAVar1;
      iVar11 = 0;
      if (1 < iVar10) {
        do {
          iVar5 = iVar11 * 2;
          iVar8 = iVar5 + 1;
          if (iVar5 + 2 < iVar10) {
            pAVar1 = param_1[(longlong)iVar5 + 2];
            local_88 = (FName)param_1[iVar8]->_padding_;
            ::FName::ToString(&local_88,&local_58);
            local_80 = (FName)pAVar1->_padding_;
            ::FName::ToString(&local_80,&local_68);
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_58.Data.ArrayNum != 0) {
              FVar7.Data = local_58.Data.AllocatorInstance.Data;
            }
            FVar6.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar6.Data = local_68.Data.AllocatorInstance.Data;
            }
            iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (iVar4 < 0) {
              iVar8 = iVar5;
            }
            iVar8 = iVar8 + 1;
          }
          pAVar1 = param_1[iVar11];
          local_78 = (FName)param_1[iVar8]->_padding_;
          ::FName::ToString(&local_78,&local_38);
          local_70 = (FName)pAVar1->_padding_;
          ::FName::ToString(&local_70,&local_48);
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_38.Data.ArrayNum != 0) {
            FVar7.Data = local_38.Data.AllocatorInstance.Data;
          }
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_48.Data.ArrayNum != 0) {
            FVar6.Data = local_48.Data.AllocatorInstance.Data;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (-1 < iVar5) break;
          pAVar1 = param_1[iVar11];
          param_1[iVar11] = param_1[iVar8];
          param_1[iVar8] = pAVar1;
          iVar11 = iVar8;
        } while (iVar8 * 2 + 1 < iVar10);
      }
      iVar10 = iVar10 + -1;
      lVar9 = lVar9 + -1;
    } while (0 < lVar9);
  }
  return;
}

// HeapSortInternal<FEQSDebugger::FEnvQueryInfo,int,FIdentityFunctor,TDereferenceWrapper<FEQSDebugger::FEnvQueryInfo,`FGameplayDebuggerCategory_EQS::CollectData'::__l2::FEnvQuerySortNewFirst>_> @ 146f1b140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FEQSDebugger::FEnvQueryInfo,int,FIdentityFunctor,TDereferenceWrapper<FEQSDebugger::FEnvQueryInfo,_FGameplayDebuggerCategory_EQS::CollectData_::__l2::FEnvQuerySortNewFirst>_>
          (FEnvQueryInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FEQSDebugger::FEnvQueryInfo,_public:_virtual_void___cdecl_FGameplayDebuggerCategory_EQS::CollectData(APlayerController_*,AActor_*)_::_2_::FEnvQuerySortNewFirst>
          param_4)

{
  double dVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEnvQueryInstance *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FEnvQueryInfo *pFVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar12 = iVar8;
  iVar13 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_146f1b258:
      if (iVar13 == 0) {
        iVar8 = param_2 + -1;
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          pFVar9 = param_1 + lVar10;
          do {
            pTVar3 = (pFVar9->Instance).SharedReferenceCount.ReferenceController;
            dVar1 = param_1->Timestamp;
            pFVar4 = (param_1->Instance).Object;
            pTVar5 = (param_1->Instance).SharedReferenceCount.ReferenceController;
            (param_1->Instance).Object = (pFVar9->Instance).Object;
            (param_1->Instance).SharedReferenceCount.ReferenceController = pTVar3;
            param_1->Timestamp = pFVar9->Timestamp;
            (pFVar9->Instance).Object = pFVar4;
            (pFVar9->Instance).SharedReferenceCount.ReferenceController = pTVar5;
            pFVar9->Timestamp = dVar1;
            iVar12 = 0;
            if (1 < iVar8) {
              do {
                iVar13 = iVar12 * 2;
                iVar7 = iVar13 + 1;
                if (iVar13 + 2 < iVar8) {
                  if (param_1[iVar7].Timestamp <= param_1[(longlong)iVar13 + 2].Timestamp &&
                      param_1[(longlong)iVar13 + 2].Timestamp != param_1[iVar7].Timestamp) {
                    iVar7 = iVar13;
                  }
                  iVar7 = iVar7 + 1;
                }
                if (param_1[iVar12].Timestamp <= param_1[iVar7].Timestamp) break;
                pTVar3 = param_1[iVar7].Instance.SharedReferenceCount.ReferenceController;
                dVar1 = param_1[iVar12].Timestamp;
                pFVar4 = param_1[iVar12].Instance.Object;
                pTVar5 = param_1[iVar12].Instance.SharedReferenceCount.ReferenceController;
                param_1[iVar12].Instance.Object = param_1[iVar7].Instance.Object;
                param_1[iVar12].Instance.SharedReferenceCount.ReferenceController = pTVar3;
                param_1[iVar12].Timestamp = param_1[iVar7].Timestamp;
                param_1[iVar7].Instance.Object = pFVar4;
                param_1[iVar7].Instance.SharedReferenceCount.ReferenceController = pTVar5;
                param_1[iVar7].Timestamp = dVar1;
                iVar12 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar10 = lVar10 + -1;
            pFVar9 = pFVar9 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar7 = iVar13 + -1;
      iVar8 = iVar12 + -2;
      iVar12 = iVar8;
      iVar13 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar11 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      if (param_1[iVar11].Timestamp <= param_1[(longlong)iVar8 + 2].Timestamp &&
          param_1[(longlong)iVar8 + 2].Timestamp != param_1[iVar11].Timestamp) {
        iVar11 = iVar8;
      }
      iVar11 = iVar11 + 1;
    }
    if (param_1[iVar7].Timestamp <= param_1[iVar11].Timestamp) goto LAB_146f1b258;
    pTVar3 = param_1[iVar11].Instance.SharedReferenceCount.ReferenceController;
    iVar8 = iVar11 * 2 + 1;
    dVar1 = param_1[iVar7].Timestamp;
    pFVar4 = param_1[iVar7].Instance.Object;
    pTVar5 = param_1[iVar7].Instance.SharedReferenceCount.ReferenceController;
    param_1[iVar7].Instance.Object = param_1[iVar11].Instance.Object;
    param_1[iVar7].Instance.SharedReferenceCount.ReferenceController = pTVar3;
    param_1[iVar7].Timestamp = param_1[iVar11].Timestamp;
    param_1[iVar11].Instance.Object = pFVar4;
    param_1[iVar11].Instance.SharedReferenceCount.ReferenceController = pTVar5;
    param_1[iVar11].Timestamp = dVar1;
    iVar7 = iVar11;
  } while( true );
}

// HeapSortInternal<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData,int,FIdentityFunctor,TDereferenceWrapper<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData,TGreater<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData>_>_> @ 146f1b370

void __cdecl
AlgoImpl::
HeapSortInternal<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,int,FIdentityFunctor,TDereferenceWrapper<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,TGreater<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData>_>_>
          (FSortHelperForDebugData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData,TGreater<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData>_>
          param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FEnvQueryItem FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FEnvQueryItemDetails *pFVar13;
  FEnvQueryItemDetails *pFVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  char cVar27;
  int iVar28;
  int iVar29;
  char cVar30;
  longlong lVar31;
  int iVar32;
  FSortHelperForDebugData *pFVar33;
  TGreater<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData>
  *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar23) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,TGreater<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData,TGreater<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData>_>
              *)&local_res20);
  iVar26 = param_2 + -1;
  lVar31 = (longlong)iVar26;
  if (0 < iVar26) {
    pFVar33 = param_1 + lVar31;
    do {
      pFVar8 = (pFVar33->ItemDetails).TestResults.AllocatorInstance.Data;
      FVar9 = param_1->Item;
      pFVar10 = (param_1->ItemDetails).TestResults.AllocatorInstance.Data;
      iVar28 = (param_1->ItemDetails).TestResults.ArrayNum;
      iVar29 = (param_1->ItemDetails).TestResults.ArrayMax;
      pFVar11 = (param_1->ItemDetails).TestWeightedScores.AllocatorInstance.Data;
      iVar15 = (param_1->ItemDetails).TestWeightedScores.ArrayNum;
      iVar16 = (param_1->ItemDetails).TestWeightedScores.ArrayMax;
      iVar17 = (param_1->ItemDetails).FailedTestIndex;
      iVar18 = (param_1->ItemDetails).ItemIndex;
      pFVar12 = (param_1->ItemDetails).FailedDescription.Data.AllocatorInstance.Data;
      iVar19 = (param_1->ItemDetails).FailedDescription.Data.ArrayNum;
      iVar20 = (param_1->ItemDetails).FailedDescription.Data.ArrayMax;
      param_1->Item = pFVar33->Item;
      (param_1->ItemDetails).TestResults.AllocatorInstance.Data = pFVar8;
      iVar32 = (pFVar33->ItemDetails).TestResults.ArrayMax;
      pFVar8 = (pFVar33->ItemDetails).TestWeightedScores.AllocatorInstance.Data;
      (param_1->ItemDetails).TestResults.ArrayNum = (pFVar33->ItemDetails).TestResults.ArrayNum;
      (param_1->ItemDetails).TestResults.ArrayMax = iVar32;
      (param_1->ItemDetails).TestWeightedScores.AllocatorInstance.Data = pFVar8;
      iVar32 = (pFVar33->ItemDetails).TestWeightedScores.ArrayMax;
      iVar25 = (pFVar33->ItemDetails).FailedTestIndex;
      iVar7 = (pFVar33->ItemDetails).ItemIndex;
      (param_1->ItemDetails).TestWeightedScores.ArrayNum =
           (pFVar33->ItemDetails).TestWeightedScores.ArrayNum;
      (param_1->ItemDetails).TestWeightedScores.ArrayMax = iVar32;
      (param_1->ItemDetails).FailedTestIndex = iVar25;
      (param_1->ItemDetails).ItemIndex = iVar7;
      iVar32 = (pFVar33->ItemDetails).FailedDescription.Data.ArrayNum;
      iVar25 = (pFVar33->ItemDetails).FailedDescription.Data.ArrayMax;
      (param_1->ItemDetails).FailedDescription.Data.AllocatorInstance.Data =
           (pFVar33->ItemDetails).FailedDescription.Data.AllocatorInstance.Data;
      (param_1->ItemDetails).FailedDescription.Data.ArrayNum = iVar32;
      (param_1->ItemDetails).FailedDescription.Data.ArrayMax = iVar25;
      pFVar33->Item = FVar9;
      (pFVar33->ItemDetails).TestResults.AllocatorInstance.Data = pFVar10;
      (pFVar33->ItemDetails).TestResults.ArrayNum = iVar28;
      (pFVar33->ItemDetails).TestResults.ArrayMax = iVar29;
      (pFVar33->ItemDetails).TestWeightedScores.AllocatorInstance.Data = pFVar11;
      (pFVar33->ItemDetails).TestWeightedScores.ArrayNum = iVar15;
      (pFVar33->ItemDetails).TestWeightedScores.ArrayMax = iVar16;
      (pFVar33->ItemDetails).FailedTestIndex = iVar17;
      (pFVar33->ItemDetails).ItemIndex = iVar18;
      (pFVar33->ItemDetails).FailedDescription.Data.AllocatorInstance.Data = pFVar12;
      (pFVar33->ItemDetails).FailedDescription.Data.ArrayNum = iVar19;
      (pFVar33->ItemDetails).FailedDescription.Data.ArrayMax = iVar20;
      iVar32 = 0;
      if (1 < iVar26) {
        do {
          iVar7 = iVar32 * 2;
          iVar25 = iVar7 + 1;
          if (iVar7 + 2 < iVar26) {
            lVar1 = (longlong)iVar7 + 1;
            lVar24 = (longlong)iVar7 + 2;
            iVar28 = param_1[lVar1].Item.DataOffset;
            if ((iVar28 < 0) || ((BADTYPE)param_1[lVar1].Item.bIsDiscarded)) {
              cVar27 = '\0';
            }
            else {
              cVar27 = '\x01';
            }
            iVar29 = param_1[lVar24].Item.DataOffset;
            if ((iVar29 < 0) || ((BADTYPE)param_1[lVar24].Item.bIsDiscarded)) {
              cVar30 = '\0';
            }
            else {
              cVar30 = '\x01';
            }
            if (cVar27 == cVar30) {
              fVar4 = param_1[lVar24].Item.Score;
              fVar5 = param_1[lVar1].Item.Score;
              if (fVar5 == fVar4) {
                bVar23 = param_1[lVar1].Item.DataOffset < iVar29;
              }
              else {
                bVar23 = fVar5 < fVar4;
              }
            }
            else if ((iVar28 < 0) || ((BADTYPE)param_1[lVar1].Item.bIsDiscarded)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if (bVar23) {
              iVar25 = iVar7;
            }
            iVar25 = iVar25 + 1;
          }
          iVar7 = param_1[iVar25].Item.DataOffset;
          if ((iVar7 < 0) || ((BADTYPE)param_1[iVar25].Item.bIsDiscarded)) {
            cVar27 = '\0';
          }
          else {
            cVar27 = '\x01';
          }
          iVar28 = param_1[iVar32].Item.DataOffset;
          if ((iVar28 < 0) || ((BADTYPE)param_1[iVar32].Item.bIsDiscarded)) {
            cVar30 = '\0';
          }
          else {
            cVar30 = '\x01';
          }
          if (cVar27 == cVar30) {
            fVar4 = param_1[iVar32].Item.Score;
            fVar5 = param_1[iVar25].Item.Score;
            if (fVar5 == fVar4) {
              bVar23 = param_1[iVar25].Item.DataOffset < iVar28;
            }
            else {
              bVar23 = fVar5 < fVar4;
            }
          }
          else if ((iVar7 < 0) || ((BADTYPE)param_1[iVar25].Item.bIsDiscarded)) {
            bVar23 = true;
          }
          else {
            bVar23 = false;
          }
          if (!bVar23) break;
          pFVar8 = param_1[iVar25].ItemDetails.TestResults.AllocatorInstance.Data;
          FVar9 = param_1[iVar32].Item;
          pFVar10 = param_1[iVar32].ItemDetails.TestResults.AllocatorInstance.Data;
          pFVar13 = &param_1[iVar32].ItemDetails;
          iVar15 = (pFVar13->TestResults).ArrayNum;
          iVar16 = (pFVar13->TestResults).ArrayMax;
          pFVar11 = (pFVar13->TestWeightedScores).AllocatorInstance.Data;
          pFVar13 = &param_1[iVar32].ItemDetails;
          iVar17 = (pFVar13->TestWeightedScores).ArrayNum;
          iVar18 = (pFVar13->TestWeightedScores).ArrayMax;
          iVar19 = pFVar13->FailedTestIndex;
          iVar20 = pFVar13->ItemIndex;
          pFVar13 = &param_1[iVar32].ItemDetails;
          pFVar12 = (pFVar13->FailedDescription).Data.AllocatorInstance.Data;
          iVar21 = (pFVar13->FailedDescription).Data.ArrayNum;
          iVar22 = (pFVar13->FailedDescription).Data.ArrayMax;
          param_1[iVar32].Item = param_1[iVar25].Item;
          param_1[iVar32].ItemDetails.TestResults.AllocatorInstance.Data = pFVar8;
          pFVar13 = &param_1[iVar25].ItemDetails;
          iVar7 = (pFVar13->TestResults).ArrayMax;
          pFVar8 = (pFVar13->TestWeightedScores).AllocatorInstance.Data;
          pFVar14 = &param_1[iVar32].ItemDetails;
          (pFVar14->TestResults).ArrayNum = (pFVar13->TestResults).ArrayNum;
          (pFVar14->TestResults).ArrayMax = iVar7;
          (pFVar14->TestWeightedScores).AllocatorInstance.Data = pFVar8;
          pFVar13 = &param_1[iVar25].ItemDetails;
          iVar7 = (pFVar13->TestWeightedScores).ArrayMax;
          iVar28 = pFVar13->FailedTestIndex;
          iVar29 = pFVar13->ItemIndex;
          pFVar14 = &param_1[iVar32].ItemDetails;
          (pFVar14->TestWeightedScores).ArrayNum = (pFVar13->TestWeightedScores).ArrayNum;
          (pFVar14->TestWeightedScores).ArrayMax = iVar7;
          pFVar14->FailedTestIndex = iVar28;
          pFVar14->ItemIndex = iVar29;
          pFVar13 = &param_1[iVar25].ItemDetails;
          iVar7 = (pFVar13->FailedDescription).Data.ArrayNum;
          iVar28 = (pFVar13->FailedDescription).Data.ArrayMax;
          pFVar14 = &param_1[iVar32].ItemDetails;
          (pFVar14->FailedDescription).Data.AllocatorInstance.Data =
               (pFVar13->FailedDescription).Data.AllocatorInstance.Data;
          (pFVar14->FailedDescription).Data.ArrayNum = iVar7;
          (pFVar14->FailedDescription).Data.ArrayMax = iVar28;
          param_1[iVar25].Item = FVar9;
          param_1[iVar25].ItemDetails.TestResults.AllocatorInstance.Data = pFVar10;
          pFVar13 = &param_1[iVar25].ItemDetails;
          (pFVar13->TestResults).ArrayNum = iVar15;
          (pFVar13->TestResults).ArrayMax = iVar16;
          (pFVar13->TestWeightedScores).AllocatorInstance.Data = pFVar11;
          pFVar13 = &param_1[iVar25].ItemDetails;
          (pFVar13->TestWeightedScores).ArrayNum = iVar17;
          (pFVar13->TestWeightedScores).ArrayMax = iVar18;
          pFVar13->FailedTestIndex = iVar19;
          pFVar13->ItemIndex = iVar20;
          pFVar13 = &param_1[iVar25].ItemDetails;
          (pFVar13->FailedDescription).Data.AllocatorInstance.Data = pFVar12;
          (pFVar13->FailedDescription).Data.ArrayNum = iVar21;
          (pFVar13->FailedDescription).Data.ArrayMax = iVar22;
          iVar32 = iVar25;
        } while (iVar25 * 2 + 1 < iVar26);
      }
      iVar26 = iVar26 + -1;
      lVar31 = lVar31 + -1;
      pFVar33 = pFVar33 + -1;
    } while (0 < lVar31);
  }
  return;
}

// HeapifyInternal<AActor_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<AActor_*,TLess<void>_>_>_> @ 146f1b610

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
HeapifyInternal<AActor_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<AActor_*,TLess<void>_>_>_>
          (AActor **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<AActor_*,TLess<void>_>_> param_4)

{
  AActor *pAVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  int iVar10;
  int iVar11;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar7 = iVar5 * 2 + 1;
  iVar3 = iVar7;
  iVar11 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_146f1b800:
      if (iVar11 == 0) {
        return;
      }
      iVar5 = iVar11 + -1;
      iVar7 = iVar3 + -2;
      iVar3 = iVar7;
      iVar11 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar10 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      pAVar1 = param_1[(longlong)iVar7 + 2];
      local_88 = (FName)param_1[iVar10]->_padding_;
      ::FName::ToString(&local_88,&local_58);
      local_80 = (FName)pAVar1->_padding_;
      ::FName::ToString(&local_80,&local_68);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
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
    pAVar1 = param_1[iVar5];
    local_78 = (FName)param_1[iVar10]->_padding_;
    ::FName::ToString(&local_78,&local_38);
    local_70 = (FName)pAVar1->_padding_;
    ::FName::ToString(&local_70,&local_48);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar9.Data = local_38.Data.AllocatorInstance.Data;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,(wchar_t *)FVar9.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (-1 < iVar7) goto LAB_146f1b800;
    pAVar1 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar10];
    param_1[iVar10] = pAVar1;
    iVar7 = iVar10 * 2 + 1;
    iVar5 = iVar10;
  } while( true );
}

// HeapifyInternal<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData,TGreater<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData>_>_>_> @ 146f1b850

void __cdecl
AlgoImpl::
HeapifyInternal<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,TGreater<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData>_>_>_>
          (FSortHelperForDebugData *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData,TGreater<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData>_>_>
          param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FEnvQueryItem FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FEnvQueryItemDetails *pFVar13;
  FEnvQueryItemDetails *pFVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  char cVar29;
  int iVar30;
  int iVar31;
  char cVar32;
  int iVar33;
  
  if (param_2 < 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar25 = (param_2 + -2) / 2;
  iVar26 = iVar25 * 2 + 1;
  iVar7 = iVar26;
  iVar33 = iVar25;
  do {
    while (param_2 <= iVar26) {
LAB_146f1ba55:
      if (iVar33 == 0) {
        return;
      }
      iVar25 = iVar33 + -1;
      iVar26 = iVar7 + -2;
      iVar7 = iVar26;
      iVar33 = iVar25;
    }
    iVar26 = iVar25 * 2;
    iVar28 = iVar26 + 1;
    if (iVar26 + 2 < param_2) {
      lVar1 = (longlong)iVar26 + 1;
      lVar27 = (longlong)iVar26 + 2;
      iVar30 = param_1[lVar1].Item.DataOffset;
      if ((iVar30 < 0) || ((BADTYPE)param_1[lVar1].Item.bIsDiscarded)) {
        cVar29 = '\0';
      }
      else {
        cVar29 = '\x01';
      }
      iVar31 = param_1[lVar27].Item.DataOffset;
      if ((iVar31 < 0) || ((BADTYPE)param_1[lVar27].Item.bIsDiscarded)) {
        cVar32 = '\0';
      }
      else {
        cVar32 = '\x01';
      }
      if (cVar29 == cVar32) {
        fVar4 = param_1[lVar27].Item.Score;
        fVar5 = param_1[lVar1].Item.Score;
        if (fVar5 == fVar4) {
          bVar24 = param_1[lVar1].Item.DataOffset < iVar31;
        }
        else {
          bVar24 = fVar5 < fVar4;
        }
      }
      else if ((iVar30 < 0) || ((BADTYPE)param_1[lVar1].Item.bIsDiscarded)) {
        bVar24 = true;
      }
      else {
        bVar24 = false;
      }
      if (bVar24) {
        iVar28 = iVar26;
      }
      iVar28 = iVar28 + 1;
    }
    iVar26 = param_1[iVar28].Item.DataOffset;
    if ((iVar26 < 0) || ((BADTYPE)param_1[iVar28].Item.bIsDiscarded)) {
      cVar29 = '\0';
    }
    else {
      cVar29 = '\x01';
    }
    iVar30 = param_1[iVar25].Item.DataOffset;
    if ((iVar30 < 0) || ((BADTYPE)param_1[iVar25].Item.bIsDiscarded)) {
      cVar32 = '\0';
    }
    else {
      cVar32 = '\x01';
    }
    if (cVar29 == cVar32) {
      fVar4 = param_1[iVar25].Item.Score;
      fVar5 = param_1[iVar28].Item.Score;
      if (fVar5 == fVar4) {
        bVar24 = param_1[iVar28].Item.DataOffset < iVar30;
      }
      else {
        bVar24 = fVar5 < fVar4;
      }
    }
    else if ((iVar26 < 0) || ((BADTYPE)param_1[iVar28].Item.bIsDiscarded)) {
      bVar24 = true;
    }
    else {
      bVar24 = false;
    }
    if (!bVar24) goto LAB_146f1ba55;
    pFVar8 = param_1[iVar28].ItemDetails.TestResults.AllocatorInstance.Data;
    iVar26 = iVar28 * 2 + 1;
    FVar9 = param_1[iVar25].Item;
    pFVar10 = param_1[iVar25].ItemDetails.TestResults.AllocatorInstance.Data;
    pFVar13 = &param_1[iVar25].ItemDetails;
    iVar16 = (pFVar13->TestResults).ArrayNum;
    iVar17 = (pFVar13->TestResults).ArrayMax;
    pFVar11 = (pFVar13->TestWeightedScores).AllocatorInstance.Data;
    pFVar13 = &param_1[iVar25].ItemDetails;
    iVar18 = (pFVar13->TestWeightedScores).ArrayNum;
    iVar19 = (pFVar13->TestWeightedScores).ArrayMax;
    iVar20 = pFVar13->FailedTestIndex;
    iVar21 = pFVar13->ItemIndex;
    pFVar13 = &param_1[iVar25].ItemDetails;
    pFVar12 = (pFVar13->FailedDescription).Data.AllocatorInstance.Data;
    iVar22 = (pFVar13->FailedDescription).Data.ArrayNum;
    iVar23 = (pFVar13->FailedDescription).Data.ArrayMax;
    param_1[iVar25].Item = param_1[iVar28].Item;
    param_1[iVar25].ItemDetails.TestResults.AllocatorInstance.Data = pFVar8;
    pFVar13 = &param_1[iVar28].ItemDetails;
    iVar30 = (pFVar13->TestResults).ArrayMax;
    pFVar8 = (pFVar13->TestWeightedScores).AllocatorInstance.Data;
    pFVar14 = &param_1[iVar25].ItemDetails;
    (pFVar14->TestResults).ArrayNum = (pFVar13->TestResults).ArrayNum;
    (pFVar14->TestResults).ArrayMax = iVar30;
    (pFVar14->TestWeightedScores).AllocatorInstance.Data = pFVar8;
    pFVar13 = &param_1[iVar28].ItemDetails;
    iVar30 = (pFVar13->TestWeightedScores).ArrayMax;
    iVar31 = pFVar13->FailedTestIndex;
    iVar15 = pFVar13->ItemIndex;
    pFVar14 = &param_1[iVar25].ItemDetails;
    (pFVar14->TestWeightedScores).ArrayNum = (pFVar13->TestWeightedScores).ArrayNum;
    (pFVar14->TestWeightedScores).ArrayMax = iVar30;
    pFVar14->FailedTestIndex = iVar31;
    pFVar14->ItemIndex = iVar15;
    pFVar13 = &param_1[iVar28].ItemDetails;
    iVar30 = (pFVar13->FailedDescription).Data.ArrayNum;
    iVar31 = (pFVar13->FailedDescription).Data.ArrayMax;
    pFVar14 = &param_1[iVar25].ItemDetails;
    (pFVar14->FailedDescription).Data.AllocatorInstance.Data =
         (pFVar13->FailedDescription).Data.AllocatorInstance.Data;
    (pFVar14->FailedDescription).Data.ArrayNum = iVar30;
    (pFVar14->FailedDescription).Data.ArrayMax = iVar31;
    param_1[iVar28].Item = FVar9;
    param_1[iVar28].ItemDetails.TestResults.AllocatorInstance.Data = pFVar10;
    pFVar13 = &param_1[iVar28].ItemDetails;
    (pFVar13->TestResults).ArrayNum = iVar16;
    (pFVar13->TestResults).ArrayMax = iVar17;
    (pFVar13->TestWeightedScores).AllocatorInstance.Data = pFVar11;
    pFVar13 = &param_1[iVar28].ItemDetails;
    (pFVar13->TestWeightedScores).ArrayNum = iVar18;
    (pFVar13->TestWeightedScores).ArrayMax = iVar19;
    pFVar13->FailedTestIndex = iVar20;
    pFVar13->ItemIndex = iVar21;
    pFVar13 = &param_1[iVar28].ItemDetails;
    (pFVar13->FailedDescription).Data.AllocatorInstance.Data = pFVar12;
    (pFVar13->FailedDescription).Data.ArrayNum = iVar22;
    (pFVar13->FailedDescription).Data.ArrayMax = iVar23;
    iVar25 = iVar28;
  } while( true );
}

// InternalConstructor<ADetourCrowdAIController> @ 146f1ba90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<ADetourCrowdAIController>(FObjectInitializer *param_1)

{
  AAIController *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FName local_res8;
  
  this = (AAIController *)param_1->Obj;
  if (this != (AAIController *)0x0) {
    pFVar2 = FName::FName(&local_res8,L"PathFollowingComponent");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UCrowdFollowingComponent_NoRegister();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar3,(TArrayView<FName_const_,int> *)0x0);
    AAIController::AAIController(this,param_1);
    this->_padding_ = (longlong)&ADetourCrowdAIController::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ADetourCrowdAIController::_vftable__for__INavAgentInterface__;
    this->_padding_ =
         (longlong)&ADetourCrowdAIController::_vftable__for__IAIPerceptionListenerInterface__;
    this->_padding_ =
         (longlong)&ADetourCrowdAIController::_vftable__for__IGameplayTaskOwnerInterface__;
    this->_padding_ =
         (longlong)&ADetourCrowdAIController::_vftable__for__IGenericTeamAgentInterface__;
    this->_padding_ =
         (longlong)&ADetourCrowdAIController::_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  }
  return;
}

// InternalConstructor<AEQSTestingPawn> @ 146f1bb70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<AEQSTestingPawn>(FObjectInitializer *param_1)

{
  undefined1 *this;
  ACharacter *this_00;
  longlong lVar1;
  UCapsuleComponent *pUVar2;
  UCharacterMovementComponent *pUVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  this_00 = (ACharacter *)param_1->Obj;
  if (this_00 != (ACharacter *)0x0) {
    ACharacter::ACharacter(this_00,param_1);
    *(undefined4 *)&this_00[1].field_0x28 = 0xbf800000;
    this = &this_00[1].field_0x40;
    *(undefined8 *)(this_00 + 1) = 0;
    *this = *this & 0xe0;
    *(undefined ***)this_00 = &AEQSTestingPawn::_vftable__for__AActor__;
    *(undefined ***)&this_00->field_0x2c0 = &AEQSTestingPawn::_vftable__for__INavAgentInterface__;
    *(undefined ***)&this_00->field_0x678 = &___7AEQSTestingPawn__6B_;
    *(undefined8 *)&this_00[1].field_0x8 = 0;
    *(undefined8 *)&this_00[1].field_0x10 = 0;
    *(uint *)&this_00[1].field_0x34 = *(uint *)&this_00[1].field_0x34 & 0xffffffdf | 7;
    pvVar4 = ThreadLocalStoragePointer;
    *(undefined8 *)&this_00[1].field_0x18 = 0;
    *(undefined8 *)&this_00[1].field_0x20 = 0;
    *(undefined4 *)&this_00[1].field_0x2c = 0;
    *(undefined8 *)&this_00[1].field_0x58 = 0;
    *(undefined8 *)&this_00[1].field_0x60 = 0;
    *(undefined8 *)&this_00[1].field_0x68 = 0;
    *(undefined8 *)&this_00[1].field_0x70 = 0;
    *(undefined8 *)&this_00[1].field_0x78 = 0;
    *(undefined8 *)&this_00[1].field_0x80 = 0;
    *(undefined8 *)&this_00[1].field_0x88 = 0;
    *(undefined8 *)&this_00[1].field_0x90 = 0;
    uVar5 = (ulonglong)_tls_index;
    this_00[1].field_0x38 = 3;
    *(undefined4 *)&this_00[1].field_0x44 = 0xbf800000;
    *(undefined4 *)&this_00[1].field_0x48 = 0xbf800000;
    lVar1 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
    *(undefined4 *)&this_00[1].field_0x4c = 0xbf800000;
    *(undefined4 *)&this_00[1].field_0x50 = 0x3f000000;
    if (*(int *)(lVar1 + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FName::FName(&CollisionProfileName,L"NoCollision");
        _Init_thread_footer(&_TSS0);
      }
    }
    pUVar2 = (this_00->CapsuleComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x788))(pUVar2,CollisionProfileName,1);
    FNavAgentProperties::operator=
              ((FNavAgentProperties *)this,&FNavAgentProperties::DefaultProperties);
    this_00->field_0x32 = this_00->field_0x32 & 0xfd;
    this_00->field_0x32 = this_00->field_0x32 | 4;
    pUVar3 = (this_00->CharacterMovement).field0_0x0.DebugPtr;
    if (pUVar3 != (UCharacterMovementComponent *)0x0) {
      (pUVar3->DefaultLandMovementMode).Value = '\0';
    }
  }
  return;
}

// InternalConstructor<UAIBlueprintHelperLibrary> @ 146f1bd10

void __cdecl InternalConstructor<UAIBlueprintHelperLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAIBlueprintHelperLibrary__6B_;
  }
  return;
}

// InternalConstructor<UAIDataProvider> @ 146f1bd40

void __cdecl InternalConstructor<UAIDataProvider>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAIDataProvider__6B_;
  }
  return;
}

// InternalConstructor<UAIDataProvider_QueryParams> @ 146f1bd70

void __cdecl InternalConstructor<UAIDataProvider_QueryParams>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAIDataProvider_QueryParams__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAIDataProvider_Random> @ 146f1bdb0

void __cdecl InternalConstructor<UAIDataProvider_Random>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x1c = 0x3f800000;
    this[1].field_0x20 = this[1].field_0x20 & 0xfe;
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UAIDataProvider_Random__6B_;
    *(undefined4 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UBrainComponent> @ 146f1be00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UBrainComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UBrainComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UBrainComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UBrainComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UBrainComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FAIResourceLock::FAIResourceLock((FAIResourceLock *)&this[1].PrimaryComponentTick);
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    plVar2 = &this[1].PrimaryComponentTick._padding_;
    *(uint *)plVar2 = (uint)*plVar2 & 0xfffffffe;
  }
  return;
}

// InternalConstructor<UEQSRenderingComponent> @ 146f1bea0

void __cdecl InternalConstructor<UEQSRenderingComponent>(FObjectInitializer *param_1)

{
  UDebugDrawComponent *this;
  
  this = (UDebugDrawComponent *)param_1->Obj;
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this->_padding_ = (longlong)&UEQSRenderingComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UEQSRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UEQSRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UEQSRenderingComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UEQSRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UEQSRenderingComponent::_vftable__for__IPhysicsComponent__;
    FString::FString((FString *)(this + 1),"GameplayDebug");
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 1;
    FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
              ((FDebugDrawDelegateHelper *)&this[1]._padding_);
    this[1]._padding_ = (longlong)&___7FEQSRenderingDebugDrawDelegateHelper__6B_;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UEnvQuery> @ 146f1bf80

void __cdecl InternalConstructor<UEnvQuery>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQuery__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UEnvQueryContext> @ 146f1bfc0

void __cdecl InternalConstructor<UEnvQueryContext>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnvQueryContext__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryContext_BlueprintBase> @ 146f1bff0

void __cdecl InternalConstructor<UEnvQueryContext_BlueprintBase>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *pUVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FName *pFVar6;
  UFunction *pUVar7;
  FName local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UEnvQueryContext_BlueprintBase__6B_;
    pUVar5 = UEnvQueryContext_BlueprintBase::GetPrivateStaticClass();
    pFVar6 = FName::FName(&local_res8,0x12,L"ProvideSingleActor",FNAME_Add);
    pUVar7 = UClass::FindFunctionByName(*(UClass **)&this->field_0x10,*pFVar6,IncludeSuper);
    pUVar1 = (UClass *)pUVar7->_padding_;
    pFVar6 = FName::FName(&local_res8,0x15,L"ProvideSingleLocation",FNAME_Add);
    pUVar7 = UClass::FindFunctionByName(*(UClass **)&this->field_0x10,*pFVar6,IncludeSuper);
    pUVar2 = (UClass *)pUVar7->_padding_;
    pFVar6 = FName::FName(&local_res8,0x10,L"ProvideActorsSet",FNAME_Add);
    pUVar7 = UClass::FindFunctionByName(*(UClass **)&this->field_0x10,*pFVar6,IncludeSuper);
    pUVar3 = (UClass *)pUVar7->_padding_;
    pFVar6 = FName::FName(&local_res8,0x13,L"ProvideLocationsSet",FNAME_Add);
    pUVar7 = UClass::FindFunctionByName(*(UClass **)&this->field_0x10,*pFVar6,IncludeSuper);
    pUVar4 = (UClass *)pUVar7->_padding_;
    if (pUVar1 != pUVar5) {
      *(undefined4 *)(this + 1) = 1;
    }
    if (pUVar2 != pUVar5) {
      *(undefined4 *)(this + 1) = 2;
    }
    if (pUVar3 != pUVar5) {
      *(undefined4 *)(this + 1) = 3;
    }
    if (pUVar4 != pUVar5) {
      *(undefined4 *)(this + 1) = 4;
    }
  }
  return;
}

// InternalConstructor<UEnvQueryContext_Item> @ 146f1c160

void __cdecl InternalConstructor<UEnvQueryContext_Item>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnvQueryContext_Item__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryContext_NavigationData> @ 146f1c190

void __cdecl InternalConstructor<UEnvQueryContext_NavigationData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnvQueryContext_NavigationData__6B_;
    *(byte *)(this + 1) = *(byte *)(this + 1) & 0xe0;
    *(undefined4 *)&this[1].field_0x4 = 0xbf800000;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x8 = 0xbf800000;
    *(undefined4 *)&this[1].field_0xc = 0xbf800000;
    *(undefined4 *)&this[1].field_0x10 = 0x3f000000;
  }
  return;
}

// InternalConstructor<UEnvQueryContext_Querier> @ 146f1c200

void __cdecl InternalConstructor<UEnvQueryContext_Querier>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnvQueryContext_Querier__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryDebugHelpers> @ 146f1c230

void __cdecl InternalConstructor<UEnvQueryDebugHelpers>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnvQueryDebugHelpers__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator> @ 146f1c260

void __cdecl InternalConstructor<UEnvQueryGenerator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnvQueryGenerator__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x24 = 0;
    *(uint *)&this[1].field_0x20 = *(uint *)&this[1].field_0x20 & 0xfffffffd | 1;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_ActorsOfClass> @ 146f1c2b0

void __cdecl InternalConstructor<UEnvQueryGenerator_ActorsOfClass>(FObjectInitializer *param_1)

{
  UObject *this;
  FFieldClass *pFVar1;
  UClass *pUVar2;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(uint *)&this[1].field_0x20 = *(uint *)&this[1].field_0x20 & 0xfffffffd | 1;
    *(undefined ***)this = &___7UEnvQueryGenerator_ActorsOfClass__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x24 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined ***)&this[2].field_0x8 = &___7FAIDataProviderBoolValue__6B_;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    this[3].field_0x10 = 0;
    pFVar1 = FBoolProperty::StaticClass();
    *(FFieldClass **)&this[3].field_0x8 = pFVar1;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined ***)&this[3].field_0x18 = &___7FAIDataProviderFloatValue__6B_;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
    pFVar1 = FFloatProperty::StaticClass();
    *(FFieldClass **)&this[4].field_0x18 = pFVar1;
    *(undefined8 *)(this + 5) = 0;
    pUVar2 = UEnvQueryItemType_Actor::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(UClass **)&this[1].field_0x18 = pUVar2;
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(UClass **)(this + 2) = pUVar2;
    this[3].field_0x10 = 1;
    *(undefined4 *)&this[4].field_0x20 = 0x43fa0000;
    pUVar2 = UEnvQueryContext_Querier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(UClass **)(this + 5) = pUVar2;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_BlueprintBase> @ 146f1c410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UEnvQueryGenerator_BlueprintBase>(FObjectInitializer *param_1)

{
  if ((UEnvQueryGenerator_BlueprintBase *)param_1->Obj != (UEnvQueryGenerator_BlueprintBase *)0x0) {
    UEnvQueryGenerator_BlueprintBase::UEnvQueryGenerator_BlueprintBase
              ((UEnvQueryGenerator_BlueprintBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_Composite> @ 146f1c430

void __cdecl InternalConstructor<UEnvQueryGenerator_Composite>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *pUVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(uint *)&this[1].field_0x20 = *(uint *)&this[1].field_0x20 & 0xfffffffd | 1;
    *(undefined ***)this = &___7UEnvQueryGenerator_Composite__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x24 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    pUVar1 = UEnvQueryItemType_Point::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this[1].field_0x18 = pUVar1;
    *(uint *)&this[2].field_0x10 = *(uint *)&this[2].field_0x10 | 2;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_Cone> @ 146f1c4c0

void __cdecl InternalConstructor<UEnvQueryGenerator_Cone>(FObjectInitializer *param_1)

{
  UEnvQueryGenerator_ProjectedPoints *this;
  FFieldClass *pFVar1;
  UClass *pUVar2;
  
  this = (UEnvQueryGenerator_ProjectedPoints *)param_1->Obj;
  if (this != (UEnvQueryGenerator_ProjectedPoints *)0x0) {
    UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryGenerator_Cone__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar1 = FFloatProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar1;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].ProjectionData = 0;
    this[1].ProjectionData.NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].ProjectionData.ProjectDown = 0.0;
    this[1].ProjectionData.ProjectUp = 0.0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    this[1].ProjectionData.ExtentX = 0.0;
    pFVar1 = FFloatProperty::StaticClass();
    *(FFieldClass **)&this[1].ProjectionData.ProjectDown = pFVar1;
    *(undefined8 *)&this[1].ProjectionData.TraceProfileName.Number = 0;
    *(undefined8 *)&this[1].ProjectionData.field_0x38 = 0;
    this[1].NavDataOverrideContext.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[1].ProjectionData.TraceChannel = '\0';
    this[1].ProjectionData.SerializedChannel = '\0';
    *(undefined2 *)&this[1].ProjectionData.field_0x2a = 0;
    this[1].ProjectionData.TraceProfileName.ComparisonIndex = 0;
    *(undefined ***)&this[1].ProjectionData.ExtentZ = &___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[2]._padding_ = 0;
    pFVar1 = FFloatProperty::StaticClass();
    this[2]._padding_ = (longlong)pFVar1;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[2]._padding_ = 0;
    pFVar1 = FFloatProperty::StaticClass();
    this[2]._padding_ = (longlong)pFVar1;
    this[2]._padding_ = 0;
    pUVar2 = UEnvQueryContext_Querier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    this[2]._padding_ = (longlong)pUVar2;
    *(byte *)&this[2].ProjectionData.VersionNum = (byte)this[2].ProjectionData.VersionNum & 0xfe;
    *(undefined4 *)&this[1]._padding_ = 0x42c80000;
    this[1].ProjectionData.ExtentX = 90.0;
    *(undefined4 *)&this[2]._padding_ = 0x41200000;
    *(undefined4 *)&this[2]._padding_ = 0x447a0000;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_CurrentLocation> @ 146f1c660

void __cdecl InternalConstructor<UEnvQueryGenerator_CurrentLocation>(FObjectInitializer *param_1)

{
  UEnvQueryGenerator_ProjectedPoints *this;
  UClass *pUVar1;
  
  this = (UEnvQueryGenerator_ProjectedPoints *)param_1->Obj;
  if (this != (UEnvQueryGenerator_ProjectedPoints *)0x0) {
    UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryGenerator_CurrentLocation__6B_;
    this[1]._padding_ = 0;
    pUVar1 = UEnvQueryContext_Querier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this[1]._padding_ = (longlong)pUVar1;
    pUVar1 = UEnvQueryItemType_Point::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this->_padding_ = (longlong)pUVar1;
    (this->ProjectionData).TraceMode.Value = '\0';
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_Donut> @ 146f1c700

void __cdecl InternalConstructor<UEnvQueryGenerator_Donut>(FObjectInitializer *param_1)

{
  if ((UEnvQueryGenerator_Donut *)param_1->Obj != (UEnvQueryGenerator_Donut *)0x0) {
    UEnvQueryGenerator_Donut::UEnvQueryGenerator_Donut
              ((UEnvQueryGenerator_Donut *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_OnCircle> @ 146f1c720

void __cdecl InternalConstructor<UEnvQueryGenerator_OnCircle>(FObjectInitializer *param_1)

{
  if ((UEnvQueryGenerator_OnCircle *)param_1->Obj != (UEnvQueryGenerator_OnCircle *)0x0) {
    UEnvQueryGenerator_OnCircle::UEnvQueryGenerator_OnCircle
              ((UEnvQueryGenerator_OnCircle *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_PathingGrid> @ 146f1c740

void __cdecl InternalConstructor<UEnvQueryGenerator_PathingGrid>(FObjectInitializer *param_1)

{
  UEnvQueryGenerator_SimpleGrid *this;
  longlong lVar1;
  FFieldClass *pFVar2;
  
  this = (UEnvQueryGenerator_SimpleGrid *)param_1->Obj;
  if (this != (UEnvQueryGenerator_SimpleGrid *)0x0) {
    UEnvQueryGenerator_SimpleGrid::UEnvQueryGenerator_SimpleGrid(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryGenerator_PathingGrid__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    pFVar2 = FBoolProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar2 = FFloatProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar2;
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
    *(uint *)&this->_padding_ = (uint)lVar1 & 0xffffffe7 | 4;
    (this->GridSize).DefaultValue = 1000.0;
    (this->SpaceBetween).DefaultValue = 100.0;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)&this[1]._padding_ = 0x3fc00000;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_PerceivedActors> @ 146f1c850

void __cdecl InternalConstructor<UEnvQueryGenerator_PerceivedActors>(FObjectInitializer *param_1)

{
  UObject *this;
  FFieldClass *pFVar1;
  UClass *pUVar2;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(uint *)&this[1].field_0x20 = *(uint *)&this[1].field_0x20 & 0xfffffffd | 1;
    *(undefined ***)this = &___7UEnvQueryGenerator_PerceivedActors__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x24 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined ***)&this[2].field_0x8 = &___7FAIDataProviderFloatValue__6B_;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    pFVar1 = FFloatProperty::StaticClass();
    *(FFieldClass **)&this[3].field_0x8 = pFVar1;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined1 *)(this + 4) = 1;
    pUVar2 = UEnvQueryItemType_Actor::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(UClass **)&this[1].field_0x18 = pUVar2;
    *(undefined4 *)&this[3].field_0x10 = 0xbf800000;
    pUVar2 = UEnvQueryContext_Querier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(UClass **)&this[3].field_0x18 = pUVar2;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_ProjectedPoints> @ 146f1c950

void __cdecl InternalConstructor<UEnvQueryGenerator_ProjectedPoints>(FObjectInitializer *param_1)

{
  if ((UEnvQueryGenerator_ProjectedPoints *)param_1->Obj !=
      (UEnvQueryGenerator_ProjectedPoints *)0x0) {
    UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
              ((UEnvQueryGenerator_ProjectedPoints *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryGenerator_SimpleGrid> @ 146f1c970

void __cdecl InternalConstructor<UEnvQueryGenerator_SimpleGrid>(FObjectInitializer *param_1)

{
  if ((UEnvQueryGenerator_SimpleGrid *)param_1->Obj != (UEnvQueryGenerator_SimpleGrid *)0x0) {
    UEnvQueryGenerator_SimpleGrid::UEnvQueryGenerator_SimpleGrid
              ((UEnvQueryGenerator_SimpleGrid *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryInstanceBlueprintWrapper> @ 146f1c990

void __cdecl InternalConstructor<UEnvQueryInstanceBlueprintWrapper>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x8 = 0xffffffff;
    *(undefined ***)this = &UEnvQueryInstanceBlueprintWrapper::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UEnvQueryInstanceBlueprintWrapper::_vftable__for__IEQSQueryResultSourceInterface__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UEnvQueryItemType> @ 146f1ca00

void __cdecl InternalConstructor<UEnvQueryItemType>(FObjectInitializer *param_1)

{
  if ((UEnvQueryItemType *)param_1->Obj != (UEnvQueryItemType *)0x0) {
    UEnvQueryItemType::UEnvQueryItemType((UEnvQueryItemType *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryItemType_Actor> @ 146f1ca20

void __cdecl InternalConstructor<UEnvQueryItemType_Actor>(FObjectInitializer *param_1)

{
  UEnvQueryItemType *this;
  
  this = (UEnvQueryItemType *)param_1->Obj;
  if (this != (UEnvQueryItemType *)0x0) {
    UEnvQueryItemType::UEnvQueryItemType(this,param_1);
    this->ValueSize = 8;
    this->_padding_ = (longlong)&___7UEnvQueryItemType_Actor__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryItemType_ActorBase> @ 146f1ca60

void __cdecl InternalConstructor<UEnvQueryItemType_ActorBase>(FObjectInitializer *param_1)

{
  UEnvQueryItemType *this;
  
  this = (UEnvQueryItemType *)param_1->Obj;
  if (this != (UEnvQueryItemType *)0x0) {
    UEnvQueryItemType::UEnvQueryItemType(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryItemType_ActorBase__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryItemType_Direction> @ 146f1ca90

void __cdecl InternalConstructor<UEnvQueryItemType_Direction>(FObjectInitializer *param_1)

{
  UEnvQueryItemType *this;
  
  this = (UEnvQueryItemType *)param_1->Obj;
  if (this != (UEnvQueryItemType *)0x0) {
    UEnvQueryItemType::UEnvQueryItemType(this,param_1);
    this->ValueSize = 0x18;
    this->_padding_ = (longlong)&___7UEnvQueryItemType_Direction__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryItemType_Point> @ 146f1cad0

void __cdecl InternalConstructor<UEnvQueryItemType_Point>(FObjectInitializer *param_1)

{
  UEnvQueryItemType *this;
  
  this = (UEnvQueryItemType *)param_1->Obj;
  if (this != (UEnvQueryItemType *)0x0) {
    UEnvQueryItemType::UEnvQueryItemType(this,param_1);
    this->ValueSize = 0x20;
    this->_padding_ = (longlong)&___7UEnvQueryItemType_Point__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryItemType_VectorBase> @ 146f1cb10

void __cdecl InternalConstructor<UEnvQueryItemType_VectorBase>(FObjectInitializer *param_1)

{
  UEnvQueryItemType *this;
  
  this = (UEnvQueryItemType *)param_1->Obj;
  if (this != (UEnvQueryItemType *)0x0) {
    UEnvQueryItemType::UEnvQueryItemType(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryItemType_VectorBase__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryManager> @ 146f1cb40

void __cdecl InternalConstructor<UEnvQueryManager>(FObjectInitializer *param_1)

{
  if ((UEnvQueryManager *)param_1->Obj != (UEnvQueryManager *)0x0) {
    UEnvQueryManager::UEnvQueryManager((UEnvQueryManager *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryNode> @ 146f1cb60

void __cdecl InternalConstructor<UEnvQueryNode>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnvQueryNode__6B_;
  }
  return;
}

// InternalConstructor<UEnvQueryOption> @ 146f1cb90

void __cdecl InternalConstructor<UEnvQueryOption>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnvQueryOption__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UEnvQueryTest> @ 146f1cbd0

void __cdecl InternalConstructor<UEnvQueryTest>(FObjectInitializer *param_1)

{
  if ((UEnvQueryTest *)param_1->Obj != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryTest_Distance> @ 146f1cbf0

void __cdecl InternalConstructor<UEnvQueryTest_Distance>(FObjectInitializer *param_1)

{
  UEnvQueryTest *this;
  UClass *pUVar1;
  
  this = (UEnvQueryTest *)param_1->Obj;
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Distance__6B_;
    this[1]._padding_ = 0;
    pUVar1 = UEnvQueryContext_Querier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this[1]._padding_ = (longlong)pUVar1;
    (this->Cost).Value = '\0';
    pUVar1 = UEnvQueryItemType_VectorBase::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ValidItemType).Class.field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// InternalConstructor<UEnvQueryTest_Dot> @ 146f1cc90

void __cdecl InternalConstructor<UEnvQueryTest_Dot>(FObjectInitializer *param_1)

{
  UEnvQueryTest *this;
  UClass *pUVar1;
  
  this = (UEnvQueryTest *)param_1->Obj;
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Dot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].TestOrder = 0;
    this[1].TestPurpose = '\0';
    *(undefined3 *)&this[1].field_0x35 = 0;
    *(undefined1 *)&this[1].TestComment.Data.AllocatorInstance.Data = 0;
    (this->Cost).Value = '\0';
    pUVar1 = UEnvQueryItemType_VectorBase::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ValidItemType).Class.field0_0x0.DebugPtr = pUVar1;
    *(undefined1 *)&this[1]._padding_ = 1;
    pUVar1 = UEnvQueryContext_Querier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this[1]._padding_ = (longlong)pUVar1;
    *(undefined1 *)&this[1].TestComment.Data.AllocatorInstance.Data = 0;
    pUVar1 = UEnvQueryContext_Querier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this[1]._padding_ = (longlong)pUVar1;
    pUVar1 = UEnvQueryContext_Item::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this[1]._padding_ = (longlong)pUVar1;
    *(undefined2 *)&this[1].TestComment.Data.ArrayNum = 0;
  }
  return;
}

// InternalConstructor<UEnvQueryTest_GameplayTags> @ 146f1cdc0

void __cdecl InternalConstructor<UEnvQueryTest_GameplayTags>(FObjectInitializer *param_1)

{
  UEnvQueryTest *this;
  UClass *pUVar1;
  
  this = (UEnvQueryTest *)param_1->Obj;
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_GameplayTags__6B_;
    FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)(this + 1));
    this[1].MultipleContextFilterOp.Value = '\0';
    this[1].BoolValue._padding_ = 0;
    this[1].BoolValue._padding_ = 0;
    this[1].BoolValue._padding_ = 0;
    this[1].BoolValue._padding_ = 0;
    this->bWorkOnFloatValues = 0;
    (this->Cost).Value = '\0';
    if ((this->FilterType).Value != '\x03') {
      (this->FilterType).Value = '\x03';
    }
    (this->ScoringEquation).Value = '\x04';
    this[1].FilterType.Value = '\0';
    pUVar1 = UEnvQueryItemType_ActorBase::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ValidItemType).Class.field0_0x0.DebugPtr = pUVar1;
    this[1].MultipleContextScoreOp.Value = '\0';
  }
  return;
}

// InternalConstructor<UEnvQueryTest_Overlap> @ 146f1ce80

void __cdecl InternalConstructor<UEnvQueryTest_Overlap>(FObjectInitializer *param_1)

{
  uint uVar1;
  UEnvQueryTest *this;
  undefined8 uVar2;
  UClass *pUVar3;
  
  this = (UEnvQueryTest *)param_1->Obj;
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Overlap__6B_;
    uVar1 = *(uint *)((longlong)&this[1]._padding_ + 4);
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar2;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(uint *)((longlong)&this[1]._padding_ + 4) = uVar1 & 0xfffffff9 | 1;
    (this->Cost).Value = '\x02';
    pUVar3 = UEnvQueryItemType_VectorBase::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ValidItemType).Class.field0_0x0.DebugPtr = pUVar3;
    this->bWorkOnFloatValues = 0;
    if ((this->FilterType).Value != '\x03') {
      (this->FilterType).Value = '\x03';
    }
    (this->ScoringEquation).Value = '\x04';
  }
  return;
}

// InternalConstructor<UEnvQueryTest_Pathfinding> @ 146f1cf60

void __cdecl InternalConstructor<UEnvQueryTest_Pathfinding>(FObjectInitializer *param_1)

{
  if ((UEnvQueryTest_Pathfinding *)param_1->Obj != (UEnvQueryTest_Pathfinding *)0x0) {
    UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding
              ((UEnvQueryTest_Pathfinding *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryTest_PathfindingBatch> @ 146f1cf80

void __cdecl InternalConstructor<UEnvQueryTest_PathfindingBatch>(FObjectInitializer *param_1)

{
  UEnvQueryTest_Pathfinding *this;
  FFieldClass *pFVar1;
  
  this = (UEnvQueryTest_Pathfinding *)param_1->Obj;
  if (this != (UEnvQueryTest_Pathfinding *)0x0) {
    UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_PathfindingBatch__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar1 = FFloatProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar1;
    *(undefined4 *)&this[1]._padding_ = 0x3fc00000;
  }
  return;
}

// InternalConstructor<UEnvQueryTest_Project> @ 146f1d000

void __cdecl InternalConstructor<UEnvQueryTest_Project>(FObjectInitializer *param_1)

{
  uint uVar1;
  UEnvQueryTest *this;
  UClass *pUVar2;
  
  this = (UEnvQueryTest *)param_1->Obj;
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Project__6B_;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x44800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x44800000;
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    this[1]._padding_ = 0x41200000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    uVar1 = *(uint *)&this[1].TestComment.Data.AllocatorInstance.Data;
    *(undefined2 *)&this[1].TestPurpose = 0;
    *(uint *)&this[1].TestComment.Data.AllocatorInstance.Data = uVar1 & 0xffffffde | 0x1e;
    (this->Cost).Value = '\x01';
    pUVar2 = UEnvQueryItemType_VectorBase::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ValidItemType).Class.field0_0x0.DebugPtr = pUVar2;
    this->bWorkOnFloatValues = 0;
    if ((this->FilterType).Value != '\x03') {
      (this->FilterType).Value = '\x03';
    }
    uVar1 = *(uint *)&this[1].TestComment.Data.AllocatorInstance.Data;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(uint *)&this[1].TestComment.Data.AllocatorInstance.Data = uVar1 & 0xffffffef | 0x20;
    (this->ScoringEquation).Value = '\x04';
    this[1].field_0x35 = 1;
  }
  return;
}

// InternalConstructor<UEnvQueryTest_Random> @ 146f1d120

void __cdecl InternalConstructor<UEnvQueryTest_Random>(FObjectInitializer *param_1)

{
  UEnvQueryTest *this;
  UClass *pUVar1;
  
  this = (UEnvQueryTest *)param_1->Obj;
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    (this->Cost).Value = '\0';
    this->_padding_ = (longlong)&___7UEnvQueryTest_Random__6B_;
    pUVar1 = UEnvQueryItemType::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ValidItemType).Class.field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// InternalConstructor<UEnvQueryTest_Trace> @ 146f1d190

void __cdecl InternalConstructor<UEnvQueryTest_Trace>(FObjectInitializer *param_1)

{
  if ((UEnvQueryTest_Trace *)param_1->Obj != (UEnvQueryTest_Trace *)0x0) {
    UEnvQueryTest_Trace::UEnvQueryTest_Trace((UEnvQueryTest_Trace *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEnvQueryTest_Volume> @ 146f1d1b0

void __cdecl InternalConstructor<UEnvQueryTest_Volume>(FObjectInitializer *param_1)

{
  UEnvQueryTest *this;
  UClass *pUVar1;
  
  this = (UEnvQueryTest *)param_1->Obj;
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Volume__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    (this->Cost).Value = '\x01';
    pUVar1 = UEnvQueryItemType_VectorBase::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ValidItemType).Class.field0_0x0.DebugPtr = pUVar1;
    this->bWorkOnFloatValues = 0;
    if ((this->FilterType).Value != '\x03') {
      (this->FilterType).Value = '\x03';
    }
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffc;
    (this->ScoringEquation).Value = '\x04';
  }
  return;
}

// InternalConstructor<UEnvQueryTypes> @ 146f1d250

void __cdecl InternalConstructor<UEnvQueryTypes>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnvQueryTypes__6B_;
  }
  return;
}

// InternalConstructor<UValueOrBBKeyBlueprintUtility> @ 146f1d280

void __cdecl InternalConstructor<UValueOrBBKeyBlueprintUtility>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UValueOrBBKeyBlueprintUtility__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<ADetourCrowdAIController> @ 146f1d2b0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ADetourCrowdAIController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AAIController *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADetourCrowdAIController::GetPrivateStaticClass();
  this = (AAIController *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AAIController *)0x0) {
    AAIController::AAIController(this,param_1);
    this->_padding_ = (longlong)&ADetourCrowdAIController::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ADetourCrowdAIController::_vftable__for__INavAgentInterface__;
    this->_padding_ =
         (longlong)&ADetourCrowdAIController::_vftable__for__IAIPerceptionListenerInterface__;
    this->_padding_ =
         (longlong)&ADetourCrowdAIController::_vftable__for__IGameplayTaskOwnerInterface__;
    this->_padding_ =
         (longlong)&ADetourCrowdAIController::_vftable__for__IGenericTeamAgentInterface__;
    this->_padding_ =
         (longlong)&ADetourCrowdAIController::_vftable__for__IVisualLoggerDebugSnapshotInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AEQSTestingPawn> @ 146f1d3a0

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

UObject * __cdecl InternalVTableHelperCtorCaller<AEQSTestingPawn>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ACharacter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AEQSTestingPawn::GetPrivateStaticClass();
  this = (ACharacter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ACharacter *)0x0) {
    ACharacter::ACharacter(this,param_1);
    this[1].field_0x40 = this[1].field_0x40 & 0xe0;
    *(undefined ***)this = &AEQSTestingPawn::_vftable__for__AActor__;
    *(undefined ***)&this->field_0x2c0 = &AEQSTestingPawn::_vftable__for__INavAgentInterface__;
    *(undefined ***)&this->field_0x678 = &___7AEQSTestingPawn__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x44 = 0xbf800000;
    *(undefined4 *)&this[1].field_0x48 = 0xbf800000;
    *(undefined4 *)&this[1].field_0x4c = 0xbf800000;
    *(undefined4 *)&this[1].field_0x50 = 0x3f000000;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x78 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    *(undefined8 *)&this[1].field_0x90 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIBlueprintHelperLibrary> @ 146f1d500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAIBlueprintHelperLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIBlueprintHelperLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAIBlueprintHelperLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIDataProvider> @ 146f1d5b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAIDataProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIDataProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAIDataProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIDataProvider_QueryParams> @ 146f1d660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAIDataProvider_QueryParams>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIDataProvider_QueryParams::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAIDataProvider_QueryParams__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIDataProvider_Random> @ 146f1d710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAIDataProvider_Random>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIDataProvider_Random::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UAIDataProvider_Random__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBrainComponent> @ 146f1d7c0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UBrainComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBrainComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UBrainComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UBrainComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UBrainComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UBrainComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FAIResourceLock::FAIResourceLock((FAIResourceLock *)&this[1].PrimaryComponentTick);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEQSRenderingComponent> @ 146f1d8d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEQSRenderingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDebugDrawComponent *this;
  UDebugDrawComponent *pUVar3;
  
  pUVar3 = (UDebugDrawComponent *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEQSRenderingComponent::GetPrivateStaticClass();
  this = (UDebugDrawComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this->_padding_ = (longlong)&UEQSRenderingComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UEQSRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UEQSRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UEQSRenderingComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UEQSRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UEQSRenderingComponent::_vftable__for__IPhysicsComponent__;
    FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
              ((FDebugDrawDelegateHelper *)&this[1]._padding_);
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    this[1]._padding_ = (longlong)&___7FEQSRenderingDebugDrawDelegateHelper__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UEnvQuery> @ 146f1da10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQuery>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQuery::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQuery__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryContext> @ 146f1dad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryContext>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryContext::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryContext__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryContext_BlueprintBase> @ 146f1db80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryContext_BlueprintBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryContext_BlueprintBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryContext_BlueprintBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryContext_Item> @ 146f1dc30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryContext_Item>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryContext_Item::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryContext_Item__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryContext_NavigationData> @ 146f1dce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryContext_NavigationData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryContext_NavigationData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryContext_NavigationData__6B_;
    *(byte *)(pUVar1 + 1) = *(byte *)(pUVar1 + 1) & 0xe0;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0xbf800000;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0xbf800000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0xbf800000;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3f000000;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryContext_Querier> @ 146f1ddc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryContext_Querier>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryContext_Querier__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryDebugHelpers> @ 146f1de70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryDebugHelpers>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryDebugHelpers::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryDebugHelpers__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator> @ 146f1df20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryGenerator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x24 = 0;
    *(undefined ***)pUVar1 = &___7UEnvQueryGenerator__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_ActorsOfClass> @ 146f1dfe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryGenerator_ActorsOfClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  FFieldClass *pFVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_ActorsOfClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UEnvQueryGenerator_ActorsOfClass__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    pUVar1[1].field_0x24 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined ***)&pUVar1[2].field_0x8 = &___7FAIDataProviderBoolValue__6B_;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    pUVar1[3].field_0x10 = 0;
    pFVar3 = FBoolProperty::StaticClass();
    *(FFieldClass **)&pUVar1[3].field_0x8 = pFVar3;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined ***)&pUVar1[3].field_0x18 = &___7FAIDataProviderFloatValue__6B_;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    pFVar3 = FFloatProperty::StaticClass();
    *(FFieldClass **)&pUVar1[4].field_0x18 = pFVar3;
    *(undefined8 *)(pUVar1 + 5) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_BlueprintBase> @ 146f1e130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryGenerator_BlueprintBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_BlueprintBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UEnvQueryGenerator_BlueprintBase__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    pUVar1[1].field_0x24 = 0;
    FText::FText((FText *)(pUVar1 + 2));
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_Composite> @ 146f1e200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryGenerator_Composite>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_Composite::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UEnvQueryGenerator_Composite__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    pUVar1[1].field_0x24 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_Cone> @ 146f1e2d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryGenerator_Cone>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryGenerator_ProjectedPoints *this;
  FFieldClass *pFVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_Cone::GetPrivateStaticClass();
  this = (UEnvQueryGenerator_ProjectedPoints *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryGenerator_ProjectedPoints *)0x0) {
    UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryGenerator_Cone__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar3 = FFloatProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar3;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].ProjectionData = 0;
    this[1].ProjectionData.NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].ProjectionData.ProjectDown = 0.0;
    this[1].ProjectionData.ProjectUp = 0.0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    this[1].ProjectionData.ExtentX = 0.0;
    pFVar3 = FFloatProperty::StaticClass();
    *(FFieldClass **)&this[1].ProjectionData.ProjectDown = pFVar3;
    *(undefined8 *)&this[1].ProjectionData.TraceProfileName.Number = 0;
    *(undefined8 *)&this[1].ProjectionData.field_0x38 = 0;
    this[1].NavDataOverrideContext.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[1].ProjectionData.TraceChannel = '\0';
    this[1].ProjectionData.SerializedChannel = '\0';
    *(undefined2 *)&this[1].ProjectionData.field_0x2a = 0;
    this[1].ProjectionData.TraceProfileName.ComparisonIndex = 0;
    *(undefined ***)&this[1].ProjectionData.ExtentZ = &___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[2]._padding_ = 0;
    pFVar3 = FFloatProperty::StaticClass();
    this[2]._padding_ = (longlong)pFVar3;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[2]._padding_ = 0;
    pFVar3 = FFloatProperty::StaticClass();
    this[2]._padding_ = (longlong)pFVar3;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_CurrentLocation> @ 146f1e480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryGenerator_CurrentLocation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryGenerator_ProjectedPoints *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_CurrentLocation::GetPrivateStaticClass();
  this = (UEnvQueryGenerator_ProjectedPoints *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryGenerator_ProjectedPoints *)0x0) {
    UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryGenerator_CurrentLocation__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_Donut> @ 146f1e540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryGenerator_Donut>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryGenerator_ProjectedPoints *this;
  FFieldClass *pFVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_Donut::GetPrivateStaticClass();
  this = (UEnvQueryGenerator_ProjectedPoints *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryGenerator_ProjectedPoints *)0x0) {
    UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryGenerator_Donut__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar3 = FFloatProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar3;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].ProjectionData = 0;
    this[1].ProjectionData.NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].ProjectionData.ProjectDown = 0.0;
    this[1].ProjectionData.ProjectUp = 0.0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    this[1].ProjectionData.ExtentX = 0.0;
    pFVar3 = FFloatProperty::StaticClass();
    *(FFieldClass **)&this[1].ProjectionData.ProjectDown = pFVar3;
    *(undefined8 *)&this[1].ProjectionData.TraceProfileName.Number = 0;
    *(undefined8 *)&this[1].ProjectionData.field_0x38 = 0;
    this[1].NavDataOverrideContext.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[1].ProjectionData.TraceChannel = '\0';
    this[1].ProjectionData.SerializedChannel = '\0';
    *(undefined2 *)&this[1].ProjectionData.field_0x2a = 0;
    this[1].ProjectionData.TraceProfileName.ComparisonIndex = 0;
    *(undefined ***)&this[1].ProjectionData.ExtentZ = &___7FAIDataProviderIntValue__6B_;
    *(undefined4 *)&this[2]._padding_ = 0;
    pFVar3 = FIntProperty::StaticClass();
    this[2]._padding_ = (longlong)pFVar3;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = (longlong)&___7FAIDataProviderIntValue__6B_;
    *(undefined4 *)&this[2]._padding_ = 0;
    pFVar3 = FIntProperty::StaticClass();
    this[2]._padding_ = (longlong)pFVar3;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].ProjectionData = 0;
    this[2].ProjectionData.NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    *(undefined1 *)&this[2].ProjectionData.ProjectDown = 0;
    this[2].ProjectionData.TraceChannel = '\0';
    this[2].ProjectionData.SerializedChannel = '\0';
    *(undefined2 *)&this[2].ProjectionData.field_0x2a = 0;
    this[2].ProjectionData.TraceProfileName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].ProjectionData.TraceProfileName.Number = 0;
    *(undefined8 *)&this[2].ProjectionData.field_0x38 = 0;
    this[2].NavDataOverrideContext.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2].ProjectionData.ExtentZ = 0.0;
    this[2].ProjectionData.PostProjectionVerticalOffset = 0.0;
    *(undefined ***)&this[2].ProjectionData.ExtentX = &___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[3]._padding_ = 0;
    pUVar2 = (UClass *)FFloatProperty::StaticClass();
    this[2].NavDataOverrideContext.Class.field0_0x0.DebugPtr = pUVar2;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_OnCircle> @ 146f1e550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryGenerator_OnCircle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryGenerator_OnCircle *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_OnCircle::GetPrivateStaticClass();
  pUVar3 = (UEnvQueryGenerator_OnCircle *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UEnvQueryGenerator_OnCircle *)0x0) {
    pUVar3 = UEnvQueryGenerator_OnCircle::UEnvQueryGenerator_OnCircle(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_PathingGrid> @ 146f1e5f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryGenerator_PathingGrid>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryGenerator_SimpleGrid *this;
  FFieldClass *pFVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_PathingGrid::GetPrivateStaticClass();
  this = (UEnvQueryGenerator_SimpleGrid *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryGenerator_SimpleGrid *)0x0) {
    UEnvQueryGenerator_SimpleGrid::UEnvQueryGenerator_SimpleGrid(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryGenerator_PathingGrid__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    pFVar3 = FBoolProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar3 = FFloatProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar3;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_PerceivedActors> @ 146f1e730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryGenerator_PerceivedActors>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  FFieldClass *pFVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_PerceivedActors::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UEnvQueryGenerator_PerceivedActors__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    pUVar1[1].field_0x24 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined ***)&pUVar1[2].field_0x8 = &___7FAIDataProviderFloatValue__6B_;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    pFVar3 = FFloatProperty::StaticClass();
    *(FFieldClass **)&pUVar1[3].field_0x8 = pFVar3;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 4) = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_ProjectedPoints> @ 146f1e840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryGenerator_ProjectedPoints>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryGenerator_ProjectedPoints *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_ProjectedPoints::GetPrivateStaticClass();
  pUVar3 = (UEnvQueryGenerator_ProjectedPoints *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UEnvQueryGenerator_ProjectedPoints *)0x0) {
    pUVar3 = UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryGenerator_SimpleGrid> @ 146f1e8e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryGenerator_SimpleGrid>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryGenerator_SimpleGrid *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryGenerator_SimpleGrid::GetPrivateStaticClass();
  pUVar3 = (UEnvQueryGenerator_SimpleGrid *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UEnvQueryGenerator_SimpleGrid *)0x0) {
    pUVar3 = UEnvQueryGenerator_SimpleGrid::UEnvQueryGenerator_SimpleGrid(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryInstanceBlueprintWrapper> @ 146f1e980

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryInstanceBlueprintWrapper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryInstanceBlueprintWrapper::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &UEnvQueryInstanceBlueprintWrapper::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UEnvQueryInstanceBlueprintWrapper::_vftable__for__IEQSQueryResultSourceInterface__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryItemType> @ 146f1ea60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryItemType>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryItemType::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryItemType__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryItemType_Actor> @ 146f1eb10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryItemType_Actor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryItemType_Actor__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryItemType_ActorBase> @ 146f1ebc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryItemType_ActorBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryItemType_ActorBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryItemType_Direction> @ 146f1ec70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryItemType_Direction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryItemType_Direction::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryItemType_Direction__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryItemType_Point> @ 146f1ed20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryItemType_Point>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryItemType_Point::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryItemType_Point__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryItemType_VectorBase> @ 146f1edd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryItemType_VectorBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryItemType_VectorBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryManager> @ 146f1ee80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISubsystem *this;
  UAISubsystem *pUVar3;
  
  pUVar3 = (UAISubsystem *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryManager::GetPrivateStaticClass();
  this = (UAISubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISubsystem *)0x0) {
    UAISubsystem::UAISubsystem(this,param_1);
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)(this + 1));
    this->_padding_ = (longlong)&UEnvQueryManager::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UEnvQueryManager::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = (longlong)&___7UEnvQueryManager__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].AISystem.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].AISystem.field0_0x0 + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3].AISystem.field0_0x0 = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5].AISystem.field0_0x0.DebugPtr = (UAISystem *)0x0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6].AISystem.field0_0x0.DebugPtr = (UAISystem *)0x0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[7].AISystem.field0_0x0.DebugPtr = (UAISystem *)0x0;
    *(undefined4 *)&this[8]._padding_ = 0;
    this[8]._padding_ = 0x3f999999a0000000;
    this[8]._padding_ = 0x3f999999a0000000;
    this[8].AISystem.field0_0x0.DebugPtr = (UAISystem *)0x3f847ae140000000;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UEnvQueryNode> @ 146f1f0a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryNode__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryOption> @ 146f1f150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryOption>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryOption::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryOption__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest> @ 146f1f210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryTest *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryTest::GetPrivateStaticClass();
  pUVar3 = (UEnvQueryTest *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UEnvQueryTest *)0x0) {
    pUVar3 = UEnvQueryTest::UEnvQueryTest(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_Distance> @ 146f1f2b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest_Distance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryTest *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryTest_Distance::GetPrivateStaticClass();
  this = (UEnvQueryTest *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Distance__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_Dot> @ 146f1f370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest_Dot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryTest *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryTest_Dot::GetPrivateStaticClass();
  this = (UEnvQueryTest *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Dot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].TestOrder = 0;
    this[1].TestPurpose = '\0';
    *(undefined3 *)&this[1].field_0x35 = 0;
    *(undefined1 *)&this[1].TestComment.Data.AllocatorInstance.Data = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_GameplayTags> @ 146f1f460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest_GameplayTags>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryTest *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryTest_GameplayTags::GetPrivateStaticClass();
  this = (UEnvQueryTest *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_GameplayTags__6B_;
    FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)(this + 1));
    this[1].MultipleContextFilterOp.Value = '\0';
    this[1].BoolValue._padding_ = 0;
    this[1].BoolValue._padding_ = 0;
    this[1].BoolValue._padding_ = 0;
    this[1].BoolValue._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_Overlap> @ 146f1f540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest_Overlap>(FVTableHelper *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UEnvQueryTest *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UEnvQueryTest_Overlap::GetPrivateStaticClass();
  this = (UEnvQueryTest *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Overlap__6B_;
    uVar1 = *(uint *)((longlong)&this[1]._padding_ + 4);
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar2;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(uint *)((longlong)&this[1]._padding_ + 4) = uVar1 & 0xfffffff9 | 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_Pathfinding> @ 146f1f650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest_Pathfinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryTest_Pathfinding *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryTest_Pathfinding::GetPrivateStaticClass();
  pUVar3 = (UEnvQueryTest_Pathfinding *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UEnvQueryTest_Pathfinding *)0x0) {
    pUVar3 = UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_PathfindingBatch> @ 146f1f6f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEnvQueryTest_PathfindingBatch>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryTest_Pathfinding *this;
  FFieldClass *pFVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryTest_PathfindingBatch::GetPrivateStaticClass();
  this = (UEnvQueryTest_Pathfinding *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryTest_Pathfinding *)0x0) {
    UEnvQueryTest_Pathfinding::UEnvQueryTest_Pathfinding(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_PathfindingBatch__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar3 = FFloatProperty::StaticClass();
    this[1]._padding_ = (longlong)pFVar3;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_Project> @ 146f1f7e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest_Project>(FVTableHelper *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UEnvQueryTest *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UEnvQueryTest_Project::GetPrivateStaticClass();
  this = (UEnvQueryTest *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Project__6B_;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x44800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x44800000;
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    this[1]._padding_ = 0x41200000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    uVar1 = *(uint *)&this[1].TestComment.Data.AllocatorInstance.Data;
    *(undefined2 *)&this[1].TestPurpose = 0;
    *(uint *)&this[1].TestComment.Data.AllocatorInstance.Data = uVar1 & 0xffffffde | 0x1e;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_Random> @ 146f1f900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest_Random>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryTest *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryTest_Random::GetPrivateStaticClass();
  this = (UEnvQueryTest *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Random__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_Trace> @ 146f1f9b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest_Trace>(FVTableHelper *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UEnvQueryTest *this;
  FFieldClass *pFVar4;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UEnvQueryTest_Trace::GetPrivateStaticClass();
  this = (UEnvQueryTest *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Trace__6B_;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x44800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x44800000;
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41200000;
    this[1]._padding_ = 0x41200000;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    uVar1 = *(uint *)&this[1].TestComment.Data.AllocatorInstance.Data;
    *(undefined2 *)&this[1].TestPurpose = 0;
    *(uint *)&this[1].TestComment.Data.AllocatorInstance.Data = uVar1 & 0xffffffde | 0x1e;
    this[1].BoolValue._padding_ = 0;
    this[1].BoolValue._padding_ = 0;
    this[1].BoolValue._padding_ = 0;
    *(undefined ***)&this[1].TestComment.Data.ArrayNum = &___7FAIDataProviderBoolValue__6B_;
    this[1].MultipleContextFilterOp = '\0';
    this[1].MultipleContextScoreOp = '\0';
    this[1].FilterType = '\0';
    *(undefined5 *)&this[1].field_0x4b = 0;
    this[1].BoolValue._padding_ = 0;
    *(undefined1 *)&this[1].BoolValue._padding_ = 0;
    pFVar4 = FBoolProperty::StaticClass();
    this[1].BoolValue._padding_ = (longlong)pFVar4;
    this[1].FloatValueMin._padding_ = 0;
    this[1].FloatValueMin._padding_ = 0;
    this[1].FloatValueMin._padding_ = 0;
    this[1].FloatValueMin._padding_ = 0;
    *(undefined8 *)&this[1].BoolValue.DefaultValue = 0;
    this[1].BoolValue._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[1].FloatValueMin._padding_ = 0;
    pFVar4 = FFloatProperty::StaticClass();
    this[1].FloatValueMin._padding_ = (longlong)pFVar4;
    this[1].FloatValueMax._padding_ = 0;
    this[1].FloatValueMax._padding_ = 0;
    this[1].FloatValueMax._padding_ = 0;
    this[1].FloatValueMax._padding_ = 0;
    *(undefined8 *)&this[1].FloatValueMin.DefaultValue = 0;
    this[1].FloatValueMin._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
    *(undefined4 *)&this[1].FloatValueMax._padding_ = 0;
    pFVar4 = FFloatProperty::StaticClass();
    this[1].FloatValueMax._padding_ = (longlong)pFVar4;
    this[1].FloatValueMax._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTest_Volume> @ 146f1fb90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTest_Volume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnvQueryTest *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryTest_Volume::GetPrivateStaticClass();
  this = (UEnvQueryTest *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEnvQueryTest *)0x0) {
    UEnvQueryTest::UEnvQueryTest(this,param_1);
    this->_padding_ = (longlong)&___7UEnvQueryTest_Volume__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvQueryTypes> @ 146f1fc50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvQueryTypes>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvQueryTypes::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnvQueryTypes__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UValueOrBBKeyBlueprintUtility> @ 146f1fd00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UValueOrBBKeyBlueprintUtility>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UValueOrBBKeyBlueprintUtility::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UValueOrBBKeyBlueprintUtility__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<AActor_*,int,FIdentityFunctor,TDereferenceWrapper<AActor_*,TLess<void>_>_> @ 146f1fdb0

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
IntroSortInternal<AActor_*,int,FIdentityFunctor,TDereferenceWrapper<AActor_*,TLess<void>_>_>
          (AActor **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<AActor_*,TLess<void>_> param_4)

{
  AActor *pAVar1;
  int iVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  AActor **ppAVar5;
  AActor **ppAVar6;
  AActor **ppAVar7;
  AActor **ppAVar8;
  AActor **ppAVar9;
  float fVar10;
  undefined1 auStack_408 [32];
  FName local_3e8;
  AActor ***local_3e0;
  int local_3d8;
  TLess<void> *local_3d0;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378 [2];
  AActor **local_358;
  AActor **local_348;
  AActor **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_3d0 = param_4.Predicate;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    local_3e0 = &local_348;
    do {
      ppAVar7 = local_3e0[1];
      ppAVar6 = *local_3e0;
      local_358 = local_3e0[2];
      iVar2 = (int)((longlong)ppAVar7 - (longlong)ppAVar6 >> 3) + 1;
      local_3d8 = (int)local_358;
      ppAVar5 = ppAVar6;
      if ((int)local_358 != 0) {
LAB_146f1fe80:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppAVar8 = ppAVar7 + 1;
          pAVar1 = ppAVar5[iVar2 >> 1];
          ppAVar5[iVar2 >> 1] = *ppAVar5;
          *ppAVar5 = pAVar1;
          ppAVar6 = ppAVar5;
LAB_146f1feb0:
          ppAVar6 = ppAVar6 + 1;
          if (ppAVar6 <= ppAVar7) goto code_r0x000146f1febd;
          goto LAB_146f1ff50;
        }
        for (; ppAVar8 = ppAVar5, ppAVar6 = ppAVar5, ppAVar5 < ppAVar7; ppAVar7 = ppAVar7 + -1) {
          while (ppAVar9 = ppAVar8, ppAVar6 = ppAVar6 + 1, ppAVar6 <= ppAVar7) {
            pAVar1 = *ppAVar9;
            local_3e8 = (FName)(*ppAVar6)->_padding_;
            ::FName::ToString(&local_3e8,local_378);
            local_3e8 = (FName)pAVar1->_padding_;
            ::FName::ToString(&local_3e8,&local_388);
            FVar4.Data = (FScriptContainerElement *)L"";
            if (local_378[0].Data.ArrayNum != 0) {
              FVar4.Data = local_378[0].Data.AllocatorInstance.Data;
            }
            FVar3.Data = (FScriptContainerElement *)L"";
            if (local_388.Data.ArrayNum != 0) {
              FVar3.Data = local_388.Data.AllocatorInstance.Data;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,(wchar_t *)FVar4.Data);
            if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_388.Data.AllocatorInstance.Data);
            }
            if (local_378[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378[0].Data.AllocatorInstance.Data);
            }
            ppAVar8 = ppAVar6;
            if (-1 < iVar2) {
              ppAVar8 = ppAVar9;
            }
          }
          pAVar1 = *ppAVar9;
          *ppAVar9 = *ppAVar7;
          *ppAVar7 = pAVar1;
          param_4.Predicate = local_3d0;
        }
        goto LAB_146f200b6;
      }
LAB_146f200a0:
      HeapSortInternal<AActor_*,int,FIdentityFunctor,TDereferenceWrapper<AActor_*,TLess<void>_>_>
                (ppAVar6,iVar2,param_3,param_4);
LAB_146f200b6:
      local_3e0 = local_3e0 + -3;
    } while (&local_348 <= local_3e0);
  }
  return;
code_r0x000146f1febd:
  pAVar1 = *ppAVar5;
  local_3e8 = (FName)(*ppAVar6)->_padding_;
  ::FName::ToString(&local_3e8,&local_3b8);
  local_3e8 = (FName)pAVar1->_padding_;
  ::FName::ToString(&local_3e8,&local_3c8);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_3b8.Data.ArrayNum != 0) {
    FVar4.Data = local_3b8.Data.AllocatorInstance.Data;
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_3c8.Data.ArrayNum != 0) {
    FVar3.Data = local_3c8.Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,(wchar_t *)FVar4.Data);
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (-1 < iVar2) goto LAB_146f1feb0;
LAB_146f1ff50:
  do {
    ppAVar9 = ppAVar8;
    ppAVar8 = ppAVar9 + -1;
    if (ppAVar8 <= ppAVar5) break;
    pAVar1 = *ppAVar8;
    local_3e8 = (FName)(*ppAVar5)->_padding_;
    ::FName::ToString(&local_3e8,&local_398);
    local_3e8 = (FName)pAVar1->_padding_;
    ::FName::ToString(&local_3e8,&local_3a8);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_398.Data.ArrayNum != 0) {
      FVar4.Data = local_398.Data.AllocatorInstance.Data;
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_3a8.Data.ArrayNum != 0) {
      FVar3.Data = local_3a8.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,(wchar_t *)FVar4.Data);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  } while (-1 < iVar2);
  if (ppAVar6 <= ppAVar8) {
    pAVar1 = *ppAVar6;
    *ppAVar6 = *ppAVar8;
    *ppAVar8 = pAVar1;
    goto LAB_146f1feb0;
  }
  pAVar1 = *ppAVar5;
  *ppAVar5 = *ppAVar8;
  local_3d8 = local_3d8 + -1;
  *ppAVar8 = pAVar1;
  if ((longlong)((longlong)ppAVar8 + (-8 - (longlong)ppAVar5) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppAVar7 - (longlong)ppAVar6 & 0xfffffffffffffff8U)) {
    if (ppAVar6 < ppAVar7) {
      *local_3e0 = ppAVar6;
      local_3e0[1] = ppAVar7;
      *(int *)(local_3e0 + 2) = local_3d8;
      local_3e0 = local_3e0 + 3;
    }
    if (ppAVar8 <= ppAVar5 + 1) goto LAB_146f200b6;
    ppAVar7 = ppAVar9 + -2;
    ppAVar6 = ppAVar5;
  }
  else {
    if (ppAVar5 + 1 < ppAVar8) {
      *local_3e0 = ppAVar5;
      local_3e0[1] = ppAVar9 + -2;
      *(int *)(local_3e0 + 2) = local_3d8;
      local_3e0 = local_3e0 + 3;
    }
    if (ppAVar7 <= ppAVar6) goto LAB_146f200b6;
  }
  iVar2 = (int)((longlong)ppAVar7 - (longlong)ppAVar6 >> 3) + 1;
  ppAVar5 = ppAVar6;
  if (local_3d8 == 0) goto LAB_146f200a0;
  goto LAB_146f1fe80;
}

// IntroSortInternal<FEQSDebugger::FEnvQueryInfo,int,FIdentityFunctor,TDereferenceWrapper<FEQSDebugger::FEnvQueryInfo,`FGameplayDebuggerCategory_EQS::CollectData'::__l2::FEnvQuerySortNewFirst>_> @ 146f201f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FEQSDebugger::FEnvQueryInfo,int,FIdentityFunctor,TDereferenceWrapper<FEQSDebugger::FEnvQueryInfo,_FGameplayDebuggerCategory_EQS::CollectData_::__l2::FEnvQuerySortNewFirst>_>
          (FEnvQueryInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FEQSDebugger::FEnvQueryInfo,_public:_virtual_void___cdecl_FGameplayDebuggerCategory_EQS::CollectData(APlayerController_*,AActor_*)_::_2_::FEnvQuerySortNewFirst>
          param_4)

{
  FEnvQueryInfo *pFVar1;
  double dVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEnvQueryInstance *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FEnvQueryInstance *pFVar6;
  longlong lVar7;
  FEnvQueryInfo *pFVar8;
  int iVar9;
  FEnvQueryInfo *pFVar10;
  FEnvQueryInfo *pFVar11;
  FEnvQueryInfo *pFVar12;
  FEnvQueryInfo *pFVar13;
  FEnvQueryInfo *pFVar14;
  FEnvQueryInfo **ppFVar15;
  float fVar16;
  undefined1 auStack_378 [48];
  FEnvQueryInfo *local_348;
  FEnvQueryInfo *local_338;
  FEnvQueryInfo *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar16;
    memset(local_320,0,0x2e8);
    ppFVar15 = &local_338;
    do {
      pFVar11 = ppFVar15[1];
      pFVar10 = *ppFVar15;
      pFVar1 = ppFVar15[2];
      local_348._0_4_ = (int)pFVar1;
      iVar9 = (int)(((longlong)pFVar11 - (longlong)pFVar10) / 0x18) + 1;
      pFVar14 = pFVar10;
      if ((int)local_348 != 0) {
LAB_146f202c0:
        if (8 < iVar9) {
          pTVar3 = (pFVar14->Instance).SharedReferenceCount.ReferenceController;
          pFVar8 = pFVar11 + 1;
          iVar9 = iVar9 / 2;
          pFVar4 = pFVar14[iVar9].Instance.Object;
          pTVar5 = pFVar14[iVar9].Instance.SharedReferenceCount.ReferenceController;
          dVar2 = pFVar14[iVar9].Timestamp;
          pFVar14[iVar9].Instance.Object = (pFVar14->Instance).Object;
          pFVar14[iVar9].Instance.SharedReferenceCount.ReferenceController = pTVar3;
          pFVar14[iVar9].Timestamp = pFVar14->Timestamp;
          (pFVar14->Instance).Object = pFVar4;
          (pFVar14->Instance).SharedReferenceCount.ReferenceController = pTVar5;
          pFVar14->Timestamp = dVar2;
          pFVar10 = pFVar14;
LAB_146f20310:
          pFVar12 = pFVar10;
          pFVar10 = pFVar12 + 1;
          if (pFVar10 <= pFVar11) goto code_r0x000146f20319;
          goto LAB_146f20327;
        }
        if (pFVar14 < pFVar11) {
          pFVar1 = pFVar14 + 1;
          do {
            pFVar10 = pFVar14;
            if (pFVar1 <= pFVar11) {
              pFVar8 = pFVar1;
              if (0x5f < (ulonglong)((longlong)pFVar11 + (0x18 - (longlong)pFVar1))) {
                do {
                  if (pFVar8->Timestamp < pFVar10->Timestamp) {
                    pFVar10 = pFVar8;
                  }
                  if (pFVar8[1].Timestamp < pFVar10->Timestamp) {
                    pFVar10 = pFVar8 + 1;
                  }
                  if (pFVar8[2].Timestamp < pFVar10->Timestamp) {
                    pFVar10 = pFVar8 + 2;
                  }
                  if (pFVar8[3].Timestamp < pFVar10->Timestamp) {
                    pFVar10 = pFVar8 + 3;
                  }
                  pFVar8 = pFVar8 + 4;
                } while (pFVar8 <= pFVar11 + -3);
              }
              for (; pFVar8 <= pFVar11; pFVar8 = pFVar8 + 1) {
                if (pFVar8->Timestamp < pFVar10->Timestamp) {
                  pFVar10 = pFVar8;
                }
              }
            }
            pFVar4 = (pFVar10->Instance).Object;
            pTVar3 = (pFVar10->Instance).SharedReferenceCount.ReferenceController;
            pFVar8 = pFVar11 + -1;
            dVar2 = pFVar10->Timestamp;
            pTVar5 = (pFVar11->Instance).SharedReferenceCount.ReferenceController;
            (pFVar10->Instance).Object = (pFVar11->Instance).Object;
            (pFVar10->Instance).SharedReferenceCount.ReferenceController = pTVar5;
            pFVar10->Timestamp = pFVar11->Timestamp;
            (pFVar11->Instance).Object = pFVar4;
            (pFVar11->Instance).SharedReferenceCount.ReferenceController = pTVar3;
            pFVar11->Timestamp = dVar2;
            pFVar11 = pFVar8;
          } while (pFVar14 < pFVar8);
        }
        goto LAB_146f2044d;
      }
LAB_146f2043e:
      local_348 = pFVar1;
      HeapSortInternal<FEQSDebugger::FEnvQueryInfo,int,FIdentityFunctor,TDereferenceWrapper<FEQSDebugger::FEnvQueryInfo,_FGameplayDebuggerCategory_EQS::CollectData_::__l2::FEnvQuerySortNewFirst>_>
                (pFVar10,iVar9,param_3,param_4);
LAB_146f2044d:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_338 <= ppFVar15);
  }
  return;
code_r0x000146f20319:
  if (pFVar14->Timestamp <= pFVar12[1].Timestamp) goto LAB_146f20310;
LAB_146f20327:
  do {
    pFVar13 = pFVar8;
    pFVar8 = pFVar13 + -1;
    if (pFVar8 <= pFVar14) break;
  } while (pFVar13[-1].Timestamp <= pFVar14->Timestamp);
  pFVar4 = (pFVar8->Instance).Object;
  pTVar3 = pFVar13[-1].Instance.SharedReferenceCount.ReferenceController;
  if (pFVar10 <= pFVar8) {
    pFVar6 = (pFVar10->Instance).Object;
    pTVar5 = pFVar12[1].Instance.SharedReferenceCount.ReferenceController;
    dVar2 = pFVar12[1].Timestamp;
    (pFVar10->Instance).Object = pFVar4;
    pFVar12[1].Instance.SharedReferenceCount.ReferenceController = pTVar3;
    pFVar12[1].Timestamp = pFVar13[-1].Timestamp;
    (pFVar8->Instance).Object = pFVar6;
    pFVar13[-1].Instance.SharedReferenceCount.ReferenceController = pTVar5;
    pFVar13[-1].Timestamp = dVar2;
    goto LAB_146f20310;
  }
  pFVar6 = (pFVar14->Instance).Object;
  pTVar5 = (pFVar14->Instance).SharedReferenceCount.ReferenceController;
  dVar2 = pFVar14->Timestamp;
  lVar7 = (longlong)pFVar8 + (-0x18 - (longlong)pFVar14);
  local_348._0_4_ = (int)local_348 + -1;
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  (pFVar14->Instance).Object = pFVar4;
  (pFVar14->Instance).SharedReferenceCount.ReferenceController = pTVar3;
  pFVar14->Timestamp = pFVar13[-1].Timestamp;
  (pFVar8->Instance).Object = pFVar6;
  pFVar13[-1].Instance.SharedReferenceCount.ReferenceController = pTVar5;
  pFVar13[-1].Timestamp = dVar2;
  if ((lVar7 >> 2) - (lVar7 >> 0x3f) < ((longlong)pFVar11 - (longlong)pFVar10) / 0x18) {
    if (pFVar10 < pFVar11) {
      *ppFVar15 = pFVar10;
      ppFVar15[1] = pFVar11;
      *(int *)(ppFVar15 + 2) = (int)local_348;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar8 <= pFVar14 + 1) goto LAB_146f2044d;
    pFVar11 = pFVar13 + -2;
    pFVar10 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar8) {
      *ppFVar15 = pFVar14;
      ppFVar15[1] = pFVar13 + -2;
      *(int *)(ppFVar15 + 2) = (int)local_348;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar11 <= pFVar10) goto LAB_146f2044d;
  }
  iVar9 = (int)(((longlong)pFVar11 - (longlong)pFVar10) / 0x18) + 1;
  pFVar14 = pFVar10;
  if ((int)local_348 == 0) goto LAB_146f2043e;
  goto LAB_146f202c0;
}

// IntroSortInternal<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData,int,FIdentityFunctor,TDereferenceWrapper<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData,TGreater<`FEnvQueryInstance::SortScores'::__l2::FSortHelperForDebugData>_>_> @ 146f20570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,int,FIdentityFunctor,TDereferenceWrapper<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,TGreater<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData>_>_>
          (FSortHelperForDebugData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData,TGreater<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData>_>
          param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  FSortHelperForDebugData *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FEnvQueryItem FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FSortHelperForDebugData *pFVar20;
  char cVar21;
  FSortHelperForDebugData *pFVar22;
  FSortHelperForDebugData *pFVar23;
  int iVar24;
  FSortHelperForDebugData *pFVar25;
  FSortHelperForDebugData *pFVar26;
  char cVar27;
  FSortHelperForDebugData **ppFVar28;
  FSortHelperForDebugData *pFVar29;
  float fVar30;
  undefined1 auStack_388 [48];
  FSortHelperForDebugData *local_358;
  FSortHelperForDebugData *local_348;
  FSortHelperForDebugData *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar30 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar30;
    memset(local_330,0,0x2e8);
    ppFVar28 = &local_348;
    do {
      pFVar29 = ppFVar28[1];
      pFVar26 = *ppFVar28;
      pFVar4 = ppFVar28[2];
      iVar19 = (int)((longlong)pFVar29 - (longlong)pFVar26 >> 6) + 1;
      local_358._0_4_ = (int)pFVar4;
      pFVar25 = pFVar26;
      if ((int)local_358 != 0) {
LAB_146f20630:
        if (8 < iVar19) {
          pFVar6 = (pFVar25->ItemDetails).TestResults.AllocatorInstance.Data;
          pFVar22 = pFVar29 + 1;
          pFVar26 = pFVar25 + iVar19 / 2;
          FVar7 = pFVar26->Item;
          pFVar8 = (pFVar26->ItemDetails).TestResults.AllocatorInstance.Data;
          iVar11 = (pFVar26->ItemDetails).TestResults.ArrayNum;
          iVar12 = (pFVar26->ItemDetails).TestResults.ArrayMax;
          pFVar9 = (pFVar26->ItemDetails).TestWeightedScores.AllocatorInstance.Data;
          iVar13 = (pFVar26->ItemDetails).TestWeightedScores.ArrayNum;
          iVar14 = (pFVar26->ItemDetails).TestWeightedScores.ArrayMax;
          iVar15 = (pFVar26->ItemDetails).FailedTestIndex;
          iVar16 = (pFVar26->ItemDetails).ItemIndex;
          pFVar10 = (pFVar26->ItemDetails).FailedDescription.Data.AllocatorInstance.Data;
          iVar17 = (pFVar26->ItemDetails).FailedDescription.Data.ArrayNum;
          iVar18 = (pFVar26->ItemDetails).FailedDescription.Data.ArrayMax;
          pFVar26->Item = pFVar25->Item;
          (pFVar26->ItemDetails).TestResults.AllocatorInstance.Data = pFVar6;
          iVar19 = (pFVar25->ItemDetails).TestResults.ArrayMax;
          pFVar6 = (pFVar25->ItemDetails).TestWeightedScores.AllocatorInstance.Data;
          (pFVar26->ItemDetails).TestResults.ArrayNum = (pFVar25->ItemDetails).TestResults.ArrayNum;
          (pFVar26->ItemDetails).TestResults.ArrayMax = iVar19;
          (pFVar26->ItemDetails).TestWeightedScores.AllocatorInstance.Data = pFVar6;
          *(undefined1 (*) [16])&(pFVar26->ItemDetails).TestWeightedScores.ArrayNum =
               *(undefined1 (*) [16])&(pFVar25->ItemDetails).TestWeightedScores.ArrayNum;
          iVar19 = (pFVar25->ItemDetails).FailedDescription.Data.ArrayNum;
          iVar24 = (pFVar25->ItemDetails).FailedDescription.Data.ArrayMax;
          (pFVar26->ItemDetails).FailedDescription.Data.AllocatorInstance.Data =
               (pFVar25->ItemDetails).FailedDescription.Data.AllocatorInstance.Data;
          (pFVar26->ItemDetails).FailedDescription.Data.ArrayNum = iVar19;
          (pFVar26->ItemDetails).FailedDescription.Data.ArrayMax = iVar24;
          pFVar25->Item = FVar7;
          (pFVar25->ItemDetails).TestResults.AllocatorInstance.Data = pFVar8;
          (pFVar25->ItemDetails).TestResults.ArrayNum = iVar11;
          (pFVar25->ItemDetails).TestResults.ArrayMax = iVar12;
          (pFVar25->ItemDetails).TestWeightedScores.AllocatorInstance.Data = pFVar9;
          (pFVar25->ItemDetails).TestWeightedScores.ArrayNum = iVar13;
          (pFVar25->ItemDetails).TestWeightedScores.ArrayMax = iVar14;
          (pFVar25->ItemDetails).FailedTestIndex = iVar15;
          (pFVar25->ItemDetails).ItemIndex = iVar16;
          (pFVar25->ItemDetails).FailedDescription.Data.AllocatorInstance.Data = pFVar10;
          (pFVar25->ItemDetails).FailedDescription.Data.ArrayNum = iVar17;
          (pFVar25->ItemDetails).FailedDescription.Data.ArrayMax = iVar18;
          pFVar26 = pFVar25;
LAB_146f20693:
          pFVar20 = pFVar26;
          pFVar26 = pFVar20 + 1;
          if (pFVar26 <= pFVar29) goto code_r0x000146f2069c;
          goto LAB_146f20710;
        }
        for (; pFVar4 = pFVar25, pFVar26 = pFVar25, pFVar25 < pFVar29; pFVar29 = pFVar29 + -1) {
          while (pFVar22 = pFVar4, pFVar4 = pFVar26 + 1, pFVar4 <= pFVar29) {
            iVar19 = pFVar26[1].Item.DataOffset;
            if ((iVar19 < 0) || ((BADTYPE)pFVar26[1].Item.bIsDiscarded)) {
              cVar21 = '\0';
            }
            else {
              cVar21 = '\x01';
            }
            iVar24 = (pFVar22->Item).DataOffset;
            if ((iVar24 < 0) || ((BADTYPE)(pFVar22->Item).bIsDiscarded)) {
              cVar27 = '\0';
            }
            else {
              cVar27 = '\x01';
            }
            if (cVar21 == cVar27) {
              fVar30 = (pFVar22->Item).Score;
              fVar3 = (pFVar4->Item).Score;
              if (fVar3 == fVar30) {
                bVar5 = pFVar26[1].Item.DataOffset < iVar24;
              }
              else {
                bVar5 = fVar3 < fVar30;
              }
            }
            else if ((iVar19 < 0) || ((BADTYPE)pFVar26[1].Item.bIsDiscarded)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            pFVar26 = pFVar4;
            if (!bVar5) {
              pFVar4 = pFVar22;
            }
          }
          FVar7 = pFVar22->Item;
          pFVar6 = (pFVar22->ItemDetails).TestResults.AllocatorInstance.Data;
          iVar11 = (pFVar22->ItemDetails).TestResults.ArrayNum;
          iVar12 = (pFVar22->ItemDetails).TestResults.ArrayMax;
          pFVar8 = (pFVar22->ItemDetails).TestWeightedScores.AllocatorInstance.Data;
          iVar13 = (pFVar22->ItemDetails).TestWeightedScores.ArrayNum;
          iVar14 = (pFVar22->ItemDetails).TestWeightedScores.ArrayMax;
          iVar15 = (pFVar22->ItemDetails).FailedTestIndex;
          iVar16 = (pFVar22->ItemDetails).ItemIndex;
          pFVar9 = (pFVar29->ItemDetails).TestResults.AllocatorInstance.Data;
          pFVar10 = (pFVar22->ItemDetails).FailedDescription.Data.AllocatorInstance.Data;
          iVar17 = (pFVar22->ItemDetails).FailedDescription.Data.ArrayNum;
          iVar18 = (pFVar22->ItemDetails).FailedDescription.Data.ArrayMax;
          pFVar22->Item = pFVar29->Item;
          (pFVar22->ItemDetails).TestResults.AllocatorInstance.Data = pFVar9;
          iVar19 = (pFVar29->ItemDetails).TestResults.ArrayMax;
          pFVar9 = (pFVar29->ItemDetails).TestWeightedScores.AllocatorInstance.Data;
          (pFVar22->ItemDetails).TestResults.ArrayNum = (pFVar29->ItemDetails).TestResults.ArrayNum;
          (pFVar22->ItemDetails).TestResults.ArrayMax = iVar19;
          (pFVar22->ItemDetails).TestWeightedScores.AllocatorInstance.Data = pFVar9;
          *(undefined1 (*) [16])&(pFVar22->ItemDetails).TestWeightedScores.ArrayNum =
               *(undefined1 (*) [16])&(pFVar29->ItemDetails).TestWeightedScores.ArrayNum;
          iVar19 = (pFVar29->ItemDetails).FailedDescription.Data.ArrayNum;
          iVar24 = (pFVar29->ItemDetails).FailedDescription.Data.ArrayMax;
          (pFVar22->ItemDetails).FailedDescription.Data.AllocatorInstance.Data =
               (pFVar29->ItemDetails).FailedDescription.Data.AllocatorInstance.Data;
          (pFVar22->ItemDetails).FailedDescription.Data.ArrayNum = iVar19;
          (pFVar22->ItemDetails).FailedDescription.Data.ArrayMax = iVar24;
          pFVar29->Item = FVar7;
          (pFVar29->ItemDetails).TestResults.AllocatorInstance.Data = pFVar6;
          (pFVar29->ItemDetails).TestResults.ArrayNum = iVar11;
          (pFVar29->ItemDetails).TestResults.ArrayMax = iVar12;
          (pFVar29->ItemDetails).TestWeightedScores.AllocatorInstance.Data = pFVar8;
          (pFVar29->ItemDetails).TestWeightedScores.ArrayNum = iVar13;
          (pFVar29->ItemDetails).TestWeightedScores.ArrayMax = iVar14;
          (pFVar29->ItemDetails).FailedTestIndex = iVar15;
          (pFVar29->ItemDetails).ItemIndex = iVar16;
          (pFVar29->ItemDetails).FailedDescription.Data.AllocatorInstance.Data = pFVar10;
          (pFVar29->ItemDetails).FailedDescription.Data.ArrayNum = iVar17;
          (pFVar29->ItemDetails).FailedDescription.Data.ArrayMax = iVar18;
        }
        goto LAB_146f208ae;
      }
LAB_146f2089d:
      local_358 = pFVar4;
      HeapSortInternal<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,int,FIdentityFunctor,TDereferenceWrapper<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,TGreater<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData>_>_>
                (pFVar26,iVar19,param_3,param_4);
LAB_146f208ae:
      ppFVar28 = ppFVar28 + -3;
    } while (&local_348 <= ppFVar28);
  }
  return;
code_r0x000146f2069c:
  iVar19 = pFVar20[1].Item.DataOffset;
  if ((iVar19 < 0) || ((BADTYPE)pFVar20[1].Item.bIsDiscarded)) {
    cVar21 = '\0';
  }
  else {
    cVar21 = '\x01';
  }
  iVar24 = (pFVar25->Item).DataOffset;
  if ((iVar24 < 0) || ((BADTYPE)(pFVar25->Item).bIsDiscarded)) {
    cVar27 = '\0';
  }
  else {
    cVar27 = '\x01';
  }
  if (cVar21 == cVar27) {
    fVar30 = (pFVar25->Item).Score;
    fVar3 = (pFVar26->Item).Score;
    if (fVar3 == fVar30) {
      bVar5 = pFVar20[1].Item.DataOffset < iVar24;
    }
    else {
      bVar5 = fVar3 < fVar30;
    }
  }
  else if ((iVar19 < 0) || ((BADTYPE)pFVar20[1].Item.bIsDiscarded)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) goto LAB_146f20693;
LAB_146f20710:
  do {
    pFVar23 = pFVar22;
    pFVar22 = pFVar23 + -1;
    if (pFVar22 <= pFVar25) break;
    iVar19 = (pFVar25->Item).DataOffset;
    if ((iVar19 < 0) || ((BADTYPE)(pFVar25->Item).bIsDiscarded)) {
      cVar21 = '\0';
    }
    else {
      cVar21 = '\x01';
    }
    iVar24 = pFVar23[-1].Item.DataOffset;
    if ((iVar24 < 0) || ((BADTYPE)pFVar23[-1].Item.bIsDiscarded)) {
      cVar27 = '\0';
    }
    else {
      cVar27 = '\x01';
    }
    if (cVar21 == cVar27) {
      fVar30 = (pFVar22->Item).Score;
      fVar3 = (pFVar25->Item).Score;
      if (fVar3 == fVar30) {
        bVar5 = (pFVar25->Item).DataOffset < iVar24;
      }
      else {
        bVar5 = fVar3 < fVar30;
      }
    }
    else if ((iVar19 < 0) || ((BADTYPE)(pFVar25->Item).bIsDiscarded)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  } while (!bVar5);
  pFVar6 = pFVar23[-1].ItemDetails.TestResults.AllocatorInstance.Data;
  if (pFVar26 <= pFVar22) {
    FVar7 = pFVar26->Item;
    pFVar8 = pFVar20[1].ItemDetails.TestResults.AllocatorInstance.Data;
    iVar11 = pFVar20[1].ItemDetails.TestResults.ArrayNum;
    iVar12 = pFVar20[1].ItemDetails.TestResults.ArrayMax;
    pFVar9 = pFVar20[1].ItemDetails.TestWeightedScores.AllocatorInstance.Data;
    iVar13 = pFVar20[1].ItemDetails.TestWeightedScores.ArrayNum;
    iVar14 = pFVar20[1].ItemDetails.TestWeightedScores.ArrayMax;
    iVar15 = pFVar20[1].ItemDetails.FailedTestIndex;
    iVar16 = pFVar20[1].ItemDetails.ItemIndex;
    pFVar10 = pFVar20[1].ItemDetails.FailedDescription.Data.AllocatorInstance.Data;
    iVar17 = pFVar20[1].ItemDetails.FailedDescription.Data.ArrayNum;
    iVar18 = pFVar20[1].ItemDetails.FailedDescription.Data.ArrayMax;
    pFVar26->Item = pFVar22->Item;
    pFVar20[1].ItemDetails.TestResults.AllocatorInstance.Data = pFVar6;
    iVar19 = pFVar23[-1].ItemDetails.TestResults.ArrayMax;
    pFVar6 = pFVar23[-1].ItemDetails.TestWeightedScores.AllocatorInstance.Data;
    pFVar20[1].ItemDetails.TestResults.ArrayNum = pFVar23[-1].ItemDetails.TestResults.ArrayNum;
    pFVar20[1].ItemDetails.TestResults.ArrayMax = iVar19;
    pFVar20[1].ItemDetails.TestWeightedScores.AllocatorInstance.Data = pFVar6;
    *(undefined1 (*) [16])&pFVar20[1].ItemDetails.TestWeightedScores.ArrayNum =
         *(undefined1 (*) [16])&pFVar23[-1].ItemDetails.TestWeightedScores.ArrayNum;
    iVar19 = pFVar23[-1].ItemDetails.FailedDescription.Data.ArrayNum;
    iVar24 = pFVar23[-1].ItemDetails.FailedDescription.Data.ArrayMax;
    pFVar20[1].ItemDetails.FailedDescription.Data.AllocatorInstance.Data =
         pFVar23[-1].ItemDetails.FailedDescription.Data.AllocatorInstance.Data;
    pFVar20[1].ItemDetails.FailedDescription.Data.ArrayNum = iVar19;
    pFVar20[1].ItemDetails.FailedDescription.Data.ArrayMax = iVar24;
    pFVar22->Item = FVar7;
    pFVar23[-1].ItemDetails.TestResults.AllocatorInstance.Data = pFVar8;
    pFVar23[-1].ItemDetails.TestResults.ArrayNum = iVar11;
    pFVar23[-1].ItemDetails.TestResults.ArrayMax = iVar12;
    pFVar23[-1].ItemDetails.TestWeightedScores.AllocatorInstance.Data = pFVar9;
    pFVar23[-1].ItemDetails.TestWeightedScores.ArrayNum = iVar13;
    pFVar23[-1].ItemDetails.TestWeightedScores.ArrayMax = iVar14;
    pFVar23[-1].ItemDetails.FailedTestIndex = iVar15;
    pFVar23[-1].ItemDetails.ItemIndex = iVar16;
    pFVar23[-1].ItemDetails.FailedDescription.Data.AllocatorInstance.Data = pFVar10;
    pFVar23[-1].ItemDetails.FailedDescription.Data.ArrayNum = iVar17;
    pFVar23[-1].ItemDetails.FailedDescription.Data.ArrayMax = iVar18;
    goto LAB_146f20693;
  }
  FVar7 = pFVar25->Item;
  pFVar8 = (pFVar25->ItemDetails).TestResults.AllocatorInstance.Data;
  iVar11 = (pFVar25->ItemDetails).TestResults.ArrayNum;
  iVar12 = (pFVar25->ItemDetails).TestResults.ArrayMax;
  pFVar9 = (pFVar25->ItemDetails).TestWeightedScores.AllocatorInstance.Data;
  iVar13 = (pFVar25->ItemDetails).TestWeightedScores.ArrayNum;
  iVar14 = (pFVar25->ItemDetails).TestWeightedScores.ArrayMax;
  iVar15 = (pFVar25->ItemDetails).FailedTestIndex;
  iVar16 = (pFVar25->ItemDetails).ItemIndex;
  local_358._0_4_ = (int)local_358 + -1;
  pFVar10 = (pFVar25->ItemDetails).FailedDescription.Data.AllocatorInstance.Data;
  iVar17 = (pFVar25->ItemDetails).FailedDescription.Data.ArrayNum;
  iVar18 = (pFVar25->ItemDetails).FailedDescription.Data.ArrayMax;
  pFVar25->Item = pFVar22->Item;
  (pFVar25->ItemDetails).TestResults.AllocatorInstance.Data = pFVar6;
  iVar19 = pFVar23[-1].ItemDetails.TestResults.ArrayMax;
  pFVar6 = pFVar23[-1].ItemDetails.TestWeightedScores.AllocatorInstance.Data;
  (pFVar25->ItemDetails).TestResults.ArrayNum = pFVar23[-1].ItemDetails.TestResults.ArrayNum;
  (pFVar25->ItemDetails).TestResults.ArrayMax = iVar19;
  (pFVar25->ItemDetails).TestWeightedScores.AllocatorInstance.Data = pFVar6;
  *(undefined1 (*) [16])&(pFVar25->ItemDetails).TestWeightedScores.ArrayNum =
       *(undefined1 (*) [16])&pFVar23[-1].ItemDetails.TestWeightedScores.ArrayNum;
  iVar19 = pFVar23[-1].ItemDetails.FailedDescription.Data.ArrayNum;
  iVar24 = pFVar23[-1].ItemDetails.FailedDescription.Data.ArrayMax;
  (pFVar25->ItemDetails).FailedDescription.Data.AllocatorInstance.Data =
       pFVar23[-1].ItemDetails.FailedDescription.Data.AllocatorInstance.Data;
  (pFVar25->ItemDetails).FailedDescription.Data.ArrayNum = iVar19;
  (pFVar25->ItemDetails).FailedDescription.Data.ArrayMax = iVar24;
  pFVar22->Item = FVar7;
  pFVar23[-1].ItemDetails.TestResults.AllocatorInstance.Data = pFVar8;
  pFVar23[-1].ItemDetails.TestResults.ArrayNum = iVar11;
  pFVar23[-1].ItemDetails.TestResults.ArrayMax = iVar12;
  pFVar23[-1].ItemDetails.TestWeightedScores.AllocatorInstance.Data = pFVar9;
  pFVar23[-1].ItemDetails.TestWeightedScores.ArrayNum = iVar13;
  pFVar23[-1].ItemDetails.TestWeightedScores.ArrayMax = iVar14;
  pFVar23[-1].ItemDetails.FailedTestIndex = iVar15;
  pFVar23[-1].ItemDetails.ItemIndex = iVar16;
  pFVar23[-1].ItemDetails.FailedDescription.Data.AllocatorInstance.Data = pFVar10;
  pFVar23[-1].ItemDetails.FailedDescription.Data.ArrayNum = iVar17;
  pFVar23[-1].ItemDetails.FailedDescription.Data.ArrayMax = iVar18;
  if ((longlong)((longlong)pFVar22 + (-0x40 - (longlong)pFVar25) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pFVar29 - (longlong)pFVar26 & 0xffffffffffffffc0U)) {
    if (pFVar26 < pFVar29) {
      *ppFVar28 = pFVar26;
      ppFVar28[1] = pFVar29;
      *(int *)(ppFVar28 + 2) = (int)local_358;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar22 <= pFVar25 + 1) goto LAB_146f208ae;
    pFVar29 = pFVar23 + -2;
    pFVar26 = pFVar25;
  }
  else {
    if (pFVar25 + 1 < pFVar22) {
      *ppFVar28 = pFVar25;
      ppFVar28[1] = pFVar23 + -2;
      *(int *)(ppFVar28 + 2) = (int)local_358;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar29 <= pFVar26) goto LAB_146f208ae;
  }
  iVar19 = (int)((longlong)pFVar29 - (longlong)pFVar26 >> 6) + 1;
  pFVar25 = pFVar26;
  if ((int)local_358 == 0) goto LAB_146f2089d;
  goto LAB_146f20630;
}

// LexToSanitizedString<FString,int> @ 146f20a00

FString * __cdecl LexToSanitizedString<FString,int>(FString *__return_storage_ptr__,int *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// LowerBoundInternal<TObjectPtr<UEnvQueryTest>,int,TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_> @ 146f20a30

int __cdecl
AlgoImpl::
LowerBoundInternal<TObjectPtr<UEnvQueryTest>,int,TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_>
          (TObjectPtr<UEnvQueryTest> *param_1,int param_2,TObjectPtr<UEnvQueryTest> *param_3,
          FIdentityFunctor param_4,
          TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      bVar4 = *(char *)((longlong)param_1[iVar1].field0_0x0.DebugPtr + 0x34) != '\x01';
      if (bVar4 == ((((param_3->field0_0x0).DebugPtr)->TestPurpose).Value != '\x01')) {
        bVar4 = *(byte *)((longlong)param_1[iVar1].field0_0x0.DebugPtr + 0xf8) <
                (((param_3->field0_0x0).DebugPtr)->Cost).Value;
      }
      if (bVar4) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// Merge<TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_> @ 146f20ab0

void __cdecl
AlgoImpl::
Merge<TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_>
          (TObjectPtr<UEnvQueryTest> *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching> param_5)

{
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar1;
  TObjectPtr<UEnvQueryTest>_u_0 TVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar5;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar13;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar14;
  bool bVar15;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar6;
  
  if (0 < param_2) {
    iVar12 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - iVar12) {
        bVar15 = *(char *)((longlong)param_1[param_2].field0_0x0.DebugPtr + 0x34) != '\x01';
        uVar8 = param_2 - iVar12;
        do {
          uVar9 = uVar8 >> 1;
          bVar3 = bVar15;
          if (bVar15 == (*(char *)((longlong)
                                   param_1[(longlong)(int)(uVar9 + iVar11) + (longlong)iVar12].
                                   field0_0x0.DebugPtr + 0x34) != '\x01')) {
            bVar3 = *(byte *)((longlong)param_1[param_2].field0_0x0.DebugPtr + 0xf8) <
                    *(byte *)((longlong)
                              param_1[(longlong)(int)(uVar9 + iVar11) + (longlong)iVar12].field0_0x0
                              .DebugPtr + 0xf8);
          }
          if (!bVar3) {
            iVar11 = uVar9 + iVar11 + (uVar8 & 1);
          }
          uVar8 = uVar9;
        } while (uVar9 != 0);
      }
      iVar12 = iVar12 + iVar11;
      if (param_2 <= iVar12) {
        return;
      }
      iVar11 = 0;
      pTVar1 = &param_1[iVar12].field0_0x0;
      if (0 < param_3 - param_2) {
        uVar8 = param_3 - param_2;
        iVar11 = 0;
        do {
          uVar9 = uVar8 >> 1;
          bVar15 = *(char *)((longlong)
                             param_1[(longlong)(int)(uVar9 + iVar11) + (longlong)param_2].field0_0x0
                             .DebugPtr + 0x34) != '\x01';
          if (bVar15 == (*(char *)((longlong)pTVar1->DebugPtr + 0x34) != '\x01')) {
            bVar15 = *(byte *)((longlong)
                               param_1[(longlong)(int)(uVar9 + iVar11) + (longlong)param_2].
                               field0_0x0.DebugPtr + 0xf8) <
                     *(byte *)((longlong)pTVar1->DebugPtr + 0xf8);
          }
          if (bVar15) {
            iVar11 = uVar9 + iVar11 + (uVar8 & 1);
          }
          uVar8 = uVar9;
        } while (uVar9 != 0);
      }
      iVar10 = (iVar11 - iVar12) + param_2;
      iVar4 = param_2 - iVar12;
      if ((iVar4 != 0) && (iVar4 < iVar10)) {
        pTVar5 = pTVar1 + iVar4;
        pTVar13 = pTVar1;
        pTVar6 = pTVar1 + iVar4;
        do {
          while( true ) {
            pTVar7 = pTVar5 + 1;
            pTVar14 = pTVar13 + 1;
            TVar2 = *pTVar13;
            *pTVar13 = *pTVar5;
            *pTVar5 = TVar2;
            pTVar13 = pTVar14;
            if (pTVar7 == pTVar1 + iVar10) break;
            pTVar5 = pTVar7;
            if (pTVar14 == pTVar6) {
              pTVar6 = pTVar7;
            }
          }
          pTVar5 = pTVar6;
        } while (pTVar14 != pTVar6);
      }
      param_2 = param_2 + iVar11;
      iVar12 = iVar12 + 1 + iVar11;
    } while (iVar12 < param_2);
  }
  return;
}

// NewObject<UAIAsyncTaskBlueprintProxy> @ 146f20c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAIAsyncTaskBlueprintProxy * __cdecl NewObject<UAIAsyncTaskBlueprintProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UAIAsyncTaskBlueprintProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAIAsyncTaskBlueprintProxy *)
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

// NewObject<UEnvQueryInstanceBlueprintWrapper> @ 146f20d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEnvQueryInstanceBlueprintWrapper * __cdecl
NewObject<UEnvQueryInstanceBlueprintWrapper>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UEnvQueryInstanceBlueprintWrapper *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UEnvQueryInstanceBlueprintWrapper::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UEnvQueryInstanceBlueprintWrapper *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPathFollowingComponent> @ 146f20e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPathFollowingComponent * __cdecl NewObject<UPathFollowingComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UPathFollowingComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPathFollowingComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPathFollowingComponent *)
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

// RotateInternal<TObjectPtr<UEnvQueryTest>_> @ 146f21040

int __cdecl
AlgoImpl::RotateInternal<TObjectPtr<UEnvQueryTest>_>
          (TObjectPtr<UEnvQueryTest> *param_1,int param_2,int param_3)

{
  TObjectPtr<UEnvQueryTest>_u_0 TVar1;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar2;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar4;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar5;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar6;
  TObjectPtr<UEnvQueryTest>_u_0 *pTVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar2 = &param_1[param_3].field0_0x0;
    pTVar5 = &param_1->field0_0x0;
    pTVar3 = &param_1[param_3].field0_0x0;
    do {
      while( true ) {
        pTVar4 = pTVar2 + 1;
        pTVar6 = pTVar5 + 1;
        TVar1 = *pTVar5;
        *pTVar5 = *pTVar2;
        *pTVar2 = TVar1;
        pTVar5 = pTVar6;
        if (pTVar4 == &param_1[param_2].field0_0x0) break;
        pTVar2 = pTVar4;
        if (pTVar6 == pTVar3) {
          pTVar3 = pTVar4;
        }
      }
      pTVar2 = pTVar3;
    } while (pTVar6 != pTVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RunTraces<1,1> @ 146f210c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnvQueryTest_Trace_Helpers::RunTraces<1,1>
          (UEnvQueryTest_Trace *param_1,TArrayView<UE::Math::TVector<double>,int> *param_2,
          FEnvQueryInstance *param_3,float param_4,float param_5,FEnvTraceData *param_6,Type param_7
          ,Type param_8,bool param_9,FCollisionQueryParams *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uchar uVar4;
  UWorld *this;
  code *pcVar5;
  double dVar6;
  ECollisionChannel EVar7;
  double dVar8;
  bool bVar9;
  UObject *pUVar10;
  TVector<double> *pTVar11;
  AActor *pAVar12;
  TQuat<double> *pTVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStackY_328 [32];
  ECollisionChannel local_2e8 [2];
  UEnvQueryTest_Trace *local_2e0;
  FItemIterator local_2d8;
  FItemIterator local_2b0;
  FCollisionShape local_288;
  TVector<double>_u_0 local_278;
  FName local_260;
  FName local_258;
  LARGE_INTEGER local_250;
  LARGE_INTEGER local_248;
  FCollisionQueryParams *local_240;
  FString local_238;
  FString local_228;
  TVector<double>_u_0 local_218;
  FString local_200;
  FString local_1f0;
  FCollisionResponseContainer_u_0 local_1e0;
  TQuat<double> local_1b8;
  TRotator<double> local_198;
  TVector<double> local_180;
  TQuat<double> local_168;
  FCollisionQueryParams local_148;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  uVar4 = (param_6->TraceMode).Value;
  local_240 = param_10;
  local_2e8[0] = ECC_WorldStatic;
  local_1e0._0_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._0_8_;
  local_1e0._8_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._8_8_;
  local_1e0._16_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._16_8_;
  local_1e0._24_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._24_8_;
  local_2e0 = param_1;
  if (uVar4 == '\x03') {
    bVar9 = UCollisionProfile::GetChannelAndResponseParams
                      (param_6->TraceProfileName,local_2e8,
                       (FCollisionResponseParams *)&local_1e0._s_0);
    if (!bVar9) {
      if (FVisualLogger::bIsRecording != 0) {
        local_260 = (FName)local_2e0->_padding_;
        ::FName::ToString(&local_260,&local_238);
        ::FName::ToString(&param_6->TraceProfileName,&local_200);
        pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_3->_padding_ + 4));
        FVisualLogger::CategorizedLogfImpl
                  (pUVar10,(FName *)&LogEQS.field_0x4,Error,
                   L"Unable to fetch collision channel and response from TraceProfileName %s, test %s for query %s will automatically fail"
                  );
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        param_1 = local_2e0;
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
          param_1 = local_2e0;
        }
      }
      if (1 < (byte)LogEQS._0_1_) {
        local_258 = (FName)param_1->_padding_;
        ::FName::ToString(&local_258,&local_228);
        ::FName::ToString(&param_6->TraceProfileName,&local_1f0);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_EnvQueryTest_Trace_Helpers::RunTraces<1,1>(UEnvQueryTest_Trace_const&___ptr64,TArrayView<UE::Math::TVector<double>,int>_const&___ptr64,FEnvQueryInstance&___ptr64,float,float,FEnvTraceData_const&___ptr64,EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,FCollisionQueryParams_const&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
      }
      FEnvQueryInstance::FItemIterator::FItemIterator
                (&local_2d8,(UEnvQueryTest *)param_1,param_3,-1);
      dVar6 = __real_4170000000000000;
      while (((dVar8 = local_2d8.Deadline, iVar20 = (int)local_2d8._padding_,
              lVar17 = local_2d8._padding_,
              (int)local_2d8._padding_ < *(int *)(local_2d8._padding_ + 8) &&
              ((*(byte *)(local_2d8._padding_ + 0x10c) & 2) == 0)) &&
             ((local_2d8.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_250),
              (double)local_250.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6 < dVar8))))
            ) {
        FEnvQueryInstance::FItemIterator::SetScore(&local_2d8,param_7,param_8,!param_9,param_9);
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_2d8);
        if ((*(byte *)(local_2d8._padding_ + 0x10c) & 2) == 0) {
          local_2d8.ItemScore = 0.0;
          local_2d8.NumPassedForItem = 0;
          local_2d8.NumTestsForItem = 0;
          local_2d8.bForced = '\0';
          local_2d8.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_2d8);
        }
      }
      goto LAB_146f218dc;
    }
  }
  else if (uVar4 == '\x02') {
    local_2e8[0] = UEngineTypes::ConvertToCollisionChannel((uint)(param_6->TraceChannel).Value);
  }
  uVar16 = 0;
  iVar20 = param_2->ArrayNum;
  fVar1 = param_6->ExtentX;
  fVar2 = param_6->ExtentY;
  fVar3 = param_6->ExtentZ;
  if (0 < iVar20) {
    uVar21 = uVar16;
    do {
      uVar15 = (uint)uVar16;
      uVar19 = 0;
      if ((int)uVar15 < iVar20) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar21 + 0x10) =
           (double)param_4 + *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar21 + 0x10);
      uVar21 = uVar21 + 0x18;
      iVar20 = param_2->ArrayNum;
    } while ((int)(uVar15 + 1) < iVar20);
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_2b0,(UEnvQueryTest *)param_1,param_3,-1);
  dVar6 = __real_4170000000000000;
  while (((dVar8 = local_2b0.Deadline, iVar20 = (int)local_2b0._padding_,
          lVar17 = local_2b0._padding_, (int)local_2b0._padding_ < *(int *)(local_2b0._padding_ + 8)
          && ((*(byte *)(local_2b0._padding_ + 0x10c) & 2) == 0)) &&
         ((local_2b0.Deadline < 0.0 ||
          (QueryPerformanceCounter(&local_248),
          (double)local_248.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6 < dVar8))))) {
    pTVar11 = UEnvQueryTest::GetItemLocation((UEnvQueryTest *)param_1,&local_180,param_3,iVar20);
    local_278._s_0.X = (pTVar11->field0_0x0)._s_0.X;
    local_278._s_0.Y = (pTVar11->field0_0x0)._s_0.Y;
    local_278._s_0.Z = (double)param_5 + (pTVar11->field0_0x0)._s_0.Z;
    pAVar12 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)param_1,param_3,iVar20);
    local_148.IgnoreComponents.ArrayNum = (param_10->IgnoreComponents).ArrayNum;
    lVar17 = (longlong)local_148.IgnoreComponents.ArrayNum;
    local_148.TraceTag = param_10->TraceTag;
    local_148.bIgnoreTouches = param_10->bIgnoreTouches;
    local_148.bSkipNarrowPhase = param_10->bSkipNarrowPhase;
    local_148.bTraceIntoSubComponents = param_10->bTraceIntoSubComponents;
    local_148.bReplaceHitWithSubComponents = param_10->bReplaceHitWithSubComponents;
    local_148.MobilityType = param_10->MobilityType;
    local_148.OwnerTag = param_10->OwnerTag;
    local_148.IgnoreMask = param_10->IgnoreMask;
    local_148.bTraceComplex = param_10->bTraceComplex;
    local_148.StatId.StatIdPtr = (param_10->StatId).StatIdPtr;
    local_148.bFindInitialOverlaps = param_10->bFindInitialOverlaps;
    local_148.bDebugQuery = param_10->bDebugQuery;
    local_148.bReturnFaceIndex = param_10->bReturnFaceIndex;
    local_148.bComponentListUnique = param_10->bComponentListUnique;
    local_148.bReturnPhysicalMaterial = param_10->bReturnPhysicalMaterial;
    FVar14 = (param_10->IgnoreComponents).AllocatorInstance.SecondaryData;
    local_148.bIgnoreBlocks = param_10->bIgnoreBlocks;
    FVar18 = (ForElementType<unsigned_int>)&param_10->IgnoreComponents;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar14;
    }
    local_148.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    if (local_148.IgnoreComponents.ArrayNum == 0) {
      local_148.IgnoreComponents.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_148.IgnoreComponents.ArrayNum,0,
                 &local_148.IgnoreComponents.AllocatorInstance,local_148.IgnoreComponents.ArrayNum,
                 &local_148.IgnoreComponents.ArrayMax);
      FVar14 = (ForElementType<unsigned_int>)&local_148.IgnoreComponents;
      if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_148.IgnoreComponents.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar14,(void *)FVar18,lVar17 << 2);
    }
    FVar14 = (param_10->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    local_148.IgnoreSourceObjects.ArrayNum = (param_10->IgnoreSourceObjects).ArrayNum;
    lVar17 = (longlong)local_148.IgnoreSourceObjects.ArrayNum;
    local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    FVar18 = (ForElementType<unsigned_int>)&param_10->IgnoreSourceObjects;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar14;
    }
    if (local_148.IgnoreSourceObjects.ArrayNum == 0) {
      local_148.IgnoreSourceObjects.ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_148.IgnoreSourceObjects.ArrayNum,0,
                 &local_148.IgnoreSourceObjects.AllocatorInstance,
                 local_148.IgnoreSourceObjects.ArrayNum,&local_148.IgnoreSourceObjects.ArrayMax);
      FVar14 = (ForElementType<unsigned_int>)&local_148.IgnoreSourceObjects;
      if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar14,(void *)FVar18,lVar17 << 2);
    }
    FCollisionQueryParams::AddIgnoredActor(&local_148,pAVar12);
    iVar20 = param_2->ArrayNum;
    uVar19 = 0;
    if (0 < iVar20) {
      lVar17 = 0;
      do {
        EVar7 = local_2e8[0];
        this = (param_3->World).field0_0x0.DebugPtr;
        uVar15 = 0;
        if ((int)uVar19 < iVar20) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar11 = (TVector<double> *)((longlong)&param_2->DataPtr->field0_0x0 + lVar17);
        local_218._s_0.X = local_278._s_0.X - (pTVar11->field0_0x0)._s_0.X;
        local_218._s_0.Y = local_278._s_0.Y - (pTVar11->field0_0x0)._s_0.Y;
        local_288.ShapeType = Box;
        local_218._s_0.Z = local_278._s_0.Z - (pTVar11->field0_0x0)._s_0.Z;
        local_288.field1_0x4.Box.HalfExtentX = fVar1;
        local_288.field1_0x4.Box.HalfExtentY = fVar2;
        local_288.field1_0x4.Box.HalfExtentZ = fVar3;
        UE::Math::TVector<double>::ToOrientationRotator
                  ((TVector<double> *)&local_218._s_0,&local_198);
        pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_198,&local_168);
        local_1b8.X = pTVar13->X;
        local_1b8.Y = pTVar13->Y;
        local_1b8.Z = pTVar13->Z;
        local_1b8.W = pTVar13->W;
        bVar9 = UWorld::SweepTestByChannel
                          (this,pTVar11,(TVector<double> *)&local_278._s_0,&local_1b8,EVar7,
                           &local_288,&local_148,(FCollisionResponseParams *)&local_1e0._s_0);
        FEnvQueryInstance::FItemIterator::SetScore(&local_2b0,param_7,param_8,bVar9,param_9);
        iVar20 = param_2->ArrayNum;
        uVar19 = uVar19 + 1;
        lVar17 = lVar17 + 0x18;
        param_10 = local_240;
        param_1 = local_2e0;
      } while ((int)uVar19 < iVar20);
    }
    if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_148.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    FEnvQueryInstance::FItemIterator::StoreTestResult(&local_2b0);
    if ((*(byte *)(local_2b0._padding_ + 0x10c) & 2) == 0) {
      local_2b0.bForced = '\0';
      local_2b0.bPassed = '\x01';
      local_2b0.ItemScore = 0.0;
      local_2b0.NumPassedForItem = 0;
      local_2b0.NumTestsForItem = 0;
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_2b0);
    }
  }
LAB_146f218dc:
  *(int *)(lVar17 + 0xec) = iVar20;
  return;
}

// RunTraces<1,2> @ 146f21930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnvQueryTest_Trace_Helpers::RunTraces<1,2>
          (UEnvQueryTest_Trace *param_1,TArrayView<UE::Math::TVector<double>,int> *param_2,
          FEnvQueryInstance *param_3,float param_4,float param_5,FEnvTraceData *param_6,Type param_7
          ,Type param_8,bool param_9,FCollisionQueryParams *param_10)

{
  float fVar1;
  uchar uVar2;
  UWorld *this;
  code *pcVar3;
  double dVar4;
  ECollisionChannel EVar5;
  UEnvQueryTest_Trace *pUVar6;
  double dVar7;
  bool bVar8;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  AActor *pAVar11;
  ForElementType<unsigned_int> FVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  undefined1 auStackY_298 [32];
  ECollisionChannel local_258 [2];
  UEnvQueryTest_Trace *local_250;
  FCollisionQueryParams *local_248;
  FItemIterator local_240;
  FItemIterator local_218;
  FName local_1f0;
  FName local_1e8;
  LARGE_INTEGER local_1e0;
  LARGE_INTEGER local_1d8;
  FString local_1d0;
  FString local_1c0;
  FCollisionShape local_1b0;
  TVector<double>_u_0 local_1a0;
  FString local_188;
  FString local_178;
  FCollisionResponseContainer_u_0 local_168;
  TVector<double> local_148;
  FCollisionQueryParams local_128;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar16 = 0;
  local_248 = param_10;
  uVar2 = (param_6->TraceMode).Value;
  local_258[0] = ECC_WorldStatic;
  local_168._0_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._0_8_;
  local_168._8_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._8_8_;
  local_168._16_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._16_8_;
  local_168._24_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._24_8_;
  local_250 = param_1;
  if (uVar2 == '\x03') {
    bVar8 = UCollisionProfile::GetChannelAndResponseParams
                      (param_6->TraceProfileName,local_258,
                       (FCollisionResponseParams *)&local_168._s_0);
    if (!bVar8) {
      if (FVisualLogger::bIsRecording != 0) {
        local_1f0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_1f0,&local_1d0);
        ::FName::ToString(&param_6->TraceProfileName,&local_188);
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_3->_padding_ + 4));
        FVisualLogger::CategorizedLogfImpl
                  (pUVar9,(FName *)&LogEQS.field_0x4,Error,
                   L"Unable to fetch collision channel and response from TraceProfileName %s, test %s for query %s will automatically fail"
                  );
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
      pUVar6 = local_250;
      if (1 < (byte)LogEQS._0_1_) {
        local_1e8 = (FName)local_250->_padding_;
        ::FName::ToString(&local_1e8,&local_1c0);
        ::FName::ToString(&param_6->TraceProfileName,&local_178);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_EnvQueryTest_Trace_Helpers::RunTraces<1,2>(UEnvQueryTest_Trace_const&___ptr64,TArrayView<UE::Math::TVector<double>,int>_const&___ptr64,FEnvQueryInstance&___ptr64,float,float,FEnvTraceData_const&___ptr64,EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,FCollisionQueryParams_const&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
      }
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_240,(UEnvQueryTest *)pUVar6,param_3,-1)
      ;
      dVar4 = __real_4170000000000000;
      while (((dVar7 = local_240.Deadline, iVar13 = (int)local_240._padding_,
              lVar17 = local_240._padding_,
              (int)local_240._padding_ < *(int *)(local_240._padding_ + 8) &&
              ((*(byte *)(local_240._padding_ + 0x10c) & 2) == 0)) &&
             ((local_240.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_1e0),
              (double)local_1e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4 < dVar7))))
            ) {
        FEnvQueryInstance::FItemIterator::SetScore(&local_240,param_7,param_8,!param_9,param_9);
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_240);
        if ((*(byte *)(local_240._padding_ + 0x10c) & 2) == 0) {
          local_240.ItemScore = 0.0;
          local_240.NumPassedForItem = 0;
          local_240.NumTestsForItem = 0;
          local_240.bForced = '\0';
          local_240.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_240);
        }
      }
      *(int *)(lVar17 + 0xec) = iVar13;
      return;
    }
  }
  else if (uVar2 == '\x02') {
    local_258[0] = UEngineTypes::ConvertToCollisionChannel((uint)(param_6->TraceChannel).Value);
  }
  iVar13 = param_2->ArrayNum;
  fVar1 = param_6->ExtentX;
  if (0 < iVar13) {
    uVar19 = uVar16;
    do {
      uVar14 = (uint)uVar16;
      uVar15 = 0;
      if ((int)uVar14 < iVar13) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = (ulonglong)(uVar14 + 1);
      *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar19 + 0x10) =
           (double)param_4 + *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar19 + 0x10);
      uVar19 = uVar19 + 0x18;
      iVar13 = param_2->ArrayNum;
    } while ((int)(uVar14 + 1) < iVar13);
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_218,(UEnvQueryTest *)param_1,param_3,-1);
  dVar4 = __real_4170000000000000;
  do {
    dVar7 = local_218.Deadline;
    iVar13 = (int)local_218._padding_;
    lVar17 = local_218._padding_;
    if (((*(int *)(local_218._padding_ + 8) <= (int)local_218._padding_) ||
        ((*(byte *)(local_218._padding_ + 0x10c) & 2) != 0)) ||
       ((0.0 <= local_218.Deadline &&
        (QueryPerformanceCounter(&local_1d8),
        dVar7 <= (double)local_1d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4)))) {
      *(int *)(lVar17 + 0xec) = iVar13;
      return;
    }
    pTVar10 = UEnvQueryTest::GetItemLocation((UEnvQueryTest *)param_1,&local_148,param_3,iVar13);
    local_1a0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    local_1a0._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
    local_1a0._s_0.Z = (double)param_5 + (pTVar10->field0_0x0)._s_0.Z;
    pAVar11 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)param_1,param_3,iVar13);
    local_128.IgnoreComponents.ArrayNum = (local_248->IgnoreComponents).ArrayNum;
    lVar17 = (longlong)local_128.IgnoreComponents.ArrayNum;
    local_128.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_128.bIgnoreTouches = local_248->bIgnoreTouches;
    local_128.TraceTag = local_248->TraceTag;
    local_128.bSkipNarrowPhase = local_248->bSkipNarrowPhase;
    local_128.bTraceIntoSubComponents = local_248->bTraceIntoSubComponents;
    local_128.bReplaceHitWithSubComponents = local_248->bReplaceHitWithSubComponents;
    local_128.MobilityType = local_248->MobilityType;
    local_128.OwnerTag = local_248->OwnerTag;
    local_128.IgnoreMask = local_248->IgnoreMask;
    local_128.bTraceComplex = local_248->bTraceComplex;
    local_128.StatId.StatIdPtr = (local_248->StatId).StatIdPtr;
    local_128.bFindInitialOverlaps = local_248->bFindInitialOverlaps;
    local_128.bDebugQuery = local_248->bDebugQuery;
    local_128.bReturnFaceIndex = local_248->bReturnFaceIndex;
    local_128.bComponentListUnique = local_248->bComponentListUnique;
    local_128.bReturnPhysicalMaterial = local_248->bReturnPhysicalMaterial;
    FVar12 = (local_248->IgnoreComponents).AllocatorInstance.SecondaryData;
    local_128.bIgnoreBlocks = local_248->bIgnoreBlocks;
    FVar18 = (ForElementType<unsigned_int>)&local_248->IgnoreComponents;
    if (FVar12 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar12;
    }
    if (local_128.IgnoreComponents.ArrayNum == 0) {
      local_128.IgnoreComponents.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_128.IgnoreComponents.ArrayNum,0,
                 &local_128.IgnoreComponents.AllocatorInstance,local_128.IgnoreComponents.ArrayNum,
                 &local_128.IgnoreComponents.ArrayMax);
      FVar12 = (ForElementType<unsigned_int>)&local_128.IgnoreComponents;
      if (local_128.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_128.IgnoreComponents.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar12,(void *)FVar18,lVar17 << 2);
    }
    FVar12 = (local_248->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    local_128.IgnoreSourceObjects.ArrayNum = (local_248->IgnoreSourceObjects).ArrayNum;
    lVar17 = (longlong)local_128.IgnoreSourceObjects.ArrayNum;
    local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    FVar18 = (ForElementType<unsigned_int>)&local_248->IgnoreSourceObjects;
    if (FVar12 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar12;
    }
    if (local_128.IgnoreSourceObjects.ArrayNum == 0) {
      local_128.IgnoreSourceObjects.ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_128.IgnoreSourceObjects.ArrayNum,0,
                 &local_128.IgnoreSourceObjects.AllocatorInstance,
                 local_128.IgnoreSourceObjects.ArrayNum,&local_128.IgnoreSourceObjects.ArrayMax);
      FVar12 = (ForElementType<unsigned_int>)&local_128.IgnoreSourceObjects;
      if (local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar12,(void *)FVar18,lVar17 << 2);
    }
    FCollisionQueryParams::AddIgnoredActor(&local_128,pAVar11);
    iVar13 = param_2->ArrayNum;
    uVar15 = 0;
    if (0 < iVar13) {
      do {
        EVar5 = local_258[0];
        this = (param_3->World).field0_0x0.DebugPtr;
        uVar14 = 0;
        if ((int)uVar15 < iVar13) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_1b0.ShapeType = Sphere;
        local_1b0.field1_0x4.Box.HalfExtentX = fVar1;
        bVar8 = UWorld::SweepTestByChannel
                          (this,param_2->DataPtr + (int)uVar15,(TVector<double> *)&local_1a0._s_0,
                           &UE::Math::TQuat<double>::Identity,EVar5,&local_1b0,&local_128,
                           (FCollisionResponseParams *)&local_168._s_0);
        FEnvQueryInstance::FItemIterator::SetScore(&local_218,param_7,param_8,bVar8,param_9);
        iVar13 = param_2->ArrayNum;
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < iVar13);
    }
    if (local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_128.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    FEnvQueryInstance::FItemIterator::StoreTestResult(&local_218);
    param_1 = local_250;
    if ((*(byte *)(local_218._padding_ + 0x10c) & 2) == 0) {
      local_218.ItemScore = 0.0;
      local_218.NumPassedForItem = 0;
      local_218.NumTestsForItem = 0;
      local_218.bForced = '\0';
      local_218.bPassed = '\x01';
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_218);
    }
  } while( true );
}

// RunTraces<1,3> @ 146f220e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnvQueryTest_Trace_Helpers::RunTraces<1,3>
          (UEnvQueryTest_Trace *param_1,TArrayView<UE::Math::TVector<double>,int> *param_2,
          FEnvQueryInstance *param_3,float param_4,float param_5,FEnvTraceData *param_6,Type param_7
          ,Type param_8,bool param_9,FCollisionQueryParams *param_10)

{
  float fVar1;
  float fVar2;
  uchar uVar3;
  UWorld *this;
  code *pcVar4;
  double dVar5;
  ECollisionChannel EVar6;
  UEnvQueryTest_Trace *pUVar7;
  double dVar8;
  bool bVar9;
  UObject *pUVar10;
  TVector<double> *pTVar11;
  AActor *pAVar12;
  ForElementType<unsigned_int> FVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ForElementType<unsigned_int> FVar19;
  ulonglong uVar20;
  undefined1 auStackY_2a8 [32];
  ECollisionChannel local_268 [2];
  UEnvQueryTest_Trace *local_260;
  FCollisionQueryParams *local_258;
  FItemIterator local_250;
  FItemIterator local_228;
  FName local_200;
  FName local_1f8;
  LARGE_INTEGER local_1f0;
  LARGE_INTEGER local_1e8;
  FString local_1e0;
  FString local_1d0;
  FCollisionShape local_1c0;
  TVector<double>_u_0 local_1b0;
  FString local_198;
  FString local_188;
  FCollisionResponseContainer_u_0 local_178;
  TVector<double> local_158;
  FCollisionQueryParams local_138;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar17 = 0;
  local_258 = param_10;
  uVar3 = (param_6->TraceMode).Value;
  local_268[0] = ECC_WorldStatic;
  local_178._0_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._0_8_;
  local_178._8_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._8_8_;
  local_178._16_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._16_8_;
  local_178._24_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._24_8_;
  local_260 = param_1;
  if (uVar3 == '\x03') {
    bVar9 = UCollisionProfile::GetChannelAndResponseParams
                      (param_6->TraceProfileName,local_268,
                       (FCollisionResponseParams *)&local_178._s_0);
    if (!bVar9) {
      if (FVisualLogger::bIsRecording != 0) {
        local_200 = (FName)param_1->_padding_;
        ::FName::ToString(&local_200,&local_1e0);
        ::FName::ToString(&param_6->TraceProfileName,&local_198);
        pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_3->_padding_ + 4));
        FVisualLogger::CategorizedLogfImpl
                  (pUVar10,(FName *)&LogEQS.field_0x4,Error,
                   L"Unable to fetch collision channel and response from TraceProfileName %s, test %s for query %s will automatically fail"
                  );
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
      pUVar7 = local_260;
      if (1 < (byte)LogEQS._0_1_) {
        local_1f8 = (FName)local_260->_padding_;
        ::FName::ToString(&local_1f8,&local_1d0);
        ::FName::ToString(&param_6->TraceProfileName,&local_188);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_EnvQueryTest_Trace_Helpers::RunTraces<1,3>(UEnvQueryTest_Trace_const&___ptr64,TArrayView<UE::Math::TVector<double>,int>_const&___ptr64,FEnvQueryInstance&___ptr64,float,float,FEnvTraceData_const&___ptr64,EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,FCollisionQueryParams_const&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_250,(UEnvQueryTest *)pUVar7,param_3,-1)
      ;
      dVar5 = __real_4170000000000000;
      while (((dVar8 = local_250.Deadline, iVar14 = (int)local_250._padding_,
              lVar18 = local_250._padding_,
              (int)local_250._padding_ < *(int *)(local_250._padding_ + 8) &&
              ((*(byte *)(local_250._padding_ + 0x10c) & 2) == 0)) &&
             ((local_250.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_1f0),
              (double)local_1f0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5 < dVar8))))
            ) {
        FEnvQueryInstance::FItemIterator::SetScore(&local_250,param_7,param_8,!param_9,param_9);
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_250);
        if ((*(byte *)(local_250._padding_ + 0x10c) & 2) == 0) {
          local_250.ItemScore = 0.0;
          local_250.NumPassedForItem = 0;
          local_250.NumTestsForItem = 0;
          local_250.bForced = '\0';
          local_250.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_250);
        }
      }
      *(int *)(lVar18 + 0xec) = iVar14;
      return;
    }
  }
  else if (uVar3 == '\x02') {
    local_268[0] = UEngineTypes::ConvertToCollisionChannel((uint)(param_6->TraceChannel).Value);
  }
  iVar14 = param_2->ArrayNum;
  fVar1 = param_6->ExtentX;
  fVar2 = param_6->ExtentZ;
  if (0 < iVar14) {
    uVar20 = uVar17;
    do {
      uVar15 = (uint)uVar17;
      uVar16 = 0;
      if ((int)uVar15 < iVar14) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar17 = (ulonglong)(uVar15 + 1);
      *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar20 + 0x10) =
           (double)param_4 + *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar20 + 0x10);
      uVar20 = uVar20 + 0x18;
      iVar14 = param_2->ArrayNum;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_228,(UEnvQueryTest *)param_1,param_3,-1);
  dVar5 = __real_4170000000000000;
  do {
    dVar8 = local_228.Deadline;
    iVar14 = (int)local_228._padding_;
    lVar18 = local_228._padding_;
    if (((*(int *)(local_228._padding_ + 8) <= (int)local_228._padding_) ||
        ((*(byte *)(local_228._padding_ + 0x10c) & 2) != 0)) ||
       ((0.0 <= local_228.Deadline &&
        (QueryPerformanceCounter(&local_1e8),
        dVar8 <= (double)local_1e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5)))) {
      *(int *)(lVar18 + 0xec) = iVar14;
      return;
    }
    pTVar11 = UEnvQueryTest::GetItemLocation((UEnvQueryTest *)param_1,&local_158,param_3,iVar14);
    local_1b0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
    local_1b0._s_0.Y = (pTVar11->field0_0x0)._s_0.Y;
    local_1b0._s_0.Z = (double)param_5 + (pTVar11->field0_0x0)._s_0.Z;
    pAVar12 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)param_1,param_3,iVar14);
    local_138.IgnoreComponents.ArrayNum = (local_258->IgnoreComponents).ArrayNum;
    lVar18 = (longlong)local_138.IgnoreComponents.ArrayNum;
    local_138.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_138.bIgnoreTouches = local_258->bIgnoreTouches;
    local_138.TraceTag = local_258->TraceTag;
    local_138.bSkipNarrowPhase = local_258->bSkipNarrowPhase;
    local_138.bTraceIntoSubComponents = local_258->bTraceIntoSubComponents;
    local_138.bReplaceHitWithSubComponents = local_258->bReplaceHitWithSubComponents;
    local_138.MobilityType = local_258->MobilityType;
    local_138.OwnerTag = local_258->OwnerTag;
    local_138.IgnoreMask = local_258->IgnoreMask;
    local_138.bTraceComplex = local_258->bTraceComplex;
    local_138.StatId.StatIdPtr = (local_258->StatId).StatIdPtr;
    local_138.bFindInitialOverlaps = local_258->bFindInitialOverlaps;
    local_138.bDebugQuery = local_258->bDebugQuery;
    local_138.bReturnFaceIndex = local_258->bReturnFaceIndex;
    local_138.bComponentListUnique = local_258->bComponentListUnique;
    local_138.bReturnPhysicalMaterial = local_258->bReturnPhysicalMaterial;
    FVar13 = (local_258->IgnoreComponents).AllocatorInstance.SecondaryData;
    local_138.bIgnoreBlocks = local_258->bIgnoreBlocks;
    FVar19 = (ForElementType<unsigned_int>)&local_258->IgnoreComponents;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = FVar13;
    }
    if (local_138.IgnoreComponents.ArrayNum == 0) {
      local_138.IgnoreComponents.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_138.IgnoreComponents.ArrayNum,0,
                 &local_138.IgnoreComponents.AllocatorInstance,local_138.IgnoreComponents.ArrayNum,
                 &local_138.IgnoreComponents.ArrayMax);
      FVar13 = (ForElementType<unsigned_int>)&local_138.IgnoreComponents;
      if (local_138.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_138.IgnoreComponents.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar13,(void *)FVar19,lVar18 << 2);
    }
    FVar13 = (local_258->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    local_138.IgnoreSourceObjects.ArrayNum = (local_258->IgnoreSourceObjects).ArrayNum;
    lVar18 = (longlong)local_138.IgnoreSourceObjects.ArrayNum;
    local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    FVar19 = (ForElementType<unsigned_int>)&local_258->IgnoreSourceObjects;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = FVar13;
    }
    if (local_138.IgnoreSourceObjects.ArrayNum == 0) {
      local_138.IgnoreSourceObjects.ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_138.IgnoreSourceObjects.ArrayNum,0,
                 &local_138.IgnoreSourceObjects.AllocatorInstance,
                 local_138.IgnoreSourceObjects.ArrayNum,&local_138.IgnoreSourceObjects.ArrayMax);
      FVar13 = (ForElementType<unsigned_int>)&local_138.IgnoreSourceObjects;
      if (local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar13,(void *)FVar19,lVar18 << 2);
    }
    FCollisionQueryParams::AddIgnoredActor(&local_138,pAVar12);
    iVar14 = param_2->ArrayNum;
    uVar16 = 0;
    if (0 < iVar14) {
      do {
        EVar6 = local_268[0];
        this = (param_3->World).field0_0x0.DebugPtr;
        uVar15 = 0;
        if ((int)uVar16 < iVar14) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1c0.ShapeType = Capsule;
        local_1c0.field1_0x4.Box.HalfExtentX = fVar1;
        local_1c0.field1_0x4.Box.HalfExtentY = fVar2;
        bVar9 = UWorld::SweepTestByChannel
                          (this,param_2->DataPtr + (int)uVar16,(TVector<double> *)&local_1b0._s_0,
                           &UE::Math::TQuat<double>::Identity,EVar6,&local_1c0,&local_138,
                           (FCollisionResponseParams *)&local_178._s_0);
        FEnvQueryInstance::FItemIterator::SetScore(&local_228,param_7,param_8,bVar9,param_9);
        iVar14 = param_2->ArrayNum;
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < iVar14);
    }
    if (local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_138.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_138.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    FEnvQueryInstance::FItemIterator::StoreTestResult(&local_228);
    param_1 = local_260;
    if ((*(byte *)(local_228._padding_ + 0x10c) & 2) == 0) {
      local_228.ItemScore = 0.0;
      local_228.NumPassedForItem = 0;
      local_228.NumTestsForItem = 0;
      local_228.bForced = '\0';
      local_228.bPassed = '\x01';
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_228);
    }
  } while( true );
}

// RunTraces<1,0> @ 146f228b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnvQueryTest_Trace_Helpers::RunTraces<1,0>
          (UEnvQueryTest_Trace *param_1,TArrayView<UE::Math::TVector<double>,int> *param_2,
          FEnvQueryInstance *param_3,float param_4,float param_5,FEnvTraceData *param_6,Type param_7
          ,Type param_8,bool param_9,FCollisionQueryParams *param_10)

{
  uchar uVar1;
  UWorld *this;
  code *pcVar2;
  double dVar3;
  ECollisionChannel EVar4;
  UEnvQueryTest_Trace *pUVar5;
  double dVar6;
  bool bVar7;
  UObject *pUVar8;
  TVector<double> *pTVar9;
  AActor *pAVar10;
  ForElementType<unsigned_int> FVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  undefined1 auStackY_278 [32];
  ECollisionChannel local_238 [2];
  UEnvQueryTest_Trace *local_230;
  FCollisionQueryParams *local_228;
  FItemIterator local_220;
  FItemIterator local_1f8;
  FName local_1d0;
  FName local_1c8;
  LARGE_INTEGER local_1c0;
  LARGE_INTEGER local_1b8;
  FString local_1b0;
  FString local_1a0;
  TVector<double>_u_0 local_190;
  FString local_178;
  FString local_168;
  FCollisionResponseContainer_u_0 local_158;
  TVector<double> local_138;
  FCollisionQueryParams local_118;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar15 = 0;
  local_228 = param_10;
  local_238[0] = ECC_WorldStatic;
  uVar1 = (param_6->TraceMode).Value;
  local_158._0_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._0_8_;
  local_158._8_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._8_8_;
  local_158._16_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._16_8_;
  local_158._24_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._24_8_;
  local_230 = param_1;
  if (uVar1 == '\x03') {
    bVar7 = UCollisionProfile::GetChannelAndResponseParams
                      (param_6->TraceProfileName,local_238,
                       (FCollisionResponseParams *)&local_158._s_0);
    if (!bVar7) {
      if (FVisualLogger::bIsRecording != 0) {
        local_1d0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_1d0,&local_1b0);
        ::FName::ToString(&param_6->TraceProfileName,&local_178);
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_3->_padding_ + 4));
        FVisualLogger::CategorizedLogfImpl
                  (pUVar8,(FName *)&LogEQS.field_0x4,Error,
                   L"Unable to fetch collision channel and response from TraceProfileName %s, test %s for query %s will automatically fail"
                  );
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
      }
      pUVar5 = local_230;
      if (1 < (byte)LogEQS._0_1_) {
        local_1c8 = (FName)local_230->_padding_;
        ::FName::ToString(&local_1c8,&local_1a0);
        ::FName::ToString(&param_6->TraceProfileName,&local_168);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_EnvQueryTest_Trace_Helpers::RunTraces<1,0>(UEnvQueryTest_Trace_const&___ptr64,TArrayView<UE::Math::TVector<double>,int>_const&___ptr64,FEnvQueryInstance&___ptr64,float,float,FEnvTraceData_const&___ptr64,EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,FCollisionQueryParams_const&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_220,(UEnvQueryTest *)pUVar5,param_3,-1)
      ;
      dVar3 = __real_4170000000000000;
      while (((dVar6 = local_220.Deadline, iVar12 = (int)local_220._padding_,
              lVar16 = local_220._padding_,
              (int)local_220._padding_ < *(int *)(local_220._padding_ + 8) &&
              ((*(byte *)(local_220._padding_ + 0x10c) & 2) == 0)) &&
             ((local_220.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_1c0),
              (double)local_1c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3 < dVar6))))
            ) {
        FEnvQueryInstance::FItemIterator::SetScore(&local_220,param_7,param_8,!param_9,param_9);
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_220);
        if ((*(byte *)(local_220._padding_ + 0x10c) & 2) == 0) {
          local_220.ItemScore = 0.0;
          local_220.NumPassedForItem = 0;
          local_220.NumTestsForItem = 0;
          local_220.bForced = '\0';
          local_220.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_220);
        }
      }
      *(int *)(lVar16 + 0xec) = iVar12;
      return;
    }
  }
  else if (uVar1 == '\x02') {
    local_238[0] = UEngineTypes::ConvertToCollisionChannel((uint)(param_6->TraceChannel).Value);
  }
  iVar12 = param_2->ArrayNum;
  if (0 < iVar12) {
    uVar18 = uVar15;
    do {
      uVar13 = (uint)uVar15;
      uVar14 = 0;
      if ((int)uVar13 < iVar12) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar15 = (ulonglong)(uVar13 + 1);
      *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar18 + 0x10) =
           (double)param_4 + *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar18 + 0x10);
      uVar18 = uVar18 + 0x18;
      iVar12 = param_2->ArrayNum;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_1f8,(UEnvQueryTest *)param_1,param_3,-1);
  dVar3 = __real_4170000000000000;
  do {
    dVar6 = local_1f8.Deadline;
    iVar12 = (int)local_1f8._padding_;
    lVar16 = local_1f8._padding_;
    if (((*(int *)(local_1f8._padding_ + 8) <= (int)local_1f8._padding_) ||
        ((*(byte *)(local_1f8._padding_ + 0x10c) & 2) != 0)) ||
       ((0.0 <= local_1f8.Deadline &&
        (QueryPerformanceCounter(&local_1b8),
        dVar6 <= (double)local_1b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3)))) {
      *(int *)(lVar16 + 0xec) = iVar12;
      return;
    }
    pTVar9 = UEnvQueryTest::GetItemLocation((UEnvQueryTest *)param_1,&local_138,param_3,iVar12);
    local_190._s_0.X = (pTVar9->field0_0x0)._s_0.X;
    local_190._s_0.Y = (pTVar9->field0_0x0)._s_0.Y;
    local_190._s_0.Z = (double)param_5 + (pTVar9->field0_0x0)._s_0.Z;
    pAVar10 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)param_1,param_3,iVar12);
    local_118.IgnoreComponents.ArrayNum = (local_228->IgnoreComponents).ArrayNum;
    lVar16 = (longlong)local_118.IgnoreComponents.ArrayNum;
    local_118.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_118.bIgnoreTouches = local_228->bIgnoreTouches;
    local_118.TraceTag = local_228->TraceTag;
    local_118.bSkipNarrowPhase = local_228->bSkipNarrowPhase;
    local_118.bTraceIntoSubComponents = local_228->bTraceIntoSubComponents;
    local_118.bReplaceHitWithSubComponents = local_228->bReplaceHitWithSubComponents;
    local_118.MobilityType = local_228->MobilityType;
    local_118.OwnerTag = local_228->OwnerTag;
    local_118.IgnoreMask = local_228->IgnoreMask;
    local_118.bTraceComplex = local_228->bTraceComplex;
    local_118.StatId.StatIdPtr = (local_228->StatId).StatIdPtr;
    local_118.bFindInitialOverlaps = local_228->bFindInitialOverlaps;
    local_118.bDebugQuery = local_228->bDebugQuery;
    local_118.bReturnFaceIndex = local_228->bReturnFaceIndex;
    local_118.bComponentListUnique = local_228->bComponentListUnique;
    local_118.bReturnPhysicalMaterial = local_228->bReturnPhysicalMaterial;
    FVar11 = (local_228->IgnoreComponents).AllocatorInstance.SecondaryData;
    local_118.bIgnoreBlocks = local_228->bIgnoreBlocks;
    FVar17 = (ForElementType<unsigned_int>)&local_228->IgnoreComponents;
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar11;
    }
    if (local_118.IgnoreComponents.ArrayNum == 0) {
      local_118.IgnoreComponents.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_118.IgnoreComponents.ArrayNum,0,
                 &local_118.IgnoreComponents.AllocatorInstance,local_118.IgnoreComponents.ArrayNum,
                 &local_118.IgnoreComponents.ArrayMax);
      FVar11 = (ForElementType<unsigned_int>)&local_118.IgnoreComponents;
      if (local_118.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_118.IgnoreComponents.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar11,(void *)FVar17,lVar16 << 2);
    }
    FVar11 = (local_228->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    local_118.IgnoreSourceObjects.ArrayNum = (local_228->IgnoreSourceObjects).ArrayNum;
    lVar16 = (longlong)local_118.IgnoreSourceObjects.ArrayNum;
    local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    FVar17 = (ForElementType<unsigned_int>)&local_228->IgnoreSourceObjects;
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar11;
    }
    if (local_118.IgnoreSourceObjects.ArrayNum == 0) {
      local_118.IgnoreSourceObjects.ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_118.IgnoreSourceObjects.ArrayNum,0,
                 &local_118.IgnoreSourceObjects.AllocatorInstance,
                 local_118.IgnoreSourceObjects.ArrayNum,&local_118.IgnoreSourceObjects.ArrayMax);
      FVar11 = (ForElementType<unsigned_int>)&local_118.IgnoreSourceObjects;
      if (local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar11,(void *)FVar17,lVar16 << 2);
    }
    FCollisionQueryParams::AddIgnoredActor(&local_118,pAVar10);
    iVar12 = param_2->ArrayNum;
    uVar14 = 0;
    if (0 < iVar12) {
      do {
        EVar4 = local_238[0];
        this = (param_3->World).field0_0x0.DebugPtr;
        uVar13 = 0;
        if ((int)uVar14 < iVar12) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar7 = UWorld::LineTraceTestByChannel
                          (this,param_2->DataPtr + (int)uVar14,(TVector<double> *)&local_190._s_0,
                           EVar4,&local_118,(FCollisionResponseParams *)&local_158._s_0);
        FEnvQueryInstance::FItemIterator::SetScore(&local_1f8,param_7,param_8,bVar7,param_9);
        iVar12 = param_2->ArrayNum;
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar12);
    }
    if (local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_118.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_118.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    FEnvQueryInstance::FItemIterator::StoreTestResult(&local_1f8);
    param_1 = local_230;
    if ((*(byte *)(local_1f8._padding_ + 0x10c) & 2) == 0) {
      local_1f8.ItemScore = 0.0;
      local_1f8.NumPassedForItem = 0;
      local_1f8.NumTestsForItem = 0;
      local_1f8.bForced = '\0';
      local_1f8.bPassed = '\x01';
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_1f8);
    }
  } while( true );
}

// RunTraces<0,1> @ 146f23010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnvQueryTest_Trace_Helpers::RunTraces<0,1>
          (UEnvQueryTest_Trace *param_1,TArrayView<UE::Math::TVector<double>,int> *param_2,
          FEnvQueryInstance *param_3,float param_4,float param_5,FEnvTraceData *param_6,Type param_7
          ,Type param_8,bool param_9,FCollisionQueryParams *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uchar uVar4;
  UWorld *this;
  code *pcVar5;
  double dVar6;
  ECollisionChannel EVar7;
  double dVar8;
  bool bVar9;
  UObject *pUVar10;
  TVector<double> *pTVar11;
  AActor *pAVar12;
  TQuat<double> *pTVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStackY_328 [32];
  ECollisionChannel local_2e8 [2];
  UEnvQueryTest_Trace *local_2e0;
  FItemIterator local_2d8;
  FItemIterator local_2b0;
  FCollisionShape local_288;
  TVector<double>_u_0 local_278;
  FName local_260;
  FName local_258;
  LARGE_INTEGER local_250;
  LARGE_INTEGER local_248;
  FCollisionQueryParams *local_240;
  FString local_238;
  FString local_228;
  TVector<double>_u_0 local_218;
  FString local_200;
  FString local_1f0;
  FCollisionResponseContainer_u_0 local_1e0;
  TQuat<double> local_1b8;
  TRotator<double> local_198;
  TVector<double> local_180;
  TQuat<double> local_168;
  FCollisionQueryParams local_148;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  uVar4 = (param_6->TraceMode).Value;
  local_240 = param_10;
  local_2e8[0] = ECC_WorldStatic;
  local_1e0._0_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._0_8_;
  local_1e0._8_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._8_8_;
  local_1e0._16_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._16_8_;
  local_1e0._24_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._24_8_;
  local_2e0 = param_1;
  if (uVar4 == '\x03') {
    bVar9 = UCollisionProfile::GetChannelAndResponseParams
                      (param_6->TraceProfileName,local_2e8,
                       (FCollisionResponseParams *)&local_1e0._s_0);
    if (!bVar9) {
      if (FVisualLogger::bIsRecording != 0) {
        local_260 = (FName)local_2e0->_padding_;
        ::FName::ToString(&local_260,&local_238);
        ::FName::ToString(&param_6->TraceProfileName,&local_200);
        pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_3->_padding_ + 4));
        FVisualLogger::CategorizedLogfImpl
                  (pUVar10,(FName *)&LogEQS.field_0x4,Error,
                   L"Unable to fetch collision channel and response from TraceProfileName %s, test %s for query %s will automatically fail"
                  );
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        param_1 = local_2e0;
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
          param_1 = local_2e0;
        }
      }
      if (1 < (byte)LogEQS._0_1_) {
        local_258 = (FName)param_1->_padding_;
        ::FName::ToString(&local_258,&local_228);
        ::FName::ToString(&param_6->TraceProfileName,&local_1f0);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_EnvQueryTest_Trace_Helpers::RunTraces<0,1>(UEnvQueryTest_Trace_const&___ptr64,TArrayView<UE::Math::TVector<double>,int>_const&___ptr64,FEnvQueryInstance&___ptr64,float,float,FEnvTraceData_const&___ptr64,EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,FCollisionQueryParams_const&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
      }
      FEnvQueryInstance::FItemIterator::FItemIterator
                (&local_2d8,(UEnvQueryTest *)param_1,param_3,-1);
      dVar6 = __real_4170000000000000;
      while (((dVar8 = local_2d8.Deadline, iVar20 = (int)local_2d8._padding_,
              lVar17 = local_2d8._padding_,
              (int)local_2d8._padding_ < *(int *)(local_2d8._padding_ + 8) &&
              ((*(byte *)(local_2d8._padding_ + 0x10c) & 2) == 0)) &&
             ((local_2d8.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_250),
              (double)local_250.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6 < dVar8))))
            ) {
        FEnvQueryInstance::FItemIterator::SetScore(&local_2d8,param_7,param_8,!param_9,param_9);
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_2d8);
        if ((*(byte *)(local_2d8._padding_ + 0x10c) & 2) == 0) {
          local_2d8.ItemScore = 0.0;
          local_2d8.NumPassedForItem = 0;
          local_2d8.NumTestsForItem = 0;
          local_2d8.bForced = '\0';
          local_2d8.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_2d8);
        }
      }
      goto LAB_146f2382c;
    }
  }
  else if (uVar4 == '\x02') {
    local_2e8[0] = UEngineTypes::ConvertToCollisionChannel((uint)(param_6->TraceChannel).Value);
  }
  uVar16 = 0;
  iVar20 = param_2->ArrayNum;
  fVar1 = param_6->ExtentX;
  fVar2 = param_6->ExtentY;
  fVar3 = param_6->ExtentZ;
  if (0 < iVar20) {
    uVar21 = uVar16;
    do {
      uVar15 = (uint)uVar16;
      uVar19 = 0;
      if ((int)uVar15 < iVar20) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar21 + 0x10) =
           (double)param_4 + *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar21 + 0x10);
      uVar21 = uVar21 + 0x18;
      iVar20 = param_2->ArrayNum;
    } while ((int)(uVar15 + 1) < iVar20);
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_2b0,(UEnvQueryTest *)param_1,param_3,-1);
  dVar6 = __real_4170000000000000;
  while (((dVar8 = local_2b0.Deadline, iVar20 = (int)local_2b0._padding_,
          lVar17 = local_2b0._padding_, (int)local_2b0._padding_ < *(int *)(local_2b0._padding_ + 8)
          && ((*(byte *)(local_2b0._padding_ + 0x10c) & 2) == 0)) &&
         ((local_2b0.Deadline < 0.0 ||
          (QueryPerformanceCounter(&local_248),
          (double)local_248.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6 < dVar8))))) {
    pTVar11 = UEnvQueryTest::GetItemLocation((UEnvQueryTest *)param_1,&local_180,param_3,iVar20);
    local_278._s_0.X = (pTVar11->field0_0x0)._s_0.X;
    local_278._s_0.Y = (pTVar11->field0_0x0)._s_0.Y;
    local_278._s_0.Z = (double)param_5 + (pTVar11->field0_0x0)._s_0.Z;
    pAVar12 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)param_1,param_3,iVar20);
    local_148.IgnoreComponents.ArrayNum = (param_10->IgnoreComponents).ArrayNum;
    lVar17 = (longlong)local_148.IgnoreComponents.ArrayNum;
    local_148.TraceTag = param_10->TraceTag;
    local_148.bIgnoreTouches = param_10->bIgnoreTouches;
    local_148.bSkipNarrowPhase = param_10->bSkipNarrowPhase;
    local_148.bTraceIntoSubComponents = param_10->bTraceIntoSubComponents;
    local_148.bReplaceHitWithSubComponents = param_10->bReplaceHitWithSubComponents;
    local_148.MobilityType = param_10->MobilityType;
    local_148.OwnerTag = param_10->OwnerTag;
    local_148.IgnoreMask = param_10->IgnoreMask;
    local_148.bTraceComplex = param_10->bTraceComplex;
    local_148.StatId.StatIdPtr = (param_10->StatId).StatIdPtr;
    local_148.bFindInitialOverlaps = param_10->bFindInitialOverlaps;
    local_148.bDebugQuery = param_10->bDebugQuery;
    local_148.bReturnFaceIndex = param_10->bReturnFaceIndex;
    local_148.bComponentListUnique = param_10->bComponentListUnique;
    local_148.bReturnPhysicalMaterial = param_10->bReturnPhysicalMaterial;
    FVar14 = (param_10->IgnoreComponents).AllocatorInstance.SecondaryData;
    local_148.bIgnoreBlocks = param_10->bIgnoreBlocks;
    FVar18 = (ForElementType<unsigned_int>)&param_10->IgnoreComponents;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar14;
    }
    local_148.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    if (local_148.IgnoreComponents.ArrayNum == 0) {
      local_148.IgnoreComponents.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_148.IgnoreComponents.ArrayNum,0,
                 &local_148.IgnoreComponents.AllocatorInstance,local_148.IgnoreComponents.ArrayNum,
                 &local_148.IgnoreComponents.ArrayMax);
      FVar14 = (ForElementType<unsigned_int>)&local_148.IgnoreComponents;
      if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_148.IgnoreComponents.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar14,(void *)FVar18,lVar17 << 2);
    }
    FVar14 = (param_10->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    local_148.IgnoreSourceObjects.ArrayNum = (param_10->IgnoreSourceObjects).ArrayNum;
    lVar17 = (longlong)local_148.IgnoreSourceObjects.ArrayNum;
    local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    FVar18 = (ForElementType<unsigned_int>)&param_10->IgnoreSourceObjects;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar14;
    }
    if (local_148.IgnoreSourceObjects.ArrayNum == 0) {
      local_148.IgnoreSourceObjects.ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_148.IgnoreSourceObjects.ArrayNum,0,
                 &local_148.IgnoreSourceObjects.AllocatorInstance,
                 local_148.IgnoreSourceObjects.ArrayNum,&local_148.IgnoreSourceObjects.ArrayMax);
      FVar14 = (ForElementType<unsigned_int>)&local_148.IgnoreSourceObjects;
      if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar14,(void *)FVar18,lVar17 << 2);
    }
    FCollisionQueryParams::AddIgnoredActor(&local_148,pAVar12);
    iVar20 = param_2->ArrayNum;
    uVar19 = 0;
    if (0 < iVar20) {
      lVar17 = 0;
      do {
        EVar7 = local_2e8[0];
        this = (param_3->World).field0_0x0.DebugPtr;
        uVar15 = 0;
        if ((int)uVar19 < iVar20) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar11 = (TVector<double> *)((longlong)&param_2->DataPtr->field0_0x0 + lVar17);
        local_288.ShapeType = Box;
        local_218._s_0.X = (pTVar11->field0_0x0)._s_0.X - local_278._s_0.X;
        local_218._s_0.Y = (pTVar11->field0_0x0)._s_0.Y - local_278._s_0.Y;
        local_218._s_0.Z = (pTVar11->field0_0x0)._s_0.Z - local_278._s_0.Z;
        local_288.field1_0x4.Box.HalfExtentX = fVar1;
        local_288.field1_0x4.Box.HalfExtentY = fVar2;
        local_288.field1_0x4.Box.HalfExtentZ = fVar3;
        UE::Math::TVector<double>::ToOrientationRotator
                  ((TVector<double> *)&local_218._s_0,&local_198);
        pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_198,&local_168);
        local_1b8.X = pTVar13->X;
        local_1b8.Y = pTVar13->Y;
        local_1b8.Z = pTVar13->Z;
        local_1b8.W = pTVar13->W;
        bVar9 = UWorld::SweepTestByChannel
                          (this,(TVector<double> *)&local_278._s_0,pTVar11,&local_1b8,EVar7,
                           &local_288,&local_148,(FCollisionResponseParams *)&local_1e0._s_0);
        FEnvQueryInstance::FItemIterator::SetScore(&local_2b0,param_7,param_8,bVar9,param_9);
        iVar20 = param_2->ArrayNum;
        uVar19 = uVar19 + 1;
        lVar17 = lVar17 + 0x18;
        param_10 = local_240;
        param_1 = local_2e0;
      } while ((int)uVar19 < iVar20);
    }
    if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_148.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    FEnvQueryInstance::FItemIterator::StoreTestResult(&local_2b0);
    if ((*(byte *)(local_2b0._padding_ + 0x10c) & 2) == 0) {
      local_2b0.bForced = '\0';
      local_2b0.bPassed = '\x01';
      local_2b0.ItemScore = 0.0;
      local_2b0.NumPassedForItem = 0;
      local_2b0.NumTestsForItem = 0;
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_2b0);
    }
  }
LAB_146f2382c:
  *(int *)(lVar17 + 0xec) = iVar20;
  return;
}

// RunTraces<0,2> @ 146f23880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnvQueryTest_Trace_Helpers::RunTraces<0,2>
          (UEnvQueryTest_Trace *param_1,TArrayView<UE::Math::TVector<double>,int> *param_2,
          FEnvQueryInstance *param_3,float param_4,float param_5,FEnvTraceData *param_6,Type param_7
          ,Type param_8,bool param_9,FCollisionQueryParams *param_10)

{
  float fVar1;
  uchar uVar2;
  UWorld *this;
  code *pcVar3;
  double dVar4;
  ECollisionChannel EVar5;
  UEnvQueryTest_Trace *pUVar6;
  double dVar7;
  bool bVar8;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  AActor *pAVar11;
  ForElementType<unsigned_int> FVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  undefined1 auStackY_298 [32];
  ECollisionChannel local_258 [2];
  UEnvQueryTest_Trace *local_250;
  FCollisionQueryParams *local_248;
  FItemIterator local_240;
  FItemIterator local_218;
  FName local_1f0;
  FName local_1e8;
  LARGE_INTEGER local_1e0;
  LARGE_INTEGER local_1d8;
  FString local_1d0;
  FString local_1c0;
  FCollisionShape local_1b0;
  TVector<double>_u_0 local_1a0;
  FString local_188;
  FString local_178;
  FCollisionResponseContainer_u_0 local_168;
  TVector<double> local_148;
  FCollisionQueryParams local_128;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar16 = 0;
  local_248 = param_10;
  uVar2 = (param_6->TraceMode).Value;
  local_258[0] = ECC_WorldStatic;
  local_168._0_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._0_8_;
  local_168._8_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._8_8_;
  local_168._16_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._16_8_;
  local_168._24_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._24_8_;
  local_250 = param_1;
  if (uVar2 == '\x03') {
    bVar8 = UCollisionProfile::GetChannelAndResponseParams
                      (param_6->TraceProfileName,local_258,
                       (FCollisionResponseParams *)&local_168._s_0);
    if (!bVar8) {
      if (FVisualLogger::bIsRecording != 0) {
        local_1f0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_1f0,&local_1d0);
        ::FName::ToString(&param_6->TraceProfileName,&local_188);
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_3->_padding_ + 4));
        FVisualLogger::CategorizedLogfImpl
                  (pUVar9,(FName *)&LogEQS.field_0x4,Error,
                   L"Unable to fetch collision channel and response from TraceProfileName %s, test %s for query %s will automatically fail"
                  );
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
      pUVar6 = local_250;
      if (1 < (byte)LogEQS._0_1_) {
        local_1e8 = (FName)local_250->_padding_;
        ::FName::ToString(&local_1e8,&local_1c0);
        ::FName::ToString(&param_6->TraceProfileName,&local_178);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_EnvQueryTest_Trace_Helpers::RunTraces<0,2>(UEnvQueryTest_Trace_const&___ptr64,TArrayView<UE::Math::TVector<double>,int>_const&___ptr64,FEnvQueryInstance&___ptr64,float,float,FEnvTraceData_const&___ptr64,EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,FCollisionQueryParams_const&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
      }
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_240,(UEnvQueryTest *)pUVar6,param_3,-1)
      ;
      dVar4 = __real_4170000000000000;
      while (((dVar7 = local_240.Deadline, iVar13 = (int)local_240._padding_,
              lVar17 = local_240._padding_,
              (int)local_240._padding_ < *(int *)(local_240._padding_ + 8) &&
              ((*(byte *)(local_240._padding_ + 0x10c) & 2) == 0)) &&
             ((local_240.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_1e0),
              (double)local_1e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4 < dVar7))))
            ) {
        FEnvQueryInstance::FItemIterator::SetScore(&local_240,param_7,param_8,!param_9,param_9);
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_240);
        if ((*(byte *)(local_240._padding_ + 0x10c) & 2) == 0) {
          local_240.ItemScore = 0.0;
          local_240.NumPassedForItem = 0;
          local_240.NumTestsForItem = 0;
          local_240.bForced = '\0';
          local_240.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_240);
        }
      }
      *(int *)(lVar17 + 0xec) = iVar13;
      return;
    }
  }
  else if (uVar2 == '\x02') {
    local_258[0] = UEngineTypes::ConvertToCollisionChannel((uint)(param_6->TraceChannel).Value);
  }
  iVar13 = param_2->ArrayNum;
  fVar1 = param_6->ExtentX;
  if (0 < iVar13) {
    uVar19 = uVar16;
    do {
      uVar14 = (uint)uVar16;
      uVar15 = 0;
      if ((int)uVar14 < iVar13) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = (ulonglong)(uVar14 + 1);
      *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar19 + 0x10) =
           (double)param_4 + *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar19 + 0x10);
      uVar19 = uVar19 + 0x18;
      iVar13 = param_2->ArrayNum;
    } while ((int)(uVar14 + 1) < iVar13);
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_218,(UEnvQueryTest *)param_1,param_3,-1);
  dVar4 = __real_4170000000000000;
  do {
    dVar7 = local_218.Deadline;
    iVar13 = (int)local_218._padding_;
    lVar17 = local_218._padding_;
    if (((*(int *)(local_218._padding_ + 8) <= (int)local_218._padding_) ||
        ((*(byte *)(local_218._padding_ + 0x10c) & 2) != 0)) ||
       ((0.0 <= local_218.Deadline &&
        (QueryPerformanceCounter(&local_1d8),
        dVar7 <= (double)local_1d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4)))) {
      *(int *)(lVar17 + 0xec) = iVar13;
      return;
    }
    pTVar10 = UEnvQueryTest::GetItemLocation((UEnvQueryTest *)param_1,&local_148,param_3,iVar13);
    local_1a0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    local_1a0._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
    local_1a0._s_0.Z = (double)param_5 + (pTVar10->field0_0x0)._s_0.Z;
    pAVar11 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)param_1,param_3,iVar13);
    local_128.IgnoreComponents.ArrayNum = (local_248->IgnoreComponents).ArrayNum;
    lVar17 = (longlong)local_128.IgnoreComponents.ArrayNum;
    local_128.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_128.bIgnoreTouches = local_248->bIgnoreTouches;
    local_128.TraceTag = local_248->TraceTag;
    local_128.bSkipNarrowPhase = local_248->bSkipNarrowPhase;
    local_128.bTraceIntoSubComponents = local_248->bTraceIntoSubComponents;
    local_128.bReplaceHitWithSubComponents = local_248->bReplaceHitWithSubComponents;
    local_128.MobilityType = local_248->MobilityType;
    local_128.OwnerTag = local_248->OwnerTag;
    local_128.IgnoreMask = local_248->IgnoreMask;
    local_128.bTraceComplex = local_248->bTraceComplex;
    local_128.StatId.StatIdPtr = (local_248->StatId).StatIdPtr;
    local_128.bFindInitialOverlaps = local_248->bFindInitialOverlaps;
    local_128.bDebugQuery = local_248->bDebugQuery;
    local_128.bReturnFaceIndex = local_248->bReturnFaceIndex;
    local_128.bComponentListUnique = local_248->bComponentListUnique;
    local_128.bReturnPhysicalMaterial = local_248->bReturnPhysicalMaterial;
    FVar12 = (local_248->IgnoreComponents).AllocatorInstance.SecondaryData;
    local_128.bIgnoreBlocks = local_248->bIgnoreBlocks;
    FVar18 = (ForElementType<unsigned_int>)&local_248->IgnoreComponents;
    if (FVar12 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar12;
    }
    if (local_128.IgnoreComponents.ArrayNum == 0) {
      local_128.IgnoreComponents.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_128.IgnoreComponents.ArrayNum,0,
                 &local_128.IgnoreComponents.AllocatorInstance,local_128.IgnoreComponents.ArrayNum,
                 &local_128.IgnoreComponents.ArrayMax);
      FVar12 = (ForElementType<unsigned_int>)&local_128.IgnoreComponents;
      if (local_128.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_128.IgnoreComponents.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar12,(void *)FVar18,lVar17 << 2);
    }
    FVar12 = (local_248->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    local_128.IgnoreSourceObjects.ArrayNum = (local_248->IgnoreSourceObjects).ArrayNum;
    lVar17 = (longlong)local_128.IgnoreSourceObjects.ArrayNum;
    local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    FVar18 = (ForElementType<unsigned_int>)&local_248->IgnoreSourceObjects;
    if (FVar12 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar12;
    }
    if (local_128.IgnoreSourceObjects.ArrayNum == 0) {
      local_128.IgnoreSourceObjects.ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_128.IgnoreSourceObjects.ArrayNum,0,
                 &local_128.IgnoreSourceObjects.AllocatorInstance,
                 local_128.IgnoreSourceObjects.ArrayNum,&local_128.IgnoreSourceObjects.ArrayMax);
      FVar12 = (ForElementType<unsigned_int>)&local_128.IgnoreSourceObjects;
      if (local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar12,(void *)FVar18,lVar17 << 2);
    }
    FCollisionQueryParams::AddIgnoredActor(&local_128,pAVar11);
    iVar13 = param_2->ArrayNum;
    uVar15 = 0;
    if (0 < iVar13) {
      do {
        EVar5 = local_258[0];
        this = (param_3->World).field0_0x0.DebugPtr;
        uVar14 = 0;
        if ((int)uVar15 < iVar13) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_1b0.ShapeType = Sphere;
        local_1b0.field1_0x4.Box.HalfExtentX = fVar1;
        bVar8 = UWorld::SweepTestByChannel
                          (this,(TVector<double> *)&local_1a0._s_0,param_2->DataPtr + (int)uVar15,
                           &UE::Math::TQuat<double>::Identity,EVar5,&local_1b0,&local_128,
                           (FCollisionResponseParams *)&local_168._s_0);
        FEnvQueryInstance::FItemIterator::SetScore(&local_218,param_7,param_8,bVar8,param_9);
        iVar13 = param_2->ArrayNum;
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < iVar13);
    }
    if (local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_128.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    FEnvQueryInstance::FItemIterator::StoreTestResult(&local_218);
    param_1 = local_250;
    if ((*(byte *)(local_218._padding_ + 0x10c) & 2) == 0) {
      local_218.ItemScore = 0.0;
      local_218.NumPassedForItem = 0;
      local_218.NumTestsForItem = 0;
      local_218.bForced = '\0';
      local_218.bPassed = '\x01';
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_218);
    }
  } while( true );
}

// RunTraces<0,3> @ 146f24030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnvQueryTest_Trace_Helpers::RunTraces<0,3>
          (UEnvQueryTest_Trace *param_1,TArrayView<UE::Math::TVector<double>,int> *param_2,
          FEnvQueryInstance *param_3,float param_4,float param_5,FEnvTraceData *param_6,Type param_7
          ,Type param_8,bool param_9,FCollisionQueryParams *param_10)

{
  float fVar1;
  float fVar2;
  uchar uVar3;
  UWorld *this;
  code *pcVar4;
  double dVar5;
  ECollisionChannel EVar6;
  UEnvQueryTest_Trace *pUVar7;
  double dVar8;
  bool bVar9;
  UObject *pUVar10;
  TVector<double> *pTVar11;
  AActor *pAVar12;
  ForElementType<unsigned_int> FVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ForElementType<unsigned_int> FVar19;
  ulonglong uVar20;
  undefined1 auStackY_2a8 [32];
  ECollisionChannel local_268 [2];
  UEnvQueryTest_Trace *local_260;
  FCollisionQueryParams *local_258;
  FItemIterator local_250;
  FItemIterator local_228;
  FName local_200;
  FName local_1f8;
  LARGE_INTEGER local_1f0;
  LARGE_INTEGER local_1e8;
  FString local_1e0;
  FString local_1d0;
  FCollisionShape local_1c0;
  TVector<double>_u_0 local_1b0;
  FString local_198;
  FString local_188;
  FCollisionResponseContainer_u_0 local_178;
  TVector<double> local_158;
  FCollisionQueryParams local_138;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar17 = 0;
  local_258 = param_10;
  uVar3 = (param_6->TraceMode).Value;
  local_268[0] = ECC_WorldStatic;
  local_178._0_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._0_8_;
  local_178._8_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._8_8_;
  local_178._16_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._16_8_;
  local_178._24_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._24_8_;
  local_260 = param_1;
  if (uVar3 == '\x03') {
    bVar9 = UCollisionProfile::GetChannelAndResponseParams
                      (param_6->TraceProfileName,local_268,
                       (FCollisionResponseParams *)&local_178._s_0);
    if (!bVar9) {
      if (FVisualLogger::bIsRecording != 0) {
        local_200 = (FName)param_1->_padding_;
        ::FName::ToString(&local_200,&local_1e0);
        ::FName::ToString(&param_6->TraceProfileName,&local_198);
        pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_3->_padding_ + 4));
        FVisualLogger::CategorizedLogfImpl
                  (pUVar10,(FName *)&LogEQS.field_0x4,Error,
                   L"Unable to fetch collision channel and response from TraceProfileName %s, test %s for query %s will automatically fail"
                  );
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
      pUVar7 = local_260;
      if (1 < (byte)LogEQS._0_1_) {
        local_1f8 = (FName)local_260->_padding_;
        ::FName::ToString(&local_1f8,&local_1d0);
        ::FName::ToString(&param_6->TraceProfileName,&local_188);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_EnvQueryTest_Trace_Helpers::RunTraces<0,3>(UEnvQueryTest_Trace_const&___ptr64,TArrayView<UE::Math::TVector<double>,int>_const&___ptr64,FEnvQueryInstance&___ptr64,float,float,FEnvTraceData_const&___ptr64,EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,FCollisionQueryParams_const&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_250,(UEnvQueryTest *)pUVar7,param_3,-1)
      ;
      dVar5 = __real_4170000000000000;
      while (((dVar8 = local_250.Deadline, iVar14 = (int)local_250._padding_,
              lVar18 = local_250._padding_,
              (int)local_250._padding_ < *(int *)(local_250._padding_ + 8) &&
              ((*(byte *)(local_250._padding_ + 0x10c) & 2) == 0)) &&
             ((local_250.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_1f0),
              (double)local_1f0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5 < dVar8))))
            ) {
        FEnvQueryInstance::FItemIterator::SetScore(&local_250,param_7,param_8,!param_9,param_9);
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_250);
        if ((*(byte *)(local_250._padding_ + 0x10c) & 2) == 0) {
          local_250.ItemScore = 0.0;
          local_250.NumPassedForItem = 0;
          local_250.NumTestsForItem = 0;
          local_250.bForced = '\0';
          local_250.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_250);
        }
      }
      *(int *)(lVar18 + 0xec) = iVar14;
      return;
    }
  }
  else if (uVar3 == '\x02') {
    local_268[0] = UEngineTypes::ConvertToCollisionChannel((uint)(param_6->TraceChannel).Value);
  }
  iVar14 = param_2->ArrayNum;
  fVar1 = param_6->ExtentX;
  fVar2 = param_6->ExtentZ;
  if (0 < iVar14) {
    uVar20 = uVar17;
    do {
      uVar15 = (uint)uVar17;
      uVar16 = 0;
      if ((int)uVar15 < iVar14) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar17 = (ulonglong)(uVar15 + 1);
      *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar20 + 0x10) =
           (double)param_4 + *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar20 + 0x10);
      uVar20 = uVar20 + 0x18;
      iVar14 = param_2->ArrayNum;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_228,(UEnvQueryTest *)param_1,param_3,-1);
  dVar5 = __real_4170000000000000;
  do {
    dVar8 = local_228.Deadline;
    iVar14 = (int)local_228._padding_;
    lVar18 = local_228._padding_;
    if (((*(int *)(local_228._padding_ + 8) <= (int)local_228._padding_) ||
        ((*(byte *)(local_228._padding_ + 0x10c) & 2) != 0)) ||
       ((0.0 <= local_228.Deadline &&
        (QueryPerformanceCounter(&local_1e8),
        dVar8 <= (double)local_1e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5)))) {
      *(int *)(lVar18 + 0xec) = iVar14;
      return;
    }
    pTVar11 = UEnvQueryTest::GetItemLocation((UEnvQueryTest *)param_1,&local_158,param_3,iVar14);
    local_1b0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
    local_1b0._s_0.Y = (pTVar11->field0_0x0)._s_0.Y;
    local_1b0._s_0.Z = (double)param_5 + (pTVar11->field0_0x0)._s_0.Z;
    pAVar12 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)param_1,param_3,iVar14);
    local_138.IgnoreComponents.ArrayNum = (local_258->IgnoreComponents).ArrayNum;
    lVar18 = (longlong)local_138.IgnoreComponents.ArrayNum;
    local_138.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_138.bIgnoreTouches = local_258->bIgnoreTouches;
    local_138.TraceTag = local_258->TraceTag;
    local_138.bSkipNarrowPhase = local_258->bSkipNarrowPhase;
    local_138.bTraceIntoSubComponents = local_258->bTraceIntoSubComponents;
    local_138.bReplaceHitWithSubComponents = local_258->bReplaceHitWithSubComponents;
    local_138.MobilityType = local_258->MobilityType;
    local_138.OwnerTag = local_258->OwnerTag;
    local_138.IgnoreMask = local_258->IgnoreMask;
    local_138.bTraceComplex = local_258->bTraceComplex;
    local_138.StatId.StatIdPtr = (local_258->StatId).StatIdPtr;
    local_138.bFindInitialOverlaps = local_258->bFindInitialOverlaps;
    local_138.bDebugQuery = local_258->bDebugQuery;
    local_138.bReturnFaceIndex = local_258->bReturnFaceIndex;
    local_138.bComponentListUnique = local_258->bComponentListUnique;
    local_138.bReturnPhysicalMaterial = local_258->bReturnPhysicalMaterial;
    FVar13 = (local_258->IgnoreComponents).AllocatorInstance.SecondaryData;
    local_138.bIgnoreBlocks = local_258->bIgnoreBlocks;
    FVar19 = (ForElementType<unsigned_int>)&local_258->IgnoreComponents;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = FVar13;
    }
    if (local_138.IgnoreComponents.ArrayNum == 0) {
      local_138.IgnoreComponents.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_138.IgnoreComponents.ArrayNum,0,
                 &local_138.IgnoreComponents.AllocatorInstance,local_138.IgnoreComponents.ArrayNum,
                 &local_138.IgnoreComponents.ArrayMax);
      FVar13 = (ForElementType<unsigned_int>)&local_138.IgnoreComponents;
      if (local_138.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_138.IgnoreComponents.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar13,(void *)FVar19,lVar18 << 2);
    }
    FVar13 = (local_258->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    local_138.IgnoreSourceObjects.ArrayNum = (local_258->IgnoreSourceObjects).ArrayNum;
    lVar18 = (longlong)local_138.IgnoreSourceObjects.ArrayNum;
    local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    FVar19 = (ForElementType<unsigned_int>)&local_258->IgnoreSourceObjects;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = FVar13;
    }
    if (local_138.IgnoreSourceObjects.ArrayNum == 0) {
      local_138.IgnoreSourceObjects.ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_138.IgnoreSourceObjects.ArrayNum,0,
                 &local_138.IgnoreSourceObjects.AllocatorInstance,
                 local_138.IgnoreSourceObjects.ArrayNum,&local_138.IgnoreSourceObjects.ArrayMax);
      FVar13 = (ForElementType<unsigned_int>)&local_138.IgnoreSourceObjects;
      if (local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar13,(void *)FVar19,lVar18 << 2);
    }
    FCollisionQueryParams::AddIgnoredActor(&local_138,pAVar12);
    iVar14 = param_2->ArrayNum;
    uVar16 = 0;
    if (0 < iVar14) {
      do {
        EVar6 = local_268[0];
        this = (param_3->World).field0_0x0.DebugPtr;
        uVar15 = 0;
        if ((int)uVar16 < iVar14) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1c0.ShapeType = Capsule;
        local_1c0.field1_0x4.Box.HalfExtentX = fVar1;
        local_1c0.field1_0x4.Box.HalfExtentY = fVar2;
        bVar9 = UWorld::SweepTestByChannel
                          (this,(TVector<double> *)&local_1b0._s_0,param_2->DataPtr + (int)uVar16,
                           &UE::Math::TQuat<double>::Identity,EVar6,&local_1c0,&local_138,
                           (FCollisionResponseParams *)&local_178._s_0);
        FEnvQueryInstance::FItemIterator::SetScore(&local_228,param_7,param_8,bVar9,param_9);
        iVar14 = param_2->ArrayNum;
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < iVar14);
    }
    if (local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_138.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_138.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_138.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    FEnvQueryInstance::FItemIterator::StoreTestResult(&local_228);
    param_1 = local_260;
    if ((*(byte *)(local_228._padding_ + 0x10c) & 2) == 0) {
      local_228.ItemScore = 0.0;
      local_228.NumPassedForItem = 0;
      local_228.NumTestsForItem = 0;
      local_228.bForced = '\0';
      local_228.bPassed = '\x01';
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_228);
    }
  } while( true );
}

// RunTraces<0,0> @ 146f24800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
EnvQueryTest_Trace_Helpers::RunTraces<0,0>
          (UEnvQueryTest_Trace *param_1,TArrayView<UE::Math::TVector<double>,int> *param_2,
          FEnvQueryInstance *param_3,float param_4,float param_5,FEnvTraceData *param_6,Type param_7
          ,Type param_8,bool param_9,FCollisionQueryParams *param_10)

{
  uchar uVar1;
  UWorld *this;
  code *pcVar2;
  double dVar3;
  ECollisionChannel EVar4;
  UEnvQueryTest_Trace *pUVar5;
  double dVar6;
  bool bVar7;
  UObject *pUVar8;
  TVector<double> *pTVar9;
  AActor *pAVar10;
  ForElementType<unsigned_int> FVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  undefined1 auStackY_278 [32];
  ECollisionChannel local_238 [2];
  UEnvQueryTest_Trace *local_230;
  FCollisionQueryParams *local_228;
  FItemIterator local_220;
  FItemIterator local_1f8;
  FName local_1d0;
  FName local_1c8;
  LARGE_INTEGER local_1c0;
  LARGE_INTEGER local_1b8;
  FString local_1b0;
  FString local_1a0;
  TVector<double>_u_0 local_190;
  FString local_178;
  FString local_168;
  FCollisionResponseContainer_u_0 local_158;
  TVector<double> local_138;
  FCollisionQueryParams local_118;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar15 = 0;
  local_228 = param_10;
  local_238[0] = ECC_WorldStatic;
  uVar1 = (param_6->TraceMode).Value;
  local_158._0_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._0_8_;
  local_158._8_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._8_8_;
  local_158._16_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._16_8_;
  local_158._24_8_ =
       FCollisionResponseParams::DefaultResponseParam.CollisionResponse.field0_0x0._24_8_;
  local_230 = param_1;
  if (uVar1 == '\x03') {
    bVar7 = UCollisionProfile::GetChannelAndResponseParams
                      (param_6->TraceProfileName,local_238,
                       (FCollisionResponseParams *)&local_158._s_0);
    if (!bVar7) {
      if (FVisualLogger::bIsRecording != 0) {
        local_1d0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_1d0,&local_1b0);
        ::FName::ToString(&param_6->TraceProfileName,&local_178);
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_3->_padding_ + 4));
        FVisualLogger::CategorizedLogfImpl
                  (pUVar8,(FName *)&LogEQS.field_0x4,Error,
                   L"Unable to fetch collision channel and response from TraceProfileName %s, test %s for query %s will automatically fail"
                  );
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
      }
      pUVar5 = local_230;
      if (1 < (byte)LogEQS._0_1_) {
        local_1c8 = (FName)local_230->_padding_;
        ::FName::ToString(&local_1c8,&local_1a0);
        ::FName::ToString(&param_6->TraceProfileName,&local_168);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_EnvQueryTest_Trace_Helpers::RunTraces<0,0>(UEnvQueryTest_Trace_const&___ptr64,TArrayView<UE::Math::TVector<double>,int>_const&___ptr64,FEnvQueryInstance&___ptr64,float,float,FEnvTraceData_const&___ptr64,EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,FCollisionQueryParams_const&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogEQS);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      FEnvQueryInstance::FItemIterator::FItemIterator(&local_220,(UEnvQueryTest *)pUVar5,param_3,-1)
      ;
      dVar3 = __real_4170000000000000;
      while (((dVar6 = local_220.Deadline, iVar12 = (int)local_220._padding_,
              lVar16 = local_220._padding_,
              (int)local_220._padding_ < *(int *)(local_220._padding_ + 8) &&
              ((*(byte *)(local_220._padding_ + 0x10c) & 2) == 0)) &&
             ((local_220.Deadline < 0.0 ||
              (QueryPerformanceCounter(&local_1c0),
              (double)local_1c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3 < dVar6))))
            ) {
        FEnvQueryInstance::FItemIterator::SetScore(&local_220,param_7,param_8,!param_9,param_9);
        FEnvQueryInstance::FItemIterator::StoreTestResult(&local_220);
        if ((*(byte *)(local_220._padding_ + 0x10c) & 2) == 0) {
          local_220.ItemScore = 0.0;
          local_220.NumPassedForItem = 0;
          local_220.NumTestsForItem = 0;
          local_220.bForced = '\0';
          local_220.bPassed = '\x01';
          FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_220);
        }
      }
      *(int *)(lVar16 + 0xec) = iVar12;
      return;
    }
  }
  else if (uVar1 == '\x02') {
    local_238[0] = UEngineTypes::ConvertToCollisionChannel((uint)(param_6->TraceChannel).Value);
  }
  iVar12 = param_2->ArrayNum;
  if (0 < iVar12) {
    uVar18 = uVar15;
    do {
      uVar13 = (uint)uVar15;
      uVar14 = 0;
      if ((int)uVar13 < iVar12) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar15 = (ulonglong)(uVar13 + 1);
      *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar18 + 0x10) =
           (double)param_4 + *(double *)((longlong)&param_2->DataPtr->field0_0x0 + uVar18 + 0x10);
      uVar18 = uVar18 + 0x18;
      iVar12 = param_2->ArrayNum;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_1f8,(UEnvQueryTest *)param_1,param_3,-1);
  dVar3 = __real_4170000000000000;
  do {
    dVar6 = local_1f8.Deadline;
    iVar12 = (int)local_1f8._padding_;
    lVar16 = local_1f8._padding_;
    if (((*(int *)(local_1f8._padding_ + 8) <= (int)local_1f8._padding_) ||
        ((*(byte *)(local_1f8._padding_ + 0x10c) & 2) != 0)) ||
       ((0.0 <= local_1f8.Deadline &&
        (QueryPerformanceCounter(&local_1b8),
        dVar6 <= (double)local_1b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3)))) {
      *(int *)(lVar16 + 0xec) = iVar12;
      return;
    }
    pTVar9 = UEnvQueryTest::GetItemLocation((UEnvQueryTest *)param_1,&local_138,param_3,iVar12);
    local_190._s_0.X = (pTVar9->field0_0x0)._s_0.X;
    local_190._s_0.Y = (pTVar9->field0_0x0)._s_0.Y;
    local_190._s_0.Z = (double)param_5 + (pTVar9->field0_0x0)._s_0.Z;
    pAVar10 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)param_1,param_3,iVar12);
    local_118.IgnoreComponents.ArrayNum = (local_228->IgnoreComponents).ArrayNum;
    lVar16 = (longlong)local_118.IgnoreComponents.ArrayNum;
    local_118.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_118.bIgnoreTouches = local_228->bIgnoreTouches;
    local_118.TraceTag = local_228->TraceTag;
    local_118.bSkipNarrowPhase = local_228->bSkipNarrowPhase;
    local_118.bTraceIntoSubComponents = local_228->bTraceIntoSubComponents;
    local_118.bReplaceHitWithSubComponents = local_228->bReplaceHitWithSubComponents;
    local_118.MobilityType = local_228->MobilityType;
    local_118.OwnerTag = local_228->OwnerTag;
    local_118.IgnoreMask = local_228->IgnoreMask;
    local_118.bTraceComplex = local_228->bTraceComplex;
    local_118.StatId.StatIdPtr = (local_228->StatId).StatIdPtr;
    local_118.bFindInitialOverlaps = local_228->bFindInitialOverlaps;
    local_118.bDebugQuery = local_228->bDebugQuery;
    local_118.bReturnFaceIndex = local_228->bReturnFaceIndex;
    local_118.bComponentListUnique = local_228->bComponentListUnique;
    local_118.bReturnPhysicalMaterial = local_228->bReturnPhysicalMaterial;
    FVar11 = (local_228->IgnoreComponents).AllocatorInstance.SecondaryData;
    local_118.bIgnoreBlocks = local_228->bIgnoreBlocks;
    FVar17 = (ForElementType<unsigned_int>)&local_228->IgnoreComponents;
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar11;
    }
    if (local_118.IgnoreComponents.ArrayNum == 0) {
      local_118.IgnoreComponents.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_118.IgnoreComponents.ArrayNum,0,
                 &local_118.IgnoreComponents.AllocatorInstance,local_118.IgnoreComponents.ArrayNum,
                 &local_118.IgnoreComponents.ArrayMax);
      FVar11 = (ForElementType<unsigned_int>)&local_118.IgnoreComponents;
      if (local_118.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_118.IgnoreComponents.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar11,(void *)FVar17,lVar16 << 2);
    }
    FVar11 = (local_228->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    local_118.IgnoreSourceObjects.ArrayNum = (local_228->IgnoreSourceObjects).ArrayNum;
    lVar16 = (longlong)local_118.IgnoreSourceObjects.ArrayNum;
    local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    FVar17 = (ForElementType<unsigned_int>)&local_228->IgnoreSourceObjects;
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar11;
    }
    if (local_118.IgnoreSourceObjects.ArrayNum == 0) {
      local_118.IgnoreSourceObjects.ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,local_118.IgnoreSourceObjects.ArrayNum,0,
                 &local_118.IgnoreSourceObjects.AllocatorInstance,
                 local_118.IgnoreSourceObjects.ArrayNum,&local_118.IgnoreSourceObjects.ArrayMax);
      FVar11 = (ForElementType<unsigned_int>)&local_118.IgnoreSourceObjects;
      if (local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar11,(void *)FVar17,lVar16 << 2);
    }
    FCollisionQueryParams::AddIgnoredActor(&local_118,pAVar10);
    iVar12 = param_2->ArrayNum;
    uVar14 = 0;
    if (0 < iVar12) {
      do {
        EVar4 = local_238[0];
        this = (param_3->World).field0_0x0.DebugPtr;
        uVar13 = 0;
        if ((int)uVar14 < iVar12) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar7 = UWorld::LineTraceTestByChannel
                          (this,(TVector<double> *)&local_190._s_0,param_2->DataPtr + (int)uVar14,
                           EVar4,&local_118,(FCollisionResponseParams *)&local_158._s_0);
        FEnvQueryInstance::FItemIterator::SetScore(&local_1f8,param_7,param_8,bVar7,param_9);
        iVar12 = param_2->ArrayNum;
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar12);
    }
    if (local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_118.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_118.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    FEnvQueryInstance::FItemIterator::StoreTestResult(&local_1f8);
    param_1 = local_230;
    if ((*(byte *)(local_1f8._padding_ + 0x10c) & 2) == 0) {
      local_1f8.ItemScore = 0.0;
      local_1f8.NumPassedForItem = 0;
      local_1f8.NumTestsForItem = 0;
      local_1f8.bForced = '\0';
      local_1f8.bPassed = '\x01';
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_1f8);
    }
  } while( true );
}

// StableSortInternal<TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_> @ 146f27640

void __cdecl
AlgoImpl::
StableSortInternal<TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_>
          (TObjectPtr<UEnvQueryTest> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching> param_4)

{
  TObjectPtr<UEnvQueryTest> TVar1;
  TObjectPtr<UEnvQueryTest> TVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (0 < param_2) {
    lVar4 = 0;
    iVar7 = 1;
    do {
      if (iVar7 < param_2) {
        TVar1.field0_0x0 = (TObjectPtr<UEnvQueryTest>_u_0)param_1[lVar4 + 1].field0_0x0.DebugPtr;
        TVar2.field0_0x0 = (TObjectPtr<UEnvQueryTest>_u_0)param_1[lVar4].field0_0x0.DebugPtr;
        bVar9 = *(char *)((longlong)TVar1.field0_0x0 + 0x34) != '\x01';
        if (bVar9 == (*(char *)((longlong)TVar2.field0_0x0 + 0x34) != '\x01')) {
          bVar9 = *(byte *)((longlong)TVar1.field0_0x0 + 0xf8) <
                  *(byte *)((longlong)TVar2.field0_0x0 + 0xf8);
        }
        if (bVar9) {
          param_1[lVar4].field0_0x0.DebugPtr = (UEnvQueryTest *)TVar1.field0_0x0;
          param_1[lVar4 + 1].field0_0x0.DebugPtr = (UEnvQueryTest *)TVar2.field0_0x0;
        }
      }
      iVar7 = iVar7 + 2;
      lVar4 = lVar4 + 2;
    } while (lVar4 < param_2);
  }
  iVar7 = 2;
  if (2 < param_2) {
    do {
      iVar3 = iVar7 * 2;
      iVar5 = 0;
      iVar6 = param_2;
      do {
        iVar8 = iVar6;
        if (iVar3 <= iVar6) {
          iVar8 = iVar3;
        }
        Merge<TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_>
                  (param_1 + iVar5,iVar7,iVar8,param_3,param_4);
        iVar5 = iVar5 + iVar3;
        iVar6 = iVar6 + iVar7 * -2;
      } while (iVar5 < param_2);
      iVar7 = iVar3;
    } while (iVar3 < param_2);
  }
  return;
}

// StaticEnum<enum_EAIParamType> @ 146f27750

UEnum * __cdecl StaticEnum<enum_EAIParamType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAIParamType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAIParamType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAIParamType,(UObject *)pUVar1,L"EAIParamType");
  }
  return Z_Registration_Info_UEnum_EAIParamType.OuterSingleton;
}

// StaticEnum<enum_EEQSNormalizationType> @ 146f27790

UEnum * __cdecl StaticEnum<enum_EEQSNormalizationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEQSNormalizationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEQSNormalizationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEQSNormalizationType,(UObject *)pUVar1,
                       L"EEQSNormalizationType");
  }
  return Z_Registration_Info_UEnum_EEQSNormalizationType.OuterSingleton;
}

// StaticEnum<enum_EEnvQueryHightlightMode> @ 146f277d0

UEnum * __cdecl StaticEnum<enum_EEnvQueryHightlightMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryHightlightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryHightlightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode,(UObject *)pUVar1,
                       L"EEnvQueryHightlightMode");
  }
  return Z_Registration_Info_UEnum_EEnvQueryHightlightMode.OuterSingleton;
}

// StaticEnum<enum_EEnvQueryResultNormalizationOption> @ 146f27810

UEnum * __cdecl StaticEnum<enum_EEnvQueryResultNormalizationOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryResultNormalizationOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryResultNormalizationOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryResultNormalizationOption,
                       (UObject *)pUVar1,L"EEnvQueryResultNormalizationOption");
  }
  return Z_Registration_Info_UEnum_EEnvQueryResultNormalizationOption.OuterSingleton;
}

// StaticEnum<enum_EEnvTestDot> @ 146f27850

UEnum * __cdecl StaticEnum<enum_EEnvTestDot>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDot,(UObject *)pUVar1,L"EEnvTestDot");
  }
  return Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton;
}

// StaticEnum<enum_EPointOnCircleSpacingMethod> @ 146f27890

UEnum * __cdecl StaticEnum<enum_EPointOnCircleSpacingMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod,(UObject *)pUVar1,
                       L"EPointOnCircleSpacingMethod");
  }
  return Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.OuterSingleton;
}

// StaticEnum<enum_EEnvDirection::Type> @ 146f278d0

UEnum * __cdecl StaticEnum<enum_EEnvDirection::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvDirection,(UObject *)pUVar1,L"EEnvDirection");
  }
  return Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton;
}

// StaticEnum<enum_EEnvOverlapShape::Type> @ 146f27910

UEnum * __cdecl StaticEnum<enum_EEnvOverlapShape::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvOverlapShape,(UObject *)pUVar1,
                       L"EEnvOverlapShape");
  }
  return Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton;
}

// StaticEnum<enum_EEnvQueryParam::Type> @ 146f27950

UEnum * __cdecl StaticEnum<enum_EEnvQueryParam::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryParam,(UObject *)pUVar1,L"EEnvQueryParam"
                      );
  }
  return Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton;
}

// StaticEnum<enum_EEnvQueryRunMode::Type> @ 146f27990

UEnum * __cdecl StaticEnum<enum_EEnvQueryRunMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryRunMode,(UObject *)pUVar1,
                       L"EEnvQueryRunMode");
  }
  return Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton;
}

// StaticEnum<enum_EEnvQueryStatus::Type> @ 146f279d0

UEnum * __cdecl StaticEnum<enum_EEnvQueryStatus::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryStatus,(UObject *)pUVar1,
                       L"EEnvQueryStatus");
  }
  return Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton;
}

// StaticEnum<enum_EEnvQueryTestClamping::Type> @ 146f27a10

UEnum * __cdecl StaticEnum<enum_EEnvQueryTestClamping::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping,(UObject *)pUVar1,
                       L"EEnvQueryTestClamping");
  }
  return Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton;
}

// StaticEnum<enum_EEnvQueryTrace::Type> @ 146f27a50

UEnum * __cdecl StaticEnum<enum_EEnvQueryTrace::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTrace,(UObject *)pUVar1,L"EEnvQueryTrace"
                      );
  }
  return Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton;
}

// StaticEnum<enum_EEnvTestCost::Type> @ 146f27a90

UEnum * __cdecl StaticEnum<enum_EEnvTestCost::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestCost,(UObject *)pUVar1,L"EEnvTestCost");
  }
  return Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton;
}

// StaticEnum<enum_EEnvTestDistance::Type> @ 146f27ad0

UEnum * __cdecl StaticEnum<enum_EEnvTestDistance::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestDistance.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestDistance.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDistance,(UObject *)pUVar1,
                       L"EEnvTestDistance");
  }
  return Z_Registration_Info_UEnum_EEnvTestDistance.OuterSingleton;
}

// StaticEnum<enum_EEnvTestFilterOperator::Type> @ 146f27b10

UEnum * __cdecl StaticEnum<enum_EEnvTestFilterOperator::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator,(UObject *)pUVar1,
                       L"EEnvTestFilterOperator");
  }
  return Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton;
}

// StaticEnum<enum_EEnvTestFilterType::Type> @ 146f27b50

UEnum * __cdecl StaticEnum<enum_EEnvTestFilterType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterType,(UObject *)pUVar1,
                       L"EEnvTestFilterType");
  }
  return Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton;
}

// StaticEnum<enum_EEnvTestPathfinding::Type> @ 146f27b90

UEnum * __cdecl StaticEnum<enum_EEnvTestPathfinding::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestPathfinding.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestPathfinding.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPathfinding,(UObject *)pUVar1,
                       L"EEnvTestPathfinding");
  }
  return Z_Registration_Info_UEnum_EEnvTestPathfinding.OuterSingleton;
}

// StaticEnum<enum_EEnvTestPurpose::Type> @ 146f27bd0

UEnum * __cdecl StaticEnum<enum_EEnvTestPurpose::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPurpose,(UObject *)pUVar1,
                       L"EEnvTestPurpose");
  }
  return Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton;
}

// StaticEnum<enum_EEnvTestScoreEquation::Type> @ 146f27c10

UEnum * __cdecl StaticEnum<enum_EEnvTestScoreEquation::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation,(UObject *)pUVar1,
                       L"EEnvTestScoreEquation");
  }
  return Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton;
}

// StaticEnum<enum_EEnvTestScoreOperator::Type> @ 146f27c50

UEnum * __cdecl StaticEnum<enum_EEnvTestScoreOperator::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator,(UObject *)pUVar1,
                       L"EEnvTestScoreOperator");
  }
  return Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton;
}

// StaticEnum<enum_EEnvTestWeight::Type> @ 146f27c90

UEnum * __cdecl StaticEnum<enum_EEnvTestWeight::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestWeight,(UObject *)pUVar1,L"EEnvTestWeight"
                      );
  }
  return Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton;
}

// StaticEnum<enum_EEnvTraceShape::Type> @ 146f27cd0

UEnum * __cdecl StaticEnum<enum_EEnvTraceShape::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTraceShape,(UObject *)pUVar1,L"EEnvTraceShape"
                      );
  }
  return Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton;
}

// TraceShape<1> @ 146f27d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShape<1>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  double dVar1;
  bool bVar2;
  TQuat<double> *pTVar3;
  FCollisionShape local_98;
  TVector<double>_u_0 local_88;
  TQuat<double> local_68;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_98.ShapeType = Box;
  local_98.field1_0x4.Box.HalfExtentX = (param_6->field0_0x0)._s_0.X;
  local_98.field1_0x4.Box.HalfExtentY = (param_6->field0_0x0)._s_0.Y;
  local_98.field1_0x4.Box.HalfExtentZ = (param_6->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  local_88._8_4_ = SUB84(dVar1,0);
  local_88._0_8_ = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  local_88._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_88._s_0,&local_48);
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&local_48,&local_28);
  local_68.X = pTVar3->X;
  local_68.Y = pTVar3->Y;
  local_68.Z = pTVar3->Z;
  local_68.W = pTVar3->W;
  bVar2 = UWorld::SweepTestByChannel
                    (param_3,param_1,param_2,&local_68,param_4,&local_98,param_5,param_7);
  return bVar2;
}

// TraceShape<2> @ 146f27e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShape<2>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  FCollisionShape local_18;
  
  local_18.ShapeType = Sphere;
  local_18.field1_0x4.Box.HalfExtentX = (param_6->field0_0x0)._s_0.X;
  bVar1 = UWorld::SweepTestByChannel
                    (param_3,param_1,param_2,&UE::Math::TQuat<double>::Identity,param_4,&local_18,
                     param_5,param_7);
  return bVar1;
}

// TraceShape<3> @ 146f27e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShape<3>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  FCollisionShape local_18;
  
  local_18.ShapeType = Capsule;
  local_18.field1_0x4.Box.HalfExtentX = (param_6->field0_0x0)._s_0.X;
  local_18.field1_0x4.Box.HalfExtentY = (param_6->field0_0x0)._s_0.Z;
  bVar1 = UWorld::SweepTestByChannel
                    (param_3,param_1,param_2,&UE::Math::TQuat<double>::Identity,param_4,&local_18,
                     param_5,param_7);
  return bVar1;
}

// TraceShape<0> @ 146f27f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShape<0>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  
  bVar1 = UWorld::LineTraceTestByChannel(param_3,param_1,param_2,param_4,param_5,param_7);
  return bVar1;
}

// TraceShapeWithDir<1,1> @ 146f27f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShapeWithDir<1,1>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  
  bVar1 = TraceShape<1>(param_2,param_1,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

// TraceShapeWithDir<1,2> @ 146f27f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShapeWithDir<1,2>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  FCollisionShape local_18;
  
  local_18.ShapeType = Sphere;
  local_18.field1_0x4.Box.HalfExtentX = (param_6->field0_0x0)._s_0.X;
  bVar1 = UWorld::SweepTestByChannel
                    (param_3,param_2,param_1,&UE::Math::TQuat<double>::Identity,param_4,&local_18,
                     param_5,param_7);
  return bVar1;
}

// TraceShapeWithDir<1,3> @ 146f27fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShapeWithDir<1,3>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  FCollisionShape local_18;
  
  local_18.ShapeType = Capsule;
  local_18.field1_0x4.Box.HalfExtentX = (param_6->field0_0x0)._s_0.X;
  local_18.field1_0x4.Box.HalfExtentY = (param_6->field0_0x0)._s_0.Z;
  bVar1 = UWorld::SweepTestByChannel
                    (param_3,param_2,param_1,&UE::Math::TQuat<double>::Identity,param_4,&local_18,
                     param_5,param_7);
  return bVar1;
}

// TraceShapeWithDir<1,0> @ 146f28050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShapeWithDir<1,0>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  
  bVar1 = UWorld::LineTraceTestByChannel(param_3,param_2,param_1,param_4,param_5,param_7);
  return bVar1;
}

// TraceShapeWithDir<0,1> @ 146f28070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShapeWithDir<0,1>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  double dVar1;
  bool bVar2;
  TQuat<double> *pTVar3;
  FCollisionShape FStack_98;
  TVector<double>_u_0 TStack_88;
  TQuat<double> TStack_68;
  TRotator<double> TStack_48;
  TQuat<double> TStack_28;
  
  FStack_98.ShapeType = Box;
  FStack_98.field1_0x4.Box.HalfExtentX = (param_6->field0_0x0)._s_0.X;
  FStack_98.field1_0x4.Box.HalfExtentY = (param_6->field0_0x0)._s_0.Y;
  FStack_98.field1_0x4.Box.HalfExtentZ = (param_6->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  TStack_88._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  TStack_88._8_4_ = SUB84(dVar1,0);
  TStack_88._0_8_ = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  TStack_88._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&TStack_88._s_0,&TStack_48);
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&TStack_48,&TStack_28);
  TStack_68.X = pTVar3->X;
  TStack_68.Y = pTVar3->Y;
  TStack_68.Z = pTVar3->Z;
  TStack_68.W = pTVar3->W;
  bVar2 = UWorld::SweepTestByChannel
                    (param_3,param_1,param_2,&TStack_68,param_4,&FStack_98,param_5,param_7);
  return bVar2;
}

// TraceShapeWithDir<0,2> @ 146f28080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShapeWithDir<0,2>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  FCollisionShape local_18;
  
  local_18.ShapeType = Sphere;
  local_18.field1_0x4.Box.HalfExtentX = (param_6->field0_0x0)._s_0.X;
  bVar1 = UWorld::SweepTestByChannel
                    (param_3,param_1,param_2,&UE::Math::TQuat<double>::Identity,param_4,&local_18,
                     param_5,param_7);
  return bVar1;
}

// TraceShapeWithDir<0,3> @ 146f280f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShapeWithDir<0,3>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  FCollisionShape local_18;
  
  local_18.ShapeType = Capsule;
  local_18.field1_0x4.Box.HalfExtentX = (param_6->field0_0x0)._s_0.X;
  local_18.field1_0x4.Box.HalfExtentY = (param_6->field0_0x0)._s_0.Z;
  bVar1 = UWorld::SweepTestByChannel
                    (param_3,param_1,param_2,&UE::Math::TQuat<double>::Identity,param_4,&local_18,
                     param_5,param_7);
  return bVar1;
}

// TraceShapeWithDir<0,0> @ 146f28170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
EnvQueryTest_Trace_Helpers::TraceShapeWithDir<0,0>
          (TVector<double> *param_1,TVector<double> *param_2,UWorld *param_3,
          ECollisionChannel param_4,FCollisionQueryParams *param_5,TVector<float> *param_6,
          FCollisionResponseParams *param_7)

{
  bool bVar1;
  
  bVar1 = UWorld::LineTraceTestByChannel(param_3,param_1,param_2,param_4,param_5,param_7);
  return bVar1;
}

// UpperBoundInternal<TObjectPtr<UEnvQueryTest>,int,TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_> @ 146f281a0

int __cdecl
AlgoImpl::
UpperBoundInternal<TObjectPtr<UEnvQueryTest>,int,TObjectPtr<UEnvQueryTest>,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching>_>
          (TObjectPtr<UEnvQueryTest> *param_1,int param_2,TObjectPtr<UEnvQueryTest> *param_3,
          FIdentityFunctor param_4,
          TDereferenceWrapper<TObjectPtr<UEnvQueryTest>,EnvQueryTestSort::FAllMatching> param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  if (0 < param_2) {
    bVar5 = (((param_3->field0_0x0).DebugPtr)->TestPurpose).Value != '\x01';
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = bVar5;
      if (bVar5 == (*(char *)((longlong)param_1[iVar1].field0_0x0.DebugPtr + 0x34) != '\x01')) {
        bVar3 = (((param_3->field0_0x0).DebugPtr)->Cost).Value <
                *(byte *)((longlong)param_1[iVar1].field0_0x0.DebugPtr + 0xf8);
      }
      if (!bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// operator<< @ 146f305a0

FArchive * __cdecl operator<<(FArchive *param_1,FDebugHelper *param_2)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  
  UE::Math::operator<<(param_1,&param_2->Location);
  pfVar1 = &param_2->Radius;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->AdditionalInformation);
  piVar2 = &param_2->FailedTestIndex;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar4 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
  return param_1;
}

// operator<< @ 146f30690

FArchive * __cdecl operator<<(FArchive *param_1,FEnvQueryDebugProfileData *param_2)

{
  longlong *plVar1;
  uint local_res8 [2];
  
  local_res8[0] = 1;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  TArrayPrivateFriend::Serialize<FEnvQueryDebugProfileData::FOptionStat,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->OptionStats);
  TArrayPrivateFriend::Serialize<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->OptionData);
  return param_1;
}

// operator<< @ 146f30720

FArchive * __cdecl operator<<(FArchive *param_1,FItemData *param_2)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  
  operator<<(param_1,&param_2->Desc);
  piVar1 = &param_2->ItemIdx;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->TotalScore;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&param_2->TestValues);
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&param_2->TestScores);
  return param_1;
}

// operator<< @ 146f30800

FArchive * __cdecl operator<<(FArchive *param_1,FOptionData *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->NumGenerators = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->GeneratorNames);
  piVar1 = &param_2->OptionIdx;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_2->TestIndices);
  return param_1;
}

// operator<< @ 146f308d0

FArchive * __cdecl operator<<(FArchive *param_1,FOptionStat *param_2)

{
  int *piVar1;
  
  TArrayPrivateFriend::Serialize<FEnvQueryDebugProfileData::FStep,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->StepData);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->NumRuns = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->NumRuns,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->NumRuns);
  return param_1;
}

// operator<< @ 146f30960

FArchive * __cdecl operator<<(FArchive *param_1,FQueryData *param_2)

{
  int *piVar1;
  double *pdVar2;
  undefined1 *puVar3;
  int *piVar4;
  double *pdVar5;
  
  TArrayPrivateFriend::Serialize<EQSDebug::FItemData,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Items);
  TArrayPrivateFriend::Serialize<EQSDebug::FTestData,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Tests);
  TArrayPrivateFriend::Serialize<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->SolidSpheres);
  TArrayPrivateFriend::Serialize<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Texts);
  piVar1 = &param_2->NumValidItems;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->Id;
  puVar3 = &param_1->field_0x2a;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Name);
  pdVar2 = &param_2->Timestamp;
  pdVar5 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar2);
    }
  }
  else {
    *pdVar2 = *pdVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  TArrayPrivateFriend::Serialize<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->RenderDebugHelpers);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&param_2->Options);
  piVar1 = &param_2->UsedOption;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar4 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar3 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 146f30b20

FArchive * __cdecl operator<<(FArchive *param_1,FSphere *param_2)

{
  FColor *pFVar1;
  float *pfVar2;
  FColor_u_0 *pFVar3;
  
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->Radius = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->Location);
  pFVar1 = &param_2->Color;
  pFVar3 = (FColor_u_0 *)**(undefined8 **)&param_1->field_0x8;
  if (pFVar3 + 1 <= (FColor_u_0 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    pFVar1->field0_0x0 = *pFVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
  return param_1;
}

// operator<< @ 146f30c10

FArchive * __cdecl operator<<(FArchive *param_1,FStatsInfo *param_2)

{
  double *pdVar1;
  int *piVar2;
  ushort *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  double *pdVar6;
  int *piVar7;
  ushort *puVar8;
  uint local_res8 [2];
  
  local_res8[0] = 1;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar4 = &param_1->field_0x2a;
  operator<<(param_1,&param_2->MostExpensive);
  pdVar1 = &param_2->MostExpensiveDuration;
  pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  operator<<(param_1,&param_2->TotalAvgData);
  pdVar1 = &param_2->TotalAvgDuration;
  pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  piVar2 = &param_2->TotalAvgCount;
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->TickPct);
  puVar3 = &param_2->FirstTickEntry;
  puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar3 = &param_2->LastTickEntry;
  puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar8 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar3 = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((*puVar4 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar3);
  return param_1;
}

// operator<< @ 146f30e30

FArchive * __cdecl operator<<(FArchive *param_1,FStep *param_2)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->ExecutionTime = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->NumProcessedItems;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 146f30f00

FArchive * __cdecl operator<<(FArchive *param_1,FText3d *param_2)

{
  FColor_u_0 *pFVar1;
  
  operator<<(param_1,&param_2->Text);
  UE::Math::operator<<(param_1,&param_2->Location);
  pFVar1 = (FColor_u_0 *)**(undefined8 **)&param_1->field_0x8;
  if (pFVar1 + 1 <= (FColor_u_0 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    (param_2->Color).field0_0x0 = *pFVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Color,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->Color);
  return param_1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146f3186c

/* [thunk]:public: virtual void * __ptr64 __cdecl ADetourCrowdAIController::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ADetourCrowdAIController::_vector_deleting_destructor__adjustor_704__
          (ADetourCrowdAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADetourCrowdAIController *)&this[-1].field_0x140,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{880}' @ 146f31880

/* [thunk]:public: virtual void * __ptr64 __cdecl ADetourCrowdAIController::`vector deleting
   destructor'`adjustor{880}' (unsigned int) __ptr64 */

void * __thiscall
ADetourCrowdAIController::_vector_deleting_destructor__adjustor_880__
          (ADetourCrowdAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADetourCrowdAIController *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{888}' @ 146f31894

/* [thunk]:public: virtual void * __ptr64 __cdecl ADetourCrowdAIController::`vector deleting
   destructor'`adjustor{888}' (unsigned int) __ptr64 */

void * __thiscall
ADetourCrowdAIController::_vector_deleting_destructor__adjustor_888__
          (ADetourCrowdAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADetourCrowdAIController *)&this[-1].field_0x88,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{896}' @ 146f318a8

/* [thunk]:public: virtual void * __ptr64 __cdecl ADetourCrowdAIController::`vector deleting
   destructor'`adjustor{896}' (unsigned int) __ptr64 */

void * __thiscall
ADetourCrowdAIController::_vector_deleting_destructor__adjustor_896__
          (ADetourCrowdAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADetourCrowdAIController *)&this[-1].field_0x80,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{904}' @ 146f318bc

/* [thunk]:public: virtual void * __ptr64 __cdecl ADetourCrowdAIController::`vector deleting
   destructor'`adjustor{904}' (unsigned int) __ptr64 */

void * __thiscall
ADetourCrowdAIController::_vector_deleting_destructor__adjustor_904__
          (ADetourCrowdAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ADetourCrowdAIController *)&this[-1].field_0x78,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146f318d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AEQSTestingPawn::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AEQSTestingPawn::_vector_deleting_destructor__adjustor_704__(AEQSTestingPawn *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AEQSTestingPawn *)&this[-1].field_0x460,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1656}' @ 146f318e4

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AEQSTestingPawn::`vector deleting
   destructor'`adjustor{1656}' (unsigned int) __ptr64 */

void * __thiscall
AEQSTestingPawn::_vector_deleting_destructor__adjustor_1656__(AEQSTestingPawn *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AEQSTestingPawn *)&this[-1].field_0xa8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f318f8

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBrainComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBrainComponent::_vector_deleting_destructor__adjustor_40__(UBrainComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBrainComponent *)&this[-1].MessageObservers.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 146f31908

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBrainComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UBrainComponent::_vector_deleting_destructor__adjustor_192__(UBrainComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBrainComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 146f3191c

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UEQSRenderingComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UEQSRenderingComponent::_vector_deleting_destructor__adjustor_592__
          (UEQSRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UEQSRenderingComponent *)&this[-1].field_0x420,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 146f31930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UEQSRenderingComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UEQSRenderingComponent::_vector_deleting_destructor__adjustor_600__
          (UEQSRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UEQSRenderingComponent *)&this[-1].field_0x418,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 146f31944

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UEQSRenderingComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UEQSRenderingComponent::_vector_deleting_destructor__adjustor_608__
          (UEQSRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UEQSRenderingComponent *)&this[-1].field_0x410,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f31958

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UEQSRenderingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UEQSRenderingComponent::_vector_deleting_destructor__adjustor_40__
          (UEQSRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UEQSRenderingComponent *)&this[-1].DebugDataSolidSpheres,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f31968

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UEnvQueryInstanceBlueprintWrapper::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UEnvQueryInstanceBlueprintWrapper::_vector_deleting_destructor__adjustor_40__
          (UEnvQueryInstanceBlueprintWrapper *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UEnvQueryInstanceBlueprintWrapper *)&this[-1].OptionIndex,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f31978

/* [thunk]:public: virtual void * __ptr64 __cdecl UEnvQueryManager::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UEnvQueryManager::_vector_deleting_destructor__adjustor_40__(UEnvQueryManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UEnvQueryManager *)&this[-1].QueryCountWarningInterval,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 146f31988

/* [thunk]:public: virtual void * __ptr64 __cdecl UEnvQueryManager::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UEnvQueryManager::_vector_deleting_destructor__adjustor_56__(UEnvQueryManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UEnvQueryManager *)&this[-1].NextQueryID,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146f319a0

void * __thiscall
IBaseDelegateInstance<float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f319d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31a00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31a30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31a60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31a90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31ac0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31af0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31b20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31b50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31b80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31bb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UEnvQueryTest_Pathfinding_const_,float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31be0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAIAsyncTaskBlueprintProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31c10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UEnvQueryInstanceBlueprintWrapper,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31c40

void * __thiscall
TCommonDelegateInstanceState<float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31c70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31ca0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAIMessageObserver,SharedPointerInternals::DefaultDeleter<FAIMessageObserver>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAIMessageObserver,SharedPointerInternals::DefaultDeleter<FAIMessageObserver>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31ce0

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
SharedPointerInternals::
TReferenceControllerWithDeleter<FEnvQueryInstance,SharedPointerInternals::DefaultDeleter<FEnvQueryInstance>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FEnvQueryInstance,SharedPointerInternals::DefaultDeleter<FEnvQueryInstance>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31d20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_AI,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_AI>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayDebuggerCategory_AI,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_AI>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31d60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_BehaviorTree,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_BehaviorTree>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayDebuggerCategory_BehaviorTree,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_BehaviorTree>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31da0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_EQS,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_EQS>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayDebuggerCategory_EQS,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_EQS>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31de0

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
ADetourCrowdAIController::_scalar_deleting_destructor_(ADetourCrowdAIController *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x370 = &_vftable__for__IAIPerceptionListenerInterface__;
  *(undefined ***)&this->field_0x378 = &_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined ***)&this->field_0x380 = &_vftable__for__IGenericTeamAgentInterface__;
  *(undefined ***)&this->field_0x388 = &_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  AAIController::~AAIController((AAIController *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall AEQSTestingPawn::_scalar_deleting_destructor_(AEQSTestingPawn *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  *(undefined ***)&this->field_0x678 = &___7AEQSTestingPawn__6B_;
  DestructItems<FEnvQueryInstance,int>
            ((FEnvQueryInstance *)(this->StepResults).AllocatorInstance.Data,
             (this->StepResults).ArrayNum);
  pFVar1 = (this->StepResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QueryInstance).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->NavAgentProperties).PreferredNavData.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FAIDynamicParam,int>
            ((FAIDynamicParam *)(this->QueryConfig).AllocatorInstance.Data,
             (this->QueryConfig).ArrayNum);
  pFVar1 = (this->QueryConfig).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QueryParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0x678 = &___7IEQSQueryResultSourceInterface__6B_;
  ACharacter::~ACharacter((ACharacter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x720);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31f90

void * __thiscall
FAIDataProviderBoolValue::_scalar_deleting_destructor_(FAIDataProviderBoolValue *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f31fd0

void * __thiscall
FAIDataProviderFloatValue::_scalar_deleting_destructor_
          (FAIDataProviderFloatValue *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32010

void * __thiscall
FAIDataProviderIntValue::_scalar_deleting_destructor_(FAIDataProviderIntValue *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32050

void * __thiscall
FAIDataProviderTypedValue::_scalar_deleting_destructor_
          (FAIDataProviderTypedValue *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32090

void * __thiscall
FAIMessageObserver::_scalar_deleting_destructor_(FAIMessageObserver *this,uint param_1)

{
  int *piVar1;
  longlong *plVar2;
  UObject *pUVar3;
  int iVar4;
  longlong *plVar5;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    plVar2 = *(longlong **)&pUVar3[5].field_0x20;
    for (plVar5 = plVar2; plVar5 != plVar2 + *(int *)(pUVar3 + 6); plVar5 = plVar5 + 1) {
      if ((FAIMessageObserver *)*plVar5 == this) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
        if (iVar4 != -1) {
          memmove(plVar2 + iVar4,plVar2 + iVar4 + 1,
                  (longlong)((*(int *)(pUVar3 + 6) - iVar4) + -1) << 3);
          *(int *)(pUVar3 + 6) = *(int *)(pUVar3 + 6) + -1;
        }
        break;
      }
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ObserverDelegate);
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32170

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
FEQSRenderingDebugDrawDelegateHelper::_scalar_deleting_destructor_
          (FEQSRenderingDebugDrawDelegateHelper *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDebugDrawDelegateHelper__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f321f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall FEQSSceneProxy::_scalar_deleting_destructor_(FEQSSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->QueryResult).RawData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QueryResult).Items.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDebugRenderSceneProxy::~FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32250

void * __thiscall
FGameplayDebuggerCategory_AI::_scalar_deleting_destructor_
          (FGameplayDebuggerCategory_AI *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PathDataPack).PathPoints.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>
            ((FPoly *)(this->PathDataPack).PathCorridor.AllocatorInstance.Data,
             (this->PathDataPack).PathCorridor.ArrayNum);
  pFVar1 = (this->PathDataPack).PathCorridor.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRepData::~FRepData(&this->DataPack);
  FGameplayDebuggerCategory::~FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f322d0

void * __thiscall
FGameplayDebuggerCategory_BehaviorTree::_scalar_deleting_destructor_
          (FGameplayDebuggerCategory_BehaviorTree *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataPack).BlackboardDesc.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataPack).TreeDesc.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataPack).CompName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FGameplayDebuggerCategory::~FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32350

void * __thiscall
FGameplayDebuggerCategory_EQS::_scalar_deleting_destructor_
          (FGameplayDebuggerCategory_EQS *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<EQSDebug::FQueryData,int>
            ((FQueryData *)(this->DataPack).QueryDebugData.AllocatorInstance.Data,
             (this->DataPack).QueryDebugData.ArrayNum);
  pFVar1 = (this->DataPack).QueryDebugData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FGameplayDebuggerCategory::~FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f323c0

void * __thiscall
`FGameplayDebuggerCategory_AI::CreateDebugSceneProxy'::__l2::FPathDebugRenderSceneProxy::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FDebugRenderSceneProxy::~FDebugRenderSceneProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32400

void * __thiscall
IAIResourceInterface::_scalar_deleting_destructor_(IAIResourceInterface *this,uint param_1)

{
  *this = (IAIResourceInterface)&___7IAIResourceInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32440

void * __thiscall
IEQSQueryResultSourceInterface::_scalar_deleting_destructor_
          (IEQSQueryResultSourceInterface *this,uint param_1)

{
  *this = (IEQSQueryResultSourceInterface)&___7IEQSQueryResultSourceInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32480

void * __thiscall
UAIBlueprintHelperLibrary::_scalar_deleting_destructor_
          (UAIBlueprintHelperLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAIBlueprintHelperLibrary__6B_;
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

// `scalar_deleting_destructor' @ 146f324e0

void * __thiscall UAIDataProvider::_scalar_deleting_destructor_(UAIDataProvider *this,uint param_1)

{
  *(undefined ***)this = &___7UAIDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32540

void * __thiscall
UAIDataProvider_QueryParams::_scalar_deleting_destructor_
          (UAIDataProvider_QueryParams *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAIDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f325a0

void * __thiscall
UAIDataProvider_Random::_scalar_deleting_destructor_(UAIDataProvider_Random *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAIDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall UBrainComponent::_scalar_deleting_destructor_(UBrainComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UBrainComponent__6B_;
  pFVar1 = (this->ResourceLock).ResourceLockCount.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MessageObservers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MessagesToProcess).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAIResourceInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f326d0

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
UEQSRenderingComponent::_scalar_deleting_destructor_(UEQSRenderingComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->DebugDataTexts).AllocatorInstance.Data,
             (this->DebugDataTexts).ArrayNum);
  pFVar1 = (this->DebugDataTexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugDataSolidSpheres).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->EQSRenderingDebugDrawDelegateHelper)._padding_ =
       (longlong)&___7FDebugDrawDelegateHelper__6B_;
  pvVar2 = (void *)(this->EQSRenderingDebugDrawDelegateHelper)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->EQSRenderingDebugDrawDelegateHelper)._padding_,
             (int)(this->EQSRenderingDebugDrawDelegateHelper)._padding_);
  pvVar2 = (void *)(this->EQSRenderingDebugDrawDelegateHelper)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EQSRenderingDebugDrawDelegateHelper)._padding_);
  pFVar1 = (this->DrawFlagName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x670);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32810

void * __thiscall UEnvQuery::_scalar_deleting_destructor_(UEnvQuery *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQuery__6B_;
  pFVar1 = (this->Options).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32880

void * __thiscall
UEnvQueryContext::_scalar_deleting_destructor_(UEnvQueryContext *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryContext__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f328e0

void * __thiscall
UEnvQueryContext_BlueprintBase::_scalar_deleting_destructor_
          (UEnvQueryContext_BlueprintBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryContext__6B_;
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

// `scalar_deleting_destructor' @ 146f32940

void * __thiscall
UEnvQueryContext_Item::_scalar_deleting_destructor_(UEnvQueryContext_Item *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryContext__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f329a0

void * __thiscall
UEnvQueryContext_NavigationData::_scalar_deleting_destructor_
          (UEnvQueryContext_NavigationData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryContext_NavigationData__6B_;
  pvVar1 = *(void **)&(this->NavAgentProperties).PreferredNavData.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UEnvQueryContext__6B_;
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

// `scalar_deleting_destructor' @ 146f32a20

void * __thiscall
UEnvQueryContext_Querier::_scalar_deleting_destructor_(UEnvQueryContext_Querier *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryContext__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32a80

void * __thiscall
UEnvQueryDebugHelpers::_scalar_deleting_destructor_(UEnvQueryDebugHelpers *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryDebugHelpers__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32ae0

void * __thiscall
UEnvQueryGenerator::_scalar_deleting_destructor_(UEnvQueryGenerator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  pFVar1 = (this->OptionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32b60

void * __thiscall
UEnvQueryGenerator_ActorsOfClass::_scalar_deleting_destructor_
          (UEnvQueryGenerator_ActorsOfClass *this,uint param_1)

{
  (this->SearchRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->GenerateOnlyActorsInRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32bf0

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
UEnvQueryGenerator_BlueprintBase::_scalar_deleting_destructor_
          (UEnvQueryGenerator_BlueprintBase *this,uint param_1)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_BlueprintBase__6B_;
  pIVar1 = (this->GeneratorsActionDescription).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32c90

void * __thiscall
UEnvQueryGenerator_Composite::_scalar_deleting_destructor_
          (UEnvQueryGenerator_Composite *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_Composite__6B_;
  pFVar1 = (this->Generators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32d30

void * __thiscall
UEnvQueryGenerator_Cone::_scalar_deleting_destructor_(UEnvQueryGenerator_Cone *this,uint param_1)

{
  (this->Range)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->AngleStep)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ConeDegrees)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->AlignedPointsDistance)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32dd0

void * __thiscall
UEnvQueryGenerator_CurrentLocation::_scalar_deleting_destructor_
          (UEnvQueryGenerator_CurrentLocation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32e50

void * __thiscall
UEnvQueryGenerator_Donut::_scalar_deleting_destructor_(UEnvQueryGenerator_Donut *this,uint param_1)

{
  (this->ArcAngle)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->PointsPerRing)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->NumberOfRings)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->OuterRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->InnerRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32f00

void * __thiscall
UEnvQueryGenerator_OnCircle::_scalar_deleting_destructor_
          (UEnvQueryGenerator_OnCircle *this,uint param_1)

{
  (this->CircleCenterZOffset)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ArcAngle)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ArcDirectionOffsetDegrees)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->NumberOfPoints)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->SpaceBetween)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->CircleRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f32fb0

void * __thiscall
UEnvQueryGenerator_PathingGrid::_scalar_deleting_destructor_
          (UEnvQueryGenerator_PathingGrid *this,uint param_1)

{
  (this->ScanRangeMultiplier)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->PathToItem)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33050

void * __thiscall
UEnvQueryGenerator_PerceivedActors::_scalar_deleting_destructor_
          (UEnvQueryGenerator_PerceivedActors *this,uint param_1)

{
  (this->SearchRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f330e0

void * __thiscall
UEnvQueryGenerator_ProjectedPoints::_scalar_deleting_destructor_
          (UEnvQueryGenerator_ProjectedPoints *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33160

void * __thiscall
UEnvQueryGenerator_SimpleGrid::_scalar_deleting_destructor_
          (UEnvQueryGenerator_SimpleGrid *this,uint param_1)

{
  (this->SpaceBetween)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->GridSize)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f331f0

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
UEnvQueryInstanceBlueprintWrapper::_scalar_deleting_destructor_
          (UEnvQueryInstanceBlueprintWrapper *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IEQSQueryResultSourceInterface__;
  pvVar1 = *(void **)&(this->OnQueryFinishedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryFinishedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QueryInstance).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QueryResult).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IEQSQueryResultSourceInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f332a0

void * __thiscall
UEnvQueryItemType::_scalar_deleting_destructor_(UEnvQueryItemType *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryItemType__6B_;
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

// `scalar_deleting_destructor' @ 146f33300

void * __thiscall
UEnvQueryItemType_Actor::_scalar_deleting_destructor_(UEnvQueryItemType_Actor *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
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

// `scalar_deleting_destructor' @ 146f33360

void * __thiscall
UEnvQueryItemType_ActorBase::_scalar_deleting_destructor_
          (UEnvQueryItemType_ActorBase *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
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

// `scalar_deleting_destructor' @ 146f333c0

void * __thiscall
UEnvQueryItemType_Direction::_scalar_deleting_destructor_
          (UEnvQueryItemType_Direction *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
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

// `scalar_deleting_destructor' @ 146f33420

void * __thiscall
UEnvQueryItemType_Point::_scalar_deleting_destructor_(UEnvQueryItemType_Point *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
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

// `scalar_deleting_destructor' @ 146f33480

void * __thiscall
UEnvQueryItemType_VectorBase::_scalar_deleting_destructor_
          (UEnvQueryItemType_VectorBase *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
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

// `scalar_deleting_destructor' @ 146f334e0

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
UEnvQueryManager::_scalar_deleting_destructor_(UEnvQueryManager *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined4 *)&(this->LocalContextMap).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UEnvQueryManager__6B_;
  pvVar1 = *(void **)&(this->LocalContextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UEnvQueryContext_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UEnvQueryContext_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UEnvQueryContext_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalContextMap);
  pFVar2 = (this->GCShieldedWrappers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LocalContexts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FEnvQueryInstanceCache,int>
            ((FEnvQueryInstanceCache *)(this->InstanceCache).AllocatorInstance.Data,
             (this->InstanceCache).ArrayNum);
  pFVar2 = (this->InstanceCache).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ExternalQueries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExternalQueries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FEnvQueryInstance,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalQueries);
  DestructItems<TSharedPtr<FEnvQueryInstance,1>,int>
            ((TSharedPtr<FEnvQueryInstance,1> *)(this->RunningQueries).AllocatorInstance.Data,
             (this->RunningQueries).ArrayNum);
  pFVar2 = (this->RunningQueries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->EQSDebugger).StoredQueries.field_0x48 = 0;
  pvVar1 = *(void **)&(this->EQSDebugger).StoredQueries.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FEQSDebugger::FEnvQueryInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->EQSDebugger).StoredQueries);
  *(undefined4 *)&(this->EQSDebugger).StoredStats.field_0x48 = 0;
  pvVar1 = *(void **)&(this->EQSDebugger).StoredStats.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EQSDebugger);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  UAISubsystem::~UAISubsystem((UAISubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x200);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33670

void * __thiscall UEnvQueryNode::_scalar_deleting_destructor_(UEnvQueryNode *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
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

// `scalar_deleting_destructor' @ 146f336d0

void * __thiscall UEnvQueryOption::_scalar_deleting_destructor_(UEnvQueryOption *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryOption__6B_;
  pFVar1 = (this->Tests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33740

void * __thiscall UEnvQueryTest::_scalar_deleting_destructor_(UEnvQueryTest *this,uint param_1)

{
  ~UEnvQueryTest(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f337a0

void * __thiscall
UEnvQueryTest_Distance::_scalar_deleting_destructor_(UEnvQueryTest_Distance *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Distance__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33800

void * __thiscall
UEnvQueryTest_Dot::_scalar_deleting_destructor_(UEnvQueryTest_Dot *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Dot__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33860

void * __thiscall
UEnvQueryTest_GameplayTags::_scalar_deleting_destructor_
          (UEnvQueryTest_GameplayTags *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryTest_GameplayTags__6B_;
  pFVar1 = (this->GameplayTags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryToMatch).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryToMatch).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryToMatch).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryToMatch).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33930

void * __thiscall
UEnvQueryTest_Overlap::_scalar_deleting_destructor_(UEnvQueryTest_Overlap *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Overlap__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33990

void * __thiscall
UEnvQueryTest_Pathfinding::_scalar_deleting_destructor_
          (UEnvQueryTest_Pathfinding *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Pathfinding__6B_;
  (this->SkipUnreachable)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->PathFromContext)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33a10

void * __thiscall
UEnvQueryTest_PathfindingBatch::_scalar_deleting_destructor_
          (UEnvQueryTest_PathfindingBatch *this,uint param_1)

{
  (this->ScanRangeMultiplier)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryTest_Pathfinding__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33a90

void * __thiscall
UEnvQueryTest_Project::_scalar_deleting_destructor_(UEnvQueryTest_Project *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Project__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33af0

void * __thiscall
UEnvQueryTest_Random::_scalar_deleting_destructor_(UEnvQueryTest_Random *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryTest_Random__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33b50

void * __thiscall
UEnvQueryTest_Trace::_scalar_deleting_destructor_(UEnvQueryTest_Trace *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Trace__6B_;
  (this->ContextHeightOffset)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ItemHeightOffset)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->TraceFromContext)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33bd0

void * __thiscall
UEnvQueryTest_Volume::_scalar_deleting_destructor_(UEnvQueryTest_Volume *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Volume__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33c30

void * __thiscall UEnvQueryTypes::_scalar_deleting_destructor_(UEnvQueryTypes *this,uint param_1)

{
  *(undefined ***)this = &___7UEnvQueryTypes__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f33c90

void * __thiscall
UValueOrBBKeyBlueprintUtility::_scalar_deleting_destructor_
          (UValueOrBBKeyBlueprintUtility *this,uint param_1)

{
  *(undefined ***)this = &___7UValueOrBBKeyBlueprintUtility__6B_;
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

// DescribeTaskHelper @ 146f41250

FString * __cdecl DescribeTaskHelper(FString *__return_storage_ptr__,UGameplayTask *param_1)

{
  ushort uVar1;
  int iVar2;
  IGameplayTaskOwnerInterface *pIVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  longlong lVar7;
  UClass *pUVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FGameplayResourceSet local_res10 [4];
  undefined8 local_res18;
  FName local_res20;
  FString local_c8;
  FName local_b8;
  FScriptContainerElement *local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (((param_1->TaskOwner).InterfaceInstance != (IGameplayTaskOwnerInterface *)0x0) &&
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->TaskOwner), bVar5)) {
    if ((((param_1->TaskOwner).InterfaceInstance == (IGameplayTaskOwnerInterface *)0x0) ||
        (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->TaskOwner), !bVar5)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x84,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
    pIVar3 = (param_1->TaskOwner).InterfaceInstance;
    if ((pIVar3 != (IGameplayTaskOwnerInterface *)0x0) &&
       (lVar7 = (**(code **)((longlong)*pIVar3 + 8))(), lVar7 != 0)) {
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar8->_padding_)) goto LAB_146f412ff;
    }
  }
  lVar7 = 0;
LAB_146f412ff:
  pFVar6 = UGameplayTask::GetTaskStateName(param_1,&local_a8);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  FString::FString(&local_78,pwVar9);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  uVar1 = (param_1->RequiredResources).Flags;
  if (uVar1 != 0) {
    local_res10[0].Flags = uVar1;
    FGameplayResourceSet::GetDebugDescription(local_res10,&local_58);
  }
  if (lVar7 == 0) {
    FString::FString(&local_c8,L"None");
  }
  else {
    local_res8 = *(FName *)(lVar7 + 0x18);
    FName::ToString(&local_res8,&local_c8);
  }
  local_res8.ComparisonIndex.Value._0_1_ = param_1->Priority;
  local_b0 = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    local_b0 = local_78.Data.AllocatorInstance.Data;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150684e60;
  if (param_1->TaskState == Active) {
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150684b00;
  }
  local_res18 = 0;
  bVar5 = param_1->InstanceName != (FName)0x0;
  if (bVar5) {
    local_res20 = param_1->InstanceName;
    FName::ToString(&local_res20,&local_68);
    FString::PrintfImpl(&local_88,L" {yellow}[%s]");
  }
  local_b8 = (FName)param_1->_padding_;
  FName::ToString(&local_b8,&local_98);
  FString::PrintfImpl(__return_storage_ptr__,
                      L"\n  {white}%s%s {%s}%s:%d {white}Owner:{yellow}%s {white}Res:{yellow}%s");
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((uVar1 != 0) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DrawEQSItemDetails @ 146f440c0

void __cdecl
`anonymous_namespace'::DrawEQSItemDetails(FQueryData *param_1,int param_2,FVisualLogLine *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString *pFVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
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
  FString local_68 [3];
  
  bVar5 = false;
  bVar4 = false;
  uVar10 = 0;
  if (param_2 < (param_1->Items).ArrayNum) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_1->Items).AllocatorInstance.Data;
  lVar16 = (longlong)param_2 * 0x38;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = *(int *)(pFVar2 + lVar16 + 8);
  lVar11 = (longlong)local_130;
  _Src = *(void **)(pFVar2 + lVar16);
  if (local_130 == 0) {
    local_12c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_130,0,&local_138,local_130,&local_12c);
    memcpy(local_138.Data,_Src,lVar11 * 2);
  }
  uVar10 = local_130 - 1;
  if (local_130 == 0) {
    uVar10 = 0;
  }
  ::FString::AppendChars(&param_3->Line,(wchar_t *)local_138.Data,uVar10);
  iVar15 = 0;
  iVar9 = local_130 + -1;
  if (local_130 == 0) {
    iVar9 = iVar15;
  }
  if (iVar9 < 0x1b) {
    uVar12 = (ulonglong)(0x1b - iVar9);
    do {
      ::FString::PrintfImpl(&local_f8,L" ");
      iVar9 = local_f8.Data.ArrayNum + -1;
      if (local_f8.Data.ArrayNum == 0) {
        iVar9 = iVar15;
      }
      ::FString::AppendChars(&param_3->Line,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar9);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  ::FString::PrintfImpl(&local_118,L" | %.2f");
  iVar9 = local_118.Data.ArrayNum + -1;
  if (local_118.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AppendChars(&param_3->Line,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar9);
  iVar9 = local_118.Data.ArrayNum + -1;
  if (local_118.Data.ArrayNum == 0) {
    iVar9 = iVar15;
  }
  if (iVar9 < 8) {
    uVar12 = (ulonglong)(8 - iVar9);
    do {
      ::FString::PrintfImpl(&local_e8,L" ");
      iVar9 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&param_3->Line,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar9);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  iVar9 = *(int *)(pFVar2 + lVar16 + 0x30);
  uVar10 = 0;
  if (0 < iVar9) {
    do {
      uVar14 = 0;
      if ((int)uVar10 < *(int *)(pFVar2 + lVar16 + 0x30)) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar9);
  }
  uVar13 = 0;
  uVar12 = uVar13;
  if (0 < iVar9) {
    do {
      uVar14 = (uint)uVar13;
      uVar10 = 0;
      if ((int)uVar14 < *(int *)(pFVar2 + lVar16 + 0x30)) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar14 < *(int *)(pFVar2 + lVar16 + 0x20)) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(*(longlong *)(pFVar2 + lVar16 + 0x18) + uVar12 * 4);
      ::FString::PrintfImpl(&local_98,L"%.2f");
      if (fVar1 == __real_ff7fffff) {
        bVar5 = true;
        pFVar7 = ::FString::FString(&local_88,L"SKIP");
      }
      else {
        bVar4 = true;
        ::FString::PrintfImpl(&local_c8,L"%.2f");
        pFVar7 = &local_c8;
      }
      local_128.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_128.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      if ((bVar4) &&
         (bVar4 = false, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar7 = ::FString::FString(local_68," ");
      pFVar8 = ::FString::FString(&local_78,L" | ");
      ::FString::ConcatFF(&local_a8,pFVar8,&local_98);
      ::FString::ConcatFF(&local_b8,&local_a8,pFVar7);
      ::FString::ConcatFF(&local_108,&local_b8,&local_128);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      iVar15 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AppendChars(&param_3->Line,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar15)
      ;
      iVar15 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      if (iVar15 < 0xf) {
        uVar13 = (ulonglong)(0xf - iVar15);
        do {
          ::FString::PrintfImpl(&local_d8,L" ");
          iVar15 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar15 = 0;
          }
          ::FString::AppendChars
                    (&param_3->Line,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar15);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      uVar13 = (ulonglong)(uVar14 + 1);
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < (longlong)iVar9);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIBlueprintHelperLibrary @ 146f45c00

void __cdecl EmptyLinkFunctionForGeneratedCodeAIBlueprintHelperLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIDataProvider @ 146f45c10

void __cdecl EmptyLinkFunctionForGeneratedCodeAIDataProvider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIDataProvider_QueryParams @ 146f45c20

void __cdecl EmptyLinkFunctionForGeneratedCodeAIDataProvider_QueryParams(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIDataProvider_Random @ 146f45c30

void __cdecl EmptyLinkFunctionForGeneratedCodeAIDataProvider_Random(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBrainComponent @ 146f45c40

void __cdecl EmptyLinkFunctionForGeneratedCodeBrainComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDetourCrowdAIController @ 146f45c50

void __cdecl EmptyLinkFunctionForGeneratedCodeDetourCrowdAIController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEQSRenderingComponent @ 146f45c60

void __cdecl EmptyLinkFunctionForGeneratedCodeEQSRenderingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEQSTestingPawn @ 146f45c70

void __cdecl EmptyLinkFunctionForGeneratedCodeEQSTestingPawn(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQuery @ 146f45c80

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQuery(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryContext @ 146f45c90

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryContext_BlueprintBase @ 146f45ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryContext_BlueprintBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Item @ 146f45cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Item(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryContext_NavigationData @ 146f45cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryContext_NavigationData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Querier @ 146f45cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Querier(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryDebugHelpers @ 146f45ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryDebugHelpers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator @ 146f45cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ActorsOfClass @ 146f45d00

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ActorsOfClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_BlueprintBase @ 146f45d10

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_BlueprintBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Composite @ 146f45d20

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Composite(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Cone @ 146f45d30

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Cone(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_CurrentLocation @ 146f45d40

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_CurrentLocation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Donut @ 146f45d50

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Donut(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_OnCircle @ 146f45d60

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_OnCircle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PathingGrid @ 146f45d70

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PathingGrid(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PerceivedActors @ 146f45d80

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PerceivedActors(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ProjectedPoints @ 146f45d90

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ProjectedPoints(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_SimpleGrid @ 146f45da0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_SimpleGrid(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryInstanceBlueprintWrapper @ 146f45db0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryInstanceBlueprintWrapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryItemType @ 146f45dc0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryItemType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Actor @ 146f45dd0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Actor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_ActorBase @ 146f45de0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_ActorBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Direction @ 146f45df0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Direction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Point @ 146f45e00

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Point(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_VectorBase @ 146f45e10

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_VectorBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryManager @ 146f45e20

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryNode @ 146f45e30

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryOption @ 146f45e40

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryOption(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest @ 146f45e50

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Distance @ 146f45e60

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Distance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Dot @ 146f45e70

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Dot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_GameplayTags @ 146f45e80

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_GameplayTags(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Overlap @ 146f45e90

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Overlap(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Pathfinding @ 146f45ea0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Pathfinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_PathfindingBatch @ 146f45eb0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_PathfindingBatch(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Project @ 146f45ec0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Project(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Random @ 146f45ed0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Random(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Trace @ 146f45ee0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Trace(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Volume @ 146f45ef0

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Volume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvQueryTypes @ 146f45f00

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvQueryTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeValueOrBBKeyBlueprintUtility @ 146f45f10

void __cdecl EmptyLinkFunctionForGeneratedCodeValueOrBBKeyBlueprintUtility(void)

{
  return;
}

// GetPathCost @ 146f572a0

float __cdecl
NodePoolHelpers::GetPathCost
          (FRecastDebugPathfindingData *param_1,FNavigationProjectionWork *param_2,
          dtQueryFilter *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar1 = (param_2->OutLocation).NodeRef;
  if (*(int *)&(param_1->Nodes).Elements.field_0x8 != *(int *)&(param_1->Nodes).Elements.field_0x34)
  {
    FVar4 = (param_1->Nodes).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(param_1->Nodes).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 +
                    ((uVar1 >> 0x20) * 0x17 + uVar1 & (ulonglong)((param_1->Nodes).HashSize - 1)) *
                    4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0xa8 + *(longlong *)&(param_1->Nodes).Elements);
        if (*puVar3 == uVar1) {
          if (puVar3 == (ulonglong *)0x0) {
            return __real_7f7fc99e;
          }
          return (float)(double)puVar3[3];
        }
        iVar2 = (int)puVar3[0x14];
      } while (iVar2 != -1);
    }
  }
  return __real_7f7fc99e;
}

// GetPathLength @ 146f57330

float __cdecl
NodePoolHelpers::GetPathLength
          (FRecastDebugPathfindingData *param_1,FNavigationProjectionWork *param_2,
          dtQueryFilter *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ForElementType<FSetElementId> FVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  
  uVar1 = (param_2->OutLocation).NodeRef;
  if (*(int *)&(param_1->Nodes).Elements.field_0x8 != *(int *)&(param_1->Nodes).Elements.field_0x34)
  {
    FVar4 = (param_1->Nodes).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(param_1->Nodes).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 +
                    ((uVar1 >> 0x20) * 0x17 + uVar1 & (ulonglong)((param_1->Nodes).HashSize - 1)) *
                    4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0xa8 + *(longlong *)&(param_1->Nodes).Elements);
        if (*puVar3 == uVar1) {
          if (puVar3 == (ulonglong *)0x0) {
            return __real_7f7fc99e;
          }
          dVar9 = (param_2->OutLocation).Location.field0_0x0._s_0.Y - (double)puVar3[6];
          dVar5 = (param_2->OutLocation).Location.field0_0x0._s_0.Z - (double)puVar3[7];
          dVar8 = (param_2->OutLocation).Location.field0_0x0._s_0.X - (double)puVar3[5];
          auVar6._0_8_ = dVar5 * dVar5;
          auVar6._8_8_ = 0;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = dVar9 * dVar9 + dVar8 * dVar8 + auVar6._0_8_;
          auVar7 = sqrtpd(auVar6,auVar7);
          return (float)(auVar7._0_8_ + (double)puVar3[4]);
        }
        iVar2 = (int)puVar3[0x14];
      } while (iVar2 != -1);
    }
  }
  return __real_7f7fc99e;
}

// InitNavigationControl @ 146f5b620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPathFollowingComponent * __cdecl `anonymous_namespace'::InitNavigationControl(AController *param_1)

{
  int iVar1;
  code *pcVar2;
  UClass *pUVar3;
  UPathFollowingComponent *this;
  UWorld *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  UClass *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 != (AController *)0x0) {
    pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return (UPathFollowingComponent *)param_1[1]._padding_;
    }
  }
  pcVar2 = *(code **)(param_1->_padding_ + 0x738);
  local_a8[0] = Z_Construct_UClass_UPathFollowingComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8[0]);
  }
  this = (UPathFollowingComponent *)(*pcVar2)(param_1,local_a8);
  if (this == (UPathFollowingComponent *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UPathFollowingComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._8_8_ = param_1;
    this = (UPathFollowingComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    pUVar4 = AActor::GetWorld((AActor *)param_1);
    UActorComponent::RegisterComponentWithWorld
              ((UActorComponent *)this,pUVar4,(FRegisterComponentContext *)0x0);
    (**(code **)(this->_padding_ + 0x4f8))(this);
  }
  return this;
}

// Z_Construct_UClass_ADetourCrowdAIController_NoRegister @ 146f7d0c0

UClass * __cdecl Z_Construct_UClass_ADetourCrowdAIController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADetourCrowdAIController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"DetourCrowdAIController",
               &Z_Registration_Info_UClass_ADetourCrowdAIController.InnerSingleton,
               ADetourCrowdAIController::StaticRegisterNativesADetourCrowdAIController,0x400,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADetourCrowdAIController>,
               InternalVTableHelperCtorCaller<ADetourCrowdAIController>,local_res8,
               AAIController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADetourCrowdAIController.InnerSingleton;
}

// Z_Construct_UClass_AEQSTestingPawn_NoRegister @ 146f7d180

UClass * __cdecl Z_Construct_UClass_AEQSTestingPawn_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AEQSTestingPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AEQSTestingPawn::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EQSTestingPawn",
               &Z_Registration_Info_UClass_AEQSTestingPawn.InnerSingleton,
               AEQSTestingPawn::StaticRegisterNativesAEQSTestingPawn,0x720,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AEQSTestingPawn>,InternalVTableHelperCtorCaller<AEQSTestingPawn>,
               local_res8,ACharacter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AEQSTestingPawn.InnerSingleton;
}

// Z_Construct_UClass_UAIBlueprintHelperLibrary_NoRegister @ 146f7d240

UClass * __cdecl Z_Construct_UClass_UAIBlueprintHelperLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIBlueprintHelperLibrary",
               &Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.InnerSingleton,
               UAIBlueprintHelperLibrary::StaticRegisterNativesUAIBlueprintHelperLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIBlueprintHelperLibrary>,
               InternalVTableHelperCtorCaller<UAIBlueprintHelperLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIBlueprintHelperLibrary.InnerSingleton;
}

// Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister @ 146f7d300

UClass * __cdecl Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIDataProvider_QueryParams.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIDataProvider_QueryParams",
               &Z_Registration_Info_UClass_UAIDataProvider_QueryParams.InnerSingleton,
               UAIDataProvider_QueryParams::StaticRegisterNativesUAIDataProvider_QueryParams,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIDataProvider_QueryParams>,
               InternalVTableHelperCtorCaller<UAIDataProvider_QueryParams>,local_res8,
               UAIDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIDataProvider_QueryParams.InnerSingleton;
}

// Z_Construct_UClass_UAIDataProvider_Random_NoRegister @ 146f7d3c0

UClass * __cdecl Z_Construct_UClass_UAIDataProvider_Random_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIDataProvider_Random.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIDataProvider_Random",
               &Z_Registration_Info_UClass_UAIDataProvider_Random.InnerSingleton,
               UAIDataProvider_Random::StaticRegisterNativesUAIDataProvider_Random,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAIDataProvider_Random>,
               InternalVTableHelperCtorCaller<UAIDataProvider_Random>,local_res8,
               UAIDataProvider_QueryParams::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIDataProvider_Random.InnerSingleton;
}

// Z_Construct_UClass_UBrainComponent_NoRegister @ 146f7d480

UClass * __cdecl Z_Construct_UClass_UBrainComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrainComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BrainComponent",
               &Z_Registration_Info_UClass_UBrainComponent.InnerSingleton,
               UBrainComponent::StaticRegisterNativesUBrainComponent,0x118,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrainComponent>,InternalVTableHelperCtorCaller<UBrainComponent>,
               local_res8,UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrainComponent.InnerSingleton;
}

// Z_Construct_UClass_UEQSRenderingComponent_NoRegister @ 146f7d540

UClass * __cdecl Z_Construct_UClass_UEQSRenderingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEQSRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EQSRenderingComponent",
               &Z_Registration_Info_UClass_UEQSRenderingComponent.InnerSingleton,
               UEQSRenderingComponent::StaticRegisterNativesUEQSRenderingComponent,0x670,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UEQSRenderingComponent>,
               InternalVTableHelperCtorCaller<UEQSRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEQSRenderingComponent.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryContext_BlueprintBase_NoRegister @ 146f7d600

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext_BlueprintBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_BlueprintBase",
               &Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.InnerSingleton,
               UEnvQueryContext_BlueprintBase::StaticRegisterNativesUEnvQueryContext_BlueprintBase,
               0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryContext_BlueprintBase>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_BlueprintBase>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryContext_Item_NoRegister @ 146f7d6c0

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext_Item_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_Item.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_Item",
               &Z_Registration_Info_UClass_UEnvQueryContext_Item.InnerSingleton,
               UEnvQueryContext_Item::StaticRegisterNativesUEnvQueryContext_Item,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryContext_Item>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_Item>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_Item.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryContext_NavigationData_NoRegister @ 146f7d780

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext_NavigationData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_NavigationData",
               &Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.InnerSingleton,
               UEnvQueryContext_NavigationData::StaticRegisterNativesUEnvQueryContext_NavigationData
               ,0x60,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryContext_NavigationData>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_NavigationData>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_NavigationData.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryContext_Querier_NoRegister @ 146f7d840

UClass * __cdecl Z_Construct_UClass_UEnvQueryContext_Querier_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_Querier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_Querier",
               &Z_Registration_Info_UClass_UEnvQueryContext_Querier.InnerSingleton,
               UEnvQueryContext_Querier::StaticRegisterNativesUEnvQueryContext_Querier,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryContext_Querier>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_Querier>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_Querier.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryDebugHelpers_NoRegister @ 146f7d900

UClass * __cdecl Z_Construct_UClass_UEnvQueryDebugHelpers_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryDebugHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryDebugHelpers",
               &Z_Registration_Info_UClass_UEnvQueryDebugHelpers.InnerSingleton,
               UEnvQueryDebugHelpers::StaticRegisterNativesUEnvQueryDebugHelpers,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryDebugHelpers>,
               InternalVTableHelperCtorCaller<UEnvQueryDebugHelpers>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryDebugHelpers.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_NoRegister @ 146f7d9b0

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_ActorsOfClass",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.InnerSingleton,
               UEnvQueryGenerator_ActorsOfClass::
               StaticRegisterNativesUEnvQueryGenerator_ActorsOfClass,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_ActorsOfClass>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_ActorsOfClass>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_NoRegister @ 146f7da70

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_BlueprintBase",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.InnerSingleton,
               UEnvQueryGenerator_BlueprintBase::
               StaticRegisterNativesUEnvQueryGenerator_BlueprintBase,0x80,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_BlueprintBase>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_BlueprintBase>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_BlueprintBase.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister @ 146f7db30

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_Composite",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.InnerSingleton,
               UEnvQueryGenerator_Composite::StaticRegisterNativesUEnvQueryGenerator_Composite,0x70,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_Composite>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_Composite>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister @ 146f7dbf0

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_Cone",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.InnerSingleton,
               UEnvQueryGenerator_Cone::StaticRegisterNativesUEnvQueryGenerator_Cone,0x188,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_Cone>
               ,InternalVTableHelperCtorCaller<UEnvQueryGenerator_Cone>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation_NoRegister @ 146f7dcb0

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_CurrentLocation",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.InnerSingleton,
               UEnvQueryGenerator_CurrentLocation::
               StaticRegisterNativesUEnvQueryGenerator_CurrentLocation,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_CurrentLocation>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_CurrentLocation>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_CurrentLocation.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_Donut_NoRegister @ 146f7dd70

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_Donut_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_Donut",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.InnerSingleton,
               UEnvQueryGenerator_Donut::StaticRegisterNativesUEnvQueryGenerator_Donut,0x1e8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_Donut>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_Donut>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister @ 146f7de30

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_OnCircle",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.InnerSingleton,
               UEnvQueryGenerator_OnCircle::StaticRegisterNativesUEnvQueryGenerator_OnCircle,0x268,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_OnCircle>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_OnCircle>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_NoRegister @ 146f7def0

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_PathingGrid",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.InnerSingleton,
               UEnvQueryGenerator_PathingGrid::StaticRegisterNativesUEnvQueryGenerator_PathingGrid,
               0x188,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_PathingGrid>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_PathingGrid>,local_res8,
               UEnvQueryGenerator_SimpleGrid::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_NoRegister @ 146f7dfb0

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_PerceivedActors",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.InnerSingleton,
               UEnvQueryGenerator_PerceivedActors::
               StaticRegisterNativesUEnvQueryGenerator_PerceivedActors,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_PerceivedActors>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_PerceivedActors>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister @ 146f7e070

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_ProjectedPoints",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.InnerSingleton,
               UEnvQueryGenerator_ProjectedPoints::
               StaticRegisterNativesUEnvQueryGenerator_ProjectedPoints,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_ProjectedPoints>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_ProjectedPoints>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_NoRegister @ 146f7e130

UClass * __cdecl Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_SimpleGrid",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.InnerSingleton,
               UEnvQueryGenerator_SimpleGrid::StaticRegisterNativesUEnvQueryGenerator_SimpleGrid,
               0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryGenerator_SimpleGrid>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_SimpleGrid>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryItemType_Actor_NoRegister @ 146f7e1f0

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_Actor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Actor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_Actor",
               &Z_Registration_Info_UClass_UEnvQueryItemType_Actor.InnerSingleton,
               UEnvQueryItemType_Actor::StaticRegisterNativesUEnvQueryItemType_Actor,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryItemType_Actor>
               ,InternalVTableHelperCtorCaller<UEnvQueryItemType_Actor>,local_res8,
               UEnvQueryItemType_ActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Actor.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryItemType_Direction_NoRegister @ 146f7e2b0

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_Direction_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Direction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_Direction",
               &Z_Registration_Info_UClass_UEnvQueryItemType_Direction.InnerSingleton,
               UEnvQueryItemType_Direction::StaticRegisterNativesUEnvQueryItemType_Direction,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryItemType_Direction>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_Direction>,local_res8,
               UEnvQueryItemType_VectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Direction.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryItemType_Point_NoRegister @ 146f7e370

UClass * __cdecl Z_Construct_UClass_UEnvQueryItemType_Point_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Point.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_Point",
               &Z_Registration_Info_UClass_UEnvQueryItemType_Point.InnerSingleton,
               UEnvQueryItemType_Point::StaticRegisterNativesUEnvQueryItemType_Point,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryItemType_Point>
               ,InternalVTableHelperCtorCaller<UEnvQueryItemType_Point>,local_res8,
               UEnvQueryItemType_VectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Point.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryManager_NoRegister @ 146f7e430

UClass * __cdecl Z_Construct_UClass_UEnvQueryManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryManager",
               &Z_Registration_Info_UClass_UEnvQueryManager.InnerSingleton,
               UEnvQueryManager::StaticRegisterNativesUEnvQueryManager,0x200,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"Game",InternalConstructor<UEnvQueryManager>,
               InternalVTableHelperCtorCaller<UEnvQueryManager>,local_res8,UAISubsystem::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryManager.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryNode_NoRegister @ 146f7e4f0

UClass * __cdecl Z_Construct_UClass_UEnvQueryNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryNode",
               &Z_Registration_Info_UClass_UEnvQueryNode.InnerSingleton,
               UEnvQueryNode::StaticRegisterNativesUEnvQueryNode,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryNode>,InternalVTableHelperCtorCaller<UEnvQueryNode>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryNode.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Distance_NoRegister @ 146f7e5a0

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Distance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Distance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Distance",
               &Z_Registration_Info_UClass_UEnvQueryTest_Distance.InnerSingleton,
               UEnvQueryTest_Distance::StaticRegisterNativesUEnvQueryTest_Distance,0x208,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest_Distance>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Distance>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Distance.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister @ 146f7e660

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Dot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Dot",
               &Z_Registration_Info_UClass_UEnvQueryTest_Dot.InnerSingleton,
               UEnvQueryTest_Dot::StaticRegisterNativesUEnvQueryTest_Dot,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest_Dot>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Dot>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Dot.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_GameplayTags_NoRegister @ 146f7e720

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_GameplayTags_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_GameplayTags",
               &Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.InnerSingleton,
               UEnvQueryTest_GameplayTags::StaticRegisterNativesUEnvQueryTest_GameplayTags,0x268,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UEnvQueryTest_GameplayTags>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_GameplayTags>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Overlap_NoRegister @ 146f7e7e0

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Overlap_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Overlap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Overlap",
               &Z_Registration_Info_UClass_UEnvQueryTest_Overlap.InnerSingleton,
               UEnvQueryTest_Overlap::StaticRegisterNativesUEnvQueryTest_Overlap,0x228,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest_Overlap>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Overlap>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Overlap.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_NoRegister @ 146f7e8a0

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_PathfindingBatch",
               &Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.InnerSingleton,
               UEnvQueryTest_PathfindingBatch::StaticRegisterNativesUEnvQueryTest_PathfindingBatch,
               0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryTest_PathfindingBatch>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_PathfindingBatch>,local_res8,
               UEnvQueryTest_Pathfinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Pathfinding_NoRegister @ 146f7e960

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Pathfinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Pathfinding",
               &Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.InnerSingleton,
               UEnvQueryTest_Pathfinding::StaticRegisterNativesUEnvQueryTest_Pathfinding,0x280,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryTest_Pathfinding>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Pathfinding>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Pathfinding.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Project_NoRegister @ 146f7ea20

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Project_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Project.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Project",
               &Z_Registration_Info_UClass_UEnvQueryTest_Project.InnerSingleton,
               UEnvQueryTest_Project::StaticRegisterNativesUEnvQueryTest_Project,0x238,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest_Project>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Project>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Project.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Random_NoRegister @ 146f7eae0

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Random_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Random.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Random",
               &Z_Registration_Info_UClass_UEnvQueryTest_Random.InnerSingleton,
               UEnvQueryTest_Random::StaticRegisterNativesUEnvQueryTest_Random,0x1f8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest_Random>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Random>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Random.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Trace_NoRegister @ 146f7eba0

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Trace_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Trace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Trace",
               &Z_Registration_Info_UClass_UEnvQueryTest_Trace.InnerSingleton,
               UEnvQueryTest_Trace::StaticRegisterNativesUEnvQueryTest_Trace,0x2e8,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest_Trace>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Trace>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Trace.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTest_Volume_NoRegister @ 146f7ec60

UClass * __cdecl Z_Construct_UClass_UEnvQueryTest_Volume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Volume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Volume",
               &Z_Registration_Info_UClass_UEnvQueryTest_Volume.InnerSingleton,
               UEnvQueryTest_Volume::StaticRegisterNativesUEnvQueryTest_Volume,0x210,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryTest_Volume>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Volume>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Volume.InnerSingleton;
}

// Z_Construct_UClass_UEnvQueryTypes_NoRegister @ 146f7ed20

UClass * __cdecl Z_Construct_UClass_UEnvQueryTypes_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTypes",
               &Z_Registration_Info_UClass_UEnvQueryTypes.InnerSingleton,
               UEnvQueryTypes::StaticRegisterNativesUEnvQueryTypes,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryTypes>,InternalVTableHelperCtorCaller<UEnvQueryTypes>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTypes.InnerSingleton;
}

// Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_NoRegister @ 146f7edd0

UClass * __cdecl Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"ValueOrBBKeyBlueprintUtility",
               &Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.InnerSingleton,
               UValueOrBBKeyBlueprintUtility::StaticRegisterNativesUValueOrBBKeyBlueprintUtility,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UValueOrBBKeyBlueprintUtility>,
               InternalVTableHelperCtorCaller<UValueOrBBKeyBlueprintUtility>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvQueryParam @ 146f7ee90

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvQueryParam(void)

{
  if (Z_Registration_Info_UEnum_EEnvQueryParam.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvQueryParam.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvQueryParam.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestCost @ 146f7eed0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestCost(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestCost.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestCost.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestCost.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EEnvTestWeight @ 146f7ef10

UEnum * __cdecl Z_Construct_UEnum_AIModule_EEnvTestWeight(void)

{
  if (Z_Registration_Info_UEnum_EEnvTestWeight.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEnvTestWeight.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEnvTestWeight.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAIDataProviderStructValue @ 146f7ef50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIDataProviderStructValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderStructValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIDataProviderStructValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderStructValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIDataProviderStructValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest @ 146f7efd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEQSParametrizedQueryExecutionRequest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEQSParametrizedQueryExecutionRequest.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEQSParametrizedQueryExecutionRequest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEQSParametrizedQueryExecutionRequest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvQueryManagerConfig @ 146f7f050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvQueryManagerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryManagerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvQueryManagerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvQueryManagerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvQueryManagerConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEnvQueryRequest @ 146f7f0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEnvQueryRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryRequest.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEnvQueryRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEnvQueryRequest.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEnvQueryRequest.InnerSingleton;
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

// DebuggerStats'' @ 1503e17b0

void __cdecl `dynamic_atexit_destructor_for_'UEnvQueryManager::DebuggerStats__(void)

{
  UEnvQueryManager::DebuggerStats._72_4_ = 0;
  if (UEnvQueryManager::DebuggerStats._64_8_ != 0) {
    FMemory::Free((void *)UEnvQueryManager::DebuggerStats._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FEQSDebugger::FStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UEnvQueryManager::DebuggerStats);
  return;
}

// RegisteredItemTypes'' @ 1503e17f0

void __cdecl `dynamic_atexit_destructor_for_'UEnvQueryManager::RegisteredItemTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UEnvQueryManager::RegisteredItemTypes.AllocatorInstance.Data;
  if (UEnvQueryManager::RegisteredItemTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (UEnvQueryManager::RegisteredItemTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'CVars'' @ 1503e1810

void __cdecl
UE::GameplayDebuggerCategory_EQS::Tweakables::_dynamic_atexit_destructor_for__CVars__(void)

{
  CVars[0]._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)CVars);
  return;
}

// `dynamic_atexit_destructor_for_'CVars_GameplayDebuggerCategory_AI'' @ 1503e1830

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVars_GameplayDebuggerCategory_AI__(void)

{
  CVars_GameplayDebuggerCategory_AI[1]._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)(CVars_GameplayDebuggerCategory_AI + 1));
  CVars_GameplayDebuggerCategory_AI[0]._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)CVars_GameplayDebuggerCategory_AI);
  return;
}

// `dynamic_atexit_destructor_for_'ColorNameDisabled'' @ 1503e1870

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameDisabled__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameDisabled.Data.AllocatorInstance.Data;
  if (ColorNameDisabled.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameDisabled.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ColorNameDisabledActiveRow'' @ 1503e1890

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameDisabledActiveRow__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameDisabledActiveRow.Data.AllocatorInstance.Data;
  if (ColorNameDisabledActiveRow.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameDisabledActiveRow.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ColorNameEnabled'' @ 1503e18b0

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameEnabled__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameEnabled.Data.AllocatorInstance.Data;
  if (ColorNameEnabled.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameEnabled.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ColorNameEnabledActiveRow'' @ 1503e18d0

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameEnabledActiveRow__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameEnabledActiveRow.Data.AllocatorInstance.Data;
  if (ColorNameEnabledActiveRow.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameEnabledActiveRow.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ColorNameInput'' @ 1503e18f0

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameInput__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameInput.Data.AllocatorInstance.Data;
  if (ColorNameInput.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameInput.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogAIBlueprint'' @ 1503e1910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAIBlueprint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAIBlueprint);
  return;
}

// `dynamic_atexit_destructor_for_'LogBrain'' @ 1503e1930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBrain__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBrain);
  return;
}

// `dynamic_atexit_destructor_for_'LogEQS'' @ 1503e1950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogEQS__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogEQS);
  return;
}

// `dynamic_atexit_destructor_for_'Separator'' @ 1503e1970

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__Separator__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Separator.Data.AllocatorInstance.Data;
  if (Separator.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Separator.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SeparatorSpace'' @ 1503e1990

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__SeparatorSpace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SeparatorSpace.Data.AllocatorInstance.Data;
  if (SeparatorSpace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SeparatorSpace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TAG_EQS'' @ 1503e19b0

void __cdecl EVisLogTags::_dynamic_atexit_destructor_for__TAG_EQS__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TAG_EQS.Data.AllocatorInstance.Data;
  if (TAG_EQS.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TAG_EQS.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 1504ff100

bool __thiscall
``anonymous_namespace'::CheckContextLocationForNaN'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_48 [4];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5461123158213918767>);
  if (bVar2) {
    if ((UObjectBaseUtility *)**(undefined8 **)this == (UObjectBaseUtility *)0x0) {
      ::FString::FString(local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)**(undefined8 **)this,local_48,(UObject *)0x0);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5461123158213918767>,
                       &``CheckContextLocationForNaN'::`2'::<lambda_1>::operator()'::`2'::
                        ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ff211;
    }
  }
  bVar2 = false;
LAB_1504ff211:
  if ((bVar4) && (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ff250

bool __thiscall
``anonymous_namespace'::CheckItemLocationForNaN'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_48 [4];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5461123158213918760>);
  if (bVar2) {
    if ((UObjectBaseUtility *)**(undefined8 **)this == (UObjectBaseUtility *)0x0) {
      ::FString::FString(local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)**(undefined8 **)this,local_48,(UObject *)0x0);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5461123158213918760>,
                       &``CheckItemLocationForNaN'::`2'::<lambda_1>::operator()'::`2'::ENSURE_Static
                      );
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ff361;
    }
  }
  bVar2 = false;
LAB_1504ff361:
  if ((bVar4) && (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

