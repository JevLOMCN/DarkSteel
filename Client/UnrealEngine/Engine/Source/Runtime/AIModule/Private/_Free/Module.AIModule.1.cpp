// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 423

// AttitudeSolverImpl'' @ 1410b7cf0

void __cdecl `dynamic_initializer_for_'FGenericTeamId::AttitudeSolverImpl__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGenericTeamId::AttitudeSolverImpl__);
  return;
}

// OnDebugLocked'' @ 1410b7d10

void __cdecl `dynamic_initializer_for_'FBehaviorTreeDelegates::OnDebugLocked__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBehaviorTreeDelegates::OnDebugLocked__);
  return;
}

// OnDebugSelected'' @ 1410b7d30

void __cdecl `dynamic_initializer_for_'FBehaviorTreeDelegates::OnDebugSelected__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBehaviorTreeDelegates::OnDebugSelected__);
  return;
}

// OnTreeStarted'' @ 1410b7d50

void __cdecl `dynamic_initializer_for_'FBehaviorTreeDelegates::OnTreeStarted__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBehaviorTreeDelegates::OnTreeStarted__);
  return;
}

// `dynamic_initializer_for_'AISystemExecInstance'' @ 1410b7d70

void __cdecl _dynamic_initializer_for__AISystemExecInstance__(void)

{
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&AISystemExecInstance);
  AISystemExecInstance = (FAISystemExec)&___7FAISystemExec__6B_;
  atexit(_dynamic_atexit_destructor_for__AISystemExecInstance__);
  return;
}

// `dynamic_initializer_for_'CVarApplyAuxNodesFromFailedSearches'' @ 1410b7db0

void __cdecl UE::BehaviorTree::_dynamic_initializer_for__CVarApplyAuxNodesFromFailedSearches__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarApplyAuxNodesFromFailedSearches,L"BehaviorTree.ApplyAuxNodesFromFailedSearches",
             &bApplyAuxNodesFromFailedSearches,L"Apply Aux Nodes From Failed Searches",0);
  atexit(_dynamic_atexit_destructor_for__CVarApplyAuxNodesFromFailedSearches__);
  return;
}

// `dynamic_initializer_for_'CVarBTRecordFrameSearchTimes'' @ 1410b7e00

void __cdecl _dynamic_initializer_for__CVarBTRecordFrameSearchTimes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarBTRecordFrameSearchTimes,L"BehaviorTree.RecordFrameSearchTimes",local_res8,
             L"Record Search Times Per Frame For Perf Stats",0);
  atexit(_dynamic_atexit_destructor_for__CVarBTRecordFrameSearchTimes__);
  return;
}

// `dynamic_initializer_for_'CVarEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest'' @ 1410b7e50

void __cdecl
UE::BehaviorTree::
_dynamic_initializer_for__CVarEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest,
             L"BehaviorTree.EnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest",
             &bEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest,
             L"Should we ensure when pending execution and execution node are invalid when scheduling execution update."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest__
        );
  return;
}

// `dynamic_initializer_for_'ColorNameDisabled'' @ 1410b7ea0

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameDisabled__(void)

{
  ::FString::FString(&ColorNameDisabled,L"grey");
  atexit(_dynamic_atexit_destructor_for__ColorNameDisabled__);
  return;
}

// `dynamic_initializer_for_'ColorNameDisabledActiveRow'' @ 1410b7ed0

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameDisabledActiveRow__(void)

{
  ::FString::FString(&ColorNameDisabledActiveRow,L"black");
  atexit(_dynamic_atexit_destructor_for__ColorNameDisabledActiveRow__);
  return;
}

// `dynamic_initializer_for_'ColorNameEnabled'' @ 1410b7f00

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameEnabled__(void)

{
  ::FString::FString(&ColorNameEnabled,L"green");
  atexit(_dynamic_atexit_destructor_for__ColorNameEnabled__);
  return;
}

// `dynamic_initializer_for_'ColorNameEnabledActiveRow'' @ 1410b7f30

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameEnabledActiveRow__(void)

{
  ::FString::FString(&ColorNameEnabledActiveRow,L"green");
  atexit(_dynamic_atexit_destructor_for__ColorNameEnabledActiveRow__);
  return;
}

// `dynamic_initializer_for_'ColorNameInput'' @ 1410b7f60

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameInput__(void)

{
  ::FString::FString(&ColorNameInput,L"white");
  atexit(_dynamic_atexit_destructor_for__ColorNameInput__);
  return;
}

// `dynamic_initializer_for_'DebugTimeSliceDefaultSectionName'' @ 1410b7f90

void __cdecl FNavigationSystem::_dynamic_initializer_for__DebugTimeSliceDefaultSectionName__(void)

{
  ::FName::FName(&DebugTimeSliceDefaultSectionName,L"DefaultSection");
  return;
}

// `dynamic_initializer_for_'InvalidResource'' @ 1410b7fb0

void __cdecl FAIResources::_dynamic_initializer_for__InvalidResource__(void)

{
  ::FName::FName(&InvalidResource.Name,L"Invalid");
  return;
}

// `dynamic_initializer_for_'KeySelf'' @ 1410b7fd0

void __cdecl FBlackboard::_dynamic_initializer_for__KeySelf__(void)

{
  ::FName::FName(&KeySelf,L"SelfActor");
  return;
}

// `dynamic_initializer_for_'LogAIModule'' @ 1410b7ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAIModule__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAIModule,L"LogAIModule",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAIModule__);
  return;
}

// `dynamic_initializer_for_'LogAINavigation'' @ 1410b8030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAINavigation__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAINavigation,L"LogAINavigation",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAINavigation__);
  return;
}

// `dynamic_initializer_for_'LogAISub'' @ 1410b8070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAISub__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAISub,L"LogAISub",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAISub__);
  return;
}

// `dynamic_initializer_for_'LogBehaviorTree'' @ 1410b80b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBehaviorTree__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBehaviorTree,L"LogBehaviorTree",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogBehaviorTree__);
  return;
}

// `dynamic_initializer_for_'LogManagerInstanceTracker'' @ 1410b80f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogManagerInstanceTracker__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogManagerInstanceTracker,L"LogManagerInstanceTracker",Warning,All
            );
  atexit(_dynamic_atexit_destructor_for__LogManagerInstanceTracker__);
  return;
}

// `dynamic_initializer_for_'LogTestAI'' @ 1410b8130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTestAI__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTestAI,L"LogTestAI",All,All);
  atexit(_dynamic_atexit_destructor_for__LogTestAI__);
  return;
}

// `dynamic_initializer_for_'Logic'' @ 1410b8170

void __cdecl FAIResources::_dynamic_initializer_for__Logic__(void)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"Logic");
  Logic.Index = (uchar)FAINamedID<FAIResCounter>::Counter;
  FAINamedID<FAIResCounter>::Counter =
       (FAIResCounter)((char)FAINamedID<FAIResCounter>::Counter + '\x01');
  Logic.Name = local_res8[0];
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAIModule'' @ 1410b81c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAIModule__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AIModule";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AIModule",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAIModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Movement'' @ 1410b8210

void __cdecl FAIResources::_dynamic_initializer_for__Movement__(void)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"Movement");
  Movement.Index = (uchar)FAINamedID<FAIResCounter>::Counter;
  FAINamedID<FAIResCounter>::Counter =
       (FAIResCounter)((char)FAINamedID<FAIResCounter>::Counter + '\x01');
  Movement.Name = local_res8[0];
  return;
}

// `dynamic_initializer_for_'NAME_AAIController_OnUsingBlackBoard'' @ 1410b8260

void __cdecl _dynamic_initializer_for__NAME_AAIController_OnUsingBlackBoard__(void)

{
  FName::FName(&NAME_AAIController_OnUsingBlackBoard,L"OnUsingBlackBoard");
  return;
}

// `dynamic_initializer_for_'Perception'' @ 1410b8280

void __cdecl FAIResources::_dynamic_initializer_for__Perception__(void)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"Perception");
  Perception.Index = (uchar)FAINamedID<FAIResCounter>::Counter;
  FAINamedID<FAIResCounter>::Counter =
       (FAIResCounter)((char)FAINamedID<FAIResCounter>::Counter + '\x01');
  Perception.Name = local_res8[0];
  return;
}

// `dynamic_initializer_for_'ResourceIDs'' @ 1410b82d0

void __cdecl FAIResources::_dynamic_initializer_for__ResourceIDs__(void)

{
  atexit(_dynamic_atexit_destructor_for__ResourceIDs__);
  return;
}

// `dynamic_initializer_for_'ResourceSetup'' @ 1410b82f0

void __cdecl _dynamic_initializer_for__ResourceSetup__(void)

{
  FAIResources::RegisterResource(&FAIResources::Movement);
  FAIResources::RegisterResource(&FAIResources::Logic);
  FAIResources::RegisterResource(&FAIResources::Perception);
  return;
}

// `dynamic_initializer_for_'Separator'' @ 1410b8330

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__Separator__(void)

{
  ::FString::FString(&Separator,L"{white} | ");
  atexit(_dynamic_atexit_destructor_for__Separator__);
  return;
}

// `dynamic_initializer_for_'SeparatorSpace'' @ 1410b8360

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__SeparatorSpace__(void)

{
  ::FString::FString(&SeparatorSpace,L"  ");
  atexit(_dynamic_atexit_destructor_for__SeparatorSpace__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_AuxUpdateTime'' @ 1410b8390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_AuxUpdateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_AuxUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_AuxUpdateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_AuxUpdateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_AuxUpdateTime,*pFVar1,
               L"BT Auxiliary Update Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",
               L"Behavior Tree",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_Cleanup'' @ 1410b8420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_Cleanup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_Cleanup ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_Cleanup>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_Cleanup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_Cleanup,*pFVar1,
               L"BT Cleanup Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_ExecutionTime'' @ 1410b84b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_ExecutionTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_ExecutionTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_ExecutionTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_ExecutionTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_ExecutionTime,*pFVar1,
               L"BT Execution Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_InstanceMemory'' @ 1410b8540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_InstanceMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_InstanceMemory ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_InstanceMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_InstanceMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_InstanceMemory,*pFVar1,
               L"Instance memory","STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_LoadTime'' @ 1410b85d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_LoadTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_LoadTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_LoadTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_LoadTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_LoadTime,*pFVar1,
               L"BT Load Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_NumInstances'' @ 1410b8660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_NumInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_NumInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_NumInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumInstances,*pFVar1,
               L"Num Instances","STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_NumTemplates'' @ 1410b86f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_NumTemplates__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_NumTemplates ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_NumTemplates>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_NumTemplates");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_NumTemplates,*pFVar1,
               L"Num Templates","STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_SearchTime'' @ 1410b8780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_SearchTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_SearchTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_SearchTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_SearchTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_SearchTime,*pFVar1,
               L"BT Search Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_StopTree'' @ 1410b8810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_StopTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_StopTree ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_StopTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_StopTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_StopTree,*pFVar1,
               L"BT Stop Tree Time","STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_BehaviorTree_Tick'' @ 1410b88a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_BehaviorTree_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_BehaviorTree_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_AI_BehaviorTree_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_BehaviorTree_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_BehaviorTree_Tick,*pFVar1,L"BT Tick",
               "STATGROUP_AIBehaviorTree","STATCAT_Advanced",L"Behavior Tree",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Overall'' @ 1410b8930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Overall__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Overall == (FThreadSafeStaticStat<FStat_STAT_AI_Overall>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Overall");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Overall,*pFVar1,L"Overall AI Time",
               "STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MoveTo'' @ 1410b89c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MoveTo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MoveTo == (FThreadSafeStaticStat<FStat_STAT_MoveTo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MoveTo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoveTo,*pFVar1,L"MoveTo","STATGROUP_AI",
               "STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIController_h__Script_AIModule_1926270173'' @ 1410b8a50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIController_h__Script_AIModule_1926270173__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIController_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h__Script_AIModule_2208305971'' @ 1410b8a90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h__Script_AIModule_2208305971__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h__Script_AIModule_2946196546'' @ 1410b8ad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h__Script_AIModule_2946196546__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResources_h__Script_AIModule_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h__Script_AIModule_155314114'' @ 1410b8b10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h__Script_AIModule_155314114__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h__Script_AIModule_4138254317'' @ 1410b8b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h__Script_AIModule_4138254317__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h__Script_AIModule_1089317295'' @ 1410b8b90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h__Script_AIModule_1089317295__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h__Script_AIModule_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h__Script_AIModule_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h__Script_AIModule_1403624525'' @ 1410b8be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h__Script_AIModule_1403624525__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h__Script_AIModule_3223537709'' @ 1410b8c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h__Script_AIModule_3223537709__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h__Script_AIModule_357025922'' @ 1410b8c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h__Script_AIModule_357025922__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeManager_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h__Script_AIModule_1968019817'' @ 1410b8cc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h__Script_AIModule_1968019817__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyEnums_h__Script_AIModule_1567597299'' @ 1410b8d00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyEnums_h__Script_AIModule_1567597299__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyEnums_h__Script_AIModule_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h__Script_AIModule_3246943822'' @ 1410b8d50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h__Script_AIModule_3246943822__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h__Script_AIModule_1800777471'' @ 1410b8d90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h__Script_AIModule_1800777471__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h__Script_AIModule_42121945'' @ 1410b8dd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h__Script_AIModule_42121945__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h__Script_AIModule_183334169'' @ 1410b8e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h__Script_AIModule_183334169__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h__Script_AIModule_517527712'' @ 1410b8e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h__Script_AIModule_517527712__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseBlueprintListener_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h__Script_AIModule_3642150412'' @ 1410b8ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h__Script_AIModule_3642150412__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h__Script_AIModule_4190715384'' @ 1410b8ee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h__Script_AIModule_4190715384__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h__Script_AIModule_1002322126'' @ 1410b8f20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h__Script_AIModule_1002322126__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h__Script_AIModule_3104784561'' @ 1410b8f60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h__Script_AIModule_3104784561__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h__Script_AIModule_2632018850'' @ 1410b8fa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h__Script_AIModule_2632018850__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h__Script_AIModule_442104580'' @ 1410b8fe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h__Script_AIModule_442104580__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h__Script_AIModule_458523546'' @ 1410b9020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h__Script_AIModule_458523546__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h__Script_AIModule_3484645455'' @ 1410b9060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h__Script_AIModule_3484645455__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h__Script_AIModule_3715616433'' @ 1410b90a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h__Script_AIModule_3715616433__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_IndexedHandle_h__Script_AIModule_2089435804'' @ 1410b90e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_IndexedHandle_h__Script_AIModule_2089435804__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_IndexedHandle_h__Script_AIModule_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h__Script_AIModule_3349546550'' @ 1410b9120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h__Script_AIModule_3349546550__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AIModule'' @ 1410b9160

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AIModule__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xfdf3c37a;
  local_res8[0].DeclarationsHash = 0xc5c705c9;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AIModule,L"/Script/AIModule",
             &Z_Registration_Info_UPackage__Script_AIModule,local_res8);
  return;
}

// Z_Construct_UClass_UAISenseConfig_Prediction @ 146e77770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Prediction(void)

{
  if (Z_Registration_Info_UClass_UAISenseConfig_Prediction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseConfig_Prediction.OuterSingleton,
               &Z_Construct_UClass_UAISenseConfig_Prediction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Prediction.OuterSingleton;
}

// Z_Construct_UClass_UAIResource_Logic @ 146e777b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIResource_Logic(void)

{
  if (Z_Registration_Info_UClass_UAIResource_Logic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIResource_Logic.OuterSingleton,
               &Z_Construct_UClass_UAIResource_Logic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIResource_Logic.OuterSingleton;
}

// Z_Construct_UClass_UAIResource_Movement @ 146e777f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIResource_Movement(void)

{
  if (Z_Registration_Info_UClass_UAIResource_Movement.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIResource_Movement.OuterSingleton,
               &Z_Construct_UClass_UAIResource_Movement_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIResource_Movement.OuterSingleton;
}

// Z_Construct_UClass_UAISubsystem @ 146e77830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISubsystem(void)

{
  if (Z_Registration_Info_UClass_UAISubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISubsystem.OuterSingleton,
               &Z_Construct_UClass_UAISubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISubsystem.OuterSingleton;
}

// Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister @ 146e77870

UClass * __cdecl Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.InnerSingleton,
               UAIAsyncTaskBlueprintProxy::StaticRegisterNativesUAIAsyncTaskBlueprintProxy,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UAIAsyncTaskBlueprintProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.InnerSingleton;
}

// `scalar_deleting_destructor' @ 146e77920

void * __thiscall IAIModule::_scalar_deleting_destructor_(IAIModule *this,uint param_1)

{
  *this = (IAIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UBehaviorTreeComponent_NoRegister @ 146e77ad0

UClass * __cdecl Z_Construct_UClass_UBehaviorTreeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTreeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UBehaviorTreeComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTreeComponent",
               &Z_Registration_Info_UClass_UBehaviorTreeComponent.InnerSingleton,
               UBehaviorTreeComponent::StaticRegisterNativesUBehaviorTreeComponent,0x2b8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UBehaviorTreeComponent>,
               InternalVTableHelperCtorCaller<UBehaviorTreeComponent>,local_res8,
               UBrainComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeComponent.InnerSingleton;
}

// Z_Construct_UClass_UAISenseEvent_Damage @ 146e77b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseEvent_Damage(void)

{
  if (Z_Registration_Info_UClass_UAISenseEvent_Damage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseEvent_Damage.OuterSingleton,
               &Z_Construct_UClass_UAISenseEvent_Damage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseEvent_Damage.OuterSingleton;
}

// Z_Construct_UClass_UAIAsyncTaskBlueprintProxy @ 146e77bd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIAsyncTaskBlueprintProxy(void)

{
  if (Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.OuterSingleton,
               &Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.OuterSingleton;
}

// Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature @ 146e77c10

UFunction * __cdecl
Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FAIRequestID @ 146e77c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIRequestID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIRequestID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIRequestID.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIRequestID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIRequestID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIRequestID.InnerSingleton;
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

// Z_Construct_UPackage__Script_AIModule @ 146e77cd0

UPackage * __cdecl Z_Construct_UPackage__Script_AIModule(void)

{
  if (Z_Registration_Info_UPackage__Script_AIModule.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AIModule.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AIModule.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146e77d10

void * __thiscall IAISystemModule::_scalar_deleting_destructor_(IAISystemModule *this,uint param_1)

{
  *this = (IAISystemModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAISystem_NoRegister @ 146e77d50

UClass * __cdecl Z_Construct_UClass_UAISystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISystem",&Z_Registration_Info_UClass_UAISystem.InnerSingleton,
               UAISystem::StaticRegisterNativesUAISystem,0x1a0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISystem>,InternalVTableHelperCtorCaller<UAISystem>,local_res8,
               UAISystemBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISystem.InnerSingleton;
}

// Z_Construct_UClass_UBehaviorTreeManager_NoRegister @ 146e77ed0

UClass * __cdecl Z_Construct_UClass_UBehaviorTreeManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTreeManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTreeManager",
               &Z_Registration_Info_UClass_UBehaviorTreeManager.InnerSingleton,
               UBehaviorTreeManager::StaticRegisterNativesUBehaviorTreeManager,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UBehaviorTreeManager>,
               InternalVTableHelperCtorCaller<UBehaviorTreeManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeManager.InnerSingleton;
}

// Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted @ 146e78130

UFunction * __cdecl Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAISenseEvent_Hearing @ 146e78170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseEvent_Hearing(void)

{
  if (Z_Registration_Info_UClass_UAISenseEvent_Hearing.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseEvent_Hearing.OuterSingleton,
               &Z_Construct_UClass_UAISenseEvent_Hearing_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseEvent_Hearing.OuterSingleton;
}

// EBasicKeyOperation_StaticEnum @ 146e78270

UEnum * __cdecl EBasicKeyOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EBasicKeyOperation,(UObject *)pUVar1,
                       L"EBasicKeyOperation");
  }
  return Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton;
}

// EArithmeticKeyOperation_StaticEnum @ 146e782b0

UEnum * __cdecl EArithmeticKeyOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation,(UObject *)pUVar1,
                       L"EArithmeticKeyOperation");
  }
  return Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton;
}

// ETextKeyOperation_StaticEnum @ 146e782f0

UEnum * __cdecl ETextKeyOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_ETextKeyOperation,(UObject *)pUVar1,
                       L"ETextKeyOperation");
  }
  return Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton;
}

// Z_Construct_UClass_UAISystem @ 146e78330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISystem(void)

{
  if (Z_Registration_Info_UClass_UAISystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISystem.OuterSingleton,
               &Z_Construct_UClass_UAISystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISystem.OuterSingleton;
}

// Z_Construct_UFunction_UAISystem_AIIgnorePlayers @ 146e78370

UFunction * __cdecl Z_Construct_UFunction_UAISystem_AIIgnorePlayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAISystem_AILoggingVerbose @ 146e783b0

UFunction * __cdecl Z_Construct_UFunction_UAISystem_AILoggingVerbose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bFinishMoveOnGoalOverlap_SetBit @ 146e784b0

void __cdecl
Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  return;
}

// NewProp_bAcceptPartialPaths_SetBit @ 146e784c0

void __cdecl Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcd) = 1;
  return;
}

// NewProp_bAllowStrafing_SetBit @ 146e784d0

void __cdecl Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xce) = 1;
  return;
}

// NewProp_bAllowControllersAsEQSQuerier_SetBit @ 146e784e0

void __cdecl
Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcf) = 1;
  return;
}

// NewProp_bEnableDebuggerPlugin_SetBit @ 146e784f0

void __cdecl
Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bForgetStaleActors_SetBit @ 146e78500

void __cdecl Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  return;
}

// NewProp_bAddBlackboardSelfKey_SetBit @ 146e78510

void __cdecl
Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd2) = 1;
  return;
}

// NewProp_bClearBBEntryOnBTEQSFail_SetBit @ 146e78520

void __cdecl
Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd3) = 1;
  return;
}

// NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_SetBit @ 146e78530

void __cdecl
Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  return;
}

// Z_Construct_UClass_UCrowdAgentInterface @ 146e78540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCrowdAgentInterface(void)

{
  if (Z_Registration_Info_UClass_UCrowdAgentInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCrowdAgentInterface.OuterSingleton,
               &Z_Construct_UClass_UCrowdAgentInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCrowdAgentInterface.OuterSingleton;
}

// Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature @ 146e78640

UFunction * __cdecl
Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAIResourceInterface @ 146e78740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIResourceInterface(void)

{
  if (Z_Registration_Info_UClass_UAIResourceInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIResourceInterface.OuterSingleton,
               &Z_Construct_UClass_UAIResourceInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIResourceInterface.OuterSingleton;
}

// Z_Construct_UClass_UEQSQueryResultSourceInterface @ 146e78840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEQSQueryResultSourceInterface(void)

{
  if (Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.OuterSingleton,
               &Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.OuterSingleton;
}

// Z_Construct_UClass_UBehaviorTreeManager @ 146e78880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBehaviorTreeManager(void)

{
  if (Z_Registration_Info_UClass_UBehaviorTreeManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBehaviorTreeManager.OuterSingleton,
               &Z_Construct_UClass_UBehaviorTreeManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeManager.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo @ 146e788c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBehaviorTreeTemplateInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBehaviorTreeTemplateInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBehaviorTreeTemplateInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBehaviorTreeTemplateInfo.InnerSingleton;
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

// NewStructOps @ 146e78940

void * __cdecl Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBehaviorTreeTemplateInfo,&UE::CoreUObject::Private::Construct<FBehaviorTreeTemplateInfo>,&UE::CoreUObject::Private::ConstructForTests<FBehaviorTreeTemplateInfo>,&UE::CoreUObject::Private::Destruct<FBehaviorTreeTemplateInfo>,&UE::CoreUObject::Private::Copy<FBehaviorTreeTemplateInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGenericTeamAgentInterface @ 146e78980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGenericTeamAgentInterface(void)

{
  if (Z_Registration_Info_UClass_UGenericTeamAgentInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGenericTeamAgentInterface.OuterSingleton,
               &Z_Construct_UClass_UGenericTeamAgentInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGenericTeamAgentInterface.OuterSingleton;
}

// ETeamAttitude_StaticEnum @ 146e789c0

UEnum * __cdecl ETeamAttitude_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_ETeamAttitude,(UObject *)pUVar1,L"ETeamAttitude");
  }
  return Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton;
}

// NewStructOps @ 146e78a00

void * __cdecl Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGenericTeamId,&UE::CoreUObject::Private::Construct<FGenericTeamId>,&UE::CoreUObject::Private::ConstructForTests<FGenericTeamId>,&UE::CoreUObject::Private::Destruct<FGenericTeamId>,&UE::CoreUObject::Private::Copy<FGenericTeamId>,&UE::CoreUObject::Private::GetStructTypeHash<FGenericTeamId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAISenseBlueprintListener @ 146e78c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseBlueprintListener(void)

{
  if (Z_Registration_Info_UClass_UAISenseBlueprintListener.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseBlueprintListener.OuterSingleton,
               &Z_Construct_UClass_UAISenseBlueprintListener_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseBlueprintListener.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSimpleIndexedHandleBase @ 146e78db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSimpleIndexedHandleBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSimpleIndexedHandleBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSimpleIndexedHandleBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FSimpleIndexedHandleBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSimpleIndexedHandleBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSimpleIndexedHandleBase.InnerSingleton;
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

// NewStructOps @ 146e78e30

void * __cdecl Z_Construct_UScriptStruct_FSimpleIndexedHandleBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSimpleIndexedHandleBase,&UE::CoreUObject::Private::Construct<FSimpleIndexedHandleBase>,&UE::CoreUObject::Private::ConstructForTests<FSimpleIndexedHandleBase>,&UE::CoreUObject::Private::Destruct<FSimpleIndexedHandleBase>,&UE::CoreUObject::Private::Copy<FSimpleIndexedHandleBase>,&UE::CoreUObject::Private::GetStructTypeHash<FSimpleIndexedHandleBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146e78eb0

void * __cdecl Z_Construct_UScriptStruct_FIndexedHandleBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIndexedHandleBase,&UE::CoreUObject::Private::Construct<FIndexedHandleBase>,&UE::CoreUObject::Private::ConstructForTests<FIndexedHandleBase>,&UE::CoreUObject::Private::Destruct<FIndexedHandleBase>,&UE::CoreUObject::Private::Copy<FIndexedHandleBase>,&UE::CoreUObject::Private::GetStructTypeHash<FIndexedHandleBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146e78f30

void * __cdecl Z_Construct_UScriptStruct_FCompactIndexedHandleBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompactIndexedHandleBase,&UE::CoreUObject::Private::Construct<FCompactIndexedHandleBase>,&UE::CoreUObject::Private::ConstructForTests<FCompactIndexedHandleBase>,&UE::CoreUObject::Private::Destruct<FCompactIndexedHandleBase>,&UE::CoreUObject::Private::Copy<FCompactIndexedHandleBase>,&UE::CoreUObject::Private::GetStructTypeHash<FCompactIndexedHandleBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_AAIController @ 146e78f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AAIController(void)

{
  if (Z_Registration_Info_UClass_AAIController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AAIController.OuterSingleton,
               &Z_Construct_UClass_AAIController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AAIController.OuterSingleton;
}

// EPawnActionMoveMode_StaticEnum @ 146e78fb0

UEnum * __cdecl EPawnActionMoveMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionMoveMode,(UObject *)pUVar1,
                       L"EPawnActionMoveMode");
  }
  return Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton;
}

// Z_Construct_UFunction_AAIController_ClaimTaskResource @ 146e78ff0

UFunction * __cdecl Z_Construct_UFunction_AAIController_ClaimTaskResource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAIController_GetAIPerceptionComponent @ 146e790e0

UFunction * __cdecl Z_Construct_UFunction_AAIController_GetAIPerceptionComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAIController_GetFocalPoint @ 146e79150

UFunction * __cdecl Z_Construct_UFunction_AAIController_GetFocalPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146e79190

void * __cdecl Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSequentialIDBase,&UE::CoreUObject::Private::Construct<FSequentialIDBase>,&UE::CoreUObject::Private::ConstructForTests<FSequentialIDBase>,&UE::CoreUObject::Private::Destruct<FSequentialIDBase>,&UE::CoreUObject::Private::Copy<FSequentialIDBase>,&UE::CoreUObject::Private::GetStructTypeHash<FSequentialIDBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AAIController_GetFocalPointOnActor @ 146e791f0

UFunction * __cdecl Z_Construct_UFunction_AAIController_GetFocalPointOnActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAIController_GetFocusActor @ 146e79280

UFunction * __cdecl Z_Construct_UFunction_AAIController_GetFocusActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_GetFocusActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAIController_GetImmediateMoveDestination @ 146e79300

UFunction * __cdecl Z_Construct_UFunction_AAIController_GetImmediateMoveDestination(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAIController_GetMoveStatus @ 146e79340

UFunction * __cdecl Z_Construct_UFunction_AAIController_GetMoveStatus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAIController_GetPathFollowingComponent @ 146e79380

UFunction * __cdecl Z_Construct_UFunction_AAIController_GetPathFollowingComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146e793c0

void __cdecl
Z_Construct_UFunction_AAIController_HasPartialPath_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AAIController_HasPartialPath @ 146e793d0

UFunction * __cdecl Z_Construct_UFunction_AAIController_HasPartialPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_HasPartialPath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAIController_K2_ClearFocus @ 146e79410

UFunction * __cdecl Z_Construct_UFunction_AAIController_K2_ClearFocus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146e79580

void * __thiscall FAISystemExec::_scalar_deleting_destructor_(FAISystemExec *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_AAIController_K2_SetFocalPoint @ 146e795c0

UFunction * __cdecl Z_Construct_UFunction_AAIController_K2_SetFocalPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EAIOptionFlag_StaticEnum @ 146e79650

UEnum * __cdecl EAIOptionFlag_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAIOptionFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAIOptionFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAIOptionFlag,(UObject *)pUVar1,L"EAIOptionFlag");
  }
  return Z_Registration_Info_UEnum_EAIOptionFlag.OuterSingleton;
}

// Z_Construct_UFunction_AAIController_K2_SetFocus @ 146e79690

UFunction * __cdecl Z_Construct_UFunction_AAIController_K2_SetFocus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bStopOnOverlap_SetBit @ 146e79710

void __cdecl
Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bStopOnOverlap_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// FAIDistanceType_StaticEnum @ 146e79720

UEnum * __cdecl FAIDistanceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FAIDistanceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_FAIDistanceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_FAIDistanceType,(UObject *)pUVar1,
                       L"FAIDistanceType");
  }
  return Z_Registration_Info_UEnum_FAIDistanceType.OuterSingleton;
}

// NewProp_bUsePathfinding_SetBit @ 146e79760

void __cdecl
Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bUsePathfinding_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bCanStrafe_SetBit @ 146e79770

void __cdecl
Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bCanStrafe_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewProp_bAllowPartialPath_SetBit @ 146e79780

void __cdecl
Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bAllowPartialPath_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// EAIRequestPriority_StaticEnum @ 146e79790

UEnum * __cdecl EAIRequestPriority_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAIRequestPriority,(UObject *)pUVar1,
                       L"EAIRequestPriority");
  }
  return Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton;
}

// Z_Construct_UFunction_AAIController_MoveToActor @ 146e798a0

UFunction * __cdecl Z_Construct_UFunction_AAIController_MoveToActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AAIController_MoveToActor_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// EAILockSource_StaticEnum @ 146e798e0

UEnum * __cdecl EAILockSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAILockSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAILockSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAILockSource,(UObject *)pUVar1,L"EAILockSource");
  }
  return Z_Registration_Info_UEnum_EAILockSource.OuterSingleton;
}

// NewProp_bStopOnOverlap_SetBit @ 146e79ac0

void __cdecl
Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bStopOnOverlap_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewStructOps @ 146e79ad0

void * __cdecl Z_Construct_UScriptStruct_FAIRequestID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIRequestID,&UE::CoreUObject::Private::Construct<FAIRequestID>,&UE::CoreUObject::Private::ConstructForTests<FAIRequestID>,&UE::CoreUObject::Private::Destruct<FAIRequestID>,&UE::CoreUObject::Private::Copy<FAIRequestID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUsePathfinding_SetBit @ 146e79b10

void __cdecl
Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bUsePathfinding_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// NewProp_bProjectDestinationToNavigation_SetBit @ 146e79b20

void __cdecl
Z_Construct_UFunction_AAIController_MoveToLocation_Statics::
NewProp_bProjectDestinationToNavigation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  return;
}

// NewProp_bCanStrafe_SetBit @ 146e79b30

void __cdecl
Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bCanStrafe_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f) = 1;
  return;
}

// NewProp_bAllowPartialPath_SetBit @ 146e79b40

void __cdecl
Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bAllowPartialPath_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_AAIController_MoveToLocation @ 146e79b50

UFunction * __cdecl Z_Construct_UFunction_AAIController_MoveToLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146e79b90

void * __cdecl Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIMoveRequest,&UE::CoreUObject::Private::Construct<FAIMoveRequest>,&UE::CoreUObject::Private::ConstructForTests<FAIMoveRequest>,&UE::CoreUObject::Private::Destruct<FAIMoveRequest>,&UE::CoreUObject::Private::Copy<FAIMoveRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed @ 146e79bd0

UFunction * __cdecl Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EGenericAICheck_StaticEnum @ 146e79c10

UEnum * __cdecl EGenericAICheck_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGenericAICheck.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EGenericAICheck.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EGenericAICheck,(UObject *)pUVar1,
                       L"EGenericAICheck");
  }
  return Z_Registration_Info_UEnum_EGenericAICheck.OuterSingleton;
}

// Z_Construct_UFunction_AAIController_OnUsingBlackBoard @ 146e79c50

UFunction * __cdecl Z_Construct_UFunction_AAIController_OnUsingBlackBoard(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146e79c90

void __cdecl
Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 146e79cc0

void * __cdecl Z_Construct_UScriptStruct_FIntervalCountdown_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIntervalCountdown,&UE::CoreUObject::Private::Construct<FIntervalCountdown>,&UE::CoreUObject::Private::ConstructForTests<FIntervalCountdown>,&UE::CoreUObject::Private::Destruct<FIntervalCountdown>,&UE::CoreUObject::Private::Copy<FIntervalCountdown>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AAIController_RunBehaviorTree @ 146e79d10

UFunction * __cdecl Z_Construct_UFunction_AAIController_RunBehaviorTree(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 146e79e00

void __cdecl
Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AAIController_SetMoveBlockDetection @ 146e79e40

UFunction * __cdecl Z_Construct_UFunction_AAIController_SetMoveBlockDetection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAIController_SetPathFollowingComponent @ 146e79ec0

UFunction * __cdecl Z_Construct_UFunction_AAIController_SetPathFollowingComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAISenseConfig @ 146e79f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseConfig(void)

{
  if (Z_Registration_Info_UClass_UAISenseConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseConfig.OuterSingleton,
               &Z_Construct_UClass_UAISenseConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseConfig.OuterSingleton;
}

// Z_Construct_UFunction_AAIController_UnclaimTaskResource @ 146e79f70

UFunction * __cdecl Z_Construct_UFunction_AAIController_UnclaimTaskResource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStartsEnabled_SetBit @ 146e79fb0

void __cdecl Z_Construct_UClass_UAISenseConfig_Statics::NewProp_bStartsEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146e79fc0

void __cdecl
Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_AAIController_UseBlackboard @ 146e79fd0

UFunction * __cdecl Z_Construct_UFunction_AAIController_UseBlackboard(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAIController_UseBlackboard_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStartAILogicOnPossess_SetBit @ 146e7a0d0

void __cdecl
Z_Construct_UClass_AAIController_Statics::NewProp_bStartAILogicOnPossess_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3a8) = *(uint *)((longlong)param_1 + 0x3a8) | 1;
  return;
}

// NewProp_bStopAILogicOnUnposses_SetBit @ 146e7a0e0

void __cdecl
Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3a8) = *(uint *)((longlong)param_1 + 0x3a8) | 2;
  return;
}

// NewProp_bLOSflag_SetBit @ 146e7a0f0

void __cdecl Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3a8) = *(uint *)((longlong)param_1 + 0x3a8) | 4;
  return;
}

// NewProp_bSkipExtraLOSChecks_SetBit @ 146e7a100

void __cdecl
Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3a8) = *(uint *)((longlong)param_1 + 0x3a8) | 8;
  return;
}

// NewProp_bAllowStrafe_SetBit @ 146e7a110

void __cdecl Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3a8) = *(uint *)((longlong)param_1 + 0x3a8) | 0x10;
  return;
}

// NewProp_bWantsPlayerState_SetBit @ 146e7a120

void __cdecl
Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3a8) = *(uint *)((longlong)param_1 + 0x3a8) | 0x20;
  return;
}

// NewProp_bSetControlRotationFromPawnOrientation_SetBit @ 146e7a130

void __cdecl
Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x3a8) = *(uint *)((longlong)param_1 + 0x3a8) | 0x40;
  return;
}

// Z_Construct_UClass_UAISenseConfig_Blueprint @ 146e7a140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Blueprint(void)

{
  if (Z_Registration_Info_UClass_UAISenseConfig_Blueprint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseConfig_Blueprint.OuterSingleton,
               &Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Blueprint.OuterSingleton;
}

// Z_Construct_UClass_UBehaviorTree @ 146e7a420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBehaviorTree(void)

{
  if (Z_Registration_Info_UClass_UBehaviorTree.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBehaviorTree.OuterSingleton,
               &Z_Construct_UClass_UBehaviorTree_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBehaviorTree.OuterSingleton;
}

// Z_Construct_UClass_UAISenseConfig_Sight @ 146e7a520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Sight(void)

{
  if (Z_Registration_Info_UClass_UAISenseConfig_Sight.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseConfig_Sight.OuterSingleton,
               &Z_Construct_UClass_UAISenseConfig_Sight_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Sight.OuterSingleton;
}

// Z_Construct_UClass_UBehaviorTreeComponent @ 146e7a620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBehaviorTreeComponent(void)

{
  if (Z_Registration_Info_UClass_UBehaviorTreeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBehaviorTreeComponent.OuterSingleton,
               &Z_Construct_UClass_UBehaviorTreeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBehaviorTreeComponent.OuterSingleton;
}

// NewProp_bAddToExistingDuration_SetBit @ 146e7a660

void __cdecl
Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::
NewProp_bAddToExistingDuration_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UClass_UAISenseConfig_Team @ 146e7a670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Team(void)

{
  if (Z_Registration_Info_UClass_UAISenseConfig_Team.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseConfig_Team.OuterSingleton,
               &Z_Construct_UClass_UAISenseConfig_Team_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Team.OuterSingleton;
}

// Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration @ 146e7a6b0

UFunction * __cdecl Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime @ 146e7a6f0

UFunction * __cdecl Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree @ 146e7a7f0

UFunction * __cdecl Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBehaviorTree_NoRegister @ 146e7a830

UClass * __cdecl Z_Construct_UClass_UBehaviorTree_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTree",
               &Z_Registration_Info_UClass_UBehaviorTree.InnerSingleton,
               UBehaviorTree::StaticRegisterNativesUBehaviorTree,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBehaviorTree>,
               InternalVTableHelperCtorCaller<UBehaviorTree>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTree.InnerSingleton;
}

// Z_Construct_UClass_UAISenseConfig_Touch @ 146e7a990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Touch(void)

{
  if (Z_Registration_Info_UClass_UAISenseConfig_Touch.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseConfig_Touch.OuterSingleton,
               &Z_Construct_UClass_UAISenseConfig_Touch_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Touch.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146e7b320

void * __thiscall FAIModule::_scalar_deleting_destructor_(FAIModule *this,uint param_1)

{
  *this = (FAIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAISenseConfig_Hearing @ 146e7b420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Hearing(void)

{
  if (Z_Registration_Info_UClass_UAISenseConfig_Hearing.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseConfig_Hearing.OuterSingleton,
               &Z_Construct_UClass_UAISenseConfig_Hearing_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Hearing.OuterSingleton;
}

// NewProp_bUseLoSHearing_SetBit @ 146e7b460

void __cdecl
Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x58) = *(uint *)((longlong)param_1 + 0x58) | 1;
  return;
}

// CastChecked<UBTCompositeNode,UBTNode_const_> @ 146e7bbd0

UBTCompositeNode * __cdecl
CastChecked<UBTCompositeNode,UBTNode_const_>(TObjectPtr<UBTNode_const_> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UBTCompositeNode *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UBTNode *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UBTCompositeNode>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UBTCompositeNode *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UBTCompositeNode_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UBTCompositeNode *)(param_1->field0_0x0).DebugPtr,
       pUVar4 == (UBTCompositeNode *)0x0)) {
      pFVar3 = GetTypeName<UBTCompositeNode>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UBTNode_const_>(&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CastChecked<UBTDecorator,UBTNode_const_> @ 146e7bc90

UBTDecorator * __cdecl
CastChecked<UBTDecorator,UBTNode_const_>(TObjectPtr<UBTNode_const_> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UBTDecorator *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UBTNode *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UBTDecorator>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UBTDecorator *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UBTDecorator_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UBTDecorator *)(param_1->field0_0x0).DebugPtr, pUVar4 == (UBTDecorator *)0x0)) {
      pFVar3 = GetTypeName<UBTDecorator>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UBTNode_const_>(&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CastChecked<UBehaviorTreeComponent,UObject> @ 146e7bd50

UBehaviorTreeComponent * __cdecl CastChecked<UBehaviorTreeComponent,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UBehaviorTreeComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UBehaviorTreeComponent::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UBehaviorTreeComponent *)param_1;
  }
  pFVar3 = GetTypeName<UBehaviorTreeComponent>(&local_28);
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

// ConstructItems<FBehaviorTreeSearchUpdate,FBehaviorTreeSearchUpdate,int> @ 146e7be10

void __cdecl
ConstructItems<FBehaviorTreeSearchUpdate,FBehaviorTreeSearchUpdate,int>
          (void *param_1,FBehaviorTreeSearchUpdate *param_2,int param_3)

{
  byte *pbVar1;
  UBTAuxiliaryNode *pUVar2;
  TObjectPtr<UBTTaskNode> TVar3;
  byte bVar4;
  ushort *puVar5;
  byte *pbVar6;
  
  if (param_3 != 0) {
    puVar5 = &param_2->InstanceIndex;
    pbVar6 = (byte *)((longlong)param_1 + 0x13);
    do {
      pUVar2 = (((FBehaviorTreeSearchUpdate *)(puVar5 + -8))->AuxNode).field0_0x0.DebugPtr;
      *(UBTAuxiliaryNode **)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar5) =
           pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UBTAuxiliaryNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      TVar3.field0_0x0 =
           (TObjectPtr<UBTTaskNode>_u_0)((TObjectPtr<UBTTaskNode>_u_0 *)(puVar5 + -4))->DebugPtr;
      ((TObjectPtr<UBTTaskNode>_u_0 *)(pbVar6 + -0xb))->DebugPtr = (UBTTaskNode *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UBTTaskNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      *(ushort *)(pbVar6 + -3) = *puVar5;
      pbVar6[-1] = ((TEnumAsByte<EBTNodeUpdateMode::Type> *)(puVar5 + 1))->Value;
      bVar4 = (*pbVar6 ^ *(byte *)((longlong)puVar5 + 3)) & 1 ^ *pbVar6;
      *pbVar6 = bVar4;
      pbVar1 = (byte *)((longlong)puVar5 + 3);
      puVar5 = puVar5 + 0xc;
      *pbVar6 = (bVar4 ^ *pbVar1) & 2 ^ bVar4;
      pbVar6 = pbVar6 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FBehaviorTreeInstance,int> @ 146e7bee0

void __cdecl DefaultConstructItems<FBehaviorTreeInstance,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FBehaviorTreeInstance::FBehaviorTreeInstance(param_1);
    param_1 = (void *)((longlong)param_1 + 0x68);
  }
  return;
}

// DefaultConstructItems<FFocusKnowledge::FFocusItem,int> @ 146e7bf20

void __cdecl DefaultConstructItems<FFocusKnowledge::FFocusItem,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    ((FWeakObjectPtr *)param_1)->ObjectIndex = 0;
    ((FWeakObjectPtr *)param_1)->ObjectSerialNumber = 0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    *(FWeakObjectPtr *)param_1 = local_res8;
    uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
    *(double *)((longlong)param_1 + 8) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
    *(double *)((longlong)param_1 + 0x18) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
    param_1 = (FWeakObjectPtr *)((longlong)param_1 + 0x20);
  }
  return;
}

// DestructItems<FBehaviorTreeInstance,int> @ 146e7c000

void __cdecl DestructItems<FBehaviorTreeInstance,int>(FBehaviorTreeInstance *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FBehaviorTreeInstance::~FBehaviorTreeInstance(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FBehaviorTreeInstanceId,int> @ 146e7c040

void __cdecl
DestructItems<FBehaviorTreeInstanceId,int>(FBehaviorTreeInstanceId *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Path;
    do {
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetFullNameForCastLogError<UBTNode_const_> @ 146e7c9f0

FString * __cdecl
GetFullNameForCastLogError<UBTNode_const_>(FString *__return_storage_ptr__,UBTNode *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UBTCompositeNode> @ 146e7cae0

FString * __cdecl GetTypeName<UBTCompositeNode>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UBTCompositeNode_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UBTDecorator> @ 146e7cb20

FString * __cdecl GetTypeName<UBTDecorator>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UBTDecorator_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UBehaviorTreeComponent> @ 146e7cb60

FString * __cdecl GetTypeName<UBehaviorTreeComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UBehaviorTreeComponent::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FBehaviorTreeNodeInitializationData,int,FIdentityFunctor,TDereferenceWrapper<FBehaviorTreeNodeInitializationData,FBehaviorTreeNodeInitializationData::FMemorySort>_> @ 146e7cc20

void __cdecl
AlgoImpl::
HeapSortInternal<FBehaviorTreeNodeInitializationData,int,FIdentityFunctor,TDereferenceWrapper<FBehaviorTreeNodeInitializationData,FBehaviorTreeNodeInitializationData::FMemorySort>_>
          (FBehaviorTreeNodeInitializationData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBehaviorTreeNodeInitializationData,FBehaviorTreeNodeInitializationData::FMemorySort>
          param_4)

{
  code *pcVar1;
  UBTCompositeNode *pUVar2;
  UBTNode *pUVar3;
  UBTCompositeNode *pUVar4;
  FBehaviorTreeNodeInitializationData *pFVar5;
  FBehaviorTreeNodeInitializationData *pFVar6;
  ushort uVar7;
  ushort uVar8;
  uchar uVar9;
  undefined1 uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  uchar uVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  FBehaviorTreeNodeInitializationData *pFVar21;
  longlong lVar22;
  int iVar23;
  
  if (param_2 < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar16) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar16) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar17 = (param_2 + -2) / 2;
  iVar18 = iVar17 * 2 + 1;
  iVar23 = iVar18;
  iVar19 = iVar17;
  do {
    while (param_2 <= iVar18) {
LAB_146e7cd35:
      if (iVar19 == 0) {
        iVar18 = param_2 + -1;
        lVar22 = (longlong)iVar18;
        if (0 < iVar18) {
          pFVar21 = param_1 + lVar22;
          do {
            pUVar2 = pFVar21->ParentNode;
            uVar11 = param_1->ExecutionIndex;
            uVar12 = param_1->DataSize;
            uVar13 = param_1->SpecialDataSize;
            uVar14 = param_1->TreeDepth;
            uVar15 = param_1->field_0x17;
            pUVar3 = param_1->Node;
            pUVar4 = param_1->ParentNode;
            param_1->Node = pFVar21->Node;
            param_1->ParentNode = pUVar2;
            uVar7 = pFVar21->DataSize;
            uVar8 = pFVar21->SpecialDataSize;
            uVar9 = pFVar21->TreeDepth;
            uVar10 = pFVar21->field_0x17;
            param_1->ExecutionIndex = pFVar21->ExecutionIndex;
            param_1->DataSize = uVar7;
            param_1->SpecialDataSize = uVar8;
            param_1->TreeDepth = uVar9;
            param_1->field_0x17 = uVar10;
            pFVar21->Node = pUVar3;
            pFVar21->ParentNode = pUVar4;
            pFVar21->ExecutionIndex = uVar11;
            pFVar21->DataSize = uVar12;
            pFVar21->SpecialDataSize = uVar13;
            pFVar21->TreeDepth = uVar14;
            pFVar21->field_0x17 = uVar15;
            iVar23 = 0;
            if (1 < iVar18) {
              do {
                iVar17 = iVar23 * 2;
                iVar19 = iVar17 + 1;
                if (iVar17 + 2 < iVar18) {
                  if (param_1[iVar19].DataSize < param_1[(longlong)iVar17 + 2].DataSize) {
                    iVar19 = iVar17;
                  }
                  iVar19 = iVar19 + 1;
                }
                pFVar5 = param_1 + iVar23;
                if (pFVar5->DataSize <= param_1[iVar19].DataSize) break;
                pUVar2 = param_1[iVar19].ParentNode;
                uVar11 = pFVar5->ExecutionIndex;
                uVar12 = pFVar5->DataSize;
                uVar13 = pFVar5->SpecialDataSize;
                uVar14 = pFVar5->TreeDepth;
                uVar15 = pFVar5->field_0x17;
                pUVar3 = pFVar5->Node;
                pUVar4 = pFVar5->ParentNode;
                pFVar5->Node = param_1[iVar19].Node;
                pFVar5->ParentNode = pUVar2;
                pFVar6 = param_1 + iVar19;
                uVar7 = pFVar6->DataSize;
                uVar8 = pFVar6->SpecialDataSize;
                uVar9 = pFVar6->TreeDepth;
                uVar10 = pFVar6->field_0x17;
                pFVar5->ExecutionIndex = pFVar6->ExecutionIndex;
                pFVar5->DataSize = uVar7;
                pFVar5->SpecialDataSize = uVar8;
                pFVar5->TreeDepth = uVar9;
                pFVar5->field_0x17 = uVar10;
                param_1[iVar19].Node = pUVar3;
                param_1[iVar19].ParentNode = pUVar4;
                pFVar5 = param_1 + iVar19;
                pFVar5->ExecutionIndex = uVar11;
                pFVar5->DataSize = uVar12;
                pFVar5->SpecialDataSize = uVar13;
                pFVar5->TreeDepth = uVar14;
                pFVar5->field_0x17 = uVar15;
                iVar23 = iVar19;
              } while (iVar19 * 2 + 1 < iVar18);
            }
            iVar18 = iVar18 + -1;
            lVar22 = lVar22 + -1;
            pFVar21 = pFVar21 + -1;
          } while (0 < lVar22);
        }
        return;
      }
      iVar17 = iVar19 + -1;
      iVar18 = iVar23 + -2;
      iVar23 = iVar18;
      iVar19 = iVar17;
    }
    iVar18 = iVar17 * 2;
    iVar20 = iVar18 + 1;
    if (iVar18 + 2 < param_2) {
      if (param_1[iVar20].DataSize < param_1[(longlong)iVar18 + 2].DataSize) {
        iVar20 = iVar18;
      }
      iVar20 = iVar20 + 1;
    }
    pFVar21 = param_1 + iVar17;
    if (pFVar21->DataSize <= param_1[iVar20].DataSize) goto LAB_146e7cd35;
    pUVar2 = param_1[iVar20].ParentNode;
    iVar18 = iVar20 * 2 + 1;
    uVar11 = pFVar21->ExecutionIndex;
    uVar12 = pFVar21->DataSize;
    uVar13 = pFVar21->SpecialDataSize;
    uVar14 = pFVar21->TreeDepth;
    uVar15 = pFVar21->field_0x17;
    pUVar3 = pFVar21->Node;
    pUVar4 = pFVar21->ParentNode;
    pFVar21->Node = param_1[iVar20].Node;
    pFVar21->ParentNode = pUVar2;
    pFVar5 = param_1 + iVar20;
    uVar7 = pFVar5->DataSize;
    uVar8 = pFVar5->SpecialDataSize;
    uVar9 = pFVar5->TreeDepth;
    uVar10 = pFVar5->field_0x17;
    pFVar21->ExecutionIndex = pFVar5->ExecutionIndex;
    pFVar21->DataSize = uVar7;
    pFVar21->SpecialDataSize = uVar8;
    pFVar21->TreeDepth = uVar9;
    pFVar21->field_0x17 = uVar10;
    param_1[iVar20].Node = pUVar3;
    param_1[iVar20].ParentNode = pUVar4;
    pFVar21 = param_1 + iVar20;
    pFVar21->ExecutionIndex = uVar11;
    pFVar21->DataSize = uVar12;
    pFVar21->SpecialDataSize = uVar13;
    pFVar21->TreeDepth = uVar14;
    pFVar21->field_0x17 = uVar15;
    iVar17 = iVar20;
  } while( true );
}

// InternalConstructor<AAIController> @ 146e7ce60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<AAIController>(FObjectInitializer *param_1)

{
  uint uVar1;
  AController *this;
  FName FVar2;
  FGenericTeamId FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FName local_res8;
  
  this = (AController *)param_1->Obj;
  if (this == (AController *)0x0) {
    return;
  }
  AController::AController(this,param_1);
  *(undefined1 *)&this[1]._padding_ = 0xff;
  *(undefined2 *)&this[1]._padding_ = 0;
  this->_padding_ = (longlong)&AAIController::_vftable__for__AActor__;
  this[1]._padding_ = 0;
  this->_padding_ = (longlong)&AAIController::_vftable__for__INavAgentInterface__;
  this[1]._padding_ = 0;
  this[1]._padding_ = (longlong)&AAIController::_vftable__for__IAIPerceptionListenerInterface__;
  this[1]._padding_ = (longlong)&AAIController::_vftable__for__IGameplayTaskOwnerInterface__;
  this[1]._padding_ = (longlong)&AAIController::_vftable__for__IGenericTeamAgentInterface__;
  this[1]._padding_ = (longlong)&AAIController::_vftable__for__IVisualLoggerDebugSnapshotInterface__
  ;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 0x40;
  pFVar4 = FName::FName(&local_res8,L"PathFollowingComponent");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UPathFollowingComponent_NoRegister();
  pUVar6 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,false,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UObject *)0x0)) {
    this[1]._padding_ = (longlong)pUVar6;
    if (pUVar6 == (UObject *)0x0) goto LAB_146e7cfd1;
  }
  else {
    UE::GC::MarkAsReachable(pUVar6);
    this[1]._padding_ = (longlong)pUVar6;
  }
  TMulticastDelegateRegistration<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<AAIController>
            ((TMulticastDelegateRegistration<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
              *)&pUVar6[5].field_0x20,(AAIController *)&local_res8,(pmf_a3879154 *)this);
LAB_146e7cfd1:
  uVar1 = (uint)this[1]._padding_;
  *(uint *)&this[1]._padding_ = uVar1 & 0xffffffdf | 8;
  FVar3 = FGenericTeamId::NoTeam;
  *(uint *)&this[1]._padding_ = uVar1 & 0xffffffde | 10;
  *(uchar *)&this[1]._padding_ = FVar3.TeamID;
  return;
}

// InternalConstructor<UAIAsyncTaskBlueprintProxy> @ 146e7d020

void __cdecl InternalConstructor<UAIAsyncTaskBlueprintProxy>(FObjectInitializer *param_1)

{
  if ((UAIAsyncTaskBlueprintProxy *)param_1->Obj != (UAIAsyncTaskBlueprintProxy *)0x0) {
    UAIAsyncTaskBlueprintProxy::UAIAsyncTaskBlueprintProxy
              ((UAIAsyncTaskBlueprintProxy *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAIResourceInterface> @ 146e7d040

void __cdecl InternalConstructor<UAIResourceInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAIResourceInterface__6B_;
  }
  return;
}

// InternalConstructor<UAIResource_Logic> @ 146e7d070

void __cdecl InternalConstructor<UAIResource_Logic>(FObjectInitializer *param_1)

{
  UGameplayTaskResource *this;
  
  this = (UGameplayTaskResource *)param_1->Obj;
  if (this != (UGameplayTaskResource *)0x0) {
    UGameplayTaskResource::UGameplayTaskResource(this,param_1);
    this->_padding_ = (longlong)&___7UAIResource_Logic__6B_;
  }
  return;
}

// InternalConstructor<UAIResource_Movement> @ 146e7d0a0

void __cdecl InternalConstructor<UAIResource_Movement>(FObjectInitializer *param_1)

{
  UGameplayTaskResource *this;
  
  this = (UGameplayTaskResource *)param_1->Obj;
  if (this != (UGameplayTaskResource *)0x0) {
    UGameplayTaskResource::UGameplayTaskResource(this,param_1);
    this->_padding_ = (longlong)&___7UAIResource_Movement__6B_;
  }
  return;
}

// InternalConstructor<UAISenseBlueprintListener> @ 146e7d0d0

void __cdecl InternalConstructor<UAISenseBlueprintListener>(FObjectInitializer *param_1)

{
  UUserDefinedStruct *this;
  
  this = (UUserDefinedStruct *)param_1->Obj;
  if (this != (UUserDefinedStruct *)0x0) {
    UUserDefinedStruct::UUserDefinedStruct(this,param_1);
    this->_padding_ = (longlong)&___7UAISenseBlueprintListener__6B_;
  }
  return;
}

// InternalConstructor<UAISenseConfig> @ 146e7d100

void __cdecl InternalConstructor<UAISenseConfig>(FObjectInitializer *param_1)

{
  if ((UAISenseConfig *)param_1->Obj != (UAISenseConfig *)0x0) {
    UAISenseConfig::UAISenseConfig((UAISenseConfig *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISenseConfig_Blueprint> @ 146e7d120

void __cdecl InternalConstructor<UAISenseConfig_Blueprint>(FObjectInitializer *param_1)

{
  if ((UAISenseConfig_Blueprint *)param_1->Obj != (UAISenseConfig_Blueprint *)0x0) {
    UAISenseConfig_Blueprint::UAISenseConfig_Blueprint
              ((UAISenseConfig_Blueprint *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISenseConfig_Hearing> @ 146e7d140

void __cdecl InternalConstructor<UAISenseConfig_Hearing>(FObjectInitializer *param_1)

{
  if ((UAISenseConfig_Hearing *)param_1->Obj != (UAISenseConfig_Hearing *)0x0) {
    UAISenseConfig_Hearing::UAISenseConfig_Hearing((UAISenseConfig_Hearing *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISenseConfig_Prediction> @ 146e7d160

void __cdecl InternalConstructor<UAISenseConfig_Prediction>(FObjectInitializer *param_1)

{
  if ((UAISenseConfig_Prediction *)param_1->Obj != (UAISenseConfig_Prediction *)0x0) {
    UAISenseConfig_Prediction::UAISenseConfig_Prediction
              ((UAISenseConfig_Prediction *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISenseConfig_Sight> @ 146e7d180

void __cdecl InternalConstructor<UAISenseConfig_Sight>(FObjectInitializer *param_1)

{
  if ((UAISenseConfig_Sight *)param_1->Obj != (UAISenseConfig_Sight *)0x0) {
    UAISenseConfig_Sight::UAISenseConfig_Sight((UAISenseConfig_Sight *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISenseConfig_Team> @ 146e7d1a0

void __cdecl InternalConstructor<UAISenseConfig_Team>(FObjectInitializer *param_1)

{
  if ((UAISenseConfig_Team *)param_1->Obj != (UAISenseConfig_Team *)0x0) {
    UAISenseConfig_Team::UAISenseConfig_Team((UAISenseConfig_Team *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISenseConfig_Touch> @ 146e7d1c0

void __cdecl InternalConstructor<UAISenseConfig_Touch>(FObjectInitializer *param_1)

{
  if ((UAISenseConfig_Touch *)param_1->Obj != (UAISenseConfig_Touch *)0x0) {
    UAISenseConfig_Touch::UAISenseConfig_Touch((UAISenseConfig_Touch *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISenseEvent_Damage> @ 146e7d1e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAISenseEvent_Damage>(FObjectInitializer *param_1)

{
  UAISenseEvent *this;
  
  this = (UAISenseEvent *)param_1->Obj;
  if (this != (UAISenseEvent *)0x0) {
    UAISenseEvent::UAISenseEvent(this,param_1);
    *(undefined ***)this = &___7UAISenseEvent_Damage__6B_;
    FAIDamageEvent::FAIDamageEvent((FAIDamageEvent *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UAISenseEvent_Hearing> @ 146e7d220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAISenseEvent_Hearing>(FObjectInitializer *param_1)

{
  if ((UAISenseEvent_Hearing *)param_1->Obj != (UAISenseEvent_Hearing *)0x0) {
    UAISenseEvent_Hearing::UAISenseEvent_Hearing((UAISenseEvent_Hearing *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISubsystem> @ 146e7d240

void __cdecl InternalConstructor<UAISubsystem>(FObjectInitializer *param_1)

{
  if ((UAISubsystem *)param_1->Obj != (UAISubsystem *)0x0) {
    UAISubsystem::UAISubsystem((UAISubsystem *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISystem> @ 146e7d260

void __cdecl InternalConstructor<UAISystem>(FObjectInitializer *param_1)

{
  if ((UAISystem *)param_1->Obj != (UAISystem *)0x0) {
    UAISystem::UAISystem((UAISystem *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UBehaviorTree> @ 146e7d280

void __cdecl InternalConstructor<UBehaviorTree>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UBehaviorTree::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UBehaviorTree::_vftable__for__IBlackboardAssetProvider__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UBehaviorTreeComponent> @ 146e7d2e0

void __cdecl InternalConstructor<UBehaviorTreeComponent>(FObjectInitializer *param_1)

{
  if ((UBehaviorTreeComponent *)param_1->Obj != (UBehaviorTreeComponent *)0x0) {
    UBehaviorTreeComponent::UBehaviorTreeComponent((UBehaviorTreeComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UBehaviorTreeManager> @ 146e7d300

void __cdecl InternalConstructor<UBehaviorTreeManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 100;
    *(undefined ***)this = &___7UBehaviorTreeManager__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UCrowdAgentInterface> @ 146e7d350

void __cdecl InternalConstructor<UCrowdAgentInterface>(FObjectInitializer *param_1)

{
  if ((UCrowdAgentInterface *)param_1->Obj != (UCrowdAgentInterface *)0x0) {
    UCrowdAgentInterface::UCrowdAgentInterface((UCrowdAgentInterface *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEQSQueryResultSourceInterface> @ 146e7d370

void __cdecl InternalConstructor<UEQSQueryResultSourceInterface>(FObjectInitializer *param_1)

{
  if ((UEQSQueryResultSourceInterface *)param_1->Obj != (UEQSQueryResultSourceInterface *)0x0) {
    UEQSQueryResultSourceInterface::UEQSQueryResultSourceInterface
              ((UEQSQueryResultSourceInterface *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGenericTeamAgentInterface> @ 146e7d390

void __cdecl InternalConstructor<UGenericTeamAgentInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGenericTeamAgentInterface__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<AAIController> @ 146e7d3c0

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

UObject * __cdecl InternalVTableHelperCtorCaller<AAIController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AController *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AAIController::GetPrivateStaticClass();
  this = (AController *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AController *)0x0) {
    AController::AController(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AAIController::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AAIController::_vftable__for__INavAgentInterface__;
    this[1]._padding_ = (longlong)&AAIController::_vftable__for__IAIPerceptionListenerInterface__;
    this[1]._padding_ = (longlong)&AAIController::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ = (longlong)&AAIController::_vftable__for__IGenericTeamAgentInterface__;
    this[1]._padding_ =
         (longlong)&AAIController::_vftable__for__IVisualLoggerDebugSnapshotInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0xff;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIAsyncTaskBlueprintProxy> @ 146e7d510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAIAsyncTaskBlueprintProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAIAsyncTaskBlueprintProxy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIResourceInterface> @ 146e7d5f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAIResourceInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIResourceInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAIResourceInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIResource_Logic> @ 146e7d6a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAIResource_Logic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTaskResource *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIResource_Logic::GetPrivateStaticClass();
  this = (UGameplayTaskResource *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameplayTaskResource *)0x0) {
    UGameplayTaskResource::UGameplayTaskResource(this,param_1);
    this->_padding_ = (longlong)&___7UAIResource_Logic__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIResource_Movement> @ 146e7d750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAIResource_Movement>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTaskResource *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIResource_Movement::GetPrivateStaticClass();
  this = (UGameplayTaskResource *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameplayTaskResource *)0x0) {
    UGameplayTaskResource::UGameplayTaskResource(this,param_1);
    this->_padding_ = (longlong)&___7UAIResource_Movement__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseBlueprintListener> @ 146e7d800

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseBlueprintListener>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUserDefinedStruct *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseBlueprintListener::GetPrivateStaticClass();
  this = (UUserDefinedStruct *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UUserDefinedStruct *)0x0) {
    UUserDefinedStruct::UUserDefinedStruct(this,param_1);
    this->_padding_ = (longlong)&___7UAISenseBlueprintListener__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseConfig> @ 146e7d8b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAISenseConfig__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseConfig_Blueprint> @ 146e7d970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseConfig_Blueprint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseConfig_Blueprint::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UAISenseConfig_Blueprint__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseConfig_Hearing> @ 146e7da30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseConfig_Hearing>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseConfig_Hearing::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(uint *)&pUVar1[2].field_0xc = *(uint *)&pUVar1[2].field_0xc & 0xfffffff8;
    *(undefined ***)pUVar1 = &___7UAISenseConfig_Hearing__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseConfig_Prediction> @ 146e7daf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseConfig_Prediction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseConfig_Prediction::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UAISenseConfig_Prediction__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseConfig_Sight> @ 146e7dbb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseConfig_Sight>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseConfig_Sight::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(uint *)&pUVar1[2].field_0xc = *(uint *)&pUVar1[2].field_0xc & 0xfffffff8;
    *(undefined ***)pUVar1 = &___7UAISenseConfig_Sight__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseConfig_Team> @ 146e7dc70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseConfig_Team>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseConfig_Team::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UAISenseConfig_Team__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseConfig_Touch> @ 146e7dd30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseConfig_Touch>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseConfig_Touch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(uint *)&pUVar1[1].field_0x20 = *(uint *)&pUVar1[1].field_0x20 | 7;
    *(undefined ***)pUVar1 = &___7UAISenseConfig_Touch__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseEvent_Damage> @ 146e7ddf0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseEvent_Damage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseEvent_Damage::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAISenseEvent::UAISenseEvent((UAISenseEvent *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAISenseEvent_Damage__6B_;
    FAIDamageEvent::FAIDamageEvent((FAIDamageEvent *)(pUVar1 + 1));
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseEvent_Hearing> @ 146e7deb0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseEvent_Hearing>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseEvent_Hearing::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAISenseEvent::UAISenseEvent((UAISenseEvent *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAISenseEvent_Hearing__6B_;
    FAINoiseEvent::FAINoiseEvent((FAINoiseEvent *)(pUVar1 + 1));
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISubsystem> @ 146e7df70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISubsystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(pUVar1 + 1),NewObject);
    *(undefined ***)pUVar1 = &UAISubsystem::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UAISubsystem::_vftable__for__FTickableGameObject__;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UAISystem> @ 146e7e030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISystem>(FVTableHelper *param_1)

{
  undefined1 *this;
  UObject *pUVar1;
  UClass *pUVar2;
  UAISystemBase *this_00;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISystem::GetPrivateStaticClass();
  this_00 = (UAISystemBase *)
            StaticAllocateObject
                      (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                       Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (this_00 != (UAISystemBase *)0x0) {
    UAISystemBase::UAISystemBase(this_00,param_1);
    this = &this_00[2].AISystemClassName.field_0x8;
    *(undefined2 *)((longlong)&this_00[2]._padding_ + 2) = 0x101;
    *(undefined1 *)((longlong)&this_00[2]._padding_ + 4) = 0;
    this_00->_padding_ = (longlong)&___7UAISystem__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined8 *)&this_00[1].AISystemClassName = 0;
    *(undefined8 *)&this_00[1].AISystemClassName.field_0x8 = 0;
    *(undefined8 *)&this_00[1].AISystemClassName.field_0x10 = 0;
    *(undefined8 *)&this_00[1].AISystemClassName.field_0x18 = 0;
    this_00[1].AISystemModuleName.ComparisonIndex = 0;
    this_00[1].AISystemModuleName.Number = 0;
    this_00[1].OnMatchStateSetHandle.ID = 0;
    *(undefined8 *)&this_00[1].bInstantiateAISystemOnClient = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)&this_00[2].AISystemClassName.field_0x10 = 0;
    this_00[2]._padding_ = 0;
    *(undefined8 *)&this_00[2].AISystemClassName = 0;
    this_00[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)this,0);
    this_00[2].AISystemModuleName.ComparisonIndex = 0;
    this_00[2].AISystemModuleName.Number = 0;
    this_00[2].OnMatchStateSetHandle.ID = 0;
    *(undefined8 *)&this_00[2].bInstantiateAISystemOnClient = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    this_00[3]._padding_ = 0;
    *(undefined8 *)&this_00[3].AISystemClassName = 0;
    *(undefined8 *)&this_00[3].AISystemClassName.field_0x18 = 0;
    this_00[3].AISystemModuleName.ComparisonIndex.Value = 0;
    this_00[3].AISystemModuleName.Number = 0x80;
    *(undefined4 *)&this_00[3].OnMatchStateSetHandle.ID = 0xffffffff;
    *(undefined4 *)((longlong)&this_00[3].OnMatchStateSetHandle.ID + 4) = 0;
    this_00[4]._padding_ = 0;
    *(undefined4 *)&this_00[4]._padding_ = 0;
    this_00[4]._padding_ = 0;
    this_00[4]._padding_ = 0;
    return (UObject *)this_00;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBehaviorTree> @ 146e7e1f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBehaviorTree>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBehaviorTree::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UBehaviorTree::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UBehaviorTree::_vftable__for__IBlackboardAssetProvider__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBehaviorTreeComponent> @ 146e7e2c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBehaviorTreeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBehaviorTreeComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBehaviorTreeComponent::GetPrivateStaticClass();
  pUVar3 = (UBehaviorTreeComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UBehaviorTreeComponent *)0x0) {
    pUVar3 = UBehaviorTreeComponent::UBehaviorTreeComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBehaviorTreeManager> @ 146e7e360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBehaviorTreeManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBehaviorTreeManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBehaviorTreeManager__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCrowdAgentInterface> @ 146e7e420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCrowdAgentInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCrowdAgentInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCrowdAgentInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEQSQueryResultSourceInterface> @ 146e7e4d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEQSQueryResultSourceInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEQSQueryResultSourceInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEQSQueryResultSourceInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGenericTeamAgentInterface> @ 146e7e580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGenericTeamAgentInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGenericTeamAgentInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGenericTeamAgentInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FBehaviorTreeNodeInitializationData,int,FIdentityFunctor,TDereferenceWrapper<FBehaviorTreeNodeInitializationData,FBehaviorTreeNodeInitializationData::FMemorySort>_> @ 146e7e630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FBehaviorTreeNodeInitializationData,int,FIdentityFunctor,TDereferenceWrapper<FBehaviorTreeNodeInitializationData,FBehaviorTreeNodeInitializationData::FMemorySort>_>
          (FBehaviorTreeNodeInitializationData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBehaviorTreeNodeInitializationData,FBehaviorTreeNodeInitializationData::FMemorySort>
          param_4)

{
  FBehaviorTreeNodeInitializationData *pFVar1;
  UBTCompositeNode *pUVar2;
  UBTNode *pUVar3;
  UBTCompositeNode *pUVar4;
  ushort uVar5;
  ushort uVar6;
  uchar uVar7;
  undefined1 uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uchar uVar12;
  undefined1 uVar13;
  longlong lVar14;
  int iVar15;
  FBehaviorTreeNodeInitializationData *pFVar16;
  FBehaviorTreeNodeInitializationData *pFVar17;
  FBehaviorTreeNodeInitializationData *pFVar18;
  FBehaviorTreeNodeInitializationData *pFVar19;
  FBehaviorTreeNodeInitializationData *pFVar20;
  FBehaviorTreeNodeInitializationData *pFVar21;
  FBehaviorTreeNodeInitializationData **ppFVar22;
  float fVar23;
  undefined1 auStack_378 [48];
  FBehaviorTreeNodeInitializationData *local_348;
  FBehaviorTreeNodeInitializationData *local_338;
  FBehaviorTreeNodeInitializationData *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar23 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar23;
    memset(local_320,0,0x2e8);
    ppFVar22 = &local_338;
    do {
      pFVar16 = ppFVar22[1];
      pFVar21 = *ppFVar22;
      pFVar1 = ppFVar22[2];
      local_348._0_4_ = (int)pFVar1;
      iVar15 = (int)(((longlong)pFVar16 - (longlong)pFVar21) / 0x18) + 1;
      pFVar20 = pFVar21;
      if ((int)local_348 != 0) {
LAB_146e7e700:
        if (8 < iVar15) {
          pUVar2 = pFVar20->ParentNode;
          pFVar18 = pFVar16 + 1;
          iVar15 = iVar15 / 2;
          pUVar3 = pFVar20[iVar15].Node;
          pUVar4 = pFVar20[iVar15].ParentNode;
          pFVar21 = pFVar20 + iVar15;
          uVar9 = pFVar21->ExecutionIndex;
          uVar10 = pFVar21->DataSize;
          uVar11 = pFVar21->SpecialDataSize;
          uVar12 = pFVar21->TreeDepth;
          uVar13 = pFVar21->field_0x17;
          pFVar20[iVar15].Node = pFVar20->Node;
          pFVar20[iVar15].ParentNode = pUVar2;
          uVar5 = pFVar20->DataSize;
          uVar6 = pFVar20->SpecialDataSize;
          uVar7 = pFVar20->TreeDepth;
          uVar8 = pFVar20->field_0x17;
          pFVar21 = pFVar20 + iVar15;
          pFVar21->ExecutionIndex = pFVar20->ExecutionIndex;
          pFVar21->DataSize = uVar5;
          pFVar21->SpecialDataSize = uVar6;
          pFVar21->TreeDepth = uVar7;
          pFVar21->field_0x17 = uVar8;
          pFVar20->Node = pUVar3;
          pFVar20->ParentNode = pUVar4;
          pFVar20->ExecutionIndex = uVar9;
          pFVar20->DataSize = uVar10;
          pFVar20->SpecialDataSize = uVar11;
          pFVar20->TreeDepth = uVar12;
          pFVar20->field_0x17 = uVar13;
          pFVar21 = pFVar20;
LAB_146e7e750:
          pFVar17 = pFVar21;
          pFVar21 = pFVar17 + 1;
          if (pFVar21 <= pFVar16) goto code_r0x000146e7e759;
          goto LAB_146e7e765;
        }
        for (; pFVar21 = pFVar20, pFVar1 = pFVar20, pFVar20 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar16) {
            if (pFVar1->DataSize < pFVar21->DataSize) {
              pFVar21 = pFVar1;
            }
          }
          pUVar3 = pFVar21->Node;
          pUVar2 = pFVar21->ParentNode;
          uVar9 = pFVar21->ExecutionIndex;
          uVar10 = pFVar21->DataSize;
          uVar11 = pFVar21->SpecialDataSize;
          uVar12 = pFVar21->TreeDepth;
          uVar13 = pFVar21->field_0x17;
          pUVar4 = pFVar16->ParentNode;
          pFVar21->Node = pFVar16->Node;
          pFVar21->ParentNode = pUVar4;
          uVar5 = pFVar16->DataSize;
          uVar6 = pFVar16->SpecialDataSize;
          uVar7 = pFVar16->TreeDepth;
          uVar8 = pFVar16->field_0x17;
          pFVar21->ExecutionIndex = pFVar16->ExecutionIndex;
          pFVar21->DataSize = uVar5;
          pFVar21->SpecialDataSize = uVar6;
          pFVar21->TreeDepth = uVar7;
          pFVar21->field_0x17 = uVar8;
          pFVar16->Node = pUVar3;
          pFVar16->ParentNode = pUVar2;
          pFVar16->ExecutionIndex = uVar9;
          pFVar16->DataSize = uVar10;
          pFVar16->SpecialDataSize = uVar11;
          pFVar16->TreeDepth = uVar12;
          pFVar16->field_0x17 = uVar13;
        }
        goto LAB_146e7e889;
      }
LAB_146e7e87a:
      local_348 = pFVar1;
      HeapSortInternal<FBehaviorTreeNodeInitializationData,int,FIdentityFunctor,TDereferenceWrapper<FBehaviorTreeNodeInitializationData,FBehaviorTreeNodeInitializationData::FMemorySort>_>
                (pFVar21,iVar15,param_3,param_4);
LAB_146e7e889:
      ppFVar22 = ppFVar22 + -3;
    } while (&local_338 <= ppFVar22);
  }
  return;
code_r0x000146e7e759:
  if (pFVar20->DataSize <= pFVar17[1].DataSize) goto LAB_146e7e750;
LAB_146e7e765:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar20) break;
  } while (pFVar19[-1].DataSize <= pFVar20->DataSize);
  pUVar2 = pFVar19[-1].ParentNode;
  if (pFVar21 <= pFVar18) {
    pUVar3 = pFVar21->Node;
    pUVar4 = pFVar17[1].ParentNode;
    uVar9 = pFVar17[1].ExecutionIndex;
    uVar10 = pFVar17[1].DataSize;
    uVar11 = pFVar17[1].SpecialDataSize;
    uVar12 = pFVar17[1].TreeDepth;
    uVar13 = pFVar17[1].field_0x17;
    pFVar21->Node = pFVar18->Node;
    pFVar17[1].ParentNode = pUVar2;
    uVar5 = pFVar19[-1].DataSize;
    uVar6 = pFVar19[-1].SpecialDataSize;
    uVar7 = pFVar19[-1].TreeDepth;
    uVar8 = pFVar19[-1].field_0x17;
    pFVar17[1].ExecutionIndex = pFVar19[-1].ExecutionIndex;
    pFVar17[1].DataSize = uVar5;
    pFVar17[1].SpecialDataSize = uVar6;
    pFVar17[1].TreeDepth = uVar7;
    pFVar17[1].field_0x17 = uVar8;
    pFVar18->Node = pUVar3;
    pFVar19[-1].ParentNode = pUVar4;
    pFVar19[-1].ExecutionIndex = uVar9;
    pFVar19[-1].DataSize = uVar10;
    pFVar19[-1].SpecialDataSize = uVar11;
    pFVar19[-1].TreeDepth = uVar12;
    pFVar19[-1].field_0x17 = uVar13;
    goto LAB_146e7e750;
  }
  pUVar3 = pFVar20->Node;
  pUVar4 = pFVar20->ParentNode;
  uVar9 = pFVar20->ExecutionIndex;
  uVar10 = pFVar20->DataSize;
  uVar11 = pFVar20->SpecialDataSize;
  uVar12 = pFVar20->TreeDepth;
  uVar13 = pFVar20->field_0x17;
  lVar14 = (longlong)pFVar18 + (-0x18 - (longlong)pFVar20);
  local_348._0_4_ = (int)local_348 + -1;
  lVar14 = lVar14 / 6 + (lVar14 >> 0x3f);
  pFVar20->Node = pFVar18->Node;
  pFVar20->ParentNode = pUVar2;
  uVar5 = pFVar19[-1].DataSize;
  uVar6 = pFVar19[-1].SpecialDataSize;
  uVar7 = pFVar19[-1].TreeDepth;
  uVar8 = pFVar19[-1].field_0x17;
  pFVar20->ExecutionIndex = pFVar19[-1].ExecutionIndex;
  pFVar20->DataSize = uVar5;
  pFVar20->SpecialDataSize = uVar6;
  pFVar20->TreeDepth = uVar7;
  pFVar20->field_0x17 = uVar8;
  pFVar18->Node = pUVar3;
  pFVar19[-1].ParentNode = pUVar4;
  pFVar19[-1].ExecutionIndex = uVar9;
  pFVar19[-1].DataSize = uVar10;
  pFVar19[-1].SpecialDataSize = uVar11;
  pFVar19[-1].TreeDepth = uVar12;
  pFVar19[-1].field_0x17 = uVar13;
  if ((lVar14 >> 2) - (lVar14 >> 0x3f) < ((longlong)pFVar16 - (longlong)pFVar21) / 0x18) {
    if (pFVar21 < pFVar16) {
      *ppFVar22 = pFVar21;
      ppFVar22[1] = pFVar16;
      *(int *)(ppFVar22 + 2) = (int)local_348;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar18 <= pFVar20 + 1) goto LAB_146e7e889;
    pFVar16 = pFVar19 + -2;
    pFVar21 = pFVar20;
  }
  else {
    if (pFVar20 + 1 < pFVar18) {
      *ppFVar22 = pFVar20;
      ppFVar22[1] = pFVar19 + -2;
      *(int *)(ppFVar22 + 2) = (int)local_348;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar16 <= pFVar21) goto LAB_146e7e889;
  }
  iVar15 = (int)(((longlong)pFVar16 - (longlong)pFVar21) / 0x18) + 1;
  pFVar20 = pFVar21;
  if ((int)local_348 == 0) goto LAB_146e7e87a;
  goto LAB_146e7e700;
}

// IsObjectPtrEqual<UBTCompositeNode_const_,UBTCompositeNode_const_*,0> @ 146e7e940

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBTCompositeNode_const_,UBTCompositeNode_const_*,0>
          (TObjectPtr<UBTCompositeNode_const_> *param_1,UBTCompositeNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UBTCompositeNode *)0x0) {
    return *param_2 == (UBTCompositeNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UBTNode_const_,UBTNode_const_*,0> @ 146e7e960

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBTNode_const_,UBTNode_const_*,0>
          (TObjectPtr<UBTNode_const_> *param_1,UBTNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UBTNode *)0x0) {
    return *param_2 == (UBTNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UBTTaskNode_const_,UBTTaskNode_const_*,0> @ 146e7e980

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBTTaskNode_const_,UBTTaskNode_const_*,0>
          (TObjectPtr<UBTTaskNode_const_> *param_1,UBTTaskNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UBTTaskNode *)0x0) {
    return *param_2 == (UBTTaskNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UBTAuxiliaryNode,UBTAuxiliaryNode_*,0> @ 146e7e9a0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBTAuxiliaryNode,UBTAuxiliaryNode_*,0>
          (TObjectPtr<UBTAuxiliaryNode> *param_1,UBTAuxiliaryNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UBTAuxiliaryNode *)0x0) {
    return *param_2 == (UBTAuxiliaryNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UBTCompositeNode,UBTNode_const_*,0> @ 146e7e9c0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBTCompositeNode,UBTNode_const_*,0>
          (TObjectPtr<UBTCompositeNode> *param_1,UBTNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UBTCompositeNode *)0x0) {
    return (UBTCompositeNode *)*param_2 == (UBTCompositeNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UBTCompositeNode *)*param_2;
}

// IsObjectPtrEqual<UBTNode,UBTTask_RunBehaviorDynamic_*,0> @ 146e7e9e0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBTNode,UBTTask_RunBehaviorDynamic_*,0>
          (TObjectPtr<UBTNode> *param_1,UBTTask_RunBehaviorDynamic **param_2)

{
  if ((UBTTask_RunBehaviorDynamic *)(param_1->field0_0x0).DebugPtr ==
      (UBTTask_RunBehaviorDynamic *)0x0) {
    return *param_2 == (UBTTask_RunBehaviorDynamic *)0x0;
  }
  return (UBTTask_RunBehaviorDynamic *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UBTNode,UBTNode_const_*,0> @ 146e7ea00

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBTNode,UBTNode_const_*,0>
          (TObjectPtr<UBTNode> *param_1,UBTNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UBTNode *)0x0) {
    return *param_2 == (UBTNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UBTNode,UBTTaskNode_const_*,0> @ 146e7ea20

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBTNode,UBTTaskNode_const_*,0>
          (TObjectPtr<UBTNode> *param_1,UBTTaskNode **param_2)

{
  if ((UBTTaskNode *)(param_1->field0_0x0).DebugPtr == (UBTTaskNode *)0x0) {
    return *param_2 == (UBTTaskNode *)0x0;
  }
  return (UBTTaskNode *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UBehaviorTree,UBehaviorTree_*,0> @ 146e7ea40

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UBehaviorTree,UBehaviorTree_*,0>
          (TObjectPtr<UBehaviorTree> *param_1,UBehaviorTree **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UBehaviorTree *)0x0) {
    return *param_2 == (UBehaviorTree *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MutableView<TObjectPtr<UBlackboardComponent>_> @ 146e7ea60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TMutableView<TObjectPtr<UBlackboardComponent>_> __cdecl
MutableView<TObjectPtr<UBlackboardComponent>_>(TObjectPtr<UBlackboardComponent> *param_1)

{
  TObjectPtr<UBlackboardComponent>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UBlackboardComponent>_>)(UBlackboardComponent **)param_1;
}

// NewObject<UAIHotSpotManager> @ 146e7ea70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAIHotSpotManager * __cdecl
NewObject<UAIHotSpotManager>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UAIHotSpotManager_NoRegister();
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
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UAIHotSpotManager *)pUVar2;
}

// NewObject<UAIPerceptionSystem> @ 146e7eb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAIPerceptionSystem * __cdecl
NewObject<UAIPerceptionSystem>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UAIPerceptionSystem *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
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
  pUVar2 = (UAIPerceptionSystem *)
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

// NewObject<UAISystemBase> @ 146e7ec70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAISystemBase * __cdecl
NewObject<UAISystemBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UAISystemBase *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UAISystemBase_NoRegister();
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
  pUVar2 = (UAISystemBase *)
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

// NewObject<UBehaviorTreeComponent> @ 146e7ed70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBehaviorTreeComponent * __cdecl NewObject<UBehaviorTreeComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UBehaviorTreeComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UBehaviorTreeComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBehaviorTreeComponent *)
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

// NewObject<UBehaviorTreeManager> @ 146e7ee10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBehaviorTreeManager * __cdecl NewObject<UBehaviorTreeManager>(UObject *param_1)

{
  UClass *pUVar1;
  UBehaviorTreeManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UBehaviorTreeManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBehaviorTreeManager *)
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

// NewObject<UBlackboardComponent> @ 146e7eeb0

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

UBlackboardComponent * __cdecl
NewObject<UBlackboardComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UBlackboardComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UBlackboardComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UBlackboardComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UEnvQueryManager> @ 146e7efa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEnvQueryManager * __cdecl
NewObject<UEnvQueryManager>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UEnvQueryManager *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UEnvQueryManager_NoRegister();
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
  pUVar2 = (UEnvQueryManager *)
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

// NewObject<UGameplayTasksComponent> @ 146e7f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTasksComponent * __cdecl
NewObject<UGameplayTasksComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UGameplayTasksComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UGameplayTasksComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNavLocalGridManager> @ 146e7f190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavLocalGridManager * __cdecl NewObject<UNavLocalGridManager>(UObject *param_1)

{
  UClass *pUVar1;
  UNavLocalGridManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNavLocalGridManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNavLocalGridManager *)
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

// ObjectPtrWrap<UBlackboardComponent_*,TObjectPtr<UBlackboardComponent>_> @ 146e7f230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TObjectPtr<UBlackboardComponent> * __cdecl
ObjectPtrWrap<UBlackboardComponent_*,TObjectPtr<UBlackboardComponent>_>
          (UBlackboardComponent **param_1)

{
  return (TObjectPtr<UBlackboardComponent> *)param_1;
}

// StaticEnum<enum_EGenericAICheck> @ 146e7f9b0

UEnum * __cdecl StaticEnum<enum_EGenericAICheck>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGenericAICheck.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EGenericAICheck.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EGenericAICheck,(UObject *)pUVar1,
                       L"EGenericAICheck");
  }
  return Z_Registration_Info_UEnum_EGenericAICheck.OuterSingleton;
}

// StaticEnum<enum_FAIDistanceType> @ 146e7f9f0

UEnum * __cdecl StaticEnum<enum_FAIDistanceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FAIDistanceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_FAIDistanceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_FAIDistanceType,(UObject *)pUVar1,
                       L"FAIDistanceType");
  }
  return Z_Registration_Info_UEnum_FAIDistanceType.OuterSingleton;
}

// StaticEnum<enum_EAILockSource::Type> @ 146e7fa30

UEnum * __cdecl StaticEnum<enum_EAILockSource::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAILockSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAILockSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAILockSource,(UObject *)pUVar1,L"EAILockSource");
  }
  return Z_Registration_Info_UEnum_EAILockSource.OuterSingleton;
}

// StaticEnum<enum_EAIOptionFlag::Type> @ 146e7fa70

UEnum * __cdecl StaticEnum<enum_EAIOptionFlag::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAIOptionFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAIOptionFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAIOptionFlag,(UObject *)pUVar1,L"EAIOptionFlag");
  }
  return Z_Registration_Info_UEnum_EAIOptionFlag.OuterSingleton;
}

// StaticEnum<enum_EAIRequestPriority::Type> @ 146e7fab0

UEnum * __cdecl StaticEnum<enum_EAIRequestPriority::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAIRequestPriority,(UObject *)pUVar1,
                       L"EAIRequestPriority");
  }
  return Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton;
}

// StaticEnum<enum_EArithmeticKeyOperation::Type> @ 146e7faf0

UEnum * __cdecl StaticEnum<enum_EArithmeticKeyOperation::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation,(UObject *)pUVar1,
                       L"EArithmeticKeyOperation");
  }
  return Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton;
}

// StaticEnum<enum_EBasicKeyOperation::Type> @ 146e7fb30

UEnum * __cdecl StaticEnum<enum_EBasicKeyOperation::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EBasicKeyOperation,(UObject *)pUVar1,
                       L"EBasicKeyOperation");
  }
  return Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton;
}

// StaticEnum<enum_EPawnActionMoveMode::Type> @ 146e7fb70

UEnum * __cdecl StaticEnum<enum_EPawnActionMoveMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionMoveMode,(UObject *)pUVar1,
                       L"EPawnActionMoveMode");
  }
  return Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton;
}

// StaticEnum<enum_ETeamAttitude::Type> @ 146e7fbb0

UEnum * __cdecl StaticEnum<enum_ETeamAttitude::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_ETeamAttitude,(UObject *)pUVar1,L"ETeamAttitude");
  }
  return Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton;
}

// StaticEnum<enum_ETextKeyOperation::Type> @ 146e7fbf0

UEnum * __cdecl StaticEnum<enum_ETextKeyOperation::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_ETextKeyOperation,(UObject *)pUVar1,
                       L"ETextKeyOperation");
  }
  return Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton;
}

// `vcall'{2272,{flat}}'_}' @ 146e829dc

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]: __cdecl AAIController::`vcall'{2272,{flat}}' }' */

void __thiscall AAIController::_vcall__2272__flat______(AAIController *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146e829df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x8e0))();
  return;
}

// `vcall'{2368,{flat}}'_}' @ 146e829ec

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]: __cdecl AAIController::`vcall'{2368,{flat}}' }' */

void __thiscall AAIController::_vcall__2368__flat______(AAIController *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146e829ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x940))();
  return;
}

// `vcall'{760,{flat}}'_}' @ 146e829fc

/* [thunk]: __cdecl UAISystem::`vcall'{760,{flat}}' }' */

void __thiscall UAISystem::_vcall__760__flat______(UAISystem *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146e829ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))();
  return;
}

// `vcall'{768,{flat}}'_}' @ 146e82a0c

/* [thunk]: __cdecl UAISystem::`vcall'{768,{flat}}' }' */

void __thiscall UAISystem::_vcall__768__flat______(UAISystem *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146e82a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x300))();
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146e82a1c

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AAIController::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AAIController::_vector_deleting_destructor__adjustor_704__(AAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AAIController *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{880}' @ 146e82a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AAIController::`vector deleting
   destructor'`adjustor{880}' (unsigned int) __ptr64 */

void * __thiscall
AAIController::_vector_deleting_destructor__adjustor_880__(AAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AAIController *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{888}' @ 146e82a44

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AAIController::`vector deleting
   destructor'`adjustor{888}' (unsigned int) __ptr64 */

void * __thiscall
AAIController::_vector_deleting_destructor__adjustor_888__(AAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AAIController *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{896}' @ 146e82a58

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AAIController::`vector deleting
   destructor'`adjustor{896}' (unsigned int) __ptr64 */

void * __thiscall
AAIController::_vector_deleting_destructor__adjustor_896__(AAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AAIController *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{904}' @ 146e82a6c

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AAIController::`vector deleting
   destructor'`adjustor{904}' (unsigned int) __ptr64 */

void * __thiscall
AAIController::_vector_deleting_destructor__adjustor_904__(AAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AAIController *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146e82a80

/* [thunk]:public: virtual void * __ptr64 __cdecl UAISubsystem::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAISubsystem::_vector_deleting_destructor__adjustor_40__(UAISubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAISubsystem *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146e82a90

/* [thunk]:public: virtual void * __ptr64 __cdecl UBehaviorTree::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBehaviorTree::_vector_deleting_destructor__adjustor_40__(UBehaviorTree *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBehaviorTree *)&this[-1].RootDecorators,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146e82aa0

/* [thunk]:public: virtual void * __ptr64 __cdecl UBehaviorTreeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBehaviorTreeComponent::_vector_deleting_destructor__adjustor_40__
          (UBehaviorTreeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBehaviorTreeComponent *)&this[-1].DefaultBehaviorTreeAsset,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 146e82ab0

/* [thunk]:public: virtual void * __ptr64 __cdecl UBehaviorTreeComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UBehaviorTreeComponent::_vector_deleting_destructor__adjustor_192__
          (UBehaviorTreeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBehaviorTreeComponent *)&this[-1].TaskMessageObservers.field_0x10,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146e82ad0

void * __thiscall
IBaseDelegateInstance<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82b00

void * __thiscall
IBaseDelegateInstance<void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(APawn_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82b30

void * __thiscall
IBaseDelegateInstance<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82b60

void * __thiscall
IBaseDelegateInstance<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82b90

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82bc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AAIController,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82bf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82c20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAISystem,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82c50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UBTTaskNode,void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82c80

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82cb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(APawn_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82ce0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82d10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<enum_ETeamAttitude::Type_(__cdecl*)(FGenericTeamId,FGenericTeamId),0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_AW4Type_ETeamAttitude__UFGenericTeamId__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82d80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall AAIController::_scalar_deleting_destructor_(AAIController *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__IAIPerceptionListenerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IGenericTeamAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  pvVar1 = *(void **)&(this->ReceiveMoveCompleted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReceiveMoveCompleted);
  pFVar2 = (this->FocusInformation).Priorities.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IVisualLoggerDebugSnapshotInterface__6B_;
  this->_padding_ = (longlong)&___7IGenericTeamAgentInterface__6B_;
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  this->_padding_ = (longlong)&___7IAIPerceptionListenerInterface__6B_;
  AController::~AController((AController *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82ea0

void * __thiscall
IAIPerceptionListenerInterface::_scalar_deleting_destructor_
          (IAIPerceptionListenerInterface *this,uint param_1)

{
  *this = (IAIPerceptionListenerInterface)&___7IAIPerceptionListenerInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82ee0

void * __thiscall
IBlackboardAssetProvider::_scalar_deleting_destructor_(IBlackboardAssetProvider *this,uint param_1)

{
  *this = (IBlackboardAssetProvider)&___7IBlackboardAssetProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82f20

void * __thiscall
IGenericTeamAgentInterface::_scalar_deleting_destructor_
          (IGenericTeamAgentInterface *this,uint param_1)

{
  *this = (IGenericTeamAgentInterface)&___7IGenericTeamAgentInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e82f60

void * __thiscall
UAIAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
          (UAIAsyncTaskBlueprintProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAIAsyncTaskBlueprintProxy__6B_;
  pvVar1 = *(void **)&(this->OnFail).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFail);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e83000

void * __thiscall
UAIResourceInterface::_scalar_deleting_destructor_(UAIResourceInterface *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 146e83060

void * __thiscall
UAIResource_Logic::_scalar_deleting_destructor_(UAIResource_Logic *this,uint param_1)

{
  *(undefined ***)this = &___7UAIResource_Logic__6B_;
  UGameplayTaskResource::~UGameplayTaskResource((UGameplayTaskResource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e830c0

void * __thiscall
UAIResource_Movement::_scalar_deleting_destructor_(UAIResource_Movement *this,uint param_1)

{
  *(undefined ***)this = &___7UAIResource_Movement__6B_;
  UGameplayTaskResource::~UGameplayTaskResource((UGameplayTaskResource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e83120

void * __thiscall
UAISenseBlueprintListener::_scalar_deleting_destructor_
          (UAISenseBlueprintListener *this,uint param_1)

{
  *(undefined ***)this = &___7UAISenseBlueprintListener__6B_;
  UUserDefinedStruct::~UUserDefinedStruct((UUserDefinedStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e83180

void * __thiscall UAISenseConfig::_scalar_deleting_destructor_(UAISenseConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  pFVar1 = (this->CachedSenseName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e831f0

void * __thiscall
UAISenseConfig_Blueprint::_scalar_deleting_destructor_(UAISenseConfig_Blueprint *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 146e83260

void * __thiscall
UAISenseConfig_Hearing::_scalar_deleting_destructor_(UAISenseConfig_Hearing *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 146e832d0

void * __thiscall
UAISenseConfig_Prediction::_scalar_deleting_destructor_
          (UAISenseConfig_Prediction *this,uint param_1)

{
  *(undefined ***)this = &___7UAISenseConfig__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e83340

void * __thiscall
UAISenseConfig_Sight::_scalar_deleting_destructor_(UAISenseConfig_Sight *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 146e833b0

void * __thiscall
UAISenseConfig_Team::_scalar_deleting_destructor_(UAISenseConfig_Team *this,uint param_1)

{
  *(undefined ***)this = &___7UAISenseConfig__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e83420

void * __thiscall
UAISenseConfig_Touch::_scalar_deleting_destructor_(UAISenseConfig_Touch *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 146e83490

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
UAISenseEvent_Damage::_scalar_deleting_destructor_(UAISenseEvent_Damage *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAISenseEvent_Damage__6B_;
  UAISenseEvent::~UAISenseEvent((UAISenseEvent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e834f0

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
UAISenseEvent_Hearing::_scalar_deleting_destructor_(UAISenseEvent_Hearing *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAISenseEvent_Hearing__6B_;
  UAISenseEvent::~UAISenseEvent((UAISenseEvent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e83550

void * __thiscall UAISubsystem::_scalar_deleting_destructor_(UAISubsystem *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
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

// `scalar_deleting_destructor' @ 146e835d0

void * __thiscall UAISystem::_scalar_deleting_destructor_(UAISystem *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAISystem__6B_;
  *(undefined4 *)&(this->BlackboardDataToComponentsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BlackboardDataToComponentsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BlackboardDataToComponentsMap);
  pFVar2 = (this->AllProxyObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->DefaultBlackboard).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->EnvQueryManagerClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->HotSpotManagerClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->PerceptionSystemClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UAISystemBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e836e0

void * __thiscall UAISystemBase::_scalar_deleting_destructor_(UAISystemBase *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAISystemBase__6B_;
  pvVar1 = *(void **)&(this->AISystemClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
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

// `scalar_deleting_destructor' @ 146e83750

void * __thiscall UBehaviorTree::_scalar_deleting_destructor_(UBehaviorTree *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlackboardAssetProvider__;
  pFVar1 = (this->RootDecoratorOps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RootDecorators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IBlackboardAssetProvider__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e837f0

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
UBehaviorTreeComponent::_scalar_deleting_destructor_(UBehaviorTreeComponent *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined4 *)&(this->CooldownTagsMap).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UBehaviorTreeComponent__6B_;
  pvVar1 = *(void **)&(this->CooldownTagsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CooldownTagsMap);
  *(undefined4 *)&(this->TaskMessageObservers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TaskMessageObservers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TaskMessageObservers);
  pFVar2 = (this->PendingBranchActionRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SearchData).PendingNotifies.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SearchData).PendingUpdates.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NodeInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FBehaviorTreeInstanceId,int>
            ((FBehaviorTreeInstanceId *)(this->KnownInstances).AllocatorInstance.Data,
             (this->KnownInstances).ArrayNum);
  pFVar2 = (this->KnownInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FBehaviorTreeInstance,int>
            ((FBehaviorTreeInstance *)(this->InstanceStack).AllocatorInstance.Data,
             (this->InstanceStack).ArrayNum);
  pFVar2 = (this->InstanceStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UBrainComponent::~UBrainComponent((UBrainComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146e83960

void * __thiscall
UBehaviorTreeManager::_scalar_deleting_destructor_(UBehaviorTreeManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBehaviorTreeManager__6B_;
  pFVar1 = (this->ActiveComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoadedTemplates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 146e839e0

void * __thiscall
UCrowdAgentInterface::_scalar_deleting_destructor_(UCrowdAgentInterface *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 146e83a40

void * __thiscall
UEQSQueryResultSourceInterface::_scalar_deleting_destructor_
          (UEQSQueryResultSourceInterface *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 146e83aa0

void * __thiscall
UGenericTeamAgentInterface::_scalar_deleting_destructor_
          (UGenericTeamAgentInterface *this,uint param_1)

{
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

// DefaultTeamAttitudeSolver @ 146e87fa0

Type __cdecl
`anonymous_namespace'::DefaultTeamAttitudeSolver(FGenericTeamId param_1,FGenericTeamId param_2)

{
  Type TVar1;
  
  TVar1 = Friendly;
  if (param_1.TeamID != param_2.TeamID) {
    TVar1 = Hostile;
  }
  return TVar1;
}

// EmptyLinkFunctionForGeneratedCodeAIAsyncTaskBlueprintProxy @ 146e8a3d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAIAsyncTaskBlueprintProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIController @ 146e8a3e0

void __cdecl EmptyLinkFunctionForGeneratedCodeAIController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIModule_init @ 146e8a3f0

void __cdecl EmptyLinkFunctionForGeneratedCodeAIModule_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIResourceInterface @ 146e8a400

void __cdecl EmptyLinkFunctionForGeneratedCodeAIResourceInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIResources @ 146e8a410

void __cdecl EmptyLinkFunctionForGeneratedCodeAIResources(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseBlueprintListener @ 146e8a420

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseBlueprintListener(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseConfig @ 146e8a430

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseConfig_Blueprint @ 146e8a440

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseConfig_Blueprint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseConfig_Hearing @ 146e8a450

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseConfig_Hearing(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseConfig_Prediction @ 146e8a460

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseConfig_Prediction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseConfig_Sight @ 146e8a470

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseConfig_Sight(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseConfig_Team @ 146e8a480

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseConfig_Team(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseConfig_Touch @ 146e8a490

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseConfig_Touch(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseEvent_Damage @ 146e8a4a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseEvent_Damage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseEvent_Hearing @ 146e8a4b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseEvent_Hearing(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISubsystem @ 146e8a4c0

void __cdecl EmptyLinkFunctionForGeneratedCodeAISubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISystem @ 146e8a4d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAISystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAITypes @ 146e8a4e0

void __cdecl EmptyLinkFunctionForGeneratedCodeAITypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBehaviorTree @ 146e8a4f0

void __cdecl EmptyLinkFunctionForGeneratedCodeBehaviorTree(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBehaviorTreeComponent @ 146e8a500

void __cdecl EmptyLinkFunctionForGeneratedCodeBehaviorTreeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBehaviorTreeManager @ 146e8a510

void __cdecl EmptyLinkFunctionForGeneratedCodeBehaviorTreeManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlackboardKeyEnums @ 146e8a520

void __cdecl EmptyLinkFunctionForGeneratedCodeBlackboardKeyEnums(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCrowdAgentInterface @ 146e8a530

void __cdecl EmptyLinkFunctionForGeneratedCodeCrowdAgentInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEQSQueryResultSourceInterface @ 146e8a540

void __cdecl EmptyLinkFunctionForGeneratedCodeEQSQueryResultSourceInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGenericTeamAgentInterface @ 146e8a550

void __cdecl EmptyLinkFunctionForGeneratedCodeGenericTeamAgentInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIndexedHandle @ 146e8a560

void __cdecl EmptyLinkFunctionForGeneratedCodeIndexedHandle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePawnAction_Move @ 146e8a570

void __cdecl EmptyLinkFunctionForGeneratedCodePawnAction_Move(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSequentialID @ 146e8a580

void __cdecl EmptyLinkFunctionForGeneratedCodeSequentialID(void)

{
  return;
}

// FAIMoveCompletedSignature_DelegateWrapper @ 146e8b600

void __cdecl
FAIMoveCompletedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FAIRequestID param_2,
          Type param_3)

{
  uint local_res20;
  undefined1 local_res24;
  
  local_res24 = (undefined1)param_3;
  local_res20 = param_2.RequestID;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_res20);
  return;
}

// FOAISimpleDelegate_DelegateWrapper @ 146e8b630

void __cdecl
FOAISimpleDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,Type param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = (undefined1)param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FindCommonParent @ 146e8b7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FindCommonParent(TArray<FBehaviorTreeInstance,TSizedDefaultAllocator<32>_> *param_1,
                TArray<FBehaviorTreeInstanceId,TSizedDefaultAllocator<32>_> *param_2,
                UBTCompositeNode *param_3,ushort param_4,UBTCompositeNode *param_5,ushort param_6,
                UBTCompositeNode **param_7,ushort *param_8)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  FScriptContainerElement FVar4;
  ushort uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FName FVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FString *pFVar14;
  FName *pFVar15;
  ushort uVar16;
  UBTCompositeNode *pUVar17;
  UBTCompositeNode *pUVar18;
  ForAnyElementType FVar19;
  FName local_128;
  FString local_120;
  FScriptContainerElement *local_110;
  FName local_108;
  FName local_100;
  wchar_t *local_f8;
  FName local_f0;
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
  
  piVar1 = &param_1->ArrayNum;
  uVar16 = param_6;
  if (param_4 <= param_6) {
    uVar16 = param_4;
  }
  *param_8 = uVar16;
  pUVar17 = param_3;
  if (uVar16 != param_4) {
    if ((*piVar1 <= (int)(uint)uVar16) &&
       (bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pUVar17 = *(UBTCompositeNode **)
               (*(longlong *)((param_1->AllocatorInstance).Data + (ulonglong)uVar16 * 0x68 + 8) +
               0x48);
  }
  uVar16 = *param_8;
  pUVar18 = param_5;
  if (uVar16 != param_6) {
    if ((*piVar1 <= (int)(uint)uVar16) &&
       (bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pUVar18 = *(UBTCompositeNode **)
               (*(longlong *)((param_1->AllocatorInstance).Data + (ulonglong)uVar16 * 0x68 + 8) +
               0x48);
  }
  if (pUVar17 == (UBTCompositeNode *)0x0) {
    uVar16 = *param_8;
    if (uVar16 != param_4) {
      if ((*piVar1 <= (int)(uint)uVar16) &&
         (bVar12 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pUVar17 = *(UBTCompositeNode **)((param_1->AllocatorInstance).Data + (ulonglong)uVar16 * 0x68)
      ;
    }
  }
  if (pUVar18 == (UBTCompositeNode *)0x0) {
    uVar16 = *param_8;
    if (uVar16 != param_6) {
      if ((*piVar1 <= (int)(uint)uVar16) &&
         (bVar12 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pUVar18 = *(UBTCompositeNode **)((param_1->AllocatorInstance).Data + (ulonglong)uVar16 * 0x68)
      ;
    }
  }
  if ((pUVar17 != (UBTCompositeNode *)0x0) && (pUVar18 != (UBTCompositeNode *)0x0)) {
    bVar3 = *(byte *)((longlong)&pUVar18->_padding_ + 4);
    bVar2 = *(byte *)((longlong)&pUVar17->_padding_ + 4);
    while (bVar3 < bVar2) {
      pUVar17 = (((TObjectPtr<UBTCompositeNode> *)&pUVar17->_padding_)->field0_0x0).DebugPtr;
      bVar2 = *(byte *)((longlong)&pUVar17->_padding_ + 4);
    }
    if (bVar3 != bVar2) {
      do {
        pUVar18 = (UBTCompositeNode *)pUVar18->_padding_;
      } while (bVar2 < *(byte *)((longlong)&pUVar18->_padding_ + 4));
    }
    if (pUVar17 != pUVar18) {
      do {
        pUVar17 = (UBTCompositeNode *)pUVar17->_padding_;
        pUVar18 = (UBTCompositeNode *)pUVar18->_padding_;
      } while (pUVar17 != pUVar18);
    }
    *param_7 = pUVar17;
    return;
  }
  if ((int)(uint)param_4 < *piVar1) {
    pFVar7 = (param_1->AllocatorInstance).Data;
    if (param_2->ArrayNum <= (int)(uint)(byte)pFVar7[(ulonglong)param_4 * 0x68 + 0x40])
    goto LAB_146e8bac1;
    FVar4 = pFVar7[(ulonglong)param_4 * 0x68 + 0x40];
    if ((param_2->ArrayNum <= (int)(uint)(byte)FVar4) &&
       (bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar8 = *(longlong *)((param_2->AllocatorInstance).Data + (ulonglong)(byte)FVar4 * 0x38);
    if (lVar8 == 0) {
      FString::FString(&local_120,L"None");
    }
    else {
      local_108 = *(FName *)(lVar8 + 0x18);
      FName::ToString(&local_108,&local_120);
    }
    FVar19.Data = local_120.Data.AllocatorInstance.Data;
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Data.ArrayNum = 0;
    local_120.Data.ArrayMax = 0;
  }
  else {
LAB_146e8bac1:
    pFVar14 = FString::FString(&local_c8,L"unknown");
    FVar19.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(uint)param_6 < *piVar1) {
    pFVar7 = (param_1->AllocatorInstance).Data;
    if ((int)(uint)(byte)pFVar7[(ulonglong)param_6 * 0x68 + 0x40] < param_2->ArrayNum) {
      FVar4 = pFVar7[(ulonglong)param_6 * 0x68 + 0x40];
      bVar11 = true;
      bVar12 = false;
      if ((param_2->ArrayNum <= (int)(uint)(byte)FVar4) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar8 = *(longlong *)((param_2->AllocatorInstance).Data + (ulonglong)(byte)FVar4 * 0x38);
      if (lVar8 == 0) {
        FString::FString(&local_e8,L"None");
        pFVar14 = &local_e8;
      }
      else {
        local_100 = *(FName *)(lVar8 + 0x18);
        FName::ToString(&local_100,&local_e8);
        pFVar14 = &local_e8;
      }
      goto LAB_146e8bbd0;
    }
  }
  bVar11 = false;
  bVar12 = true;
  pFVar14 = FString::FString(&local_b8,L"unknown");
LAB_146e8bbd0:
  local_110 = (pFVar14->Data).AllocatorInstance.Data;
  (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar14->Data).ArrayNum = 0;
  (pFVar14->Data).ArrayMax = 0;
  if ((bVar12) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((bVar11) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (((int)(uint)*param_8 < *piVar1) &&
     ((int)(uint)(byte)(param_1->AllocatorInstance).Data[(ulonglong)*param_8 * 0x68 + 0x40] <
      param_2->ArrayNum)) {
    bVar11 = true;
    bVar12 = false;
    FVar4 = (param_1->AllocatorInstance).Data[(ulonglong)*param_8 * 0x68 + 0x40];
    if ((param_2->ArrayNum <= (int)(uint)(byte)FVar4) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar8 = *(longlong *)((param_2->AllocatorInstance).Data + (ulonglong)(byte)FVar4 * 0x38);
    if (lVar8 == 0) {
      FString::FString(&local_d8,L"None");
      pFVar15 = (FName *)&local_d8;
    }
    else {
      local_128 = *(FName *)(lVar8 + 0x18);
      FName::ToString(&local_128,&local_d8);
      pFVar15 = (FName *)&local_d8;
    }
  }
  else {
    bVar11 = false;
    bVar12 = true;
    pFVar15 = (FName *)FString::FString(&local_a8,L"unknown");
  }
  FVar9 = *pFVar15;
  pFVar15->ComparisonIndex = 0;
  pFVar15->Number = 0;
  uVar6 = pFVar15[1].ComparisonIndex.Value;
  pFVar15[1].ComparisonIndex = 0;
  pFVar15[1].Number = 0;
  local_f0 = FVar9;
  if ((bVar12) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((bVar11) && ((FName)local_d8.Data.AllocatorInstance.Data != (FName)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  uVar16 = *param_8;
  if ((*piVar1 <= (int)(uint)uVar16) &&
     (bVar12 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar7 = (param_1->AllocatorInstance).Data;
  uVar5 = *param_8;
  if ((*piVar1 <= (int)(uint)uVar5) &&
     (bVar12 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_f8 = L"";
  if (*(longlong *)((param_1->AllocatorInstance).Data + (ulonglong)uVar5 * 0x68 + 8) ==
      *(longlong *)(pFVar7 + (ulonglong)uVar16 * 0x68)) {
    local_f8 = L" (root)";
  }
  uVar16 = *param_8;
  if ((*piVar1 <= (int)(uint)uVar16) &&
     (bVar12 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  UBehaviorTreeTypes::DescribeNodeHelper
            (&local_58,
             *(UBTNode **)((param_1->AllocatorInstance).Data + (ulonglong)uVar16 * 0x68 + 8));
  local_128 = (FName)L"";
  if (uVar6 != 0) {
    local_128 = FVar9;
  }
  UBehaviorTreeTypes::DescribeNodeHelper(&local_68,(UBTNode *)pUVar18);
  UBehaviorTreeTypes::DescribeNodeHelper(&local_78,(UBTNode *)param_5);
  UBehaviorTreeTypes::DescribeNodeHelper(&local_88,(UBTNode *)pUVar17);
  UBehaviorTreeTypes::DescribeNodeHelper(&local_98,(UBTNode *)param_3);
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_f0 != (FName)0x0) {
    FMemory::Free((void *)local_f0);
  }
  if (local_110 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110);
  }
  if (FVar19.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar19.Data);
  }
  return;
}

// InitializeNodeHelper @ 146e91250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
InitializeNodeHelper
          (UBTCompositeNode *param_1,UBTNode *param_2,uchar param_3,ushort *param_4,
          TArray<FBehaviorTreeNodeInitializationData,TSizedDefaultAllocator<32>_> *param_5,
          UBehaviorTree *param_6,UObject *param_7)

{
  longlong *plVar1;
  byte *pbVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  UClass *pUVar12;
  UBTNode *pUVar13;
  UBTAuxiliaryNode *pUVar14;
  uchar uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint local_res8;
  UBTNode *local_1d8;
  UBTAuxiliaryNode *local_1d0;
  int local_1c8;
  UBTNode *local_1c0;
  UBTCompositeNode *pUStack_1b8;
  ushort local_1b0;
  ushort uStack_1ae;
  ushort uStack_1ac;
  uchar uStack_1aa;
  undefined1 uStack_1a9;
  UBTNode *local_1a8;
  UBTNode *pUStack_1a0;
  ushort local_198;
  ushort uStack_196;
  ushort uStack_194;
  uchar uStack_192;
  undefined1 uStack_191;
  UBTAuxiliaryNode *local_190;
  UBTNode *pUStack_188;
  ushort local_180;
  ushort uStack_17e;
  ushort uStack_17c;
  uchar uStack_17a;
  undefined1 uStack_179;
  UBTAuxiliaryNode *local_178;
  UBTNode *pUStack_170;
  ushort local_168;
  ushort uStack_166;
  ushort uStack_164;
  uchar uStack_162;
  undefined1 uStack_161;
  UBTAuxiliaryNode *local_160;
  UBTNode *pUStack_158;
  ushort local_150;
  ushort uStack_14e;
  ushort uStack_14c;
  uchar uStack_14a;
  undefined1 uStack_149;
  FName local_148;
  FName local_140;
  FName local_138;
  undefined8 local_130;
  undefined8 local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  longlong *local_f0;
  UBTNode *local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  sVar9 = (**(code **)(param_2->_padding_ + 0x2e8))(param_2);
  sVar10 = (**(code **)(param_2->_padding_ + 0x2d0))(param_2);
  local_1b0 = *param_4;
  uStack_1ac = sVar9 + 3U & 0xfffc;
  uStack_1ae = uStack_1ac + sVar10;
  if (2 < uStack_1ae) {
    uStack_1ae = uStack_1ae + 3 & 0xfffc;
  }
  pFVar4 = (param_5->AllocatorInstance).Data;
  local_1c0 = param_2;
  pUStack_1b8 = param_1;
  uStack_1aa = param_3;
  if (((pFVar4 <= (FScriptContainerElement *)&local_1c0) &&
      ((FScriptContainerElement *)&local_1c0 < pFVar4 + (longlong)param_5->ArrayMax * 0x18)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar11 = param_5->ArrayNum;
  if (iVar11 == param_5->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar11 + 1;
  pFVar5 = (param_5->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar11 * 0x18;
  *(UBTNode **)pFVar4 = local_1c0;
  *(UBTCompositeNode **)(pFVar4 + 8) = pUStack_1b8;
  *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) =
       CONCAT17(uStack_1a9,CONCAT16(uStack_1aa,CONCAT24(uStack_1ac,CONCAT22(uStack_1ae,local_1b0))))
  ;
  UBehaviorTreeTypes::SetBTLoggingContext(param_2);
  (**(code **)(param_2->_padding_ + 0x2b0))(param_2,param_6);
  UBehaviorTreeTypes::SetBTLoggingContext((UBTNode *)0x0);
  *param_4 = *param_4 + 1;
  pUVar12 = Z_Construct_UClass_UBTCompositeNode_NoRegister();
  iVar11 = (int)pUVar12->_padding_;
  if (((iVar11 <= *(int *)(param_2->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar11 * 8)
       == &pUVar12->_padding_)) && (param_2 != (UBTNode *)0x0)) {
    uVar19 = 0;
    if (0 < (int)param_2[1]._padding_) {
      plVar1 = &param_2[1]._padding_;
      lVar21 = 0;
      do {
        uVar16 = ~uVar19 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar19 < (int)param_2[1]._padding_) {
          uVar17 = uVar16;
        }
        if ((uVar17 == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(longlong *)(lVar21 + *plVar1) == 0) {
          if (2 < (byte)LogBehaviorTree._0_1_) {
            UBehaviorTreeTypes::DescribeNodeHelper(&local_90,param_2);
            local_118 = (FName)param_6->_padding_;
            FName::ToString(&local_118,&local_e0);
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
          uVar17 = 0;
          if ((int)uVar19 < (int)param_2[1]._padding_) {
            uVar17 = uVar16;
          }
          if ((uVar17 == 0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pvVar3 = (void *)(*plVar1 + (longlong)(int)uVar19 * 8);
          iVar11 = ((int)param_2[1]._padding_ - uVar19) + -1;
          if (iVar11 != 0) {
            memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)iVar11 << 3);
          }
          *(int *)&param_2[1]._padding_ = (int)param_2[1]._padding_ + -1;
          uVar19 = uVar19 - 1;
          lVar21 = lVar21 + -8;
        }
        else {
          local_148.ComparisonIndex.Value = 0;
          local_148.Number = 0;
          uVar17 = 0;
          if ((int)uVar19 < (int)param_2[1]._padding_) {
            uVar17 = uVar16;
          }
          if ((uVar17 == 0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar13 = (UBTNode *)
                    StaticDuplicateObject
                              (*(UObject **)(*plVar1 + lVar21),param_7,local_148,
                               RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                               RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                               RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient
                               |RF_InheritableComponentTemplate|RF_LoadCompleted|
                               RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                               RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                               RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|
                               RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                               RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                               RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                               RF_Public,(UClass *)0x0,Normal,
                               PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|
                               Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|
                               LoaderImport|AutoRTFMConstructionAborted|ReachabilityFlag2|
                               ReachabilityFlag1|ReachabilityFlag0);
          if (pUVar13 == (UBTNode *)0x0) {
LAB_146e9165b:
            pUVar13 = (UBTNode *)0x0;
          }
          else {
            pUVar12 = Z_Construct_UClass_UBTService_NoRegister();
            iVar11 = (int)pUVar12->_padding_;
            if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar11) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
                &pUVar12->_padding_)) goto LAB_146e9165b;
          }
          uVar17 = 0;
          if ((int)uVar19 < (int)param_2[1]._padding_) {
            uVar17 = uVar16;
          }
          if ((uVar17 == 0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = *plVar1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UBTNode *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          *(UBTNode **)(lVar6 + lVar21) = pUVar13;
          sVar9 = (**(code **)(pUVar13->_padding_ + 0x2e8))(pUVar13);
          sVar10 = (**(code **)(pUVar13->_padding_ + 0x2d0))(pUVar13);
          local_198 = *param_4;
          uStack_194 = sVar9 + 3U & 0xfffc;
          uStack_196 = sVar10 + uStack_194;
          if (2 < uStack_196) {
            uStack_196 = uStack_196 + 3 & 0xfffc;
          }
          pFVar4 = (param_5->AllocatorInstance).Data;
          local_1a8 = pUVar13;
          pUStack_1a0 = param_2;
          uStack_192 = param_3;
          if (((pFVar4 <= (FScriptContainerElement *)&local_1a8) &&
              ((FScriptContainerElement *)&local_1a8 < pFVar4 + (longlong)param_5->ArrayMax * 0x18))
             && (bVar8 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar11 = param_5->ArrayNum;
          if (iVar11 == param_5->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar11 + 1;
          pFVar5 = (param_5->AllocatorInstance).Data;
          pFVar4 = pFVar5 + (longlong)iVar11 * 0x18;
          *(UBTNode **)pFVar4 = local_1a8;
          *(UBTNode **)(pFVar4 + 8) = pUStack_1a0;
          *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) =
               CONCAT17(uStack_191,
                        CONCAT16(uStack_192,CONCAT24(uStack_194,CONCAT22(uStack_196,local_198))));
          UBehaviorTreeTypes::SetBTLoggingContext(pUVar13);
          (**(code **)(pUVar13->_padding_ + 0x2b0))(pUVar13,param_6);
          *param_4 = *param_4 + 1;
          UBehaviorTreeTypes::SetBTLoggingContext((UBTNode *)0x0);
        }
        uVar19 = uVar19 + 1;
        lVar21 = lVar21 + 8;
      } while ((int)uVar19 < (int)param_2[1]._padding_);
    }
    local_f0 = &param_2[1]._padding_;
    local_res8 = 0;
    if (0 < (int)*local_f0) {
      local_e8 = param_2 + 1;
      do {
        pUVar13 = local_e8;
        uVar19 = 0;
        if ((int)local_res8 < (int)local_e8->_padding_) {
          uVar19 = ~local_res8 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar20 = (undefined8 *)((longlong)(int)local_res8 * 0x30 + pUVar13->_padding_);
        uVar19 = 0;
        uVar15 = (uchar)local_res8;
        if (0 < *(int *)(puVar20 + 3)) {
          lVar21 = 0;
          do {
            uVar16 = ~uVar19 >> 0x1f;
            uVar17 = 0;
            if ((int)uVar19 < *(int *)(puVar20 + 3)) {
              uVar17 = uVar16;
            }
            if ((uVar17 == 0) &&
               (bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(longlong *)(lVar21 + puVar20[2]) == 0) {
              if (2 < (byte)LogBehaviorTree._0_1_) {
                UBehaviorTreeTypes::DescribeNodeHelper(&local_80,param_2);
                local_110 = (FName)param_6->_padding_;
                FName::ToString(&local_110,&local_d0);
                UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
                if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                }
                if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_80.Data.AllocatorInstance.Data);
                }
              }
              uVar17 = 0;
              if ((int)uVar19 < *(int *)(puVar20 + 3)) {
                uVar17 = uVar16;
              }
              if ((uVar17 == 0) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pvVar3 = (void *)(puVar20[2] + (longlong)(int)uVar19 * 8);
              iVar11 = (*(int *)(puVar20 + 3) - uVar19) + -1;
              if (iVar11 != 0) {
                memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)iVar11 << 3);
              }
              *(int *)(puVar20 + 3) = *(int *)(puVar20 + 3) + -1;
              uVar19 = uVar19 - 1;
              lVar21 = lVar21 + -8;
            }
            else {
              local_140.ComparisonIndex.Value = 0;
              local_140.Number = 0;
              uVar17 = 0;
              if ((int)uVar19 < *(int *)(puVar20 + 3)) {
                uVar17 = uVar16;
              }
              if ((uVar17 == 0) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pUVar14 = (UBTAuxiliaryNode *)
                        StaticDuplicateObject
                                  (*(UObject **)(puVar20[2] + lVar21),param_7,local_140,
                                   RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                                   RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                                   RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
                                   RF_DuplicateTransient|RF_InheritableComponentTemplate|
                                   RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|
                                   RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                                   RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects
                                   |RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                                   RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|
                                   RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                                   RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                                   (UClass *)0x0,Normal,
                                   PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|
                                   Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|
                                   LoaderImport|AutoRTFMConstructionAborted|ReachabilityFlag2|
                                   ReachabilityFlag1|ReachabilityFlag0);
              if (pUVar14 == (UBTAuxiliaryNode *)0x0) {
LAB_146e91aed:
                pUVar14 = (UBTAuxiliaryNode *)0x0;
              }
              else {
                pUVar12 = Z_Construct_UClass_UBTDecorator_NoRegister();
                iVar11 = (int)pUVar12->_padding_;
                if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar11) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
                    &pUVar12->_padding_)) goto LAB_146e91aed;
              }
              uVar17 = 0;
              if ((int)uVar19 < *(int *)(puVar20 + 3)) {
                uVar17 = uVar16;
              }
              if ((uVar17 == 0) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar6 = puVar20[2];
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar14 != (UBTAuxiliaryNode *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar14);
              }
              *(UBTAuxiliaryNode **)(lVar6 + lVar21) = pUVar14;
              sVar9 = (**(code **)(pUVar14->_padding_ + 0x2e8))(pUVar14);
              sVar10 = (**(code **)(pUVar14->_padding_ + 0x2d0))(pUVar14);
              local_180 = *param_4;
              uStack_17c = sVar9 + 3U & 0xfffc;
              uStack_17e = sVar10 + uStack_17c;
              if (2 < uStack_17e) {
                uStack_17e = uStack_17e + 3 & 0xfffc;
              }
              pFVar4 = (param_5->AllocatorInstance).Data;
              local_190 = pUVar14;
              pUStack_188 = param_2;
              uStack_17a = param_3;
              if (((pFVar4 <= (FScriptContainerElement *)&local_190) &&
                  ((FScriptContainerElement *)&local_190 <
                   pFVar4 + (longlong)param_5->ArrayMax * 0x18)) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar11 = param_5->ArrayNum;
              if (iVar11 == param_5->ArrayMax) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
              }
              param_5->ArrayNum = iVar11 + 1;
              pFVar5 = (param_5->AllocatorInstance).Data;
              pFVar4 = pFVar5 + (longlong)iVar11 * 0x18;
              *(UBTAuxiliaryNode **)pFVar4 = local_190;
              *(UBTNode **)(pFVar4 + 8) = pUStack_188;
              *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) =
                   CONCAT17(uStack_179,
                            CONCAT16(uStack_17a,CONCAT24(uStack_17c,CONCAT22(uStack_17e,local_180)))
                           );
              UBehaviorTreeTypes::SetBTLoggingContext((UBTNode *)pUVar14);
              (**(code **)(pUVar14->_padding_ + 0x2b0))(pUVar14,param_6);
              if (((local_res8 != (local_res8 & 0xff)) || ((int)local_res8 < 0)) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("IntFitsIn<OutType>(In)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"
                                    ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              UBTAuxiliaryNode::InitializeParentLink(pUVar14,uVar15);
              *param_4 = *param_4 + 1;
              UBehaviorTreeTypes::SetBTLoggingContext((UBTNode *)0x0);
            }
            uVar19 = uVar19 + 1;
            lVar21 = lVar21 + 8;
          } while ((int)uVar19 < *(int *)(puVar20 + 3));
        }
        if (puVar20[1] != 0) {
          pUVar12 = Z_Construct_UClass_UBTTask_RunBehavior_NoRegister();
          bVar8 = FObjectPtr::IsA((FObjectPtr *)(puVar20 + 1),pUVar12);
          if ((((bVar8) && (puVar20[1] != 0)) &&
              (lVar21 = *(longlong *)(puVar20[1] + 0x70), lVar21 != 0)) &&
             (*(int *)(lVar21 + 0x48) != 0)) {
            local_1c8 = *(int *)(puVar20 + 3);
            uVar18 = 0;
            uVar22 = uVar18;
            if (0 < *(int *)(lVar21 + 0x48)) {
              do {
                uVar17 = (uint)uVar18;
                uVar19 = 0;
                if ((int)uVar17 < *(int *)(lVar21 + 0x48)) {
                  uVar19 = ~uVar17 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar8 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (*(longlong *)(uVar22 + *(longlong *)(lVar21 + 0x40)) == 0) {
                  if (2 < (byte)LogBehaviorTree._0_1_) {
                    UBehaviorTreeTypes::DescribeNodeHelper(&local_70,param_2);
                    local_108 = *(FName *)(lVar21 + 0x18);
                    FName::ToString(&local_108,&local_b0);
                    local_100 = (FName)param_6->_padding_;
                    FName::ToString(&local_100,&local_c0);
                    UE::Logging::Private::BasicLog<3>
                              (&LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
                    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                    }
                    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                    }
                    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_70.Data.AllocatorInstance.Data);
                    }
                  }
                }
                else {
                  local_138.ComparisonIndex.Value = 0;
                  local_138.Number = 0;
                  uVar19 = 0;
                  if ((int)uVar17 < *(int *)(lVar21 + 0x48)) {
                    uVar19 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pUVar14 = (UBTAuxiliaryNode *)
                            StaticDuplicateObject
                                      (*(UObject **)(*(longlong *)(lVar21 + 0x40) + uVar22),param_7,
                                       local_138,
                                       RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset
                                       |RF_HasExternalPackage|RF_WillBeLoaded|
                                       RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|
                                       RF_StrongRefOnFrame|RF_DuplicateTransient|
                                       RF_InheritableComponentTemplate|RF_LoadCompleted|
                                       RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                                       RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                                       RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                                       RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                                       RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|
                                       RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                                       RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                                       (UClass *)0x0,Normal,
                                       PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|
                                       Async|Native|ClusterRoot|ReachableInCluster|
                                       AsyncLoadingPhase1|Garbage|LoaderImport|
                                       AutoRTFMConstructionAborted|ReachabilityFlag2|
                                       ReachabilityFlag1|ReachabilityFlag0);
                  if (pUVar14 == (UBTAuxiliaryNode *)0x0) {
LAB_146e91f63:
                    pUVar14 = (UBTAuxiliaryNode *)0x0;
                  }
                  else {
                    pUVar12 = Z_Construct_UClass_UBTDecorator_NoRegister();
                    iVar11 = (int)pUVar12->_padding_;
                    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar11) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
                        &pUVar12->_padding_)) goto LAB_146e91f63;
                  }
                  local_1d0 = pUVar14;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar14 != (UBTAuxiliaryNode *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar14);
                  }
                  if ((((UBTAuxiliaryNode **)puVar20[2] <= &local_1d0) &&
                      (&local_1d0 <
                       (UBTAuxiliaryNode **)puVar20[2] + *(int *)((longlong)puVar20 + 0x1c))) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar11 = *(int *)(puVar20 + 3);
                  if (iVar11 == *(int *)((longlong)puVar20 + 0x1c)) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,(ForAnyElementType *)(puVar20 + 2),
                                        (int *)((longlong)puVar20 + 0x1c));
                  }
                  *(int *)(puVar20 + 3) = iVar11 + 1;
                  *(UBTAuxiliaryNode **)(puVar20[2] + (longlong)iVar11 * 8) = local_1d0;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_1d0 != (UBTAuxiliaryNode *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_1d0);
                  }
                  sVar9 = (**(code **)(pUVar14->_padding_ + 0x2e8))(pUVar14);
                  sVar10 = (**(code **)(pUVar14->_padding_ + 0x2d0))(pUVar14);
                  local_168 = *param_4;
                  uStack_164 = sVar9 + 3U & 0xfffc;
                  uStack_166 = uStack_164 + sVar10;
                  if (2 < uStack_166) {
                    uStack_166 = uStack_166 + 3 & 0xfffc;
                  }
                  pFVar4 = (param_5->AllocatorInstance).Data;
                  local_178 = pUVar14;
                  pUStack_170 = param_2;
                  uStack_162 = param_3;
                  if (((pFVar4 <= (FScriptContainerElement *)&local_178) &&
                      ((FScriptContainerElement *)&local_178 <
                       pFVar4 + (longlong)param_5->ArrayMax * 0x18)) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar11 = param_5->ArrayNum;
                  if (iVar11 == param_5->ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
                  }
                  param_5->ArrayNum = iVar11 + 1;
                  pFVar5 = (param_5->AllocatorInstance).Data;
                  pFVar4 = pFVar5 + (longlong)iVar11 * 0x18;
                  *(UBTAuxiliaryNode **)pFVar4 = local_178;
                  *(UBTNode **)(pFVar4 + 8) = pUStack_170;
                  *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) =
                       CONCAT17(uStack_161,
                                CONCAT16(uStack_162,
                                         CONCAT24(uStack_164,CONCAT22(uStack_166,local_168))));
                  pbVar2 = (byte *)((longlong)&pUVar14->_padding_ + 5);
                  *pbVar2 = *pbVar2 | 2;
                  UBehaviorTreeTypes::SetBTLoggingContext((UBTNode *)pUVar14);
                  (**(code **)(pUVar14->_padding_ + 0x2b0))(pUVar14,param_6);
                  if (((local_res8 != (local_res8 & 0xff)) || ((int)local_res8 < 0)) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("IntFitsIn<OutType>(In)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                         ,0xaa,
                                         L"Loss of data caused by narrowing conversion, In = %lld"),
                     bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UBTAuxiliaryNode::InitializeParentLink(pUVar14,uVar15);
                  *param_4 = *param_4 + 1;
                  UBehaviorTreeTypes::SetBTLoggingContext((UBTNode *)0x0);
                }
                uVar18 = (ulonglong)(uVar17 + 1);
                uVar22 = uVar22 + 8;
              } while ((int)(uVar17 + 1) < *(int *)(lVar21 + 0x48));
            }
            MergeDecoratorOpsHelper
                      ((TArray<FBTDecoratorLogic,TSizedDefaultAllocator<32>_> *)(puVar20 + 4),
                       (TArray<FBTDecoratorLogic,TSizedDefaultAllocator<32>_> *)(lVar21 + 0x50),
                       local_1c8,*(int *)(puVar20 + 3) - local_1c8);
          }
        }
        if ((UObject *)*puVar20 == (UObject *)0x0) {
          if ((UObject *)puVar20[1] != (UObject *)0x0) {
            local_128 = 0;
            local_1d8 = (UBTNode *)
                        StaticDuplicateObject
                                  ((UObject *)puVar20[1],param_7,(FName)0x0,
                                   RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                                   RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                                   RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
                                   RF_DuplicateTransient|RF_InheritableComponentTemplate|
                                   RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|
                                   RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                                   RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects
                                   |RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                                   RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|
                                   RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                                   RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                                   (UClass *)0x0,Normal,
                                   PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|
                                   Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|
                                   LoaderImport|AutoRTFMConstructionAborted|ReachabilityFlag2|
                                   ReachabilityFlag1|ReachabilityFlag0);
            if (local_1d8 == (UBTNode *)0x0) {
LAB_146e92312:
              local_1d8 = (UBTNode *)0x0;
            }
            else {
              pUVar12 = Z_Construct_UClass_UBTTaskNode_NoRegister();
              iVar11 = (int)pUVar12->_padding_;
              if ((*(int *)(local_1d8->_padding_ + 0x38) < iVar11) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(local_1d8->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
                  &pUVar12->_padding_)) goto LAB_146e92312;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_1d8 != (UBTNode *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_1d8);
            }
            uVar19 = 0;
            puVar20[1] = local_1d8;
            if (0 < (int)local_1d8[1]._padding_) {
              lVar21 = 0;
              pUVar13 = local_1d8;
              do {
                uVar17 = 0;
                if ((int)uVar19 < (int)pUVar13[1]._padding_) {
                  uVar17 = ~uVar19 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar8 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (*(longlong *)(lVar21 + pUVar13[1]._padding_) == 0) {
                  if (2 < (byte)LogBehaviorTree._0_1_) {
                    UBehaviorTreeTypes::DescribeNodeHelper(local_60,(UBTNode *)puVar20[1]);
                    local_f8 = (FName)param_6->_padding_;
                    FName::ToString(&local_f8,&local_a0);
                    UE::Logging::Private::BasicLog<3>
                              (&LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
                    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                    }
                    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                    }
                  }
                  lVar6 = puVar20[1];
                  uVar17 = 0;
                  if ((int)uVar19 < *(int *)(lVar6 + 0x60)) {
                    uVar17 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pvVar3 = (void *)(*(longlong *)(lVar6 + 0x58) + (longlong)(int)uVar19 * 8);
                  iVar11 = (*(int *)(lVar6 + 0x60) - uVar19) + -1;
                  if (iVar11 != 0) {
                    memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)iVar11 << 3);
                  }
                  *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x60) + -1;
                  uVar19 = uVar19 - 1;
                  lVar21 = lVar21 + -8;
                }
                else {
                  lVar6 = puVar20[1];
                  local_120.ComparisonIndex.Value = 0;
                  local_120.Number = 0;
                  uVar17 = 0;
                  if ((int)uVar19 < *(int *)(lVar6 + 0x60)) {
                    uVar17 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pUVar14 = (UBTAuxiliaryNode *)
                            StaticDuplicateObject
                                      (*(UObject **)(lVar21 + *(longlong *)(lVar6 + 0x58)),param_7,
                                       local_120,
                                       RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset
                                       |RF_HasExternalPackage|RF_WillBeLoaded|
                                       RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|
                                       RF_StrongRefOnFrame|RF_DuplicateTransient|
                                       RF_InheritableComponentTemplate|RF_LoadCompleted|
                                       RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                                       RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                                       RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                                       RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                                       RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|
                                       RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                                       RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                                       (UClass *)0x0,Normal,
                                       PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|
                                       Async|Native|ClusterRoot|ReachableInCluster|
                                       AsyncLoadingPhase1|Garbage|LoaderImport|
                                       AutoRTFMConstructionAborted|ReachabilityFlag2|
                                       ReachabilityFlag1|ReachabilityFlag0);
                  if (pUVar14 == (UBTAuxiliaryNode *)0x0) {
LAB_146e9259a:
                    pUVar14 = (UBTAuxiliaryNode *)0x0;
                  }
                  else {
                    pUVar12 = Z_Construct_UClass_UBTService_NoRegister();
                    iVar11 = (int)pUVar12->_padding_;
                    if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar11) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
                        &pUVar12->_padding_)) goto LAB_146e9259a;
                  }
                  lVar6 = puVar20[1];
                  uVar17 = 0;
                  if ((int)uVar19 < *(int *)(lVar6 + 0x60)) {
                    uVar17 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar6 = *(longlong *)(lVar6 + 0x58);
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar14 != (UBTAuxiliaryNode *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar14);
                  }
                  *(UBTAuxiliaryNode **)(lVar6 + lVar21) = pUVar14;
                  sVar9 = (**(code **)(pUVar14->_padding_ + 0x2e8))(pUVar14);
                  sVar10 = (**(code **)(pUVar14->_padding_ + 0x2d0))(pUVar14);
                  local_150 = *param_4;
                  uStack_14c = sVar9 + 3U & 0xfffc;
                  uStack_14e = sVar10 + uStack_14c;
                  if (2 < uStack_14e) {
                    uStack_14e = uStack_14e + 3 & 0xfffc;
                  }
                  pFVar4 = (param_5->AllocatorInstance).Data;
                  local_160 = pUVar14;
                  pUStack_158 = param_2;
                  uStack_14a = param_3;
                  if (((pFVar4 <= (FScriptContainerElement *)&local_160) &&
                      ((FScriptContainerElement *)&local_160 <
                       pFVar4 + (longlong)param_5->ArrayMax * 0x18)) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar11 = param_5->ArrayNum;
                  if (iVar11 == param_5->ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
                  }
                  param_5->ArrayNum = iVar11 + 1;
                  pFVar5 = (param_5->AllocatorInstance).Data;
                  pFVar4 = pFVar5 + (longlong)iVar11 * 0x18;
                  *(UBTAuxiliaryNode **)pFVar4 = local_160;
                  *(UBTNode **)(pFVar4 + 8) = pUStack_158;
                  *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) =
                       CONCAT17(uStack_149,
                                CONCAT16(uStack_14a,
                                         CONCAT24(uStack_14c,CONCAT22(uStack_14e,local_150))));
                  UBehaviorTreeTypes::SetBTLoggingContext((UBTNode *)pUVar14);
                  (**(code **)(pUVar14->_padding_ + 0x2b0))(pUVar14,param_6);
                  if (((local_res8 != (local_res8 & 0xff)) || ((int)local_res8 < 0)) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("IntFitsIn<OutType>(In)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                         ,0xaa,
                                         L"Loss of data caused by narrowing conversion, In = %lld"),
                     bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UBTAuxiliaryNode::InitializeParentLink(pUVar14,uVar15);
                  *param_4 = *param_4 + 1;
                  UBehaviorTreeTypes::SetBTLoggingContext((UBTNode *)0x0);
                }
                pUVar13 = (UBTNode *)puVar20[1];
                uVar19 = uVar19 + 1;
                lVar21 = lVar21 + 8;
              } while ((int)uVar19 < (int)pUVar13[1]._padding_);
            }
            goto LAB_146e927ad;
          }
        }
        else {
          local_1d8 = (UBTNode *)0x0;
          local_130 = 0;
          pUVar13 = (UBTNode *)
                    StaticDuplicateObject
                              ((UObject *)*puVar20,param_7,(FName)0x0,
                               RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                               RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                               RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient
                               |RF_InheritableComponentTemplate|RF_LoadCompleted|
                               RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                               RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                               RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|
                               RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                               RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                               RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                               RF_Public,(UClass *)0x0,Normal,
                               PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|
                               Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|
                               LoaderImport|AutoRTFMConstructionAborted|ReachabilityFlag2|
                               ReachabilityFlag1|ReachabilityFlag0);
          if (pUVar13 != (UBTNode *)0x0) {
            pUVar12 = Z_Construct_UClass_UBTCompositeNode_NoRegister();
            iVar11 = (int)pUVar12->_padding_;
            if ((iVar11 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
                &pUVar12->_padding_)) {
              local_1d8 = pUVar13;
            }
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d8 != (UBTNode *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_1d8);
          }
          *puVar20 = local_1d8;
LAB_146e927ad:
          if (local_1d8 != (UBTNode *)0x0) {
            InitializeNodeHelper
                      ((UBTCompositeNode *)param_2,local_1d8,param_3 + '\x01',param_4,param_5,
                       param_6,param_7);
          }
        }
        local_res8 = local_res8 + 1;
      } while ((int)local_res8 < (int)*local_f0);
    }
    UBTCompositeNode::InitializeComposite((UBTCompositeNode *)param_2,*param_4 - 1);
  }
  return;
}

// MergeDecoratorOpsHelper @ 146e93e10

void __cdecl
MergeDecoratorOpsHelper
          (TArray<FBTDecoratorLogic,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FBTDecoratorLogic,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  short sVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  iVar7 = param_1->ArrayNum;
  if ((iVar7 != 0) || (param_2->ArrayNum != 0)) {
    if (0 < param_3) {
      if (iVar7 == 0) {
        uVar5 = IntCastChecked<unsigned_short,int>(param_3 + 1);
      }
      else {
        uVar5 = 2;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_58 = CONCAT22(uVar5,(undefined2)local_58);
      local_58 = CONCAT31(local_58._1_3_,2);
      if (((pFVar1 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar1 + (longlong)param_1->ArrayMax * 4)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      param_1->ArrayNum = iVar6 + 1;
      memmove(pFVar1 + 4,pFVar1,(longlong)iVar6 << 2);
      *(undefined4 *)(param_1->AllocatorInstance).Data = local_58;
      if (iVar7 == 0) {
        uVar9 = 0;
        do {
          if ((uVar9 != (uVar9 & 0xffff)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          local_54 = CONCAT31(local_54._1_3_,1);
          local_54 = CONCAT22((short)uVar9,(undefined2)local_54);
          if (((pFVar1 <= (FScriptContainerElement *)&local_54) &&
              ((FScriptContainerElement *)&local_54 < pFVar1 + (longlong)param_1->ArrayMax * 4)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = param_1->ArrayNum;
          if (iVar7 == param_1->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x204,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          uVar9 = uVar9 + 1;
          param_1->ArrayNum = iVar7 + 1;
          *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_54;
        } while ((int)uVar9 < param_3);
      }
    }
    iVar7 = param_2->ArrayNum;
    sVar3 = (short)param_3;
    if (iVar7 == 0) {
      if (((param_4 != (param_4 & 0xffffU)) || (param_4 < 0)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_50 = CONCAT31(local_50._1_3_,2);
      local_50 = CONCAT22((short)param_4,(undefined2)local_50);
      if (((pFVar1 <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < pFVar1 + (longlong)param_1->ArrayMax * 4)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_50;
      if (0 < param_4) {
        iVar7 = -param_3;
        do {
          uVar5 = (short)param_3 + sVar3 + (short)iVar7;
          if (((param_3 != (uint)uVar5) || (param_3 < 0)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          local_4c = CONCAT31(local_4c._1_3_,1);
          local_4c = CONCAT22(uVar5,(undefined2)local_4c);
          if (((pFVar1 <= (FScriptContainerElement *)&local_4c) &&
              ((FScriptContainerElement *)&local_4c < pFVar1 + (longlong)param_1->ArrayMax * 4)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = param_1->ArrayNum;
          if (iVar6 == param_1->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x204,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_3 = param_3 + 1;
          param_1->ArrayNum = iVar6 + 1;
          *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_4c;
        } while (iVar7 + param_3 < param_4);
      }
    }
    else {
      uVar9 = 0;
      if (0 < iVar7) {
        lVar10 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar9 < iVar7) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_48 = *(uint *)((param_2->AllocatorInstance).Data + lVar10);
          if ((char)local_48 == '\x01') {
            uVar8 = (local_48 >> 0x10) + param_3;
            uVar5 = (short)(local_48 >> 0x10) + sVar3;
            if (((uVar8 != uVar5) || ((int)uVar8 < 0)) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("IntFitsIn<OutType>(In)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                   ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_48 = CONCAT22(uVar5,(undefined2)local_48);
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_1->ArrayMax * 4)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = param_1->ArrayNum;
          if (iVar7 == param_1->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x204,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          uVar9 = uVar9 + 1;
          param_1->ArrayNum = iVar7 + 1;
          lVar10 = lVar10 + 4;
          *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_48;
          iVar7 = param_2->ArrayNum;
        } while ((int)uVar9 < iVar7);
      }
    }
  }
  return;
}

// StatNodeUsage @ 146e9f8f0

void __cdecl StatNodeUsage(UBTNode *param_1,FNodeClassCounter *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res18 [2];
  int local_res20 [2];
  int local_88;
  int local_84;
  longlong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;
  ulonglong *local_40;
  
  FNodeClassCounter::CountNode(param_2,param_1);
  if (param_1 != (UBTNode *)0x0) {
    pUVar4 = Z_Construct_UClass_UBTCompositeNode_NoRegister();
    iVar9 = (int)pUVar4->_padding_;
    if ((iVar9 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar9 * 8)
        == &pUVar4->_padding_)) {
      uVar8 = 0;
      if (0 < (int)param_1[1]._padding_) {
        lVar11 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < (int)param_1[1]._padding_) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)(lVar11 + param_1[1]._padding_) != 0) {
            uVar5 = 0;
            if ((int)uVar8 < (int)param_1[1]._padding_) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_78 = *(ulonglong *)(*(longlong *)(lVar11 + param_1[1]._padding_) + 0x10);
            uVar5 = ((uint)(local_78 >> 0x14) & 0xffff ^ (uint)(local_78 >> 4)) * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            uVar5 = uVar5 >> 0x10 ^ uVar5;
            if (*(int *)&(param_2->NodeClassUsage).field_0x8 !=
                *(int *)&(param_2->NodeClassUsage).field_0x34) {
              puVar1 = *(undefined1 **)&(param_2->NodeClassUsage).field_0x40;
              puVar7 = &(param_2->NodeClassUsage).field_0x38;
              if (puVar1 != (undefined1 *)0x0) {
                puVar7 = puVar1;
              }
              iVar9 = *(int *)(puVar7 + (ulonglong)
                                        (*(int *)&(param_2->NodeClassUsage).field_0x48 - 1U & uVar5)
                                        * 4);
              if (iVar9 != -1) {
                lVar12 = *(longlong *)&param_2->NodeClassUsage;
                do {
                  if (*(ulonglong *)(lVar12 + (longlong)iVar9 * 0x18) == local_78) {
                    if ((iVar9 != -1) && (lVar12 = lVar12 + (longlong)iVar9 * 0x18, lVar12 != 0))
                    goto LAB_146e9fb03;
                    break;
                  }
                  iVar9 = *(int *)(lVar12 + 0x10 + (longlong)iVar9 * 0x18);
                } while (iVar9 != -1);
              }
            }
            local_70 = &local_78;
            TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<UClass_*_&&>_>
                      ((TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
                        *)param_2,(uint)local_res18,(TKeyInitializer<UClass_*_&&> *)(ulonglong)uVar5
                       ,(bool *)&local_70);
            lVar12 = *(longlong *)&param_2->NodeClassUsage + (longlong)local_res18[0] * 0x18;
LAB_146e9fb03:
            *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
          }
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 8;
        } while ((int)uVar8 < (int)param_1[1]._padding_);
      }
      uVar8 = 0;
      if (0 < (int)param_1[1]._padding_) {
        local_80 = 0;
        do {
          lVar11 = local_80;
          uVar5 = 0;
          if ((int)uVar8 < (int)param_1[1]._padding_) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar5 = 0;
          puVar10 = (undefined8 *)(param_1[1]._padding_ + lVar11);
          if (0 < *(int *)(puVar10 + 3)) {
            lVar12 = 0;
            do {
              uVar6 = 0;
              if ((int)uVar5 < *(int *)(puVar10 + 3)) {
                uVar6 = ~uVar5 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar3 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(longlong *)(lVar12 + puVar10[2]) != 0) {
                uVar6 = 0;
                if ((int)uVar5 < *(int *)(puVar10 + 3)) {
                  uVar6 = ~uVar5 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar3 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                local_68 = *(ulonglong *)(*(longlong *)(lVar12 + puVar10[2]) + 0x10);
                uVar6 = ((uint)(local_68 >> 0x14) & 0xffff ^ (uint)(local_68 >> 4)) * -0x7a143595;
                uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                uVar6 = uVar6 >> 0x10 ^ uVar6;
                if (*(int *)&(param_2->NodeClassUsage).field_0x8 !=
                    *(int *)&(param_2->NodeClassUsage).field_0x34) {
                  puVar1 = *(undefined1 **)&(param_2->NodeClassUsage).field_0x40;
                  puVar7 = &(param_2->NodeClassUsage).field_0x38;
                  if (puVar1 != (undefined1 *)0x0) {
                    puVar7 = puVar1;
                  }
                  iVar9 = *(int *)(puVar7 + (ulonglong)
                                            (*(int *)&(param_2->NodeClassUsage).field_0x48 - 1U &
                                            uVar6) * 4);
                  if (iVar9 != -1) {
                    lVar13 = *(longlong *)&param_2->NodeClassUsage;
                    do {
                      if (*(ulonglong *)(lVar13 + (longlong)iVar9 * 0x18) == local_68) {
                        if ((iVar9 != -1) && (lVar13 = lVar13 + (longlong)iVar9 * 0x18, lVar13 != 0)
                           ) goto LAB_146e9fd03;
                        break;
                      }
                      iVar9 = *(int *)(lVar13 + 0x10 + (longlong)iVar9 * 0x18);
                    } while (iVar9 != -1);
                  }
                }
                local_60 = &local_68;
                TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<UClass_*_&&>_>
                          ((TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
                            *)param_2,(uint)local_res20,
                           (TKeyInitializer<UClass_*_&&> *)(ulonglong)uVar6,(bool *)&local_60);
                lVar13 = *(longlong *)&param_2->NodeClassUsage + (longlong)local_res20[0] * 0x18;
LAB_146e9fd03:
                *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
              }
              uVar5 = uVar5 + 1;
              lVar12 = lVar12 + 8;
            } while ((int)uVar5 < *(int *)(puVar10 + 3));
          }
          if ((UBTNode *)*puVar10 == (UBTNode *)0x0) {
            lVar12 = puVar10[1];
            if (lVar12 != 0) {
              uVar5 = 0;
              if (0 < *(int *)(lVar12 + 0x60)) {
                lVar13 = 0;
                do {
                  uVar6 = 0;
                  if ((int)uVar5 < *(int *)(lVar12 + 0x60)) {
                    uVar6 = ~uVar5 >> 0x1f;
                  }
                  if ((uVar6 == 0) &&
                     (bVar3 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(longlong *)(lVar13 + *(longlong *)(lVar12 + 0x58)) != 0) {
                    lVar11 = puVar10[1];
                    uVar6 = 0;
                    if ((int)uVar5 < *(int *)(lVar11 + 0x60)) {
                      uVar6 = ~uVar5 >> 0x1f;
                    }
                    if ((uVar6 == 0) &&
                       (bVar3 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    local_58 = *(ulonglong *)
                                (*(longlong *)(*(longlong *)(lVar11 + 0x58) + lVar13) + 0x10);
                    uVar6 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) *
                            -0x7a143595;
                    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                    uVar6 = uVar6 >> 0x10 ^ uVar6;
                    if (*(int *)&(param_2->NodeClassUsage).field_0x8 !=
                        *(int *)&(param_2->NodeClassUsage).field_0x34) {
                      puVar1 = *(undefined1 **)&(param_2->NodeClassUsage).field_0x40;
                      puVar7 = &(param_2->NodeClassUsage).field_0x38;
                      if (puVar1 != (undefined1 *)0x0) {
                        puVar7 = puVar1;
                      }
                      iVar9 = *(int *)(puVar7 + (ulonglong)
                                                (*(int *)&(param_2->NodeClassUsage).field_0x48 - 1U
                                                & uVar6) * 4);
                      if (iVar9 != -1) {
                        lVar11 = *(longlong *)&param_2->NodeClassUsage;
                        do {
                          if (*(ulonglong *)(lVar11 + (longlong)iVar9 * 0x18) == local_58) {
                            if ((iVar9 != -1) &&
                               (lVar11 = lVar11 + (longlong)iVar9 * 0x18, lVar11 != 0))
                            goto LAB_146e9fec1;
                            break;
                          }
                          iVar9 = *(int *)(lVar11 + 0x10 + (longlong)iVar9 * 0x18);
                        } while (iVar9 != -1);
                      }
                    }
                    local_50 = &local_58;
                    TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
                    ::EmplaceByHash<TKeyInitializer<UClass_*_&&>_>
                              ((TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
                                *)param_2,(uint)&local_88,
                               (TKeyInitializer<UClass_*_&&> *)(ulonglong)uVar6,(bool *)&local_50);
                    lVar11 = *(longlong *)&param_2->NodeClassUsage + (longlong)local_88 * 0x18;
LAB_146e9fec1:
                    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                  }
                  lVar12 = puVar10[1];
                  uVar5 = uVar5 + 1;
                  lVar13 = lVar13 + 8;
                  lVar11 = local_80;
                } while ((int)uVar5 < *(int *)(lVar12 + 0x60));
              }
              local_48 = *(ulonglong *)(lVar12 + 0x10);
              uVar5 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
              uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
              uVar5 = uVar5 >> 0x10 ^ uVar5;
              if (*(int *)&(param_2->NodeClassUsage).field_0x8 !=
                  *(int *)&(param_2->NodeClassUsage).field_0x34) {
                puVar1 = *(undefined1 **)&(param_2->NodeClassUsage).field_0x40;
                puVar7 = &(param_2->NodeClassUsage).field_0x38;
                if (puVar1 != (undefined1 *)0x0) {
                  puVar7 = puVar1;
                }
                iVar9 = *(int *)(puVar7 + (ulonglong)
                                          (*(int *)&(param_2->NodeClassUsage).field_0x48 - 1U &
                                          uVar5) * 4);
                if (iVar9 != -1) {
                  lVar12 = *(longlong *)&param_2->NodeClassUsage;
                  do {
                    if (*(ulonglong *)(lVar12 + (longlong)iVar9 * 0x18) == local_48) {
                      if ((iVar9 != -1) && (lVar12 = lVar12 + (longlong)iVar9 * 0x18, lVar12 != 0))
                      goto LAB_146e9ffa3;
                      break;
                    }
                    iVar9 = *(int *)(lVar12 + 0x10 + (longlong)iVar9 * 0x18);
                  } while (iVar9 != -1);
                }
              }
              local_40 = &local_48;
              TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<UClass_*_&&>_>
                        ((TSet<TTuple<UClass_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UClass_*,unsigned_int,0>,FDefaultSetAllocator>
                          *)param_2,(uint)&local_84,(TKeyInitializer<UClass_*_&&> *)(ulonglong)uVar5
                         ,(bool *)&local_40);
              lVar12 = *(longlong *)&param_2->NodeClassUsage + (longlong)local_84 * 0x18;
LAB_146e9ffa3:
              *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
            }
          }
          else {
            StatNodeUsage((UBTNode *)*puVar10,param_2);
          }
          local_80 = lVar11 + 0x30;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)param_1[1]._padding_);
      }
    }
  }
  return;
}

// Z_Construct_UClass_AAIController_NoRegister @ 146ea4e50

UClass * __cdecl Z_Construct_UClass_AAIController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAIController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIController",
               &Z_Registration_Info_UClass_AAIController.InnerSingleton,
               AAIController::StaticRegisterNativesAAIController,0x400,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AAIController>,InternalVTableHelperCtorCaller<AAIController>,
               local_res8,AController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAIController.InnerSingleton;
}

// Z_Construct_UClass_UAIResourceInterface_NoRegister @ 146ea4f10

UClass * __cdecl Z_Construct_UClass_UAIResourceInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIResourceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIResourceInterface",
               &Z_Registration_Info_UClass_UAIResourceInterface.InnerSingleton,
               UAIResourceInterface::StaticRegisterNativesUAIResourceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIResourceInterface>,
               InternalVTableHelperCtorCaller<UAIResourceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIResourceInterface.InnerSingleton;
}

// Z_Construct_UClass_UAIResource_Logic_NoRegister @ 146ea4fd0

UClass * __cdecl Z_Construct_UClass_UAIResource_Logic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIResource_Logic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIResource_Logic",
               &Z_Registration_Info_UClass_UAIResource_Logic.InnerSingleton,
               UAIResource_Logic::StaticRegisterNativesUAIResource_Logic,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAIResource_Logic>,
               InternalVTableHelperCtorCaller<UAIResource_Logic>,local_res8,
               UGameplayTaskResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIResource_Logic.InnerSingleton;
}

// Z_Construct_UClass_UAIResource_Movement_NoRegister @ 146ea5090

UClass * __cdecl Z_Construct_UClass_UAIResource_Movement_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIResource_Movement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIResource_Movement",
               &Z_Registration_Info_UClass_UAIResource_Movement.InnerSingleton,
               UAIResource_Movement::StaticRegisterNativesUAIResource_Movement,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAIResource_Movement>,
               InternalVTableHelperCtorCaller<UAIResource_Movement>,local_res8,
               UGameplayTaskResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIResource_Movement.InnerSingleton;
}

// Z_Construct_UClass_UAISenseBlueprintListener_NoRegister @ 146ea5150

UClass * __cdecl Z_Construct_UClass_UAISenseBlueprintListener_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseBlueprintListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserDefinedStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseBlueprintListener",
               &Z_Registration_Info_UClass_UAISenseBlueprintListener.InnerSingleton,
               UAISenseBlueprintListener::StaticRegisterNativesUAISenseBlueprintListener,0x108,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISenseBlueprintListener>,
               InternalVTableHelperCtorCaller<UAISenseBlueprintListener>,local_res8,
               UUserDefinedStruct::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseBlueprintListener.InnerSingleton;
}

// Z_Construct_UClass_UAISenseConfig_Blueprint_NoRegister @ 146ea5210

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Blueprint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Blueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Blueprint",
               &Z_Registration_Info_UClass_UAISenseConfig_Blueprint.InnerSingleton,
               UAISenseConfig_Blueprint::StaticRegisterNativesUAISenseConfig_Blueprint,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UAISenseConfig_Blueprint>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Blueprint>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Blueprint.InnerSingleton;
}

// Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister @ 146ea52d0

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Hearing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Hearing",
               &Z_Registration_Info_UClass_UAISenseConfig_Hearing.InnerSingleton,
               UAISenseConfig_Hearing::StaticRegisterNativesUAISenseConfig_Hearing,0x60,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAISenseConfig_Hearing>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Hearing>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Hearing.InnerSingleton;
}

// Z_Construct_UClass_UAISenseConfig_NoRegister @ 146ea5390

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig",
               &Z_Registration_Info_UClass_UAISenseConfig.InnerSingleton,
               UAISenseConfig::StaticRegisterNativesUAISenseConfig,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UAISenseConfig>,InternalVTableHelperCtorCaller<UAISenseConfig>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig.InnerSingleton;
}

// Z_Construct_UClass_UAISenseConfig_Prediction_NoRegister @ 146ea5440

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Prediction_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Prediction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Prediction",
               &Z_Registration_Info_UClass_UAISenseConfig_Prediction.InnerSingleton,
               UAISenseConfig_Prediction::StaticRegisterNativesUAISenseConfig_Prediction,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Prediction>
               ,InternalVTableHelperCtorCaller<UAISenseConfig_Prediction>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Prediction.InnerSingleton;
}

// Z_Construct_UClass_UAISenseConfig_Sight_NoRegister @ 146ea5500

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Sight_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Sight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Sight",
               &Z_Registration_Info_UClass_UAISenseConfig_Sight.InnerSingleton,
               UAISenseConfig_Sight::StaticRegisterNativesUAISenseConfig_Sight,0x70,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAISenseConfig_Sight>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Sight>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Sight.InnerSingleton;
}

// Z_Construct_UClass_UAISenseConfig_Team_NoRegister @ 146ea55c0

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Team_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Team.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Team",
               &Z_Registration_Info_UClass_UAISenseConfig_Team.InnerSingleton,
               UAISenseConfig_Team::StaticRegisterNativesUAISenseConfig_Team,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Team>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Team>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Team.InnerSingleton;
}

// Z_Construct_UClass_UAISenseConfig_Touch_NoRegister @ 146ea5680

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Touch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Touch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Touch",
               &Z_Registration_Info_UClass_UAISenseConfig_Touch.InnerSingleton,
               UAISenseConfig_Touch::StaticRegisterNativesUAISenseConfig_Touch,0x50,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAISenseConfig_Touch>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Touch>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Touch.InnerSingleton;
}

// Z_Construct_UClass_UAISenseEvent_Damage_NoRegister @ 146ea5740

UClass * __cdecl Z_Construct_UClass_UAISenseEvent_Damage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseEvent_Damage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseEvent_Damage",
               &Z_Registration_Info_UClass_UAISenseEvent_Damage.InnerSingleton,
               UAISenseEvent_Damage::StaticRegisterNativesUAISenseEvent_Damage,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Game",InternalConstructor<UAISenseEvent_Damage>,
               InternalVTableHelperCtorCaller<UAISenseEvent_Damage>,local_res8,
               UAISenseEvent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseEvent_Damage.InnerSingleton;
}

// Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister @ 146ea5800

UClass * __cdecl Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseEvent_Hearing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseEvent_Hearing",
               &Z_Registration_Info_UClass_UAISenseEvent_Hearing.InnerSingleton,
               UAISenseEvent_Hearing::StaticRegisterNativesUAISenseEvent_Hearing,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Game",InternalConstructor<UAISenseEvent_Hearing>,
               InternalVTableHelperCtorCaller<UAISenseEvent_Hearing>,local_res8,
               UAISenseEvent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseEvent_Hearing.InnerSingleton;
}

// Z_Construct_UClass_UAISubsystem_NoRegister @ 146ea58c0

UClass * __cdecl Z_Construct_UClass_UAISubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISubsystem",
               &Z_Registration_Info_UClass_UAISubsystem.InnerSingleton,
               UAISubsystem::StaticRegisterNativesUAISubsystem,0x38,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISubsystem>,InternalVTableHelperCtorCaller<UAISubsystem>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISubsystem.InnerSingleton;
}

// Z_Construct_UClass_UCrowdAgentInterface_NoRegister @ 146ea5970

UClass * __cdecl Z_Construct_UClass_UCrowdAgentInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdAgentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"CrowdAgentInterface",
               &Z_Registration_Info_UClass_UCrowdAgentInterface.InnerSingleton,
               UCrowdAgentInterface::StaticRegisterNativesUCrowdAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCrowdAgentInterface>,
               InternalVTableHelperCtorCaller<UCrowdAgentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdAgentInterface.InnerSingleton;
}

// Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister @ 146ea5a30

UClass * __cdecl Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EQSQueryResultSourceInterface",
               &Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.InnerSingleton,
               UEQSQueryResultSourceInterface::StaticRegisterNativesUEQSQueryResultSourceInterface,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEQSQueryResultSourceInterface>,
               InternalVTableHelperCtorCaller<UEQSQueryResultSourceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEQSQueryResultSourceInterface.InnerSingleton;
}

// Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister @ 146ea5af0

UClass * __cdecl Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenericTeamAgentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GenericTeamAgentInterface",
               &Z_Registration_Info_UClass_UGenericTeamAgentInterface.InnerSingleton,
               UGenericTeamAgentInterface::StaticRegisterNativesUGenericTeamAgentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGenericTeamAgentInterface>,
               InternalVTableHelperCtorCaller<UGenericTeamAgentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenericTeamAgentInterface.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EAILockSource @ 146ea5bb0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EAILockSource(void)

{
  if (Z_Registration_Info_UEnum_EAILockSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAILockSource.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EAILockSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAILockSource.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EAIOptionFlag @ 146ea5bf0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EAIOptionFlag(void)

{
  if (Z_Registration_Info_UEnum_EAIOptionFlag.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAIOptionFlag.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAIOptionFlag.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EAIRequestPriority @ 146ea5c30

UEnum * __cdecl Z_Construct_UEnum_AIModule_EAIRequestPriority(void)

{
  if (Z_Registration_Info_UEnum_EAIRequestPriority.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAIRequestPriority.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAIRequestPriority.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EArithmeticKeyOperation @ 146ea5c70

UEnum * __cdecl Z_Construct_UEnum_AIModule_EArithmeticKeyOperation(void)

{
  if (Z_Registration_Info_UEnum_EArithmeticKeyOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EArithmeticKeyOperation.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EArithmeticKeyOperation.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EBasicKeyOperation @ 146ea5cb0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EBasicKeyOperation(void)

{
  if (Z_Registration_Info_UEnum_EBasicKeyOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBasicKeyOperation.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBasicKeyOperation.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EGenericAICheck @ 146ea5cf0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EGenericAICheck(void)

{
  if (Z_Registration_Info_UEnum_EGenericAICheck.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGenericAICheck.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EGenericAICheck_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGenericAICheck.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EPawnActionMoveMode @ 146ea5d30

UEnum * __cdecl Z_Construct_UEnum_AIModule_EPawnActionMoveMode(void)

{
  if (Z_Registration_Info_UEnum_EPawnActionMoveMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPawnActionMoveMode.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPawnActionMoveMode.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_ETeamAttitude @ 146ea5d70

UEnum * __cdecl Z_Construct_UEnum_AIModule_ETeamAttitude(void)

{
  if (Z_Registration_Info_UEnum_ETeamAttitude.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETeamAttitude.InnerSingleton,
               &Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETeamAttitude.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_ETextKeyOperation @ 146ea5db0

UEnum * __cdecl Z_Construct_UEnum_AIModule_ETextKeyOperation(void)

{
  if (Z_Registration_Info_UEnum_ETextKeyOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextKeyOperation.InnerSingleton,
               &Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextKeyOperation.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_FAIDistanceType @ 146ea5df0

UEnum * __cdecl Z_Construct_UEnum_AIModule_FAIDistanceType(void)

{
  if (Z_Registration_Info_UEnum_FAIDistanceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_FAIDistanceType.InnerSingleton,
               &Z_Construct_UEnum_AIModule_FAIDistanceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_FAIDistanceType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAIMoveRequest @ 146ea5e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIMoveRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIMoveRequest.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIMoveRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIMoveRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIMoveRequest.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIMoveRequest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCompactIndexedHandleBase @ 146ea5eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompactIndexedHandleBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompactIndexedHandleBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompactIndexedHandleBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompactIndexedHandleBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompactIndexedHandleBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCompactIndexedHandleBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGenericTeamId @ 146ea5f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGenericTeamId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGenericTeamId.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGenericTeamId.InnerSingleton,
               &Z_Construct_UScriptStruct_FGenericTeamId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGenericTeamId.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGenericTeamId.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIndexedHandleBase @ 146ea5fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIndexedHandleBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIndexedHandleBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIndexedHandleBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FIndexedHandleBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIndexedHandleBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIndexedHandleBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIntervalCountdown @ 146ea6030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIntervalCountdown(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIntervalCountdown.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIntervalCountdown.InnerSingleton,
               &Z_Construct_UScriptStruct_FIntervalCountdown_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIntervalCountdown.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FIntervalCountdown.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSequentialIDBase @ 146ea60b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSequentialIDBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSequentialIDBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSequentialIDBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FSequentialIDBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSequentialIDBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSequentialIDBase.InnerSingleton;
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

// IMPLEMENT_MODULE_AIModule @ 146ea77d0

void __cdecl IMPLEMENT_MODULE_AIModule(void)

{
  return;
}

// AttitudeSolverImpl'' @ 1503e1160

void __cdecl `dynamic_atexit_destructor_for_'FGenericTeamId::AttitudeSolverImpl__(void)

{
  longlong *plVar1;
  
  if (FGenericTeamId::AttitudeSolverImpl._0_8_ != 0) {
    plVar1 = (longlong *)&FGenericTeamId::AttitudeSolverImpl.field_0x10;
    if (FGenericTeamId::AttitudeSolverImpl._40_8_ != 0) {
      plVar1 = (longlong *)FGenericTeamId::AttitudeSolverImpl._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x0001503e1182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// OnDebugLocked'' @ 1503e1190

void __cdecl `dynamic_atexit_destructor_for_'FBehaviorTreeDelegates::OnDebugLocked__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FBehaviorTreeDelegates::OnDebugLocked._8_8_,
             FBehaviorTreeDelegates::OnDebugLocked._16_4_);
  if (FBehaviorTreeDelegates::OnDebugLocked._8_8_ != 0) {
    FMemory::Free((void *)FBehaviorTreeDelegates::OnDebugLocked._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FBehaviorTreeDelegates::OnDebugLocked);
  return;
}

// OnDebugSelected'' @ 1503e11d0

void __cdecl `dynamic_atexit_destructor_for_'FBehaviorTreeDelegates::OnDebugSelected__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FBehaviorTreeDelegates::OnDebugSelected._8_8_,
             FBehaviorTreeDelegates::OnDebugSelected._16_4_);
  if (FBehaviorTreeDelegates::OnDebugSelected._8_8_ != 0) {
    FMemory::Free((void *)FBehaviorTreeDelegates::OnDebugSelected._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FBehaviorTreeDelegates::OnDebugSelected);
  return;
}

// OnTreeStarted'' @ 1503e1210

void __cdecl `dynamic_atexit_destructor_for_'FBehaviorTreeDelegates::OnTreeStarted__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FBehaviorTreeDelegates::OnTreeStarted._8_8_,
             FBehaviorTreeDelegates::OnTreeStarted._16_4_);
  if (FBehaviorTreeDelegates::OnTreeStarted._8_8_ != 0) {
    FMemory::Free((void *)FBehaviorTreeDelegates::OnTreeStarted._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FBehaviorTreeDelegates::OnTreeStarted);
  return;
}

// `dynamic_atexit_destructor_for_'AISystemExecInstance'' @ 1503e1250

void __cdecl _dynamic_atexit_destructor_for__AISystemExecInstance__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&AISystemExecInstance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarApplyAuxNodesFromFailedSearches'' @ 1503e1270

void __cdecl
UE::BehaviorTree::_dynamic_atexit_destructor_for__CVarApplyAuxNodesFromFailedSearches__(void)

{
  CVarApplyAuxNodesFromFailedSearches._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarApplyAuxNodesFromFailedSearches);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBTRecordFrameSearchTimes'' @ 1503e1290

void __cdecl _dynamic_atexit_destructor_for__CVarBTRecordFrameSearchTimes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBTRecordFrameSearchTimes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest'' @ 1503e12b0

void __cdecl
UE::BehaviorTree::
_dynamic_atexit_destructor_for__CVarEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest__
          (void)

{
  CVarEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnsureOnScheduleExecutionUpdateWithInvalidExecutionRequest);
  return;
}

// `dynamic_atexit_destructor_for_'ColorNameDisabled'' @ 1503e12d0

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

// `dynamic_atexit_destructor_for_'ColorNameDisabledActiveRow'' @ 1503e12f0

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

// `dynamic_atexit_destructor_for_'ColorNameEnabled'' @ 1503e1310

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

// `dynamic_atexit_destructor_for_'ColorNameEnabledActiveRow'' @ 1503e1330

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

// `dynamic_atexit_destructor_for_'ColorNameInput'' @ 1503e1350

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

// `dynamic_atexit_destructor_for_'LogAIModule'' @ 1503e1370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAIModule__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAIModule);
  return;
}

// `dynamic_atexit_destructor_for_'LogAINavigation'' @ 1503e1390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAINavigation__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAINavigation);
  return;
}

// `dynamic_atexit_destructor_for_'LogAISub'' @ 1503e13b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAISub__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAISub);
  return;
}

// `dynamic_atexit_destructor_for_'LogBehaviorTree'' @ 1503e13d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBehaviorTree__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBehaviorTree);
  return;
}

// `dynamic_atexit_destructor_for_'LogManagerInstanceTracker'' @ 1503e13f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogManagerInstanceTracker__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogManagerInstanceTracker);
  return;
}

// `dynamic_atexit_destructor_for_'LogTestAI'' @ 1503e1410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTestAI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTestAI);
  return;
}

// `dynamic_atexit_destructor_for_'ResourceIDs'' @ 1503e1430

void __cdecl FAIResources::_dynamic_atexit_destructor_for__ResourceIDs__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ResourceIDs.AllocatorInstance.Data;
  if (ResourceIDs.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ResourceIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Separator'' @ 1503e1450

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

// `dynamic_atexit_destructor_for_'SeparatorSpace'' @ 1503e1470

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

