// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 495

// BPSenseToSenseID'' @ 1410bc180

void __cdecl `dynamic_initializer_for_'UAISense_Blueprint::BPSenseToSenseID__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UAISense_Blueprint::BPSenseToSenseID__);
  return;
}

// NullListener'' @ 1410bc1a0

void __cdecl `dynamic_initializer_for_'FPerceptionListener::NullListener__(void)

{
  FPerceptionListener::NullListener.bHasStimulusToProcess = 0;
  FPerceptionListener::NullListener.CachedLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FPerceptionListener::NullListener.CachedLocation.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FPerceptionListener::NullListener.CachedLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FPerceptionListener::NullListener.CachedDirection.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  FPerceptionListener::NullListener.CachedDirection.field0_0x0._s_0.X =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  FPerceptionListener::NullListener.CachedDirection.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  FAIGenericID<FPerceptionListenerCounter>::InvalidID();
  return;
}

// Type'' @ 1410bc200

void __cdecl `dynamic_initializer_for_'FMetaNavMeshPath::Type__(void)

{
  FNavPathType::NextUniqueId = FNavPathType::NextUniqueId + 1;
  FMetaNavMeshPath::Type.Id = FNavPathType::NextUniqueId;
  return;
}

// `dynamic_initializer_for_'CVarDebugSelectedActors'' @ 1410bc220

void __cdecl FCrowdDebug::_dynamic_initializer_for__CVarDebugSelectedActors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugSelectedActors,L"ai.crowd.DebugSelectedActors",&DebugSelectedActors,
             L"Enable debug drawing for selected crowd agent.\n0: Disable, 1: Enable",0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugSelectedActors__);
  return;
}

// `dynamic_initializer_for_'CVarDebugVisLog'' @ 1410bc270

void __cdecl FCrowdDebug::_dynamic_initializer_for__CVarDebugVisLog__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugVisLog,L"ai.crowd.DebugVisLog",&DebugVisLog,
             L"Enable detailed vislog recording for all crowd agents.\n0: Disable, 1: Enable",0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugVisLog__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugBoundaries'' @ 1410bc2c0

void __cdecl FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugBoundaries__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugBoundaries,L"ai.crowd.DrawDebugBoundaries",&DrawDebugBoundaries,
             L"Draw shared navmesh boundaries used by crowd simulation.\n0: Disable, 1: Enable",0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugBoundaries__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugCollisionSegments'' @ 1410bc310

void __cdecl FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugCollisionSegments__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugCollisionSegments,L"ai.crowd.DrawDebugCollisionSegments",
             &DrawDebugCollisionSegments,
             L"Draw colliding navmesh edges, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugCollisionSegments__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugCorners'' @ 1410bc360

void __cdecl FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugCorners__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugCorners,L"ai.crowd.DrawDebugCorners",&DrawDebugCorners,
             L"Draw path corners data, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugCorners__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugNeighbors'' @ 1410bc3b0

void __cdecl FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugNeighbors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugNeighbors,L"ai.crowd.DrawDebugNeighbors",&DrawDebugNeighbors,
             L"Draw current neighbors data, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugNeighbors__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugPath'' @ 1410bc400

void __cdecl FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugPath__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugPath,L"ai.crowd.DrawDebugPath",&DrawDebugPath,
             L"Draw active paths, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable",0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugPath__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugPathOptimization'' @ 1410bc450

void __cdecl FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugPathOptimization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugPathOptimization,L"ai.crowd.DrawDebugPathOptimization",
             &DrawDebugPathOptimization,
             L"Draw path optimization data, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugPathOptimization__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugVelocityObstacles'' @ 1410bc4a0

void __cdecl FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugVelocityObstacles__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawDebugVelocityObstacles,L"ai.crowd.DrawDebugVelocityObstacles",
             &DrawDebugVelocityObstacles,
             L"Draw velocity obstacle sampling, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugVelocityObstacles__);
  return;
}

// `dynamic_initializer_for_'CVars_GameplayDebuggerCategory_Navmesh'' @ 1410bc4f0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVars_GameplayDebuggerCategory_Navmesh__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (CVars_GameplayDebuggerCategory_Navmesh,L"ai.debug.nav.DrawExcludedFlags",
             &FGameplayDebuggerCategoryNavmeshTweakables::bDrawExcludedFlags,
             L"If we want to mark \"forbidden\" nav polys while debug-drawing.",0);
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (CVars_GameplayDebuggerCategory_Navmesh + 1,L"ai.debug.nav.DisplaySize",
             &FGameplayDebuggerCategoryNavmeshTweakables::DisplaySize,
             L"Area to display in tiles (DisplaySize x DisplaySize) in gameplay debugger. Size will round up to an odd number of tiles. Culling distance can be modified using \'ai.debug.nav.DrawDistance\'."
             ,0);
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (CVars_GameplayDebuggerCategory_Navmesh + 2,L"ai.debug.nav.RefreshInterval",
             &FGameplayDebuggerCategoryNavmeshTweakables::RefreshInterval,
             L"Interval (in seconds) at which data will be collected.",0);
  atexit(_dynamic_atexit_destructor_for__CVars_GameplayDebuggerCategory_Navmesh__);
  return;
}

// `dynamic_initializer_for_'ColorNameDisabled'' @ 1410bc590

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameDisabled__(void)

{
  ::FString::FString(&ColorNameDisabled,L"grey");
  atexit(_dynamic_atexit_destructor_for__ColorNameDisabled__);
  return;
}

// `dynamic_initializer_for_'ColorNameDisabledActiveRow'' @ 1410bc5c0

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameDisabledActiveRow__(void)

{
  ::FString::FString(&ColorNameDisabledActiveRow,L"black");
  atexit(_dynamic_atexit_destructor_for__ColorNameDisabledActiveRow__);
  return;
}

// `dynamic_initializer_for_'ColorNameEnabled'' @ 1410bc5f0

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameEnabled__(void)

{
  ::FString::FString(&ColorNameEnabled,L"green");
  atexit(_dynamic_atexit_destructor_for__ColorNameEnabled__);
  return;
}

// `dynamic_initializer_for_'ColorNameEnabledActiveRow'' @ 1410bc620

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameEnabledActiveRow__(void)

{
  ::FString::FString(&ColorNameEnabledActiveRow,L"green");
  atexit(_dynamic_atexit_destructor_for__ColorNameEnabledActiveRow__);
  return;
}

// `dynamic_initializer_for_'ColorNameInput'' @ 1410bc650

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameInput__(void)

{
  ::FString::FString(&ColorNameInput,L"white");
  atexit(_dynamic_atexit_destructor_for__ColorNameInput__);
  return;
}

// `dynamic_initializer_for_'DebugTimeSliceDefaultSectionName'' @ 1410bc680

void __cdecl FNavigationSystem::_dynamic_initializer_for__DebugTimeSliceDefaultSectionName__(void)

{
  ::FName::FName(&DebugTimeSliceDefaultSectionName,L"DefaultSection");
  return;
}

// `dynamic_initializer_for_'LogAIPerception'' @ 1410bc6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAIPerception__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAIPerception,L"LogAIPerception",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAIPerception__);
  return;
}

// `dynamic_initializer_for_'LogCrowdFollowing'' @ 1410bc6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCrowdFollowing__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCrowdFollowing,L"LogCrowdFollowing",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogCrowdFollowing__);
  return;
}

// `dynamic_initializer_for_'LogPathFollowing'' @ 1410bc720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPathFollowing__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPathFollowing,L"LogPathFollowing",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogPathFollowing__);
  return;
}

// `dynamic_initializer_for_'NAME_ANavLinkProxy_ReceiveSmartLinkReached'' @ 1410bc760

void __cdecl _dynamic_initializer_for__NAME_ANavLinkProxy_ReceiveSmartLinkReached__(void)

{
  FName::FName(&NAME_ANavLinkProxy_ReceiveSmartLinkReached,L"ReceiveSmartLinkReached");
  return;
}

// `dynamic_initializer_for_'NAME_UAISense_Blueprint_K2_OnNewPawn'' @ 1410bc780

void __cdecl _dynamic_initializer_for__NAME_UAISense_Blueprint_K2_OnNewPawn__(void)

{
  FName::FName(&NAME_UAISense_Blueprint_K2_OnNewPawn,L"K2_OnNewPawn");
  return;
}

// `dynamic_initializer_for_'NAME_UAISense_Blueprint_OnListenerRegistered'' @ 1410bc7a0

void __cdecl _dynamic_initializer_for__NAME_UAISense_Blueprint_OnListenerRegistered__(void)

{
  FName::FName(&NAME_UAISense_Blueprint_OnListenerRegistered,L"OnListenerRegistered");
  return;
}

// `dynamic_initializer_for_'NAME_UAISense_Blueprint_OnListenerUnregistered'' @ 1410bc7c0

void __cdecl _dynamic_initializer_for__NAME_UAISense_Blueprint_OnListenerUnregistered__(void)

{
  FName::FName(&NAME_UAISense_Blueprint_OnListenerUnregistered,L"OnListenerUnregistered");
  return;
}

// `dynamic_initializer_for_'NAME_UAISense_Blueprint_OnListenerUpdated'' @ 1410bc7e0

void __cdecl _dynamic_initializer_for__NAME_UAISense_Blueprint_OnListenerUpdated__(void)

{
  FName::FName(&NAME_UAISense_Blueprint_OnListenerUpdated,L"OnListenerUpdated");
  return;
}

// `dynamic_initializer_for_'NAME_UAISense_Blueprint_OnUpdate'' @ 1410bc800

void __cdecl _dynamic_initializer_for__NAME_UAISense_Blueprint_OnUpdate__(void)

{
  FName::FName(&NAME_UAISense_Blueprint_OnUpdate,L"OnUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UGeneratedNavLinksProxy_ReceiveSmartLinkReached'' @ 1410bc820

void __cdecl _dynamic_initializer_for__NAME_UGeneratedNavLinksProxy_ReceiveSmartLinkReached__(void)

{
  FName::FName(&NAME_UGeneratedNavLinksProxy_ReceiveSmartLinkReached,L"ReceiveSmartLinkReached");
  return;
}

// `dynamic_initializer_for_'Separator'' @ 1410bc840

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__Separator__(void)

{
  ::FString::FString(&Separator,L"{white} | ");
  atexit(_dynamic_atexit_destructor_for__Separator__);
  return;
}

// `dynamic_initializer_for_'SeparatorSpace'' @ 1410bc870

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__SeparatorSpace__(void)

{
  ::FString::FString(&SeparatorSpace,L"  ");
  atexit(_dynamic_atexit_destructor_for__SeparatorSpace__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_AgentUpdateTime'' @ 1410bc8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_AgentUpdateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_AgentUpdateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar1,
               L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_NumAgents'' @ 1410bc930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_NumAgents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_NumAgents == (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_NumAgents>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_NumAgents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_NumAgents,*pFVar1,L"Num Agents",
               "STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepAvoidanceTime'' @ 1410bc9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepAvoidanceTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepAvoidanceTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepAvoidanceTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepAvoidanceTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepAvoidanceTime,*pFVar1,
               L"Step: avoidance","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepCollisionsTime'' @ 1410bca50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepCollisionsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepCollisionsTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepCollisionsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepCollisionsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepCollisionsTime,*pFVar1,
               L"Step: collisions","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepComponentsTime'' @ 1410bcae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepComponentsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepComponentsTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepComponentsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepComponentsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepComponentsTime,*pFVar1,
               L"Step: components","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepCorridorTime'' @ 1410bcb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepCorridorTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepCorridorTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepCorridorTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepCorridorTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepCorridorTime,*pFVar1,
               L"Step: corridor update","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepMovementTime'' @ 1410bcc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepMovementTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepMovementTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepMovementTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepMovementTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepMovementTime,*pFVar1,
               L"Step: movement","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepNavLinkTime'' @ 1410bcc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepNavLinkTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepNavLinkTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepNavLinkTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepNavLinkTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepNavLinkTime,*pFVar1,
               L"Step: navlinks","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepNextPointTime'' @ 1410bcd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepNextPointTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepNextPointTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepNextPointTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepNextPointTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepNextPointTime,*pFVar1,
               L"Step: next point","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepPathsTime'' @ 1410bcdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepPathsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepPathsTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepPathsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepPathsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepPathsTime,*pFVar1,
               L"Step: paths","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepProximityTime'' @ 1410bce40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepProximityTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepProximityTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepProximityTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepProximityTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepProximityTime,*pFVar1,
               L"Step: proximity","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_StepSteeringTime'' @ 1410bced0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_StepSteeringTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_StepSteeringTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepSteeringTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_StepSteeringTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepSteeringTime,*pFVar1,
               L"Step: steering","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Crowd_Tick'' @ 1410bcf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Crowd_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Crowd_Tick == (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Crowd_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_Tick,*pFVar1,
               L"Nav Tick: crowd simulation","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_PercepComp_ProcessStimuli'' @ 1410bcff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_PercepComp_ProcessStimuli__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_PercepComp_ProcessStimuli ==
      (FThreadSafeStaticStat<FStat_STAT_AI_PercepComp_ProcessStimuli>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_PercepComp_ProcessStimuli");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_PercepComp_ProcessStimuli,*pFVar1,
               L"Perception Component ProcessStimuli","STATGROUP_AI","STATCAT_Advanced",L"AI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_PerceptionSys'' @ 1410bd080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_PerceptionSys__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_PerceptionSys == (FThreadSafeStaticStat<FStat_STAT_AI_PerceptionSys>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_PerceptionSys");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_PerceptionSys,*pFVar1,
               L"Perception System","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Perception_ProcessStim'' @ 1410bd110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Perception_ProcessStim__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Perception_ProcessStim ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Perception_ProcessStim>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Perception_ProcessStim");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Perception_ProcessStim,*pFVar1,
               L"Perception System - Process Stim","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sense_Sight'' @ 1410bd1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sense_Sight__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sense_Sight == (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sense_Sight");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight,*pFVar1,
               L"Perception Sense: Sight","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sense_Sight_ComputeVisibility'' @ 1410bd230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sense_Sight_ComputeVisibility__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sense_Sight_ComputeVisibility ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ComputeVisibility>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sense_Sight_ComputeVisibility");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_ComputeVisibility,*pFVar1,
               L"Perception Sense: Sight, Compute visibility","STATGROUP_AI","STATCAT_Advanced",
               L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sense_Sight_ListenerUpdate'' @ 1410bd2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sense_Sight_ListenerUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sense_Sight_ListenerUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ListenerUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sense_Sight_ListenerUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_ListenerUpdate,*pFVar1,
               L"Perception Sense: Sight, Listener Update","STATGROUP_AI","STATCAT_Advanced",L"AI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery'' @ 1410bd350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_ProcessPendingQuery>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sense_Sight_ProcessPendingQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_ProcessPendingQuery,*pFVar1
               ,L"Perception Sense: Sight, Process pending result","STATGROUP_AI","STATCAT_Advanced"
               ,L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sense_Sight_QueryOperations'' @ 1410bd3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sense_Sight_QueryOperations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sense_Sight_QueryOperations ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_QueryOperations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sense_Sight_QueryOperations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_QueryOperations,*pFVar1,
               L"Perception Sense: Sight, Query operations","STATGROUP_AI","STATCAT_Advanced",L"AI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sense_Sight_RegisterTarget'' @ 1410bd470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sense_Sight_RegisterTarget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sense_Sight_RegisterTarget ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RegisterTarget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sense_Sight_RegisterTarget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_RegisterTarget,*pFVar1,
               L"Perception Sense: Sight, Register Target","STATGROUP_AI","STATCAT_Advanced",L"AI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sense_Sight_RemoveByListener'' @ 1410bd500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sense_Sight_RemoveByListener__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sense_Sight_RemoveByListener ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RemoveByListener>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sense_Sight_RemoveByListener");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_RemoveByListener,*pFVar1,
               L"Perception Sense: Sight, Remove By Listener","STATGROUP_AI","STATCAT_Advanced",
               L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sense_Sight_RemoveToTarget'' @ 1410bd590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sense_Sight_RemoveToTarget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sense_Sight_RemoveToTarget ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_RemoveToTarget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sense_Sight_RemoveToTarget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_RemoveToTarget,*pFVar1,
               L"Perception Sense: Sight, Remove To Target","STATGROUP_AI","STATCAT_Advanced",L"AI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sense_Sight_UpdateSort'' @ 1410bd620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sense_Sight_UpdateSort__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sense_Sight_UpdateSort ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Sense_Sight_UpdateSort>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sense_Sight_UpdateSort");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sense_Sight_UpdateSort,*pFVar1,
               L"Perception Sense: Sight, Update Sort","STATGROUP_AI","STATCAT_Advanced",L"AI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData'' @ 1410bd6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData ==
      (FThreadSafeStaticStat<FStat_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData>
       )0x0) {
    pFVar1 = FName::FName(local_res8,
                          "STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FSimpleDelegateGraphTask_RequestingRemovalOfDeadPerceptionData,*pFVar1,
               L"Requesting UAIPerceptionComponent::RemoveDeadData call from within a const function"
               ,"STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h__Script_AIModule_3857947388'' @ 1410bd740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h__Script_AIModule_3857947388__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h__Script_AIModule_435503497'' @ 1410bd780

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h__Script_AIModule_435503497__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h__Script_AIModule_2330844190'' @ 1410bd7c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h__Script_AIModule_2330844190__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h__Script_AIModule_2583927803'' @ 1410bd800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h__Script_AIModule_2583927803__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h__Script_AIModule_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h__Script_AIModule_1113713740'' @ 1410bd850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h__Script_AIModule_1113713740__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GeneratedNavLinksProxy_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h__Script_AIModule_3595788607'' @ 1410bd890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h__Script_AIModule_3595788607__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavFilter_AIControllerDefault_h__Script_AIModule_3863878570'' @ 1410bd8d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavFilter_AIControllerDefault_h__Script_AIModule_3863878570__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavFilter_AIControllerDefault_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h__Script_AIModule_21497316'' @ 1410bd910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h__Script_AIModule_21497316__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h__Script_AIModule_3184624183'' @ 1410bd950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h__Script_AIModule_3184624183__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h__Script_AIModule_2296725535'' @ 1410bd990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h__Script_AIModule_2296725535__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h__Script_AIModule_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h__Script_AIModule_2049769888'' @ 1410bd9e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h__Script_AIModule_2049769888__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h__Script_AIModule_2136511043'' @ 1410bda20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h__Script_AIModule_2136511043__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h__Script_AIModule_1904491198'' @ 1410bda60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h__Script_AIModule_1904491198__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h__Script_AIModule_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h__Script_AIModule_916930133'' @ 1410bdab0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h__Script_AIModule_916930133__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h__Script_AIModule_1651559919'' @ 1410bdaf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h__Script_AIModule_1651559919__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h__Script_AIModule_2554326596'' @ 1410bdb30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h__Script_AIModule_2554326596__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h__Script_AIModule_1274025301'' @ 1410bdb70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h__Script_AIModule_1274025301__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h__Script_AIModule_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h__Script_AIModule_1675348164'' @ 1410bdbc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h__Script_AIModule_1675348164__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h__Script_AIModule_328207812'' @ 1410bdc00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h__Script_AIModule_328207812__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h__Script_AIModule_2403782493'' @ 1410bdc40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h__Script_AIModule_2403782493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h__Script_AIModule_2043652043'' @ 1410bdc80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h__Script_AIModule_2043652043__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h__Script_AIModule_3825375140'' @ 1410bdcd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h__Script_AIModule_3825375140__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h__Script_AIModule_3540691380'' @ 1410bdd20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h__Script_AIModule_3540691380__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h__Script_AIModule_1346155954'' @ 1410bdd70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h__Script_AIModule_1346155954__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h__Script_AIModule_2153574020'' @ 1410bddc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h__Script_AIModule_2153574020__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UAIPerceptionStimuliSourceComponent @ 146f82720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIPerceptionStimuliSourceComponent(void)

{
  if (Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.OuterSingleton,
               &Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.OuterSingleton;
}

// Z_Construct_UClass_UAISense_Prediction @ 146f82760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISense_Prediction(void)

{
  if (Z_Registration_Info_UClass_UAISense_Prediction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISense_Prediction.OuterSingleton,
               &Z_Construct_UClass_UAISense_Prediction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISense_Prediction.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAIPredictionEvent @ 146f827a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIPredictionEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIPredictionEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIPredictionEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIPredictionEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIPredictionEvent.InnerSingleton;
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

// Z_Construct_UClass_UAISense_Damage_NoRegister @ 146f82820

UClass * __cdecl Z_Construct_UClass_UAISense_Damage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Damage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Damage",
               &Z_Registration_Info_UClass_UAISense_Damage.InnerSingleton,
               UAISense_Damage::StaticRegisterNativesUAISense_Damage,0xa0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISense_Damage>,InternalVTableHelperCtorCaller<UAISense_Damage>,
               local_res8,UAISense::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Damage.InnerSingleton;
}

// NewStructOps @ 146f82920

void * __cdecl Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIPredictionEvent,&UE::CoreUObject::Private::Construct<FAIPredictionEvent>,&UE::CoreUObject::Private::ConstructForTests<FAIPredictionEvent>,&UE::CoreUObject::Private::Destruct<FAIPredictionEvent>,&UE::CoreUObject::Private::Copy<FAIPredictionEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense @ 146f82960

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem @ 146f829a0

UFunction * __cdecl
Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem @ 146f829e0

UFunction * __cdecl
Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense @ 146f82a20

UFunction * __cdecl
Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoRegisterAsSource_SetBit @ 146f82a60

void __cdecl
Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc0) = *(uint *)((longlong)param_1 + 0xc0) | 1;
  return;
}

// Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent @ 146f82a70

UFunction * __cdecl Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent @ 146f82b70

UFunction * __cdecl Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AGridPathAIController @ 146f82c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AGridPathAIController(void)

{
  if (Z_Registration_Info_UClass_AGridPathAIController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AGridPathAIController.OuterSingleton,
               &Z_Construct_UClass_AGridPathAIController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AGridPathAIController.OuterSingleton;
}

// Z_Construct_UClass_UAIHotSpotManager @ 146f82f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIHotSpotManager(void)

{
  if (Z_Registration_Info_UClass_UAIHotSpotManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIHotSpotManager.OuterSingleton,
               &Z_Construct_UClass_UAIHotSpotManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIHotSpotManager.OuterSingleton;
}

// Z_Construct_UClass_UAISense_Sight @ 146f83050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISense_Sight(void)

{
  if (Z_Registration_Info_UClass_UAISense_Sight.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISense_Sight.OuterSingleton,
               &Z_Construct_UClass_UAISense_Sight_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISense_Sight.OuterSingleton;
}

// NewStructOps @ 146f83090

void * __cdecl Z_Construct_UScriptStruct_FAISightEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAISightEvent,&UE::CoreUObject::Private::Construct<FAISightEvent>,&UE::CoreUObject::Private::ConstructForTests<FAISightEvent>,&UE::CoreUObject::Private::Destruct<FAISightEvent>,&UE::CoreUObject::Private::Copy<FAISightEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAISenseConfig_Damage @ 146f83190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Damage(void)

{
  if (Z_Registration_Info_UClass_UAISenseConfig_Damage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseConfig_Damage.OuterSingleton,
               &Z_Construct_UClass_UAISenseConfig_Damage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Damage.OuterSingleton;
}

// NewProp_bUseAsynchronousTraceForDefaultSightQueries_SetBit @ 146f831d0

void __cdecl
Z_Construct_UClass_UAISense_Sight_Statics::
NewProp_bUseAsynchronousTraceForDefaultSightQueries_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x194) = 1;
  return;
}

// Z_Construct_UEnum_AIModule_EAISenseNotifyType @ 146f832a0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EAISenseNotifyType(void)

{
  if (Z_Registration_Info_UEnum_EAISenseNotifyType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAISenseNotifyType.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EAISenseNotifyType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAISenseNotifyType.InnerSingleton;
}

// EAISenseNotifyType_StaticEnum @ 146f832e0

UEnum * __cdecl EAISenseNotifyType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAISenseNotifyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAISenseNotifyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAISenseNotifyType,(UObject *)pUVar1,
                       L"EAISenseNotifyType");
  }
  return Z_Registration_Info_UEnum_EAISenseNotifyType.OuterSingleton;
}

// NewProp_bSuccessfullySensed_SetBit @ 146f83320

void __cdecl
Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) | 2;
  return;
}

// NewStructOps @ 146f83330

void * __cdecl Z_Construct_UScriptStruct_FAIStimulus_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIStimulus,&UE::CoreUObject::Private::Construct<FAIStimulus>,&UE::CoreUObject::Private::ConstructForTests<FAIStimulus>,&UE::CoreUObject::Private::Destruct<FAIStimulus>,&UE::CoreUObject::Private::Copy<FAIStimulus>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAISenseEvent @ 146f83430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISenseEvent(void)

{
  if (Z_Registration_Info_UClass_UAISenseEvent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISenseEvent.OuterSingleton,
               &Z_Construct_UClass_UAISenseEvent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISenseEvent.OuterSingleton;
}

// NewProp_bDetectEnemies_SetBit @ 146f83470

void __cdecl
Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bDetectNeutrals_SetBit @ 146f83480

void __cdecl
Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bDetectFriendlies_SetBit @ 146f83490

void __cdecl
Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewStructOps @ 146f834a0

void * __cdecl Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAISenseAffiliationFilter,&UE::CoreUObject::Private::Construct<FAISenseAffiliationFilter>,&UE::CoreUObject::Private::ConstructForTests<FAISenseAffiliationFilter>,&UE::CoreUObject::Private::Destruct<FAISenseAffiliationFilter>,&UE::CoreUObject::Private::Copy<FAISenseAffiliationFilter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAISense_Blueprint @ 146f835a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISense_Blueprint(void)

{
  if (Z_Registration_Info_UClass_UAISense_Blueprint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISense_Blueprint.OuterSingleton,
               &Z_Construct_UClass_UAISense_Blueprint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISense_Blueprint.OuterSingleton;
}

// Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors @ 146f835e0

UFunction * __cdecl Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146f836a0

void * __cdecl Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRecastGraphWrapper,&UE::CoreUObject::Private::Construct<FRecastGraphWrapper>,&UE::CoreUObject::Private::ConstructForTests<FRecastGraphWrapper>,&UE::CoreUObject::Private::Destruct<FRecastGraphWrapper>,&UE::CoreUObject::Private::Copy<FRecastGraphWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAIPerceptionComponent @ 146f839a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIPerceptionComponent(void)

{
  if (Z_Registration_Info_UClass_UAIPerceptionComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIPerceptionComponent.OuterSingleton,
               &Z_Construct_UClass_UAIPerceptionComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIPerceptionComponent.OuterSingleton;
}

// Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature @ 146f839e0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature @ 146f83a20

UFunction * __cdecl
Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature @ 146f83a60

UFunction * __cdecl
Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature @ 146f83aa0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo @ 146f83ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorPerceptionBlueprintInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorPerceptionBlueprintInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorPerceptionBlueprintInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorPerceptionBlueprintInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo @ 146f83b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorPerceptionUpdateInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorPerceptionUpdateInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorPerceptionUpdateInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorPerceptionUpdateInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAIStimulus @ 146f83be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIStimulus(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIStimulus.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIStimulus.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIStimulus_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIStimulus.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIStimulus.InnerSingleton;
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

// Z_Construct_UClass_UAIPerceptionComponent_NoRegister @ 146f83c60

UClass * __cdecl Z_Construct_UClass_UAIPerceptionComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionComponent",
               &Z_Registration_Info_UClass_UAIPerceptionComponent.InnerSingleton,
               UAIPerceptionComponent::StaticRegisterNativesUAIPerceptionComponent,0x1d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAIPerceptionComponent>,
               InternalVTableHelperCtorCaller<UAIPerceptionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionComponent.InnerSingleton;
}

// Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents @ 146f83db0

UFunction * __cdecl Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCrowdFollowingComponent @ 146f83e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCrowdFollowingComponent(void)

{
  if (Z_Registration_Info_UClass_UCrowdFollowingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCrowdFollowingComponent.OuterSingleton,
               &Z_Construct_UClass_UCrowdFollowingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCrowdFollowingComponent.OuterSingleton;
}

// Z_Construct_UClass_UPathFollowingComponent @ 146f83e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPathFollowingComponent(void)

{
  if (Z_Registration_Info_UClass_UPathFollowingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPathFollowingComponent.OuterSingleton,
               &Z_Construct_UClass_UPathFollowingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPathFollowingComponent.OuterSingleton;
}

// Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn @ 146f83eb0

UFunction * __cdecl Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSuspend_SetBit @ 146f83ef0

void __cdecl
Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::NewProp_bSuspend_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UGeneratedNavLinksProxy @ 146f83f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeneratedNavLinksProxy(void)

{
  if (Z_Registration_Info_UClass_UGeneratedNavLinksProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeneratedNavLinksProxy.OuterSingleton,
               &Z_Construct_UClass_UGeneratedNavLinksProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeneratedNavLinksProxy.OuterSingleton;
}

// Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering @ 146f83f80

UFunction * __cdecl Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature @ 146f83fc0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AIModule_LinkReachedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered @ 146f84000

UFunction * __cdecl Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146f84040

void * __cdecl Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorPerceptionUpdateInfo,&UE::CoreUObject::Private::Construct<FActorPerceptionUpdateInfo>,&UE::CoreUObject::Private::ConstructForTests<FActorPerceptionUpdateInfo>,&UE::CoreUObject::Private::Destruct<FActorPerceptionUpdateInfo>,&UE::CoreUObject::Private::Copy<FActorPerceptionUpdateInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered @ 146f840c0

UFunction * __cdecl Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated @ 146f84100

UFunction * __cdecl Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached @ 146f84140

UFunction * __cdecl Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeneratedNavLinksProxy_ReceiveSmartLinkReached_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsHostile_SetBit @ 146f841c0

void __cdecl
Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 1;
  return;
}

// NewProp_bIsFriendly_SetBit @ 146f841d0

void __cdecl
Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsFriendly_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 2;
  return;
}

// NewStructOps @ 146f841e0

void * __cdecl Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorPerceptionBlueprintInfo,&UE::CoreUObject::Private::Construct<FActorPerceptionBlueprintInfo>,&UE::CoreUObject::Private::ConstructForTests<FActorPerceptionBlueprintInfo>,&UE::CoreUObject::Private::Destruct<FActorPerceptionBlueprintInfo>,&UE::CoreUObject::Private::Copy<FActorPerceptionBlueprintInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_AIModule_EPathFollowingAction @ 146f843a0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EPathFollowingAction(void)

{
  if (Z_Registration_Info_UEnum_EPathFollowingAction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPathFollowingAction.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPathFollowingAction.InnerSingleton;
}

// EPathFollowingStatus_StaticEnum @ 146f843e0

UEnum * __cdecl EPathFollowingStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingStatus,(UObject *)pUVar1,
                       L"EPathFollowingStatus");
  }
  return Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton;
}

// EPathFollowingResult_StaticEnum @ 146f84420

UEnum * __cdecl EPathFollowingResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingResult,(UObject *)pUVar1,
                       L"EPathFollowingResult");
  }
  return Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton;
}

// Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll @ 146f84470

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGridPathFollowingComponent @ 146f844c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGridPathFollowingComponent(void)

{
  if (Z_Registration_Info_UClass_UGridPathFollowingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGridPathFollowingComponent.OuterSingleton,
               &Z_Construct_UClass_UGridPathFollowingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGridPathFollowingComponent.OuterSingleton;
}

// Z_Construct_UClass_UNavLocalGridManager_NoRegister @ 146f84510

UClass * __cdecl Z_Construct_UClass_UNavLocalGridManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLocalGridManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"NavLocalGridManager",
               &Z_Registration_Info_UClass_UNavLocalGridManager.InnerSingleton,
               UNavLocalGridManager::StaticRegisterNativesUNavLocalGridManager,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNavLocalGridManager>,
               InternalVTableHelperCtorCaller<UNavLocalGridManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLocalGridManager.InnerSingleton;
}

// EPathFollowingAction_StaticEnum @ 146f845c0

UEnum * __cdecl EPathFollowingAction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingAction,(UObject *)pUVar1,
                       L"EPathFollowingAction");
  }
  return Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146f84600

void __cdecl
Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception @ 146f846c0

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// EPathFollowingRequestResult_StaticEnum @ 146f84700

UEnum * __cdecl EPathFollowingRequestResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult,(UObject *)pUVar1,
                       L"EPathFollowingRequestResult");
  }
  return Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton;
}

// Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors @ 146f84740

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType @ 146f84780

UFunction * __cdecl Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors @ 146f847c0

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination @ 146f84800

UFunction * __cdecl Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors @ 146f84840

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPathFollowingComponent_OnActorBump @ 146f84880

UFunction * __cdecl Z_Construct_UFunction_UPathFollowingComponent_OnActorBump(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered @ 146f848c0

UFunction * __cdecl Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense @ 146f84900

UFunction * __cdecl
Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAISense_Blueprint_OnUpdate @ 146f84940

UFunction * __cdecl Z_Construct_UFunction_UAISense_Blueprint_OnUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f84980

void __cdecl
Z_Construct_UFunction_UAIPerceptionComponent_IsSenseEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAIPerceptionComponent_IsSenseEnabled @ 146f84a10

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionComponent_IsSenseEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_IsSenseEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay @ 146f84c20

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate @ 146f84c60

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 146f84d50

void __cdecl
Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled @ 146f84d60

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAIPerceptionSystem_NoRegister @ 146f84da0

UClass * __cdecl Z_Construct_UClass_UAIPerceptionSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionSystem",
               &Z_Registration_Info_UClass_UAIPerceptionSystem.InnerSingleton,
               UAIPerceptionSystem::StaticRegisterNativesUAIPerceptionSystem,0x140,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UAIPerceptionSystem>,
               InternalVTableHelperCtorCaller<UAIPerceptionSystem>,local_res8,
               UAISubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionSystem.InnerSingleton;
}

// Z_Construct_UClass_UNavFilter_AIControllerDefault @ 146f84fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavFilter_AIControllerDefault(void)

{
  if (Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.OuterSingleton,
               &Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.OuterSingleton;
}

// Z_Construct_UClass_UAISenseEvent_NoRegister @ 146f85270

UClass * __cdecl Z_Construct_UClass_UAISenseEvent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseEvent",
               &Z_Registration_Info_UClass_UAISenseEvent.InnerSingleton,
               UAISenseEvent::StaticRegisterNativesUAISenseEvent,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UAISenseEvent>,InternalVTableHelperCtorCaller<UAISenseEvent>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseEvent.InnerSingleton;
}

// Z_Construct_UClass_UCrowdManager @ 146f85420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCrowdManager(void)

{
  if (Z_Registration_Info_UClass_UCrowdManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCrowdManager.OuterSingleton,
               &Z_Construct_UClass_UCrowdManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCrowdManager.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCrowdAvoidanceConfig @ 146f85460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCrowdAvoidanceConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCrowdAvoidanceConfig.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCrowdAvoidanceConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCrowdAvoidanceConfig.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FCrowdAvoidanceConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern @ 146f854e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCrowdAvoidanceSamplingPattern.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCrowdAvoidanceSamplingPattern.InnerSingleton,
               &Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCrowdAvoidanceSamplingPattern.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCrowdAvoidanceSamplingPattern.InnerSingleton;
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

// NewStructOps @ 146f85560

void * __cdecl Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCrowdAvoidanceConfig,&UE::CoreUObject::Private::Construct<FCrowdAvoidanceConfig>,&UE::CoreUObject::Private::ConstructForTests<FCrowdAvoidanceConfig>,&UE::CoreUObject::Private::Destruct<FCrowdAvoidanceConfig>,&UE::CoreUObject::Private::Copy<FCrowdAvoidanceConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146f855e0

void * __cdecl Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCrowdAvoidanceSamplingPattern,&UE::CoreUObject::Private::Construct<FCrowdAvoidanceSamplingPattern>,&UE::CoreUObject::Private::ConstructForTests<FCrowdAvoidanceSamplingPattern>,&UE::CoreUObject::Private::Destruct<FCrowdAvoidanceSamplingPattern>,&UE::CoreUObject::Private::Copy<FCrowdAvoidanceSamplingPattern>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bResolveCollisions_SetBit @ 146f85660

void __cdecl
Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 0x10;
  return;
}

// Z_Construct_UClass_UAISense_NoRegister @ 146f85670

UClass * __cdecl Z_Construct_UClass_UAISense_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense",&Z_Registration_Info_UClass_UAISense.InnerSingleton,
               UAISense::StaticRegisterNativesUAISense,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISense>,InternalVTableHelperCtorCaller<UAISense>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense.InnerSingleton;
}

// Z_Construct_UClass_UAISense_Damage @ 146f85830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISense_Damage(void)

{
  if (Z_Registration_Info_UClass_UAISense_Damage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISense_Damage.OuterSingleton,
               &Z_Construct_UClass_UAISense_Damage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISense_Damage.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAIDamageEvent @ 146f85870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAIDamageEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAIDamageEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAIDamageEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FAIDamageEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAIDamageEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAIDamageEvent.InnerSingleton;
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

// NewStructOps @ 146f858f0

void * __cdecl Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAIDamageEvent,&UE::CoreUObject::Private::Construct<FAIDamageEvent>,&UE::CoreUObject::Private::ConstructForTests<FAIDamageEvent>,&UE::CoreUObject::Private::Destruct<FAIDamageEvent>,&UE::CoreUObject::Private::Copy<FAIDamageEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAISense @ 146f85930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISense(void)

{
  if (Z_Registration_Info_UClass_UAISense.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISense.OuterSingleton,
               &Z_Construct_UClass_UAISense_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISense.OuterSingleton;
}

// NewProp_bWantsNewPawnNotification_SetBit @ 146f85970

void __cdecl
Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 1;
  return;
}

// NewProp_bAutoRegisterAllPawnsAsSources_SetBit @ 146f85980

void __cdecl
Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 2;
  return;
}

// Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent @ 146f85990

UFunction * __cdecl Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ANavLinkProxy @ 146f85ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANavLinkProxy(void)

{
  if (Z_Registration_Info_UClass_ANavLinkProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANavLinkProxy.OuterSingleton,
               &Z_Construct_UClass_ANavLinkProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANavLinkProxy.OuterSingleton;
}

// Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature @ 146f85b10

UFunction * __cdecl
Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f85b50

void __cdecl
Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UNavLocalGridManager @ 146f85b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavLocalGridManager(void)

{
  if (Z_Registration_Info_UClass_UNavLocalGridManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavLocalGridManager.OuterSingleton,
               &Z_Construct_UClass_UNavLocalGridManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavLocalGridManager.OuterSingleton;
}

// Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents @ 146f85ba0

UFunction * __cdecl Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f85be0

void __cdecl
Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bRebuildGrids_SetBit @ 146f85bf0

void __cdecl
Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::
NewProp_bRebuildGrids_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UClass_UAISense_Hearing @ 146f85c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISense_Hearing(void)

{
  if (Z_Registration_Info_UClass_UAISense_Hearing.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISense_Hearing.OuterSingleton,
               &Z_Construct_UClass_UAISense_Hearing_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISense_Hearing.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAINoiseEvent @ 146f85c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAINoiseEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAINoiseEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAINoiseEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FAINoiseEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAINoiseEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAINoiseEvent.InnerSingleton;
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

// NewStructOps @ 146f85cc0

void * __cdecl Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAINoiseEvent,&UE::CoreUObject::Private::Construct<FAINoiseEvent>,&UE::CoreUObject::Private::ConstructForTests<FAINoiseEvent>,&UE::CoreUObject::Private::Destruct<FAINoiseEvent>,&UE::CoreUObject::Private::Copy<FAINoiseEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled @ 146f85d00

UFunction * __cdecl Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox @ 146f85d40

UFunction * __cdecl Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached @ 146f85d80

UFunction * __cdecl Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRebuildGrids_SetBit @ 146f85dc0

void __cdecl
Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::
NewProp_bRebuildGrids_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing @ 146f85dd0

UFunction * __cdecl Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 146f85e10

void __cdecl
Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule @ 146f85e20

UFunction * __cdecl
Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled @ 146f85e60

UFunction * __cdecl Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent @ 146f85ea0

UFunction * __cdecl Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRebuildGrids_SetBit @ 146f85ee0

void __cdecl
Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::
NewProp_bRebuildGrids_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bSmartLinkIsRelevant_SetBit @ 146f85ef0

void __cdecl
Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f8) = 1;
  return;
}

// Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint @ 146f85f00

UFunction * __cdecl Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRebuildGrids_SetBit @ 146f85f40

void __cdecl
Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::
NewProp_bRebuildGrids_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints @ 146f85f50

UFunction * __cdecl Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f85f90

void __cdecl
Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UClass_UAIPerceptionSystem @ 146f85fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIPerceptionSystem(void)

{
  if (Z_Registration_Info_UClass_UAIPerceptionSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIPerceptionSystem.OuterSingleton,
               &Z_Construct_UClass_UAIPerceptionSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIPerceptionSystem.OuterSingleton;
}

// Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath @ 146f85fe0

UFunction * __cdecl Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRebuildGrids_SetBit @ 146f86020

void __cdecl
Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::
NewProp_bRebuildGrids_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus @ 146f86030

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid @ 146f86070

UFunction * __cdecl Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay @ 146f860b0

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146f860f0

void __cdecl
Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146f861b0

void __cdecl
Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity @ 146f861c0

UFunction * __cdecl Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAIPerceptionListenerInterface @ 146f86200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAIPerceptionListenerInterface(void)

{
  if (Z_Registration_Info_UClass_UAIPerceptionListenerInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAIPerceptionListenerInterface.OuterSingleton,
               &Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAIPerceptionListenerInterface.OuterSingleton;
}

// Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource @ 146f86240

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPathFollowingManager @ 146f86280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPathFollowingManager(void)

{
  if (Z_Registration_Info_UClass_UPathFollowingManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPathFollowingManager.OuterSingleton,
               &Z_Construct_UClass_UPathFollowingManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPathFollowingManager.OuterSingleton;
}

// Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent @ 146f862c0

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent @ 146f86300

UFunction * __cdecl Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// CastChecked<UAISenseConfig_Sight_const_,UAISenseConfig> @ 146f87c00

UAISenseConfig_Sight * __cdecl
CastChecked<UAISenseConfig_Sight_const_,UAISenseConfig>(UAISenseConfig *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UAISenseConfig *)0x0) {
    pFVar3 = GetTypeName<UAISenseConfig_Sight_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UAISenseConfig_Sight *)param_1;
  }
  pFVar3 = GetTypeName<UAISenseConfig_Sight_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UAISenseConfig>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UAISystem,UAISystemBase> @ 146f87cc0

UAISystem * __cdecl CastChecked<UAISystem,UAISystemBase>(UAISystemBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UAISystemBase *)0x0) {
    pFVar3 = GetTypeName<UAISystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UAISystem_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UAISystem *)param_1;
  }
  pFVar3 = GetTypeName<UAISystem>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UAISystemBase>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FAINoiseEvent,FAINoiseEvent,int> @ 146f87e40

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
ConstructItems<FAINoiseEvent,FAINoiseEvent,int>(void *param_1,FAINoiseEvent *param_2,int param_3)

{
  FGenericTeamId *pFVar1;
  TObjectPtr<AActor> TVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  
  if (param_3 != 0) {
    pfVar4 = (float *)((longlong)param_1 + 0x20);
    pfVar5 = &param_2->Loudness;
    do {
      pfVar4[-8] = *(float *)((longlong)pfVar4 + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = *(undefined8 *)(pfVar5 + -4);
      *(double *)(pfVar4 + -6) = (((TVector<double> *)(pfVar5 + -6))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar4 + -4) = uVar3;
      *(undefined8 *)(pfVar4 + -2) = *(undefined8 *)(pfVar5 + -2);
      *pfVar4 = *pfVar5;
      pfVar4[1] = pfVar5[1];
      TVar2.field0_0x0 = (TObjectPtr<AActor>_u_0)((TObjectPtr<AActor>_u_0 *)(pfVar5 + 2))->DebugPtr;
      ((TObjectPtr<AActor>_u_0 *)(pfVar4 + 2))->DebugPtr = (AActor *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      *(FName *)(pfVar4 + 4) = *(FName *)(pfVar5 + 4);
      pFVar1 = (FGenericTeamId *)(pfVar5 + 6);
      pfVar5 = pfVar5 + 0x10;
      *(uchar *)(pfVar4 + 6) = pFVar1->TeamID;
      pfVar4 = pfVar4 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAISightQuery,FAISightQuery,int> @ 146f87ef0

void __cdecl
ConstructItems<FAISightQuery,FAISightQuery,int>(void *param_1,FAISightQuery *param_2,int param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pfVar2 = (float *)((longlong)param_1 + 8);
    pfVar3 = &param_2->Score;
    do {
      pfVar2[-2] = *(float *)((longlong)pfVar2 + (longlong)param_2 + (-8 - (longlong)param_1));
      pfVar2[-1] = pfVar3[-1];
      *pfVar2 = *pfVar3;
      pfVar2[1] = pfVar3[1];
      uVar1 = *(undefined8 *)(pfVar3 + 4);
      *(double *)(pfVar2 + 2) = (((TVector<double> *)(pfVar3 + 2))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar2 + 4) = uVar1;
      *(undefined8 *)(pfVar2 + 6) = *(undefined8 *)(pfVar3 + 6);
      pfVar2[8] = pfVar3[8];
      *(FAISightQuery_u_48 *)(pfVar2 + 10) = *(FAISightQuery_u_48 *)(pfVar3 + 10);
      *(FAISightQuery_u_48 *)(pfVar2 + 10) = *(FAISightQuery_u_48 *)(pfVar3 + 10);
      param_3 = param_3 + -1;
      pfVar2 = pfVar2 + 0xe;
      pfVar3 = pfVar3 + 0xe;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAIStimulus,FAIStimulus,int> @ 146f87f70

void __cdecl
ConstructItems<FAIStimulus,FAIStimulus,int>(void *param_1,FAIStimulus *param_2,int param_3)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  
  if (param_3 != 0) {
    pfVar3 = &param_2->Strength;
    pfVar4 = (float *)((longlong)param_1 + 8);
    do {
      *(float *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pfVar3) =
           ((FAIStimulus *)(pfVar3 + -2))->Age;
      pfVar4[-1] = pfVar3[-1];
      *pfVar4 = *pfVar3;
      uVar1 = *(undefined8 *)(pfVar3 + 4);
      *(double *)(pfVar4 + 2) = (((TVector<double> *)(pfVar3 + 2))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar4 + 4) = uVar1;
      *(undefined8 *)(pfVar4 + 6) = *(undefined8 *)(pfVar3 + 6);
      uVar1 = *(undefined8 *)(pfVar3 + 10);
      *(double *)(pfVar4 + 8) = (((TVector<double> *)(pfVar3 + 8))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar4 + 10) = uVar1;
      *(undefined8 *)(pfVar4 + 0xc) = *(undefined8 *)(pfVar3 + 0xc);
      *(FName *)(pfVar4 + 0xe) = *(FName *)(pfVar3 + 0xe);
      *(uchar *)(pfVar4 + 0x10) = ((FAINamedID<FAISenseCounter> *)(pfVar3 + 0x10))->Index;
      *(FName *)(pfVar4 + 0x11) = *(FName *)(pfVar3 + 0x11);
      fVar2 = (float)(((uint)pfVar4[0x13] ^ (uint)pfVar3[0x13]) & 1 ^ (uint)pfVar4[0x13]);
      pfVar4[0x13] = fVar2;
      fVar2 = (float)(((uint)fVar2 ^ (uint)pfVar3[0x13]) & 2 ^ (uint)fVar2);
      pfVar4[0x13] = fVar2;
      pfVar4[0x13] = (float)(((uint)fVar2 ^ (uint)pfVar3[0x13]) & 4 ^ (uint)fVar2);
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 0x16;
      pfVar4 = pfVar4 + 0x16;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCombinedNavGridData,FCombinedNavGridData,int> @ 146f88040

void __cdecl
ConstructItems<FCombinedNavGridData,FCombinedNavGridData,int>
          (void *param_1,FCombinedNavGridData *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (param_3 != 0) {
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0xb0);
    pTVar4 = &param_2->SourceIds;
    do {
      FNavLocalGridData::FNavLocalGridData
                ((FNavLocalGridData *)
                 ((longlong)param_1 + (-0xb0 - (longlong)param_2) + (longlong)pTVar4),
                 (FNavLocalGridData *)(pTVar4 + -0xb));
      pFVar3->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      iVar2 = pTVar4->ArrayNum;
      _Src = (pTVar4->AllocatorInstance).Data;
      *(int *)&pFVar3[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar3,iVar2,piVar1);
        memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 2);
      }
      pTVar4 = pTVar4 + 0xc;
      pFVar3 = pFVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FAISightQuery,int> @ 146f882a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl DefaultConstructItems<FAISightQuery,int>(void *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 8);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      if ((*(int *)(lVar1 + 0x9d4c) <
           `public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        _InvalidIDInstance = 0xffffffff;
        _Init_thread_footer(&`public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      *(undefined4 *)(puVar3 + -1) = _InvalidIDInstance;
      *(undefined4 *)((longlong)puVar3 + -4) = 0xffffffff;
      *puVar3 = 0;
      uVar2 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
      puVar3[1] = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      puVar3[2] = uVar2;
      uVar2 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
      puVar3[5] = puVar3[5] & 0xfffffffffffffffe;
      puVar3[3] = uVar2;
      *(undefined4 *)(puVar3 + 4) = 0;
      puVar3[5] = GFrameCounter * 2;
      puVar3 = puVar3 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FAIStimulus,int> @ 146f88390

void __cdecl DefaultConstructItems<FAIStimulus,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)((longlong)param_1 + 8);
    do {
      puVar2[-2] = 0x7f7fffff;
      puVar2[-1] = 0x7f7fffff;
      *puVar2 = 0xbf800000;
      uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
      *(double *)(puVar2 + 2) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      *(undefined8 *)(puVar2 + 4) = uVar1;
      *(double *)(puVar2 + 6) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
      uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
      *(double *)(puVar2 + 8) = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      *(undefined8 *)(puVar2 + 10) = uVar1;
      *(double *)(puVar2 + 0xc) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
      *(undefined8 *)(puVar2 + 0xe) = 0;
      FAINamedID<FAISenseCounter>::InvalidID((FAINamedID<FAISenseCounter> *)(puVar2 + 0x10));
      puVar2[0x13] = puVar2[0x13] & 0xfffffff8;
      puVar2 = puVar2 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FCrowdAvoidanceConfig,int> @ 146f88430

void __cdecl DefaultConstructItems<FCrowdAvoidanceConfig,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      puVar1[-2] = 0x3ecccccd;
      puVar1[-1] = 0x40000000;
      *puVar1 = 0x3f400000;
      puVar1[1] = 0x3f400000;
      puVar1[2] = 0x40200000;
      puVar1[3] = 0x40200000;
      puVar1[4] = 0x50207ff;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int> @ 146f88480

void __cdecl
DefaultConstructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x48);
    do {
      *(undefined1 *)(puVar1 + -3) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNavPathPoint,int> @ 146f884b0

void __cdecl DefaultConstructItems<FNavPathPoint,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar2[-4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar2[-3] = uVar1;
      puVar2[-2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar2[1] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 6;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCombinedNavGridData,int> @ 146f886c0

void __cdecl DestructItems<FCombinedNavGridData,int>(FCombinedNavGridData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = &param_1->_padding_;
    do {
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(plVar2 + 5))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if ((void *)*plVar2 != (void *)0x0) {
        FMemory::Free((void *)*plVar2);
      }
      if ((void *)plVar2[-2] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-2]);
      }
      plVar2 = plVar2 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCrowdAvoidanceSamplingPattern,int> @ 146f88720

void __cdecl
DestructItems<FCrowdAvoidanceSamplingPattern,int>
          (FCrowdAvoidanceSamplingPattern *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Radii).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Angles).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int> @ 146f88770

void __cdecl
DestructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int>
          (FGridData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Cells;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNavLocalGridData,int> @ 146f887b0

void __cdecl DestructItems<FNavLocalGridData,int>(FNavLocalGridData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = &param_1->_padding_;
    do {
      pFVar1 = (((TArray<double,TSizedDefaultAllocator<32>_> *)(plVar2 + 2))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if ((void *)*plVar2 != (void *)0x0) {
        FMemory::Free((void *)*plVar2);
      }
      plVar2 = plVar2 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,`UAISense_Sight::Update'::__l6::<lambda_1>_> @ 146f8a490

EForEachResult __cdecl
ForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::Update_::__l6::<lambda_1>_>
          (TArray<FAISightQuery,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> *param_2)

{
  int iVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAISightQuery,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    uVar2 = GFrameCounter - (*(ulonglong *)(pFVar3 + 0x30) >> 1);
    if ((longlong)uVar2 < 0) {
      *(float *)(pFVar3 + 8) = (float)uVar2 + *(float *)(pFVar3 + 0xc);
      pFVar3 = pFVar3 + 0x38;
    }
    else {
      *(float *)(pFVar3 + 8) = (float)(longlong)uVar2 + *(float *)(pFVar3 + 0xc);
      pFVar3 = pFVar3 + 0x38;
    }
  }
  return Continue;
}

// GetFullNameForCastLogError<UAISenseConfig> @ 146f8a540

FString * __cdecl
GetFullNameForCastLogError<UAISenseConfig>(FString *__return_storage_ptr__,UAISenseConfig *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UAISystemBase> @ 146f8a570

FString * __cdecl
GetFullNameForCastLogError<UAISystemBase>(FString *__return_storage_ptr__,UAISystemBase *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetMutableDefault<UAISense> @ 146f8a5a0

UAISense * __cdecl GetMutableDefault<UAISense>(UClass *param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UAISense *pUVar7;
  
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar2 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = UAISense::StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1479,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UAISense *)(*pcVar4)();
      return pUVar7;
    }
  }
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  return (UAISense *)(param_1->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetTypeName<UAISenseConfig_Sight_const_> @ 146f8a640

FString * __cdecl GetTypeName<UAISenseConfig_Sight_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UAISystem> @ 146f8a680

FString * __cdecl GetTypeName<UAISystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UAISystem_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FAISightQuery,int,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_> @ 146f8a6c0

void __cdecl
AlgoImpl::
HeapSortInternal<FAISightQuery,int,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
          (FAISightQuery *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate> param_4)

{
  FAISightQuery *pFVar1;
  FAISightQuery *pFVar2;
  double *pdVar3;
  double *pdVar4;
  FAISightQuery_u_48 FVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  FAIGenericID<FPerceptionListenerCounter> FVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  FAISightQuery *pFVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  
  if (param_2 < 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar22) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar22) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar23 = (param_2 + -2) / 2;
  iVar24 = iVar23 * 2 + 1;
  iVar28 = iVar24;
  iVar29 = iVar23;
  do {
    while (param_2 <= iVar24) {
LAB_146f8a7fe:
      if (iVar29 == 0) {
        iVar24 = param_2 + -1;
        lVar25 = (longlong)iVar24;
        if (0 < iVar24) {
          pFVar26 = param_1 + lVar25;
          do {
            uVar13 = pFVar26->TargetId;
            fVar14 = pFVar26->Score;
            fVar15 = pFVar26->Importance;
            FVar5 = param_1->field6_0x30;
            FVar16.Index = (param_1->ObserverId).Index;
            uVar17 = param_1->TargetId;
            fVar18 = param_1->Score;
            fVar19 = param_1->Importance;
            dVar7 = (param_1->LastSeenLocation).field0_0x0._s_0.X;
            dVar8 = (param_1->LastSeenLocation).field0_0x0._s_0.Y;
            dVar9 = (param_1->LastSeenLocation).field0_0x0._s_0.Z;
            iVar23 = param_1->UserData;
            uVar21 = *(undefined4 *)&param_1->field_0x2c;
            param_1->ObserverId =
                 (FAIGenericID<FPerceptionListenerCounter>)(pFVar26->ObserverId).Index;
            param_1->TargetId = uVar13;
            param_1->Score = fVar14;
            param_1->Importance = fVar15;
            dVar11 = (pFVar26->LastSeenLocation).field0_0x0._s_0.Y;
            (param_1->LastSeenLocation).field0_0x0._s_0.X =
                 (pFVar26->LastSeenLocation).field0_0x0._s_0.X;
            (param_1->LastSeenLocation).field0_0x0._s_0.Y = dVar11;
            iVar28 = pFVar26->UserData;
            uVar20 = *(undefined4 *)&pFVar26->field_0x2c;
            (param_1->LastSeenLocation).field0_0x0._s_0.Z =
                 (pFVar26->LastSeenLocation).field0_0x0._s_0.Z;
            param_1->UserData = iVar28;
            *(undefined4 *)&param_1->field_0x2c = uVar20;
            param_1->field6_0x30 = pFVar26->field6_0x30;
            pFVar26->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)FVar16.Index;
            pFVar26->TargetId = uVar17;
            pFVar26->Score = fVar18;
            pFVar26->Importance = fVar19;
            (pFVar26->LastSeenLocation).field0_0x0._s_0.X = dVar7;
            (pFVar26->LastSeenLocation).field0_0x0._s_0.Y = dVar8;
            (pFVar26->LastSeenLocation).field0_0x0._s_0.Z = dVar9;
            pFVar26->UserData = iVar23;
            *(undefined4 *)&pFVar26->field_0x2c = uVar21;
            pFVar26->field6_0x30 = FVar5;
            iVar28 = 0;
            if (1 < iVar24) {
              do {
                iVar29 = iVar28 * 2;
                iVar23 = iVar29 + 1;
                if (iVar29 + 2 < iVar24) {
                  if (param_1[iVar23].Score <= param_1[(longlong)iVar29 + 2].Score &&
                      param_1[(longlong)iVar29 + 2].Score != param_1[iVar23].Score) {
                    iVar23 = iVar29;
                  }
                  iVar23 = iVar23 + 1;
                }
                if (param_1[iVar28].Score <= param_1[iVar23].Score) break;
                pFVar1 = param_1 + iVar23;
                uVar13 = pFVar1->TargetId;
                fVar14 = pFVar1->Score;
                fVar15 = pFVar1->Importance;
                FVar5 = param_1[iVar28].field6_0x30;
                pFVar2 = param_1 + iVar28;
                FVar16.Index = (pFVar2->ObserverId).Index;
                uVar17 = pFVar2->TargetId;
                fVar18 = pFVar2->Score;
                fVar19 = pFVar2->Importance;
                dVar7 = param_1[iVar28].LastSeenLocation.field0_0x0._s_0.X;
                dVar8 = param_1[iVar28].LastSeenLocation.field0_0x0._s_0.Y;
                pdVar3 = &param_1[iVar28].LastSeenLocation.field0_0x0._s_0.Z;
                dVar9 = *pdVar3;
                uVar10 = pdVar3[1];
                pFVar2 = param_1 + iVar28;
                pFVar2->ObserverId =
                     (FAIGenericID<FPerceptionListenerCounter>)(pFVar1->ObserverId).Index;
                pFVar2->TargetId = uVar13;
                pFVar2->Score = fVar14;
                pFVar2->Importance = fVar15;
                dVar11 = param_1[iVar23].LastSeenLocation.field0_0x0._s_0.Y;
                param_1[iVar28].LastSeenLocation.field0_0x0._s_0.X =
                     param_1[iVar23].LastSeenLocation.field0_0x0._s_0.X;
                param_1[iVar28].LastSeenLocation.field0_0x0._s_0.Y = dVar11;
                pdVar3 = &param_1[iVar23].LastSeenLocation.field0_0x0._s_0.Z;
                uVar12 = pdVar3[1];
                pdVar4 = &param_1[iVar28].LastSeenLocation.field0_0x0._s_0.Z;
                *pdVar4 = *pdVar3;
                pdVar4[1] = (double)uVar12;
                param_1[iVar28].field6_0x30 = param_1[iVar23].field6_0x30;
                pFVar1 = param_1 + iVar23;
                pFVar1->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)FVar16.Index;
                pFVar1->TargetId = uVar17;
                pFVar1->Score = fVar18;
                pFVar1->Importance = fVar19;
                param_1[iVar23].LastSeenLocation.field0_0x0._s_0.X = dVar7;
                param_1[iVar23].LastSeenLocation.field0_0x0._s_0.Y = dVar8;
                pdVar3 = &param_1[iVar23].LastSeenLocation.field0_0x0._s_0.Z;
                *pdVar3 = dVar9;
                pdVar3[1] = (double)uVar10;
                param_1[iVar23].field6_0x30 = FVar5;
                iVar28 = iVar23;
              } while (iVar23 * 2 + 1 < iVar24);
            }
            iVar24 = iVar24 + -1;
            lVar25 = lVar25 + -1;
            pFVar26 = pFVar26 + -1;
          } while (0 < lVar25);
        }
        return;
      }
      iVar23 = iVar29 + -1;
      iVar24 = iVar28 + -2;
      iVar28 = iVar24;
      iVar29 = iVar23;
    }
    iVar24 = iVar23 * 2;
    iVar27 = iVar24 + 1;
    if (iVar24 + 2 < param_2) {
      if (param_1[iVar27].Score <= param_1[(longlong)iVar24 + 2].Score &&
          param_1[(longlong)iVar24 + 2].Score != param_1[iVar27].Score) {
        iVar27 = iVar24;
      }
      iVar27 = iVar27 + 1;
    }
    if (param_1[iVar23].Score <= param_1[iVar27].Score) goto LAB_146f8a7fe;
    pFVar26 = param_1 + iVar27;
    uVar13 = pFVar26->TargetId;
    fVar14 = pFVar26->Score;
    fVar15 = pFVar26->Importance;
    iVar24 = iVar27 * 2 + 1;
    FVar5 = param_1[iVar23].field6_0x30;
    pFVar1 = param_1 + iVar23;
    FVar16.Index = (pFVar1->ObserverId).Index;
    uVar17 = pFVar1->TargetId;
    fVar18 = pFVar1->Score;
    fVar19 = pFVar1->Importance;
    dVar7 = param_1[iVar23].LastSeenLocation.field0_0x0._s_0.X;
    dVar8 = param_1[iVar23].LastSeenLocation.field0_0x0._s_0.Y;
    pdVar3 = &param_1[iVar23].LastSeenLocation.field0_0x0._s_0.Z;
    dVar9 = *pdVar3;
    uVar10 = pdVar3[1];
    pFVar1 = param_1 + iVar23;
    pFVar1->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)(pFVar26->ObserverId).Index;
    pFVar1->TargetId = uVar13;
    pFVar1->Score = fVar14;
    pFVar1->Importance = fVar15;
    dVar11 = param_1[iVar27].LastSeenLocation.field0_0x0._s_0.Y;
    param_1[iVar23].LastSeenLocation.field0_0x0._s_0.X =
         param_1[iVar27].LastSeenLocation.field0_0x0._s_0.X;
    param_1[iVar23].LastSeenLocation.field0_0x0._s_0.Y = dVar11;
    pdVar3 = &param_1[iVar27].LastSeenLocation.field0_0x0._s_0.Z;
    uVar12 = pdVar3[1];
    pdVar4 = &param_1[iVar23].LastSeenLocation.field0_0x0._s_0.Z;
    *pdVar4 = *pdVar3;
    pdVar4[1] = (double)uVar12;
    param_1[iVar23].field6_0x30 = param_1[iVar27].field6_0x30;
    pFVar26 = param_1 + iVar27;
    pFVar26->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)FVar16.Index;
    pFVar26->TargetId = uVar17;
    pFVar26->Score = fVar18;
    pFVar26->Importance = fVar19;
    param_1[iVar27].LastSeenLocation.field0_0x0._s_0.X = dVar7;
    param_1[iVar27].LastSeenLocation.field0_0x0._s_0.Y = dVar8;
    pdVar3 = &param_1[iVar27].LastSeenLocation.field0_0x0._s_0.Z;
    *pdVar3 = dVar9;
    pdVar3[1] = (double)uVar10;
    param_1[iVar27].field6_0x30 = FVar5;
    iVar23 = iVar27;
  } while( true );
}

// HeapSortInternal<UAIPerceptionSystem::FDelayedStimulus,int,FIdentityFunctor,TDereferenceWrapper<UAIPerceptionSystem::FDelayedStimulus,`UAIPerceptionSystem::DeliverDelayedStimuli'::__l2::FTimestampSort>_> @ 146f8a960

void __cdecl
AlgoImpl::
HeapSortInternal<UAIPerceptionSystem::FDelayedStimulus,int,FIdentityFunctor,TDereferenceWrapper<UAIPerceptionSystem::FDelayedStimulus,_UAIPerceptionSystem::DeliverDelayedStimuli_::__l2::FTimestampSort>_>
          (FDelayedStimulus *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UAIPerceptionSystem::FDelayedStimulus,_protected:_bool___cdecl_UAIPerceptionSystem::DeliverDelayedStimuli(UAIPerceptionSystem::EDelayedStimulusSorting)_::_2_::FTimestampSort>
          param_4)

{
  FDelayedStimulus *pFVar1;
  FDelayedStimulus *pFVar2;
  double *pdVar3;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  FName FVar18;
  FName FVar19;
  FAIStimulus *pFVar20;
  FAIStimulus *pFVar21;
  FAIGenericID<FPerceptionListenerCounter> FVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined3 uVar27;
  FNameEntryId FVar28;
  FAIGenericID<FPerceptionListenerCounter> FVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  uchar uVar35;
  undefined3 uVar36;
  FNameEntryId FVar37;
  bool bVar38;
  int iVar39;
  int iVar40;
  longlong lVar41;
  FDelayedStimulus *pFVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  
  if (param_2 < 0) {
    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar38) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar38) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar39 = (param_2 + -2) / 2;
  iVar40 = iVar39 * 2 + 1;
  iVar44 = iVar40;
  iVar45 = iVar39;
  do {
    while (param_2 <= iVar40) {
LAB_146f8aaee:
      if (iVar45 == 0) {
        iVar40 = param_2 + -1;
        lVar41 = (longlong)iVar40;
        if (0 < iVar40) {
          pFVar42 = param_1 + lVar41;
          do {
            FVar22.Index = (pFVar42->ListenerId).Index;
            iVar44 = (pFVar42->Instigator).WeakPtr.ObjectIndex;
            iVar45 = 0;
            dVar6 = param_1->DeliveryTimestamp;
            FVar29.Index = (param_1->ListenerId).Index;
            iVar39 = (param_1->Instigator).WeakPtr.ObjectIndex;
            uVar7 = *(undefined8 *)&(param_1->Instigator).WeakPtr.ObjectSerialNumber;
            fVar31 = (param_1->Stimulus).Age;
            fVar32 = (param_1->Stimulus).ExpirationAge;
            fVar33 = (param_1->Stimulus).Strength;
            uVar34 = *(undefined4 *)&(param_1->Stimulus).field_0xc;
            dVar8 = (param_1->Stimulus).StimulusLocation.field0_0x0._s_0.X;
            dVar9 = (param_1->Stimulus).StimulusLocation.field0_0x0._s_0.Y;
            dVar10 = (param_1->Stimulus).StimulusLocation.field0_0x0._s_0.Z;
            dVar11 = (param_1->Stimulus).ReceiverLocation.field0_0x0._s_0.X;
            dVar12 = (param_1->Stimulus).ReceiverLocation.field0_0x0._s_0.Y;
            dVar13 = (param_1->Stimulus).ReceiverLocation.field0_0x0._s_0.Z;
            FVar18 = (param_1->Stimulus).Tag;
            uVar35 = (param_1->Stimulus).Type.Index;
            uVar36 = *(undefined3 *)&(param_1->Stimulus).Type.field_0x1;
            FVar37.Value = (param_1->Stimulus).Type.Name.ComparisonIndex.Value;
            uVar14 = *(undefined8 *)&(param_1->Stimulus).Type.Name.Number;
            param_1->DeliveryTimestamp = pFVar42->DeliveryTimestamp;
            param_1->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar22.Index;
            (param_1->Instigator).WeakPtr.ObjectIndex = iVar44;
            fVar24 = (pFVar42->Stimulus).Age;
            fVar25 = (pFVar42->Stimulus).ExpirationAge;
            *(undefined8 *)&(param_1->Instigator).WeakPtr.ObjectSerialNumber =
                 *(undefined8 *)&(pFVar42->Instigator).WeakPtr.ObjectSerialNumber;
            (param_1->Stimulus).Age = fVar24;
            (param_1->Stimulus).ExpirationAge = fVar25;
            uVar26 = *(undefined4 *)&(pFVar42->Stimulus).field_0xc;
            dVar16 = (pFVar42->Stimulus).StimulusLocation.field0_0x0._s_0.X;
            (param_1->Stimulus).Strength = (pFVar42->Stimulus).Strength;
            *(undefined4 *)&(param_1->Stimulus).field_0xc = uVar26;
            (param_1->Stimulus).StimulusLocation.field0_0x0._s_0.X = dVar16;
            dVar16 = (pFVar42->Stimulus).StimulusLocation.field0_0x0._s_0.Z;
            (param_1->Stimulus).StimulusLocation.field0_0x0._s_0.Y =
                 (pFVar42->Stimulus).StimulusLocation.field0_0x0._s_0.Y;
            (param_1->Stimulus).StimulusLocation.field0_0x0._s_0.Z = dVar16;
            dVar16 = (pFVar42->Stimulus).ReceiverLocation.field0_0x0._s_0.Y;
            (param_1->Stimulus).ReceiverLocation.field0_0x0._s_0.X =
                 (pFVar42->Stimulus).ReceiverLocation.field0_0x0._s_0.X;
            (param_1->Stimulus).ReceiverLocation.field0_0x0._s_0.Y = dVar16;
            FVar19 = (pFVar42->Stimulus).Tag;
            (param_1->Stimulus).ReceiverLocation.field0_0x0._s_0.Z =
                 (pFVar42->Stimulus).ReceiverLocation.field0_0x0._s_0.Z;
            (param_1->Stimulus).Tag = FVar19;
            uVar27 = *(undefined3 *)&(pFVar42->Stimulus).Type.field_0x1;
            FVar28.Value = (pFVar42->Stimulus).Type.Name.ComparisonIndex.Value;
            uVar15 = *(undefined8 *)&(pFVar42->Stimulus).Type.Name.Number;
            (param_1->Stimulus).Type.Index = (pFVar42->Stimulus).Type.Index;
            *(undefined3 *)&(param_1->Stimulus).Type.field_0x1 = uVar27;
            (param_1->Stimulus).Type.Name.ComparisonIndex = (FNameEntryId)FVar28.Value;
            *(undefined8 *)&(param_1->Stimulus).Type.Name.Number = uVar15;
            pFVar42->DeliveryTimestamp = dVar6;
            pFVar42->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar29.Index;
            (pFVar42->Instigator).WeakPtr.ObjectIndex = iVar39;
            *(undefined8 *)&(pFVar42->Instigator).WeakPtr.ObjectSerialNumber = uVar7;
            (pFVar42->Stimulus).Age = fVar31;
            (pFVar42->Stimulus).ExpirationAge = fVar32;
            (pFVar42->Stimulus).Strength = fVar33;
            *(undefined4 *)&(pFVar42->Stimulus).field_0xc = uVar34;
            (pFVar42->Stimulus).StimulusLocation.field0_0x0._s_0.X = dVar8;
            (pFVar42->Stimulus).StimulusLocation.field0_0x0._s_0.Y = dVar9;
            (pFVar42->Stimulus).StimulusLocation.field0_0x0._s_0.Z = dVar10;
            (pFVar42->Stimulus).ReceiverLocation.field0_0x0._s_0.X = dVar11;
            (pFVar42->Stimulus).ReceiverLocation.field0_0x0._s_0.Y = dVar12;
            (pFVar42->Stimulus).ReceiverLocation.field0_0x0._s_0.Z = dVar13;
            (pFVar42->Stimulus).Tag = FVar18;
            (pFVar42->Stimulus).Type.Index = uVar35;
            *(undefined3 *)&(pFVar42->Stimulus).Type.field_0x1 = uVar36;
            (pFVar42->Stimulus).Type.Name.ComparisonIndex = (FNameEntryId)FVar37.Value;
            *(undefined8 *)&(pFVar42->Stimulus).Type.Name.Number = uVar14;
            if (1 < iVar40) {
              do {
                iVar39 = iVar45 * 2;
                iVar44 = iVar39 + 1;
                if (iVar39 + 2 < iVar40) {
                  if (param_1[(longlong)iVar39 + 2].DeliveryTimestamp <=
                      param_1[iVar44].DeliveryTimestamp &&
                      param_1[iVar44].DeliveryTimestamp !=
                      param_1[(longlong)iVar39 + 2].DeliveryTimestamp) {
                    iVar44 = iVar39;
                  }
                  iVar44 = iVar44 + 1;
                }
                if (param_1[iVar44].DeliveryTimestamp < param_1[iVar45].DeliveryTimestamp ||
                    param_1[iVar44].DeliveryTimestamp == param_1[iVar45].DeliveryTimestamp) break;
                pFVar1 = param_1 + iVar44;
                FVar22.Index = (pFVar1->ListenerId).Index;
                iVar39 = (pFVar1->Instigator).WeakPtr.ObjectIndex;
                pFVar2 = param_1 + iVar45;
                dVar6 = pFVar2->DeliveryTimestamp;
                FVar29.Index = (pFVar2->ListenerId).Index;
                iVar43 = (pFVar2->Instigator).WeakPtr.ObjectIndex;
                uVar7 = *(undefined8 *)&param_1[iVar45].Instigator.WeakPtr.ObjectSerialNumber;
                pFVar20 = (FAIStimulus *)((longlong)(&param_1[iVar45].Instigator + 1) + 4);
                fVar31 = pFVar20->Age;
                fVar32 = pFVar20->ExpirationAge;
                pFVar20 = &param_1[iVar45].Stimulus;
                fVar33 = pFVar20->Strength;
                uVar34 = *(undefined4 *)&pFVar20->field_0xc;
                dVar8 = (pFVar20->StimulusLocation).field0_0x0._s_0.X;
                pdVar3 = &param_1[iVar45].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
                dVar9 = *pdVar3;
                dVar10 = pdVar3[1];
                dVar11 = param_1[iVar45].Stimulus.ReceiverLocation.field0_0x0._s_0.X;
                dVar12 = param_1[iVar45].Stimulus.ReceiverLocation.field0_0x0._s_0.Y;
                pdVar3 = &param_1[iVar45].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
                dVar13 = *pdVar3;
                uVar14 = pdVar3[1];
                pFVar20 = &param_1[iVar45].Stimulus;
                uVar35 = (pFVar20->Type).Index;
                uVar36 = *(undefined3 *)&(pFVar20->Type).field_0x1;
                FVar37.Value = (pFVar20->Type).Name.ComparisonIndex.Value;
                uVar15 = *(undefined8 *)&(pFVar20->Type).Name.Number;
                pFVar2 = param_1 + iVar45;
                pFVar2->DeliveryTimestamp = pFVar1->DeliveryTimestamp;
                pFVar2->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar22.Index;
                (pFVar2->Instigator).WeakPtr.ObjectIndex = iVar39;
                pFVar20 = (FAIStimulus *)((longlong)(&param_1[iVar44].Instigator + 1) + 4);
                fVar24 = pFVar20->Age;
                fVar25 = pFVar20->ExpirationAge;
                *(undefined8 *)&param_1[iVar45].Instigator.WeakPtr.ObjectSerialNumber =
                     *(undefined8 *)&param_1[iVar44].Instigator.WeakPtr.ObjectSerialNumber;
                pFVar20 = (FAIStimulus *)((longlong)(&param_1[iVar45].Instigator + 1) + 4);
                pFVar20->Age = fVar24;
                pFVar20->ExpirationAge = fVar25;
                pFVar20 = &param_1[iVar44].Stimulus;
                uVar26 = *(undefined4 *)&pFVar20->field_0xc;
                dVar16 = (pFVar20->StimulusLocation).field0_0x0._s_0.X;
                pFVar21 = &param_1[iVar45].Stimulus;
                pFVar21->Strength = pFVar20->Strength;
                *(undefined4 *)&pFVar21->field_0xc = uVar26;
                (pFVar21->StimulusLocation).field0_0x0._s_0.X = dVar16;
                pdVar3 = &param_1[iVar44].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
                dVar16 = pdVar3[1];
                pdVar4 = &param_1[iVar45].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
                *pdVar4 = *pdVar3;
                pdVar4[1] = dVar16;
                dVar16 = param_1[iVar44].Stimulus.ReceiverLocation.field0_0x0._s_0.Y;
                param_1[iVar45].Stimulus.ReceiverLocation.field0_0x0._s_0.X =
                     param_1[iVar44].Stimulus.ReceiverLocation.field0_0x0._s_0.X;
                param_1[iVar45].Stimulus.ReceiverLocation.field0_0x0._s_0.Y = dVar16;
                pdVar3 = &param_1[iVar44].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
                uVar17 = pdVar3[1];
                pdVar4 = &param_1[iVar45].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
                *pdVar4 = *pdVar3;
                pdVar4[1] = (double)uVar17;
                pFVar20 = &param_1[iVar44].Stimulus;
                uVar27 = *(undefined3 *)&(pFVar20->Type).field_0x1;
                FVar28.Value = (pFVar20->Type).Name.ComparisonIndex.Value;
                uVar17 = *(undefined8 *)&(pFVar20->Type).Name.Number;
                pFVar21 = &param_1[iVar45].Stimulus;
                (pFVar21->Type).Index = (pFVar20->Type).Index;
                *(undefined3 *)&(pFVar21->Type).field_0x1 = uVar27;
                (pFVar21->Type).Name.ComparisonIndex = (FNameEntryId)FVar28.Value;
                *(undefined8 *)&(pFVar21->Type).Name.Number = uVar17;
                pFVar1 = param_1 + iVar44;
                pFVar1->DeliveryTimestamp = dVar6;
                pFVar1->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar29.Index;
                (pFVar1->Instigator).WeakPtr.ObjectIndex = iVar43;
                *(undefined8 *)&param_1[iVar44].Instigator.WeakPtr.ObjectSerialNumber = uVar7;
                pFVar20 = (FAIStimulus *)((longlong)(&param_1[iVar44].Instigator + 1) + 4);
                pFVar20->Age = fVar31;
                pFVar20->ExpirationAge = fVar32;
                pFVar20 = &param_1[iVar44].Stimulus;
                pFVar20->Strength = fVar33;
                *(undefined4 *)&pFVar20->field_0xc = uVar34;
                (pFVar20->StimulusLocation).field0_0x0._s_0.X = dVar8;
                pdVar3 = &param_1[iVar44].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
                *pdVar3 = dVar9;
                pdVar3[1] = dVar10;
                param_1[iVar44].Stimulus.ReceiverLocation.field0_0x0._s_0.X = dVar11;
                param_1[iVar44].Stimulus.ReceiverLocation.field0_0x0._s_0.Y = dVar12;
                pdVar3 = &param_1[iVar44].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
                *pdVar3 = dVar13;
                pdVar3[1] = (double)uVar14;
                pFVar20 = &param_1[iVar44].Stimulus;
                (pFVar20->Type).Index = uVar35;
                *(undefined3 *)&(pFVar20->Type).field_0x1 = uVar36;
                (pFVar20->Type).Name.ComparisonIndex = (FNameEntryId)FVar37.Value;
                *(undefined8 *)&(pFVar20->Type).Name.Number = uVar15;
                iVar45 = iVar44;
              } while (iVar44 * 2 + 1 < iVar40);
            }
            iVar40 = iVar40 + -1;
            lVar41 = lVar41 + -1;
            pFVar42 = pFVar42 + -1;
          } while (0 < lVar41);
        }
        return;
      }
      iVar39 = iVar45 + -1;
      iVar40 = iVar44 + -2;
      iVar44 = iVar40;
      iVar45 = iVar39;
    }
    iVar40 = iVar39 * 2;
    iVar43 = iVar40 + 1;
    if (iVar40 + 2 < param_2) {
      if (param_1[(longlong)iVar40 + 2].DeliveryTimestamp <= param_1[iVar43].DeliveryTimestamp &&
          param_1[iVar43].DeliveryTimestamp != param_1[(longlong)iVar40 + 2].DeliveryTimestamp) {
        iVar43 = iVar40;
      }
      iVar43 = iVar43 + 1;
    }
    if (param_1[iVar43].DeliveryTimestamp < param_1[iVar39].DeliveryTimestamp ||
        param_1[iVar43].DeliveryTimestamp == param_1[iVar39].DeliveryTimestamp) goto LAB_146f8aaee;
    pFVar42 = param_1 + iVar43;
    FVar22.Index = (pFVar42->ListenerId).Index;
    iVar23 = (pFVar42->Instigator).WeakPtr.ObjectIndex;
    iVar40 = iVar43 * 2 + 1;
    pFVar1 = param_1 + iVar39;
    dVar6 = pFVar1->DeliveryTimestamp;
    FVar29.Index = (pFVar1->ListenerId).Index;
    iVar30 = (pFVar1->Instigator).WeakPtr.ObjectIndex;
    uVar7 = *(undefined8 *)&param_1[iVar39].Instigator.WeakPtr.ObjectSerialNumber;
    pFVar20 = (FAIStimulus *)((longlong)(&param_1[iVar39].Instigator + 1) + 4);
    fVar31 = pFVar20->Age;
    fVar32 = pFVar20->ExpirationAge;
    pFVar20 = &param_1[iVar39].Stimulus;
    fVar33 = pFVar20->Strength;
    uVar34 = *(undefined4 *)&pFVar20->field_0xc;
    dVar8 = (pFVar20->StimulusLocation).field0_0x0._s_0.X;
    pdVar3 = &param_1[iVar39].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
    dVar9 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar11 = param_1[iVar39].Stimulus.ReceiverLocation.field0_0x0._s_0.X;
    dVar12 = param_1[iVar39].Stimulus.ReceiverLocation.field0_0x0._s_0.Y;
    pdVar3 = &param_1[iVar39].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
    dVar13 = *pdVar3;
    uVar14 = pdVar3[1];
    pFVar20 = &param_1[iVar39].Stimulus;
    uVar35 = (pFVar20->Type).Index;
    uVar36 = *(undefined3 *)&(pFVar20->Type).field_0x1;
    FVar37.Value = (pFVar20->Type).Name.ComparisonIndex.Value;
    uVar15 = *(undefined8 *)&(pFVar20->Type).Name.Number;
    pFVar1 = param_1 + iVar39;
    pFVar1->DeliveryTimestamp = pFVar42->DeliveryTimestamp;
    pFVar1->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar22.Index;
    (pFVar1->Instigator).WeakPtr.ObjectIndex = iVar23;
    pFVar20 = (FAIStimulus *)((longlong)(&param_1[iVar43].Instigator + 1) + 4);
    fVar24 = pFVar20->Age;
    fVar25 = pFVar20->ExpirationAge;
    *(undefined8 *)&param_1[iVar39].Instigator.WeakPtr.ObjectSerialNumber =
         *(undefined8 *)&param_1[iVar43].Instigator.WeakPtr.ObjectSerialNumber;
    pFVar20 = (FAIStimulus *)((longlong)(&param_1[iVar39].Instigator + 1) + 4);
    pFVar20->Age = fVar24;
    pFVar20->ExpirationAge = fVar25;
    pFVar20 = &param_1[iVar43].Stimulus;
    uVar26 = *(undefined4 *)&pFVar20->field_0xc;
    dVar16 = (pFVar20->StimulusLocation).field0_0x0._s_0.X;
    pFVar21 = &param_1[iVar39].Stimulus;
    pFVar21->Strength = pFVar20->Strength;
    *(undefined4 *)&pFVar21->field_0xc = uVar26;
    (pFVar21->StimulusLocation).field0_0x0._s_0.X = dVar16;
    pdVar3 = &param_1[iVar43].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
    dVar16 = pdVar3[1];
    pdVar4 = &param_1[iVar39].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
    *pdVar4 = *pdVar3;
    pdVar4[1] = dVar16;
    dVar16 = param_1[iVar43].Stimulus.ReceiverLocation.field0_0x0._s_0.Y;
    param_1[iVar39].Stimulus.ReceiverLocation.field0_0x0._s_0.X =
         param_1[iVar43].Stimulus.ReceiverLocation.field0_0x0._s_0.X;
    param_1[iVar39].Stimulus.ReceiverLocation.field0_0x0._s_0.Y = dVar16;
    pdVar3 = &param_1[iVar43].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
    uVar17 = pdVar3[1];
    pdVar4 = &param_1[iVar39].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
    *pdVar4 = *pdVar3;
    pdVar4[1] = (double)uVar17;
    pFVar20 = &param_1[iVar43].Stimulus;
    uVar27 = *(undefined3 *)&(pFVar20->Type).field_0x1;
    FVar28.Value = (pFVar20->Type).Name.ComparisonIndex.Value;
    uVar17 = *(undefined8 *)&(pFVar20->Type).Name.Number;
    pFVar21 = &param_1[iVar39].Stimulus;
    (pFVar21->Type).Index = (pFVar20->Type).Index;
    *(undefined3 *)&(pFVar21->Type).field_0x1 = uVar27;
    (pFVar21->Type).Name.ComparisonIndex = (FNameEntryId)FVar28.Value;
    *(undefined8 *)&(pFVar21->Type).Name.Number = uVar17;
    pFVar42 = param_1 + iVar43;
    pFVar42->DeliveryTimestamp = dVar6;
    pFVar42->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar29.Index;
    (pFVar42->Instigator).WeakPtr.ObjectIndex = iVar30;
    *(undefined8 *)&param_1[iVar43].Instigator.WeakPtr.ObjectSerialNumber = uVar7;
    pFVar20 = (FAIStimulus *)((longlong)(&param_1[iVar43].Instigator + 1) + 4);
    pFVar20->Age = fVar31;
    pFVar20->ExpirationAge = fVar32;
    pFVar20 = &param_1[iVar43].Stimulus;
    pFVar20->Strength = fVar33;
    *(undefined4 *)&pFVar20->field_0xc = uVar34;
    (pFVar20->StimulusLocation).field0_0x0._s_0.X = dVar8;
    pdVar3 = &param_1[iVar43].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
    *pdVar3 = dVar9;
    pdVar3[1] = dVar10;
    param_1[iVar43].Stimulus.ReceiverLocation.field0_0x0._s_0.X = dVar11;
    param_1[iVar43].Stimulus.ReceiverLocation.field0_0x0._s_0.Y = dVar12;
    pdVar3 = &param_1[iVar43].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
    *pdVar3 = dVar13;
    pdVar3[1] = (double)uVar14;
    pFVar20 = &param_1[iVar43].Stimulus;
    (pFVar20->Type).Index = uVar35;
    *(undefined3 *)&(pFVar20->Type).field_0x1 = uVar36;
    (pFVar20->Type).Name.ComparisonIndex = (FNameEntryId)FVar37.Value;
    *(undefined8 *)&(pFVar20->Type).Name.Number = uVar15;
    iVar39 = iVar43;
  } while( true );
}

// HeapSortInternal<`UAISense_Sight::Update'::__l2::FQueryOperation,int,FIdentityFunctor,TDereferenceWrapper<`UAISense_Sight::Update'::__l2::FQueryOperation,`UAISense_Sight::Update'::__l79::<lambda_2>_>_> @ 146f8acd0

void __cdecl
AlgoImpl::
HeapSortInternal<_UAISense_Sight::Update_::__l2::FQueryOperation,int,FIdentityFunctor,TDereferenceWrapper<_UAISense_Sight::Update_::__l2::FQueryOperation,_UAISense_Sight::Update_::__l79::<lambda_2>_>_>
          (FQueryOperation *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_virtual_float___cdecl_UAISense_Sight::Update(void)_::_2_::FQueryOperation,_protected:_virtual_float___cdecl_UAISense_Sight::Update(void)_::_79_::<lambda_2>_>
          param_4)

{
  FQueryOperation *pFVar1;
  FQueryOperation *pFVar2;
  FQueryOperation FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
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
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar11 = iVar8;
  iVar12 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_146f8add6:
      if (iVar12 == 0) {
        iVar8 = param_2 + -1;
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar11 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar3;
            if (1 < iVar8) {
              do {
                iVar12 = iVar11 * 2;
                iVar7 = iVar12 + 1;
                if (iVar12 + 2 < iVar8) {
                  cVar6 = param_1[(longlong)iVar12 + 2].bInRange;
                  if ((bool)cVar6 == param_1[(longlong)iVar12 + 1].bInRange) {
                    cVar6 = param_1[(longlong)iVar12 + 1].Index <
                            param_1[(longlong)iVar12 + 2].Index;
                  }
                  if (cVar6 != '\0') {
                    iVar7 = iVar12;
                  }
                  iVar7 = iVar7 + 1;
                }
                cVar6 = param_1[iVar11].bInRange;
                pFVar1 = param_1 + iVar11;
                pFVar2 = param_1 + iVar7;
                if ((bool)cVar6 == param_1[iVar7].bInRange) {
                  cVar6 = pFVar2->Index < pFVar1->Index;
                }
                if (cVar6 == '\0') break;
                FVar3 = *pFVar1;
                *pFVar1 = *pFVar2;
                *pFVar2 = FVar3;
                iVar11 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar7 = iVar12 + -1;
      iVar8 = iVar11 + -2;
      iVar11 = iVar8;
      iVar12 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      cVar6 = param_1[(longlong)iVar8 + 2].bInRange;
      if ((bool)cVar6 == param_1[(longlong)iVar8 + 1].bInRange) {
        cVar6 = param_1[(longlong)iVar8 + 1].Index < param_1[(longlong)iVar8 + 2].Index;
      }
      if (cVar6 != '\0') {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    cVar6 = param_1[iVar7].bInRange;
    pFVar1 = param_1 + iVar7;
    pFVar2 = param_1 + iVar9;
    if ((bool)cVar6 == param_1[iVar9].bInRange) {
      cVar6 = pFVar2->Index < pFVar1->Index;
    }
    if (cVar6 == '\0') goto LAB_146f8add6;
    FVar3 = *pFVar1;
    *pFVar1 = *pFVar2;
    iVar8 = iVar9 * 2 + 1;
    *pFVar2 = FVar3;
    iVar7 = iVar9;
  } while( true );
}

// IndexOfByPredicate<`anonymous_namespace'::FConfigOfSenseID> @ 146f8aec0

int __thiscall
TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_>::
IndexOfByPredicate<_anonymous_namespace_::FConfigOfSenseID>
          (TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_> *this,
          FConfigOfSenseID *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  UObject *local_res8;
  UObject *local_res18 [2];
  FAINamedID<FAISenseCounter> local_28;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar4 = pFVar2;
  do {
    if (pFVar4 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b0))(plVar3,&local_res8);
      local_res18[0] = local_res8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UAISense::GetSenseID(&local_28,(TSubclassOf<UAISense>)local_res18);
      if (local_28.Index == (param_1->SenseID).Index) {
        return (int)((longlong)pFVar4 - (longlong)pFVar2 >> 3);
      }
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// InternalConstructor<AGridPathAIController> @ 146f8af70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<AGridPathAIController>(FObjectInitializer *param_1)

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
    pUVar3 = UGridPathFollowingComponent::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,pUVar3,(TArrayView<FName_const_,int> *)0x0);
    AAIController::AAIController(this,param_1);
    this->_padding_ = (longlong)&AGridPathAIController::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AGridPathAIController::_vftable__for__INavAgentInterface__;
    this->_padding_ =
         (longlong)&AGridPathAIController::_vftable__for__IAIPerceptionListenerInterface__;
    this->_padding_ = (longlong)&AGridPathAIController::_vftable__for__IGameplayTaskOwnerInterface__
    ;
    this->_padding_ = (longlong)&AGridPathAIController::_vftable__for__IGenericTeamAgentInterface__;
    this->_padding_ =
         (longlong)&AGridPathAIController::_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  }
  return;
}

// InternalConstructor<ANavLinkProxy> @ 146f8b050

void __cdecl InternalConstructor<ANavLinkProxy>(FObjectInitializer *param_1)

{
  if ((ANavLinkProxy *)param_1->Obj != (ANavLinkProxy *)0x0) {
    ANavLinkProxy::ANavLinkProxy((ANavLinkProxy *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAIHotSpotManager> @ 146f8b070

void __cdecl InternalConstructor<UAIHotSpotManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAIHotSpotManager__6B_;
  }
  return;
}

// InternalConstructor<UAIPerceptionComponent> @ 146f8b0a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAIPerceptionComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  UClass *this_00;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UAIPerceptionComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAIPerceptionComponent::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UAIPerceptionComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0xff;
    FName::FName((FName *)((longlong)&this[1]._padding_ + 4),L"Invalid");
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    FAIGenericID<FPerceptionListenerCounter>::InvalidID();
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryComponentTick.Target = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryComponentTick.Target + 4) = 0x80;
    *(undefined4 *)&this[1].ComponentTags.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ComponentTags.AllocatorInstance.Data + 4) = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    *(undefined8 *)&this[1].field_0x98 = 0;
    this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    *(uint *)&this[1].OwnerPrivate = *(uint *)&this[1].OwnerPrivate & 0xfffffffd;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this_00 = Z_Construct_UClass_UAISystem_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    *(uint *)&this[1].OwnerPrivate =
         ((uint)(byte)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x9 ^
         *(uint *)&this[1].OwnerPrivate) & 1 ^ *(uint *)&this[1].OwnerPrivate;
  }
  return;
}

// InternalConstructor<UAIPerceptionListenerInterface> @ 146f8b240

void __cdecl InternalConstructor<UAIPerceptionListenerInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAIPerceptionListenerInterface__6B_;
  }
  return;
}

// InternalConstructor<UAIPerceptionStimuliSourceComponent> @ 146f8b270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAIPerceptionStimuliSourceComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UAIPerceptionStimuliSourceComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAIPerceptionStimuliSourceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UAIPerceptionStimuliSourceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffc;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAIPerceptionSystem> @ 146f8b2d0

void __cdecl InternalConstructor<UAIPerceptionSystem>(FObjectInitializer *param_1)

{
  if ((UAIPerceptionSystem *)param_1->Obj != (UAIPerceptionSystem *)0x0) {
    UAIPerceptionSystem::UAIPerceptionSystem((UAIPerceptionSystem *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISense> @ 146f8b2f0

void __cdecl InternalConstructor<UAISense>(FObjectInitializer *param_1)

{
  if ((UAISense *)param_1->Obj != (UAISense *)0x0) {
    UAISense::UAISense((UAISense *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISenseConfig_Damage> @ 146f8b310

void __cdecl InternalConstructor<UAISenseConfig_Damage>(FObjectInitializer *param_1)

{
  UObject *this;
  FColor FVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAISenseConfig__6B_;
    FVar1 = FColor::White;
    *(uint *)&this[1].field_0x8 = *(uint *)&this[1].field_0x8 | 1;
    ((FColor_u_0 *)(this + 1))->_s_0 = (FColor_u_0_s_0)FVar1.field0_0x0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)this = &___7UAISenseConfig_Damage__6B_;
    ((FColor_u_0 *)(this + 1))->_s_0 = (FColor_u_0_s_0)FColor::Red.field0_0x0;
  }
  return;
}

// InternalConstructor<UAISenseEvent> @ 146f8b370

void __cdecl InternalConstructor<UAISenseEvent>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAISenseEvent__6B_;
  }
  return;
}

// InternalConstructor<UAISense_Blueprint> @ 146f8b3a0

void __cdecl InternalConstructor<UAISense_Blueprint>(FObjectInitializer *param_1)

{
  if ((UAISense_Blueprint *)param_1->Obj != (UAISense_Blueprint *)0x0) {
    UAISense_Blueprint::UAISense_Blueprint((UAISense_Blueprint *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISense_Damage> @ 146f8b3c0

void __cdecl InternalConstructor<UAISense_Damage>(FObjectInitializer *param_1)

{
  UAISense *this;
  
  this = (UAISense *)param_1->Obj;
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Damage__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAISense_Hearing> @ 146f8b400

void __cdecl InternalConstructor<UAISense_Hearing>(FObjectInitializer *param_1)

{
  if ((UAISense_Hearing *)param_1->Obj != (UAISense_Hearing *)0x0) {
    UAISense_Hearing::UAISense_Hearing((UAISense_Hearing *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISense_Prediction> @ 146f8b420

void __cdecl InternalConstructor<UAISense_Prediction>(FObjectInitializer *param_1)

{
  UAISense *this;
  
  this = (UAISense *)param_1->Obj;
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Prediction__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAISense_Sight> @ 146f8b460

void __cdecl InternalConstructor<UAISense_Sight>(FObjectInitializer *param_1)

{
  if ((UAISense_Sight *)param_1->Obj != (UAISense_Sight *)0x0) {
    UAISense_Sight::UAISense_Sight((UAISense_Sight *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UCrowdFollowingComponent> @ 146f8b480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UCrowdFollowingComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  byte bVar2;
  UPathFollowingComponent *this;
  longlong lVar3;
  
  this = (UPathFollowingComponent *)param_1->Obj;
  if (this != (UPathFollowingComponent *)0x0) {
    UPathFollowingComponent::UPathFollowingComponent(this,param_1);
    pbVar1 = (byte *)((longlong)&this[1]._padding_ + 2);
    *pbVar1 = *pbVar1 | 1;
    this->_padding_ = (longlong)&UCrowdFollowingComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCrowdFollowingComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UCrowdFollowingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UCrowdFollowingComponent::_vftable__for__IAIResourceInterface__;
    this->_padding_ =
         (longlong)&UCrowdFollowingComponent::_vftable__for__IPathFollowingAgentInterface__;
    this[1]._padding_ = (longlong)&___7UCrowdFollowingComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 3) = 0;
    lVar3 = this[1]._padding_;
    *(undefined4 *)&this[1]._padding_ = 0x40000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x43c80000;
    *(byte *)&this[1]._padding_ = (byte)lVar3 & 4 | 0x42;
    bVar2 = *(byte *)((longlong)&this[1]._padding_ + 1);
    *(undefined4 *)&this[1]._padding_ = 0x447a0000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(byte *)((longlong)&this[1]._padding_ + 1) = bVar2 & 0xfb | 0x6b;
  }
  return;
}

// InternalConstructor<UCrowdManager> @ 146f8b560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UCrowdManager>(FObjectInitializer *param_1)

{
  if ((UCrowdManager *)param_1->Obj != (UCrowdManager *)0x0) {
    UCrowdManager::UCrowdManager((UCrowdManager *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGeneratedNavLinksProxy> @ 146f8b580

void __cdecl InternalConstructor<UGeneratedNavLinksProxy>(FObjectInitializer *param_1)

{
  UBaseGeneratedNavLinksProxy *this;
  
  this = (UBaseGeneratedNavLinksProxy *)param_1->Obj;
  if (this != (UBaseGeneratedNavLinksProxy *)0x0) {
    UBaseGeneratedNavLinksProxy::UBaseGeneratedNavLinksProxy(this,param_1);
    this->_padding_ = (longlong)&UGeneratedNavLinksProxy::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UGeneratedNavLinksProxy::_vftable__for__INavLinkCustomInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UGridPathFollowingComponent> @ 146f8b5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UGridPathFollowingComponent>(FObjectInitializer *param_1)

{
  UPathFollowingComponent *this;
  
  this = (UPathFollowingComponent *)param_1->Obj;
  if (this != (UPathFollowingComponent *)0x0) {
    UPathFollowingComponent::UPathFollowingComponent(this,param_1);
    this[1]._padding_ = -1;
    this->_padding_ = (longlong)&UGridPathFollowingComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGridPathFollowingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UGridPathFollowingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UGridPathFollowingComponent::_vftable__for__IAIResourceInterface__;
    this->_padding_ =
         (longlong)&UGridPathFollowingComponent::_vftable__for__IPathFollowingAgentInterface__;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffc;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UNavFilter_AIControllerDefault> @ 146f8b670

void __cdecl InternalConstructor<UNavFilter_AIControllerDefault>(FObjectInitializer *param_1)

{
  UNavigationQueryFilter *this;
  
  this = (UNavigationQueryFilter *)param_1->Obj;
  if (this != (UNavigationQueryFilter *)0x0) {
    UNavigationQueryFilter::UNavigationQueryFilter(this,param_1);
    this->bIsMetaFilter = 1;
    this->_padding_ = (longlong)&___7UNavFilter_AIControllerDefault__6B_;
  }
  return;
}

// InternalConstructor<UNavLocalGridManager> @ 146f8b6b0

void __cdecl InternalConstructor<UNavLocalGridManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x24 = 1;
    *(undefined ***)this = &___7UNavLocalGridManager__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UPathFollowingComponent> @ 146f8b700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UPathFollowingComponent>(FObjectInitializer *param_1)

{
  if ((UPathFollowingComponent *)param_1->Obj != (UPathFollowingComponent *)0x0) {
    UPathFollowingComponent::UPathFollowingComponent
              ((UPathFollowingComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPathFollowingManager> @ 146f8b720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UPathFollowingManager>(FObjectInitializer *param_1)

{
  UObject *this;
  TDelegate<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy> *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy> *this_01;
  ulonglong uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    uVar3 = (ulonglong)_tls_index;
    *(undefined ***)this = &___7UPathFollowingManager__6B_;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        this_00 = IPathFollowingManagerInterface::StopMovementDelegate();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_28);
        local_10 = &this_00->field_0x8;
        puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar2 = FDelegateHandle::GenerateNewID();
          puVar1[2] = uVar2;
          *puVar1 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar1[3] = UPathFollowingManager::StopMovement;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        this_01 = IPathFollowingManagerInterface::IsFollowingAPathDelegate();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
                   (FWriteAccessScope *)&local_28);
        local_10 = &this_01->field_0x8;
        puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar2 = FDelegateHandle::GenerateNewID();
          puVar1[2] = uVar2;
          *puVar1 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar1[3] = UPathFollowingManager::IsFollowingAPath;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        _Init_thread_footer(&_TSS0);
        return;
      }
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<AGridPathAIController> @ 146f8b880

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

UObject * __cdecl InternalVTableHelperCtorCaller<AGridPathAIController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AAIController *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AGridPathAIController::GetPrivateStaticClass();
  this = (AAIController *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AAIController *)0x0) {
    AAIController::AAIController(this,param_1);
    this->_padding_ = (longlong)&AGridPathAIController::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AGridPathAIController::_vftable__for__INavAgentInterface__;
    this->_padding_ =
         (longlong)&AGridPathAIController::_vftable__for__IAIPerceptionListenerInterface__;
    this->_padding_ = (longlong)&AGridPathAIController::_vftable__for__IGameplayTaskOwnerInterface__
    ;
    this->_padding_ = (longlong)&AGridPathAIController::_vftable__for__IGenericTeamAgentInterface__;
    this->_padding_ =
         (longlong)&AGridPathAIController::_vftable__for__IVisualLoggerDebugSnapshotInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ANavLinkProxy> @ 146f8b970

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANavLinkProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANavLinkProxy::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ANavLinkProxy::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&ANavLinkProxy::_vftable__for__INavLinkHostInterface__;
    this[1]._padding_ = (longlong)&ANavLinkProxy::_vftable__for__INavRelevantInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIHotSpotManager> @ 146f8ba70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAIHotSpotManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIHotSpotManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAIHotSpotManager__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIPerceptionComponent> @ 146f8bb20

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

UObject * __cdecl InternalVTableHelperCtorCaller<UAIPerceptionComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIPerceptionComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UAIPerceptionComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAIPerceptionComponent::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UAIPerceptionComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0xff;
    FName::FName((FName *)((longlong)&this[1]._padding_ + 4),L"Invalid");
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryComponentTick.Target = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryComponentTick.Target + 4) = 0x80;
    *(undefined4 *)&this[1].ComponentTags.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ComponentTags.AllocatorInstance.Data + 4) = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    *(undefined8 *)&this[1].field_0x98 = 0;
    this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIPerceptionListenerInterface> @ 146f8bce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAIPerceptionListenerInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIPerceptionListenerInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAIPerceptionListenerInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIPerceptionStimuliSourceComponent> @ 146f8bd90

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UAIPerceptionStimuliSourceComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIPerceptionStimuliSourceComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UAIPerceptionStimuliSourceComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAIPerceptionStimuliSourceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UAIPerceptionStimuliSourceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAIPerceptionSystem> @ 146f8be60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAIPerceptionSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAIPerceptionSystem::GetPrivateStaticClass();
  this = (UAISubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISubsystem *)0x0) {
    UAISubsystem::UAISubsystem(this,param_1);
    this->_padding_ = (longlong)&UAIPerceptionSystem::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAIPerceptionSystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].AISystem.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].AISystem.field0_0x0 + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].AISystem.field0_0x0.DebugPtr = (UAISystem *)0x0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].AISystem.field0_0x0.DebugPtr = (UAISystem *)0x0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4].AISystem.field0_0x0.DebugPtr = (UAISystem *)0x0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISense> @ 146f8bfd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISense>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISense *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISense::GetPrivateStaticClass();
  pUVar3 = (UAISense *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UAISense *)0x0) {
    pUVar3 = UAISense::UAISense(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseConfig_Damage> @ 146f8c070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseConfig_Damage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISenseConfig *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseConfig_Damage::GetPrivateStaticClass();
  this = (UAISenseConfig *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISenseConfig *)0x0) {
    UAISenseConfig::UAISenseConfig(this,param_1);
    this->_padding_ = (longlong)&___7UAISenseConfig_Damage__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISenseEvent> @ 146f8c120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISenseEvent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISenseEvent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAISenseEvent__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISense_Blueprint> @ 146f8c1d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISense_Blueprint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISense *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISense_Blueprint::GetPrivateStaticClass();
  this = (UAISense *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Blueprint__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISense_Damage> @ 146f8c2a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISense_Damage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISense *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISense_Damage::GetPrivateStaticClass();
  this = (UAISense *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Damage__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISense_Hearing> @ 146f8c360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISense_Hearing>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISense *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISense_Hearing::GetPrivateStaticClass();
  this = (UAISense *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Hearing__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].TimeUntilNextUpdate = 0.0;
    this[1].SenseID.Index = '\0';
    *(undefined3 *)&this[1].SenseID.field_0x1 = 0;
    this[1].SenseID.Name.ComparisonIndex.Value = 0;
    this[1].SenseID.Name.Number = 0x80;
    *(undefined4 *)&this[1].OnNewListenerDelegate = 0xffffffff;
    *(undefined4 *)&this[1].OnNewListenerDelegate.field_0x4 = 0;
    *(undefined8 *)&this[1].OnNewListenerDelegate.field_0x10 = 0;
    *(undefined4 *)&this[1].OnListenerUpdateDelegate = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISense_Prediction> @ 146f8c460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISense_Prediction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISense *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISense_Prediction::GetPrivateStaticClass();
  this = (UAISense *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Prediction__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISense_Sight> @ 146f8c520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISense_Sight>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISense *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISense_Sight::GetPrivateStaticClass();
  this = (UAISense *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Sight__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].NotifyType = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)&this[1].PerceptionSystemInstance.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PerceptionSystemInstance.field0_0x0 + 4) = 0;
    this[1].SenseID.Name.ComparisonIndex = 0;
    this[1].SenseID.Name.Number = 0;
    *(undefined4 *)&this[1].OnNewListenerDelegate = 0;
    *(undefined8 *)&this[1].OnNewListenerDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].OnNewListenerDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].OnListenerUpdateDelegate.field_0x10 = 0;
    *(undefined4 *)&this[1].OnListenerRemovedDelegate = 0;
    *(undefined4 *)&this[1].OnListenerRemovedDelegate.field_0x4 = 0x80;
    *(undefined4 *)&this[1].OnListenerRemovedDelegate.field_0x8 = 0xffffffff;
    *(undefined4 *)&this[1].OnListenerRemovedDelegate.field_0xc = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 1;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].NotifyType = 0;
    this[2].PerceptionSystemInstance.field0_0x0.DebugPtr = (UAIPerceptionSystem *)0x0;
    this[2].TimeUntilNextUpdate = 0.0;
    this[2].SenseID.Index = '\0';
    *(undefined3 *)&this[2].SenseID.field_0x1 = 0;
    this[2].SenseID.Name.ComparisonIndex = 0;
    this[2].SenseID.Name.Number = 0;
    *(undefined8 *)&this[2].OnListenerRemovedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[2].OnListenerRemovedDelegate.field_0x10 = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCrowdFollowingComponent> @ 146f8c6c0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UCrowdFollowingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPathFollowingComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCrowdFollowingComponent::GetPrivateStaticClass();
  this = (UPathFollowingComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPathFollowingComponent *)0x0) {
    UPathFollowingComponent::UPathFollowingComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UCrowdFollowingComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCrowdFollowingComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UCrowdFollowingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UCrowdFollowingComponent::_vftable__for__IAIResourceInterface__;
    this->_padding_ =
         (longlong)&UCrowdFollowingComponent::_vftable__for__IPathFollowingAgentInterface__;
    this[1]._padding_ = (longlong)&___7UCrowdFollowingComponent__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCrowdManager> @ 146f8c7c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCrowdManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCrowdManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UCrowdManagerBase::UCrowdManagerBase((UCrowdManagerBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCrowdManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeneratedNavLinksProxy> @ 146f8c8d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGeneratedNavLinksProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBaseGeneratedNavLinksProxy *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeneratedNavLinksProxy::GetPrivateStaticClass();
  this = (UBaseGeneratedNavLinksProxy *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBaseGeneratedNavLinksProxy *)0x0) {
    UBaseGeneratedNavLinksProxy::UBaseGeneratedNavLinksProxy(this,param_1);
    this->_padding_ = (longlong)&UGeneratedNavLinksProxy::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UGeneratedNavLinksProxy::_vftable__for__INavLinkCustomInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGridPathFollowingComponent> @ 146f8c9a0

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
InternalVTableHelperCtorCaller<UGridPathFollowingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPathFollowingComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGridPathFollowingComponent::GetPrivateStaticClass();
  this = (UPathFollowingComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPathFollowingComponent *)0x0) {
    UPathFollowingComponent::UPathFollowingComponent(this,param_1);
    this->_padding_ = (longlong)&UGridPathFollowingComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGridPathFollowingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UGridPathFollowingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UGridPathFollowingComponent::_vftable__for__IAIResourceInterface__;
    this->_padding_ =
         (longlong)&UGridPathFollowingComponent::_vftable__for__IPathFollowingAgentInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavFilter_AIControllerDefault> @ 146f8caa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNavFilter_AIControllerDefault>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavigationQueryFilter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavFilter_AIControllerDefault::GetPrivateStaticClass();
  this = (UNavigationQueryFilter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavigationQueryFilter *)0x0) {
    UNavigationQueryFilter::UNavigationQueryFilter(this,param_1);
    this->_padding_ = (longlong)&___7UNavFilter_AIControllerDefault__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavLocalGridManager> @ 146f8cb50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavLocalGridManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavLocalGridManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavLocalGridManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPathFollowingComponent> @ 146f8cc10

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

UObject * __cdecl InternalVTableHelperCtorCaller<UPathFollowingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPathFollowingComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPathFollowingComponent::GetPrivateStaticClass();
  pUVar3 = (UPathFollowingComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPathFollowingComponent *)0x0) {
    pUVar3 = UPathFollowingComponent::UPathFollowingComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPathFollowingManager> @ 146f8ccb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPathFollowingManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPathFollowingManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPathFollowingManager__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FAISightQuery,int,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_> @ 146f8cd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAISightQuery,int,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
          (FAISightQuery *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate> param_4)

{
  FAISightQuery *pFVar1;
  FAISightQuery_u_48 FVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  undefined4 uVar13;
  FAIGenericID<FPerceptionListenerCounter> FVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  undefined4 uVar19;
  FAISightQuery *pFVar20;
  int iVar21;
  FAISightQuery *pFVar22;
  FAISightQuery *pFVar23;
  FAISightQuery *pFVar24;
  FAISightQuery *pFVar25;
  FAISightQuery *pFVar26;
  FAISightQuery **ppFVar27;
  float fVar28;
  undefined1 auStack_378 [48];
  FAISightQuery *local_348;
  FAISightQuery *local_338;
  FAISightQuery *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar28 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar28;
    memset(local_320,0,0x2e8);
    ppFVar27 = &local_338;
    do {
      pFVar23 = ppFVar27[1];
      pFVar22 = *ppFVar27;
      pFVar1 = ppFVar27[2];
      local_348._0_4_ = (int)pFVar1;
      iVar21 = (int)(((longlong)pFVar23 - (longlong)pFVar22) / 0x38) + 1;
      pFVar26 = pFVar22;
      if ((int)local_348 != 0) {
LAB_146f8ce30:
        if (8 < iVar21) {
          uVar11 = pFVar26->TargetId;
          fVar28 = pFVar26->Score;
          fVar12 = pFVar26->Importance;
          pFVar20 = pFVar23 + 1;
          pFVar22 = pFVar26 + iVar21 / 2;
          FVar14.Index = (pFVar22->ObserverId).Index;
          uVar15 = pFVar22->TargetId;
          fVar16 = pFVar22->Score;
          fVar17 = pFVar22->Importance;
          dVar3 = (pFVar22->LastSeenLocation).field0_0x0._s_0.X;
          dVar4 = (pFVar22->LastSeenLocation).field0_0x0._s_0.Y;
          dVar5 = (pFVar22->LastSeenLocation).field0_0x0._s_0.Z;
          iVar18 = pFVar22->UserData;
          uVar19 = *(undefined4 *)&pFVar22->field_0x2c;
          FVar2 = pFVar22->field6_0x30;
          pFVar22->ObserverId =
               (FAIGenericID<FPerceptionListenerCounter>)(pFVar26->ObserverId).Index;
          pFVar22->TargetId = uVar11;
          pFVar22->Score = fVar28;
          pFVar22->Importance = fVar12;
          dVar6 = (pFVar26->LastSeenLocation).field0_0x0._s_0.Y;
          (pFVar22->LastSeenLocation).field0_0x0._s_0.X =
               (pFVar26->LastSeenLocation).field0_0x0._s_0.X;
          (pFVar22->LastSeenLocation).field0_0x0._s_0.Y = dVar6;
          iVar21 = pFVar26->UserData;
          uVar13 = *(undefined4 *)&pFVar26->field_0x2c;
          (pFVar22->LastSeenLocation).field0_0x0._s_0.Z =
               (pFVar26->LastSeenLocation).field0_0x0._s_0.Z;
          pFVar22->UserData = iVar21;
          *(undefined4 *)&pFVar22->field_0x2c = uVar13;
          pFVar22->field6_0x30 = pFVar26->field6_0x30;
          pFVar26->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)FVar14.Index;
          pFVar26->TargetId = uVar15;
          pFVar26->Score = fVar16;
          pFVar26->Importance = fVar17;
          (pFVar26->LastSeenLocation).field0_0x0._s_0.X = dVar3;
          (pFVar26->LastSeenLocation).field0_0x0._s_0.Y = dVar4;
          (pFVar26->LastSeenLocation).field0_0x0._s_0.Z = dVar5;
          pFVar26->UserData = iVar18;
          *(undefined4 *)&pFVar26->field_0x2c = uVar19;
          pFVar26->field6_0x30 = FVar2;
          pFVar22 = pFVar26;
LAB_146f8cea0:
          pFVar24 = pFVar22;
          pFVar22 = pFVar24 + 1;
          if (pFVar22 <= pFVar23) goto code_r0x000146f8cea9;
          goto LAB_146f8ceb6;
        }
        if (pFVar26 < pFVar23) {
          pFVar1 = pFVar26 + 1;
          do {
            pFVar22 = pFVar26;
            if (pFVar1 <= pFVar23) {
              pFVar20 = pFVar1;
              if (0xdf < (ulonglong)((longlong)pFVar23 + (0x38 - (longlong)pFVar1))) {
                do {
                  if (pFVar20->Score < pFVar22->Score) {
                    pFVar22 = pFVar20;
                  }
                  if (pFVar20[1].Score < pFVar22->Score) {
                    pFVar22 = pFVar20 + 1;
                  }
                  if (pFVar20[2].Score < pFVar22->Score) {
                    pFVar22 = pFVar20 + 2;
                  }
                  if (pFVar20[3].Score < pFVar22->Score) {
                    pFVar22 = pFVar20 + 3;
                  }
                  pFVar20 = pFVar20 + 4;
                } while (pFVar20 <= pFVar23 + -3);
              }
              for (; pFVar20 <= pFVar23; pFVar20 = pFVar20 + 1) {
                if (pFVar20->Score < pFVar22->Score) {
                  pFVar22 = pFVar20;
                }
              }
            }
            FVar14.Index = (pFVar22->ObserverId).Index;
            uVar15 = pFVar22->TargetId;
            fVar16 = pFVar22->Score;
            fVar17 = pFVar22->Importance;
            pFVar20 = pFVar23 + -1;
            FVar2 = pFVar22->field6_0x30;
            dVar3 = (pFVar22->LastSeenLocation).field0_0x0._s_0.X;
            dVar4 = (pFVar22->LastSeenLocation).field0_0x0._s_0.Y;
            uVar11 = pFVar23->TargetId;
            fVar28 = pFVar23->Score;
            fVar12 = pFVar23->Importance;
            dVar5 = (pFVar22->LastSeenLocation).field0_0x0._s_0.Z;
            iVar18 = pFVar22->UserData;
            uVar19 = *(undefined4 *)&pFVar22->field_0x2c;
            pFVar22->ObserverId =
                 (FAIGenericID<FPerceptionListenerCounter>)(pFVar23->ObserverId).Index;
            pFVar22->TargetId = uVar11;
            pFVar22->Score = fVar28;
            pFVar22->Importance = fVar12;
            dVar6 = (pFVar23->LastSeenLocation).field0_0x0._s_0.Y;
            (pFVar22->LastSeenLocation).field0_0x0._s_0.X =
                 (pFVar23->LastSeenLocation).field0_0x0._s_0.X;
            (pFVar22->LastSeenLocation).field0_0x0._s_0.Y = dVar6;
            iVar21 = pFVar23->UserData;
            uVar13 = *(undefined4 *)&pFVar23->field_0x2c;
            (pFVar22->LastSeenLocation).field0_0x0._s_0.Z =
                 (pFVar23->LastSeenLocation).field0_0x0._s_0.Z;
            pFVar22->UserData = iVar21;
            *(undefined4 *)&pFVar22->field_0x2c = uVar13;
            pFVar22->field6_0x30 = pFVar23->field6_0x30;
            pFVar23->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)FVar14.Index;
            pFVar23->TargetId = uVar15;
            pFVar23->Score = fVar16;
            pFVar23->Importance = fVar17;
            (pFVar23->LastSeenLocation).field0_0x0._s_0.X = dVar3;
            (pFVar23->LastSeenLocation).field0_0x0._s_0.Y = dVar4;
            (pFVar23->LastSeenLocation).field0_0x0._s_0.Z = dVar5;
            pFVar23->UserData = iVar18;
            *(undefined4 *)&pFVar23->field_0x2c = uVar19;
            pFVar23->field6_0x30 = FVar2;
            pFVar23 = pFVar20;
          } while (pFVar26 < pFVar20);
        }
        goto LAB_146f8d02e;
      }
LAB_146f8d01f:
      local_348 = pFVar1;
      HeapSortInternal<FAISightQuery,int,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
                (pFVar22,iVar21,param_3,param_4);
LAB_146f8d02e:
      ppFVar27 = ppFVar27 + -3;
    } while (&local_338 <= ppFVar27);
  }
  return;
code_r0x000146f8cea9:
  if (pFVar26->Score <= pFVar24[1].Score) goto LAB_146f8cea0;
LAB_146f8ceb6:
  do {
    pFVar25 = pFVar20;
    pFVar20 = pFVar25 + -1;
    if (pFVar20 <= pFVar26) break;
  } while (pFVar25[-1].Score <= pFVar26->Score);
  uVar7 = pFVar20->ObserverId;
  uVar8 = pFVar20->TargetId;
  uVar9 = pFVar25[-1].Score;
  uVar10 = pFVar25[-1].Importance;
  if (pFVar22 <= pFVar20) {
    FVar14.Index = (pFVar22->ObserverId).Index;
    uVar11 = pFVar22->TargetId;
    fVar28 = pFVar24[1].Score;
    fVar12 = pFVar24[1].Importance;
    dVar3 = pFVar24[1].LastSeenLocation.field0_0x0._s_0.X;
    dVar4 = pFVar24[1].LastSeenLocation.field0_0x0._s_0.Y;
    dVar5 = pFVar24[1].LastSeenLocation.field0_0x0._s_0.Z;
    iVar18 = pFVar24[1].UserData;
    uVar19 = *(undefined4 *)&pFVar24[1].field_0x2c;
    FVar2 = pFVar24[1].field6_0x30;
    pFVar22->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)uVar7;
    pFVar22->TargetId = uVar8;
    pFVar24[1].Score = (float)uVar9;
    pFVar24[1].Importance = (float)uVar10;
    dVar6 = pFVar25[-1].LastSeenLocation.field0_0x0._s_0.Y;
    pFVar24[1].LastSeenLocation.field0_0x0._s_0.X = pFVar25[-1].LastSeenLocation.field0_0x0._s_0.X;
    pFVar24[1].LastSeenLocation.field0_0x0._s_0.Y = dVar6;
    iVar21 = pFVar25[-1].UserData;
    uVar13 = *(undefined4 *)&pFVar25[-1].field_0x2c;
    pFVar24[1].LastSeenLocation.field0_0x0._s_0.Z = pFVar25[-1].LastSeenLocation.field0_0x0._s_0.Z;
    pFVar24[1].UserData = iVar21;
    *(undefined4 *)&pFVar24[1].field_0x2c = uVar13;
    pFVar24[1].field6_0x30 = pFVar25[-1].field6_0x30;
    pFVar20->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)FVar14.Index;
    pFVar20->TargetId = uVar11;
    pFVar25[-1].Score = fVar28;
    pFVar25[-1].Importance = fVar12;
    pFVar25[-1].LastSeenLocation.field0_0x0._s_0.X = dVar3;
    pFVar25[-1].LastSeenLocation.field0_0x0._s_0.Y = dVar4;
    pFVar25[-1].LastSeenLocation.field0_0x0._s_0.Z = dVar5;
    pFVar25[-1].UserData = iVar18;
    *(undefined4 *)&pFVar25[-1].field_0x2c = uVar19;
    pFVar25[-1].field6_0x30 = FVar2;
    goto LAB_146f8cea0;
  }
  FVar14.Index = (pFVar26->ObserverId).Index;
  uVar11 = pFVar26->TargetId;
  fVar28 = pFVar26->Score;
  fVar12 = pFVar26->Importance;
  dVar3 = (pFVar26->LastSeenLocation).field0_0x0._s_0.X;
  dVar4 = (pFVar26->LastSeenLocation).field0_0x0._s_0.Y;
  local_348._0_4_ = (int)local_348 + -1;
  dVar5 = (pFVar26->LastSeenLocation).field0_0x0._s_0.Z;
  iVar18 = pFVar26->UserData;
  uVar19 = *(undefined4 *)&pFVar26->field_0x2c;
  FVar2 = pFVar26->field6_0x30;
  pFVar26->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)uVar7;
  pFVar26->TargetId = uVar8;
  pFVar26->Score = (float)uVar9;
  pFVar26->Importance = (float)uVar10;
  dVar6 = pFVar25[-1].LastSeenLocation.field0_0x0._s_0.Y;
  (pFVar26->LastSeenLocation).field0_0x0._s_0.X = pFVar25[-1].LastSeenLocation.field0_0x0._s_0.X;
  (pFVar26->LastSeenLocation).field0_0x0._s_0.Y = dVar6;
  iVar21 = pFVar25[-1].UserData;
  uVar13 = *(undefined4 *)&pFVar25[-1].field_0x2c;
  (pFVar26->LastSeenLocation).field0_0x0._s_0.Z = pFVar25[-1].LastSeenLocation.field0_0x0._s_0.Z;
  pFVar26->UserData = iVar21;
  *(undefined4 *)&pFVar26->field_0x2c = uVar13;
  pFVar26->field6_0x30 = pFVar25[-1].field6_0x30;
  pFVar20->ObserverId = (FAIGenericID<FPerceptionListenerCounter>)FVar14.Index;
  pFVar20->TargetId = uVar11;
  pFVar25[-1].Score = fVar28;
  pFVar25[-1].Importance = fVar12;
  pFVar25[-1].LastSeenLocation.field0_0x0._s_0.X = dVar3;
  pFVar25[-1].LastSeenLocation.field0_0x0._s_0.Y = dVar4;
  pFVar25[-1].LastSeenLocation.field0_0x0._s_0.Z = dVar5;
  pFVar25[-1].UserData = iVar18;
  *(undefined4 *)&pFVar25[-1].field_0x2c = uVar19;
  pFVar25[-1].field6_0x30 = FVar2;
  if (((longlong)pFVar20 + (-0x38 - (longlong)pFVar26)) / 0x38 <
      ((longlong)pFVar23 - (longlong)pFVar22) / 0x38) {
    if (pFVar22 < pFVar23) {
      *ppFVar27 = pFVar22;
      ppFVar27[1] = pFVar23;
      *(int *)(ppFVar27 + 2) = (int)local_348;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar20 <= pFVar26 + 1) goto LAB_146f8d02e;
    pFVar23 = pFVar25 + -2;
    pFVar22 = pFVar26;
  }
  else {
    if (pFVar26 + 1 < pFVar20) {
      *ppFVar27 = pFVar26;
      ppFVar27[1] = pFVar25 + -2;
      *(int *)(ppFVar27 + 2) = (int)local_348;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar23 <= pFVar22) goto LAB_146f8d02e;
  }
  iVar21 = (int)(((longlong)pFVar23 - (longlong)pFVar22) / 0x38) + 1;
  pFVar26 = pFVar22;
  if ((int)local_348 == 0) goto LAB_146f8d01f;
  goto LAB_146f8ce30;
}

// IntroSortInternal<UAIPerceptionSystem::FDelayedStimulus,int,FIdentityFunctor,TDereferenceWrapper<UAIPerceptionSystem::FDelayedStimulus,`UAIPerceptionSystem::DeliverDelayedStimuli'::__l2::FTimestampSort>_> @ 146f8d180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UAIPerceptionSystem::FDelayedStimulus,int,FIdentityFunctor,TDereferenceWrapper<UAIPerceptionSystem::FDelayedStimulus,_UAIPerceptionSystem::DeliverDelayedStimuli_::__l2::FTimestampSort>_>
          (FDelayedStimulus *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UAIPerceptionSystem::FDelayedStimulus,_protected:_bool___cdecl_UAIPerceptionSystem::DeliverDelayedStimuli(UAIPerceptionSystem::EDelayedStimulusSorting)_::_2_::FTimestampSort>
          param_4)

{
  FDelayedStimulus *pFVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FName FVar10;
  undefined8 uVar11;
  double dVar12;
  FName FVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FAIGenericID<FPerceptionListenerCounter> FVar17;
  int iVar18;
  float fVar19;
  undefined4 uVar20;
  undefined3 uVar21;
  FNameEntryId FVar22;
  FAIGenericID<FPerceptionListenerCounter> FVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  uchar uVar28;
  undefined3 uVar29;
  FNameEntryId FVar30;
  FDelayedStimulus *pFVar31;
  int iVar32;
  FDelayedStimulus *pFVar33;
  FDelayedStimulus *pFVar34;
  FDelayedStimulus *pFVar35;
  FDelayedStimulus *pFVar36;
  FDelayedStimulus *pFVar37;
  FDelayedStimulus **ppFVar38;
  float fVar39;
  undefined1 auStack_3a8 [48];
  FDelayedStimulus *local_378;
  FDelayedStimulus *local_368;
  FDelayedStimulus *local_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  if (1 < param_2) {
    local_360 = param_1 + (longlong)param_2 + -1;
    local_368 = param_1;
    fVar39 = logf((float)param_2 * (float)param_2);
    local_358 = (undefined4)(longlong)fVar39;
    memset(local_350,0,0x2e8);
    ppFVar38 = &local_368;
    do {
      pFVar34 = ppFVar38[1];
      pFVar31 = *ppFVar38;
      pFVar1 = ppFVar38[2];
      local_378._0_4_ = (int)pFVar1;
      iVar32 = (int)(((longlong)pFVar34 - (longlong)pFVar31) / 0x70) + 1;
      pFVar37 = pFVar31;
      if ((int)local_378 != 0) {
LAB_146f8d260:
        if (8 < iVar32) {
          FVar17.Index = (pFVar37->ListenerId).Index;
          iVar18 = (pFVar37->Instigator).WeakPtr.ObjectIndex;
          pFVar33 = pFVar34 + 1;
          pFVar31 = pFVar37 + iVar32 / 2;
          dVar2 = pFVar31->DeliveryTimestamp;
          FVar23.Index = (pFVar31->ListenerId).Index;
          iVar32 = (pFVar31->Instigator).WeakPtr.ObjectIndex;
          uVar3 = *(undefined8 *)&(pFVar31->Instigator).WeakPtr.ObjectSerialNumber;
          fVar24 = (pFVar31->Stimulus).Age;
          fVar25 = (pFVar31->Stimulus).ExpirationAge;
          fVar26 = (pFVar31->Stimulus).Strength;
          uVar27 = *(undefined4 *)&(pFVar31->Stimulus).field_0xc;
          dVar4 = (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.X;
          dVar5 = (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.Y;
          dVar6 = (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.Z;
          dVar7 = (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.X;
          dVar8 = (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.Y;
          dVar9 = (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.Z;
          FVar10 = (pFVar31->Stimulus).Tag;
          uVar28 = (pFVar31->Stimulus).Type.Index;
          uVar29 = *(undefined3 *)&(pFVar31->Stimulus).Type.field_0x1;
          FVar30.Value = (pFVar31->Stimulus).Type.Name.ComparisonIndex.Value;
          uVar11 = *(undefined8 *)&(pFVar31->Stimulus).Type.Name.Number;
          pFVar31->DeliveryTimestamp = pFVar37->DeliveryTimestamp;
          pFVar31->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar17.Index;
          (pFVar31->Instigator).WeakPtr.ObjectIndex = iVar18;
          fVar39 = (pFVar37->Stimulus).Age;
          fVar19 = (pFVar37->Stimulus).ExpirationAge;
          *(undefined8 *)&(pFVar31->Instigator).WeakPtr.ObjectSerialNumber =
               *(undefined8 *)&(pFVar37->Instigator).WeakPtr.ObjectSerialNumber;
          (pFVar31->Stimulus).Age = fVar39;
          (pFVar31->Stimulus).ExpirationAge = fVar19;
          uVar20 = *(undefined4 *)&(pFVar37->Stimulus).field_0xc;
          dVar12 = (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.X;
          (pFVar31->Stimulus).Strength = (pFVar37->Stimulus).Strength;
          *(undefined4 *)&(pFVar31->Stimulus).field_0xc = uVar20;
          (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.X = dVar12;
          dVar12 = (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.Z;
          (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.Y =
               (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.Y;
          (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.Z = dVar12;
          dVar12 = (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.Y;
          (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.X =
               (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.X;
          (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.Y = dVar12;
          FVar13 = (pFVar37->Stimulus).Tag;
          (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.Z =
               (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.Z;
          (pFVar31->Stimulus).Tag = FVar13;
          uVar21 = *(undefined3 *)&(pFVar37->Stimulus).Type.field_0x1;
          FVar22.Value = (pFVar37->Stimulus).Type.Name.ComparisonIndex.Value;
          uVar14 = *(undefined8 *)&(pFVar37->Stimulus).Type.Name.Number;
          (pFVar31->Stimulus).Type.Index = (pFVar37->Stimulus).Type.Index;
          *(undefined3 *)&(pFVar31->Stimulus).Type.field_0x1 = uVar21;
          (pFVar31->Stimulus).Type.Name.ComparisonIndex = (FNameEntryId)FVar22.Value;
          *(undefined8 *)&(pFVar31->Stimulus).Type.Name.Number = uVar14;
          pFVar37->DeliveryTimestamp = dVar2;
          pFVar37->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar23.Index;
          (pFVar37->Instigator).WeakPtr.ObjectIndex = iVar32;
          *(undefined8 *)&(pFVar37->Instigator).WeakPtr.ObjectSerialNumber = uVar3;
          (pFVar37->Stimulus).Age = fVar24;
          (pFVar37->Stimulus).ExpirationAge = fVar25;
          (pFVar37->Stimulus).Strength = fVar26;
          *(undefined4 *)&(pFVar37->Stimulus).field_0xc = uVar27;
          (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.X = dVar4;
          (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.Y = dVar5;
          (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.Z = dVar6;
          (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.X = dVar7;
          (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.Y = dVar8;
          (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.Z = dVar9;
          (pFVar37->Stimulus).Tag = FVar10;
          (pFVar37->Stimulus).Type.Index = uVar28;
          *(undefined3 *)&(pFVar37->Stimulus).Type.field_0x1 = uVar29;
          (pFVar37->Stimulus).Type.Name.ComparisonIndex = (FNameEntryId)FVar30.Value;
          *(undefined8 *)&(pFVar37->Stimulus).Type.Name.Number = uVar11;
          pFVar31 = pFVar37;
LAB_146f8d300:
          pFVar35 = pFVar31;
          pFVar31 = pFVar35 + 1;
          if (pFVar31 <= pFVar34) goto code_r0x000146f8d309;
          goto LAB_146f8d315;
        }
        if (pFVar37 < pFVar34) {
          pFVar1 = pFVar37 + 1;
          do {
            pFVar31 = pFVar37;
            if (pFVar1 <= pFVar34) {
              pFVar33 = pFVar1;
              if (0x1bf < (ulonglong)((longlong)pFVar34 + (0x70 - (longlong)pFVar1))) {
                do {
                  dVar2 = pFVar31->DeliveryTimestamp;
                  if (pFVar31->DeliveryTimestamp < pFVar33->DeliveryTimestamp) {
                    pFVar31 = pFVar33;
                    dVar2 = pFVar33->DeliveryTimestamp;
                  }
                  if (dVar2 < pFVar33[1].DeliveryTimestamp) {
                    pFVar31 = pFVar33 + 1;
                  }
                  dVar2 = pFVar31->DeliveryTimestamp;
                  if (pFVar31->DeliveryTimestamp < pFVar33[2].DeliveryTimestamp) {
                    pFVar31 = pFVar33 + 2;
                    dVar2 = pFVar33[2].DeliveryTimestamp;
                  }
                  if (dVar2 < pFVar33[3].DeliveryTimestamp) {
                    pFVar31 = pFVar33 + 3;
                  }
                  pFVar33 = pFVar33 + 4;
                } while (pFVar33 <= pFVar34 + -3);
              }
              for (; pFVar33 <= pFVar34; pFVar33 = pFVar33 + 1) {
                if (pFVar31->DeliveryTimestamp < pFVar33->DeliveryTimestamp) {
                  pFVar31 = pFVar33;
                }
              }
            }
            dVar2 = pFVar31->DeliveryTimestamp;
            FVar23.Index = (pFVar31->ListenerId).Index;
            iVar18 = (pFVar31->Instigator).WeakPtr.ObjectIndex;
            pFVar33 = pFVar34 + -1;
            uVar3 = *(undefined8 *)&(pFVar31->Instigator).WeakPtr.ObjectSerialNumber;
            fVar24 = (pFVar31->Stimulus).Age;
            fVar25 = (pFVar31->Stimulus).ExpirationAge;
            fVar26 = (pFVar31->Stimulus).Strength;
            uVar27 = *(undefined4 *)&(pFVar31->Stimulus).field_0xc;
            dVar4 = (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.X;
            FVar17.Index = (pFVar34->ListenerId).Index;
            iVar32 = (pFVar34->Instigator).WeakPtr.ObjectIndex;
            dVar5 = (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.Y;
            dVar6 = (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.Z;
            dVar7 = (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.X;
            dVar8 = (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.Y;
            dVar9 = (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.Z;
            FVar10 = (pFVar31->Stimulus).Tag;
            uVar28 = (pFVar31->Stimulus).Type.Index;
            uVar29 = *(undefined3 *)&(pFVar31->Stimulus).Type.field_0x1;
            FVar30.Value = (pFVar31->Stimulus).Type.Name.ComparisonIndex.Value;
            uVar11 = *(undefined8 *)&(pFVar31->Stimulus).Type.Name.Number;
            pFVar31->DeliveryTimestamp = pFVar34->DeliveryTimestamp;
            pFVar31->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar17.Index;
            (pFVar31->Instigator).WeakPtr.ObjectIndex = iVar32;
            fVar39 = (pFVar34->Stimulus).Age;
            fVar19 = (pFVar34->Stimulus).ExpirationAge;
            *(undefined8 *)&(pFVar31->Instigator).WeakPtr.ObjectSerialNumber =
                 *(undefined8 *)&(pFVar34->Instigator).WeakPtr.ObjectSerialNumber;
            (pFVar31->Stimulus).Age = fVar39;
            (pFVar31->Stimulus).ExpirationAge = fVar19;
            uVar20 = *(undefined4 *)&(pFVar34->Stimulus).field_0xc;
            dVar12 = (pFVar34->Stimulus).StimulusLocation.field0_0x0._s_0.X;
            (pFVar31->Stimulus).Strength = (pFVar34->Stimulus).Strength;
            *(undefined4 *)&(pFVar31->Stimulus).field_0xc = uVar20;
            (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.X = dVar12;
            dVar12 = (pFVar34->Stimulus).StimulusLocation.field0_0x0._s_0.Z;
            (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.Y =
                 (pFVar34->Stimulus).StimulusLocation.field0_0x0._s_0.Y;
            (pFVar31->Stimulus).StimulusLocation.field0_0x0._s_0.Z = dVar12;
            dVar12 = (pFVar34->Stimulus).ReceiverLocation.field0_0x0._s_0.Y;
            (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.X =
                 (pFVar34->Stimulus).ReceiverLocation.field0_0x0._s_0.X;
            (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.Y = dVar12;
            FVar13 = (pFVar34->Stimulus).Tag;
            (pFVar31->Stimulus).ReceiverLocation.field0_0x0._s_0.Z =
                 (pFVar34->Stimulus).ReceiverLocation.field0_0x0._s_0.Z;
            (pFVar31->Stimulus).Tag = FVar13;
            uVar21 = *(undefined3 *)&(pFVar34->Stimulus).Type.field_0x1;
            FVar22.Value = (pFVar34->Stimulus).Type.Name.ComparisonIndex.Value;
            uVar14 = *(undefined8 *)&(pFVar34->Stimulus).Type.Name.Number;
            (pFVar31->Stimulus).Type.Index = (pFVar34->Stimulus).Type.Index;
            *(undefined3 *)&(pFVar31->Stimulus).Type.field_0x1 = uVar21;
            (pFVar31->Stimulus).Type.Name.ComparisonIndex = (FNameEntryId)FVar22.Value;
            *(undefined8 *)&(pFVar31->Stimulus).Type.Name.Number = uVar14;
            pFVar34->DeliveryTimestamp = dVar2;
            pFVar34->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar23.Index;
            (pFVar34->Instigator).WeakPtr.ObjectIndex = iVar18;
            *(undefined8 *)&(pFVar34->Instigator).WeakPtr.ObjectSerialNumber = uVar3;
            (pFVar34->Stimulus).Age = fVar24;
            (pFVar34->Stimulus).ExpirationAge = fVar25;
            (pFVar34->Stimulus).Strength = fVar26;
            *(undefined4 *)&(pFVar34->Stimulus).field_0xc = uVar27;
            (pFVar34->Stimulus).StimulusLocation.field0_0x0._s_0.X = dVar4;
            (pFVar34->Stimulus).StimulusLocation.field0_0x0._s_0.Y = dVar5;
            (pFVar34->Stimulus).StimulusLocation.field0_0x0._s_0.Z = dVar6;
            (pFVar34->Stimulus).ReceiverLocation.field0_0x0._s_0.X = dVar7;
            (pFVar34->Stimulus).ReceiverLocation.field0_0x0._s_0.Y = dVar8;
            (pFVar34->Stimulus).ReceiverLocation.field0_0x0._s_0.Z = dVar9;
            (pFVar34->Stimulus).Tag = FVar10;
            (pFVar34->Stimulus).Type.Index = uVar28;
            *(undefined3 *)&(pFVar34->Stimulus).Type.field_0x1 = uVar29;
            (pFVar34->Stimulus).Type.Name.ComparisonIndex = (FNameEntryId)FVar30.Value;
            *(undefined8 *)&(pFVar34->Stimulus).Type.Name.Number = uVar11;
            pFVar34 = pFVar33;
          } while (pFVar37 < pFVar33);
        }
        goto LAB_146f8d500;
      }
LAB_146f8d4f1:
      local_378 = pFVar1;
      HeapSortInternal<UAIPerceptionSystem::FDelayedStimulus,int,FIdentityFunctor,TDereferenceWrapper<UAIPerceptionSystem::FDelayedStimulus,_UAIPerceptionSystem::DeliverDelayedStimuli_::__l2::FTimestampSort>_>
                (pFVar31,iVar32,param_3,param_4);
LAB_146f8d500:
      ppFVar38 = ppFVar38 + -3;
    } while (&local_368 <= ppFVar38);
  }
  return;
code_r0x000146f8d309:
  if (pFVar31->DeliveryTimestamp < pFVar37->DeliveryTimestamp ||
      pFVar31->DeliveryTimestamp == pFVar37->DeliveryTimestamp) goto LAB_146f8d300;
LAB_146f8d315:
  do {
    pFVar36 = pFVar33;
    pFVar33 = pFVar36 + -1;
    if (pFVar33 <= pFVar37) break;
  } while (pFVar37->DeliveryTimestamp < pFVar33->DeliveryTimestamp ||
           pFVar37->DeliveryTimestamp == pFVar33->DeliveryTimestamp);
  uVar15 = pFVar36[-1].ListenerId;
  uVar16 = pFVar36[-1].Instigator.WeakPtr.ObjectIndex;
  if (pFVar31 <= pFVar33) {
    dVar2 = pFVar31->DeliveryTimestamp;
    FVar17.Index = pFVar35[1].ListenerId.Index;
    iVar32 = pFVar35[1].Instigator.WeakPtr.ObjectIndex;
    uVar3 = *(undefined8 *)&pFVar35[1].Instigator.WeakPtr.ObjectSerialNumber;
    fVar24 = pFVar35[1].Stimulus.Age;
    fVar25 = pFVar35[1].Stimulus.ExpirationAge;
    fVar26 = pFVar35[1].Stimulus.Strength;
    uVar27 = *(undefined4 *)&pFVar35[1].Stimulus.field_0xc;
    dVar4 = pFVar35[1].Stimulus.StimulusLocation.field0_0x0._s_0.X;
    dVar5 = pFVar35[1].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
    dVar6 = pFVar35[1].Stimulus.StimulusLocation.field0_0x0._s_0.Z;
    dVar7 = pFVar35[1].Stimulus.ReceiverLocation.field0_0x0._s_0.X;
    dVar8 = pFVar35[1].Stimulus.ReceiverLocation.field0_0x0._s_0.Y;
    dVar9 = pFVar35[1].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
    FVar10 = pFVar35[1].Stimulus.Tag;
    uVar28 = pFVar35[1].Stimulus.Type.Index;
    uVar29 = *(undefined3 *)&pFVar35[1].Stimulus.Type.field_0x1;
    FVar30.Value = pFVar35[1].Stimulus.Type.Name.ComparisonIndex.Value;
    uVar11 = *(undefined8 *)&pFVar35[1].Stimulus.Type.Name.Number;
    pFVar31->DeliveryTimestamp = pFVar33->DeliveryTimestamp;
    pFVar35[1].ListenerId = (FAIGenericID<FPerceptionListenerCounter>)uVar15;
    pFVar35[1].Instigator.WeakPtr.ObjectIndex = uVar16;
    fVar39 = pFVar36[-1].Stimulus.Age;
    fVar19 = pFVar36[-1].Stimulus.ExpirationAge;
    *(undefined8 *)&pFVar35[1].Instigator.WeakPtr.ObjectSerialNumber =
         *(undefined8 *)&pFVar36[-1].Instigator.WeakPtr.ObjectSerialNumber;
    pFVar35[1].Stimulus.Age = fVar39;
    pFVar35[1].Stimulus.ExpirationAge = fVar19;
    uVar20 = *(undefined4 *)&pFVar36[-1].Stimulus.field_0xc;
    dVar12 = pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.X;
    pFVar35[1].Stimulus.Strength = pFVar36[-1].Stimulus.Strength;
    *(undefined4 *)&pFVar35[1].Stimulus.field_0xc = uVar20;
    pFVar35[1].Stimulus.StimulusLocation.field0_0x0._s_0.X = dVar12;
    dVar12 = pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.Z;
    pFVar35[1].Stimulus.StimulusLocation.field0_0x0._s_0.Y =
         pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
    pFVar35[1].Stimulus.StimulusLocation.field0_0x0._s_0.Z = dVar12;
    dVar12 = pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.Y;
    pFVar35[1].Stimulus.ReceiverLocation.field0_0x0._s_0.X =
         pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.X;
    pFVar35[1].Stimulus.ReceiverLocation.field0_0x0._s_0.Y = dVar12;
    FVar13 = pFVar36[-1].Stimulus.Tag;
    pFVar35[1].Stimulus.ReceiverLocation.field0_0x0._s_0.Z =
         pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
    pFVar35[1].Stimulus.Tag = FVar13;
    uVar21 = *(undefined3 *)&pFVar36[-1].Stimulus.Type.field_0x1;
    FVar22.Value = pFVar36[-1].Stimulus.Type.Name.ComparisonIndex.Value;
    uVar14 = *(undefined8 *)&pFVar36[-1].Stimulus.Type.Name.Number;
    pFVar35[1].Stimulus.Type.Index = pFVar36[-1].Stimulus.Type.Index;
    *(undefined3 *)&pFVar35[1].Stimulus.Type.field_0x1 = uVar21;
    pFVar35[1].Stimulus.Type.Name.ComparisonIndex = (FNameEntryId)FVar22.Value;
    *(undefined8 *)&pFVar35[1].Stimulus.Type.Name.Number = uVar14;
    pFVar33->DeliveryTimestamp = dVar2;
    pFVar36[-1].ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar17.Index;
    pFVar36[-1].Instigator.WeakPtr.ObjectIndex = iVar32;
    *(undefined8 *)&pFVar36[-1].Instigator.WeakPtr.ObjectSerialNumber = uVar3;
    pFVar36[-1].Stimulus.Age = fVar24;
    pFVar36[-1].Stimulus.ExpirationAge = fVar25;
    pFVar36[-1].Stimulus.Strength = fVar26;
    *(undefined4 *)&pFVar36[-1].Stimulus.field_0xc = uVar27;
    pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.X = dVar4;
    pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.Y = dVar5;
    pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.Z = dVar6;
    pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.X = dVar7;
    pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.Y = dVar8;
    pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.Z = dVar9;
    pFVar36[-1].Stimulus.Tag = FVar10;
    pFVar36[-1].Stimulus.Type.Index = uVar28;
    *(undefined3 *)&pFVar36[-1].Stimulus.Type.field_0x1 = uVar29;
    pFVar36[-1].Stimulus.Type.Name.ComparisonIndex = (FNameEntryId)FVar30.Value;
    *(undefined8 *)&pFVar36[-1].Stimulus.Type.Name.Number = uVar11;
    goto LAB_146f8d300;
  }
  dVar2 = pFVar37->DeliveryTimestamp;
  FVar17.Index = (pFVar37->ListenerId).Index;
  iVar32 = (pFVar37->Instigator).WeakPtr.ObjectIndex;
  uVar3 = *(undefined8 *)&(pFVar37->Instigator).WeakPtr.ObjectSerialNumber;
  fVar24 = (pFVar37->Stimulus).Age;
  fVar25 = (pFVar37->Stimulus).ExpirationAge;
  local_378._0_4_ = (int)local_378 + -1;
  fVar26 = (pFVar37->Stimulus).Strength;
  uVar27 = *(undefined4 *)&(pFVar37->Stimulus).field_0xc;
  dVar4 = (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.X;
  dVar5 = (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.Y;
  dVar6 = (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.Z;
  dVar7 = (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.X;
  dVar8 = (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.Y;
  dVar9 = (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.Z;
  FVar10 = (pFVar37->Stimulus).Tag;
  uVar28 = (pFVar37->Stimulus).Type.Index;
  uVar29 = *(undefined3 *)&(pFVar37->Stimulus).Type.field_0x1;
  FVar30.Value = (pFVar37->Stimulus).Type.Name.ComparisonIndex.Value;
  uVar11 = *(undefined8 *)&(pFVar37->Stimulus).Type.Name.Number;
  pFVar37->DeliveryTimestamp = pFVar33->DeliveryTimestamp;
  pFVar37->ListenerId = (FAIGenericID<FPerceptionListenerCounter>)uVar15;
  (pFVar37->Instigator).WeakPtr.ObjectIndex = uVar16;
  fVar39 = pFVar36[-1].Stimulus.Age;
  fVar19 = pFVar36[-1].Stimulus.ExpirationAge;
  *(undefined8 *)&(pFVar37->Instigator).WeakPtr.ObjectSerialNumber =
       *(undefined8 *)&pFVar36[-1].Instigator.WeakPtr.ObjectSerialNumber;
  (pFVar37->Stimulus).Age = fVar39;
  (pFVar37->Stimulus).ExpirationAge = fVar19;
  uVar20 = *(undefined4 *)&pFVar36[-1].Stimulus.field_0xc;
  dVar12 = pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.X;
  (pFVar37->Stimulus).Strength = pFVar36[-1].Stimulus.Strength;
  *(undefined4 *)&(pFVar37->Stimulus).field_0xc = uVar20;
  (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.X = dVar12;
  dVar12 = pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.Z;
  (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.Y =
       pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.Y;
  (pFVar37->Stimulus).StimulusLocation.field0_0x0._s_0.Z = dVar12;
  dVar12 = pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.Y;
  (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.X =
       pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.X;
  (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.Y = dVar12;
  FVar13 = pFVar36[-1].Stimulus.Tag;
  (pFVar37->Stimulus).ReceiverLocation.field0_0x0._s_0.Z =
       pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.Z;
  (pFVar37->Stimulus).Tag = FVar13;
  uVar21 = *(undefined3 *)&pFVar36[-1].Stimulus.Type.field_0x1;
  FVar22.Value = pFVar36[-1].Stimulus.Type.Name.ComparisonIndex.Value;
  uVar14 = *(undefined8 *)&pFVar36[-1].Stimulus.Type.Name.Number;
  (pFVar37->Stimulus).Type.Index = pFVar36[-1].Stimulus.Type.Index;
  *(undefined3 *)&(pFVar37->Stimulus).Type.field_0x1 = uVar21;
  (pFVar37->Stimulus).Type.Name.ComparisonIndex = (FNameEntryId)FVar22.Value;
  *(undefined8 *)&(pFVar37->Stimulus).Type.Name.Number = uVar14;
  pFVar33->DeliveryTimestamp = dVar2;
  pFVar36[-1].ListenerId = (FAIGenericID<FPerceptionListenerCounter>)FVar17.Index;
  pFVar36[-1].Instigator.WeakPtr.ObjectIndex = iVar32;
  *(undefined8 *)&pFVar36[-1].Instigator.WeakPtr.ObjectSerialNumber = uVar3;
  pFVar36[-1].Stimulus.Age = fVar24;
  pFVar36[-1].Stimulus.ExpirationAge = fVar25;
  pFVar36[-1].Stimulus.Strength = fVar26;
  *(undefined4 *)&pFVar36[-1].Stimulus.field_0xc = uVar27;
  pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.X = dVar4;
  pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.Y = dVar5;
  pFVar36[-1].Stimulus.StimulusLocation.field0_0x0._s_0.Z = dVar6;
  pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.X = dVar7;
  pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.Y = dVar8;
  pFVar36[-1].Stimulus.ReceiverLocation.field0_0x0._s_0.Z = dVar9;
  pFVar36[-1].Stimulus.Tag = FVar10;
  pFVar36[-1].Stimulus.Type.Index = uVar28;
  *(undefined3 *)&pFVar36[-1].Stimulus.Type.field_0x1 = uVar29;
  pFVar36[-1].Stimulus.Type.Name.ComparisonIndex = (FNameEntryId)FVar30.Value;
  *(undefined8 *)&pFVar36[-1].Stimulus.Type.Name.Number = uVar11;
  if (((longlong)pFVar33 + (-0x70 - (longlong)pFVar37)) / 0x70 <
      ((longlong)pFVar34 - (longlong)pFVar31) / 0x70) {
    if (pFVar31 < pFVar34) {
      *ppFVar38 = pFVar31;
      ppFVar38[1] = pFVar34;
      *(int *)(ppFVar38 + 2) = (int)local_378;
      ppFVar38 = ppFVar38 + 3;
    }
    if (pFVar33 <= pFVar37 + 1) goto LAB_146f8d500;
    pFVar34 = pFVar36 + -2;
    pFVar31 = pFVar37;
  }
  else {
    if (pFVar37 + 1 < pFVar33) {
      *ppFVar38 = pFVar37;
      ppFVar38[1] = pFVar36 + -2;
      *(int *)(ppFVar38 + 2) = (int)local_378;
      ppFVar38 = ppFVar38 + 3;
    }
    if (pFVar34 <= pFVar31) goto LAB_146f8d500;
  }
  iVar32 = (int)(((longlong)pFVar34 - (longlong)pFVar31) / 0x70) + 1;
  pFVar37 = pFVar31;
  if ((int)local_378 == 0) goto LAB_146f8d4f1;
  goto LAB_146f8d260;
}

// IntroSortInternal<`UAISense_Sight::Update'::__l2::FQueryOperation,int,FIdentityFunctor,TDereferenceWrapper<`UAISense_Sight::Update'::__l2::FQueryOperation,`UAISense_Sight::Update'::__l79::<lambda_2>_>_> @ 146f8d6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UAISense_Sight::Update_::__l2::FQueryOperation,int,FIdentityFunctor,TDereferenceWrapper<_UAISense_Sight::Update_::__l2::FQueryOperation,_UAISense_Sight::Update_::__l79::<lambda_2>_>_>
          (FQueryOperation *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_virtual_float___cdecl_UAISense_Sight::Update(void)_::_2_::FQueryOperation,_protected:_virtual_float___cdecl_UAISense_Sight::Update(void)_::_79_::<lambda_2>_>
          param_4)

{
  FQueryOperation *pFVar1;
  FQueryOperation FVar2;
  char cVar3;
  int iVar4;
  FQueryOperation *pFVar5;
  FQueryOperation **ppFVar6;
  FQueryOperation *pFVar7;
  FQueryOperation *pFVar8;
  FQueryOperation *pFVar9;
  FQueryOperation *pFVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  FQueryOperation *local_338;
  FQueryOperation *local_328;
  FQueryOperation *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar11;
    memset(local_310,0,0x2e8);
    ppFVar6 = &local_328;
    do {
      pFVar8 = ppFVar6[1];
      pFVar10 = *ppFVar6;
      pFVar1 = ppFVar6[2];
      iVar4 = (int)((longlong)pFVar8 - (longlong)pFVar10 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar10;
      if ((int)local_338 != 0) {
LAB_146f8d750:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          pFVar7 = pFVar8 + 1;
          FVar2 = pFVar9[iVar4 >> 1];
          pFVar9[iVar4 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar5 = pFVar9;
LAB_146f8d780:
          pFVar10 = pFVar5 + 1;
          if (pFVar10 <= pFVar8) goto code_r0x000146f8d789;
          goto LAB_146f8d7a0;
        }
        for (; pFVar10 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            cVar3 = pFVar10->bInRange;
            if ((bool)cVar3 == pFVar1->bInRange) {
              cVar3 = pFVar1->Index < pFVar10->Index;
            }
            if (cVar3 != '\0') {
              pFVar10 = pFVar1;
            }
          }
          FVar2 = *pFVar10;
          *pFVar10 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_146f8d86a;
      }
LAB_146f8d859:
      local_338 = pFVar1;
      HeapSortInternal<_UAISense_Sight::Update_::__l2::FQueryOperation,int,FIdentityFunctor,TDereferenceWrapper<_UAISense_Sight::Update_::__l2::FQueryOperation,_UAISense_Sight::Update_::__l79::<lambda_2>_>_>
                (pFVar10,iVar4,param_3,param_4);
LAB_146f8d86a:
      ppFVar6 = ppFVar6 + -3;
    } while (&local_328 <= ppFVar6);
  }
  return;
code_r0x000146f8d789:
  cVar3 = pFVar9->bInRange;
  if ((bool)cVar3 == pFVar10->bInRange) {
    cVar3 = pFVar5[1].Index < pFVar9->Index;
  }
  pFVar5 = pFVar10;
  if (cVar3 == '\0') goto LAB_146f8d780;
LAB_146f8d7a0:
  do {
    pFVar5 = pFVar7;
    pFVar7 = pFVar5 + -1;
    if (pFVar7 <= pFVar9) break;
    cVar3 = pFVar7->bInRange;
    if ((bool)cVar3 == pFVar9->bInRange) {
      cVar3 = pFVar9->Index < pFVar5[-1].Index;
    }
  } while (cVar3 == '\0');
  if (pFVar10 <= pFVar7) {
    FVar2 = *pFVar10;
    *pFVar10 = *pFVar7;
    *pFVar7 = FVar2;
    pFVar5 = pFVar10;
    goto LAB_146f8d780;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar7;
  *pFVar7 = FVar2;
  if ((longlong)((longlong)pFVar7 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar10 & 0xfffffffffffffff8U)) {
    if (pFVar10 < pFVar8) {
      *ppFVar6 = pFVar10;
      ppFVar6[1] = pFVar8;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar7 <= pFVar9 + 1) goto LAB_146f8d86a;
    pFVar8 = pFVar5 + -2;
    pFVar10 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar7) {
      *ppFVar6 = pFVar9;
      ppFVar6[1] = pFVar5 + -2;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar8 <= pFVar10) goto LAB_146f8d86a;
  }
  iVar4 = (int)((longlong)pFVar8 - (longlong)pFVar10 >> 3) + 1;
  pFVar9 = pFVar10;
  if ((int)local_338 == 0) goto LAB_146f8d859;
  goto LAB_146f8d750;
}

// NewObject<UAISense> @ 146f8d910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAISense * __cdecl
NewObject<UAISense>(UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,
                   UObject *param_5,bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UAISense *pUVar2;
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
  pUVar1 = UAISense::StaticClass();
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
  pUVar2 = (UAISense *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RemoveAllSwap<`UAIPerceptionStimuliSourceComponent::OnRegister'::__l3::<lambda_1>_> @ 146f8e2b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_UAIPerceptionStimuliSourceComponent::OnRegister_::__l3::<lambda_1>_>
          (TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar7 = this->ArrayNum;
  bVar4 = false;
  uVar10 = 0;
  if (0 < iVar7) {
    lVar11 = 0;
    iVar9 = iVar7;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar9) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
      }
      pFVar1 = (this->AllocatorInstance).Data;
      lVar2 = *(longlong *)(pFVar1 + lVar11);
      if (lVar2 == 0) {
LAB_146f8e387:
        bVar4 = true;
        uVar6 = 0;
        if ((int)uVar10 < this->ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar9 = ~uVar10 + this->ArrayNum;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar10 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar9) * 8
                  ,(longlong)iVar9 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        pUVar8 = UAISense::StaticClass();
        if (pUVar8 == (UClass *)0x0) goto LAB_146f8e387;
        iVar9 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar9) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((!bVar5) || (*(longlong *)(pFVar1 + lVar11) == 0)) goto LAB_146f8e387;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
      }
      iVar9 = this->ArrayNum;
    } while ((int)uVar10 < iVar9);
    if ((bVar4) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar7 - this->ArrayNum;
}

// ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,`UAISense_Sight::RemoveAllQueriesByListener'::__l2::<lambda_1>_> @ 146f8e600

EReverseForEachResult __cdecl
ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::RemoveAllQueriesByListener_::__l2::<lambda_1>_>
          (TArray<FAISightQuery,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> *param_2)

{
  TFunction<void___cdecl(FAISightQuery_const_&)> *pTVar1;
  code *pcVar2;
  bool bVar3;
  EReverseForEachResult EVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  EVar4 = UnTouched;
  uVar10 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar12 = (longlong)(int)uVar10 * 0x38;
    EVar4 = UnTouched;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pFVar9 = (param_1->AllocatorInstance).Data + lVar12;
      if (*(uint *)pFVar9 == param_2->ListenerId->Index) {
        pTVar1 = param_2->OnRemoveFunc;
        if (*(void **)pTVar1 != (void *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
          pcVar2 = *(code **)pTVar1;
          plVar8 = *(longlong **)&pTVar1->field_0x28;
          if (*(longlong **)&pTVar1->field_0x28 == (longlong *)0x0) {
            plVar8 = (longlong *)&pTVar1->field_0x10;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          (*pcVar2)(uVar6,pFVar9);
        }
        uVar5 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        pFVar9 = (param_1->AllocatorInstance).Data;
        iVar7 = param_1->ArrayNum + ~uVar10;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar9 + lVar12,pFVar9 + (longlong)(param_1->ArrayNum - iVar7) * 0x38,
                  (longlong)iVar7 * 0x38);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        EVar4 = Modified;
      }
      lVar12 = lVar12 + -0x38;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return EVar4;
}

// ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,`UAISense_Sight::RemoveAllQueriesToTarget_Internal'::__l2::<lambda_1>_> @ 146f8e7a0

EReverseForEachResult __cdecl
ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::RemoveAllQueriesToTarget_Internal_::__l2::<lambda_1>_>
          (TArray<FAISightQuery,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> *param_2)

{
  TFunction<void___cdecl(FAISightQuery_const_&)> *pTVar1;
  code *pcVar2;
  bool bVar3;
  EReverseForEachResult EVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  EVar4 = UnTouched;
  uVar10 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar12 = (longlong)(int)uVar10 * 0x38;
    EVar4 = UnTouched;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pFVar9 = (param_1->AllocatorInstance).Data + lVar12;
      if (*(uint *)(pFVar9 + 4) == *param_2->TargetId) {
        pTVar1 = param_2->OnRemoveFunc;
        if (*(void **)pTVar1 != (void *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
          pcVar2 = *(code **)pTVar1;
          plVar8 = *(longlong **)&pTVar1->field_0x28;
          if (*(longlong **)&pTVar1->field_0x28 == (longlong *)0x0) {
            plVar8 = (longlong *)&pTVar1->field_0x10;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          (*pcVar2)(uVar6,pFVar9);
        }
        uVar5 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        pFVar9 = (param_1->AllocatorInstance).Data;
        iVar7 = param_1->ArrayNum + ~uVar10;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar9 + lVar12,pFVar9 + (longlong)(param_1->ArrayNum - iVar7) * 0x38,
                  (longlong)iVar7 * 0x38);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        EVar4 = Modified;
      }
      lVar12 = lVar12 + -0x38;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  return EVar4;
}

// ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,`UAISense_Sight::UnregisterSource'::__l5::<lambda_1>_> @ 146f8e940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EReverseForEachResult __cdecl
ReverseForEach<TArray<FAISightQuery,TSizedDefaultAllocator<32>_>,_UAISense_Sight::UnregisterSource_::__l5::<lambda_1>_>
          (TArray<FAISightQuery,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> *param_2)

{
  UAISense_Sight *pUVar1;
  AActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  EReverseForEachResult EVar5;
  uint uVar6;
  FPerceptionListener *this;
  UAIPerceptionComponent *this_00;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FAIStimulus local_98;
  
  EVar5 = UnTouched;
  uVar9 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 * 0x38;
    EVar5 = UnTouched;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      pFVar8 = (param_1->AllocatorInstance).Data + lVar10;
      if (*(uint *)&pFVar8[4].field_0x0 == *param_2->AsTargetId) {
        if (((pFVar8[0x30].field_0x0 & 1) != 0) && (*param_2->TargetActor != (AActor *)0x0)) {
          this = TMapBase<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
                 ::FindChecked((TMapBase<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
                                *)param_2->ListenersMap,
                               (FAIGenericID<FPerceptionListenerCounter> *)pFVar8);
          bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
          if ((!bVar4) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<1976862326954918650>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Sight.cpp"
                                 ,0x2fa,"Listener.Listener.IsValid()"), bVar4)) {
            pcVar3 = (code *)swi(3);
            EVar5 = (*pcVar3)();
            return EVar5;
          }
          local_98.StimulusLocation.field0_0x0._s_0.X = (double)*(undefined8 *)(pFVar8 + 0x10);
          local_98.StimulusLocation.field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar8 + 0x18);
          pUVar1 = param_2->__this;
          local_98.StimulusLocation.field0_0x0._s_0.Z = (double)*(undefined8 *)(pFVar8 + 0x20);
          local_98.ReceiverLocation.field0_0x0._s_0.X = (this->CachedLocation).field0_0x0._s_0.X;
          local_98.ReceiverLocation.field0_0x0._s_0.Y = (this->CachedLocation).field0_0x0._s_0.Y;
          local_98.Age = 0.0;
          local_98.ReceiverLocation.field0_0x0._s_0.Z = (this->CachedLocation).field0_0x0._s_0.Z;
          local_98.ExpirationAge = 3.4028235e+38;
          local_98.Strength = -1.0;
          local_98.Tag.ComparisonIndex.Value = 0;
          local_98.Tag.Number = 0;
          local_98.Type.Index = 0xff;
          FName::FName(&local_98.Type.Name,L"Invalid");
          local_98.bExpired = 0;
          local_98.bSuccessfullySensed = 0;
          local_98.bWantsToNotifyOnlyOnValueChange = (char)pUVar1->_padding_ == '\x01';
          local_98.Type.Index = *(uchar *)((longlong)&pUVar1->_padding_ + 4);
          local_98.Type.Name = (FName)pUVar1->_padding_;
          pAVar2 = *param_2->TargetActor;
          this->bHasStimulusToProcess = 1;
          this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          UAIPerceptionComponent::RegisterStimulus(this_00,pAVar2,&local_98);
        }
        uVar6 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        pFVar8 = (param_1->AllocatorInstance).Data;
        iVar7 = param_1->ArrayNum + ~uVar9;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar8 + lVar10,pFVar8 + (longlong)(param_1->ArrayNum - iVar7) * 0x38,
                  (longlong)iVar7 * 0x38);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        EVar5 = Modified;
      }
      lVar10 = lVar10 + -0x38;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return EVar5;
}

// StaticEnum<enum_EAISenseNotifyType> @ 146f8fe40

UEnum * __cdecl StaticEnum<enum_EAISenseNotifyType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAISenseNotifyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAISenseNotifyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAISenseNotifyType,(UObject *)pUVar1,
                       L"EAISenseNotifyType");
  }
  return Z_Registration_Info_UEnum_EAISenseNotifyType.OuterSingleton;
}

// StaticEnum<enum_EPathFollowingAction::Type> @ 146f8fe80

UEnum * __cdecl StaticEnum<enum_EPathFollowingAction::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingAction,(UObject *)pUVar1,
                       L"EPathFollowingAction");
  }
  return Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton;
}

// StaticEnum<enum_EPathFollowingRequestResult::Type> @ 146f8fec0

UEnum * __cdecl StaticEnum<enum_EPathFollowingRequestResult::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult,(UObject *)pUVar1,
                       L"EPathFollowingRequestResult");
  }
  return Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton;
}

// StaticEnum<enum_EPathFollowingResult::Type> @ 146f8ff00

UEnum * __cdecl StaticEnum<enum_EPathFollowingResult::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingResult,(UObject *)pUVar1,
                       L"EPathFollowingResult");
  }
  return Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton;
}

// StaticEnum<enum_EPathFollowingStatus::Type> @ 146f8ff40

UEnum * __cdecl StaticEnum<enum_EPathFollowingStatus::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingStatus,(UObject *)pUVar1,
                       L"EPathFollowingStatus");
  }
  return Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton;
}

// ToRawPtrTArrayUnsafe<TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_>_const_> @ 146f8ff80

TArray<UAISenseConfig_*,TSizedDefaultAllocator<32>_> * __cdecl
ToRawPtrTArrayUnsafe<TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_>_const_>
          (TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_> *param_1)

{
  return (TArray<UAISenseConfig_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// ~TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_1>,0,0> @ 146f960a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UAISense_Sight::OnListenerUpdateImpl_::__l8::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`8'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_2>,0,0> @ 146f960c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UAISense_Sight::OnListenerUpdateImpl_::__l8::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`8'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_3>,0,0> @ 146f960e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UAISense_Sight::OnListenerUpdateImpl_::__l13::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`13'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_4>,0,0> @ 146f96100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UAISense_Sight::OnListenerUpdateImpl_::__l13::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`13'::<lambda_4>,0,0>::
        _vftable_;
  return;
}

// `vcall'{696,{flat}}'_}' @ 146f97a58

/* [thunk]: __cdecl UAIPerceptionSystem::`vcall'{696,{flat}}' }' */

void __thiscall UAIPerceptionSystem::_vcall__696__flat______(UAIPerceptionSystem *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146f97a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))();
  return;
}

// `vcall'{1600,{flat}}'_}' @ 146f97a68

/* [thunk]: __cdecl UCrowdFollowingComponent::`vcall'{1600,{flat}}' }' */

void __thiscall UCrowdFollowingComponent::_vcall__1600__flat______(UCrowdFollowingComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146f97a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x640))();
  return;
}

// `vcall'{1416,{flat}}'_}' @ 146f97a78

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]: __cdecl UPathFollowingComponent::`vcall'{1416,{flat}}' }' */

void __thiscall UPathFollowingComponent::_vcall__1416__flat______(UPathFollowingComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146f97a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x588))();
  return;
}

// `vcall'{1456,{flat}}'_}' @ 146f97a88

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]: __cdecl UPathFollowingComponent::`vcall'{1456,{flat}}' }' */

void __thiscall UPathFollowingComponent::_vcall__1456__flat______(UPathFollowingComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146f97a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5b0))();
  return;
}

// `vcall'{1576,{flat}}'_}' @ 146f97a98

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]: __cdecl UPathFollowingComponent::`vcall'{1576,{flat}}' }' */

void __thiscall UPathFollowingComponent::_vcall__1576__flat______(UPathFollowingComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146f97a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x628))();
  return;
}

// `vcall'{1600,{flat}}'_}' @ 146f97aa8

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]: __cdecl UPathFollowingComponent::`vcall'{1600,{flat}}' }' */

void __thiscall UPathFollowingComponent::_vcall__1600__flat______(UPathFollowingComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146f97aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x640))();
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146f97ab8

/* [thunk]:public: virtual void * __ptr64 __cdecl AGridPathAIController::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AGridPathAIController::_vector_deleting_destructor__adjustor_704__
          (AGridPathAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AGridPathAIController *)&this[-1].field_0x140,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{880}' @ 146f97acc

/* [thunk]:public: virtual void * __ptr64 __cdecl AGridPathAIController::`vector deleting
   destructor'`adjustor{880}' (unsigned int) __ptr64 */

void * __thiscall
AGridPathAIController::_vector_deleting_destructor__adjustor_880__
          (AGridPathAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AGridPathAIController *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{888}' @ 146f97ae0

/* [thunk]:public: virtual void * __ptr64 __cdecl AGridPathAIController::`vector deleting
   destructor'`adjustor{888}' (unsigned int) __ptr64 */

void * __thiscall
AGridPathAIController::_vector_deleting_destructor__adjustor_888__
          (AGridPathAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AGridPathAIController *)&this[-1].field_0x88,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{896}' @ 146f97af4

/* [thunk]:public: virtual void * __ptr64 __cdecl AGridPathAIController::`vector deleting
   destructor'`adjustor{896}' (unsigned int) __ptr64 */

void * __thiscall
AGridPathAIController::_vector_deleting_destructor__adjustor_896__
          (AGridPathAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AGridPathAIController *)&this[-1].field_0x80,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{904}' @ 146f97b08

/* [thunk]:public: virtual void * __ptr64 __cdecl AGridPathAIController::`vector deleting
   destructor'`adjustor{904}' (unsigned int) __ptr64 */

void * __thiscall
AGridPathAIController::_vector_deleting_destructor__adjustor_904__
          (AGridPathAIController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AGridPathAIController *)&this[-1].field_0x78,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146f97b1c

/* [thunk]:public: virtual void * __ptr64 __cdecl ANavLinkProxy::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ANavLinkProxy::_vector_deleting_destructor__adjustor_704__(ANavLinkProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ANavLinkProxy *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{712}' @ 146f97b30

/* [thunk]:public: virtual void * __ptr64 __cdecl ANavLinkProxy::`vector deleting
   destructor'`adjustor{712}' (unsigned int) __ptr64 */

void * __thiscall
ANavLinkProxy::_vector_deleting_destructor__adjustor_712__(ANavLinkProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ANavLinkProxy *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f97b44

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAIPerceptionComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAIPerceptionComponent::_vector_deleting_destructor__adjustor_40__
          (UAIPerceptionComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAIPerceptionComponent *)&this[-1].OnTargetPerceptionUpdated.field_0x8,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f97b54

/* [thunk]:public: virtual void * __ptr64 __cdecl UAIPerceptionStimuliSourceComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAIPerceptionStimuliSourceComponent::_vector_deleting_destructor__adjustor_40__
          (UAIPerceptionStimuliSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAIPerceptionStimuliSourceComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f97b64

/* [thunk]:public: virtual void * __ptr64 __cdecl UAIPerceptionSystem::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAIPerceptionSystem::_vector_deleting_destructor__adjustor_40__
          (UAIPerceptionSystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAIPerceptionSystem *)&this[-1].DelayedStimuli.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f97b74

/* [thunk]:public: virtual void * __ptr64 __cdecl UCrowdFollowingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCrowdFollowingComponent::_vector_deleting_destructor__adjustor_40__
          (UCrowdFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCrowdFollowingComponent *)
                      ((longlong)&this[-1].CrowdAgentMoveDirection.field0_0x0 + 0x10),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{808}' @ 146f97b84

/* [thunk]:public: virtual void * __ptr64 __cdecl UCrowdFollowingComponent::`vector deleting
   destructor'`adjustor{808}' (unsigned int) __ptr64 */

void * __thiscall
UCrowdFollowingComponent::_vector_deleting_destructor__adjustor_808__
          (UCrowdFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCrowdFollowingComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 146f97b98

/* [thunk]:public: virtual void * __ptr64 __cdecl UCrowdFollowingComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UCrowdFollowingComponent::_vector_deleting_destructor__adjustor_192__
          (UCrowdFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCrowdFollowingComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 146f97bac

/* [thunk]:public: virtual void * __ptr64 __cdecl UCrowdFollowingComponent::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UCrowdFollowingComponent::_vector_deleting_destructor__adjustor_200__
          (UCrowdFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCrowdFollowingComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f97bc0

/* [thunk]:public: virtual void * __ptr64 __cdecl UGeneratedNavLinksProxy::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGeneratedNavLinksProxy::_vector_deleting_destructor__adjustor_40__
          (UGeneratedNavLinksProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGeneratedNavLinksProxy *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f97bd0

/* [thunk]:public: virtual void * __ptr64 __cdecl UGridPathFollowingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGridPathFollowingComponent::_vector_deleting_destructor__adjustor_40__
          (UGridPathFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGridPathFollowingComponent *)&this[-1].ActiveGridIdx,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 146f97be0

/* [thunk]:public: virtual void * __ptr64 __cdecl UGridPathFollowingComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UGridPathFollowingComponent::_vector_deleting_destructor__adjustor_192__
          (UGridPathFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGridPathFollowingComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 146f97bf4

/* [thunk]:public: virtual void * __ptr64 __cdecl UGridPathFollowingComponent::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UGridPathFollowingComponent::_vector_deleting_destructor__adjustor_200__
          (UGridPathFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGridPathFollowingComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146f97c08

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPathFollowingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPathFollowingComponent::_vector_deleting_destructor__adjustor_40__
          (UPathFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPathFollowingComponent *)&this[-1].CurrentNavLocation,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 146f97c18

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPathFollowingComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UPathFollowingComponent::_vector_deleting_destructor__adjustor_192__
          (UPathFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPathFollowingComponent *)&this[-1].BlockDetectionDistance,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 146f97c2c

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPathFollowingComponent::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UPathFollowingComponent::_vector_deleting_destructor__adjustor_200__
          (UPathFollowingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPathFollowingComponent *)
                      &this[-1].PreciseAcceptanceRadiusCheckStartNodeIndex,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146f97c40

void * __thiscall
IBaseDelegateInstance<void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97c70

void * __thiscall
IBaseDelegateInstance<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97ca0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97cd0

void * __thiscall
IBaseDelegateInstance<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97d00

void * __thiscall
IBaseDelegateInstance<void___cdecl(AActor_*,float,APawn_*,UE::Math::TVector<double>_const_&,float,FName),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AActor_*,float,APawn_*,UE::Math::TVector<double>_const_&,float,FName),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97d30

void * __thiscall
IBaseDelegateInstance<void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97d60

void * __thiscall
IBaseDelegateInstance<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97d90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97dc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97df0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97e20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97e50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97e80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97eb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97ee0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97f10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97f40

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
TBaseStaticDelegateInstance<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97f70

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
TBaseStaticDelegateInstance<void___cdecl(AActor_*,float,APawn_*,UE::Math::TVector<double>_const_&,float,FName),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(AActor_*,float,APawn_*,UE::Math::TVector<double>_const_&,float,FName),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97fa0

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
TBaseStaticDelegateInstance<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f97fd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ANavLinkProxy,void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98000

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAIPerceptionComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98030

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98060

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Blueprint,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98090

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Hearing,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f980c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f980f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98120

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Sight,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98150

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UCrowdFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98180

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UCrowdManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f981b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f981e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(APawn_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98210

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98240

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPathFollowingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98270

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f982a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f982d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98300

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98330

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AActor_*,float,APawn_*,UE::Math::TVector<double>_const_&,float,FName),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AActor_*,float,APawn_*,UE::Math::TVector<double>_const_&,float,FName),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98360

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98390

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f983c0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f983f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`8'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l8::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`8'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`13'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f984b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::__l13::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAISense_Sight::OnListenerUpdateImpl'::`13'::<lambda_4>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f984f0

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
SharedPointerInternals::
TReferenceControllerWithDeleter<FRecastSpeciaLinkFilter,SharedPointerInternals::DefaultDeleter<FRecastSpeciaLinkFilter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FRecastSpeciaLinkFilter,SharedPointerInternals::DefaultDeleter<FRecastSpeciaLinkFilter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98530

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_NavLocalGrid,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_NavLocalGrid>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayDebuggerCategory_NavLocalGrid,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_NavLocalGrid>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98570

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_Navmesh,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_Navmesh>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayDebuggerCategory_Navmesh,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_Navmesh>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f985b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_Perception,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_Perception>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayDebuggerCategory_Perception,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_Perception>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f985f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_PerceptionSystem,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_PerceptionSystem>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayDebuggerCategory_PerceptionSystem,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_PerceptionSystem>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98630

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
AGridPathAIController::_scalar_deleting_destructor_(AGridPathAIController *this,uint param_1)

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

// `scalar_deleting_destructor' @ 146f986e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ANavLinkProxy::_scalar_deleting_destructor_(ANavLinkProxy *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkHostInterface__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  pvVar1 = *(void **)&(this->OnSmartLinkReached).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSmartLinkReached);
  pFVar2 = (this->SegmentLinks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PointLinks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7INavRelevantInterface__6B_;
  this->_padding_ = (longlong)&___7INavLinkHostInterface__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f987d0

void * __thiscall
FGameplayDebuggerCategory_NavLocalGrid::_scalar_deleting_destructor_
          (FGameplayDebuggerCategory_NavLocalGrid *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AgentDataPack).PathCells.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int>
            ((FGridData *)(this->DataPack).Grids.AllocatorInstance.Data,
             (this->DataPack).Grids.ArrayNum);
  pFVar1 = (this->DataPack).Grids.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FGameplayDebuggerCategory::~FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98850

void * __thiscall
FGameplayDebuggerCategory_Navmesh::_scalar_deleting_destructor_
          (FGameplayDebuggerCategory_Navmesh *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataPack).SupportedAgents.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataPack).NavBuildLockStatusDesc.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataPack).NavDataName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNavMeshSceneProxyData::~FNavMeshSceneProxyData(&this->NavmeshRenderData);
  FGameplayDebuggerCategory::~FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f988d0

void * __thiscall
FGameplayDebuggerCategory_Perception::_scalar_deleting_destructor_
          (FGameplayDebuggerCategory_Perception *this,uint param_1)

{
  FGameplayDebuggerCategory::~FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98910

void * __thiscall
FGameplayDebuggerCategory_PerceptionSystem::_scalar_deleting_destructor_
          (FGameplayDebuggerCategory_PerceptionSystem *this,uint param_1)

{
  FGameplayDebuggerCategory::~FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98950

void * __thiscall
FMetaNavMeshPath::_scalar_deleting_destructor_(FMetaNavMeshPath *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Waypoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNavMeshPath::~FNavMeshPath((FNavMeshPath *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f989a0

void * __thiscall
FNavLocalGridSceneProxy::_scalar_deleting_destructor_(FNavLocalGridSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PathMeshIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PathMeshVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundsMeshIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundsMeshVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkedCellMeshIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkedCellMeshVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreeCellMeshIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreeCellMeshVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDebugRenderSceneProxy::~FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x420);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98a70

void * __thiscall
ICrowdAgentInterface::_scalar_deleting_destructor_(ICrowdAgentInterface *this,uint param_1)

{
  *this = (ICrowdAgentInterface)&___7ICrowdAgentInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98ab0

void * __thiscall
IPathFollowingAgentInterface::_scalar_deleting_destructor_
          (IPathFollowingAgentInterface *this,uint param_1)

{
  *this = (IPathFollowingAgentInterface)&___7IPathFollowingAgentInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98af0

void * __thiscall
UAIHotSpotManager::_scalar_deleting_destructor_(UAIHotSpotManager *this,uint param_1)

{
  *(undefined ***)this = &___7UAIHotSpotManager__6B_;
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

// `scalar_deleting_destructor' @ 146f98b50

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
UAIPerceptionComponent::_scalar_deleting_destructor_(UAIPerceptionComponent *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnTargetPerceptionInfoUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetPerceptionInfoUpdated);
  pvVar1 = *(void **)&(this->OnTargetPerceptionUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetPerceptionUpdated);
  pvVar1 = *(void **)&(this->OnTargetPerceptionForgotten).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetPerceptionForgotten);
  pvVar1 = *(void **)&(this->OnPerceptionUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerceptionUpdated);
  pFVar2 = (this->MaxActiveAge).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StimuliToProcess).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PerceptualData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerceptualData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<AActor>,FActorPerceptionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerceptualData);
  pFVar2 = (this->SensesConfig).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98cb0

void * __thiscall
UAIPerceptionListenerInterface::_scalar_deleting_destructor_
          (UAIPerceptionListenerInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 146f98d10

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
UAIPerceptionStimuliSourceComponent::_scalar_deleting_destructor_
          (UAIPerceptionStimuliSourceComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->RegisterAsSourceForSenses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98da0

void * __thiscall
UAIPerceptionSystem::_scalar_deleting_destructor_(UAIPerceptionSystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->SourcesToRegister).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DelayedStimuli).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RegisteredStimuliSources).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RegisteredStimuliSources).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<AActor_const_*,FPerceptionStimuliSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<AActor_const_*,FPerceptionStimuliSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<AActor_const_*,FPerceptionStimuliSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredStimuliSources);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StimuliSourceEndPlayDelegate);
  pFVar1 = (this->Senses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ListenerContainer).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ListenerContainer).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ListenerContainer);
  UAISubsystem::~UAISubsystem((UAISubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98eb0

void * __thiscall UAISense::_scalar_deleting_destructor_(UAISense *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnListenerRemovedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnListenerUpdateDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNewListenerDelegate);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98f30

void * __thiscall
UAISenseConfig_Damage::_scalar_deleting_destructor_(UAISenseConfig_Damage *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAISenseConfig_Damage__6B_;
  UAISenseConfig::~UAISenseConfig((UAISenseConfig *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f98f90

void * __thiscall UAISenseEvent::_scalar_deleting_destructor_(UAISenseEvent *this,uint param_1)

{
  *(undefined ***)this = &___7UAISenseEvent__6B_;
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

// `scalar_deleting_destructor' @ 146f98ff0

void * __thiscall
UAISense_Blueprint::_scalar_deleting_destructor_(UAISense_Blueprint *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISense_Blueprint__6B_;
  pFVar1 = (this->UnprocessedEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ListenerContainer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f990a0

void * __thiscall UAISense_Damage::_scalar_deleting_destructor_(UAISense_Damage *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISense_Damage__6B_;
  pFVar1 = (this->RegisteredEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
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

// `scalar_deleting_destructor' @ 146f99140

void * __thiscall
UAISense_Hearing::_scalar_deleting_destructor_(UAISense_Hearing *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAISense_Hearing__6B_;
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DigestedProperties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DigestedProperties);
  pFVar2 = (this->NoiseEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f99210

void * __thiscall
UAISense_Prediction::_scalar_deleting_destructor_(UAISense_Prediction *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISense_Prediction__6B_;
  pFVar1 = (this->RegisteredEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
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

// `scalar_deleting_destructor' @ 146f992b0

void * __thiscall UAISense_Sight::_scalar_deleting_destructor_(UAISense_Sight *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7UAISense_Sight__6B_;
  if (this->QueriesListAccessDetector != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnPendingTraceQueryProcessedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnPendingCanBeSeenQueryProcessedDelegate);
  pFVar1 = (this->SightQueriesPending).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SightQueriesInRange).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SightQueriesOutOfRange).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  pvVar4 = *(void **)&(this->DigestedProperties).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DigestedProperties);
  *(undefined4 *)&(this->ObservedTargets).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ObservedTargets).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAISightTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAISightTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAISightTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObservedTargets);
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f99410

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
UCrowdFollowingComponent::_scalar_deleting_destructor_(UCrowdFollowingComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  this->_padding_ = (longlong)&___7ICrowdAgentInterface__6B_;
  UPathFollowingComponent::~UPathFollowingComponent((UPathFollowingComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x378);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f994b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall UCrowdManager::_scalar_deleting_destructor_(UCrowdManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UCrowdManager__6B_;
  pFVar1 = (this->AgentFlags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ActiveAgents).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ActiveAgents).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveAgents);
  DestructItems<FCrowdAvoidanceSamplingPattern,int>
            ((FCrowdAvoidanceSamplingPattern *)(this->SamplingPatterns).AllocatorInstance.Data,
             (this->SamplingPatterns).ArrayNum);
  pFVar1 = (this->SamplingPatterns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AvoidanceConfig).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCrowdManagerBase::~UCrowdManagerBase((UCrowdManagerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f99580

void * __thiscall
UGeneratedNavLinksProxy::_scalar_deleting_destructor_(UGeneratedNavLinksProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  pvVar1 = *(void **)&(this->OnSmartLinkReached).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSmartLinkReached);
  UBaseGeneratedNavLinksProxy::~UBaseGeneratedNavLinksProxy((UBaseGeneratedNavLinksProxy *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f99620

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
UGridPathFollowingComponent::_scalar_deleting_destructor_
          (UGridPathFollowingComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  pFVar1 = (this->GridPathPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPathFollowingComponent::~UPathFollowingComponent((UPathFollowingComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f996d0

void * __thiscall
UNavFilter_AIControllerDefault::_scalar_deleting_destructor_
          (UNavFilter_AIControllerDefault *this,uint param_1)

{
  *(undefined ***)this = &___7UNavFilter_AIControllerDefault__6B_;
  UNavigationQueryFilter::~UNavigationQueryFilter((UNavigationQueryFilter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f99730

void * __thiscall
UNavLocalGridManager::_scalar_deleting_destructor_(UNavLocalGridManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNavLocalGridManager__6B_;
  DestructItems<FNavLocalGridData,int>
            ((FNavLocalGridData *)(this->SourceGrids).AllocatorInstance.Data,
             (this->SourceGrids).ArrayNum);
  pFVar1 = (this->SourceGrids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCombinedNavGridData,int>
            ((FCombinedNavGridData *)(this->CombinedGrids).AllocatorInstance.Data,
             (this->CombinedGrids).ArrayNum);
  pFVar1 = (this->CombinedGrids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f997d0

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
UPathFollowingComponent::_scalar_deleting_destructor_(UPathFollowingComponent *this,uint param_1)

{
  ~UPathFollowingComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146f99830

void * __thiscall
UPathFollowingManager::_scalar_deleting_destructor_(UPathFollowingManager *this,uint param_1)

{
  *(undefined ***)this = &___7UPathFollowingManager__6B_;
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

// EmptyLinkFunctionForGeneratedCodeAIHotSpotManager @ 146fa6a50

void __cdecl EmptyLinkFunctionForGeneratedCodeAIHotSpotManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIPerceptionComponent @ 146fa6a60

void __cdecl EmptyLinkFunctionForGeneratedCodeAIPerceptionComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIPerceptionListenerInterface @ 146fa6a70

void __cdecl EmptyLinkFunctionForGeneratedCodeAIPerceptionListenerInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIPerceptionStimuliSourceComponent @ 146fa6a80

void __cdecl EmptyLinkFunctionForGeneratedCodeAIPerceptionStimuliSourceComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIPerceptionSystem @ 146fa6a90

void __cdecl EmptyLinkFunctionForGeneratedCodeAIPerceptionSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAIPerceptionTypes @ 146fa6aa0

void __cdecl EmptyLinkFunctionForGeneratedCodeAIPerceptionTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISense @ 146fa6ab0

void __cdecl EmptyLinkFunctionForGeneratedCodeAISense(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseConfig_Damage @ 146fa6ac0

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseConfig_Damage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISenseEvent @ 146fa6ad0

void __cdecl EmptyLinkFunctionForGeneratedCodeAISenseEvent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISense_Blueprint @ 146fa6ae0

void __cdecl EmptyLinkFunctionForGeneratedCodeAISense_Blueprint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISense_Damage @ 146fa6af0

void __cdecl EmptyLinkFunctionForGeneratedCodeAISense_Damage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISense_Hearing @ 146fa6b00

void __cdecl EmptyLinkFunctionForGeneratedCodeAISense_Hearing(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISense_Prediction @ 146fa6b10

void __cdecl EmptyLinkFunctionForGeneratedCodeAISense_Prediction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISense_Sight @ 146fa6b20

void __cdecl EmptyLinkFunctionForGeneratedCodeAISense_Sight(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCrowdFollowingComponent @ 146fa6b30

void __cdecl EmptyLinkFunctionForGeneratedCodeCrowdFollowingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCrowdManager @ 146fa6b40

void __cdecl EmptyLinkFunctionForGeneratedCodeCrowdManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeneratedNavLinksProxy @ 146fa6b50

void __cdecl EmptyLinkFunctionForGeneratedCodeGeneratedNavLinksProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGridPathAIController @ 146fa6b60

void __cdecl EmptyLinkFunctionForGeneratedCodeGridPathAIController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGridPathFollowingComponent @ 146fa6b70

void __cdecl EmptyLinkFunctionForGeneratedCodeGridPathFollowingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavFilter_AIControllerDefault @ 146fa6b80

void __cdecl EmptyLinkFunctionForGeneratedCodeNavFilter_AIControllerDefault(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavLinkProxy @ 146fa6b90

void __cdecl EmptyLinkFunctionForGeneratedCodeNavLinkProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavLocalGridManager @ 146fa6ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavLocalGridManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePathFollowingComponent @ 146fa6bb0

void __cdecl EmptyLinkFunctionForGeneratedCodePathFollowingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePathFollowingManager @ 146fa6bc0

void __cdecl EmptyLinkFunctionForGeneratedCodePathFollowingManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRecastGraphAStar @ 146fa6bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeRecastGraphAStar(void)

{
  return;
}

// FActorPerceptionForgetUpdatedDelegate_DelegateWrapper @ 146fa85d0

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
FActorPerceptionForgetUpdatedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2)

{
  AActor *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FActorPerceptionInfoUpdatedDelegate_DelegateWrapper @ 146fa85f0

void __cdecl
FActorPerceptionInfoUpdatedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          FActorPerceptionUpdateInfo *param_2)

{
  undefined4 uVar1;
  int local_78;
  FWeakObjectPtr local_74;
  FAIStimulus local_68;
  
  local_78 = -1;
  local_74.ObjectIndex = 0;
  local_74.ObjectSerialNumber = 0;
  FAIStimulus::FAIStimulus(&local_68);
  uVar1 = *(undefined4 *)&(param_2->Stimulus).field_0x54;
  local_78 = param_2->TargetId;
  local_68._84_4_ = (ZPULL(uVar1,0,1) ^ local_68._84_4_) & 1 ^ local_68._84_4_;
  local_68.ExpirationAge = (param_2->Stimulus).ExpirationAge;
  local_68.Age = (param_2->Stimulus).Age;
  local_74 = (param_2->Target).WeakPtr;
  local_68._84_4_ = (local_68._84_4_ ^ uVar1) & 2 ^ local_68._84_4_;
  local_68.Tag = (param_2->Stimulus).Tag;
  local_68.Type.Index = (param_2->Stimulus).Type.Index;
  local_68.Type.Name = (param_2->Stimulus).Type.Name;
  local_68.Strength = (param_2->Stimulus).Strength;
  local_68._84_4_ = (local_68._84_4_ ^ uVar1) & 4 ^ local_68._84_4_;
  local_68.StimulusLocation.field0_0x0._s_0.X =
       (param_2->Stimulus).StimulusLocation.field0_0x0._s_0.X;
  local_68.StimulusLocation.field0_0x0._s_0.Y =
       (param_2->Stimulus).StimulusLocation.field0_0x0._s_0.Y;
  local_68.StimulusLocation.field0_0x0._s_0.Z =
       (param_2->Stimulus).StimulusLocation.field0_0x0._s_0.Z;
  local_68.ReceiverLocation.field0_0x0._s_0.X =
       (param_2->Stimulus).ReceiverLocation.field0_0x0._s_0.X;
  local_68.ReceiverLocation.field0_0x0._s_0.Y =
       (param_2->Stimulus).ReceiverLocation.field0_0x0._s_0.Y;
  local_68.ReceiverLocation.field0_0x0._s_0.Z =
       (param_2->Stimulus).ReceiverLocation.field0_0x0._s_0.Z;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_78);
  return;
}

// FActorPerceptionUpdatedDelegate_DelegateWrapper @ 146fa86f0

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
FActorPerceptionUpdatedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          FAIStimulus *param_3)

{
  AActor *local_68;
  FAIStimulus local_60;
  
  FAIStimulus::FAIStimulus(&local_60);
  local_60.Tag = param_3->Tag;
  local_60.ExpirationAge = param_3->ExpirationAge;
  local_60.Age = param_3->Age;
  local_60.Type.Index = (param_3->Type).Index;
  local_60.Type.Name = (param_3->Type).Name;
  local_60.Strength = param_3->Strength;
  local_60.StimulusLocation.field0_0x0._s_0.X = (param_3->StimulusLocation).field0_0x0._s_0.X;
  local_60.StimulusLocation.field0_0x0._s_0.Y = (param_3->StimulusLocation).field0_0x0._s_0.Y;
  local_60.StimulusLocation.field0_0x0._s_0.Z = (param_3->StimulusLocation).field0_0x0._s_0.Z;
  local_60._84_4_ = *(uint *)&param_3->field_0x54 & 7 | local_60._84_4_ & 0xfffffff8;
  local_60.ReceiverLocation.field0_0x0._s_0.X = (param_3->ReceiverLocation).field0_0x0._s_0.X;
  local_60.ReceiverLocation.field0_0x0._s_0.Y = (param_3->ReceiverLocation).field0_0x0._s_0.Y;
  local_60.ReceiverLocation.field0_0x0._s_0.Z = (param_3->ReceiverLocation).field0_0x0._s_0.Z;
  local_68 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_68);
  return;
}

// FLinkReachedSignature_DelegateWrapper @ 146fa87c0

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
FLinkReachedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          TVector<double> *param_3)

{
  AActor *local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_20 = (param_3->field0_0x0)._s_0.X;
  dStack_18 = (param_3->field0_0x0)._s_0.Y;
  local_10 = (param_3->field0_0x0)._s_0.Z;
  local_28 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FPerceptionUpdatedDelegate_DelegateWrapper @ 146fa8800

void __cdecl
FPerceptionUpdatedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FSmartLinkReachedSignature_DelegateWrapper @ 146fa88b0

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
FSmartLinkReachedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          TVector<double> *param_3)

{
  AActor *local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_20 = (param_3->field0_0x0)._s_0.X;
  dStack_18 = (param_3->field0_0x0)._s_0.Y;
  local_10 = (param_3->field0_0x0)._s_0.Z;
  local_28 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// GetPathDescHelper @ 146fb3070

FString * __cdecl
GetPathDescHelper(FString *__return_storage_ptr__,TSharedPtr<FNavigationPath,1> *param_1)

{
  FNavigationPath *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString *pFVar7;
  FString *pFVar8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FNavigationPath *)0x0) {
    pFVar7 = FString::FString(&local_18,L"missing");
    bVar5 = true;
    bVar4 = false;
    bVar6 = false;
    bVar3 = false;
  }
  else {
    if (((pFVar1->bIsReady == 0) || ((pFVar1->PathPoints).ArrayNum < 2)) || (pFVar1->bUpToDate == 0)
       ) {
      pFVar8 = FString::FString(&local_28,L"invalid");
      bVar4 = true;
      bVar6 = false;
    }
    else {
      if ((pFVar1 == (FNavigationPath *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar2)();
        return pFVar8;
      }
      FString::PrintfImpl(&local_38,L"%s:%d");
      pFVar8 = &local_38;
      bVar4 = false;
      bVar6 = true;
    }
    bVar5 = false;
    bVar3 = true;
    local_48.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    pFVar7 = &local_48;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// LogBlockHelper @ 146fba540

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
LogBlockHelper(AActor *param_1,INavMovementInterface *param_2,float param_3,float param_4,
              TVector<double> *param_5,TVector<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 in_register_000012c4 [12];
  undefined1 auVar8 [16];
  undefined4 local_res10 [6];
  undefined4 local_c8 [4];
  double local_b8;
  double local_b0;
  double local_a8;
  TVector<double>_u_0 local_a0;
  TVector<double> local_88 [5];
  
  auVar8._4_12_ = in_register_000012c4;
  auVar8._0_4_ = param_4;
  if ((param_2 != (INavMovementInterface *)0x0) && (param_1 != (AActor *)0x0)) {
    (**(code **)((longlong)*param_2 + 0x80))(param_2,&local_b8);
    dVar1 = (param_6->field0_0x0)._s_0.X;
    dVar7 = (param_6->field0_0x0)._s_0.Y;
    dVar2 = (param_6->field0_0x0)._s_0.Z;
    dVar4 = dVar1 - local_b8;
    dVar3 = dVar7 - local_b0;
    dVar5 = dVar2 - local_a8;
    local_a0._s_0.X = dVar1 - (param_5->field0_0x0)._s_0.X;
    local_a0._s_0.Y = dVar7 - (param_5->field0_0x0)._s_0.Y;
    local_a0._s_0.Z = dVar2 - (param_5->field0_0x0)._s_0.Z;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_a0._s_0,local_88,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
    dVar1 = dVar3 * dVar3 + dVar4 * dVar4;
    dVar7 = dVar5 * dVar5 + dVar1;
    if ((dVar7 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar7)) {
      auVar8._0_8_ = __real_3ff0000000000000 / SQRT(dVar7);
      auVar8._8_8_ = 0;
    }
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1,(FName *)&LogPathFollowing.field_0x4,Verbose,
                 L"[agent to segment end] dot [segment dir]: %f");
    }
    local_res10[0] = 0;
    local_c8[0] = 0;
    (**(code **)((longlong)*param_2 + 0xa0))(param_2,local_res10,local_c8);
    if (FVisualLogger::bIsRecording != 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar1;
      sqrtpd(auVar8,auVar6);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1,(FName *)&LogPathFollowing.field_0x4,Verbose,
                 L"dist 2d: %f (agent radius: %f [%f])");
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)param_1,(FName *)&LogPathFollowing.field_0x4,Verbose,
                   L"Z diff: %f (agent halfZ: %f [%f])");
      }
    }
  }
  return;
}

// LogPathPartHelper @ 146fbaae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl LogPathPartHelper(AActor *param_1,FNavMeshPath *param_2,int param_3,int param_4)

{
  TArray<FVisualLogShapeElement,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FVisualLogShapeElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  int iVar17;
  FNavMeshPath *pFVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ARecastNavMesh *this;
  UClass *pUVar23;
  FVisualLogger *this_00;
  FVisualLogEntry *pFVar24;
  UClass *pUVar25;
  TSubclassOf<UNavAreaBase> TVar26;
  FColor *pFVar27;
  ulonglong uVar28;
  UObject *pUVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  double dVar33;
  undefined1 auStackY_378 [32];
  undefined4 local_328;
  undefined4 local_324;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_320;
  int local_310;
  FString local_308;
  ulonglong local_2f8;
  FNavMeshPath *local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  FName local_2a0;
  ulonglong local_298;
  FVisualLogShapeElement local_278;
  FVisualLogShapeElement local_1b8;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  uVar28 = (ulonglong)param_4;
  uVar32 = (ulonglong)param_3;
  local_2f0 = param_2;
  this = (ARecastNavMesh *)
         FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_2->_padding_ + 4));
  if (this != (ARecastNavMesh *)0x0) {
    pUVar23 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    iVar22 = (int)pUVar23->_padding_;
    if ((iVar22 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar22 * 8)
        == &pUVar23->_padding_)) {
      this_00 = FVisualLogger::Get();
      bVar19 = FVisualLogger::IsCategoryLogged(this_00,(FLogCategoryBase *)&LogNavigation);
      if (!bVar19) {
        return;
      }
      if (param_3 < 0) {
        return;
      }
      iVar22 = (param_2->PathCorridor).ArrayNum;
      if (iVar22 <= param_3) {
        return;
      }
      if (param_4 < 0) {
        return;
      }
      if (iVar22 <= param_4) {
        return;
      }
      FVisualLogShapeElement::FVisualLogShapeElement(&local_1b8,Polygon);
      local_328 = CONCAT13(100,FColorList::Cyan.field0_0x0._0_3_);
      local_1b8.Color =
           (byte)(local_328 >> 0x12) & 0x30 | 0x40 | (byte)(local_328 >> 0xc) & 0xc |
           (byte)(local_328 >> 6) & 3;
      local_1b8.Category.ComparisonIndex.Value = LogNavigation._4_4_;
      local_1b8.Category.Number = LogNavigation._8_4_;
      uVar20 = (param_4 - param_3) * 6;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      if (local_1b8.Points.ArrayMax < (int)uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar20,&local_1b8.Points.AllocatorInstance,local_1b8.Points.ArrayNum,
                   &local_1b8.Points.ArrayMax);
      }
      dVar10 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Z * __real_3ff4000000000000;
      local_310 = 1;
      dVar11 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.Y * __real_3ff4000000000000;
      dVar12 = NavigationDebugDrawing::PathOffset.field0_0x0._s_0.X * __real_3ff4000000000000;
      pFVar24 = FVisualLogger::GetEntryToWrite
                          ((UObject *)param_1,(FLogCategoryBase *)&LogCrowdFollowing);
      if (pFVar24 != (FVisualLogEntry *)0x0) {
        (**(code **)(this->_padding_ + 0x848))(this);
        fVar16 = __real_42480000;
        dVar15 = __real_4014000000000000;
        fVar14 = __real_42c80000;
        dVar13 = __real_3ff0000000000000;
        local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.ArrayNum = 0;
        local_320.ArrayMax = 0;
        local_2f8 = uVar32;
        local_298 = uVar28;
        if (uVar32 <= uVar28) {
          pTVar1 = &pFVar24->ElementsToDraw;
          uVar28 = uVar32;
          do {
            uVar31 = (uint)uVar28;
            uVar20 = 0;
            if ((int)uVar31 < (param_2->PathCorridor).ArrayNum) {
              uVar20 = ~uVar31 >> 0x1f;
            }
            local_2f8 = uVar32;
            if ((uVar20 == 0) &&
               (bVar19 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar20 = ARecastNavMesh::GetPolyAreaID
                               (this,*(ulong64 *)
                                      ((param_2->PathCorridor).AllocatorInstance.Data + uVar32 * 8))
            ;
            if ((uVar20 != (uVar20 & 0xff)) &&
               (bVar19 = FDebug::CheckVerifyFailedImpl2
                                   ("IntFitsIn<OutType>(In)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                    ,0xae,L"Loss of data caused by narrowing conversion, In = %llu")
               , bVar19)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar23 = ANavigationData::GetAreaClass((ANavigationData *)this,uVar20 & 0xff);
            iVar22 = local_320.ArrayMax;
            if ((longlong)local_320._8_8_ < 0) {
              local_320._8_8_ = (ulonglong)(uint)local_320.ArrayMax << 0x20;
              if (iVar22 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,0,&local_320.AllocatorInstance,0,&local_320.ArrayMax);
              }
            }
            else {
              local_320._8_8_ = (ulonglong)(uint)local_320.ArrayMax << 0x20;
            }
            pFVar18 = local_2f0;
            uVar20 = 0;
            if ((int)uVar31 < (local_2f0->PathCorridor).ArrayNum) {
              uVar20 = ~uVar31 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar19 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ARecastNavMesh::GetPolyVerts
                      (this,*(ulong64 *)
                             ((pFVar18->PathCorridor).AllocatorInstance.Data + uVar32 * 8),
                       &local_320);
            uVar28 = local_320._8_8_ & 0xffffffff;
            uVar20 = 0;
            local_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_2d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            iVar22 = local_320.ArrayNum;
            uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            if (0 < local_320.ArrayNum) {
              lVar30 = 0;
              do {
                uVar21 = 0;
                if ((int)uVar20 < (int)uVar28) {
                  uVar21 = ~uVar20 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar19 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(double *)(local_320.AllocatorInstance.Data + lVar30 + 0x10) =
                     *(double *)(local_320.AllocatorInstance.Data + lVar30 + 0x10) + dVar15;
                uVar28 = (ulonglong)local_320.ArrayNum;
                uVar21 = 0;
                if ((int)uVar20 < local_320.ArrayNum) {
                  uVar21 = ~uVar20 >> 0x1f;
                }
                if (uVar21 == 0) {
                  bVar19 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar19) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar28 = local_320._8_8_ & 0xffffffff;
                }
                uVar20 = uVar20 + 1;
                uVar8 = (double)uVar8 + *(double *)(local_320.AllocatorInstance.Data + lVar30);
                uVar6 = (double)uVar6 + *(double *)(local_320.AllocatorInstance.Data + lVar30 + 8);
                uVar5 = (double)uVar5 +
                        *(double *)(local_320.AllocatorInstance.Data + lVar30 + 0x10);
                lVar30 = lVar30 + 0x18;
                iVar22 = (int)uVar28;
              } while ((int)uVar20 < iVar22);
            }
            dVar33 = dVar13 / (double)iVar22;
            if (pUVar23 == (UClass *)0x0) {
              pUVar29 = (UObject *)0x0;
            }
            else {
              if ((pUVar23->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar23);
              }
              pUVar29 = (pUVar23->ClassDefaultObject).field0_0x0.DebugPtr;
              pUVar25 = Z_Construct_UClass_UNavArea_NoRegister();
              iVar22 = (int)pUVar25->_padding_;
              if (((*(int *)(*(longlong *)&pUVar29->field_0x10 + 0x38) < iVar22) ||
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar29->field_0x10 + 0x30) + (longlong)iVar22 * 8)
                   != &pUVar25->_padding_)) &&
                 (bVar19 = FDebug::CheckVerifyFailedImpl2
                                     ("Ret->IsA(T::StaticClass())",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                      ,0x1181,L""), bVar19)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            TVar26 = FNavigationSystem::GetDefaultWalkableArea();
            lVar30 = *(longlong *)TVar26.Class.field0_0x0;
            if ((lVar30 == 0) ||
               (pUVar25 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar25 == (UClass *)0x0)) {
LAB_146fbb091:
              pUVar25 = (UClass *)0x0;
            }
            else {
              iVar22 = (int)pUVar25->_padding_;
              if ((*(int *)(lVar30 + 0x38) < iVar22) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar30 + 0x30) + (longlong)iVar22 * 8)
                  != &pUVar25->_padding_)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if (!bVar19) goto LAB_146fbb091;
              pUVar25 = *(UClass **)TVar26.Class.field0_0x0;
            }
            if (pUVar23 == pUVar25) {
              pFVar27 = &FColorList::LightSteelBlue;
            }
            else if (pUVar29 == (UObject *)0x0) {
              pFVar27 = (FColor *)&this->_padding_;
            }
            else {
              pFVar27 = (FColor *)&pUVar29[1].field_0x10;
            }
            local_328 = CONCAT13(100,(int3)(int)*(longlong *)pFVar27);
            local_1b8.Points.ArrayNum = 0;
            local_1b8.Color =
                 (byte)(local_328 >> 0x12) & 0x30 | 0x40 | (byte)(local_328 >> 0xc) & 0xc |
                 (byte)(local_328 >> 6) & 3;
            if ((local_1b8.Points.ArrayMax < 0) && (local_1b8.Points.ArrayMax != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,&local_1b8.Points.AllocatorInstance,0,&local_1b8.Points.ArrayMax);
            }
            lVar30 = (longlong)local_320.ArrayNum;
            if (local_320.ArrayNum != 0) {
              iVar22 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x18,8,local_320.ArrayNum,&local_1b8.Points.AllocatorInstance,
                                  &local_1b8.Points.ArrayNum,&local_1b8.Points.ArrayMax);
              memcpy(local_1b8.Points.AllocatorInstance.Data + (longlong)iVar22 * 0x18,
                     local_320.AllocatorInstance.Data,lVar30 * 0x18);
            }
            pFVar3 = (FVisualLogShapeElement *)(pTVar1->AllocatorInstance).Data;
            piVar2 = &(pFVar24->ElementsToDraw).ArrayMax;
            if (((pFVar3 <= &local_1b8) && (&local_1b8 < pFVar3 + *piVar2)) &&
               (bVar19 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar22 = (pFVar24->ElementsToDraw).ArrayNum;
            if (iVar22 == *piVar2) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10c0,&pTVar1->AllocatorInstance,piVar2);
            }
            (pFVar24->ElementsToDraw).ArrayNum = iVar22 + 1;
            FVisualLogShapeElement::FVisualLogShapeElement
                      ((FVisualLogShapeElement *)
                       ((pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 0xc0),&local_1b8);
            if (pUVar23 != (UClass *)0x0) {
              TVar26 = FNavigationSystem::GetDefaultWalkableArea();
              lVar30 = *(longlong *)TVar26.Class.field0_0x0;
              if ((lVar30 == 0) ||
                 (pUVar25 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar25 == (UClass *)0x0))
              {
LAB_146fbb29b:
                pUVar25 = (UClass *)0x0;
              }
              else {
                iVar22 = (int)pUVar25->_padding_;
                if ((*(int *)(lVar30 + 0x38) < iVar22) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(lVar30 + 0x30) + (longlong)iVar22 * 8) !=
                    &pUVar25->_padding_)) {
                  bVar19 = false;
                }
                else {
                  bVar19 = true;
                }
                if (!bVar19) goto LAB_146fbb29b;
                pUVar25 = *(UClass **)TVar26.Class.field0_0x0;
              }
              if (pUVar23 != pUVar25) {
                FVisualLogShapeElement::FVisualLogShapeElement(&local_278,Segment);
                local_324 = CONCAT13(100,FColorList::Orange.field0_0x0._0_3_);
                local_278.Color =
                     (byte)(local_324 >> 0x12) & 0x30 | 0x40 | (byte)(local_324 >> 0xc) & 0xc |
                     (byte)(local_324 >> 6) & 3;
                local_278.Category.ComparisonIndex.Value = LogNavigation._4_4_;
                local_278.Category.Number = LogNavigation._8_4_;
                local_278.field15_0xb6.Thickness = 2;
                local_2a0 = (FName)pUVar23->_padding_;
                FName::ToString(&local_2a0,&local_308);
                if (local_278.Description.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Description.Data.AllocatorInstance.Data);
                }
                dVar9 = (double)uVar8 * dVar33 + dVar12;
                dVar7 = (double)uVar6 * dVar33 + dVar11;
                local_278.Description.Data.AllocatorInstance.Data =
                     local_308.Data.AllocatorInstance.Data;
                dVar33 = (double)uVar5 * dVar33 + dVar10;
                local_278.Description.Data.ArrayNum = local_308.Data.ArrayNum;
                local_278.Description.Data.ArrayMax = local_308.Data.ArrayMax;
                local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_308.Data.ArrayNum = 0;
                local_308.Data.ArrayMax = 0;
                local_2d0 = dVar9;
                dStack_2c8 = dVar7;
                local_2c0 = dVar33;
                if (((local_278.Points.AllocatorInstance.Data <=
                      (FScriptContainerElement *)&local_2d0) &&
                    ((FScriptContainerElement *)&local_2d0 <
                     local_278.Points.AllocatorInstance.Data +
                     (longlong)local_278.Points.ArrayMax * 0x18)) &&
                   (bVar19 = FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (local_278.Points.ArrayNum == local_278.Points.ArrayMax) {
                  local_278.Points.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_278.Points.AllocatorInstance,
                                  &local_278.Points.ArrayMax);
                }
                iVar17 = local_310;
                iVar22 = local_278.Points.ArrayNum + 1;
                *(double *)
                 (local_278.Points.AllocatorInstance.Data +
                 (longlong)local_278.Points.ArrayNum * 0x18) = local_2d0;
                *(double *)
                 (local_278.Points.AllocatorInstance.Data +
                  (longlong)local_278.Points.ArrayNum * 0x18 + 8) = dStack_2c8;
                *(double *)
                 (local_278.Points.AllocatorInstance.Data +
                 (longlong)local_278.Points.ArrayNum * 0x18 + 0x10) = local_2c0;
                local_2a8 = (double)((float)local_310 * fVar16 + fVar14) + dVar33;
                local_2b8 = dVar9;
                dStack_2b0 = dVar7;
                local_278.Points.ArrayNum = iVar22;
                if (((local_278.Points.AllocatorInstance.Data <=
                      (FScriptContainerElement *)&local_2b8) &&
                    ((FScriptContainerElement *)&local_2b8 <
                     local_278.Points.AllocatorInstance.Data +
                     (longlong)local_278.Points.ArrayMax * 0x18)) &&
                   (bVar19 = FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (local_278.Points.ArrayNum == local_278.Points.ArrayMax) {
                  local_278.Points.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_278.Points.AllocatorInstance,
                                  &local_278.Points.ArrayMax);
                }
                iVar22 = local_278.Points.ArrayNum + 1;
                *(double *)
                 (local_278.Points.AllocatorInstance.Data +
                 (longlong)local_278.Points.ArrayNum * 0x18) = local_2b8;
                *(double *)
                 (local_278.Points.AllocatorInstance.Data +
                  (longlong)local_278.Points.ArrayNum * 0x18 + 8) = dStack_2b0;
                *(double *)
                 (local_278.Points.AllocatorInstance.Data +
                 (longlong)local_278.Points.ArrayNum * 0x18 + 0x10) = local_2a8;
                pFVar3 = (FVisualLogShapeElement *)(pTVar1->AllocatorInstance).Data;
                local_278.Points.ArrayNum = iVar22;
                if (((pFVar3 <= &local_278) && (&local_278 < pFVar3 + *piVar2)) &&
                   (bVar19 = FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar22 = (pFVar24->ElementsToDraw).ArrayNum;
                if (iVar22 == *piVar2) {
                  iVar22 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x10c0,&pTVar1->AllocatorInstance,piVar2);
                }
                (pFVar24->ElementsToDraw).ArrayNum = iVar22 + 1;
                FVisualLogShapeElement::FVisualLogShapeElement
                          ((FVisualLogShapeElement *)
                           ((pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 0xc0),&local_278);
                local_310 = (iVar17 + 1) % 5;
                if (local_278.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Points.AllocatorInstance.Data);
                }
                if (local_278.Description.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Description.Data.AllocatorInstance.Data);
                }
              }
            }
            uVar28 = (ulonglong)(uVar31 + 1);
            uVar32 = local_2f8 + 1;
            param_2 = local_2f0;
            local_2f8 = uVar32;
          } while ((longlong)uVar32 <= (longlong)local_298);
        }
        (**(code **)(this->_padding_ + 0x850))(this);
        if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.AllocatorInstance.Data);
        }
      }
      if (local_1b8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Points.AllocatorInstance.Data);
      }
      if (local_1b8.Description.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_1b8.Description.Data.AllocatorInstance.Data);
      return;
    }
  }
  FVisualLogger::Get();
  return;
}

// Z_Construct_UClass_AGridPathAIController_NoRegister @ 146fe30d0

UClass * __cdecl Z_Construct_UClass_AGridPathAIController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGridPathAIController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GridPathAIController",
               &Z_Registration_Info_UClass_AGridPathAIController.InnerSingleton,
               AGridPathAIController::StaticRegisterNativesAGridPathAIController,0x400,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGridPathAIController>,
               InternalVTableHelperCtorCaller<AGridPathAIController>,local_res8,
               AAIController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGridPathAIController.InnerSingleton;
}

// Z_Construct_UClass_ANavLinkProxy_NoRegister @ 146fe3190

UClass * __cdecl Z_Construct_UClass_ANavLinkProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavLinkProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"NavLinkProxy",
               &Z_Registration_Info_UClass_ANavLinkProxy.InnerSingleton,
               ANavLinkProxy::StaticRegisterNativesANavLinkProxy,0x318,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavLinkProxy>,InternalVTableHelperCtorCaller<ANavLinkProxy>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavLinkProxy.InnerSingleton;
}

// Z_Construct_UClass_UAIHotSpotManager_NoRegister @ 146fe3250

UClass * __cdecl Z_Construct_UClass_UAIHotSpotManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIHotSpotManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIHotSpotManager",
               &Z_Registration_Info_UClass_UAIHotSpotManager.InnerSingleton,
               UAIHotSpotManager::StaticRegisterNativesUAIHotSpotManager,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAIHotSpotManager>,
               InternalVTableHelperCtorCaller<UAIHotSpotManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIHotSpotManager.InnerSingleton;
}

// Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister @ 146fe3300

UClass * __cdecl Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionListenerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionListenerInterface",
               &Z_Registration_Info_UClass_UAIPerceptionListenerInterface.InnerSingleton,
               UAIPerceptionListenerInterface::StaticRegisterNativesUAIPerceptionListenerInterface,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAIPerceptionListenerInterface>,
               InternalVTableHelperCtorCaller<UAIPerceptionListenerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionListenerInterface.InnerSingleton;
}

// Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister @ 146fe33c0

UClass * __cdecl Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIPerceptionStimuliSourceComponent",
               &Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.InnerSingleton,
               UAIPerceptionStimuliSourceComponent::
               StaticRegisterNativesUAIPerceptionStimuliSourceComponent,0xd8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAIPerceptionStimuliSourceComponent>,
               InternalVTableHelperCtorCaller<UAIPerceptionStimuliSourceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.InnerSingleton;
}

// Z_Construct_UClass_UAISenseConfig_Damage_NoRegister @ 146fe3480

UClass * __cdecl Z_Construct_UClass_UAISenseConfig_Damage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Damage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Damage",
               &Z_Registration_Info_UClass_UAISenseConfig_Damage.InnerSingleton,
               UAISenseConfig_Damage::StaticRegisterNativesUAISenseConfig_Damage,0x50,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAISenseConfig_Damage>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Damage>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Damage.InnerSingleton;
}

// Z_Construct_UClass_UAISense_Blueprint_NoRegister @ 146fe3540

UClass * __cdecl Z_Construct_UClass_UAISense_Blueprint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Blueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Blueprint",
               &Z_Registration_Info_UClass_UAISense_Blueprint.InnerSingleton,
               UAISense_Blueprint::StaticRegisterNativesUAISense_Blueprint,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISense_Blueprint>,
               InternalVTableHelperCtorCaller<UAISense_Blueprint>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Blueprint.InnerSingleton;
}

// Z_Construct_UClass_UAISense_Hearing_NoRegister @ 146fe3600

UClass * __cdecl Z_Construct_UClass_UAISense_Hearing_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Hearing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Hearing",
               &Z_Registration_Info_UClass_UAISense_Hearing.InnerSingleton,
               UAISense_Hearing::StaticRegisterNativesUAISense_Hearing,0xf8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAISense_Hearing>,
               InternalVTableHelperCtorCaller<UAISense_Hearing>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Hearing.InnerSingleton;
}

// Z_Construct_UClass_UAISense_Prediction_NoRegister @ 146fe36c0

UClass * __cdecl Z_Construct_UClass_UAISense_Prediction_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Prediction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Prediction",
               &Z_Registration_Info_UClass_UAISense_Prediction.InnerSingleton,
               UAISense_Prediction::StaticRegisterNativesUAISense_Prediction,0xa0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISense_Prediction>,
               InternalVTableHelperCtorCaller<UAISense_Prediction>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Prediction.InnerSingleton;
}

// Z_Construct_UClass_UAISense_Sight_NoRegister @ 146fe3780

UClass * __cdecl Z_Construct_UClass_UAISense_Sight_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Sight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Sight",
               &Z_Registration_Info_UClass_UAISense_Sight.InnerSingleton,
               UAISense_Sight::StaticRegisterNativesUAISense_Sight,0x1d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAISense_Sight>,InternalVTableHelperCtorCaller<UAISense_Sight>,
               local_res8,UAISense::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Sight.InnerSingleton;
}

// Z_Construct_UClass_UCrowdFollowingComponent_NoRegister @ 146fe3840

UClass * __cdecl Z_Construct_UClass_UCrowdFollowingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdFollowingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"CrowdFollowingComponent",
               &Z_Registration_Info_UClass_UCrowdFollowingComponent.InnerSingleton,
               UCrowdFollowingComponent::StaticRegisterNativesUCrowdFollowingComponent,0x378,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCrowdFollowingComponent>,
               InternalVTableHelperCtorCaller<UCrowdFollowingComponent>,local_res8,
               UPathFollowingComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdFollowingComponent.InnerSingleton;
}

// Z_Construct_UClass_UCrowdManager_NoRegister @ 146fe3900

UClass * __cdecl Z_Construct_UClass_UCrowdManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"CrowdManager",
               &Z_Registration_Info_UClass_UCrowdManager.InnerSingleton,
               UCrowdManager::StaticRegisterNativesUCrowdManager,0xf0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"Engine",InternalConstructor<UCrowdManager>,
               InternalVTableHelperCtorCaller<UCrowdManager>,local_res8,
               UCrowdManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdManager.InnerSingleton;
}

// Z_Construct_UClass_UGeneratedNavLinksProxy_NoRegister @ 146fe39c0

UClass * __cdecl Z_Construct_UClass_UGeneratedNavLinksProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneratedNavLinksProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GeneratedNavLinksProxy",
               &Z_Registration_Info_UClass_UGeneratedNavLinksProxy.InnerSingleton,
               UGeneratedNavLinksProxy::StaticRegisterNativesUGeneratedNavLinksProxy,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGeneratedNavLinksProxy>
               ,InternalVTableHelperCtorCaller<UGeneratedNavLinksProxy>,local_res8,
               UBaseGeneratedNavLinksProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneratedNavLinksProxy.InnerSingleton;
}

// Z_Construct_UClass_UGridPathFollowingComponent_NoRegister @ 146fe3a80

UClass * __cdecl Z_Construct_UClass_UGridPathFollowingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGridPathFollowingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GridPathFollowingComponent",
               &Z_Registration_Info_UClass_UGridPathFollowingComponent.InnerSingleton,
               UGridPathFollowingComponent::StaticRegisterNativesUGridPathFollowingComponent,0x358,8
               ,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGridPathFollowingComponent>,
               InternalVTableHelperCtorCaller<UGridPathFollowingComponent>,local_res8,
               UPathFollowingComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGridPathFollowingComponent.InnerSingleton;
}

// Z_Construct_UClass_UNavFilter_AIControllerDefault_NoRegister @ 146fe3b40

UClass * __cdecl Z_Construct_UClass_UNavFilter_AIControllerDefault_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"NavFilter_AIControllerDefault",
               &Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.InnerSingleton,
               UNavFilter_AIControllerDefault::StaticRegisterNativesUNavFilter_AIControllerDefault,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavFilter_AIControllerDefault>,
               InternalVTableHelperCtorCaller<UNavFilter_AIControllerDefault>,local_res8,
               UNavigationQueryFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavFilter_AIControllerDefault.InnerSingleton;
}

// Z_Construct_UClass_UPathFollowingComponent_NoRegister @ 146fe3c00

UClass * __cdecl Z_Construct_UClass_UPathFollowingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPathFollowingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"PathFollowingComponent",
               &Z_Registration_Info_UClass_UPathFollowingComponent.InnerSingleton,
               UPathFollowingComponent::StaticRegisterNativesUPathFollowingComponent,0x328,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPathFollowingComponent>,
               InternalVTableHelperCtorCaller<UPathFollowingComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPathFollowingComponent.InnerSingleton;
}

// Z_Construct_UClass_UPathFollowingManager_NoRegister @ 146fe3cc0

UClass * __cdecl Z_Construct_UClass_UPathFollowingManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPathFollowingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"PathFollowingManager",
               &Z_Registration_Info_UClass_UPathFollowingManager.InnerSingleton,
               UPathFollowingManager::StaticRegisterNativesUPathFollowingManager,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPathFollowingManager>,
               InternalVTableHelperCtorCaller<UPathFollowingManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPathFollowingManager.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EPathFollowingRequestResult @ 146fe3d70

UEnum * __cdecl Z_Construct_UEnum_AIModule_EPathFollowingRequestResult(void)

{
  if (Z_Registration_Info_UEnum_EPathFollowingRequestResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPathFollowingRequestResult.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPathFollowingRequestResult.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EPathFollowingResult @ 146fe3db0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EPathFollowingResult(void)

{
  if (Z_Registration_Info_UEnum_EPathFollowingResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPathFollowingResult.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPathFollowingResult.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EPathFollowingStatus @ 146fe3df0

UEnum * __cdecl Z_Construct_UEnum_AIModule_EPathFollowingStatus(void)

{
  if (Z_Registration_Info_UEnum_EPathFollowingStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPathFollowingStatus.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPathFollowingStatus.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAISenseAffiliationFilter @ 146fe3e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAISenseAffiliationFilter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAISenseAffiliationFilter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAISenseAffiliationFilter.InnerSingleton,
               &Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAISenseAffiliationFilter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAISenseAffiliationFilter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAISightEvent @ 146fe3eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAISightEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAISightEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAISightEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FAISightEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAISightEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAISightEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRecastGraphWrapper @ 146fe3f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRecastGraphWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRecastGraphWrapper.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRecastGraphWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRecastGraphWrapper.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRecastGraphWrapper.InnerSingleton;
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

// BPSenseToSenseID'' @ 1503e19d0

void __cdecl `dynamic_atexit_destructor_for_'UAISense_Blueprint::BPSenseToSenseID__(void)

{
  UAISense_Blueprint::BPSenseToSenseID._72_4_ = 0;
  if (UAISense_Blueprint::BPSenseToSenseID._64_8_ != 0) {
    FMemory::Free((void *)UAISense_Blueprint::BPSenseToSenseID._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FNameEntryId,FAINamedID<FAISenseCounter>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNameEntryId,FAINamedID<FAISenseCounter>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNameEntryId,FAINamedID<FAISenseCounter>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UAISense_Blueprint::BPSenseToSenseID);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugSelectedActors'' @ 1503e1a10

void __cdecl FCrowdDebug::_dynamic_atexit_destructor_for__CVarDebugSelectedActors__(void)

{
  CVarDebugSelectedActors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugSelectedActors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugVisLog'' @ 1503e1a30

void __cdecl FCrowdDebug::_dynamic_atexit_destructor_for__CVarDebugVisLog__(void)

{
  CVarDebugVisLog._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugVisLog);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugBoundaries'' @ 1503e1a50

void __cdecl FCrowdDebug::_dynamic_atexit_destructor_for__CVarDrawDebugBoundaries__(void)

{
  CVarDrawDebugBoundaries._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugBoundaries);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugCollisionSegments'' @ 1503e1a70

void __cdecl FCrowdDebug::_dynamic_atexit_destructor_for__CVarDrawDebugCollisionSegments__(void)

{
  CVarDrawDebugCollisionSegments._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugCollisionSegments);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugCorners'' @ 1503e1a90

void __cdecl FCrowdDebug::_dynamic_atexit_destructor_for__CVarDrawDebugCorners__(void)

{
  CVarDrawDebugCorners._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugCorners);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugNeighbors'' @ 1503e1ab0

void __cdecl FCrowdDebug::_dynamic_atexit_destructor_for__CVarDrawDebugNeighbors__(void)

{
  CVarDrawDebugNeighbors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugNeighbors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugPath'' @ 1503e1ad0

void __cdecl FCrowdDebug::_dynamic_atexit_destructor_for__CVarDrawDebugPath__(void)

{
  CVarDrawDebugPath._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugPath);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugPathOptimization'' @ 1503e1af0

void __cdecl FCrowdDebug::_dynamic_atexit_destructor_for__CVarDrawDebugPathOptimization__(void)

{
  CVarDrawDebugPathOptimization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugPathOptimization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugVelocityObstacles'' @ 1503e1b10

void __cdecl FCrowdDebug::_dynamic_atexit_destructor_for__CVarDrawDebugVelocityObstacles__(void)

{
  CVarDrawDebugVelocityObstacles._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugVelocityObstacles);
  return;
}

// `dynamic_atexit_destructor_for_'CVars_GameplayDebuggerCategory_Navmesh'' @ 1503e1b30

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVars_GameplayDebuggerCategory_Navmesh__
          (void)

{
  CVars_GameplayDebuggerCategory_Navmesh[2]._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)(CVars_GameplayDebuggerCategory_Navmesh + 2));
  CVars_GameplayDebuggerCategory_Navmesh[1]._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)(CVars_GameplayDebuggerCategory_Navmesh + 1));
  CVars_GameplayDebuggerCategory_Navmesh[0]._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)CVars_GameplayDebuggerCategory_Navmesh);
  return;
}

// `dynamic_atexit_destructor_for_'ColorNameDisabled'' @ 1503e1b90

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

// `dynamic_atexit_destructor_for_'ColorNameDisabledActiveRow'' @ 1503e1bb0

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

// `dynamic_atexit_destructor_for_'ColorNameEnabled'' @ 1503e1bd0

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

// `dynamic_atexit_destructor_for_'ColorNameEnabledActiveRow'' @ 1503e1bf0

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

// `dynamic_atexit_destructor_for_'ColorNameInput'' @ 1503e1c10

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

// `dynamic_atexit_destructor_for_'CrowdSimulationDesc'' @ 1503e1c30

void __cdecl
`UCrowdFollowingComponent::SetCrowdSimulationState'::__l2::
_dynamic_atexit_destructor_for__CrowdSimulationDesc__(void)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &::_TSS0;
  lVar2 = 3;
  do {
    piVar1 = piVar3 + -4;
    piVar3 = piVar3 + -4;
    lVar2 = lVar2 + -1;
    if (*(void **)piVar1 != (void *)0x0) {
      FMemory::Free(*(void **)piVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'FlagDesc'' @ 1503e1c80

void __cdecl
`FPathFollowingResultFlags::ToString'::__l2::_dynamic_atexit_destructor_for__FlagDesc__(void)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &::_TSS0;
  lVar2 = 10;
  do {
    piVar1 = piVar3 + -4;
    piVar3 = piVar3 + -4;
    lVar2 = lVar2 + -1;
    if (*(void **)piVar1 != (void *)0x0) {
      FMemory::Free(*(void **)piVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'LogAIPerception'' @ 1503e1cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAIPerception__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAIPerception);
  return;
}

// `dynamic_atexit_destructor_for_'LogCrowdFollowing'' @ 1503e1cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCrowdFollowing__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCrowdFollowing);
  return;
}

// `dynamic_atexit_destructor_for_'LogPathFollowing'' @ 1503e1d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPathFollowing__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPathFollowing);
  return;
}

// `dynamic_atexit_destructor_for_'Separator'' @ 1503e1d30

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

// `dynamic_atexit_destructor_for_'SeparatorSpace'' @ 1503e1d50

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

