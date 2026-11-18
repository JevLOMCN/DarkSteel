// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 652

// ConstructNewInstanceDelegate'' @ 1410d5840

void __cdecl `dynamic_initializer_for_'UNavCollisionBase::ConstructNewInstanceDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNavCollisionBase::ConstructNewInstanceDelegate__);
  return;
}

// DefaultProperties'' @ 1410d5860

void __cdecl `dynamic_initializer_for_'FNavAgentProperties::DefaultProperties__(void)

{
  FNavAgentProperties::DefaultProperties._padding_._0_1_ =
       (byte)FNavAgentProperties::DefaultProperties._padding_ & 0xe0;
  atexit(`dynamic_atexit_destructor_for_'FNavAgentProperties::DefaultProperties__);
  return;
}

// DelegateInitializer'' @ 1410d5880

void __cdecl `dynamic_initializer_for_'UNavCollisionBase::DelegateInitializer__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UNavCollisionBase::ConstructNewInstanceDelegate,(FWriteAccessScope *)&local_28);
  local_10 = 0x1551e9410;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &UNavCollisionBase::ConstructNewInstanceDelegate.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy,`UNavCollisionBase::FDelegateInitializer::FDelegateInitializer'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Invalid'' @ 1410d5900

void __cdecl `dynamic_initializer_for_'FNavigationElementHandle::Invalid__(void)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&FNavigationElementHandle::Invalid,(FObjectPtr)local_res8);
  FNavigationElementHandle::Invalid.SubElementId = 0xffffffffffffffff;
  return;
}

// MakeNoiseDelegate'' @ 1410d5940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'AActor::MakeNoiseDelegate__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&AActor::MakeNoiseDelegate,
             (FWriteAccessScope *)&local_28);
  local_10 = 0x1551e84c0;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&AActor::MakeNoiseDelegate.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAActor__MPEAVAPawn__AEBU__TVector_N_Math_UE__MVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVAActor__MPEAVAPawn__AEBU__TVector_N_Math_UE__MVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = AActor::MakeNoiseImpl;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  atexit(`dynamic_atexit_destructor_for_'AActor::MakeNoiseDelegate__);
  return;
}

// Name'' @ 1410d59d0

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
IRowBatchInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  IRowBatchInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name,
                 "RowBatchInfo");
  return;
}

// Name'' @ 1410d59f0

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name,
                 "RowBatchInfo");
  return;
}

// Name'' @ 1410d5a10

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
ISingleRowInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  ISingleRowInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name
                 ,"SingleRowInfo");
  return;
}

// Name'' @ 1410d5a30

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name,
                 "SingleRowInfo");
  return;
}

// ObjectMappingDomain'' @ 1410d5a50

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::ICompatibilityProvider::ObjectMappingDomain__
          (void)

{
  ::FName::FName(&UE::Editor::DataStorage::ICompatibilityProvider::ObjectMappingDomain,"Object");
  return;
}

// ProcessEventDelegate'' @ 1410d5a70

void __cdecl `dynamic_initializer_for_'AActor::ProcessEventDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'AActor::ProcessEventDelegate__);
  return;
}

// `dynamic_initializer_for_'CSVActorClassNameToCountMap'' @ 1410d5a90

void __cdecl _dynamic_initializer_for__CSVActorClassNameToCountMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__CSVActorClassNameToCountMap__);
  return;
}

// `dynamic_initializer_for_'CSVActorClassNameToCountMapLock'' @ 1410d5ab0

void __cdecl _dynamic_initializer_for__CSVActorClassNameToCountMapLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock,4000);
  atexit(_dynamic_atexit_destructor_for__CSVActorClassNameToCountMapLock__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDebugRepMovement'' @ 1410d5ae0

void __cdecl _dynamic_initializer_for__CVarDrawDebugRepMovement__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDrawDebugRepMovement,L"Net.RepMovement.DrawDebug",local_res8,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawDebugRepMovement__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNavMeshResolutions'' @ 1410d5b30

void __cdecl UE::Navigation::Private::_dynamic_initializer_for__CVarEnableNavMeshResolutions__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNavMeshResolutions,L"ai.nav.EnableNavMeshResolutions",
             &FCompositeNavModifier::bEnableNavMeshResolutions,
             L"When set to false, navmesh resoutions will be ignored.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNavMeshResolutions__);
  return;
}

// `dynamic_initializer_for_'CVarLogBlueprintComponentInstanceCalls'' @ 1410d5b80

void __cdecl _dynamic_initializer_for__CVarLogBlueprintComponentInstanceCalls__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogBlueprintComponentInstanceCalls,L"LogBlueprintComponentInstanceCalls",
             local_res8,L"Log Blueprint Component instance calls; debugging.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogBlueprintComponentInstanceCalls__);
  return;
}

// `dynamic_initializer_for_'CVarStopReplicationForActorComponentWhenUpdatingReplicatedComponent'' @ 1410d5bd0

void __cdecl
_dynamic_initializer_for__CVarStopReplicationForActorComponentWhenUpdatingReplicatedComponent__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStopReplicationForActorComponentWhenUpdatingReplicatedComponent,
             L"net.Iris.CallStopReplicationForActorComponentWhenUpdatingReplicatedComponent",
             &GbCallStopReplicationForActorComponentWhenUpdatingReplicatedComponent,
             L"If true, replicated ActorComponentrs will call stop replication if they are no longer replicated after a call to UpdateReplicatedComponent.."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarStopReplicationForActorComponentWhenUpdatingReplicatedComponent__
        );
  return;
}

// `dynamic_initializer_for_'ConsoleVariables'' @ 1410d5c20

void __cdecl UE::NavigationElement::Private::_dynamic_initializer_for__ConsoleVariables__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (ConsoleVariables,L"ai.debug.nav.validateNavigationElementInitialization",
             &bValidateNavigationElementInitialization,
             L"Used to validate that the values returned by INavRelevantInterface when initializing the FNavigationElement makes sense.Those warnings might not be critical since an update can be sent after and update then pending element but might still worth investigating the use case to reduce redundant operations."
             ,0);
  atexit(_dynamic_atexit_destructor_for__ConsoleVariables__);
  return;
}

// `dynamic_initializer_for_'Delegates'' @ 1410d5c70

void __cdecl FNavigationSystem::_dynamic_initializer_for__Delegates__(void)

{
  FDelegates::FDelegates(&Delegates);
  atexit(_dynamic_atexit_destructor_for__Delegates__);
  return;
}

// `dynamic_initializer_for_'GSpawnActorDeferredTransformCache'' @ 1410d5ca0

void __cdecl _dynamic_initializer_for__GSpawnActorDeferredTransformCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSpawnActorDeferredTransformCache__);
  return;
}

// `dynamic_initializer_for_'IsConstName'' @ 1410d5cc0

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__IsConstName__(void)

{
  ::FName::FName(&IsConstName,L"IsConst");
  return;
}

// `dynamic_initializer_for_'IsEditableName'' @ 1410d5ce0

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__IsEditableName__(void)

{
  ::FName::FName(&IsEditableName,L"IsEditable");
  return;
}

// `dynamic_initializer_for_'LogAStar'' @ 1410d5d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAStar__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAStar,L"LogAStar",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAStar__);
  return;
}

// `dynamic_initializer_for_'LogActor'' @ 1410d5d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogActor__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogActor,L"LogActor",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogActor__);
  return;
}

// `dynamic_initializer_for_'LogActorPartitionSubsystem'' @ 1410d5d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogActorPartitionSubsystem__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogActorPartitionSubsystem,L"LogActorPartitionSubsystem",All,All);
  atexit(_dynamic_atexit_destructor_for__LogActorPartitionSubsystem__);
  return;
}

// `dynamic_initializer_for_'LogBlueprintUserMessages'' @ 1410d5dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBlueprintUserMessages__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBlueprintUserMessages,L"LogBlueprintUserMessages",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBlueprintUserMessages__);
  return;
}

// `dynamic_initializer_for_'LogNavInvokers'' @ 1410d5e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNavInvokers__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNavInvokers,L"LogNavInvokers",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNavInvokers__);
  return;
}

// `dynamic_initializer_for_'LogNavLink'' @ 1410d5e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNavLink__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNavLink,L"LogNavLink",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNavLink__);
  return;
}

// `dynamic_initializer_for_'LogNavigation'' @ 1410d5e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNavigation__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNavigation,L"LogNavigation",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNavigation__);
  return;
}

// `dynamic_initializer_for_'LogNavigationDataBuild'' @ 1410d5ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNavigationDataBuild__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNavigationDataBuild,L"LogNavigationDataBuild",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNavigationDataBuild__);
  return;
}

// `dynamic_initializer_for_'LogNavigationHistory'' @ 1410d5f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNavigationHistory__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNavigationHistory,L"LogNavigationHistory",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNavigationHistory__);
  return;
}

// `dynamic_initializer_for_'LogPartitionActor'' @ 1410d5f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPartitionActor__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPartitionActor,L"LogPartitionActor",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPartitionActor__);
  return;
}

// `dynamic_initializer_for_'NAME_AActor_K2_OnBecomeViewTarget'' @ 1410d5f80

void __cdecl _dynamic_initializer_for__NAME_AActor_K2_OnBecomeViewTarget__(void)

{
  FName::FName(&NAME_AActor_K2_OnBecomeViewTarget,L"K2_OnBecomeViewTarget");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_K2_OnEndViewTarget'' @ 1410d5fa0

void __cdecl _dynamic_initializer_for__NAME_AActor_K2_OnEndViewTarget__(void)

{
  FName::FName(&NAME_AActor_K2_OnEndViewTarget,L"K2_OnEndViewTarget");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_K2_OnReset'' @ 1410d5fc0

void __cdecl _dynamic_initializer_for__NAME_AActor_K2_OnReset__(void)

{
  FName::FName(&NAME_AActor_K2_OnReset,L"K2_OnReset");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorBeginCursorOver'' @ 1410d5fe0

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorBeginCursorOver__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorBeginCursorOver,L"ReceiveActorBeginCursorOver");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorBeginOverlap'' @ 1410d6000

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorBeginOverlap__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorBeginOverlap,L"ReceiveActorBeginOverlap");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorEndCursorOver'' @ 1410d6020

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorEndCursorOver__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorEndCursorOver,L"ReceiveActorEndCursorOver");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorEndOverlap'' @ 1410d6040

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorEndOverlap__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorEndOverlap,L"ReceiveActorEndOverlap");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorOnClicked'' @ 1410d6060

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorOnClicked__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorOnClicked,L"ReceiveActorOnClicked");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorOnInputTouchBegin'' @ 1410d6080

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorOnInputTouchBegin__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorOnInputTouchBegin,L"ReceiveActorOnInputTouchBegin");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorOnInputTouchEnd'' @ 1410d60a0

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorOnInputTouchEnd__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorOnInputTouchEnd,L"ReceiveActorOnInputTouchEnd");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorOnInputTouchEnter'' @ 1410d60c0

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorOnInputTouchEnter__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorOnInputTouchEnter,L"ReceiveActorOnInputTouchEnter");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorOnInputTouchLeave'' @ 1410d60e0

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorOnInputTouchLeave__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorOnInputTouchLeave,L"ReceiveActorOnInputTouchLeave");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveActorOnReleased'' @ 1410d6100

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveActorOnReleased__(void)

{
  FName::FName(&NAME_AActor_ReceiveActorOnReleased,L"ReceiveActorOnReleased");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveAnyDamage'' @ 1410d6120

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveAnyDamage__(void)

{
  FName::FName(&NAME_AActor_ReceiveAnyDamage,L"ReceiveAnyDamage");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveAsyncPhysicsTick'' @ 1410d6140

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveAsyncPhysicsTick__(void)

{
  FName::FName(&NAME_AActor_ReceiveAsyncPhysicsTick,L"ReceiveAsyncPhysicsTick");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveBeginPlay'' @ 1410d6160

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveBeginPlay__(void)

{
  FName::FName(&NAME_AActor_ReceiveBeginPlay,L"ReceiveBeginPlay");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveDestroyed'' @ 1410d6180

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveDestroyed__(void)

{
  FName::FName(&NAME_AActor_ReceiveDestroyed,L"ReceiveDestroyed");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveEndPlay'' @ 1410d61a0

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveEndPlay__(void)

{
  FName::FName(&NAME_AActor_ReceiveEndPlay,L"ReceiveEndPlay");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveHit'' @ 1410d61c0

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveHit__(void)

{
  FName::FName(&NAME_AActor_ReceiveHit,L"ReceiveHit");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceivePointDamage'' @ 1410d61e0

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceivePointDamage__(void)

{
  FName::FName(&NAME_AActor_ReceivePointDamage,L"ReceivePointDamage");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveRadialDamage'' @ 1410d6200

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveRadialDamage__(void)

{
  FName::FName(&NAME_AActor_ReceiveRadialDamage,L"ReceiveRadialDamage");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_ReceiveTick'' @ 1410d6220

void __cdecl _dynamic_initializer_for__NAME_AActor_ReceiveTick__(void)

{
  FName::FName(&NAME_AActor_ReceiveTick,L"ReceiveTick");
  return;
}

// `dynamic_initializer_for_'NAME_AActor_UserConstructionScript'' @ 1410d6240

void __cdecl _dynamic_initializer_for__NAME_AActor_UserConstructionScript__(void)

{
  FName::FName(&NAME_AActor_UserConstructionScript,L"UserConstructionScript");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_ObstacleAvoidance'' @ 1410d6260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_ObstacleAvoidance__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_ObstacleAvoidance ==
      (FThreadSafeStaticStat<FStat_STAT_AI_ObstacleAvoidance>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_ObstacleAvoidance");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_ObstacleAvoidance,*pFVar1,
               L"Avoidance Time","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InstanceActorComponent'' @ 1410d62f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InstanceActorComponent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InstanceActorComponent ==
      (FThreadSafeStaticStat<FStat_STAT_InstanceActorComponent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InstanceActorComponent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceActorComponent,*pFVar1,
               L"InstanceActorComponent","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_MetaAreaTranslation'' @ 1410d6380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_MetaAreaTranslation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_MetaAreaTranslation ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_MetaAreaTranslation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_MetaAreaTranslation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_MetaAreaTranslation,*pFVar1,
               L"Sync meta nav area preparation","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PostActorConstruction'' @ 1410d6410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PostActorConstruction__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PostActorConstruction ==
      (FThreadSafeStaticStat<FStat_STAT_PostActorConstruction>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PostActorConstruction");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostActorConstruction,*pFVar1,
               L"PostActorConstruction","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UCSBlueprintComponentArchetypeCounts'' @ 1410d64a0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__UCSBlueprintComponentArchetypeCounts__(void)

{
  atexit(_dynamic_atexit_destructor_for__UCSBlueprintComponentArchetypeCounts__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h__Script_Engine_1945666093'' @ 1410d64c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h__Script_Engine_1945666093__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h__Script_Engine_4179452367'' @ 1410d6500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h__Script_Engine_4179452367__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h__Script_Engine_239069360'' @ 1410d6550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h__Script_Engine_239069360__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h__Script_Engine_3140549487'' @ 1410d6590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h__Script_Engine_3140549487__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h__Script_Engine_1026721867'' @ 1410d65e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h__Script_Engine_1026721867__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h__Script_Engine_843385643'' @ 1410d6620

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h__Script_Engine_843385643__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h__Script_Engine_3146212239'' @ 1410d6660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h__Script_Engine_3146212239__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h__Script_Engine_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h__Script_Engine_1689552477'' @ 1410d66b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h__Script_Engine_1689552477__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Actor_h__Script_Engine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h__Script_Engine_4200703623'' @ 1410d6700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h__Script_Engine_4200703623__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h__Script_Engine_2458135335'' @ 1410d6740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h__Script_Engine_2458135335__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h__Script_Engine_2350223131'' @ 1410d6780

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h__Script_Engine_2350223131__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_ActorMigration'' @ 1410d67c0

void __cdecl _dynamic_initializer_for___GCsvCategory_ActorMigration__(void)

{
  FString::operator=(&_GCsvCategory_ActorMigration.Name,L"ActorMigration");
  _GCsvCategory_ActorMigration.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_ActorMigration.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_ActorMigration__);
  return;
}

// NewProp_bWeldSimulatedBodies_SetBit @ 1473626c0

void __cdecl
Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_bWeldSimulatedBodies_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 1473626d0

void __cdecl
Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UClass_UNavigationSystemBase @ 1473626e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationSystemBase(void)

{
  if (Z_Registration_Info_UClass_UNavigationSystemBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationSystemBase.OuterSingleton,
               &Z_Construct_UClass_UNavigationSystemBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationSystemBase.OuterSingleton;
}

// FNavigationSystemRunMode_StaticEnum @ 147362720

UEnum * __cdecl FNavigationSystemRunMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_FNavigationSystemRunMode,(UObject *)pUVar1,
                       L"FNavigationSystemRunMode");
  }
  return Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton;
}

// Z_Construct_UFunction_AActor_K2_AttachToActor @ 147362760

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AttachToActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_AttachToActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWeldSimulatedBodies_SetBit @ 1473627a0

void __cdecl
Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 1473627b0

void __cdecl
Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AttachToComponent @ 1473627c0

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AttachToComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AttachToComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_K2_DestroyActor @ 147362830

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_DestroyActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_DestroyActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_K2_DetachFromActor @ 1473628d0

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_DetachFromActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_DetachFromActor_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_K2_GetActorLocation @ 147362910

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_GetActorLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_GetActorLocation_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_K2_GetActorRotation @ 147362950

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_GetActorRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_GetActorRotation_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_K2_GetComponentsByClass @ 147362990

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_GetComponentsByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_GetComponentsByClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_K2_GetRootComponent @ 1473629d0

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_GetRootComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_GetRootComponent_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget @ 147362a10

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_OnBecomeViewTarget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_K2_OnEndViewTarget @ 147362a50

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_OnEndViewTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_OnEndViewTarget_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_K2_OnReset @ 147362a90

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_OnReset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_OnReset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147362ad0

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147362ae0

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_bTeleport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147362af0

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x121) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_SetActorLocation @ 147362b00

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_SetActorLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_SetActorLocation_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147362b40

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bSweep_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147362b50

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147362b60

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x139) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation @ 147362b70

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_SetActorLocationAndRotation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147362bb0

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bSweep_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147362bc0

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation @ 147362bd0

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_SetActorRelativeLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147362c10

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bSweep_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147362c20

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation @ 147362c30

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_SetActorRelativeRotation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147362c70

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bSweep_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147362c80

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x168) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform @ 147362c90

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_SetActorRelativeTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTeleportPhysics_SetBit @ 147362cd0

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_bTeleportPhysics_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147362ce0

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_SetActorRotation @ 147362cf0

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_SetActorRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_SetActorRotation_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147362d30

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147362d40

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_bTeleport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x168) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147362d50

void __cdecl
Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x169) = 1;
  return;
}

// Z_Construct_UClass_AActor @ 147362d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AActor(void)

{
  if (Z_Registration_Info_UClass_AActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AActor.OuterSingleton,
               &Z_Construct_UClass_AActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AActor.OuterSingleton;
}

// Z_Construct_UFunction_AActor_K2_SetActorTransform @ 147362da0

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_SetActorTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_SetActorTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod @ 147362de0

UEnum * __cdecl Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod(void)

{
  if (Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.InnerSingleton;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature @ 147362e20

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorBeginCursorOverSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature @ 147362e60

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorBeginOverlapSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature @ 147362ea0

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorBeginTouchOverSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature @ 147362ee0

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorDestroyedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature @ 147362f20

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorEndCursorOverSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature @ 147362f60

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorEndOverlapSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature @ 147362fa0

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorEndPlaySignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature @ 147362fe0

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorEndTouchOverSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature @ 147363020

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorHitSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature @ 147363060

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorOnClickedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature @ 1473630a0

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchBeginSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature @ 1473630e0

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorOnInputTouchEndSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature @ 147363120

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_ActorOnReleasedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature @ 147363160

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_TakeAnyDamageSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature @ 1473631a0

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_TakePointDamageSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature @ 1473631e0

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_TakeRadialDamageSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147363220

void __cdecl
Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// EActorUpdateOverlapsMethod_StaticEnum @ 147363230

UEnum * __cdecl EActorUpdateOverlapsMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod,(UObject *)pUVar1,
                       L"EActorUpdateOverlapsMethod");
  }
  return Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.OuterSingleton;
}

// Z_Construct_UFunction_AActor_K2_TeleportTo @ 147363270

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_TeleportTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_K2_TeleportTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESpawnActorScaleMethod_StaticEnum @ 1473632b0

UEnum * __cdecl ESpawnActorScaleMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpawnActorScaleMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESpawnActorScaleMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESpawnActorScaleMethod,(UObject *)pUVar1,
                       L"ESpawnActorScaleMethod");
  }
  return Z_Registration_Info_UEnum_ESpawnActorScaleMethod.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovementProperties @ 1473632f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovementProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovementProperties.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovementProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovementProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovementProperties.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMovementProperties.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavAgentProperties @ 147363370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavAgentProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavAgentProperties.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavAgentProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavAgentProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavAgentProperties.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNavAgentProperties.InnerSingleton;
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

// ENavigationOptionFlag_StaticEnum @ 1473633f0

UEnum * __cdecl ENavigationOptionFlag_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationOptionFlag,(UObject *)pUVar1,
                       L"ENavigationOptionFlag");
  }
  return Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton;
}

// ELevelInstanceType_StaticEnum @ 147363430

UEnum * __cdecl ELevelInstanceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELevelInstanceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ELevelInstanceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceType,(UObject *)pUVar1,
                       L"ELevelInstanceType");
  }
  return Z_Registration_Info_UEnum_ELevelInstanceType.OuterSingleton;
}

// Z_Construct_UFunction_AActor_MakeNoise @ 147363470

UFunction * __cdecl Z_Construct_UFunction_AActor_MakeNoise(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_MakeNoise_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ENavDataGatheringModeConfig_StaticEnum @ 1473634b0

UEnum * __cdecl ENavDataGatheringModeConfig_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig,(UObject *)pUVar1,
                       L"ENavDataGatheringModeConfig");
  }
  return Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton;
}

// ELevelInstanceFlags_StaticEnum @ 1473634f0

UEnum * __cdecl ELevelInstanceFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELevelInstanceFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ELevelInstanceFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceFlags,(UObject *)pUVar1,
                       L"ELevelInstanceFlags");
  }
  return Z_Registration_Info_UEnum_ELevelInstanceFlags.OuterSingleton;
}

// Z_Construct_UFunction_AActor_OnRep_AttachmentReplication @ 147363530

UFunction * __cdecl Z_Construct_UFunction_AActor_OnRep_AttachmentReplication(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_OnRep_AttachmentReplication_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_OnRep_Instigator @ 147363630

UFunction * __cdecl Z_Construct_UFunction_AActor_OnRep_Instigator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_OnRep_Instigator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ENavigationSortPendingTilesMethod_StaticEnum @ 147363670

UEnum * __cdecl ENavigationSortPendingTilesMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod,(UObject *)pUVar1,
                       L"ENavigationSortPendingTilesMethod");
  }
  return Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.OuterSingleton;
}

// Z_Construct_UFunction_AActor_OnRep_Owner @ 1473636b0

UFunction * __cdecl Z_Construct_UFunction_AActor_OnRep_Owner(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_OnRep_Owner_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1473636f0

void * __cdecl Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavLinkAuxiliaryId,&UE::CoreUObject::Private::Construct<FNavLinkAuxiliaryId>,&UE::CoreUObject::Private::ConstructForTests<FNavLinkAuxiliaryId>,&UE::CoreUObject::Private::Destruct<FNavLinkAuxiliaryId>,&UE::CoreUObject::Private::Copy<FNavLinkAuxiliaryId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement @ 147363730

UFunction * __cdecl Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_OnRep_ReplicatedMovement_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UActorFolder @ 147363770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorFolder(void)

{
  if (Z_Registration_Info_UClass_UActorFolder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorFolder.OuterSingleton,
               &Z_Construct_UClass_UActorFolder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorFolder.OuterSingleton;
}

// Z_Construct_UFunction_AActor_OnRep_ReplicateMovement @ 1473637b0

UFunction * __cdecl Z_Construct_UFunction_AActor_OnRep_ReplicateMovement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_OnRep_ReplicateMovement_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableStreaming_SetBit @ 1473637f0

void __cdecl
Z_Construct_UFunction_AActor_PrestreamTextures_Statics::NewProp_bEnableStreaming_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_AActor_PrestreamTextures @ 147363800

UFunction * __cdecl Z_Construct_UFunction_AActor_PrestreamTextures(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_PrestreamTextures_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147363840

void * __cdecl Z_Construct_UScriptStruct_FNavLinkId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavLinkId,&UE::CoreUObject::Private::Construct<FNavLinkId>,&UE::CoreUObject::Private::ConstructForTests<FNavLinkId>,&UE::CoreUObject::Private::Destruct<FNavLinkId>,&UE::CoreUObject::Private::Copy<FNavLinkId>,&UE::CoreUObject::Private::GetStructTypeHash<FNavLinkId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver @ 147363880

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorBeginCursorOver_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap @ 1473638c0

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorBeginOverlap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ENavPathEvent_StaticEnum @ 147363900

UEnum * __cdecl ENavPathEvent_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavPathEvent,(UObject *)pUVar1,L"ENavPathEvent");
  }
  return Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton;
}

// Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver @ 147363940

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorEndCursorOver_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ReceiveActorEndOverlap @ 147363980

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorEndOverlap(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorEndOverlap_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCanCrouch_SetBit @ 1473639c0

void __cdecl
Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return;
}

// NewProp_bCanJump_SetBit @ 1473639d0

void __cdecl
Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 2;
  return;
}

// NewProp_bCanWalk_SetBit @ 1473639e0

void __cdecl
Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 4;
  return;
}

// NewProp_bCanSwim_SetBit @ 1473639f0

void __cdecl
Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 8;
  return;
}

// NewProp_bCanFly_SetBit @ 147363a00

void __cdecl
Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x10;
  return;
}

// NewStructOps @ 147363a10

void * __cdecl Z_Construct_UScriptStruct_FMovementProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovementProperties,&UE::CoreUObject::Private::Construct<FMovementProperties>,&UE::CoreUObject::Private::ConstructForTests<FMovementProperties>,&UE::CoreUObject::Private::Destruct<FMovementProperties>,&UE::CoreUObject::Private::Copy<FMovementProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AActor_ReceiveActorOnClicked @ 147363b10

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorOnClicked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorOnClicked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin @ 147363b50

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchBegin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd @ 147363b90

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUpdateNavAgentWithOwnersCollision_SetBit @ 147363bd0

void __cdecl
Z_Construct_UScriptStruct_FNavMovementProperties_Statics::
NewProp_bUpdateNavAgentWithOwnersCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bUseAccelerationForPaths_SetBit @ 147363be0

void __cdecl
Z_Construct_UScriptStruct_FNavMovementProperties_Statics::NewProp_bUseAccelerationForPaths_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bUseFixedBrakingDistanceForPaths_SetBit @ 147363bf0

void __cdecl
Z_Construct_UScriptStruct_FNavMovementProperties_Statics::
NewProp_bUseFixedBrakingDistanceForPaths_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewProp_bStopMovementAbortPaths_SetBit @ 147363c00

void __cdecl
Z_Construct_UScriptStruct_FNavMovementProperties_Statics::NewProp_bStopMovementAbortPaths_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 7) = 1;
  return;
}

// NewStructOps @ 147363c10

void * __cdecl Z_Construct_UScriptStruct_FNavMovementProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavMovementProperties,&UE::CoreUObject::Private::Construct<FNavMovementProperties>,&UE::CoreUObject::Private::ConstructForTests<FNavMovementProperties>,&UE::CoreUObject::Private::Destruct<FNavMovementProperties>,&UE::CoreUObject::Private::Copy<FNavMovementProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter @ 147363c50

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave @ 147363c90

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorOnInputTouchLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavCollisionBase @ 147363cd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavCollisionBase(void)

{
  if (Z_Registration_Info_UClass_UNavCollisionBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavCollisionBase.OuterSingleton,
               &Z_Construct_UClass_UNavCollisionBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavCollisionBase.OuterSingleton;
}

// NewProp_bIsDynamicObstacle_SetBit @ 147363d10

void __cdecl
Z_Construct_UClass_UNavCollisionBase_Statics::NewProp_bIsDynamicObstacle_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 1;
  return;
}

// Z_Construct_UFunction_AActor_ReceiveActorOnReleased @ 147363d20

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveActorOnReleased(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveActorOnReleased_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147363d60

void * __cdecl Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavAgentProperties,&UE::CoreUObject::Private::Construct<FNavAgentProperties>,&UE::CoreUObject::Private::ConstructForTests<FNavAgentProperties>,&UE::CoreUObject::Private::Destruct<FNavAgentProperties>,&UE::CoreUObject::Private::Copy<FNavAgentProperties>,&UE::CoreUObject::Private::GetStructTypeHash<FNavAgentProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AActor_ReceiveAnyDamage @ 147363da0

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveAnyDamage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ReceiveAnyDamage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavigationDataChunk @ 147363de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationDataChunk(void)

{
  if (Z_Registration_Info_UClass_UNavigationDataChunk.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationDataChunk.OuterSingleton,
               &Z_Construct_UClass_UNavigationDataChunk_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationDataChunk.OuterSingleton;
}

// NewStructOps @ 147363e20

void * __cdecl Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavDataConfig,&UE::CoreUObject::Private::Construct<FNavDataConfig>,&UE::CoreUObject::Private::ConstructForTests<FNavDataConfig>,&UE::CoreUObject::Private::Destruct<FNavDataConfig>,&UE::CoreUObject::Private::Copy<FNavDataConfig>,&UE::CoreUObject::Private::GetStructTypeHash<FNavDataConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick @ 147363e60

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_ReceiveAsyncPhysicsTick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ReceiveBeginPlay @ 147363ea0

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveBeginPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ReceiveBeginPlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ReceiveDestroyed @ 147363ee0

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveDestroyed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ReceiveDestroyed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ENavigationQueryResult_StaticEnum @ 147363f20

UEnum * __cdecl ENavigationQueryResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationQueryResult,(UObject *)pUVar1,
                       L"ENavigationQueryResult");
  }
  return Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton;
}

// Z_Construct_UFunction_AActor_ReceiveEndPlay @ 147363f60

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveEndPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ReceiveEndPlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelfMoved_SetBit @ 147363fa0

void __cdecl
Z_Construct_UFunction_AActor_ReceiveHit_Statics::NewProp_bSelfMoved_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_AActor_ReceiveHit @ 147363fb0

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveHit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ReceiveHit_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ReceivePointDamage @ 147363ff0

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceivePointDamage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ReceivePointDamage_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147364030

void __cdecl
Z_Construct_UFunction_AActor_ActorHasTag_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AActor_ReceiveRadialDamage @ 147364040

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveRadialDamage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ReceiveRadialDamage_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ActorHasTag @ 147364080

UFunction * __cdecl Z_Construct_UFunction_AActor_ActorHasTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ActorHasTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bManualAttachment_SetBit @ 1473640c0

void __cdecl
Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bManualAttachment_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bDeferredFinish_SetBit @ 1473640d0

void __cdecl
Z_Construct_UFunction_AActor_AddComponent_Statics::NewProp_bDeferredFinish_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UFunction_AActor_ReceiveTick @ 1473640e0

UFunction * __cdecl Z_Construct_UFunction_AActor_ReceiveTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ReceiveTick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_RegisterAsFocalPointInPhysicsReplicationLOD @ 147364120

UFunction * __cdecl Z_Construct_UFunction_AActor_RegisterAsFocalPointInPhysicsReplicationLOD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_RegisterAsFocalPointInPhysicsReplicationLOD_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_AddComponent @ 147364160

UFunction * __cdecl Z_Construct_UFunction_AActor_AddComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_AddComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor @ 1473641a0

UFunction * __cdecl Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_RemoveTickPrerequisiteActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bManualAttachment_SetBit @ 1473641e0

void __cdecl
Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bManualAttachment_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bDeferredFinish_SetBit @ 1473641f0

void __cdecl
Z_Construct_UFunction_AActor_AddComponentByClass_Statics::NewProp_bDeferredFinish_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent @ 147364200

UFunction * __cdecl Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_RemoveTickPrerequisiteComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewActorEnableCollision_SetBit @ 147364240

void __cdecl
Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::
NewProp_bNewActorEnableCollision_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_AddComponentByClass @ 147364250

UFunction * __cdecl Z_Construct_UFunction_AActor_AddComponentByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_AddComponentByClass_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetActorEnableCollision @ 147364290

UFunction * __cdecl Z_Construct_UFunction_AActor_SetActorEnableCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetActorEnableCollision_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewHidden_SetBit @ 1473642d0

void __cdecl
Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::NewProp_bNewHidden_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_AddTickPrerequisiteActor @ 1473642e0

UFunction * __cdecl Z_Construct_UFunction_AActor_AddTickPrerequisiteActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_AddTickPrerequisiteActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetActorHiddenInGame @ 147364320

UFunction * __cdecl Z_Construct_UFunction_AActor_SetActorHiddenInGame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetActorHiddenInGame_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent @ 147364360

UFunction * __cdecl Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_AddTickPrerequisiteComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetActorRelativeScale3D @ 1473643a0

UFunction * __cdecl Z_Construct_UFunction_AActor_SetActorRelativeScale3D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetActorRelativeScale3D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1473643e0

void __cdecl
Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_CanTriggerResimulation @ 1473643f0

UFunction * __cdecl Z_Construct_UFunction_AActor_CanTriggerResimulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_CanTriggerResimulation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetActorScale3D @ 147364430

UFunction * __cdecl Z_Construct_UFunction_AActor_SetActorScale3D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_SetActorScale3D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 147364470

void __cdecl
Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_CreateInputComponent @ 147364480

UFunction * __cdecl Z_Construct_UFunction_AActor_CreateInputComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_CreateInputComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavigationSystemConfig @ 1473644c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationSystemConfig(void)

{
  if (Z_Registration_Info_UClass_UNavigationSystemConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationSystemConfig.OuterSingleton,
               &Z_Construct_UClass_UNavigationSystemConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationSystemConfig.OuterSingleton;
}

// Z_Construct_UFunction_AActor_SetActorTickEnabled @ 147364500

UFunction * __cdecl Z_Construct_UFunction_AActor_SetActorTickEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_SetActorTickEnabled_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNullNavSysConfig @ 147364540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNullNavSysConfig(void)

{
  if (Z_Registration_Info_UClass_UNullNavSysConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNullNavSysConfig.OuterSingleton,
               &Z_Construct_UClass_UNullNavSysConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNullNavSysConfig.OuterSingleton;
}

// NewProp_bMaintainWorldPosition_SetBit @ 147364580

void __cdecl
Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::
NewProp_bMaintainWorldPosition_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsOverriden_SetBit @ 147364590

void __cdecl
Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) | 1;
  return;
}

// Z_Construct_UFunction_AActor_DetachRootComponentFromParent @ 1473645a0

UFunction * __cdecl Z_Construct_UFunction_AActor_DetachRootComponentFromParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_DetachRootComponentFromParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetActorTickInterval @ 1473645e0

UFunction * __cdecl Z_Construct_UFunction_AActor_SetActorTickInterval(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetActorTickInterval_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bVal_SetBit @ 147364620

void __cdecl
Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::NewProp_bVal_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_DisableInput @ 147364630

UFunction * __cdecl Z_Construct_UFunction_AActor_DisableInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_DisableInput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished @ 147364670

UFunction * __cdecl Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetAutoDestroyWhenFinished_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_EnableInput @ 1473646b0

UFunction * __cdecl Z_Construct_UFunction_AActor_EnableInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_EnableInput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetLifeSpan @ 1473646f0

UFunction * __cdecl Z_Construct_UFunction_AActor_SetLifeSpan(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_SetLifeSpan_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_FindComponentByTag @ 147364730

UFunction * __cdecl Z_Construct_UFunction_AActor_FindComponentByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_FindComponentByTag_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency @ 147364770

UFunction * __cdecl Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetMinNetUpdateFrequency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bManualAttachment_SetBit @ 1473647b0

void __cdecl
Z_Construct_UFunction_AActor_FinishAddComponent_Statics::NewProp_bManualAttachment_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AActor_SetNetCullDistanceSquared @ 1473647c0

UFunction * __cdecl Z_Construct_UFunction_AActor_SetNetCullDistanceSquared(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetNetCullDistanceSquared_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_FinishAddComponent @ 147364800

UFunction * __cdecl Z_Construct_UFunction_AActor_FinishAddComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_FinishAddComponent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetNetDormancy @ 147364840

UFunction * __cdecl Z_Construct_UFunction_AActor_SetNetDormancy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_SetNetDormancy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_FlushNetDormancy @ 147364880

UFunction * __cdecl Z_Construct_UFunction_AActor_FlushNetDormancy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_FlushNetDormancy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_ForceNetUpdate @ 1473648c0

UFunction * __cdecl Z_Construct_UFunction_AActor_ForceNetUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_ForceNetUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetNetUpdateFrequency @ 147364900

UFunction * __cdecl Z_Construct_UFunction_AActor_SetNetUpdateFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetNetUpdateFrequency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnlyCollidingComponents_SetBit @ 147364940

void __cdecl
Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bOnlyCollidingComponents_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIncludeFromChildActors_SetBit @ 147364990

void __cdecl
Z_Construct_UFunction_AActor_GetActorBounds_Statics::NewProp_bIncludeFromChildActors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UFunction_AActor_SetOwner @ 1473649a0

UFunction * __cdecl Z_Construct_UFunction_AActor_SetOwner(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_SetOwner_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetActorBounds @ 1473649e0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetActorBounds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147364ad0

void __cdecl
Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_SetPhysicsReplicationMode @ 147364ae0

UFunction * __cdecl Z_Construct_UFunction_AActor_SetPhysicsReplicationMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetPhysicsReplicationMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetActorEnableCollision @ 147364b20

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorEnableCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetActorEnableCollision_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetRayTracingGroupId @ 147364b60

UFunction * __cdecl Z_Construct_UFunction_AActor_SetRayTracingGroupId(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetRayTracingGroupId_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInReplicateMovement_SetBit @ 147364ba0

void __cdecl
Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::NewProp_bInReplicateMovement_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_GetActorEyesViewPoint @ 147364bb0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorEyesViewPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetActorEyesViewPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetReplicateMovement @ 147364bf0

UFunction * __cdecl Z_Construct_UFunction_AActor_SetReplicateMovement(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetReplicateMovement_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInReplicates_SetBit @ 147364cb0

void __cdecl
Z_Construct_UFunction_AActor_SetReplicates_Statics::NewProp_bInReplicates_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_GetActorForwardVector @ 147364cc0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorForwardVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetActorForwardVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetReplicates @ 147364d00

UFunction * __cdecl Z_Construct_UFunction_AActor_SetReplicates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_SetReplicates_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetActorRelativeScale3D @ 147364e10

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorRelativeScale3D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetActorRelativeScale3D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTickableWhenPaused_SetBit @ 147364e50

void __cdecl
Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_SetTickableWhenPaused @ 147364e60

UFunction * __cdecl Z_Construct_UFunction_AActor_SetTickableWhenPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_SetTickableWhenPaused_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetActorRightVector @ 147364ed0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorRightVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetActorRightVector_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_SetTickGroup @ 147364f10

UFunction * __cdecl Z_Construct_UFunction_AActor_SetTickGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_SetTickGroup_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetActorScale3D @ 147364f50

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorScale3D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetActorScale3D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_TearOff @ 147364f90

UFunction * __cdecl Z_Construct_UFunction_AActor_TearOff(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_TearOff_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_UnregisterAsFocalPointInPhysicsReplicationLOD @ 147364fd0

UFunction * __cdecl Z_Construct_UFunction_AActor_UnregisterAsFocalPointInPhysicsReplicationLOD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_UnregisterAsFocalPointInPhysicsReplicationLOD_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetActorTickInterval @ 147365010

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorTickInterval(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetActorTickInterval_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_UserConstructionScript @ 147365050

UFunction * __cdecl Z_Construct_UFunction_AActor_UserConstructionScript(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_UserConstructionScript_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetActorTimeDilation @ 147365090

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorTimeDilation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetActorTimeDilation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1473650d0

void __cdecl
Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_AActor_WasRecentlyRendered @ 1473650e0

UFunction * __cdecl Z_Construct_UFunction_AActor_WasRecentlyRendered(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_WasRecentlyRendered_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetActorUpVector @ 147365120

UFunction * __cdecl Z_Construct_UFunction_AActor_GetActorUpVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetActorUpVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeDescendants_SetBit @ 147365160

void __cdecl
Z_Construct_UFunction_AActor_GetAllChildActors_Statics::NewProp_bIncludeDescendants_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bNetTemporary_SetBit @ 147365170

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bNetTemporary_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 1;
  return;
}

// NewProp_bOnlyRelevantToOwner_SetBit @ 147365180

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bOnlyRelevantToOwner_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 4;
  return;
}

// NewProp_bAlwaysRelevant_SetBit @ 147365190

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bAlwaysRelevant_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 8;
  return;
}

// NewProp_bReplicateMovement_SetBit @ 1473651a0

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bReplicateMovement_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x10;
  return;
}

// NewProp_bCallPreReplication_SetBit @ 1473651b0

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplication_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x20;
  return;
}

// NewProp_bCallPreReplicationForReplay_SetBit @ 1473651c0

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bCallPreReplicationForReplay_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x40;
  return;
}

// NewProp_bHidden_SetBit @ 1473651d0

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bHidden_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x80;
  return;
}

// Z_Construct_UFunction_AActor_GetAllChildActors @ 1473651e0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetAllChildActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetAllChildActors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTearOff_SetBit @ 147365220

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bTearOff_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 1;
  return;
}

// NewProp_bForceNetAddressable_SetBit @ 147365230

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bForceNetAddressable_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 2;
  return;
}

// NewProp_bExchangedRoles_SetBit @ 147365240

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bExchangedRoles_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 4;
  return;
}

// NewProp_bNetLoadOnClient_SetBit @ 147365250

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bNetLoadOnClient_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 8;
  return;
}

// NewProp_bNetUseOwnerRelevancy_SetBit @ 147365260

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bNetUseOwnerRelevancy_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 0x10;
  return;
}

// NewProp_bRelevantForNetworkReplays_SetBit @ 147365270

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForNetworkReplays_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 0x20;
  return;
}

// NewProp_bRelevantForLevelBounds_SetBit @ 147365280

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bRelevantForLevelBounds_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 0x40;
  return;
}

// NewProp_bReplayRewindable_SetBit @ 147365290

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bReplayRewindable_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 0x80;
  return;
}

// NewProp_bAllowTickBeforeBeginPlay_SetBit @ 1473652a0

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bAllowTickBeforeBeginPlay_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) | 1;
  return;
}

// NewProp_bAutoDestroyWhenFinished_SetBit @ 1473652b0

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bAutoDestroyWhenFinished_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) | 2;
  return;
}

// NewProp_bCanBeDamaged_SetBit @ 1473652c0

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bCanBeDamaged_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) | 4;
  return;
}

// NewProp_bBlockInput_SetBit @ 1473652d0

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bBlockInput_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) | 8;
  return;
}

// NewProp_bResetArray_SetBit @ 1473652e0

void __cdecl
Z_Construct_UFunction_AActor_GetAttachedActors_Statics::NewProp_bResetArray_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bCollideWhenPlacing_SetBit @ 1473652f0

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bCollideWhenPlacing_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) | 0x10;
  return;
}

// NewProp_bRecursivelyIncludeAttachedActors_SetBit @ 147365300

void __cdecl
Z_Construct_UFunction_AActor_GetAttachedActors_Statics::
NewProp_bRecursivelyIncludeAttachedActors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bFindCameraComponentWhenViewTarget_SetBit @ 147365310

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bFindCameraComponentWhenViewTarget_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) | 0x20;
  return;
}

// NewProp_bGenerateOverlapEventsDuringLevelStreaming_SetBit @ 147365320

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bGenerateOverlapEventsDuringLevelStreaming_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) | 0x40;
  return;
}

// NewProp_bIgnoresOriginShifting_SetBit @ 147365330

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bIgnoresOriginShifting_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) | 0x80;
  return;
}

// NewProp_bEnableAutoLODGeneration_SetBit @ 147365340

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bEnableAutoLODGeneration_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | 1;
  return;
}

// NewProp_bIsEditorOnlyActor_SetBit @ 147365350

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bIsEditorOnlyActor_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | 2;
  return;
}

// NewProp_bReplicates_SetBit @ 147365360

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bReplicates_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | 8;
  return;
}

// NewProp_bCanBeInCluster_SetBit @ 147365370

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bCanBeInCluster_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | 0x10;
  return;
}

// NewProp_bAllowReceiveTickEventOnDedicatedServer_SetBit @ 147365380

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bAllowReceiveTickEventOnDedicatedServer_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | 0x20;
  return;
}

// NewProp_bReplicateUsingRegisteredSubObjectList_SetBit @ 147365390

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bReplicateUsingRegisteredSubObjectList_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | 0x80;
  return;
}

// NewProp_bActorEnableCollision_SetBit @ 1473653a0

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bActorEnableCollision_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5d) = *(byte *)((longlong)param_1 + 0x5d) | 1;
  return;
}

// NewProp_bActorIsBeingDestroyed_SetBit @ 1473653b0

void __cdecl Z_Construct_UClass_AActor_Statics::NewProp_bActorIsBeingDestroyed_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5d) = *(byte *)((longlong)param_1 + 0x5d) | 2;
  return;
}

// NewProp_bAsyncPhysicsTickEnabled_SetBit @ 1473653c0

void __cdecl
Z_Construct_UClass_AActor_Statics::NewProp_bAsyncPhysicsTickEnabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x5d) = *(byte *)((longlong)param_1 + 0x5d) | 0x80;
  return;
}

// Z_Construct_UFunction_AActor_GetAttachedActors @ 1473653d0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetAttachedActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetAttachedActors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetAttachParentActor @ 147365410

UFunction * __cdecl Z_Construct_UFunction_AActor_GetAttachParentActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetAttachParentActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetAttachParentSocketName @ 147365450

UFunction * __cdecl Z_Construct_UFunction_AActor_GetAttachParentSocketName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetAttachParentSocketName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetComponentByClass @ 147365490

UFunction * __cdecl Z_Construct_UFunction_AActor_GetComponentByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetComponentByClass_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetComponentsByInterface @ 1473654d0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetComponentsByInterface(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetComponentsByInterface_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetComponentsByTag @ 147365510

UFunction * __cdecl Z_Construct_UFunction_AActor_GetComponentsByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetComponentsByTag_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetDistanceTo @ 147365550

UFunction * __cdecl Z_Construct_UFunction_AActor_GetDistanceTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetDistanceTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetDotProductTo @ 147365590

UFunction * __cdecl Z_Construct_UFunction_AActor_GetDotProductTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetDotProductTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetGameTimeSinceCreation @ 147365610

UFunction * __cdecl Z_Construct_UFunction_AActor_GetGameTimeSinceCreation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetGameTimeSinceCreation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetHorizontalDistanceTo @ 147365730

UFunction * __cdecl Z_Construct_UFunction_AActor_GetHorizontalDistanceTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetHorizontalDistanceTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAISystemBase @ 147365770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISystemBase(void)

{
  if (Z_Registration_Info_UClass_UAISystemBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISystemBase.OuterSingleton,
               &Z_Construct_UClass_UAISystemBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISystemBase.OuterSingleton;
}

// NewProp_bInstantiateAISystemOnClient_SetBit @ 1473657b0

void __cdecl
Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_AActor_GetHorizontalDotProductTo @ 1473657f0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetHorizontalDotProductTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetHorizontalDotProductTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetInputAxisKeyValue @ 147365830

UFunction * __cdecl Z_Construct_UFunction_AActor_GetInputAxisKeyValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetInputAxisKeyValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetInputAxisValue @ 147365870

UFunction * __cdecl Z_Construct_UFunction_AActor_GetInputAxisValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetInputAxisValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UActorPartitionSubsystem @ 1473658b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorPartitionSubsystem(void)

{
  if (Z_Registration_Info_UClass_UActorPartitionSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorPartitionSubsystem.OuterSingleton,
               &Z_Construct_UClass_UActorPartitionSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorPartitionSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_AActor_GetInputVectorAxisValue @ 1473658f0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetInputVectorAxisValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetInputVectorAxisValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetInstigator @ 147365930

UFunction * __cdecl Z_Construct_UFunction_AActor_GetInstigator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetInstigator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetInstigatorController @ 147365970

UFunction * __cdecl Z_Construct_UFunction_AActor_GetInstigatorController(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetInstigatorController_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_APartitionActor @ 1473659b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APartitionActor(void)

{
  if (Z_Registration_Info_UClass_APartitionActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APartitionActor.OuterSingleton,
               &Z_Construct_UClass_APartitionActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APartitionActor.OuterSingleton;
}

// Z_Construct_UFunction_AActor_GetLevel @ 1473659f0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetLevelTransform @ 147365a70

UFunction * __cdecl Z_Construct_UFunction_AActor_GetLevelTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetLevelTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetLifeSpan @ 147365af0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetLifeSpan(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetLifeSpan_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetLocalRole @ 147365b30

UFunction * __cdecl Z_Construct_UFunction_AActor_GetLocalRole(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetLocalRole_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency @ 147365b70

UFunction * __cdecl Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetMinNetUpdateFrequency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetNetCullDistanceSquared @ 147365bb0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetNetCullDistanceSquared(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetNetCullDistanceSquared_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetNetUpdateFrequency @ 147365bf0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetNetUpdateFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetNetUpdateFrequency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetOverlappingActors @ 147365cf0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetOverlappingActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetOverlappingActors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetOverlappingComponents @ 147365d30

UFunction * __cdecl Z_Construct_UFunction_AActor_GetOverlappingComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetOverlappingComponents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetOwner @ 147365d70

UFunction * __cdecl Z_Construct_UFunction_AActor_GetOwner(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetOwner_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetParentActor @ 147365db0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetParentActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetParentActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetParentComponent @ 147365df0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetParentComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetParentComponent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetPhysicsReplicationMode @ 147365e30

UFunction * __cdecl Z_Construct_UFunction_AActor_GetPhysicsReplicationMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetPhysicsReplicationMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetRayTracingGroupId @ 147365e70

UFunction * __cdecl Z_Construct_UFunction_AActor_GetRayTracingGroupId(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetRayTracingGroupId_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAvoidanceManager @ 147365f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAvoidanceManager(void)

{
  if (Z_Registration_Info_UClass_UAvoidanceManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAvoidanceManager.OuterSingleton,
               &Z_Construct_UClass_UAvoidanceManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAvoidanceManager.OuterSingleton;
}

// Z_Construct_UFunction_AActor_GetRemoteRole @ 147365f70

UFunction * __cdecl Z_Construct_UFunction_AActor_GetRemoteRole(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetRemoteRole_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147365fb0

void * __cdecl Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavAvoidanceData,&UE::CoreUObject::Private::Construct<FNavAvoidanceData>,&UE::CoreUObject::Private::ConstructForTests<FNavAvoidanceData>,&UE::CoreUObject::Private::Destruct<FNavAvoidanceData>,&UE::CoreUObject::Private::Copy<FNavAvoidanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AActor_GetResimulationThreshold @ 147366020

UFunction * __cdecl Z_Construct_UFunction_AActor_GetResimulationThreshold(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetResimulationThreshold_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetSquaredDistanceTo @ 147366090

UFunction * __cdecl Z_Construct_UFunction_AActor_GetSquaredDistanceTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetSquaredDistanceTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo @ 1473660d0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetSquaredHorizontalDistanceTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147366110

void __cdecl
Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent @ 147366120

UFunction * __cdecl Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetTickableWhenPaused @ 1473661a0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetTickableWhenPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetTickableWhenPaused_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID @ 147366260

UFunction * __cdecl Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetTransform @ 1473662a0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AActor_NoRegister @ 147366320

UClass * __cdecl Z_Construct_UClass_AActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Actor",&Z_Registration_Info_UClass_AActor.InnerSingleton,
               AActor::StaticRegisterNativesAActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_AActor,L"Engine",InternalConstructor<AActor>,
               InternalVTableHelperCtorCaller<AActor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AActor.InnerSingleton;
}

// Z_Construct_UFunction_UAvoidanceManager_GetObjectCount @ 1473663e0

UFunction * __cdecl Z_Construct_UFunction_UAvoidanceManager_GetObjectCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetVelocity @ 147366420

UFunction * __cdecl Z_Construct_UFunction_AActor_GetVelocity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_GetVelocity_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147366460

void __cdecl
Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent @ 147366470

UFunction * __cdecl Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AActor_GetVerticalDistanceTo @ 1473664b0

UFunction * __cdecl Z_Construct_UFunction_AActor_GetVerticalDistanceTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_GetVerticalDistanceTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1473664f0

void __cdecl
Z_Construct_UFunction_AActor_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_HasAuthority @ 147366500

UFunction * __cdecl Z_Construct_UFunction_AActor_HasAuthority(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_HasAuthority_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147366540

void __cdecl
Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_IsActorBeingDestroyed @ 147366570

UFunction * __cdecl Z_Construct_UFunction_AActor_IsActorBeingDestroyed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_IsActorBeingDestroyed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1473665c0

void __cdecl
Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_IsActorTickEnabled @ 147366600

UFunction * __cdecl Z_Construct_UFunction_AActor_IsActorTickEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_IsActorTickEnabled_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147366640

void __cdecl
Z_Construct_UFunction_AActor_IsChildActor_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AActor_IsChildActor @ 147366670

UFunction * __cdecl Z_Construct_UFunction_AActor_IsChildActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_IsChildActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1473666b0

void __cdecl
Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AActor_IsOverlappingActor @ 1473666c0

UFunction * __cdecl Z_Construct_UFunction_AActor_IsOverlappingActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AActor_IsOverlappingActor_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147366700

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147366710

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::NewProp_bTeleport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AddActorLocalOffset @ 147366720

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AddActorLocalOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AddActorLocalOffset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147366760

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147366770

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AddActorLocalRotation @ 147366780

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AddActorLocalRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AddActorLocalRotation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 1473667c0

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 1473667d0

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x168) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AddActorLocalTransform @ 1473667e0

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AddActorLocalTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AddActorLocalTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147366820

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147366830

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::NewProp_bTeleport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AddActorWorldOffset @ 147366870

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AddActorWorldOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AddActorWorldOffset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 1473668e0

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 1473668f0

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AddActorWorldRotation @ 147366900

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AddActorWorldRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AddActorWorldRotation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 147366940

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bSweep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 147366950

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x168) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AddActorWorldTransform @ 147366960

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AddActorWorldTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AddActorWorldTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSweep_SetBit @ 1473669a0

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bSweep_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bTeleport_SetBit @ 1473669b0

void __cdecl
Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::NewProp_bTeleport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x168) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale @ 1473669c0

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AddActorWorldTransformKeepScale_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bWeldSimulatedBodies_SetBit @ 147366a00

void __cdecl
Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::NewProp_bWeldSimulatedBodies_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AttachRootComponentTo @ 147366a10

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AttachRootComponentTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AttachRootComponentTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWeldSimulatedBodies_SetBit @ 147366a50

void __cdecl
Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::
NewProp_bWeldSimulatedBodies_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor @ 147366a60

UFunction * __cdecl Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AActor_K2_AttachRootComponentToActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// operator<<<AActor_const_,FWeakObjectPtr> @ 147366ca0

FArchive * __cdecl
operator<<<AActor_const_,FWeakObjectPtr>
          (FArchive *param_1,TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x138))();
  return param_1;
}

// FAttachedActorInfo,TSizedDefaultAllocator<32>_> @ 147366cd0

FArchive * __cdecl
operator<<<FActorRootComponentReconstructionData::FAttachedActorInfo_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FActorRootComponentReconstructionData::FAttachedActorInfo,TSizedDefaultAllocator<32>_>
          *param_2)

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
  FAttachedActorInfo *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x20001)) {
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
              ::operator<<(param_1,(FAttachedActorInfo *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x80)
                          );
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FActorRootComponentReconstructionData::FAttachedActorInfo,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1080,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FAttachedActorInfo *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x80);
              DefaultConstructItems<FActorRootComponentReconstructionData::FAttachedActorInfo,int>
                        (pFVar10,1);
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

// operator<<<AActor,FWeakObjectPtr> @ 147366ce0

FArchive * __cdecl
operator<<<AActor,FWeakObjectPtr>(FArchive *param_1,TWeakObjectPtr<AActor,FWeakObjectPtr> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x138))();
  return param_1;
}

// operator<<<USceneComponent,FWeakObjectPtr> @ 147366d10

FArchive * __cdecl
operator<<<USceneComponent,FWeakObjectPtr>
          (FArchive *param_1,TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x138))();
  return param_1;
}

// Cast<UPrimitiveComponent,USceneComponent> @ 147367b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPrimitiveComponent * __cdecl
Cast<UPrimitiveComponent,USceneComponent>(TObjectPtr<USceneComponent> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((param_1->field0_0x0).DebugPtr != (USceneComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if (bVar1) {
      return (UPrimitiveComponent *)(param_1->field0_0x0).DebugPtr;
    }
  }
  return (UPrimitiveComponent *)0x0;
}

// CastChecked<UActorComponent,UObject> @ 147367b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __cdecl CastChecked<UActorComponent,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UActorComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UActorComponent *)param_1;
  }
  pFVar3 = GetTypeName<UActorComponent>(&local_28);
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

// ComputeConvexHullLegacy<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 147367c10

void __cdecl
ConvexHull2D::ComputeConvexHullLegacy<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *param_1,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ForElementType<int> FVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  ForElementType<int> FVar14;
  ForElementType<UE::Math::TVector<double>_> FVar15;
  uchar *puVar16;
  ForElementType<UE::Math::TVector<double>_> FVar17;
  ForElementType<UE::Math::TVector<double>_> FVar18;
  int *piVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uchar *puVar25;
  uint uVar26;
  longlong lVar27;
  uint local_res8;
  uint local_98;
  uint local_94 [23];
  
  iVar13 = param_1->ArrayNum;
  if (iVar13 != 0) {
    uVar21 = 1;
    uVar26 = 0;
    local_94[0] = 0;
    local_res8 = 0;
    if (1 < iVar13) {
      lVar27 = 1;
      lVar22 = 0;
      do {
        lVar20 = (longlong)(int)local_94[0];
        uVar26 = 0;
        if ((int)local_94[0] < iVar13) {
          uVar26 = ~local_94[0] >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar17 = (param_1->AllocatorInstance).SecondaryData;
        FVar18 = (ForElementType<UE::Math::TVector<double>_>)param_1;
        if (FVar17 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar18 = FVar17;
        }
        uVar26 = 0;
        if ((int)uVar21 < param_1->ArrayNum) {
          uVar26 = ~uVar21 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar17 = (param_1->AllocatorInstance).SecondaryData;
        FVar15 = (ForElementType<UE::Math::TVector<double>_>)param_1;
        if (FVar17 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar15 = FVar17;
        }
        dVar2 = *(double *)((longlong)FVar15 + lVar27 * 0x18);
        pdVar1 = (double *)((longlong)FVar18 + lVar20 * 0x18);
        if ((dVar2 < *pdVar1) ||
           ((dVar2 == *pdVar1 &&
            (*(double *)((uchar *)((longlong)FVar15 + 8) + lVar27 * 0x18) <=
             *(double *)((uchar *)((longlong)FVar18 + 8) + lVar20 * 0x18) &&
             *(double *)((uchar *)((longlong)FVar18 + 8) + lVar20 * 0x18) !=
             *(double *)((uchar *)((longlong)FVar15 + 8) + lVar27 * 0x18))))) {
          local_94[0] = uVar21;
        }
        uVar26 = 0;
        if ((int)uVar21 < param_1->ArrayNum) {
          uVar26 = ~uVar21 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar17 = (param_1->AllocatorInstance).SecondaryData;
        FVar18 = (ForElementType<UE::Math::TVector<double>_>)param_1;
        if (FVar17 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar18 = FVar17;
        }
        uVar26 = 0;
        if ((int)local_res8 < param_1->ArrayNum) {
          uVar26 = ~local_res8 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar17 = (param_1->AllocatorInstance).SecondaryData;
        FVar15 = (ForElementType<UE::Math::TVector<double>_>)param_1;
        if (FVar17 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar15 = FVar17;
        }
        dVar2 = *(double *)((longlong)FVar15 + lVar22 * 0x18);
        pdVar1 = (double *)((longlong)FVar18 + lVar27 * 0x18);
        if (*pdVar1 <= dVar2) {
          if ((dVar2 != *pdVar1) ||
             (*(double *)((uchar *)((longlong)FVar18 + 8) + lVar27 * 0x18) <=
              *(double *)((uchar *)((longlong)FVar15 + 8) + lVar22 * 0x18))) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
        }
        else {
          bVar11 = true;
        }
        iVar13 = param_1->ArrayNum;
        uVar26 = uVar21;
        lVar20 = lVar27;
        if (!bVar11) {
          uVar26 = local_res8;
          lVar20 = lVar22;
        }
        lVar22 = lVar20;
        uVar21 = uVar21 + 1;
        lVar27 = lVar27 + 1;
        local_res8 = uVar26;
      } while ((int)uVar21 < iVar13);
    }
    FVar7 = (param_2->AllocatorInstance).SecondaryData;
    FVar14 = (ForElementType<int>)param_2;
    if (FVar7 != (ForElementType<int>)0x0) {
      FVar14 = FVar7;
    }
    if ((ulonglong)FVar14 <= local_94) {
      FVar14 = (ForElementType<int>)param_2;
      if (FVar7 != (ForElementType<int>)0x0) {
        FVar14 = FVar7;
      }
      if ((local_94 < (uint *)((longlong)FVar14 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar13 = param_2->ArrayNum;
    if (iVar13 == param_2->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                         (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar13 + 1;
    FVar7 = (param_2->AllocatorInstance).SecondaryData;
    FVar14 = (ForElementType<int>)param_2;
    if (FVar7 != (ForElementType<int>)0x0) {
      FVar14 = FVar7;
    }
    *(uint *)((longlong)FVar14 + (longlong)iVar13 * 4) = local_94[0];
    dVar10 = __real_bf50624dd2f1a9fc;
    dVar2 = __real_3f50624dd2f1a9fc;
    if (local_94[0] != uVar26) {
      iVar13 = param_1->ArrayNum;
      bVar11 = true;
      uVar21 = local_94[0];
      local_res8 = uVar26;
      if (param_2->ArrayNum <= iVar13) {
        do {
          uVar24 = 0;
          lVar22 = 0;
          uVar23 = local_res8;
          local_98 = local_res8;
          if (0 < iVar13) {
            lVar20 = (longlong)(int)uVar21;
            lVar27 = 0;
            do {
              if ((uVar24 != uVar23) && (lVar22 != lVar20)) {
                FVar17 = (param_1->AllocatorInstance).SecondaryData;
                if (FVar17 == (ForElementType<UE::Math::TVector<double>_>)0x0) {
                  puVar25 = (param_1->AllocatorInstance).InlineData + (longlong)(int)uVar23 * 0x18;
                  puVar16 = (param_1->AllocatorInstance).InlineData + lVar20 * 0x18;
                  FVar17 = (ForElementType<UE::Math::TVector<double>_>)param_1;
                }
                else {
                  puVar25 = (uchar *)((longlong)FVar17 + (longlong)(int)uVar23 * 0x18);
                  puVar16 = (uchar *)((longlong)FVar17 + lVar20 * 0x18);
                }
                dVar3 = *(double *)puVar25;
                dVar4 = *(double *)((uchar *)((longlong)FVar17 + 8) + lVar27);
                dVar5 = *(double *)((longlong)FVar17 + lVar27);
                dVar6 = *(double *)(puVar25 + 8);
                dVar9 = (dVar4 - *(double *)(puVar16 + 8)) * (dVar3 - *(double *)puVar16) -
                        (dVar5 - *(double *)puVar16) * (dVar6 - *(double *)(puVar16 + 8));
                if (dVar9 < dVar10) goto LAB_147368091;
                if (dVar9 < dVar2) {
                  if (bVar11) {
                    if (dVar3 < dVar5) {
LAB_147368091:
                      local_98 = uVar24;
                      uVar23 = uVar24;
                    }
                    else if (dVar3 <= dVar5) {
                      bVar12 = dVar6 < dVar4;
LAB_14736808f:
                      if (bVar12) goto LAB_147368091;
                    }
                  }
                  else {
                    if (dVar5 < dVar3) goto LAB_147368091;
                    if (dVar5 <= dVar3) {
                      bVar12 = dVar4 < dVar6;
                      goto LAB_14736808f;
                    }
                  }
                }
              }
              uVar24 = uVar24 + 1;
              lVar22 = lVar22 + 1;
              lVar27 = lVar27 + 0x18;
            } while ((int)uVar24 < iVar13);
          }
          piVar19 = &param_2->ArrayMax;
          if (uVar23 == uVar26) {
            bVar11 = false;
            local_res8 = local_94[0];
          }
          if (uVar23 == local_94[0]) {
            return;
          }
          FVar7 = (param_2->AllocatorInstance).SecondaryData;
          FVar14 = (ForElementType<int>)param_2;
          if (FVar7 != (ForElementType<int>)0x0) {
            FVar14 = FVar7;
          }
          if ((ulonglong)FVar14 <= &local_98) {
            FVar14 = (ForElementType<int>)param_2;
            if (FVar7 != (ForElementType<int>)0x0) {
              FVar14 = FVar7;
            }
            if ((&local_98 < (uint *)((longlong)FVar14 + (longlong)*piVar19 * 4)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), uVar23 = local_98, bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar13 = param_2->ArrayNum;
          if (iVar13 == *piVar19) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&param_2->AllocatorInstance,piVar19);
            uVar23 = local_98;
          }
          param_2->ArrayNum = iVar13 + 1;
          FVar7 = (param_2->AllocatorInstance).SecondaryData;
          FVar14 = (ForElementType<int>)param_2;
          if (FVar7 != (ForElementType<int>)0x0) {
            FVar14 = FVar7;
          }
          *(uint *)((longlong)FVar14 + (longlong)iVar13 * 4) = uVar23;
          iVar13 = param_1->ArrayNum;
          uVar21 = local_98;
        } while (param_2->ArrayNum <= iVar13);
      }
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      }
    }
  }
  return;
}

// ConstructItems<UActorComponent_*,TObjectPtr<UActorComponent>,int> @ 147368290

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
ConstructItems<UActorComponent_*,TObjectPtr<UActorComponent>,int>
          (void *param_1,TObjectPtr<UActorComponent> *param_2,int param_3)

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

// ConstructItems<FOverlapInfo,FOverlapInfo,int> @ 1473682c0

void __cdecl
ConstructItems<FOverlapInfo,FOverlapInfo,int>(void *param_1,FOverlapInfo *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(bool *)(lVar1 + (longlong)param_2) = param_2->bFromSweep;
      FHitResult::FHitResult((FHitResult *)(lVar1 + 8 + (longlong)param_2),&param_2->OverlapInfo);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FActorRootComponentReconstructionData::FAttachedActorInfo,int> @ 1473685c0

void __cdecl
DefaultConstructItems<FActorRootComponentReconstructionData::FAttachedActorInfo,int>
          (void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
      puVar4[3] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      puVar4[4] = (double)fVar1;
      puVar4[5] = (double)fVar2;
      puVar4[6] = (double)fVar3;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      puVar4[7] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      puVar4[8] = (double)fVar1;
      puVar4[9] = (double)fVar2;
      puVar4[10] = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      puVar4[0xb] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      puVar4[0xc] = (double)fVar1;
      puVar4[0xd] = (double)fVar2;
      puVar4[0xe] = (double)fVar3;
      param_2 = param_2 + -1;
      puVar4 = puVar4 + 0x10;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FActorPrimitiveColorHandler::FPrimitiveColorHandler,int> @ 1473686a0

void __cdecl
DestructItems<FActorPrimitiveColorHandler::FPrimitiveColorHandler,int>
          (FPrimitiveColorHandler *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->DeactivateFunc).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0xb] != 0) {
        plVar1 = plVar2 + -9;
        if ((longlong *)plVar2[-6] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-6];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0x11] != 0) {
        plVar1 = plVar2 + -0xf;
        if ((longlong *)plVar2[-0xc] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-0xc];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((longlong *)plVar2[-0x14] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar2[-0x14] + 0x10))();
      }
      if ((longlong *)plVar2[-0x16] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar2[-0x16] + 0x10))();
      }
      plVar2 = plVar2 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::FReplicatedComponentInfo,int> @ 147368760

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
DestructItems<UE::Net::FReplicatedComponentInfo,int>(FReplicatedComponentInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FSubObjectRegistry *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SubObjects;
    do {
      pFVar1 = (pFVar2->Registry).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FSubObjectRegistry *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TStructOnScope<FActorComponentInstanceData>,int> @ 1473687a0

void __cdecl
DestructItems<TStructOnScope<FActorComponentInstanceData>,int>
          (TStructOnScope<FActorComponentInstanceData> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FStructOnScope::~FStructOnScope((FStructOnScope *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,1,1,`AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>'::__l2::<lambda_1>_> @ 14736a290

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

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14736a3b3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736a3b3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14736a44d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14736a44d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14736a550;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14736a550:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      `AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,1,1,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>'::__l2::<lambda_1>_> @ 14736a7c0

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

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14736a8e3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736a8e3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14736a97d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14736a97d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14736aa80;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14736aa80:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      `AActor::
      GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>'::__l2
      ::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,1,0,`AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>'::__l2::<lambda_1>_> @ 14736acf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UActorComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14736adf6;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14736adf6:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736ae7d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14736ae7d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736af81;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14736af81:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UActorComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UActorComponent *)0x0) {
      `AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,1,0,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>'::__l2::<lambda_1>_> @ 14736b000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UActorComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14736b106;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14736b106:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736b18d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14736b18d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736b291;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14736b291:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UActorComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UActorComponent *)0x0) {
      `AActor::
      GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>'::__l2
      ::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,0,1,`AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>'::__l2::<lambda_1>_> @ 14736b310

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

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14736b403;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736b403:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14736b4b0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14736b4b0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14736b5c0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14736b5c0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,0,1,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>'::__l2::<lambda_1>_> @ 14736b850

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

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14736b943;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736b943:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14736b9f0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14736b9f0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14736bb00;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14736bb00:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,0,0,`AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>'::__l2::<lambda_1>_> @ 14736bd90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UActorComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14736be6e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14736be6e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14736beff;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14736beff:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14736c010;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14736c010:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UActorComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,0,0,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>'::__l2::<lambda_1>_> @ 14736c0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UActorComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14736c18e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14736c18e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14736c21f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14736c21f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14736c330;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14736c330:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UActorComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UCameraComponent,1,1,`AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14736c3d0

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

void __thiscall
AActor::
ForEachComponent_Internal<UCameraComponent,1,1,_AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UCameraComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14736c4f3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736c4f3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14736c58d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14736c58d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14736c690;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14736c690:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UCameraComponent,1,1,_AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UCameraComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UCameraComponent *)0x0) {
      `AActor::
      GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) &&
         (local_1a0._0_4_ = pUVar8->FirstPersonScale, local_1a0._4_4_ = pUVar8->OrthoWidth,
         local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UCameraComponent,1,0,`AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14736c900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UCameraComponent,1,0,_AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UCameraComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14736ca06;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14736ca06:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736ca8d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14736ca8d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736cb91;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14736cb91:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UCameraComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UCameraComponent *)0x0) {
      `AActor::
      GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UCameraComponent,0,1,`AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14736cc10

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

void __thiscall
AActor::
ForEachComponent_Internal<UCameraComponent,0,1,_AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UCameraComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14736cd03;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736cd03:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14736cdb0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14736cdb0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14736cec0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14736cec0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UCameraComponent,0,1,_AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UCameraComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UCameraComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) &&
         (local_1a0._0_4_ = pUVar8->FirstPersonScale, local_1a0._4_4_ = pUVar8->OrthoWidth,
         local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UCameraComponent,0,0,`AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14736d150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UCameraComponent,0,0,_AActor::GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UCameraComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14736d22e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14736d22e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14736d2bf;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14736d2bf:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14736d3d0;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14736d3d0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UCameraComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UCameraComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<UCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,1,1,`AActor::CalculateComponentsBoundingBoxInLocalSpace'::__l2::<lambda_1>_> @ 14736d470

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::CalculateComponentsBoundingBoxInLocalSpace_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStack_228 [32];
  longlong *local_208;
  ForElementType<AActor_*> local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  longlong local_1d0;
  int local_1c8;
  int local_1c4;
  TObjectPtr<UClass>_u_0 local_1c0;
  UObject *local_1b8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  <lambda_1> local_148 [2];
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_1c0 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14736d58f;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736d58f:
  local_3c = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_1a8 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_1a4 = 1;
  local_190 = 0;
  iStack_194 = iStack_1a8;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar4;
    }
    uVar19 = *puVar21;
    iStack_1a8 = 0;
    local_190 = 0;
    while (uVar19 == 0) {
      iStack_1a8 = iStack_1a8 + 1;
      local_190 = local_190 + 0x20;
      iStack_194 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8) goto LAB_14736d62d;
      uVar19 = puVar21[iStack_1a8];
    }
    uStack_1a4 = ~(uVar19 - 1) & uVar19;
    uVar3 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c8 = (int)lVar15;
    iStack_194 = local_1c8 + -1 + local_190;
    if (iVar5 < iStack_194) {
      iStack_194 = iVar5;
    }
  }
LAB_14736d62d:
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_18c = local_10c;
  uVar18 = uVar19 & 0xffffffe0;
  iStack_188 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_198 = 0xffffffff;
  TStack_178._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
  TStack_178.CurrentBitIndex = iStack_194;
  TStack_178.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_178._28_4_ = local_10c;
  TStack_178.BaseBitIndex = local_190;
  uStack_158 = CONCAT44(uStack_184,iStack_188);
  local_1b0 = pTVar1;
  local_1a0 = puVar4;
  local_180 = pTVar1;
  TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar19 < 0) || (iVar5 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      iVar16 = iVar16 + 1;
      uVar18 = uVar18 + 0x20;
      uVar19 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14736d730;
      uVar19 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c4 = (int)lVar15;
    uVar19 = local_1c4 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar19) {
      uVar19 = uVar6;
    }
  }
LAB_14736d730:
  do {
    pTVar11 = local_180;
    if (*(int *)&(local_180->Elements).field_0x8 - *(int *)&(local_180->Elements).field_0x34 !=
        (int)uStack_158) {
      local_1d8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    iVar5 = local_40;
    TVar10 = local_1c0;
    if (((TStack_178.CurrentBitIndex == uVar19) &&
        (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar11 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_108.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1d7);
        }
        if (FVar17 == FVar2) break;
        local_1b8 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1b8);
        }
        local_148[0].bNonColliding = param_2->bNonColliding;
        local_148[0].WorldToActor = param_2->WorldToActor;
        local_148[0].Box = param_2->Box;
        ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::CalculateComponentsBoundingBoxInLocalSpace_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1b8,local_148);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_178.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      `AActor::CalculateComponentsBoundingBoxInLocalSpace'::__l2::<lambda_1>::operator()
                (param_2,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1d0 = *(longlong *)&pUVar8->field_0x258, local_1d0 != 0))
      {
        FVar17 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1d0) {
          FVar17 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_108.SecondaryData;
          }
          if (&local_1d0 < (longlong *)((longlong)FVar17 + (longlong)local_3c * 8)) {
            local_1f0 = (longlong)local_40;
            local_1e8 = 8;
            local_208 = &local_1d0;
            local_200 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_200 = local_108.SecondaryData;
            }
            local_1f8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar17 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar17 + lVar15 * 8) = local_1d0;
      }
    }
    TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,1,1,`AActor::GetComponentsBoundingBox'::__l2::<lambda_1>_> @ 14736d9b0

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponentsBoundingBox_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> *this_01;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  ForElementType<AActor_*> local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  longlong local_1c0;
  <lambda_1> *local_1b8;
  int local_1b0;
  int local_1ac;
  UObject *local_1a8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  int iStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  <lambda_1> local_138 [2];
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_1b8 = param_2;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_14736dad4;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736dad4:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_198 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_194 = 1;
  local_180 = 0;
  iStack_184 = iStack_198;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar18 = *puVar20;
    iStack_198 = 0;
    local_180 = 0;
    while (uVar18 == 0) {
      iStack_198 = iStack_198 + 1;
      local_180 = local_180 + 0x20;
      iStack_184 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_198) goto LAB_14736db6d;
      uVar18 = puVar20[iStack_198];
    }
    uStack_194 = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_194 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1b0 = (int)lVar14;
    iStack_184 = local_1b0 + -1 + local_180;
    if (iVar5 < iStack_184) {
      iStack_184 = iVar5;
    }
  }
LAB_14736db6d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_178 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_188 = 0xffffffff;
  TStack_168._padding_ = CONCAT44(uStack_194,iStack_198);
  TStack_168.CurrentBitIndex = iStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_168._28_4_ = local_10c;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  local_1a0 = pTVar2;
  local_190 = puVar1;
  local_170 = pTVar2;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_01 = local_1b8;
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      iVar15 = iVar15 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar15) goto LAB_14736dc80;
      uVar18 = *(uint *)(puVar19 + (longlong)iVar15 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1ac = (int)lVar14;
    uVar18 = local_1ac + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14736dc80:
  do {
    pTVar10 = local_170;
    if (*(int *)&(local_170->Elements).field_0x8 - *(int *)&(local_170->Elements).field_0x34 !=
        (int)uStack_148) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    iVar5 = local_40;
    if (((TStack_168.CurrentBitIndex == uVar18) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2)
       ) {
      FVar16 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c7);
        }
        if (FVar16 == FVar3) break;
        local_1a8 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1a8);
        }
        local_138[0].bNonColliding = local_1b8->bNonColliding;
        local_138[0].Box = local_1b8->Box;
        ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponentsBoundingBox_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1a8,local_138);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_168.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      `AActor::GetComponentsBoundingBox'::__l2::<lambda_1>::operator()(this_01,pUVar8);
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) && (local_1c0 = *(longlong *)&pUVar8->field_0x258, local_1c0 != 0))
      {
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1c0) {
          FVar16 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_108.SecondaryData;
          }
          if (&local_1c0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1e0 = (longlong)local_40;
            local_1d8 = 8;
            local_1f8 = &local_1c0;
            local_1f0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1f0 = local_108.SecondaryData;
            }
            local_1e8 = (longlong)local_3c;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1c0;
      }
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,1,1,`AActor::GetComponentsBoundingCylinder'::__l2::<lambda_1>_> @ 14736def0

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponentsBoundingCylinder_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStack_228 [32];
  longlong *local_208;
  ForElementType<AActor_*> local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  longlong local_1d0;
  int local_1c8;
  int local_1c4;
  TObjectPtr<UClass>_u_0 local_1c0;
  UObject *local_1b8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  <lambda_1> local_148;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_1c0 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14736e00f;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736e00f:
  local_3c = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_1a8 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_1a4 = 1;
  local_190 = 0;
  iStack_194 = iStack_1a8;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar4;
    }
    uVar19 = *puVar21;
    iStack_1a8 = 0;
    local_190 = 0;
    while (uVar19 == 0) {
      iStack_1a8 = iStack_1a8 + 1;
      local_190 = local_190 + 0x20;
      iStack_194 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8) goto LAB_14736e0ad;
      uVar19 = puVar21[iStack_1a8];
    }
    uStack_1a4 = ~(uVar19 - 1) & uVar19;
    uVar3 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c8 = (int)lVar15;
    iStack_194 = local_1c8 + -1 + local_190;
    if (iVar5 < iStack_194) {
      iStack_194 = iVar5;
    }
  }
LAB_14736e0ad:
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_18c = local_10c;
  uVar18 = uVar19 & 0xffffffe0;
  iStack_188 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_198 = 0xffffffff;
  TStack_178._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
  TStack_178.CurrentBitIndex = iStack_194;
  TStack_178.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_178._28_4_ = local_10c;
  TStack_178.BaseBitIndex = local_190;
  uStack_158 = CONCAT44(uStack_184,iStack_188);
  local_1b0 = pTVar1;
  local_1a0 = puVar4;
  local_180 = pTVar1;
  TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar19 < 0) || (iVar5 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      iVar16 = iVar16 + 1;
      uVar18 = uVar18 + 0x20;
      uVar19 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14736e1b0;
      uVar19 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c4 = (int)lVar15;
    uVar19 = local_1c4 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar19) {
      uVar19 = uVar6;
    }
  }
LAB_14736e1b0:
  do {
    pTVar11 = local_180;
    if (*(int *)&(local_180->Elements).field_0x8 - *(int *)&(local_180->Elements).field_0x34 !=
        (int)uStack_158) {
      local_1d8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    iVar5 = local_40;
    TVar10 = local_1c0;
    if (((TStack_178.CurrentBitIndex == uVar19) &&
        (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar11 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_108.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1d7);
        }
        if (FVar17 == FVar2) break;
        local_1b8 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1b8);
        }
        local_148.bIgnoreRegistration = param_2->bIgnoreRegistration;
        local_148.bNonColliding = param_2->bNonColliding;
        local_148.OutCollisionRadius = param_2->OutCollisionRadius;
        local_148.OutCollisionHalfHeight = param_2->OutCollisionHalfHeight;
        ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponentsBoundingCylinder_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1b8,&local_148);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_178.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      `AActor::GetComponentsBoundingCylinder'::__l2::<lambda_1>::operator()(param_2,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1d0 = *(longlong *)&pUVar8->field_0x258, local_1d0 != 0))
      {
        FVar17 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1d0) {
          FVar17 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_108.SecondaryData;
          }
          if (&local_1d0 < (longlong *)((longlong)FVar17 + (longlong)local_3c * 8)) {
            local_1f0 = (longlong)local_40;
            local_1e8 = 8;
            local_208 = &local_1d0;
            local_200 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_200 = local_108.SecondaryData;
            }
            local_1f8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar17 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar17 + lVar15 * 8) = local_1d0;
      }
    }
    TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,1,1,`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l7::<lambda_1>_> @ 14736e430

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,1,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l7::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.__this = param_2.__this;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14736e553;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736e553:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14736e5ed;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14736e5ed:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14736e6f0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14736e6f0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.__this = local_res18.__this;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UPrimitiveComponent,1,1,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l7::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      `FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l7::<lambda_1>::operator()
                (&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,1,1,`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l9::<lambda_1>_> @ 14736e960

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,1,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l9::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.__this = param_2.__this;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14736ea83;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736ea83:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14736eb1d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14736eb1d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14736ec20;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14736ec20:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.__this = local_res18.__this;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UPrimitiveComponent,1,1,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l9::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      `FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l9::<lambda_1>::operator()
                (&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,1,0,`AActor::CalculateComponentsBoundingBoxInLocalSpace'::__l2::<lambda_1>_> @ 14736ee90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,0,_AActor::CalculateComponentsBoundingBoxInLocalSpace_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UPrimitiveComponent *pUVar6;
  code *pcVar7;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_b8 [4];
  int local_b4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_34;
  
  lVar12 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar12 == 0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar10->_padding_;
  if ((*(int *)(lVar12 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar10->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  pUVar10 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar10 != pUVar11) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar4 = (int)pUVar11->_padding_;
    if (((int)pUVar10->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar4 * 8) !=
        &pUVar11->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14736ef97;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14736ef97:
  iStack_a8 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  pTVar2 = &this->OwnedComponents;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14736f01d;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_b4 = (int)lVar12;
    iStack_94 = local_b4 + -1 + local_90;
    if (iVar4 < iStack_94) {
      iStack_94 = iVar4;
    }
  }
LAB_14736f01d:
  uStack_8c = local_34;
  iStack_88 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_98 = 0xffffffff;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_78._28_4_ = local_34;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar2;
  local_a0 = puVar1;
  local_80 = pTVar2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14736f121;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14736f121:
  while( true ) {
    pTVar8 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_78.CurrentBitIndex == uVar15) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pUVar6 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar8->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      `AActor::CalculateComponentsBoundingBoxInLocalSpace'::__l2::<lambda_1>::operator()
                (param_2,pUVar6);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,1,0,`AActor::GetComponentsBoundingBox'::__l2::<lambda_1>_> @ 14736f1a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,0,_AActor::GetComponentsBoundingBox_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UPrimitiveComponent *pUVar6;
  code *pcVar7;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_b8 [4];
  int local_b4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_34;
  
  lVar12 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar12 == 0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar10->_padding_;
  if ((*(int *)(lVar12 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar10->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  pUVar10 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar10 != pUVar11) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar4 = (int)pUVar11->_padding_;
    if (((int)pUVar10->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar4 * 8) !=
        &pUVar11->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14736f2a7;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14736f2a7:
  iStack_a8 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  pTVar2 = &this->OwnedComponents;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14736f32d;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_b4 = (int)lVar12;
    iStack_94 = local_b4 + -1 + local_90;
    if (iVar4 < iStack_94) {
      iStack_94 = iVar4;
    }
  }
LAB_14736f32d:
  uStack_8c = local_34;
  iStack_88 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_98 = 0xffffffff;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_78._28_4_ = local_34;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar2;
  local_a0 = puVar1;
  local_80 = pTVar2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14736f431;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14736f431:
  while( true ) {
    pTVar8 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_78.CurrentBitIndex == uVar15) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pUVar6 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar8->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      `AActor::GetComponentsBoundingBox'::__l2::<lambda_1>::operator()(param_2,pUVar6);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,1,0,`AActor::GetComponentsBoundingCylinder'::__l2::<lambda_1>_> @ 14736f4b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,0,_AActor::GetComponentsBoundingCylinder_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UPrimitiveComponent *pUVar6;
  code *pcVar7;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_b8 [4];
  int local_b4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_34;
  
  lVar12 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar12 == 0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar10->_padding_;
  if ((*(int *)(lVar12 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar10->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  pUVar10 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar10 != pUVar11) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar4 = (int)pUVar11->_padding_;
    if (((int)pUVar10->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar4 * 8) !=
        &pUVar11->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14736f5b7;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14736f5b7:
  iStack_a8 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  pTVar2 = &this->OwnedComponents;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14736f63d;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_b4 = (int)lVar12;
    iStack_94 = local_b4 + -1 + local_90;
    if (iVar4 < iStack_94) {
      iStack_94 = iVar4;
    }
  }
LAB_14736f63d:
  uStack_8c = local_34;
  iStack_88 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_98 = 0xffffffff;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_78._28_4_ = local_34;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar2;
  local_a0 = puVar1;
  local_80 = pTVar2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14736f741;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14736f741:
  while( true ) {
    pTVar8 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_78.CurrentBitIndex == uVar15) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pUVar6 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar8->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      `AActor::GetComponentsBoundingCylinder'::__l2::<lambda_1>::operator()(param_2,pUVar6);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,1,0,`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l7::<lambda_1>_> @ 14736f7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,0,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l7::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UPrimitiveComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  FActorPrimitiveColorHandler *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.__this;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14736f8c6;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14736f8c6:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736f94d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14736f94d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736fa51;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14736fa51:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UPrimitiveComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UPrimitiveComponent *)0x0) {
      `FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l7::<lambda_1>::operator()
                (&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,1,0,`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l9::<lambda_1>_> @ 14736fad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,1,0,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l9::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UPrimitiveComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  FActorPrimitiveColorHandler *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.__this;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14736fbd6;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14736fbd6:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736fc5d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14736fc5d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14736fd61;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14736fd61:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UPrimitiveComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UPrimitiveComponent *)0x0) {
      `FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l9::<lambda_1>::operator()
                (&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,0,1,`AActor::CalculateComponentsBoundingBoxInLocalSpace'::__l2::<lambda_1>_> @ 14736fde0

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::CalculateComponentsBoundingBoxInLocalSpace_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  ForElementType<AActor_*> FVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_228 [32];
  longlong *local_208;
  ForElementType<AActor_*> local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  longlong local_1d0;
  int local_1c8;
  int local_1c4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1c0;
  TObjectPtr<UClass>_u_0 local_1b8;
  UObject *local_1b0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  <lambda_1> local_148 [2];
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_1b8 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14736fecf;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14736fecf:
  local_3c = 0x18;
  local_1c0 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_1a0 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_19c = 1;
  local_188 = 0;
  iStack_18c = iStack_1a0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    iStack_1a0 = 0;
    local_188 = 0;
    while (uVar17 == 0) {
      iStack_1a0 = iStack_1a0 + 1;
      local_188 = local_188 + 0x20;
      iStack_18c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_1a0) goto LAB_14736ff73;
      uVar17 = puVar20[iStack_1a0];
    }
    uStack_19c = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uStack_19c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c8 = (int)lVar15;
    iStack_18c = local_1c8 + -1 + local_188;
    if (iVar4 < iStack_18c) {
      iStack_18c = iVar4;
    }
  }
LAB_14736ff73:
  uStack_184 = local_10c;
  iStack_180 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_190 = 0xffffffff;
  TStack_170._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  uVar21 = uVar17 & 0xffffffe0;
  TStack_170.CurrentBitIndex = iStack_18c;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_170._28_4_ = local_10c;
  TStack_170.BaseBitIndex = local_188;
  uStack_150 = CONCAT44(uStack_17c,iStack_180);
  local_1a8 = local_1c0;
  local_198 = puVar1;
  local_178 = local_1c0;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_1c0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar17 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar18) goto LAB_147370080;
      uVar17 = *(uint *)(puVar19 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c4 = (int)lVar15;
    uVar17 = local_1c4 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_147370080:
  do {
    pTVar12 = local_178;
    if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34 !=
        (int)uStack_150) {
      local_1d8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    iVar4 = local_40;
    TVar11 = local_1b8;
    if (((TStack_170.CurrentBitIndex == uVar17) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar10)) {
      FVar16 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_108.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1d7);
        }
        if (FVar16 == FVar2) break;
        local_1b0 = (UObject *)(TVar11.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1b0);
        }
        local_148[0].bNonColliding = param_2->bNonColliding;
        local_148[0].WorldToActor = param_2->WorldToActor;
        local_148[0].Box = param_2->Box;
        ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::CalculateComponentsBoundingBoxInLocalSpace_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1b0,local_148);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_170.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::CalculateComponentsBoundingBoxInLocalSpace'::__l2::<lambda_1>::operator()
                  (param_2,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1d0 = *(longlong *)&pUVar8->field_0x258, local_1d0 != 0))
      {
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1d0) {
          FVar16 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_108.SecondaryData;
          }
          if (&local_1d0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1f0 = (longlong)local_40;
            local_1e8 = 8;
            local_208 = &local_1d0;
            local_200 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_200 = local_108.SecondaryData;
            }
            local_1f8 = (longlong)local_3c;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar15 * 8) = local_1d0;
      }
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,0,1,`AActor::GetComponentsBoundingBox'::__l2::<lambda_1>_> @ 147370310

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponentsBoundingBox_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  ForElementType<AActor_*> FVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  ForElementType<AActor_*> local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  longlong local_1c0;
  int local_1b8;
  int local_1b4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1b0;
  TObjectPtr<UClass>_u_0 local_1a8;
  UObject *local_1a0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  <lambda_1> local_138 [2];
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_1a8 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_1473703ff;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1473703ff:
  local_3c = 0x18;
  local_1b0 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_190 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_18c = 1;
  local_178 = 0;
  iStack_17c = iStack_190;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    iStack_190 = 0;
    local_178 = 0;
    while (uVar17 == 0) {
      iStack_190 = iStack_190 + 1;
      local_178 = local_178 + 0x20;
      iStack_17c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_190) goto LAB_1473704a3;
      uVar17 = puVar20[iStack_190];
    }
    uStack_18c = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uStack_18c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1b8 = (int)lVar15;
    iStack_17c = local_1b8 + -1 + local_178;
    if (iVar4 < iStack_17c) {
      iStack_17c = iVar4;
    }
  }
LAB_1473704a3:
  uStack_174 = local_10c;
  iStack_170 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_180 = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_18c,iStack_190);
  uVar21 = uVar17 & 0xffffffe0;
  TStack_160.CurrentBitIndex = iStack_17c;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_160._28_4_ = local_10c;
  TStack_160.BaseBitIndex = local_178;
  uStack_140 = CONCAT44(uStack_16c,iStack_170);
  local_198 = local_1b0;
  local_188 = puVar1;
  local_168 = local_1b0;
  TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_1b0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar17 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar18) goto LAB_1473705b0;
      uVar17 = *(uint *)(puVar19 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1b4 = (int)lVar15;
    uVar17 = local_1b4 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_1473705b0:
  do {
    pTVar12 = local_168;
    if (*(int *)&(local_168->Elements).field_0x8 - *(int *)&(local_168->Elements).field_0x34 !=
        (int)uStack_140) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    iVar4 = local_40;
    TVar11 = local_1a8;
    if (((TStack_160.CurrentBitIndex == uVar17) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar10)) {
      FVar16 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_108.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c7);
        }
        if (FVar16 == FVar2) break;
        local_1a0 = (UObject *)(TVar11.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1a0);
        }
        local_138[0].bNonColliding = param_2->bNonColliding;
        local_138[0].Box = param_2->Box;
        ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponentsBoundingBox_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1a0,local_138);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_160.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::GetComponentsBoundingBox'::__l2::<lambda_1>::operator()(param_2,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1c0 = *(longlong *)&pUVar8->field_0x258, local_1c0 != 0))
      {
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1c0) {
          FVar16 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_108.SecondaryData;
          }
          if (&local_1c0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1e0 = (longlong)local_40;
            local_1d8 = 8;
            local_1f8 = &local_1c0;
            local_1f0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1f0 = local_108.SecondaryData;
            }
            local_1e8 = (longlong)local_3c;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar15 * 8) = local_1c0;
      }
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,0,1,`AActor::GetComponentsBoundingCylinder'::__l2::<lambda_1>_> @ 147370830

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponentsBoundingCylinder_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  ForElementType<AActor_*> FVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_228 [32];
  longlong *local_208;
  ForElementType<AActor_*> local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  longlong local_1d0;
  int local_1c8;
  int local_1c4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1c0;
  TObjectPtr<UClass>_u_0 local_1b8;
  UObject *local_1b0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  <lambda_1> local_148;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_1b8 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14737091f;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14737091f:
  local_3c = 0x18;
  local_1c0 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_1a0 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_19c = 1;
  local_188 = 0;
  iStack_18c = iStack_1a0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    iStack_1a0 = 0;
    local_188 = 0;
    while (uVar17 == 0) {
      iStack_1a0 = iStack_1a0 + 1;
      local_188 = local_188 + 0x20;
      iStack_18c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_1a0) goto LAB_1473709c3;
      uVar17 = puVar20[iStack_1a0];
    }
    uStack_19c = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uStack_19c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c8 = (int)lVar15;
    iStack_18c = local_1c8 + -1 + local_188;
    if (iVar4 < iStack_18c) {
      iStack_18c = iVar4;
    }
  }
LAB_1473709c3:
  uStack_184 = local_10c;
  iStack_180 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_190 = 0xffffffff;
  TStack_170._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  uVar21 = uVar17 & 0xffffffe0;
  TStack_170.CurrentBitIndex = iStack_18c;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_170._28_4_ = local_10c;
  TStack_170.BaseBitIndex = local_188;
  uStack_150 = CONCAT44(uStack_17c,iStack_180);
  local_1a8 = local_1c0;
  local_198 = puVar1;
  local_178 = local_1c0;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_1c0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar17 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar18) goto LAB_147370ad0;
      uVar17 = *(uint *)(puVar19 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1c4 = (int)lVar15;
    uVar17 = local_1c4 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_147370ad0:
  do {
    pTVar12 = local_178;
    if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34 !=
        (int)uStack_150) {
      local_1d8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    iVar4 = local_40;
    TVar11 = local_1b8;
    if (((TStack_170.CurrentBitIndex == uVar17) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar10)) {
      FVar16 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_108.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1d7);
        }
        if (FVar16 == FVar2) break;
        local_1b0 = (UObject *)(TVar11.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1b0);
        }
        local_148.bIgnoreRegistration = param_2->bIgnoreRegistration;
        local_148.bNonColliding = param_2->bNonColliding;
        local_148.OutCollisionRadius = param_2->OutCollisionRadius;
        local_148.OutCollisionHalfHeight = param_2->OutCollisionHalfHeight;
        ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponentsBoundingCylinder_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1b0,&local_148);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_170.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::GetComponentsBoundingCylinder'::__l2::<lambda_1>::operator()(param_2,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1d0 = *(longlong *)&pUVar8->field_0x258, local_1d0 != 0))
      {
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1d0) {
          FVar16 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_108.SecondaryData;
          }
          if (&local_1d0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1f0 = (longlong)local_40;
            local_1e8 = 8;
            local_208 = &local_1d0;
            local_200 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_200 = local_108.SecondaryData;
            }
            local_1f8 = (longlong)local_3c;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar15 * 8) = local_1d0;
      }
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,0,1,`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l7::<lambda_1>_> @ 147370d60

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,1,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l7::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.__this = param_2.__this;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_147370e53;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_147370e53:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_147370f00;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_147370f00:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_147371010;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_147371010:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.__this = local_res18.__this;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UPrimitiveComponent,0,1,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l7::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l7::<lambda_1>::operator()
                  (&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,0,1,`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l9::<lambda_1>_> @ 1473712a0

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

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,1,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l9::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.__this = param_2.__this;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_147371393;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_147371393:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_147371440;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_147371440:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_147371550;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_147371550:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.__this = local_res18.__this;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UPrimitiveComponent,0,1,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l9::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l9::<lambda_1>::operator()
                  (&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,0,0,`AActor::CalculateComponentsBoundingBoxInLocalSpace'::__l2::<lambda_1>_> @ 1473717e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,0,_AActor::CalculateComponentsBoundingBoxInLocalSpace_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  UPrimitiveComponent *pUVar7;
  longlong lVar8;
  code *pcVar9;
  <lambda_1> *this_00;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar17;
  uint uVar18;
  undefined1 local_b8 [4];
  int local_b4;
  <lambda_1> *local_b0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  undefined4 local_2c;
  
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  local_b0 = param_2;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_1473718be;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1473718be:
  iStack_a0 = 0;
  pTVar17 = &this->OwnedComponents;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      iStack_a0 = iStack_a0 + 1;
      local_88 = local_88 + 0x20;
      iStack_8c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_a0) goto LAB_14737194f;
      uVar14 = puVar16[iStack_a0];
    }
    uStack_9c = ~(uVar14 - 1) & uVar14;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_b4 = (int)lVar8;
    iStack_8c = local_b4 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14737194f:
  uVar14 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_84 = local_2c;
  iStack_80 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_90 = 0xffffffff;
  uVar18 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_70._28_4_ = local_2c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar17;
  local_98 = puVar2;
  local_78 = pTVar17;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_00 = local_b0;
  uVar4 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar14 != uVar4) {
    puVar6 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar6 != (undefined1 *)0x0) {
      puVar15 = puVar6;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      iVar13 = iVar13 + 1;
      uVar18 = uVar18 + 0x20;
      uVar14 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar13) goto LAB_147371a60;
      uVar14 = *(uint *)(puVar15 + (longlong)iVar13 * 4);
    }
    uVar1 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_147371a60:
  while( true ) {
    pTVar10 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar10 == pTVar17)
       ) break;
    pUVar7 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    if (pUVar7 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
        `AActor::CalculateComponentsBoundingBoxInLocalSpace'::__l2::<lambda_1>::operator()
                  (this_00,pUVar7);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,0,0,`AActor::GetComponentsBoundingBox'::__l2::<lambda_1>_> @ 147371b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,0,_AActor::GetComponentsBoundingBox_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  UPrimitiveComponent *pUVar7;
  longlong lVar8;
  code *pcVar9;
  <lambda_1> *this_00;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar17;
  uint uVar18;
  undefined1 local_b8 [4];
  int local_b4;
  <lambda_1> *local_b0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  undefined4 local_2c;
  
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  local_b0 = param_2;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_147371bde;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_147371bde:
  iStack_a0 = 0;
  pTVar17 = &this->OwnedComponents;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      iStack_a0 = iStack_a0 + 1;
      local_88 = local_88 + 0x20;
      iStack_8c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_a0) goto LAB_147371c6f;
      uVar14 = puVar16[iStack_a0];
    }
    uStack_9c = ~(uVar14 - 1) & uVar14;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_b4 = (int)lVar8;
    iStack_8c = local_b4 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_147371c6f:
  uVar14 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_84 = local_2c;
  iStack_80 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_90 = 0xffffffff;
  uVar18 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_70._28_4_ = local_2c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar17;
  local_98 = puVar2;
  local_78 = pTVar17;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_00 = local_b0;
  uVar4 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar14 != uVar4) {
    puVar6 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar6 != (undefined1 *)0x0) {
      puVar15 = puVar6;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      iVar13 = iVar13 + 1;
      uVar18 = uVar18 + 0x20;
      uVar14 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar13) goto LAB_147371d80;
      uVar14 = *(uint *)(puVar15 + (longlong)iVar13 * 4);
    }
    uVar1 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_147371d80:
  while( true ) {
    pTVar10 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar10 == pTVar17)
       ) break;
    pUVar7 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    if (pUVar7 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
        `AActor::GetComponentsBoundingBox'::__l2::<lambda_1>::operator()(this_00,pUVar7);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,0,0,`AActor::GetComponentsBoundingCylinder'::__l2::<lambda_1>_> @ 147371e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,0,_AActor::GetComponentsBoundingCylinder_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  UPrimitiveComponent *pUVar7;
  longlong lVar8;
  code *pcVar9;
  <lambda_1> *this_00;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar17;
  uint uVar18;
  undefined1 local_b8 [4];
  int local_b4;
  <lambda_1> *local_b0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  undefined4 local_2c;
  
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  local_b0 = param_2;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_147371efe;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_147371efe:
  iStack_a0 = 0;
  pTVar17 = &this->OwnedComponents;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      iStack_a0 = iStack_a0 + 1;
      local_88 = local_88 + 0x20;
      iStack_8c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_a0) goto LAB_147371f8f;
      uVar14 = puVar16[iStack_a0];
    }
    uStack_9c = ~(uVar14 - 1) & uVar14;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_b4 = (int)lVar8;
    iStack_8c = local_b4 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_147371f8f:
  uVar14 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_84 = local_2c;
  iStack_80 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_90 = 0xffffffff;
  uVar18 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_70._28_4_ = local_2c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar17;
  local_98 = puVar2;
  local_78 = pTVar17;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_00 = local_b0;
  uVar4 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar14 != uVar4) {
    puVar6 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar6 != (undefined1 *)0x0) {
      puVar15 = puVar6;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      iVar13 = iVar13 + 1;
      uVar18 = uVar18 + 0x20;
      uVar14 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar13) goto LAB_1473720a0;
      uVar14 = *(uint *)(puVar15 + (longlong)iVar13 * 4);
    }
    uVar1 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_1473720a0:
  while( true ) {
    pTVar10 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar10 == pTVar17)
       ) break;
    pUVar7 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    if (pUVar7 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
        `AActor::GetComponentsBoundingCylinder'::__l2::<lambda_1>::operator()(this_00,pUVar7);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,0,0,`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l7::<lambda_1>_> @ 147372140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,0,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l7::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UPrimitiveComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  FActorPrimitiveColorHandler *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.__this;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14737221e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14737221e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_1473722af;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_1473722af:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_1473723c0;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_1473723c0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UPrimitiveComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        `FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l7::<lambda_1>::operator()
                  (&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,0,0,`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l9::<lambda_1>_> @ 147372460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UPrimitiveComponent,0,0,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l9::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UPrimitiveComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  FActorPrimitiveColorHandler *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.__this;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14737253e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14737253e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_1473725cf;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_1473725cf:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_1473726e0;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_1473726e0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UPrimitiveComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        `FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l9::<lambda_1>::operator()
                  (&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USceneComponent,1,1,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>'::__l2::<lambda_1>_> @ 147372780

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

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  USceneComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1473728a3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1473728a3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14737293d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14737293d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_147372a40;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_147372a40:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USceneComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USceneComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (USceneComponent *)0x0) {
      `AActor::
      GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>'::__l2
      ::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[1]._padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,1,1,`AActor::MarkNeedsRecomputeBoundsOnceForGame'::__l2::<lambda_1>_> @ 147372cb0

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

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,1,1,_AActor::MarkNeedsRecomputeBoundsOnceForGame_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  AActor *this_00;
  code *pcVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TObjectPtr<UClass>_u_0 local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_147372dd0;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147372dd0:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar4;
    }
    uVar15 = *puVar19;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar15 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_147372e6f;
      uVar15 = puVar19[iStack_178];
    }
    uStack_174 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_198 = (int)lVar14;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_147372e6f:
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar20 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar18 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar18 = puVar7;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar20 = uVar20 + 0x20;
      uVar15 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_147372f70;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_194 = (int)lVar14;
    uVar15 = local_194 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_147372f70:
  do {
    pTVar10 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar9 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar10 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar17 == FVar2) break;
        local_188 = (UObject *)(TVar9.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USceneComponent,1,1,_AActor::MarkNeedsRecomputeBoundsOnceForGame_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    lVar14 = *(longlong *)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (lVar14 != 0) {
      if (*(char *)(lVar14 + 0x1a9) < '\0') {
        *(byte *)(lVar14 + 0x1aa) = *(byte *)(lVar14 + 0x1aa) & 0xfe;
      }
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) && (local_1a0 = *(longlong *)(lVar14 + 600), local_1a0 != 0)) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1a0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar14 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar14 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,1,0,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>'::__l2::<lambda_1>_> @ 1473731e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USceneComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1473732e6;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1473732e6:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14737336d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14737336d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147373471;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_147373471:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(USceneComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (USceneComponent *)0x0) {
      `AActor::
      GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>'::__l2
      ::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USceneComponent,0,1,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>'::__l2::<lambda_1>_> @ 1473734f0

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

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  USceneComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_1473735e3;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1473735e3:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_147373690;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_147373690:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_1473737a0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_1473737a0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USceneComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USceneComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (USceneComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[1]._padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,0,1,`AActor::MarkNeedsRecomputeBoundsOnceForGame'::__l2::<lambda_1>_> @ 147373a30

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

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,0,1,_AActor::MarkNeedsRecomputeBoundsOnceForGame_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  AActor *this_00;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_147373b20;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147373b20:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar19 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_147373bd1;
      uVar19 = puVar18[iStack_180];
    }
    uStack_17c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_147373bd1:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar3;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_147373ce0;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a4 = (int)lVar14;
    uVar19 = local_1a4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_147373ce0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar10 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar9)
       ) {
      FVar16 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_48;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar1) break;
        local_190 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USceneComponent,0,1,_AActor::MarkNeedsRecomputeBoundsOnceForGame_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    lVar14 = *(longlong *)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (lVar14 != 0) {
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
         (*(char *)(lVar14 + 0x1a9) < '\0')) {
        *(byte *)(lVar14 + 0x1aa) = *(byte *)(lVar14 + 0x1aa) & 0xfe;
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1b0 = *(longlong *)(lVar14 + 600), local_1b0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,0,0,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>'::__l2::<lambda_1>_> @ 147373f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  USceneComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14737404e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14737404e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_1473740df;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_1473740df:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_1473741f0;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_1473741f0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(USceneComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (USceneComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,USceneComponent>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachNetDriver<`AActor::SetNetUpdateFrequency'::__l23::<lambda_1>_> @ 147374290

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
ActorUtils::ForEachNetDriver<_AActor::SetNetUpdateFrequency_::__l23::<lambda_1>_>
          (UEngine *param_1,UWorld *param_2,<lambda_1> param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FWorldContext *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FDestructionSentinel local_50;
  
  if (((param_1 != (UEngine *)0x0) && (param_2 != (UWorld *)0x0)) &&
     (pFVar9 = UEngine::GetWorldContextFromWorld(param_1,param_2), pFVar9 != (FWorldContext *)0x0))
  {
    pFVar14 = (pFVar9->ActiveNetDrivers).AllocatorInstance.Data;
    uVar1 = (pFVar9->ActiveNetDrivers).ArrayNum;
    uVar10 = (ulonglong)(int)uVar1;
    pFVar13 = pFVar14 + uVar10 * 0x10;
    while( true ) {
      if ((pFVar9->ActiveNetDrivers).ArrayNum != (int)uVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar14 == pFVar13) break;
      lVar2 = *(longlong *)pFVar14;
      if (lVar2 != 0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2f8),
                   (FWriteAccessScope *)&local_50);
        *(int *)(lVar2 + 0x314) = *(int *)(lVar2 + 0x314) + 1;
        bVar5 = false;
        uVar12 = *(int *)(lVar2 + 0x308) - 1;
        if (-1 < (int)uVar12) {
          lVar11 = (longlong)(int)uVar12 << 4;
          do {
            uVar8 = 0;
            if ((int)uVar12 < *(int *)(lVar2 + 0x308)) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (((*(int *)(lVar11 + 8 + *(longlong *)(lVar2 + 0x300)) == 0) ||
                (plVar3 = *(longlong **)(lVar11 + *(longlong *)(lVar2 + 0x300)),
                plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar11 = lVar11 + -0x10;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        *(int *)(lVar2 + 0x314) = *(int *)(lVar2 + 0x314) + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar2 + 0x2f8),false);
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
      }
      uVar10 = (ulonglong)uVar1;
      pFVar14 = pFVar14 + 0x10;
    }
  }
  return;
}

// GetDefault<UDamageType> @ 147374b60

UDamageType * __cdecl GetDefault<UDamageType>(void)

{
  UClass *this;
  
  this = Z_Construct_UClass_UDamageType_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UDamageType *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UDamageType *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetTypeName<UActorComponent> @ 147374e30

FString * __cdecl GetTypeName<UActorComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UActorComponent_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UActorComponent_*,int>,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UActorComponent_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>_>::FValueComparisonClass<`AActor::DestroyConstructedComponents'::__l2::<lambda_1>_>_>_>_> @ 147374ef0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UActorComponent_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UActorComponent_*,int>,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UActorComponent_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>_>::FValueComparisonClass<_AActor::DestroyConstructedComponents_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UActorComponent_*,int>,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UActorComponent_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>_>::FValueComparisonClass<_public:_void___cdecl_AActor::DestroyConstructedComponents(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar15 = iVar9;
  iVar10 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_147374ffd:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar11 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar14 = param_1 + lVar11;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar14->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
            pTVar14->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) = uVar2;
            iVar15 = 0;
            if (1 < iVar9) {
              do {
                iVar8 = iVar15 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 8) <
                      *(int *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 0x38)) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                lVar12 = (longlong)iVar15;
                pTVar1 = param_1 + iVar10;
                if (*(int *)((longlong)param_1 + lVar12 * 0x18 + 8) <=
                    *(int *)((pTVar1->ElementData).Pad + 8)) break;
                uVar4 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar2 = *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10);
                TVar5 = param_1[lVar12]._s_1;
                uVar6 = *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8);
                param_1[lVar12]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8) = uVar4;
                *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                pTVar1->_s_1 = TVar5;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar2;
                iVar15 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar11 = lVar11 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar8 = iVar10 + -1;
      iVar9 = iVar15 + -2;
      iVar15 = iVar9;
      iVar10 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar13 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 8) <
          *(int *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 0x38)) {
        iVar13 = iVar9;
      }
      iVar13 = iVar13 + 1;
    }
    lVar11 = (longlong)iVar8;
    pTVar14 = param_1 + iVar13;
    if (*(int *)((longlong)param_1 + lVar11 * 0x18 + 8) <= *(int *)((pTVar14->ElementData).Pad + 8))
    goto LAB_147374ffd;
    uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
    iVar9 = iVar13 * 2 + 1;
    uVar2 = *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10);
    TVar5 = param_1[lVar11]._s_1;
    uVar6 = *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8);
    param_1[lVar11]._s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8) = uVar4;
    *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10) =
         *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
    pTVar14->_s_1 = TVar5;
    *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
    *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) = uVar2;
    iVar8 = iVar13;
  } while( true );
}

// InternalConstructor<AActor> @ 147375110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AActor>(FObjectInitializer *param_1)

{
  if ((AActor *)param_1->Obj != (AActor *)0x0) {
    AActor::AActor((AActor *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<APartitionActor> @ 147375130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APartitionActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APartitionActor__6B_;
    pFVar2 = FName::FName(&local_res8,L"RootComponent0");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar4 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar4;
    (pUVar4->Mobility).Value = '\0';
  }
  return;
}

// InternalConstructor<UAISystemBase> @ 1473751d0

void __cdecl InternalConstructor<UAISystemBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAISystemBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UActorFolder> @ 147375220

void __cdecl InternalConstructor<UActorFolder>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UActorFolder__6B_;
  }
  return;
}

// InternalConstructor<UActorPartitionSubsystem> @ 147375250

void __cdecl InternalConstructor<UActorPartitionSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UActorPartitionSubsystem__6B_;
  }
  return;
}

// InternalConstructor<UAvoidanceManager> @ 147375280

void __cdecl InternalConstructor<UAvoidanceManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)(this + 1));
    *(undefined ***)this = &UAvoidanceManager::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UAvoidanceManager::_vftable__for__FSelfRegisteringExec__;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0xc = 0x80;
    *(undefined4 *)&this[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(uint *)&this[5].field_0x10 = *(uint *)&this[5].field_0x10 & 0xfffffffe;
    *(uint *)&this[5].field_0x10 = *(uint *)&this[5].field_0x10 | 2;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x8 = 0x3fc00000;
    *(undefined4 *)&this[1].field_0xc = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x10 = 0x3a83126f;
    *(undefined4 *)&this[1].field_0x14 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x18 = 0x3fc00000;
    *(undefined4 *)&this[1].field_0x1c = 0x43fa0000;
    *(undefined4 *)&this[1].field_0x20 = 0x41200000;
    *(undefined1 *)(this + 6) = 0;
  }
  return;
}

// InternalConstructor<UNavCollisionBase> @ 147375390

void __cdecl InternalConstructor<UNavCollisionBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNavCollisionBase__6B_;
    *(uint *)(this + 1) = *(uint *)(this + 1) & 0xfffffffc;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UNavigationDataChunk> @ 147375400

void __cdecl InternalConstructor<UNavigationDataChunk>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNavigationDataChunk__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UNavigationSystemBase> @ 147375440

void __cdecl InternalConstructor<UNavigationSystemBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNavigationSystemBase__6B_;
  }
  return;
}

// InternalConstructor<UNavigationSystemConfig> @ 147375470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UNavigationSystemConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNavigationSystemConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[1].field_0x20 = 0x7fffffff;
    if (GEngine != (UEngine *)0x0) {
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)(this + 1),
                 (FSoftObjectPath *)&GEngine->NavigationSystemClassName);
      return;
    }
  }
  return;
}

// InternalConstructor<UNullNavSysConfig> @ 1473754e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UNullNavSysConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNavigationSystemConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0x7fffffff;
    *(undefined4 *)(this + 2) = 0;
    if (GEngine != (UEngine *)0x0) {
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)(this + 1),
                 (FSoftObjectPath *)&GEngine->NavigationSystemClassName);
    }
    *(undefined ***)this = &___7UNullNavSysConfig__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)(this + 1) = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x10,0);
  }
  return;
}

// InternalVTableHelperCtorCaller<AActor> @ 147375590

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

UObject * __cdecl InternalVTableHelperCtorCaller<AActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AActor::GetPrivateStaticClass();
  pAVar3 = (AActor *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (AActor *)0x0) {
    pAVar3 = AActor::AActor(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APartitionActor> @ 147375630

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

UObject * __cdecl InternalVTableHelperCtorCaller<APartitionActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APartitionActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APartitionActor__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISystemBase> @ 1473756e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISystemBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISystemBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAISystemBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorFolder> @ 1473757b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UActorFolder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorFolder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UActorFolder__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorPartitionSubsystem> @ 147375860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UActorPartitionSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorPartitionSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UActorPartitionSubsystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAvoidanceManager> @ 147375910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAvoidanceManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAvoidanceManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)(pUVar1 + 1));
    *(undefined ***)pUVar1 = &UAvoidanceManager::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UAvoidanceManager::_vftable__for__FSelfRegisteringExec__;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UNavCollisionBase> @ 147375a40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavCollisionBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavCollisionBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavCollisionBase__6B_;
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
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationDataChunk> @ 147375b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavigationDataChunk>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationDataChunk::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavigationDataChunk__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationSystemBase> @ 147375bd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavigationSystemBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationSystemBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavigationSystemBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationSystemConfig> @ 147375c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavigationSystemConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationSystemConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavigationSystemConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0x7fffffff;
    *(undefined4 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNullNavSysConfig> @ 147375d50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNullNavSysConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNullNavSysConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNullNavSysConfig__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0x7fffffff;
    *(undefined4 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UActorComponent_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UActorComponent_*,int>,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UActorComponent_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>_>::FValueComparisonClass<`AActor::DestroyConstructedComponents'::__l2::<lambda_1>_>_>_>_> @ 147375e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UActorComponent_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UActorComponent_*,int>,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UActorComponent_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>_>::FValueComparisonClass<_AActor::DestroyConstructedComponents_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UActorComponent_*,int>,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UActorComponent_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>_>::FValueComparisonClass<_public:_void___cdecl_AActor::DestroyConstructedComponents(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_348._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_147375ef0:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_147375f40:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000147375f49;
          goto LAB_147375f53;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(int *)((pTVar1->ElementData).Pad + 8) < *(int *)((pTVar13->ElementData).Pad + 8))
            {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_147376075;
      }
LAB_147376066:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UActorComponent_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UActorComponent_*,int>,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UActorComponent_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>_>::FValueComparisonClass<_AActor::DestroyConstructedComponents_::__l2::<lambda_1>_>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_147376075:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000147375f49:
  if (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)pTVar9 + 0x20))
  goto LAB_147375f40;
LAB_147375f53:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(int *)((longlong)pTVar11 + -0x10) <= *(int *)((pTVar12->ElementData).Pad + 8));
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x10);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x20);
    uVar3 = *(undefined8 *)((longlong)pTVar9 + 0x28);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x20) = uVar2;
    *(undefined8 *)((longlong)pTVar9 + 0x28) = *(undefined8 *)((longlong)pTVar11 + -8);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
    goto LAB_147375f40;
  }
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
  lVar6 = (longlong)pTVar10 + (-0x18 - (longlong)pTVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -8);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pTVar8 - (longlong)pTVar13) / 0x18) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_147376075;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_147376075;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_147376066;
  goto LAB_147375ef0;
}

// IsObjectPtrEqual<UNetDriver,UNetDriver_*,0> @ 147376220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNetDriver,UNetDriver_*,0>
          (TObjectPtr<UNetDriver> *param_1,UNetDriver **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNetDriver *)0x0) {
    return *param_2 == (UNetDriver *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<USceneComponent,USceneComponent_*,0> @ 147376240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USceneComponent,USceneComponent_*,0>
          (TObjectPtr<USceneComponent> *param_1,USceneComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (USceneComponent *)0x0) {
    return *param_2 == (USceneComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<USceneComponent,UActorComponent_*,0> @ 147376260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USceneComponent,UActorComponent_*,0>
          (TObjectPtr<USceneComponent> *param_1,UActorComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (USceneComponent *)0x0) {
    return (USceneComponent *)*param_2 == (USceneComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (USceneComponent *)*param_2;
}

// NewObject<UActorComponent> @ 147376280

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UActorComponent * __cdecl
NewObject<UActorComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UActorComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UActorComponent_NoRegister();
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
  pUVar2 = (UActorComponent *)
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

// NewObject<UBillboardComponent> @ 147376380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBillboardComponent * __cdecl NewObject<UBillboardComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UBillboardComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UBillboardComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBillboardComponent *)
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

// NewObject<UNavigationSystemBase> @ 147376420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavigationSystemBase * __cdecl
NewObject<UNavigationSystemBase>
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
  pUVar1 = UNavigationSystemBase::StaticClass();
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
  return (UNavigationSystemBase *)pUVar2;
}

// NoneOf<TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>,`AActor::HasHLODRelevantComponents'::__l2::<lambda_1>_> @ 147376520

bool __cdecl
Algo::
NoneOf<TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>,_AActor::HasHLODRelevantComponents_::__l2::<lambda_1>_>
          (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar14 = 0;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1473765bd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (int)lVar11 + -1 + iVar16;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_1473765bd:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar9,iVar14);
  TStack_50.CurrentBitIndex = iVar10;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_50._28_4_ = iVar10;
  TStack_50.BaseBitIndex = iVar16;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1473766c0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_1473766c0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              (*(longlong *)&param_1->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
    if ((plVar4 != (longlong *)0x0) && (cVar8 = (**(code **)(*plVar4 + 0x4e8))(), cVar8 != '\0')) {
      return false;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return true;
}

// StaticEnum<enum_EActorUpdateOverlapsMethod> @ 147377be0

UEnum * __cdecl StaticEnum<enum_EActorUpdateOverlapsMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EActorUpdateOverlapsMethod,(UObject *)pUVar1,
                       L"EActorUpdateOverlapsMethod");
  }
  return Z_Registration_Info_UEnum_EActorUpdateOverlapsMethod.OuterSingleton;
}

// StaticEnum<enum_ELevelInstanceFlags> @ 147377c20

UEnum * __cdecl StaticEnum<enum_ELevelInstanceFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELevelInstanceFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ELevelInstanceFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceFlags,(UObject *)pUVar1,
                       L"ELevelInstanceFlags");
  }
  return Z_Registration_Info_UEnum_ELevelInstanceFlags.OuterSingleton;
}

// StaticEnum<enum_ELevelInstanceType> @ 147377c60

UEnum * __cdecl StaticEnum<enum_ELevelInstanceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELevelInstanceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ELevelInstanceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceType,(UObject *)pUVar1,
                       L"ELevelInstanceType");
  }
  return Z_Registration_Info_UEnum_ELevelInstanceType.OuterSingleton;
}

// StaticEnum<enum_ENavDataGatheringModeConfig> @ 147377ca0

UEnum * __cdecl StaticEnum<enum_ENavDataGatheringModeConfig>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig,(UObject *)pUVar1,
                       L"ENavDataGatheringModeConfig");
  }
  return Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton;
}

// StaticEnum<enum_ENavigationOptionFlag> @ 147377ce0

UEnum * __cdecl StaticEnum<enum_ENavigationOptionFlag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationOptionFlag,(UObject *)pUVar1,
                       L"ENavigationOptionFlag");
  }
  return Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton;
}

// StaticEnum<enum_ENavigationSortPendingTilesMethod> @ 147377d20

UEnum * __cdecl StaticEnum<enum_ENavigationSortPendingTilesMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod,(UObject *)pUVar1,
                       L"ENavigationSortPendingTilesMethod");
  }
  return Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.OuterSingleton;
}

// StaticEnum<enum_ESpawnActorScaleMethod> @ 147377d60

UEnum * __cdecl StaticEnum<enum_ESpawnActorScaleMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpawnActorScaleMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESpawnActorScaleMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESpawnActorScaleMethod,(UObject *)pUVar1,
                       L"ESpawnActorScaleMethod");
  }
  return Z_Registration_Info_UEnum_ESpawnActorScaleMethod.OuterSingleton;
}

// StaticEnum<enum_FNavigationSystemRunMode> @ 147377da0

UEnum * __cdecl StaticEnum<enum_FNavigationSystemRunMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_FNavigationSystemRunMode,(UObject *)pUVar1,
                       L"FNavigationSystemRunMode");
  }
  return Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton;
}

// StaticEnum<enum_ENavPathEvent::Type> @ 147377de0

UEnum * __cdecl StaticEnum<enum_ENavPathEvent::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavPathEvent,(UObject *)pUVar1,L"ENavPathEvent");
  }
  return Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton;
}

// StaticEnum<enum_ENavigationQueryResult::Type> @ 147377e20

UEnum * __cdecl StaticEnum<enum_ENavigationQueryResult::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationQueryResult,(UObject *)pUVar1,
                       L"ENavigationQueryResult");
  }
  return Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton;
}

// TransformIf<TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>,TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>_&,`AActor::GetHLODRelevantComponents'::__l2::<lambda_1>,`AActor::GetHLODRelevantComponents'::__l2::<lambda_2>_> @ 147377e60

void __cdecl
Algo::
TransformIf<TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>,TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>_&,_AActor::GetHLODRelevantComponents_::__l2::<lambda_1>,_AActor::GetHLODRelevantComponents_::__l2::<lambda_2>_>
          (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
           *param_1,TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3,<lambda_2> param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  longlong local_98;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar10 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_88 = 0;
  uStack_84 = 1;
  local_70 = 0;
  iStack_74 = 0;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iStack_88;
      local_70 = local_70 + 0x20;
      iStack_88 = iStack_88 + 1;
      iStack_74 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_147377f0e;
      uVar12 = puVar16[lVar11 + 1];
    }
    uStack_84 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_60 = (int)lVar11;
    iStack_74 = local_60 + -1 + local_70;
    if (iVar10 < iStack_74) {
      iStack_74 = iVar10;
    }
  }
LAB_147377f0e:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  iStack_68 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_78 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_84,iStack_88);
  TStack_50.CurrentBitIndex = iStack_74;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_50._28_4_ = iStack_74;
  TStack_50.BaseBitIndex = local_70;
  uStack_30 = CONCAT44(uStack_64,iStack_68);
  local_90 = param_1;
  local_80 = puVar1;
  iStack_6c = iStack_74;
  local_58 = param_1;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar10 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar3) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147378010;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_5c = (int)lVar11;
    uVar12 = local_5c + -1 + uVar17;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
    }
  }
LAB_147378010:
  while( true ) {
    pTVar7 = local_58;
    if (*(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34 !=
        (int)uStack_30) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_50.CurrentBitIndex == uVar12) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    plVar14 = (longlong *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
    plVar4 = (longlong *)*plVar14;
    if ((plVar4 != (longlong *)0x0) && (cVar9 = (**(code **)(*plVar4 + 0x4e8))(), cVar9 != '\0')) {
      local_98 = *plVar14;
      pFVar5 = (param_2->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_98) &&
         (((FScriptContainerElement *)&local_98 < pFVar5 + (longlong)param_2->ArrayMax * 8 &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_2->ArrayNum;
      if (iVar10 == param_2->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar10 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_98;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ~TFunction_OwnedObject<`AActor::PushSelectionToProxies'::__l22::<lambda_1>,0,0> @ 14737cf50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AActor::PushSelectionToProxies'::__l22::<lambda_1>,0,0>::
~TFunction_OwnedObject<_AActor::PushSelectionToProxies_::__l22::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AActor::PushSelectionToProxies'::`22'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`AActor::ExecuteConstruction'::__l28::<lambda_2>,0,0> @ 14737cf70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AActor::ExecuteConstruction'::__l28::<lambda_2>,0,0>::
~TFunction_OwnedObject<_AActor::ExecuteConstruction_::__l28::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AActor::ExecuteConstruction'::`28'::<lambda_2>,0,0>::_vftable_;
  return;
}

// operator<< @ 14737e830

FArchive * __cdecl operator<<(FArchive *param_1,FActorRootComponentReconstructionData *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  FPayload *pFVar5;
  TRotator<double> *pTVar6;
  int iVar7;
  FRotationConversionCache *this;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar11;
  char local_res8 [8];
  TQuat<double> local_48;
  TQuat<double> local_28;
  TQuat<double> *pTVar10;
  
  local_res8[0] = '\0';
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_res8[0] == '\0') {
    UE::Math::operator<<(param_1,&param_2->Transform);
    if ((param_1->field_0x28 & 4) == 0) {
      if ((param_1->field_0x28 & 1) != 0) {
        pTVar10 = &local_28;
        UE::Math::operator<<(param_1,pTVar10);
        uVar8 = SUB84(pTVar10,0);
        this = &param_2->TransformRotationCache;
        pFVar5 = FRotationConversionCache::GetOrCreatePayload(this);
        lVar11 = -(ulonglong)((pFVar5->CachedQuat).W != local_28.W);
        auVar2._8_4_ = (int)lVar11;
        auVar2._0_8_ = -(ulonglong)((pFVar5->CachedQuat).Z != local_28.Z);
        auVar2._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
        uVar9 = movmskpd(uVar8,auVar2);
        lVar11 = -(ulonglong)((pFVar5->CachedQuat).Y != local_28.Y);
        auVar3._8_4_ = (int)lVar11;
        auVar3._0_8_ = -(ulonglong)((pFVar5->CachedQuat).X != local_28.X);
        auVar3._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
        iVar7 = movmskpd((int)this,auVar3);
        if ((uVar9 & 0x3fffffff) != 0 || iVar7 != 0) {
          (pFVar5->CachedQuat).X = local_28.X;
          (pFVar5->CachedQuat).Y = local_28.Y;
          (pFVar5->CachedQuat).Z = local_28.Z;
          (pFVar5->CachedQuat).W = local_28.W;
          pTVar6 = UE::Math::TQuat<double>::Rotator(&local_28,(TRotator<double> *)&local_48);
          dVar4 = pTVar6->Yaw;
          (pFVar5->CachedRotator).Pitch = pTVar6->Pitch;
          (pFVar5->CachedRotator).Yaw = dVar4;
          (pFVar5->CachedRotator).Roll = pTVar6->Roll;
        }
      }
    }
    else {
      pFVar5 = (param_2->TransformRotationCache).PayloadPtr.Ptr;
      if (pFVar5 == (FPayload *)0x0) {
        local_48.X = UE::Math::TQuat<double>::Identity.X;
        local_48.Y = UE::Math::TQuat<double>::Identity.Y;
        local_48.Z._0_4_ = UE::Math::TQuat<double>::Identity.Z._0_4_;
        local_48.Z._4_4_ = UE::Math::TQuat<double>::Identity.Z._4_4_;
        local_48.W._0_4_ = UE::Math::TQuat<double>::Identity.W._0_4_;
        local_48.W._4_4_ = UE::Math::TQuat<double>::Identity.W._4_4_;
      }
      else {
        local_48.X = (pFVar5->CachedQuat).X;
        local_48.Y = (pFVar5->CachedQuat).Y;
        local_48.Z._0_4_ = *(undefined4 *)&(pFVar5->CachedQuat).Z;
        local_48.Z._4_4_ = *(undefined4 *)((longlong)&(pFVar5->CachedQuat).Z + 4);
        local_48.W._0_4_ = *(undefined4 *)&(pFVar5->CachedQuat).W;
        local_48.W._4_4_ = *(undefined4 *)((longlong)&(pFVar5->CachedQuat).W + 4);
      }
      UE::Math::operator<<(param_1,&local_48);
    }
    operator<<(param_1,&param_2->AttachedParentInfo);
    TArrayPrivateFriend::
    Serialize<FActorRootComponentReconstructionData::FAttachedActorInfo,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->AttachedToInfo);
    return param_1;
  }
  FArchiveState::SetError((FArchiveState *)param_1);
  return param_1;
}

// operator<< @ 14737e9a0

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

FArchive * __cdecl operator<<(FArchive *param_1,FActorTransactionAnnotationData *param_2)

{
  longlong *plVar1;
  AActor *pAVar2;
  FComponentInstanceDataCache *pFVar3;
  undefined1 auStack_a8 [32];
  byte local_88 [16];
  undefined1 local_78 [80];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = 1;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_88,1);
  }
  else {
    local_88[0] = *(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_88[0] < 2) {
    (**(code **)(*(longlong *)param_1 + 0x138))(param_1,param_2);
    operator<<(param_1,&param_2->bRootComponentDataCached);
    if (param_2->bRootComponentDataCached != false) {
      operator<<(param_1,&param_2->RootComponentData);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      pAVar2 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
      pFVar3 = FComponentInstanceDataCache::FComponentInstanceDataCache
                         ((FComponentInstanceDataCache *)local_78,pAVar2);
      FComponentInstanceDataCache::operator=(&param_2->ComponentInstanceData,pFVar3);
      local_20 = 0;
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_78 + 0x10));
      DestructItems<TStructOnScope<FActorComponentInstanceData>,int>
                ((TStructOnScope<FActorComponentInstanceData> *)local_78._0_8_,local_78._8_4_);
      if ((TStructOnScope<FActorComponentInstanceData> *)local_78._0_8_ !=
          (TStructOnScope<FActorComponentInstanceData> *)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
    }
    if (local_88[0] != 0) {
      FComponentInstanceDataCache::Serialize(&param_2->ComponentInstanceData,param_1);
    }
  }
  else {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<< @ 14737eb00

FArchive * __cdecl operator<<(FArchive *param_1,FAttachedActorInfo *param_2)

{
  longlong *plVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_res8[0] != '\0') {
    FArchiveState::SetError((FArchiveState *)param_1);
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x138))(param_1,param_2);
  (**(code **)(*(longlong *)param_1 + 0x138))(param_1,&param_2->AttachParent);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->AttachParentName);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->SocketName);
  UE::Math::operator<<(param_1,&param_2->RelativeTransform);
  return param_1;
}

// `vcall'{1224,{flat}}'_}' @ 14737fd5c

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl AActor::`vcall'{1224,{flat}}' }' */

void __thiscall AActor::_vcall__1224__flat______(AActor *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014737fd5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4c8))();
  return;
}

// `vcall'{728,{flat}}'_}' @ 14737fd6c

/* [thunk]: __cdecl UAISystemBase::`vcall'{728,{flat}}' }' */

void __thiscall UAISystemBase::_vcall__728__flat______(UAISystemBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014737fd6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))();
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14737fd7c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAvoidanceManager::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAvoidanceManager::_vector_deleting_destructor__adjustor_40__(UAvoidanceManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAvoidanceManager *)&this[-1].EdgeProviderInterface,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14737fd90

void * __thiscall
IBaseDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737fdc0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737fdf0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FName),FDefaultDelegateUserPolicy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737fe20

void * __thiscall
TBaseFunctorDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737fe50

void * __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_28>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737fe80

void * __thiscall
TBaseFunctorDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_27>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737feb0

void * __thiscall
TBaseFunctorDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy,`UNavCollisionBase::FDelegateInitializer::FDelegateInitializer'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737fee0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_12>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737ff10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_13>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737ff40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_15>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737ff70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_16>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737ffa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_21>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14737ffd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380000

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_25>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380030

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_10>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380060

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_17>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380090

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_18>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473800c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_19>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473800f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_20>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380120

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_26>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380150

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380180

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473801b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473801e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380210

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_11>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380240

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_14>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380270

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_30>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473802a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_29>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473802d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_22>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380300

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380330

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380360

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380390

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_24>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473803c0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy,`FNavigationSystem::FDelegates::FDelegates'::__l2::<lambda_23>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473803f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AActor,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AActor,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380420

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISystemBase,void___cdecl(FName),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAISystemBase,void___cdecl(FName),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380450

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAvoidanceManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAvoidanceManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380480

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473804b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473804e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AActor::PushSelectionToProxies'::__l22::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AActor::PushSelectionToProxies'::`22'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AActor::ExecuteConstruction'::__l28::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AActor::ExecuteConstruction'::`28'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380590

void * __thiscall
TThreadSingleton<FActorThreadContext>::_scalar_deleting_destructor_
          (TThreadSingleton<FActorThreadContext> *this,uint param_1)

{
  ~TThreadSingleton<FActorThreadContext>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473805d0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380600

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l8::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380630

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,`FNavigationElement::InitializeFromInterface'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AActor::_scalar_deleting_destructor_(AActor *this,uint param_1)

{
  ~AActor(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473806c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall APartitionActor::_scalar_deleting_destructor_(APartitionActor *this,uint param_1)

{
  *(undefined ***)this = &___7APartitionActor__6B_;
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

// `scalar_deleting_destructor' @ 147380720

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
FActorThreadContext::_scalar_deleting_destructor_(FActorThreadContext *this,uint param_1)

{
  TThreadSingleton<FActorThreadContext>::~TThreadSingleton<FActorThreadContext>
            ((TThreadSingleton<FActorThreadContext> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380760

void * __thiscall
FArchiveGatherExternalActorRefs::_scalar_deleting_destructor_
          (FArchiveGatherExternalActorRefs *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SubObjectsState).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubObjectsState).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,enum_FArchiveGatherExternalActorRefs::EReferenceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,enum_FArchiveGatherExternalActorRefs::EReferenceState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SubObjectsState);
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473807d0

void * __thiscall
`AActor::CreateComponentFromTemplateData'::__l2::FBlueprintComponentInstanceDataLoader::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FArchive::~FArchive(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380810

void * __thiscall
IRepChangedPropertyTracker::_scalar_deleting_destructor_
          (IRepChangedPropertyTracker *this,uint param_1)

{
  *this = (IRepChangedPropertyTracker)&___7IRepChangedPropertyTracker__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380850

void * __thiscall UActorFolder::_scalar_deleting_destructor_(UActorFolder *this,uint param_1)

{
  *(undefined ***)this = &___7UActorFolder__6B_;
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

// `scalar_deleting_destructor' @ 1473808b0

void * __thiscall
UActorPartitionSubsystem::_scalar_deleting_destructor_(UActorPartitionSubsystem *this,uint param_1)

{
  *(undefined ***)this = &___7UActorPartitionSubsystem__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147380910

void * __thiscall
UAvoidanceManager::_scalar_deleting_destructor_(UAvoidanceManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  pFVar1 = (this->DebugUIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllCones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewKeyPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AvoidanceObjects).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AvoidanceObjects).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AvoidanceObjects);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0xf8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473809f0

void * __thiscall
UNavCollisionBase::_scalar_deleting_destructor_(UNavCollisionBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNavCollisionBase__6B_;
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&(this->ConvexCollision).IndexBuffer);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->ConvexCollision);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&(this->TriMeshCollision).IndexBuffer);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->TriMeshCollision);
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

// `scalar_deleting_destructor' @ 147380a90

void * __thiscall
UNavigationDataChunk::_scalar_deleting_destructor_(UNavigationDataChunk *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNavigationDataChunk__6B_;
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

// `scalar_deleting_destructor' @ 147380af0

void * __thiscall
UNavigationSystemConfig::_scalar_deleting_destructor_(UNavigationSystemConfig *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNavigationSystemConfig__6B_;
  pvVar1 = *(void **)&(this->NavigationSystemClass).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
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

// `scalar_deleting_destructor' @ 147380b60

void * __thiscall
UNullNavSysConfig::_scalar_deleting_destructor_(UNullNavSysConfig *this,uint param_1)

{
  *(undefined ***)this = &___7UNavigationSystemConfig__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
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

// AvoidCones @ 147384490

TVector<double> * __cdecl
AvoidCones(TVector<double> *__return_storage_ptr__,
          TArray<FVelocityAvoidanceCone,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  TVector<double> *pTVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double local_e8 [2];
  TVector<double>_u_0 local_d8 [8];
  
  local_d8[0]._0_4_ = *(undefined4 *)&param_3->field0_0x0;
  local_d8[0]._4_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
  local_d8[0]._8_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  local_d8[0]._12_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  uVar27 = 0;
  local_d8[0]._16_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  uVar30 = (undefined4)local_d8[0]._16_8_;
  uVar31 = (undefined4)((ulonglong)local_d8[0]._16_8_ >> 0x20);
  uVar26 = uVar27;
  uVar29 = uVar27;
  uVar32 = local_d8[0]._8_4_;
  uVar33 = local_d8[0]._12_4_;
  uVar34 = local_d8[0]._0_4_;
  uVar35 = local_d8[0]._4_4_;
  if (0 < param_4) {
    do {
      uVar24 = (uint)uVar26;
      uVar20 = 0;
      if ((int)uVar24 < param_1->ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar5 = (code *)swi(3);
          pTVar21 = (TVector<double> *)(*pcVar5)();
          return pTVar21;
        }
        uVar30 = (undefined4)local_d8[0]._s_0.Z;
        uVar31 = (undefined4)((ulonglong)local_d8[0]._16_8_ >> 0x20);
        uVar32 = local_d8[0]._8_4_;
        uVar33 = local_d8[0]._12_4_;
        uVar34 = local_d8[0]._0_4_;
        uVar35 = local_d8[0]._4_4_;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      lVar23 = (longlong)(int)uVar24 * 0x40;
      dVar8 = (*(double *)(pFVar4 + lVar23) * (double)CONCAT44(uVar35,uVar34) +
               *(double *)(pFVar4 + lVar23 + 8) * (double)CONCAT44(uVar33,uVar32) +
              *(double *)(pFVar4 + lVar23 + 0x10) * (double)CONCAT44(uVar31,uVar30)) -
              *(double *)(pFVar4 + lVar23 + 0x18);
      dVar7 = (*(double *)(pFVar4 + lVar23 + 0x20) * (double)CONCAT44(uVar35,uVar34) +
               *(double *)(pFVar4 + lVar23 + 0x28) * (double)CONCAT44(uVar33,uVar32) +
              *(double *)(pFVar4 + lVar23 + 0x30) * (double)CONCAT44(uVar31,uVar30)) -
              *(double *)(pFVar4 + lVar23 + 0x38);
      iVar28 = (int)uVar29;
      if ((0.0 < dVar8) && (0.0 < dVar7)) {
        dVar1 = (param_2->field0_0x0)._s_0.Z;
        dVar2 = (param_2->field0_0x0)._s_0.X;
        dVar9 = ((param_2->field0_0x0)._s_0.Y * *(double *)(pFVar4 + lVar23 + 8) +
                 (param_2->field0_0x0)._s_0.X * *(double *)(pFVar4 + lVar23) +
                (param_2->field0_0x0)._s_0.Z * *(double *)(pFVar4 + lVar23 + 0x10)) -
                *(double *)(pFVar4 + lVar23 + 0x18);
        dVar3 = (param_2->field0_0x0)._s_0.Y;
        dVar6 = (dVar3 * *(double *)(pFVar4 + lVar23 + 0x28) +
                 dVar2 * *(double *)(pFVar4 + lVar23 + 0x20) +
                dVar1 * *(double *)(pFVar4 + lVar23 + 0x30)) - *(double *)(pFVar4 + lVar23 + 0x38);
        if (0.0 < dVar9) {
          if (0.0 < dVar6) {
            dVar7 = (param_2->field0_0x0)._s_0.Y;
            (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
            (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
            (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
            return __return_storage_ptr__;
          }
          uVar27 = 1;
          local_e8[1] = dVar6 / (dVar6 - dVar7);
        }
        else {
          local_e8[0] = dVar9 / (dVar9 - dVar8);
          if (0.0 < dVar6) goto LAB_147384713;
          local_e8[1] = dVar6 / (dVar6 - dVar7);
          uVar27 = (ulonglong)(local_e8[0] < local_e8[1]);
        }
LAB_147384713:
        iVar25 = param_4 + -1;
        dVar7 = local_e8[uVar27];
        dVar8 = __real_3ff0000000000000 - dVar7;
        local_d8[0]._0_8_ = dVar8 * dVar2 + dVar7 * (double)CONCAT44(uVar35,uVar34);
        local_d8[0]._8_8_ = dVar8 * dVar3 + dVar7 * (double)CONCAT44(uVar33,uVar32);
        local_d8[0]._16_8_ = dVar8 * dVar1 + dVar7 * (double)CONCAT44(uVar31,uVar30);
        if (((iVar28 < 0) || (iVar25 < 0)) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0xce6,L""), bVar19)) {
          pcVar5 = (code *)swi(3);
          pTVar21 = (TVector<double> *)(*pcVar5)();
          return pTVar21;
        }
        if (((param_1->ArrayNum <= iVar28) || (param_1->ArrayNum <= iVar25)) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0xce7,L""), bVar19)) {
          pcVar5 = (code *)swi(3);
          pTVar21 = (TVector<double> *)(*pcVar5)();
          return pTVar21;
        }
        if (iVar28 != iVar25) {
          pFVar4 = (param_1->AllocatorInstance).Data;
          lVar23 = (longlong)param_4 * 0x40;
          pFVar22 = pFVar4 + (longlong)iVar28 * 0x40;
          uVar10 = *(undefined8 *)(pFVar4 + lVar23 + -0x40 + 8);
          uVar11 = *(undefined8 *)pFVar22;
          uVar12 = *(undefined8 *)(pFVar22 + 8);
          uVar13 = *(undefined8 *)(pFVar22 + 0x10);
          uVar14 = *(undefined8 *)(pFVar22 + 0x18);
          uVar15 = *(undefined8 *)(pFVar22 + 0x20);
          uVar16 = *(undefined8 *)(pFVar22 + 0x28);
          uVar17 = *(undefined8 *)(pFVar22 + 0x30);
          uVar18 = *(undefined8 *)(pFVar22 + 0x38);
          *(undefined8 *)pFVar22 = *(undefined8 *)(pFVar4 + lVar23 + -0x40);
          *(undefined8 *)(pFVar22 + 8) = uVar10;
          uVar10 = *(undefined8 *)(pFVar4 + lVar23 + -0x30 + 8);
          *(undefined8 *)(pFVar22 + 0x10) = *(undefined8 *)(pFVar4 + lVar23 + -0x30);
          *(undefined8 *)(pFVar22 + 0x18) = uVar10;
          uVar10 = *(undefined8 *)(pFVar4 + lVar23 + -0x20 + 8);
          *(undefined8 *)(pFVar22 + 0x20) = *(undefined8 *)(pFVar4 + lVar23 + -0x20);
          *(undefined8 *)(pFVar22 + 0x28) = uVar10;
          uVar10 = *(undefined8 *)(pFVar4 + lVar23 + -0x10 + 8);
          *(undefined8 *)(pFVar22 + 0x30) = *(undefined8 *)(pFVar4 + lVar23 + -0x10);
          *(undefined8 *)(pFVar22 + 0x38) = uVar10;
          *(undefined8 *)(pFVar4 + lVar23 + -0x40) = uVar11;
          *(undefined8 *)(pFVar4 + lVar23 + -0x40 + 8) = uVar12;
          *(undefined8 *)(pFVar4 + lVar23 + -0x30) = uVar13;
          *(undefined8 *)(pFVar4 + lVar23 + -0x30 + 8) = uVar14;
          *(undefined8 *)(pFVar4 + lVar23 + -0x20) = uVar15;
          *(undefined8 *)(pFVar4 + lVar23 + -0x20 + 8) = uVar16;
          *(undefined8 *)(pFVar4 + lVar23 + -0x10) = uVar17;
          *(undefined8 *)(pFVar4 + lVar23 + -0x10 + 8) = uVar18;
        }
        AvoidCones(__return_storage_ptr__,param_1,param_2,(TVector<double> *)&local_d8[0]._s_0,
                   iVar25);
        return __return_storage_ptr__;
      }
      uVar26 = (ulonglong)(uVar24 + 1);
      uVar29 = (ulonglong)(iVar28 + 1U);
    } while ((int)(iVar28 + 1U) < param_4);
    uVar30 = (undefined4)local_d8[0]._s_0.Z;
    uVar31 = (undefined4)((ulonglong)local_d8[0]._16_8_ >> 0x20);
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_d8[0]._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = local_d8[0]._4_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_d8[0]._8_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_d8[0]._12_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar31,uVar30);
  return __return_storage_ptr__;
}

// AvoidsNavEdges @ 147384920

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
AvoidsNavEdges(TVector<double> *param_1,TVector<double> *param_2,
              TArray<FNavEdgeSegment,TSizedDefaultAllocator<32>_> *param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_bool___cdecl_AvoidsNavEdges(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,TArray<FNavEdgeSegment,TSizedDefaultAllocator<32>_>_const_&,float)_::_2_::FStat_STAT_AIAvoidanceEdgeAvoid>
  FVar16;
  uint uVar17;
  int iVar18;
  FNameEntryId FVar19;
  FName FVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  FColor_u_0 local_res18 [2];
  FName local_108;
  uint local_100;
  uint uStack_fc;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      if (StatPtr_STAT_AIAvoidanceEdgeAvoid ==
          (FThreadSafeStaticStat<_bool___cdecl_AvoidsNavEdges(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,TArray<FNavEdgeSegment,TSizedDefaultAllocator<32>_>_const_&,float)_::_2_::FStat_STAT_AIAvoidanceEdgeAvoid>
           )0x0) {
        pFVar15 = FName::FName(&local_f8,"STAT_AIAvoidanceEdgeAvoid");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AIAvoidanceEdgeAvoid,*pFVar15,
                   L"Avoidance: avoid nav edges","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&_TSS0);
    }
  }
  FVar16 = StatPtr_STAT_AIAvoidanceEdgeAvoid;
  if (StatPtr_STAT_AIAvoidanceEdgeAvoid ==
      (FThreadSafeStaticStat<_bool___cdecl_AvoidsNavEdges(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,TArray<FNavEdgeSegment,TSizedDefaultAllocator<32>_>_const_&,float)_::_2_::FStat_STAT_AIAvoidanceEdgeAvoid>
       )0x0) {
    pFVar15 = FName::FName(&local_f0,"STAT_AIAvoidanceEdgeAvoid");
    FVar16 = (FThreadSafeStaticStat<_bool___cdecl_AvoidsNavEdges(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,TArray<FNavEdgeSegment,TSizedDefaultAllocator<32>_>_const_&,float)_::_2_::FStat_STAT_AIAvoidanceEdgeAvoid>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AIAvoidanceEdgeAvoid,*pFVar15,
                          L"Avoidance: avoid nav edges","STATGROUP_AI","STATCAT_Advanced",L"AI",true
                          ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar16;
  bVar6 = false;
  bVar8 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar17 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar19.Value;
        local_108.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\AvoidanceManager.cpp"
                   ,0x147);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100 = FVar19.Value;
      uStack_fc = uVar17;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar7 = true;
      goto LAB_147384aac;
    }
  }
  bVar7 = false;
  FVar20 = local_e8;
LAB_147384aac:
  dVar11 = __real_3f1a36e2e0000000;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar9 = __real_3ff0000000000000;
  iVar18 = param_3->ArrayNum;
  uVar23 = 0;
  if (0 < iVar18) {
    lVar21 = 0;
    do {
      uVar22 = ~uVar23 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar23 < iVar18) {
        uVar14 = uVar22;
      }
      if (uVar14 == 0) {
        bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar3 = (code *)swi(3);
          uVar13 = (*pcVar3)();
          return (bool)uVar13;
        }
      }
      pFVar1 = (param_3->AllocatorInstance).Data;
      uVar14 = 0;
      if ((int)uVar23 < param_3->ArrayNum) {
        uVar14 = uVar22;
      }
      if (uVar14 == 0) {
        bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar3 = (code *)swi(3);
          uVar13 = (*pcVar3)();
          return (bool)uVar13;
        }
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      dVar4 = *(double *)(pFVar1 + lVar21 + 0x18) - *(double *)(pFVar2 + lVar21);
      dVar5 = *(double *)(pFVar1 + lVar21 + 0x20) - *(double *)(pFVar2 + lVar21 + 8);
      dVar24 = (param_2->field0_0x0)._s_0.X;
      dVar28 = (param_2->field0_0x0)._s_0.Y;
      uVar14 = 0;
      if ((int)uVar23 < param_3->ArrayNum) {
        uVar14 = uVar22;
      }
      if (uVar14 == 0) {
        bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar3 = (code *)swi(3);
          uVar13 = (*pcVar3)();
          return (bool)uVar13;
        }
      }
      dVar26 = dVar4 * dVar28 - dVar5 * dVar24;
      if (dVar11 <= (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar10,
                                     SUB84(dVar26,0) & uVar17)) {
        pFVar1 = (param_3->AllocatorInstance).Data;
        dVar27 = *(double *)(pFVar1 + lVar21 + 8) - (param_1->field0_0x0)._s_0.Y;
        dVar25 = *(double *)(pFVar1 + lVar21) - (param_1->field0_0x0)._s_0.X;
        dVar24 = (dVar27 * dVar24 - dVar25 * dVar28) * (dVar9 / dVar26);
        dVar28 = (dVar27 * dVar4 - dVar25 * dVar5) * (dVar9 / dVar26);
        if ((((0.0 <= dVar24) && (dVar24 <= dVar9)) && (0.0 <= dVar28)) && (dVar28 <= dVar9)) {
          uVar14 = 0;
          if ((int)uVar23 < param_3->ArrayNum) {
            uVar14 = uVar22;
          }
          if (uVar14 == 0) {
            bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              uVar13 = (*pcVar3)();
              return (bool)uVar13;
            }
          }
          pFVar1 = (param_3->AllocatorInstance).Data;
          uVar14 = 0;
          if ((int)uVar23 < param_3->ArrayNum) {
            uVar14 = uVar22;
          }
          if (uVar14 == 0) {
            bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              uVar13 = (*pcVar3)();
              return (bool)uVar13;
            }
          }
          pFVar2 = (param_3->AllocatorInstance).Data;
          dVar24 = (param_1->field0_0x0)._s_0.Z -
                   ((*(double *)(pFVar1 + lVar21 + 0x28) - *(double *)(pFVar2 + lVar21 + 0x10)) *
                    dVar24 + *(double *)(pFVar2 + lVar21 + 0x10));
          if ((double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar10,SUB84(dVar24,0) & uVar17)
              <= (double)param_4) {
            bVar12 = false;
            goto LAB_147384dc2;
          }
        }
      }
      iVar18 = param_3->ArrayNum;
      uVar23 = uVar23 + 1;
      lVar21 = lVar21 + 0x30;
    } while ((int)uVar23 < iVar18);
  }
  bVar12 = true;
LAB_147384dc2:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return bVar12;
}

// CalcComponentAttachDepth @ 147385730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __cdecl
CalcComponentAttachDepth
          (UActorComponent *param_1,
          TMap<UActorComponent_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>_>
          *param_2)

{
  longlong lVar1;
  UActorComponent *pUVar2;
  uint uVar3;
  UClass *pUVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  UActorComponent *local_res8;
  int local_res10 [4];
  UActorComponent **local_18;
  int *local_10;
  
  local_res10[0] = 0;
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar6 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &param_2->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&param_2->field_0x48 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)param_2;
      do {
        if (*(UActorComponent **)(lVar1 + (longlong)iVar7 * 0x18) == param_1) {
          if (((iVar7 != -1) && (lVar1 = lVar1 + (longlong)iVar7 * 0x18, lVar1 != 0)) &&
             (piVar5 = (int *)(lVar1 + 8), piVar5 != (int *)0x0)) {
            return *piVar5;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  local_res8 = param_1;
  if (param_1 != (UActorComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar7 = (int)pUVar4->_padding_;
    if (((iVar7 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
         &pUVar4->_padding_)) &&
       ((pUVar2 = (UActorComponent *)param_1[1]._padding_, pUVar2 != (UActorComponent *)0x0 &&
        (pUVar2->OwnerPrivate == local_res8->OwnerPrivate)))) {
      local_res10[0] = CalcComponentAttachDepth(pUVar2,param_2);
      local_res10[0] = local_res10[0] + 1;
    }
  }
  local_18 = &local_res8;
  local_10 = local_res10;
  TSet<TTuple<UActorComponent_*,int>,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UActorComponent_*_const_&,int_const_&>_>
            ((TSet<TTuple<UActorComponent_*,int>,TDefaultMapHashableKeyFuncs<UActorComponent_*,int,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<UActorComponent_*_const_&,int_const_&> *)(local_res10 + 2)
             ,(bool *)&local_18);
  return local_res10[0];
}

// DispatchOnComponentsCreated @ 14738eff0

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

void __cdecl DispatchOnComponentsCreated(AActor *param_1)

{
  ForElementType<UActorComponent_*> FVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  TEventRef<unsigned_int> TVar8;
  UPackage *pUVar9;
  FWriteBuffer *pFVar10;
  ForElementType<UActorComponent_*> FVar11;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined1 local_10f [7];
  TLogScope<0> local_108;
  TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> local_f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_f8.ArrayMax = 0x18;
  local_f8.AllocatorInstance.SecondaryData = (ForElementType<UActorComponent_*>)0x0;
  local_f8.ArrayNum = 0;
  AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&local_f8,false);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_118 = 0;
    TVar8 = (TEventRef<unsigned_int>)&local_118;
  }
  else {
    local_118 = param_1->_padding_;
    TVar8 = FStringTrace::GetNameRef((FName *)&local_108);
  }
  uVar2 = *(undefined8 *)TVar8;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_118 = 0;
    TVar8 = (TEventRef<unsigned_int>)&local_118;
  }
  else {
    local_118 = *(undefined8 *)(param_1->_padding_ + 0x18);
    TVar8 = FStringTrace::GetNameRef((FName *)&local_108);
  }
  uVar3 = *(undefined8 *)TVar8;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_118 = 0;
    TVar8 = (TEventRef<unsigned_int>)&local_118;
  }
  else {
    pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    local_118 = pUVar9->_padding_;
    TVar8 = FStringTrace::GetNameRef((FName *)&local_108);
  }
  uVar4 = *(undefined8 *)TVar8;
  bVar6 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>(&local_108);
    bVar6 = true;
    *(int *)local_108._0_8_ = (int)uVar2;
    *(int *)(local_108._0_8_ + 4) = (int)uVar3;
    *(int *)(local_108._0_8_ + 8) = (int)uVar4;
    *(undefined8 *)(local_108._8_8_ + 0x28) = *(undefined8 *)(local_108._8_8_ + 0x20);
  }
  iVar7 = local_f8.ArrayNum;
  FVar11 = (ForElementType<UActorComponent_*>)&local_f8;
  if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
    FVar11 = local_f8.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UActorComponent_*>)((longlong)FVar11 + (longlong)local_f8.ArrayNum * 8);
  while( true ) {
    if (local_f8.ArrayNum != iVar7) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_10f);
    }
    if (FVar11 == FVar1) break;
    if ((*(byte *)((longlong)*(longlong **)FVar11 + 0x9b) & 4) == 0) {
      (**(code **)(**(longlong **)FVar11 + 0x4a8))();
    }
    FVar11 = (ForElementType<UActorComponent_*>)((longlong)FVar11 + 8);
  }
  if (bVar6) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar10 = *(FWriteBuffer **)(lVar5 + 0x20);
    if ((int)pFVar10 - *(int *)&pFVar10->Cursor < 1) {
      pFVar10 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar10->Cursor = '\n';
    pFVar10->Cursor = pFVar10->Cursor + 1;
    pFVar10->Committed = pFVar10->Cursor;
  }
  if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<UActorComponent_*>)0x0) {
    FMemory::Free((void *)local_f8.AllocatorInstance.SecondaryData);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISystemBase @ 147390b50

void __cdecl EmptyLinkFunctionForGeneratedCodeAISystemBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActor @ 147390b60

void __cdecl EmptyLinkFunctionForGeneratedCodeActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorFolder @ 147390b70

void __cdecl EmptyLinkFunctionForGeneratedCodeActorFolder(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorPartitionSubsystem @ 147390b80

void __cdecl EmptyLinkFunctionForGeneratedCodeActorPartitionSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAvoidanceManager @ 147390b90

void __cdecl EmptyLinkFunctionForGeneratedCodeAvoidanceManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavCollisionBase @ 147390ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavCollisionBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationDataChunk @ 147390bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationDataChunk(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationSystemBase @ 147390bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationSystemBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationSystemConfig @ 147390bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationSystemConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationTypes @ 147390be0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePartitionActor @ 147390bf0

void __cdecl EmptyLinkFunctionForGeneratedCodePartitionActor(void)

{
  return;
}

// FActorBeginCursorOverSignature_DelegateWrapper @ 147392bb0

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
FActorBeginCursorOverSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2)

{
  AActor *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FActorBeginOverlapSignature_DelegateWrapper @ 147392bd0

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
FActorBeginOverlapSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          AActor *param_3)

{
  AActor *local_18;
  AActor *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FActorBeginTouchOverSignature_DelegateWrapper @ 147392c00

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
FActorBeginTouchOverSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,Type param_2,
          AActor *param_3)

{
  undefined1 local_18 [8];
  AActor *local_10;
  
  local_18[0] = (undefined1)param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_18);
  return;
}

// FActorDestroyedSignature_DelegateWrapper @ 147392c30

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
FActorDestroyedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2)

{
  AActor *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FActorEndCursorOverSignature_DelegateWrapper @ 147392c50

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
FActorEndCursorOverSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2)

{
  AActor *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FActorEndOverlapSignature_DelegateWrapper @ 147392c70

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
FActorEndOverlapSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          AActor *param_3)

{
  AActor *local_18;
  AActor *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FActorEndPlaySignature_DelegateWrapper @ 147392ca0

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
FActorEndPlaySignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          Type param_3)

{
  AActor *local_18;
  undefined1 local_10;
  
  local_10 = (undefined1)param_3;
  local_18 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FActorEndTouchOverSignature_DelegateWrapper @ 147392cd0

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
FActorEndTouchOverSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,Type param_2,
          AActor *param_3)

{
  undefined1 local_18 [8];
  AActor *local_10;
  
  local_18[0] = (undefined1)param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_18);
  return;
}

// FActorHitSignature_DelegateWrapper @ 147392d00

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
FActorHitSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          AActor *param_3,TVector<double> *param_4,FHitResult *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  AActor *local_138;
  AActor *local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110 [33];
  
  memset(local_110,0,0x100);
  local_128 = (param_4->field0_0x0)._s_0.X;
  dStack_120 = (param_4->field0_0x0)._s_0.Y;
  local_118 = (param_4->field0_0x0)._s_0.Z;
  lVar5 = 2;
  puVar6 = local_110;
  do {
    uVar1 = *(undefined8 *)&param_5->Distance;
    uVar2 = *(undefined8 *)&param_5->Location;
    uVar3 = *(undefined8 *)&(param_5->Location).field_0x8;
    *puVar6 = *(undefined8 *)param_5;
    puVar6[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_5->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_5->ImpactPoint;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_5->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_5->ImpactPoint).field_0x10;
    puVar6[4] = uVar1;
    puVar6[5] = uVar4;
    uVar1 = *(undefined8 *)&param_5->Normal;
    uVar4 = *(undefined8 *)&(param_5->Normal).field_0x8;
    puVar6[6] = uVar2;
    puVar6[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_5->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_5->ImpactNormal;
    puVar6[8] = uVar1;
    puVar6[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_5->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_5->ImpactNormal).field_0x10;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_5->TraceStart;
    uVar3 = *(undefined8 *)&(param_5->TraceStart).field_0x8;
    puVar6[0xc] = uVar1;
    puVar6[0xd] = uVar4;
    puVar6[0xe] = uVar2;
    puVar6[0xf] = uVar3;
    lVar5 = lVar5 + -1;
    param_5 = (FHitResult *)&(param_5->TraceStart).field_0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar5 != 0);
  local_138 = param_2;
  local_130 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_138);
  return;
}

// FActorOnClickedSignature_DelegateWrapper @ 147392df0

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
FActorOnClickedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          FKey *param_3)

{
  AActor *local_28;
  FName local_20;
  FKeyDetails *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_20 = param_3->KeyName;
  pTStack_10 = (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
  local_18 = (param_3->KeyDetails).Object;
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// FActorOnInputTouchBeginSignature_DelegateWrapper @ 147392e80

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
FActorOnInputTouchBeginSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,Type param_2,
          AActor *param_3)

{
  undefined1 local_18 [8];
  AActor *local_10;
  
  local_18[0] = (undefined1)param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_18);
  return;
}

// FActorOnInputTouchEndSignature_DelegateWrapper @ 147392eb0

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
FActorOnInputTouchEndSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,Type param_2,
          AActor *param_3)

{
  undefined1 local_18 [8];
  AActor *local_10;
  
  local_18[0] = (undefined1)param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_18);
  return;
}

// FActorOnReleasedSignature_DelegateWrapper @ 147392ee0

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
FActorOnReleasedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          FKey *param_3)

{
  AActor *local_28;
  FName local_20;
  FKeyDetails *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_20 = param_3->KeyName;
  pTStack_10 = (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
  local_18 = (param_3->KeyDetails).Object;
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// FTakeAnyDamageSignature_DelegateWrapper @ 147392f70

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
FTakeAnyDamageSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          float param_3,UDamageType *param_4,AController *param_5,AActor *param_6)

{
  AActor *local_38;
  float local_30;
  UDamageType *local_28;
  AController *local_20;
  AActor *local_18;
  
  local_20 = param_5;
  local_18 = param_6;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_38);
  return;
}

// FTakePointDamageSignature_DelegateWrapper @ 147392fc0

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
FTakePointDamageSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          float param_3,AController *param_4,TVector<double> *param_5,UPrimitiveComponent *param_6,
          FName param_7,TVector<double> *param_8,UDamageType *param_9,AActor *param_10)

{
  AActor *local_78;
  float local_70;
  AController *local_68;
  double local_60;
  double dStack_58;
  double local_50;
  UPrimitiveComponent *local_48;
  FName local_40;
  double local_38;
  double dStack_30;
  double local_28;
  UDamageType *local_20;
  AActor *local_18;
  
  local_60 = (param_5->field0_0x0)._s_0.X;
  dStack_58 = (param_5->field0_0x0)._s_0.Y;
  local_50 = (param_5->field0_0x0)._s_0.Z;
  local_48 = param_6;
  local_40 = param_7;
  local_38 = (param_8->field0_0x0)._s_0.X;
  dStack_30 = (param_8->field0_0x0)._s_0.Y;
  local_28 = (param_8->field0_0x0)._s_0.Z;
  local_20 = param_9;
  local_18 = param_10;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_78);
  return;
}

// FTakeRadialDamageSignature_DelegateWrapper @ 147393060

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
FTakeRadialDamageSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,AActor *param_2,
          float param_3,UDamageType *param_4,TVector<double> *param_5,FHitResult *param_6,
          AController *param_7,AActor *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  AActor *local_158;
  float local_150;
  UDamageType *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined8 local_128 [32];
  AController *local_28;
  AActor *local_20;
  
  memset(local_128,0,0x100);
  lVar6 = 2;
  local_140 = (param_5->field0_0x0)._s_0.X;
  dStack_138 = (param_5->field0_0x0)._s_0.Y;
  local_130 = (param_5->field0_0x0)._s_0.Z;
  puVar5 = local_128;
  do {
    uVar1 = *(undefined8 *)&param_6->Distance;
    uVar2 = *(undefined8 *)&param_6->Location;
    uVar3 = *(undefined8 *)&(param_6->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_6;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_6->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_6->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_6->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_6->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_6->Normal;
    uVar4 = *(undefined8 *)&(param_6->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_6->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_6->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_6->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_6->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_6->TraceStart;
    uVar3 = *(undefined8 *)&(param_6->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar6 = lVar6 + -1;
    param_6 = (FHitResult *)&(param_6->TraceStart).field_0x10;
    puVar5 = puVar5 + 0x10;
  } while (lVar6 != 0);
  local_28 = param_7;
  local_20 = param_8;
  local_158 = param_2;
  local_150 = param_3;
  local_148 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_158);
  return;
}

// FindFirstFreeName @ 1473942d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FName __cdecl FindFirstFreeName(UObject *param_1,FName param_2)

{
  uint uVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  uint uVar7;
  uint uVar8;
  FNameEntryId in_R8D;
  FName FVar9;
  FName FVar10;
  
  *(uint *)param_1 = in_R8D.Value;
  uVar8 = 0;
  *(undefined4 *)&param_1->field_0x4 = 0;
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  pUVar6 = StaticFindObjectFast
                     (pUVar5,(UObject *)param_2,(FName)((ulonglong)in_R8D.Value | 0x6400000000),None
                      ,RF_NoFlags,Borrowed);
  if (pUVar6 == (UObject *)0x0) {
    FVar2.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
    FVar2.Number = *(uint *)&param_1->field_0x4;
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    pUVar6 = StaticFindObjectFast(pUVar5,(UObject *)param_2,FVar2,None,RF_NoFlags,Borrowed);
    while (pUVar6 != (UObject *)0x0) {
      uVar8 = uVar8 + 1;
      *(ulonglong *)param_1 = CONCAT44(uVar8,in_R8D.Value);
      pUVar5 = Z_Construct_UClass_UObject_NoRegister();
      FVar10.Number = uVar8;
      FVar10.ComparisonIndex.Value = in_R8D.Value;
      pUVar6 = StaticFindObjectFast(pUVar5,(UObject *)param_2,FVar10,None,RF_NoFlags,Borrowed);
    }
  }
  else {
    uVar7 = 0x7fffffff;
    do {
      iVar4 = uVar7 - uVar8;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      uVar1 = (iVar4 >> 1) + uVar8;
      pUVar5 = Z_Construct_UClass_UObject_NoRegister();
      FVar9.Number = uVar1;
      FVar9.ComparisonIndex.Value = in_R8D.Value;
      pUVar6 = StaticFindObjectFast(pUVar5,(UObject *)param_2,FVar9,None,RF_NoFlags,Borrowed);
      uVar3 = uVar1 + 1;
      if (pUVar6 == (UObject *)0x0) {
        uVar7 = uVar1;
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
    } while (uVar7 != uVar8);
    *(ulonglong *)param_1 = CONCAT44(uVar8,in_R8D.Value);
  }
  return (FName)param_1;
}

// FixupNativeActorComponents @ 1473954c0

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

USceneComponent * __cdecl FixupNativeActorComponents(AActor *param_1)

{
  TObjectPtr<USceneComponent>_u_0 *pTVar1;
  int iVar2;
  USceneComponent *this;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  USceneComponent *pUVar8;
  UClass *pUVar9;
  TObjectPtr<USceneComponent>_u_0 *pTVar10;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  UClass *local_110;
  UClass *local_108;
  FString local_100;
  TObjectPtr<USceneComponent>_u_0 local_f0 [24];
  TObjectPtr<USceneComponent>_u_0 *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pUVar8 = (param_1->RootComponent).field0_0x0.DebugPtr;
  if (pUVar8 != (USceneComponent *)0x0) {
    return pUVar8;
  }
  pUVar7 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_30 = (TObjectPtr<USceneComponent>_u_0 *)0x0;
  local_28 = 0;
  local_24 = 0x18;
  pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (UClass *)0x0) goto LAB_147395561;
  }
  else {
    pUVar9 = pUVar7;
    if (pUVar5 == (UClass *)0x0) goto LAB_147395561;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar9 = pUVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar9 = pUVar5;
    }
  }
LAB_147395561:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == pUVar7) {
    local_110 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_110,
               (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f0);
  }
  else {
    local_108 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_108,
               (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f0);
  }
  pUVar8 = (USceneComponent *)0x0;
  if (0 < local_28) {
    if (2 < (byte)LogActor._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_100,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogActor);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    iVar2 = local_28;
    pTVar10 = local_f0;
    if (local_30 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
      pTVar10 = local_30;
    }
    pTVar1 = pTVar10 + local_28;
    while( true ) {
      if (local_28 != iVar2) {
        local_118[0] = 0;
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_118);
      }
      pUVar8 = (USceneComponent *)0x0;
      if (pTVar10 == pTVar1) goto LAB_147395735;
      pUVar8 = pTVar10->DebugPtr;
      if (((pUVar8 != (USceneComponent *)0x0) &&
          ((pUVar8->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0)) &&
         (*(char *)((longlong)&pUVar8->_padding_ + 1) == '\0')) break;
      pTVar10 = pTVar10 + 1;
    }
    if ((AActor *)pUVar8->_padding_ == param_1) {
      this = (param_1->RootComponent).field0_0x0.DebugPtr;
      if ((this == (USceneComponent *)0x0) || (this != pUVar8)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        (param_1->RootComponent).field0_0x0.DebugPtr = pUVar8;
        USceneComponent::NotifyIsRootComponentChanged(pUVar8,true);
        if (this != (USceneComponent *)0x0) {
          USceneComponent::NotifyIsRootComponentChanged(this,false);
        }
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4755299056106859325>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Actor.cpp"
                         ,0x14c3,
                         "NewRootComponent == nullptr || NewRootComponent->GetOwner() == this");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (USceneComponent *)(*pcVar3)();
        return pUVar8;
      }
    }
  }
LAB_147395735:
  if (local_30 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
    FMemory::Free(local_30);
  }
  return pUVar8;
}

// GetActorReferences @ 1473975e0

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __cdecl
ActorsReferencesUtils::GetActorReferences
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1,
          EObjectFlags param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res20 [8];
  undefined8 local_58;
  TArray<ActorsReferencesUtils::FActorReference,TSizedDefaultAllocator<32>_> local_50;
  UObject *local_38;
  EObjectFlags EStack_30;
  undefined4 uStack_2c;
  FGetActorReferencesParams local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uStack_2c = CONCAT31(uStack_2c._1_3_,param_3);
  local_28._12_4_ = uStack_2c;
  local_28.RequiredFlags = param_2;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_38 = param_1;
  EStack_30 = param_2;
  local_28.Root = param_1;
  GetActorReferences(&local_50,&local_28);
  iVar4 = local_50.ArrayNum;
  pFVar7 = local_50.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  FVar8.Data = local_50.AllocatorInstance.Data;
  while( true ) {
    if (local_50.ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<ActorsReferencesUtils::FActorReference_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar8.Data == pFVar7) break;
    local_58 = *(undefined8 *)FVar8.Data;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar8.Data = FVar8.Data + 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_58;
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetActorReferences @ 147397750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<ActorsReferencesUtils::FActorReference,TSizedDefaultAllocator<32>_> * __cdecl
ActorsReferencesUtils::GetActorReferences
          (TArray<ActorsReferencesUtils::FActorReference,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,FGetActorReferencesParams *param_1)

{
  bool bVar1;
  EObjectFlags EVar2;
  UObject *pUVar3;
  int iVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  UObject **local_190;
  undefined1 *local_188;
  undefined1 local_178 [32];
  void *local_158;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  FArchiveState local_128;
  UObject *local_98;
  undefined1 *local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  undefined4 local_38;
  EObjectFlags local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar1 = param_1->bRecursive;
  EVar2 = param_1->RequiredFlags;
  pUVar3 = param_1->Root;
  local_178._0_8_ = (FScriptContainerElement *)0x0;
  local_178._8_8_ = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_144 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  local_14c = 0x80;
  local_148 = 0xffffffff;
  FArchiveState::FArchiveState(&local_128);
  local_128._padding_ = (longlong)&___7FArchiveGatherExternalActorRefs__6B_;
  local_90 = local_178;
  local_88.Data = (FScriptContainerElement *)0x0;
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_98 = pUVar3;
  local_34 = EVar2;
  local_30 = bVar1;
  FArchiveState::SetIsPersistent(&local_128,true);
  local_128.ArShouldSkipCompilingAssets = '\x01';
  (**(code **)(local_128._padding_ + 0xd8))(&local_128,CONCAT71(uVar6,1));
  local_128.ArIgnoreOuterRef = '\x01';
  local_190 = &local_98;
  local_128.ArShouldSkipBulkData = '\x01';
  local_128.ArIsObjectReferenceCollector = '\x01';
  local_188 = local_198;
  local_198[0] = 2;
  TSet<TTuple<UObject_*,enum_FArchiveGatherExternalActorRefs::EReferenceState>,TDefaultMapHashableKeyFuncs<UObject_*,enum_FArchiveGatherExternalActorRefs::EReferenceState,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UObject_*_const_&,enum_FArchiveGatherExternalActorRefs::EReferenceState_&&>_>
            (&local_88,
             (TPairInitializer<UObject_*_const_&,FArchiveGatherExternalActorRefs::EReferenceState_&&>
              *)local_194,(bool *)(local_194 + 4));
  (**(code **)(*(longlong *)local_98 + 200))(local_98,&local_128);
  TSet<ActorsReferencesUtils::FActorReference,FArchiveGatherExternalActorRefs::FActorReferenceKeyFuncs,FDefaultSetAllocator>
  ::Array((TSet<ActorsReferencesUtils::FActorReference,FArchiveGatherExternalActorRefs::FActorReferenceKeyFuncs,FDefaultSetAllocator>
           *)local_178,__return_storage_ptr__);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar5 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FArchive::~FArchive((FArchive *)&local_128);
  local_130 = 0;
  if (local_138 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138);
  }
  iVar4 = SUB84(local_178._8_8_,4);
  local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_178,0,(int *)(local_178 + 0xc));
  }
  local_148 = 0xffffffff;
  local_144 = 0;
  local_150 = 0;
  if (0x80 < local_14c) {
    local_14c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),0);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  return __return_storage_ptr__;
}

// GetExternalActorReferences @ 14739b5f0

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __cdecl
ActorsReferencesUtils::GetExternalActorReferences
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res18 [16];
  undefined8 local_58;
  TArray<ActorsReferencesUtils::FActorReference,TSizedDefaultAllocator<32>_> local_50;
  UObject *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  FGetActorReferencesParams local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uStack_2c = CONCAT31(uStack_2c._1_3_,param_2);
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uStack_30 = 0x10000000;
  local_28._12_4_ = uStack_2c;
  local_28.RequiredFlags = RF_HasExternalPackage;
  local_38 = param_1;
  local_28.Root = param_1;
  GetActorReferences(&local_50,&local_28);
  iVar4 = local_50.ArrayNum;
  pFVar7 = local_50.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  FVar8.Data = local_50.AllocatorInstance.Data;
  while( true ) {
    if (local_50.ArrayNum != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<ActorsReferencesUtils::FActorReference_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar8.Data == pFVar7) break;
    local_58 = *(undefined8 *)FVar8.Data;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar8.Data = FVar8.Data + 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_58;
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNetDriver_Internal @ 14739e5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNetDriver * __cdecl GetNetDriver_Internal(UWorld *param_1,FName param_2)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  UNetDriver *pUVar2;
  FName FVar3;
  undefined1 local_res10 [24];
  
  FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar1.Value);
  if (param_2 != FVar3) {
    pUVar2 = UEngine::FindNamedNetDriver(GEngine,param_1,param_2);
    return pUVar2;
  }
  if (param_1 != (UWorld *)0x0) {
    return (param_1->NetDriver).field0_0x0.DebugPtr;
  }
  return (UNetDriver *)0x0;
}

// GetTypeHash @ 1473a16f0

uint __cdecl GetTypeHash(FNavigationDirtyElement *param_1)

{
  FNavigationElement *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pFVar1 = (param_1->NavigationElement).Object;
  uVar4 = (int)(pFVar1->SubElementId >> 0x20) * 0x17 + (int)pFVar1->SubElementId;
  uVar3 = ((pFVar1->OwnerUObject).WeakPtr.ObjectSerialNumber ^
          (pFVar1->OwnerUObject).WeakPtr.ObjectIndex) - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  return (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 1473a17a0

uint __cdecl GetTypeHash(FNavigationElement *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (int)(param_1->SubElementId >> 0x20) * 0x17 + (int)param_1->SubElementId;
  uVar2 = ((param_1->OwnerUObject).WeakPtr.ObjectSerialNumber ^
          (param_1->OwnerUObject).WeakPtr.ObjectIndex) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// IsActorValidToNotify @ 1473a6240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl IsActorValidToNotify(AActor *param_1)

{
  if (((param_1 != (AActor *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) &&
     (-1 < *(int *)(param_1->_padding_ + 0xd4))) {
    return true;
  }
  return false;
}

// IsAngleMatching @ 1473a6270

bool __cdecl IsAngleMatching(double param_1)

{
  if ((__real_3ff0000000000000 <= param_1) && (param_1 <= __real_4056400000000000)) {
    return false;
  }
  return true;
}

// IsBlueprintAddedContainer @ 1473a6340

bool __cdecl IsBlueprintAddedContainer(FProperty *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  UObject *this;
  
  uVar2 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if ((((uVar2 >> 0x15 & 1) == 0) && ((uVar2 >> 0x2f & 1) == 0)) && ((uVar2 >> 0x2e & 1) == 0)) {
    return false;
  }
  uVar2 = param_1->_padding_;
  if ((uVar2 & 1) != 0) {
    if (((UObject *)(uVar2 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending)) {
      UE::GC::MarkAsReachable((UObject *)(uVar2 & 0xfffffffffffffffe));
    }
    if ((uVar2 & 1) != 0) goto LAB_1473a63c0;
  }
  do {
    do {
      if ((uVar2 & 0xfffffffffffffffe) == 0) goto LAB_1473a63c0;
      uVar2 = *(ulonglong *)(uVar2 + 0x10);
    } while ((uVar2 & 1) == 0);
    if (((UObject *)(uVar2 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar2 & 0xfffffffffffffffe));
    }
  } while ((uVar2 & 1) == 0);
LAB_1473a63c0:
  this = (UObject *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) == 0) {
    this = (UObject *)0x0;
  }
  bVar1 = UObject::IsInBlueprint(this);
  return bVar1;
}

// IsMetaAreaClass @ 1473a6d00

bool __cdecl IsMetaAreaClass(UClass *param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  UClass *pUVar8;
  
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar2 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar8 = Z_Construct_UClass_UNavAreaBase_NoRegister();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar8->_padding_)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1469,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar2 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    cVar7 = (**(code **)(*(longlong *)pUVar2 + 0x2b8))();
    if (cVar7 != '\0') {
      return true;
    }
  }
  return false;
}

// LexToString @ 1473a8d10

FString * __cdecl LexToString(FString *__return_storage_ptr__,FNavigationElement *param_1)

{
  FNavigationElement::GetName(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// LexToString @ 1473a8d40

FString * __cdecl LexToString(FString *__return_storage_ptr__,FNavigationElementHandle *param_1)

{
  ulong64 uVar1;
  UObject *pUVar2;
  FName local_res10 [3];
  FString local_18;
  
  uVar1 = param_1->SubElementId;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (uVar1 == 0xffffffffffffffff) {
    if (pUVar2 == (UObject *)0x0) {
      FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res10[0].Number = *(uint *)&pUVar2->field_0x1c;
      FName::ToString(local_res10,&local_18);
    }
    FString::PrintfImpl(__return_storage_ptr__,L"%s");
  }
  else {
    if (pUVar2 == (UObject *)0x0) {
      FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res10[0].Number = *(uint *)&pUVar2->field_0x1c;
      FName::ToString(local_res10,&local_18);
    }
    FString::PrintfImpl(__return_storage_ptr__,L"%s - %llu");
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LexToString @ 1473a8e30

FString * __cdecl LexToString(FString *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (param_1 == Apply) {
    FString::FString(__return_storage_ptr__,L"Apply");
    return __return_storage_ptr__;
  }
  if (param_1 == Replace) {
    FString::FString(__return_storage_ptr__,L"Replace");
    return __return_storage_ptr__;
  }
  if (param_1 == ApplyInLowPass) {
    FString::FString(__return_storage_ptr__,L"ApplyInLowPass");
    return __return_storage_ptr__;
  }
  if (param_1 != ReplaceInLowPass) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                       ,0x140,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,L"ReplaceInLowPass");
  return __return_storage_ptr__;
}

// LexToString @ 1473a8ef0

FString * __cdecl LexToString(FString *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (param_1 == Unknown) {
    FString::FString(__return_storage_ptr__,L"Unknown");
    return __return_storage_ptr__;
  }
  if (param_1 == Cylinder) {
    FString::FString(__return_storage_ptr__,L"Cylinder");
    return __return_storage_ptr__;
  }
  if (param_1 == Box) {
    FString::FString(__return_storage_ptr__,L"Box");
    return __return_storage_ptr__;
  }
  if (param_1 != Convex) {
    if (param_1 == InstancedConvex) {
      FString::FString(__return_storage_ptr__,L"InstancedConvex");
      return __return_storage_ptr__;
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                       ,0x132,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,L"Convex");
  return __return_storage_ptr__;
}

// MarkOwnerRelevantComponentsDirty @ 1473a98f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl MarkOwnerRelevantComponentsDirty(AActor *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  UActorComponent *this;
  AActor *pAVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar10;
  UClass *pUVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar10 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                      (&param_1->OwnedComponents);
  iVar3 = *(int *)&(pTVar10->Elements).field_0x28;
  iVar15 = 0;
  iVar17 = 0;
  uVar8 = 1;
  puVar1 = &(pTVar10->Elements).field_0x10;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(pTVar10->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 0x20;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1473a999c;
      uVar13 = puVar18[iVar15];
    }
    uVar8 = ~(uVar13 - 1) & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    iVar9 = local_res10 + -1 + iVar17;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_1473a999c:
  uVar13 = *(uint *)&(pTVar10->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar15);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar17;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(pTVar10->Elements).field_0x8 -
                       *(int *)&(pTVar10->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(pTVar10->Elements).field_0x28;
  if (uVar13 != uVar8) {
    puVar4 = *(undefined1 **)&(pTVar10->Elements).field_0x20;
    puVar16 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar16 = puVar4;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      iVar15 = iVar15 + 1;
      uVar12 = uVar12 + 0x20;
      uVar13 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar15) goto LAB_1473a9aa0;
      uVar13 = *(uint *)(puVar16 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    uVar13 = local_res18 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_1473a9aa0:
  while( true ) {
    if (*(int *)&(pTVar10->Elements).field_0x8 - *(int *)&(pTVar10->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this = *(UActorComponent **)
            (*(longlong *)&pTVar10->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (this != (UActorComponent *)0x0) {
      pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar3 = (int)pUVar11->_padding_;
      if ((((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar11->_padding_)) && (this->bRegistered != 0)) &&
         ((this[3].PrimaryComponentTick._padding_ & 0x30000000000) != 0)) {
        UActorComponent::MarkRenderStateDirty(this);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  uVar8 = 0;
  if (0 < (param_1->Children).ArrayNum) {
    lVar14 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar8 < (param_1->Children).ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pAVar5 = *(AActor **)((param_1->Children).AllocatorInstance.Data + lVar14);
      if ((pAVar5 != (AActor *)0x0) && (((uint)pAVar5->_padding_ >> 0x1e & 1) == 0)) {
        MarkOwnerRelevantComponentsDirty(pAVar5);
      }
      uVar8 = uVar8 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar8 < (param_1->Children).ArrayNum);
  }
  return;
}

// ToString @ 1473ba320

wchar_t * __cdecl FunctionCallspace::ToString(Type param_1)

{
  if (param_1 == Absorbed) {
    return L"Absorbed";
  }
  if (param_1 != Remote) {
    if (param_1 != Local) {
      return L"";
    }
    return L"Local";
  }
  return L"Remote";
}

// Z_Construct_UClass_APartitionActor_NoRegister @ 1473bd9f0

UClass * __cdecl Z_Construct_UClass_APartitionActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APartitionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PartitionActor",
               &Z_Registration_Info_UClass_APartitionActor.InnerSingleton,
               APartitionActor::StaticRegisterNativesAPartitionActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<APartitionActor>,InternalVTableHelperCtorCaller<APartitionActor>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APartitionActor.InnerSingleton;
}

// Z_Construct_UClass_UAISystemBase_NoRegister @ 1473bdab0

UClass * __cdecl Z_Construct_UClass_UAISystemBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISystemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AISystemBase",
               &Z_Registration_Info_UClass_UAISystemBase.InnerSingleton,
               UAISystemBase::StaticRegisterNativesUAISystemBase,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UAISystemBase>,
               InternalVTableHelperCtorCaller<UAISystemBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISystemBase.InnerSingleton;
}

// Z_Construct_UClass_UActorFolder_NoRegister @ 1473bdb60

UClass * __cdecl Z_Construct_UClass_UActorFolder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorFolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorFolder",
               &Z_Registration_Info_UClass_UActorFolder.InnerSingleton,
               UActorFolder::StaticRegisterNativesUActorFolder,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UActorFolder>,
               InternalVTableHelperCtorCaller<UActorFolder>,local_res8,UObject::StaticClass,
               ULevel::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorFolder.InnerSingleton;
}

// Z_Construct_UClass_UActorPartitionSubsystem_NoRegister @ 1473bdc20

UClass * __cdecl Z_Construct_UClass_UActorPartitionSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorPartitionSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorPartitionSubsystem",
               &Z_Registration_Info_UClass_UActorPartitionSubsystem.InnerSingleton,
               UActorPartitionSubsystem::StaticRegisterNativesUActorPartitionSubsystem,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorPartitionSubsystem>,
               InternalVTableHelperCtorCaller<UActorPartitionSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorPartitionSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UAvoidanceManager_NoRegister @ 1473bdce0

UClass * __cdecl Z_Construct_UClass_UAvoidanceManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAvoidanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AvoidanceManager",
               &Z_Registration_Info_UClass_UAvoidanceManager.InnerSingleton,
               UAvoidanceManager::StaticRegisterNativesUAvoidanceManager,0xf8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAvoidanceManager>,
               InternalVTableHelperCtorCaller<UAvoidanceManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAvoidanceManager.InnerSingleton;
}

// Z_Construct_UClass_UNavCollisionBase_NoRegister @ 1473bdd90

UClass * __cdecl Z_Construct_UClass_UNavCollisionBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavCollisionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavCollisionBase",
               &Z_Registration_Info_UClass_UNavCollisionBase.InnerSingleton,
               UNavCollisionBase::StaticRegisterNativesUNavCollisionBase,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavCollisionBase>,
               InternalVTableHelperCtorCaller<UNavCollisionBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavCollisionBase.InnerSingleton;
}

// Z_Construct_UClass_UNavigationDataChunk_NoRegister @ 1473bde40

UClass * __cdecl Z_Construct_UClass_UNavigationDataChunk_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationDataChunk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationDataChunk",
               &Z_Registration_Info_UClass_UNavigationDataChunk.InnerSingleton,
               UNavigationDataChunk::StaticRegisterNativesUNavigationDataChunk,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationDataChunk>,
               InternalVTableHelperCtorCaller<UNavigationDataChunk>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationDataChunk.InnerSingleton;
}

// Z_Construct_UClass_UNavigationSystemBase_NoRegister @ 1473bdef0

UClass * __cdecl Z_Construct_UClass_UNavigationSystemBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationSystemBase",
               &Z_Registration_Info_UClass_UNavigationSystemBase.InnerSingleton,
               UNavigationSystemBase::StaticRegisterNativesUNavigationSystemBase,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UNavigationSystemBase>,
               InternalVTableHelperCtorCaller<UNavigationSystemBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemBase.InnerSingleton;
}

// Z_Construct_UClass_UNavigationSystemConfig_NoRegister @ 1473bdfa0

UClass * __cdecl Z_Construct_UClass_UNavigationSystemConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationSystemConfig",
               &Z_Registration_Info_UClass_UNavigationSystemConfig.InnerSingleton,
               UNavigationSystemConfig::StaticRegisterNativesUNavigationSystemConfig,0x58,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationSystemConfig>,
               InternalVTableHelperCtorCaller<UNavigationSystemConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemConfig.InnerSingleton;
}

// Z_Construct_UClass_UNullNavSysConfig_NoRegister @ 1473be050

UClass * __cdecl Z_Construct_UClass_UNullNavSysConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNullNavSysConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NullNavSysConfig",
               &Z_Registration_Info_UClass_UNullNavSysConfig.InnerSingleton,
               UNullNavSysConfig::StaticRegisterNativesUNullNavSysConfig,0x58,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNullNavSysConfig>,
               InternalVTableHelperCtorCaller<UNullNavSysConfig>,local_res8,
               UNavigationSystemConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNullNavSysConfig.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ELevelInstanceFlags @ 1473be110

UEnum * __cdecl Z_Construct_UEnum_Engine_ELevelInstanceFlags(void)

{
  if (Z_Registration_Info_UEnum_ELevelInstanceFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELevelInstanceFlags.InnerSingleton,
               &Z_Construct_UEnum_Engine_ELevelInstanceFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELevelInstanceFlags.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ELevelInstanceType @ 1473be150

UEnum * __cdecl Z_Construct_UEnum_Engine_ELevelInstanceType(void)

{
  if (Z_Registration_Info_UEnum_ELevelInstanceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELevelInstanceType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ELevelInstanceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELevelInstanceType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig @ 1473be190

UEnum * __cdecl Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig(void)

{
  if (Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENavPathEvent @ 1473be1d0

UEnum * __cdecl Z_Construct_UEnum_Engine_ENavPathEvent(void)

{
  if (Z_Registration_Info_UEnum_ENavPathEvent.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENavPathEvent.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENavPathEvent_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENavPathEvent.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENavigationOptionFlag @ 1473be210

UEnum * __cdecl Z_Construct_UEnum_Engine_ENavigationOptionFlag(void)

{
  if (Z_Registration_Info_UEnum_ENavigationOptionFlag.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENavigationOptionFlag.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENavigationOptionFlag.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENavigationQueryResult @ 1473be250

UEnum * __cdecl Z_Construct_UEnum_Engine_ENavigationQueryResult(void)

{
  if (Z_Registration_Info_UEnum_ENavigationQueryResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENavigationQueryResult.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENavigationQueryResult.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod @ 1473be290

UEnum * __cdecl Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod(void)

{
  if (Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESpawnActorScaleMethod @ 1473be2d0

UEnum * __cdecl Z_Construct_UEnum_Engine_ESpawnActorScaleMethod(void)

{
  if (Z_Registration_Info_UEnum_ESpawnActorScaleMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpawnActorScaleMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESpawnActorScaleMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpawnActorScaleMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_FNavigationSystemRunMode @ 1473be310

UEnum * __cdecl Z_Construct_UEnum_Engine_FNavigationSystemRunMode(void)

{
  if (Z_Registration_Info_UEnum_FNavigationSystemRunMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_FNavigationSystemRunMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_FNavigationSystemRunMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNavAvoidanceData @ 1473be350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavAvoidanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavAvoidanceData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavAvoidanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavAvoidanceData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavAvoidanceData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavDataConfig @ 1473be3d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavDataConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavDataConfig.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavDataConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavDataConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavDataConfig.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavDataConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavLinkAuxiliaryId @ 1473be450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavLinkAuxiliaryId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkAuxiliaryId.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavLinkAuxiliaryId.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavLinkAuxiliaryId.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNavLinkAuxiliaryId.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavLinkId @ 1473be4d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavLinkId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkId.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavLinkId.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavLinkId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavLinkId.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavLinkId.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavMovementProperties @ 1473be550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavMovementProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavMovementProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavMovementProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavMovementProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavMovementProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavMovementProperties.InnerSingleton;
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

// ConstructNewInstanceDelegate'' @ 1503e5c10

void __cdecl `dynamic_atexit_destructor_for_'UNavCollisionBase::ConstructNewInstanceDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UNavCollisionBase::ConstructNewInstanceDelegate,(FWriteAccessScope *)&local_28);
  if ((UNavCollisionBase::ConstructNewInstanceDelegate._16_4_ != 0) &&
     (UNavCollisionBase::ConstructNewInstanceDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)UNavCollisionBase::ConstructNewInstanceDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UNavCollisionBase::ConstructNewInstanceDelegate.field_0x8,0,0,
               0x10);
    UNavCollisionBase::ConstructNewInstanceDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (UNavCollisionBase::ConstructNewInstanceDelegate._8_8_ != 0) {
    FMemory::Free((void *)UNavCollisionBase::ConstructNewInstanceDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UNavCollisionBase::ConstructNewInstanceDelegate);
  return;
}

// DefaultProperties'' @ 1503e5cb0

void __cdecl `dynamic_atexit_destructor_for_'FNavAgentProperties::DefaultProperties__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FNavAgentProperties::DefaultProperties.PreferredNavData._16_8_;
  if (FNavAgentProperties::DefaultProperties.PreferredNavData._16_8_ == 0) {
    return;
  }
  if (FNavAgentProperties::DefaultProperties.PreferredNavData._16_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// MakeNoiseDelegate'' @ 1503e5cd0

void __cdecl `dynamic_atexit_destructor_for_'AActor::MakeNoiseDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&AActor::MakeNoiseDelegate,
             (FWriteAccessScope *)&local_28);
  if ((AActor::MakeNoiseDelegate._16_4_ != 0) && (AActor::MakeNoiseDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)AActor::MakeNoiseDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&AActor::MakeNoiseDelegate.field_0x8,0,0,0x10);
    AActor::MakeNoiseDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (AActor::MakeNoiseDelegate._8_8_ != 0) {
    FMemory::Free((void *)AActor::MakeNoiseDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&AActor::MakeNoiseDelegate);
  return;
}

// ProcessEventDelegate'' @ 1503e5d70

void __cdecl `dynamic_atexit_destructor_for_'AActor::ProcessEventDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&AActor::ProcessEventDelegate
             ,(FWriteAccessScope *)&local_28);
  if ((AActor::ProcessEventDelegate._16_4_ != 0) && (AActor::ProcessEventDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)AActor::ProcessEventDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&AActor::ProcessEventDelegate.field_0x8,0,0,0x10);
    AActor::ProcessEventDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (AActor::ProcessEventDelegate._8_8_ != 0) {
    FMemory::Free((void *)AActor::ProcessEventDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&AActor::ProcessEventDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'CSVActorClassNameToCountMap'' @ 1503e5e10

void __cdecl _dynamic_atexit_destructor_for__CSVActorClassNameToCountMap__(void)

{
  CSVActorClassNameToCountMap._72_4_ = 0;
  if (CSVActorClassNameToCountMap._64_8_ != 0) {
    FMemory::Free((void *)CSVActorClassNameToCountMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&CSVActorClassNameToCountMap);
  return;
}

// `dynamic_atexit_destructor_for_'CSVActorClassNameToCountMapLock'' @ 1503e5e50

void __cdecl _dynamic_atexit_destructor_for__CSVActorClassNameToCountMapLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503e5e57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDebugRepMovement'' @ 1503e5e70

void __cdecl _dynamic_atexit_destructor_for__CVarDrawDebugRepMovement__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDebugRepMovement);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNavMeshResolutions'' @ 1503e5e90

void __cdecl
UE::Navigation::Private::_dynamic_atexit_destructor_for__CVarEnableNavMeshResolutions__(void)

{
  CVarEnableNavMeshResolutions._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNavMeshResolutions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogBlueprintComponentInstanceCalls'' @ 1503e5eb0

void __cdecl _dynamic_atexit_destructor_for__CVarLogBlueprintComponentInstanceCalls__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogBlueprintComponentInstanceCalls);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStopReplicationForActorComponentWhenUpdatingReplicatedComponent'' @ 1503e5ed0

void __cdecl
_dynamic_atexit_destructor_for__CVarStopReplicationForActorComponentWhenUpdatingReplicatedComponent__
          (void)

{
  CVarStopReplicationForActorComponentWhenUpdatingReplicatedComponent._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarStopReplicationForActorComponentWhenUpdatingReplicatedComponent);
  return;
}

// `dynamic_atexit_destructor_for_'ConsoleVariables'' @ 1503e5ef0

void __cdecl
UE::NavigationElement::Private::_dynamic_atexit_destructor_for__ConsoleVariables__(void)

{
  ConsoleVariables[0]._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)ConsoleVariables);
  return;
}

// `dynamic_atexit_destructor_for_'Delegates'' @ 1503e5f10

void __cdecl FNavigationSystem::_dynamic_atexit_destructor_for__Delegates__(void)

{
  FDelegates::~FDelegates(&Delegates);
  return;
}

// `dynamic_atexit_destructor_for_'DummyDefinition'' @ 1503e5f30

void __cdecl
`UNavLinkDefinition::GetLinksDefinition'::__l2::_dynamic_atexit_destructor_for__DummyDefinition__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DummyDefinition.AllocatorInstance.Data;
  if (DummyDefinition.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DummyDefinition.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DummyDefinition'' @ 1503e5f50

void __cdecl
`UNavLinkDefinition::GetSegmentLinksDefinition'::__l2::
_dynamic_atexit_destructor_for__DummyDefinition__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DummyDefinition.AllocatorInstance.Data;
  if (DummyDefinition.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DummyDefinition.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FallbackSupportedAgent'' @ 1503e5f70

void __cdecl
`FNavigationSystem::GetFallbackSupportedAgent'::__l2::
_dynamic_atexit_destructor_for__FallbackSupportedAgent__(void)

{
  if (FallbackSupportedAgent.NavDataClass.SoftObjectPtr._24_8_ != 0) {
    FMemory::Free((void *)FallbackSupportedAgent.NavDataClass.SoftObjectPtr._24_8_);
  }
  if (FallbackSupportedAgent._padding_ != 0) {
    FMemory::Free((void *)FallbackSupportedAgent._padding_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FallbackSupportedAgent'' @ 1503e5fb0

void __cdecl
`FNavigationSystem::GetFallbackSupportedAgent'::__l2::
_dynamic_atexit_destructor_for__FallbackSupportedAgent__(void)

{
  if (FallbackSupportedAgent.NavDataClass.SoftObjectPtr._24_8_ != 0) {
    FMemory::Free((void *)FallbackSupportedAgent.NavDataClass.SoftObjectPtr._24_8_);
  }
  if (FallbackSupportedAgent._padding_ != 0) {
    FMemory::Free((void *)FallbackSupportedAgent._padding_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSpawnActorDeferredTransformCache'' @ 1503e5ff0

void __cdecl _dynamic_atexit_destructor_for__GSpawnActorDeferredTransformCache__(void)

{
  GSpawnActorDeferredTransformCache._72_4_ = 0;
  if (GSpawnActorDeferredTransformCache._64_8_ != 0) {
    FMemory::Free((void *)GSpawnActorDeferredTransformCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GSpawnActorDeferredTransformCache);
  return;
}

// `dynamic_atexit_destructor_for_'LogAStar'' @ 1503e6030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAStar__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAStar);
  return;
}

// `dynamic_atexit_destructor_for_'LogActor'' @ 1503e6050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogActor__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogActor);
  return;
}

// `dynamic_atexit_destructor_for_'LogActorPartitionSubsystem'' @ 1503e6070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogActorPartitionSubsystem__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogActorPartitionSubsystem);
  return;
}

// `dynamic_atexit_destructor_for_'LogBlueprintUserMessages'' @ 1503e6090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBlueprintUserMessages__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBlueprintUserMessages);
  return;
}

// `dynamic_atexit_destructor_for_'LogCheckComponents'' @ 1503e60b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`AActor::CheckActorComponents'::__l2::_dynamic_atexit_destructor_for__LogCheckComponents__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCheckComponents);
  return;
}

// `dynamic_atexit_destructor_for_'LogNavInvokers'' @ 1503e60d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNavInvokers__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNavInvokers);
  return;
}

// `dynamic_atexit_destructor_for_'LogNavLink'' @ 1503e60f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNavLink__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNavLink);
  return;
}

// `dynamic_atexit_destructor_for_'LogNavigation'' @ 1503e6110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNavigation__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNavigation);
  return;
}

// `dynamic_atexit_destructor_for_'LogNavigationDataBuild'' @ 1503e6130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNavigationDataBuild__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNavigationDataBuild);
  return;
}

// `dynamic_atexit_destructor_for_'LogNavigationHistory'' @ 1503e6150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNavigationHistory__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNavigationHistory);
  return;
}

// `dynamic_atexit_destructor_for_'LogPartitionActor'' @ 1503e6170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPartitionActor__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPartitionActor);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 1503e6190

void __cdecl
`TLazySingleton<FActorPrimitiveColorHandler>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  TSparseArray<TSparseSetElement<TTuple<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  longlong lVar1;
  
  lVar1 = DAT_1551e94d0;
  if (DAT_1551e94d0 != 0) {
    this = (TSparseArray<TSparseSetElement<TTuple<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)(DAT_1551e94d0 + 0x10);
    *(undefined4 *)(DAT_1551e94d0 + 0x58) = 0;
    if (*(void **)(lVar1 + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)(lVar1 + 0x50));
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this);
    DAT_1551e94d0 = 0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'UCSBlueprintComponentArchetypeCounts'' @ 1503e61f0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__UCSBlueprintComponentArchetypeCounts__(void)

{
  UCSBlueprintComponentArchetypeCounts._448_4_ = 0;
  if (UCSBlueprintComponentArchetypeCounts._440_8_ != 0) {
    FMemory::Free((void *)UCSBlueprintComponentArchetypeCounts._440_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<AActor_const_*,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<AActor_const_*,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<AActor_const_*,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&UCSBlueprintComponentArchetypeCounts);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_ActorMigration'' @ 1503e6230

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_ActorMigration__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_ActorMigration.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_ActorMigration.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_ActorMigration.Name.Data.AllocatorInstance.Data !=
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

