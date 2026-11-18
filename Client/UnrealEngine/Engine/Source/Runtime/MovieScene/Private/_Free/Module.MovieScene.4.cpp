// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 521

// AssetRegistryTag_FavoriteRating'' @ 141087790

void __cdecl
`dynamic_initializer_for_'UMovieSceneShotMetaData::AssetRegistryTag_FavoriteRating__(void)

{
  ::FName::FName(&UMovieSceneShotMetaData::AssetRegistryTag_FavoriteRating,
                 L"AssetRegistryTag_MovieScene_FavoriteRating");
  return;
}

// AssetRegistryTag_bIsFlagged'' @ 1410877b0

void __cdecl `dynamic_initializer_for_'UMovieSceneShotMetaData::AssetRegistryTag_bIsFlagged__(void)

{
  ::FName::FName(&UMovieSceneShotMetaData::AssetRegistryTag_bIsFlagged,
                 L"AssetRegistryTag_MovieScene_bIsFlagged");
  return;
}

// AssetRegistryTag_bIsNoGood'' @ 1410877d0

void __cdecl `dynamic_initializer_for_'UMovieSceneShotMetaData::AssetRegistryTag_bIsNoGood__(void)

{
  ::FName::FName(&UMovieSceneShotMetaData::AssetRegistryTag_bIsNoGood,
                 L"AssetRegistryTag_MovieScene_bIsNoGood");
  return;
}

// AssetRegistryTag_bIsRecorded'' @ 1410877f0

void __cdecl `dynamic_initializer_for_'UMovieSceneShotMetaData::AssetRegistryTag_bIsRecorded__(void)

{
  ::FName::FName(&UMovieSceneShotMetaData::AssetRegistryTag_bIsRecorded,
                 L"AssetRegistryTag_IsRecorded");
  return;
}

// AssetRegistryTag_bIsSubSequence'' @ 141087810

void __cdecl
`dynamic_initializer_for_'UMovieSceneShotMetaData::AssetRegistryTag_bIsSubSequence__(void)

{
  ::FName::FName(&UMovieSceneShotMetaData::AssetRegistryTag_bIsSubSequence,
                 L"AssetRegistryTag_IsSubSequence");
  return;
}

// GroupManagerID'' @ 141087830

void __cdecl
`dynamic_initializer_for_'UE::MovieScene::FPreAnimatedObjectGroupManager::GroupManagerID__(void)

{
  NextID = NextID + 1;
  UE::MovieScene::FPreAnimatedObjectGroupManager::GroupManagerID =
       (TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedObjectGroupManager>)NextID;
  return;
}

// Override'' @ 141087850

void __cdecl `dynamic_initializer_for_'FGetTrackSegmentBlender::Override__(void)

{
  FGetTrackSegmentBlender::Override.bInline = true;
  FGetTrackSegmentBlender::Override.bIsValid = false;
  atexit(`dynamic_atexit_destructor_for_'FGetTrackSegmentBlender::Override__);
  return;
}

// StorageID'' @ 141087880

void __cdecl
`dynamic_initializer_for_'UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage::StorageID__(void)

{
  NextID = NextID + 1;
  UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage::StorageID =
       (TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage>)
       NextID;
  return;
}

// StorageID'' @ 1410878a0

void __cdecl
`dynamic_initializer_for_'UE::MovieScene::FAnimTypePreAnimatedStateRootStorage::StorageID__(void)

{
  NextID = NextID + 1;
  UE::MovieScene::FAnimTypePreAnimatedStateRootStorage::StorageID =
       (TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage>)
       NextID;
  return;
}

// `dynamic_initializer_for_'CVarIgnoreDependenciesWhenNotThreading'' @ 1410878c0

void __cdecl
UE::MovieScene::_dynamic_initializer_for__CVarIgnoreDependenciesWhenNotThreading__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIgnoreDependenciesWhenNotThreading,L"Sequencer.IgnoreDependenciesWhenNotThreading"
             ,&GIgnoreDependenciesWhenNotThreading,
             L"(Default: true) Whether to ignore task dependencies when there is no threading.",0);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreDependenciesWhenNotThreading__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerCustomTaskScheduling'' @ 141087910

void __cdecl UE::MovieScene::_dynamic_initializer_for__CVarSequencerCustomTaskScheduling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSequencerCustomTaskScheduling,L"Sequencer.CustomTaskScheduling",
             &GSequencerCustomTaskScheduling,
             L"(Default: true. Enables more efficient custom task scheduling of asynchronous Sequencer evaluation."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerCustomTaskScheduling__);
  return;
}

// `dynamic_initializer_for_'GRegisterMovieSceneEvaluationCustomVersion'' @ 141087960

void __cdecl _dynamic_initializer_for__GRegisterMovieSceneEvaluationCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FMovieSceneEvaluationCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,4,L"MovieSceneEvaluation",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterMovieSceneEvaluationCustomVersion__);
  return;
}

// `dynamic_initializer_for_'PropertyTypeIDs'' @ 1410879a0

void __cdecl _dynamic_initializer_for__PropertyTypeIDs__(void)

{
  atexit(_dynamic_atexit_destructor_for__PropertyTypeIDs__);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AnonymousTask'' @ 1410879c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_AnonymousTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_AnonymousTask ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AnonymousTask>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_AnonymousTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AnonymousTask,*pFVar1,
               L"Anonymous MovieScene Task","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyExecutionToken'' @ 141087a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_ApplyExecutionToken__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ApplyExecutionToken ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_ApplyExecutionToken>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_ApplyExecutionToken");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ApplyExecutionToken,*pFVar1,
               L"Apply Execution Token","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyExecutionTokens'' @ 141087ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_ApplyExecutionTokens__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ApplyExecutionTokens ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_ApplyExecutionTokens>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_ApplyExecutionTokens");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ApplyExecutionTokens,*pFVar1,
               L"Apply Execution Tokens","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 141087b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ApplyProperties__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ApplyProperties ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ApplyProperties>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ApplyProperties");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ApplyProperties,*pFVar1,
               L"Apply properties","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 141087c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_AquireComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_AquireComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AquireComponentAccessLocks>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_AquireComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AquireComponentAccessLocks,
               *pFVar1,L"Aquire Component Access Locks","STATGROUP_MovieSceneECS","STATCAT_Advanced"
               ,L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_CallSetupTearDown'' @ 141087c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_CallSetupTearDown__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_CallSetupTearDown ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_CallSetupTearDown>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_CallSetupTearDown");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_CallSetupTearDown,*pFVar1,
               L"Call Setup() and TearDown()","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_EntireEvaluationCost'' @ 141087d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_EntireEvaluationCost__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_EntireEvaluationCost ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EntireEvaluationCost>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_EntireEvaluationCost");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EntireEvaluationCost,*pFVar1,
               L"Entire Evaluation Cost","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_EvaluateGroup'' @ 141087db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_EvaluateGroup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_EvaluateGroup ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateGroup>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_EvaluateGroup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateGroup,*pFVar1,
               L"Evaluate Group","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_FindBoundObjects'' @ 141087e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_FindBoundObjects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_FindBoundObjects ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_FindBoundObjects>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_FindBoundObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_FindBoundObjects,*pFVar1,
               L"Find Bound Objects","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_GatherEntries'' @ 141087ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_GatherEntries__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_GatherEntries ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GatherEntries>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_GatherEntries");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GatherEntries,*pFVar1,
               L"Gather Entries For Frame","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_GenericTrackInstanceTask'' @ 141087f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_GenericTrackInstanceTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_GenericTrackInstanceTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GenericTrackInstanceTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_GenericTrackInstanceTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GenericTrackInstanceTask,*pFVar1
               ,L"Generic Track Instances Task","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_GenericTrackInstances'' @ 141087ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_GenericTrackInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_GenericTrackInstances ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GenericTrackInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_GenericTrackInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GenericTrackInstances,*pFVar1,
               L"Generic Track Instances","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_IterateBoundObjects'' @ 141088080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_IterateBoundObjects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_IterateBoundObjects ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_IterateBoundObjects>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_IterateBoundObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_IterateBoundObjects,*pFVar1,
               L"Iterate Bound Objects","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 141088110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PropertyTrack_TokenExecute'' @ 1410881a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PropertyTrack_TokenExecute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PropertyTrack_TokenExecute ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PropertyTrack_TokenExecute>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PropertyTrack_TokenExecute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PropertyTrack_TokenExecute,
               *pFVar1,L"Property Track Token Execute","STATGROUP_MovieSceneEval","STATCAT_Advanced"
               ,L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 141088230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ReleaseComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ReleaseComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ReleaseComponentAccessLocks>)0x0)
  {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ReleaseComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ReleaseComponentAccessLocks,
               *pFVar1,L"Release Component Access Locks","STATGROUP_MovieSceneECS",
               "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_SavePreAnimatedState'' @ 1410882c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_SavePreAnimatedState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_SavePreAnimatedState ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_SavePreAnimatedState>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_SavePreAnimatedState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SavePreAnimatedState,*pFVar1,
               L"Save Pre Animated State","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_SystemDependencyCost'' @ 141088350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_SystemDependencyCost__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_SystemDependencyCost ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_SystemDependencyCost");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SystemDependencyCost,*pFVar1,
               L"System Dependency Cost","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_TrackEvaluator'' @ 1410883e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_TrackEvaluator__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_TrackEvaluator ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_TrackEvaluator>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_TrackEvaluator");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_TrackEvaluator,*pFVar1,
               L"Template Evaluation Cost","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h__Script_MovieScene_2789658816'' @ 141088470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h__Script_MovieScene_2789658816__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h__Script_MovieScene_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h__Script_MovieScene_3049750538'' @ 1410884c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h__Script_MovieScene_3049750538__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h__Script_MovieScene_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h__Script_MovieScene_4263849677'' @ 141088510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h__Script_MovieScene_4263849677__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h__Script_MovieScene_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h__Script_MovieScene_4064318197'' @ 141088560

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h__Script_MovieScene_4064318197__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h__Script_MovieScene_2027362452'' @ 1410885a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h__Script_MovieScene_2027362452__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h__Script_MovieScene_2231651952'' @ 1410885e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h__Script_MovieScene_2231651952__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationField_h__Script_MovieScene_3572942880'' @ 141088620

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationField_h__Script_MovieScene_3572942880__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationField_h__Script_MovieScene_Statics
             ::ScriptStructInfo,0xf,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h__Script_MovieScene_3424282220'' @ 141088660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h__Script_MovieScene_3424282220__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h__Script_MovieScene_1380246307'' @ 1410886a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h__Script_MovieScene_1380246307__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h__Script_MovieScene_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h__Script_MovieScene_3780502770'' @ 1410886e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h__Script_MovieScene_3780502770__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h__Script_MovieScene_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieScenePropertyTemplate_h__Script_MovieScene_3670674178'' @ 141088730

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieScenePropertyTemplate_h__Script_MovieScene_3670674178__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieScenePropertyTemplate_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h__Script_MovieScene_869929072'' @ 141088770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h__Script_MovieScene_869929072__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h__Script_MovieScene_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h__Script_MovieScene_374708780'' @ 1410887b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h__Script_MovieScene_374708780__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h__Script_MovieScene_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h__Script_MovieScene_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeWarping_h__Script_MovieScene_3538913014'' @ 141088800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeWarping_h__Script_MovieScene_3538913014__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeWarping_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackImplementation_h__Script_MovieScene_2120767981'' @ 141088840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackImplementation_h__Script_MovieScene_2120767981__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackImplementation_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h__Script_MovieScene_879695550'' @ 141088880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h__Script_MovieScene_879695550__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h__Script_MovieScene_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h__Script_MovieScene_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h__Script_MovieScene_3792359220'' @ 1410888d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h__Script_MovieScene_3792359220__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h__Script_MovieScene_2997634526'' @ 141088910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h__Script_MovieScene_2997634526__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MetaData_MovieSceneShotMetaData_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMarkedFrame_h__Script_MovieScene_2880532896'' @ 141088950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMarkedFrame_h__Script_MovieScene_2880532896__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMarkedFrame_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h__Script_MovieScene_3832801648'' @ 141088990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h__Script_MovieScene_3832801648__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h__Script_MovieScene_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h__Script_MovieScene_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// NewStructOps @ 146161780

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackLabels,&UE::CoreUObject::Private::Construct<FMovieSceneTrackLabels>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackLabels>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackLabels>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackLabels>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1461617c0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneObjectBindingIDs,&UE::CoreUObject::Private::Construct<FMovieSceneObjectBindingIDs>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneObjectBindingIDs>,&UE::CoreUObject::Private::Destruct<FMovieSceneObjectBindingIDs>,&UE::CoreUObject::Private::Copy<FMovieSceneObjectBindingIDs>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146161a00

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSectionGroup,&UE::CoreUObject::Private::Construct<FMovieSceneSectionGroup>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSectionGroup>,&UE::CoreUObject::Private::Destruct<FMovieSceneSectionGroup>,&UE::CoreUObject::Private::Copy<FMovieSceneSectionGroup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber @ 146161a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack @ 146161ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTrack.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTrack.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger @ 146161b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTemplateGenerationLedger.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTemplateGenerationLedger.InnerSingleton
               ,&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTemplateGenerationLedger.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTemplateGenerationLedger.InnerSingleton;
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

// NewStructOps @ 146161bc0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTemplateGenerationLedger,&UE::CoreUObject::Private::Construct<FMovieSceneTemplateGenerationLedger>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTemplateGenerationLedger>,&UE::CoreUObject::Private::Destruct<FMovieSceneTemplateGenerationLedger>,&UE::CoreUObject::Private::Copy<FMovieSceneTemplateGenerationLedger>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146161d60

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSubSectionData,&UE::CoreUObject::Private::Construct<FMovieSceneSubSectionData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSubSectionData>,&UE::CoreUObject::Private::Destruct<FMovieSceneSubSectionData>,&UE::CoreUObject::Private::Copy<FMovieSceneSubSectionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1461620c0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationTemplateSerialNumber,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationTemplateSerialNumber>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationTemplateSerialNumber>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationTemplateSerialNumber>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146162170

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationTemplate,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationTemplate>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationTemplate>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator @ 1461623a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTrackInstanceSystem @ 1461623e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackInstanceSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.OuterSingleton;
}

// NewStructOps @ 146162460

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackInstanceEntry,&UE::CoreUObject::Private::Construct<FMovieSceneTrackInstanceEntry>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackInstanceEntry>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackInstanceEntry>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackInstanceEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsDeterminismFence_SetBit @ 1461624a0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bIsInclusiveTime_SetBit @ 1461624b0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsInclusiveTime_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewStructOps @ 1461624c0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneMarkedFrame,&UE::CoreUObject::Private::Construct<FMovieSceneMarkedFrame>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneMarkedFrame>,&UE::CoreUObject::Private::Destruct<FMovieSceneMarkedFrame>,&UE::CoreUObject::Private::Copy<FMovieSceneMarkedFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode @ 146162620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchyNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchyNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchyNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchyNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSequenceTransform @ 1461626a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTransform.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTransform.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTransform.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSubSequenceData @ 146162720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSubSequenceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree @ 1461627a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTree.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTree.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTree.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTree.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs @ 146162820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTransformBreadcrumbs.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTransformBreadcrumbs.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTransformBreadcrumbs.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTransformBreadcrumbs.InnerSingleton;
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

// NewProp_bCanLoop_SetBit @ 1461628a0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xaf) = 1;
  return;
}

// NewStructOps @ 146162920

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSubSequenceData,&UE::CoreUObject::Private::Construct<FMovieSceneSubSequenceData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSubSequenceData>,&UE::CoreUObject::Private::Destruct<FMovieSceneSubSequenceData>,&UE::CoreUObject::Private::Copy<FMovieSceneSubSequenceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNodeAndChannelMappings @ 1461629a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNodeAndChannelMappings(void)

{
  if (Z_Registration_Info_UClass_UNodeAndChannelMappings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNodeAndChannelMappings.OuterSingleton,
               &Z_Construct_UClass_UNodeAndChannelMappings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNodeAndChannelMappings.OuterSingleton;
}

// NewStructOps @ 146162b30

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSequenceHierarchyNode,&UE::CoreUObject::Private::Construct<FMovieSceneSequenceHierarchyNode>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSequenceHierarchyNode>,&UE::CoreUObject::Private::Destruct<FMovieSceneSequenceHierarchyNode>,&UE::CoreUObject::Private::Copy<FMovieSceneSequenceHierarchyNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146162ca0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSubSequenceTreeEntry,&UE::CoreUObject::Private::Construct<FMovieSceneSubSequenceTreeEntry>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSubSequenceTreeEntry>,&UE::CoreUObject::Private::Destruct<FMovieSceneSubSequenceTreeEntry>,&UE::CoreUObject::Private::Copy<FMovieSceneSubSequenceTreeEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneCustomClockSource @ 146162d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCustomClockSource(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCustomClockSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCustomClockSource.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCustomClockSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomClockSource.OuterSingleton;
}

// NewStructOps @ 146162d90

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSubSequenceTree,&UE::CoreUObject::Private::Construct<FMovieSceneSubSequenceTree>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSubSequenceTree>,&UE::CoreUObject::Private::Destruct<FMovieSceneSubSequenceTree>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneSubSequenceTree>,&UE::CoreUObject::Private::Copy<FMovieSceneSubSequenceTree>,&UE::CoreUObject::Private::Identical<FMovieSceneSubSequenceTree>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146162ee0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSequenceHierarchy,&UE::CoreUObject::Private::Construct<FMovieSceneSequenceHierarchy>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSequenceHierarchy>,&UE::CoreUObject::Private::Destruct<FMovieSceneSequenceHierarchy>,&UE::CoreUObject::Private::Copy<FMovieSceneSequenceHierarchy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime @ 146162f20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCustomClockSource_OnRequestCurrentTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying @ 146162f60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStartPlaying_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying @ 146163050

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCustomClockSource_OnStopPlaying_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick @ 1461630c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCustomClockSource_OnTick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister @ 146163140

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackInstance",
               &Z_Registration_Info_UClass_UMovieSceneTrackInstance.InnerSingleton,
               UMovieSceneTrackInstance::StaticRegisterNativesUMovieSceneTrackInstance,0x50,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackInstance>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstance.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEvaluationHook @ 146163930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEvaluationHook(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEvaluationHook.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEvaluationHook.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvaluationHook.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneEvalTemplate @ 146163f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvalTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplate.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr @ 146163fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplatePtr.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplatePtr.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplatePtr.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplatePtr.InnerSingleton;
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

// NewStructOps @ 146164050

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvalTemplate,&UE::CoreUObject::Private::Construct<FMovieSceneEvalTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvalTemplate>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvalTemplate>,&UE::CoreUObject::Private::Copy<FMovieSceneEvalTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146164150

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvalTemplatePtr,&UE::CoreUObject::Private::Construct<FMovieSceneEvalTemplatePtr>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvalTemplatePtr>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvalTemplatePtr>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneEvalTemplatePtr>,&UE::CoreUObject::Private::Copy<FMovieSceneEvalTemplatePtr>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity @ 1461643e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntity.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntity.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntity.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntity.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey @ 146164460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityKey.InnerSingleton
               ,&Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityKey.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData @ 1461644e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree @ 146164560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityTree.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityTree.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityTree.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityTree.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData @ 1461645e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr @ 146164660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup @ 1461646e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationGroup.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationGroup.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationGroup.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationGroup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex @ 146164760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData @ 1461647e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationMetaData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationMetaData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationMetaData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationMetaData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate @ 146164860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate.InnerSingleton
               ,&Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack @ 1461648e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey @ 146164960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneOrderedEvaluationKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneOrderedEvaluationKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneOrderedEvaluationKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneOrderedEvaluationKey.InnerSingleton;
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

// NewStructOps @ 1461649e0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationFieldEntityKey,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationFieldEntityKey>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationFieldEntityKey>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationFieldEntityKey>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationFieldEntityKey>,&UE::CoreUObject::Private::GetStructTypeHash<FMovieSceneEvaluationFieldEntityKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneShotMetaData @ 146164a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneShotMetaData(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneShotMetaData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneShotMetaData.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneShotMetaData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneShotMetaData.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTrackInstance @ 146164aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackInstance(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTrackInstance.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTrackInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstance.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput @ 146164ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceInput.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceInput.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceInput.InnerSingleton;
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

// NewStructOps @ 146164b60

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackInstanceInput,&UE::CoreUObject::Private::Construct<FMovieSceneTrackInstanceInput>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackInstanceInput>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackInstanceInput>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneTrackInstanceInput>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackInstanceInput>,&UE::CoreUObject::Private::Identical<FMovieSceneTrackInstanceInput>,&UE::CoreUObject::Private::GetStructTypeHash<FMovieSceneTrackInstanceInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146164ba0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntity_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationFieldEntity,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationFieldEntity>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationFieldEntity>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationFieldEntity>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationFieldEntity>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146164eb0

void * __thiscall
FMovieSceneTrackImplementation::_scalar_deleting_destructor_
          (FMovieSceneTrackImplementation *this,uint param_1)

{
  *(undefined ***)this = &___7FMovieSceneEvalTemplateBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewProp_bIsRootTrackInstance_SetBit @ 146164ef0

void __cdecl
Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 146164f00

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSharedEntityMetaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationFieldSharedEntityMetaData,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationFieldSharedEntityMetaData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationFieldSharedEntityMetaData>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationFieldSharedEntityMetaData>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationFieldSharedEntityMetaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEvaluateInSequencePreRoll_SetBit @ 146164f40

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::
NewProp_bEvaluateInSequencePreRoll_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x45) = *(byte *)((longlong)param_1 + 0x45) | 1;
  return;
}

// NewProp_bEvaluateInSequencePostRoll_SetBit @ 146164f50

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::
NewProp_bEvaluateInSequencePostRoll_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x45) = *(byte *)((longlong)param_1 + 0x45) | 2;
  return;
}

// NewStructOps @ 146164f70

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationFieldEntityMetaData,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationFieldEntityMetaData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationFieldEntityMetaData>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationFieldEntityMetaData>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationFieldEntityMetaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146165100

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneRootEvaluationTemplateInstance,&UE::CoreUObject::Private::Construct<FMovieSceneRootEvaluationTemplateInstance>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneRootEvaluationTemplateInstance>,&UE::CoreUObject::Private::Destruct<FMovieSceneRootEvaluationTemplateInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146165140

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityTree_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationFieldEntityTree,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationFieldEntityTree>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationFieldEntityTree>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationFieldEntityTree>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneEvaluationFieldEntityTree>,&UE::CoreUObject::Private::Identical<FMovieSceneEvaluationFieldEntityTree>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1461651e0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEntityComponentField,&UE::CoreUObject::Private::Construct<FMovieSceneEntityComponentField>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEntityComponentField>,&UE::CoreUObject::Private::Destruct<FMovieSceneEntityComponentField>,&UE::CoreUObject::Private::Copy<FMovieSceneEntityComponentField>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1461653a0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationFieldTrackPtr,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationFieldTrackPtr>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationFieldTrackPtr>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationFieldTrackPtr>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationFieldTrackPtr>,&UE::CoreUObject::Private::GetStructTypeHash<FMovieSceneEvaluationFieldTrackPtr>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146165470

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationFieldSegmentPtr,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationFieldSegmentPtr>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationFieldSegmentPtr>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationFieldSegmentPtr>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationFieldSegmentPtr>,&UE::CoreUObject::Private::GetStructTypeHash<FMovieSceneEvaluationFieldSegmentPtr>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister @ 1461654b0

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMovieSceneTrackInstanceInstantiator::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackInstanceInstantiator",
               &Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.InnerSingleton,
               UMovieSceneTrackInstanceInstantiator::
               StaticRegisterNativesUMovieSceneTrackInstanceInstantiator,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTrackInstanceInstantiator>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceInstantiator>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.InnerSingleton;
}

// NewStructOps @ 146165690

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneFieldEntry_EvaluationTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneFieldEntry_EvaluationTrack,&UE::CoreUObject::Private::Construct<FMovieSceneFieldEntry_EvaluationTrack>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneFieldEntry_EvaluationTrack>,&UE::CoreUObject::Private::Destruct<FMovieSceneFieldEntry_EvaluationTrack>,&UE::CoreUObject::Private::Copy<FMovieSceneFieldEntry_EvaluationTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146165b30

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneFieldEntry_ChildTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneFieldEntry_ChildTemplate,&UE::CoreUObject::Private::Construct<FMovieSceneFieldEntry_ChildTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneFieldEntry_ChildTemplate>,&UE::CoreUObject::Private::Destruct<FMovieSceneFieldEntry_ChildTemplate>,&UE::CoreUObject::Private::Copy<FMovieSceneFieldEntry_ChildTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146165e10

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationGroupLUTIndex,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationGroupLUTIndex>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationGroupLUTIndex>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationGroupLUTIndex>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationGroupLUTIndex>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146165fa0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationGroup,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationGroup>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationGroup>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationGroup>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationGroup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneBuiltInEasingFunction @ 146166120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneBuiltInEasingFunction(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneEasingExternalCurve @ 146166160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEasingExternalCurve(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.OuterSingleton;
}

// NewStructOps @ 1461661a0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneOrderedEvaluationKey,&UE::CoreUObject::Private::Construct<FMovieSceneOrderedEvaluationKey>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneOrderedEvaluationKey>,&UE::CoreUObject::Private::Destruct<FMovieSceneOrderedEvaluationKey>,&UE::CoreUObject::Private::Copy<FMovieSceneOrderedEvaluationKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing @ 1461661e0

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing(void)

{
  if (Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.InnerSingleton;
}

// EMovieSceneBuiltInEasing_StaticEnum @ 146166220

UEnum * __cdecl EMovieSceneBuiltInEasing_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing,(UObject *)pUVar1,
                       L"EMovieSceneBuiltInEasing");
  }
  return Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.OuterSingleton;
}

// NewStructOps @ 1461663d0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationMetaData,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationMetaData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationMetaData>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationMetaData>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationMetaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146166440

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationField,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationField>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationField>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationField>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationField>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_MovieScene_EEvaluationMethod @ 146166480

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EEvaluationMethod(void)

{
  if (Z_Registration_Info_UEnum_EEvaluationMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEvaluationMethod.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEvaluationMethod.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr @ 1461664c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementationPtr.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementationPtr.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementationPtr.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementationPtr.InnerSingleton;
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

// EEvaluationMethod_StaticEnum @ 146166540

UEnum * __cdecl EEvaluationMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EEvaluationMethod,(UObject *)pUVar1,
                       L"EEvaluationMethod");
  }
  return Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieScenePropertySectionData @ 146166580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieScenePropertySectionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionData.InnerSingleton;
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

// NewStructOps @ 146166600

void * __cdecl Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieScenePropertySectionData,&UE::CoreUObject::Private::Construct<FMovieScenePropertySectionData>,&UE::CoreUObject::Private::ConstructForTests<FMovieScenePropertySectionData>,&UE::CoreUObject::Private::Destruct<FMovieScenePropertySectionData>,&UE::CoreUObject::Private::Copy<FMovieScenePropertySectionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEvaluateInPreroll_SetBit @ 146166640

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 1;
  return;
}

// NewProp_bEvaluateInPostroll_SetBit @ 146166650

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 2;
  return;
}

// NewProp_bTearDownPriority_SetBit @ 146166660

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 4;
  return;
}

// NewStructOps @ 146166670

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationTrack,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationTrack>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationTrack>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationTrack>,&UE::CoreUObject::Private::PostSerialize<FMovieSceneEvaluationTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146166750

void * __cdecl
Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieScenePropertySectionTemplate,&UE::CoreUObject::Private::Construct<FMovieScenePropertySectionTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieScenePropertySectionTemplate>,&UE::CoreUObject::Private::Destruct<FMovieScenePropertySectionTemplate>,&UE::CoreUObject::Private::Copy<FMovieScenePropertySectionTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_MovieScene_EMovieSceneBlendType @ 146167430

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EMovieSceneBlendType(void)

{
  if (Z_Registration_Info_UEnum_EMovieSceneBlendType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieSceneBlendType.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieSceneBlendType.InnerSingleton;
}

// Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode @ 146167650

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode(void)

{
  if (Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform @ 146167690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneInverseNestedSequenceTransform.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneInverseNestedSequenceTransform.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneInverseNestedSequenceTransform.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneInverseNestedSequenceTransform.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform @ 146167710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNestedSequenceTransform.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneNestedSequenceTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNestedSequenceTransform.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneNestedSequenceTransform.InnerSingleton;
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

// EMovieSceneBreadcrumbMode_StaticEnum @ 146167790

UEnum * __cdecl EMovieSceneBreadcrumbMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode,(UObject *)pUVar1,
                       L"EMovieSceneBreadcrumbMode");
  }
  return Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.OuterSingleton;
}

// EMovieSceneBlendType_StaticEnum @ 146167910

UEnum * __cdecl EMovieSceneBlendType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType,(UObject *)pUVar1,
                       L"EMovieSceneBlendType");
  }
  return Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton;
}

// NewStructOps @ 146167950

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTransformBreadcrumbs,&UE::CoreUObject::Private::Construct<FMovieSceneTransformBreadcrumbs>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTransformBreadcrumbs>,&UE::CoreUObject::Private::Destruct<FMovieSceneTransformBreadcrumbs>,&UE::CoreUObject::Private::Copy<FMovieSceneTransformBreadcrumbs>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsValid_SetBit @ 146167990

void __cdecl
Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 1461679a0

void * __cdecl Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOptionalMovieSceneBlendType,&UE::CoreUObject::Private::Construct<FOptionalMovieSceneBlendType>,&UE::CoreUObject::Private::ConstructForTests<FOptionalMovieSceneBlendType>,&UE::CoreUObject::Private::Destruct<FOptionalMovieSceneBlendType>,&UE::CoreUObject::Private::Copy<FOptionalMovieSceneBlendType>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146167aa0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneWarpCounter,&UE::CoreUObject::Private::Construct<FMovieSceneWarpCounter>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneWarpCounter>,&UE::CoreUObject::Private::Destruct<FMovieSceneWarpCounter>,&UE::CoreUObject::Private::Copy<FMovieSceneWarpCounter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146167d00

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneInverseNestedSequenceTransform,&UE::CoreUObject::Private::Construct<FMovieSceneInverseNestedSequenceTransform>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneInverseNestedSequenceTransform>,&UE::CoreUObject::Private::Destruct<FMovieSceneInverseNestedSequenceTransform>,&UE::CoreUObject::Private::Copy<FMovieSceneInverseNestedSequenceTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146167dc0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTimeWarping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTimeWarping,&UE::CoreUObject::Private::Construct<FMovieSceneTimeWarping>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTimeWarping>,&UE::CoreUObject::Private::Destruct<FMovieSceneTimeWarping>,&UE::CoreUObject::Private::Copy<FMovieSceneTimeWarping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146167f90

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneNestedSequenceTransform,&UE::CoreUObject::Private::Construct<FMovieSceneNestedSequenceTransform>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneNestedSequenceTransform>,&UE::CoreUObject::Private::Destruct<FMovieSceneNestedSequenceTransform>,&UE::CoreUObject::Private::PostSerialize<FMovieSceneNestedSequenceTransform>,&UE::CoreUObject::Private::Copy<FMovieSceneNestedSequenceTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieScene @ 146167fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScene(void)

{
  if (Z_Registration_Info_UClass_UMovieScene.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScene.OuterSingleton,
               &Z_Construct_UClass_UMovieScene_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScene.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneNodeGroup @ 146168010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneNodeGroup(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneNodeGroup.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneNodeGroup.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneNodeGroup_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneNodeGroup.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneNodeGroupCollection @ 146168050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneNodeGroupCollection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneExpansionState @ 146168090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneExpansionState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneExpansionState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneExpansionState.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneExpansionState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneExpansionState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneMarkedFrame @ 146168110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneMarkedFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMarkedFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneMarkedFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMarkedFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneMarkedFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs @ 146168190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingIDs.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingIDs.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingIDs.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingIDs.InnerSingleton;
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

// NewProp_bExpanded_SetBit @ 146168210

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 146168220

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneExpansionState,&UE::CoreUObject::Private::Construct<FMovieSceneExpansionState>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneExpansionState>,&UE::CoreUObject::Private::Destruct<FMovieSceneExpansionState>,&UE::CoreUObject::Private::Copy<FMovieSceneExpansionState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146168260

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackImplementation,&UE::CoreUObject::Private::Construct<FMovieSceneTrackImplementation>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackImplementation>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackImplementation>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackImplementation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1461682a0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSequenceTransform,&UE::CoreUObject::Private::Construct<FMovieSceneSequenceTransform>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSequenceTransform>,&UE::CoreUObject::Private::Destruct<FMovieSceneSequenceTransform>,&UE::CoreUObject::Private::Copy<FMovieSceneSequenceTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146168360

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneInverseSequenceTransform,&UE::CoreUObject::Private::Construct<FMovieSceneInverseSequenceTransform>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneInverseSequenceTransform>,&UE::CoreUObject::Private::Destruct<FMovieSceneInverseSequenceTransform>,&UE::CoreUObject::Private::Copy<FMovieSceneInverseSequenceTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146168450

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackImplementationPtr,&UE::CoreUObject::Private::Construct<FMovieSceneTrackImplementationPtr>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackImplementationPtr>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackImplementationPtr>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneTrackImplementationPtr>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackImplementationPtr>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146168490

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x208;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEditorData,&UE::CoreUObject::Private::Construct<FMovieSceneEditorData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEditorData>,&UE::CoreUObject::Private::Destruct<FMovieSceneEditorData>,&UE::CoreUObject::Private::Copy<FMovieSceneEditorData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// operator<<<TObjectPtr<UObject>,int> @ 146168830

FArchive * __cdecl
operator<<<TObjectPtr<UObject>,int>(FArchive *param_1,TTuple<TObjectPtr<UObject>,int> *param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x150))();
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)&param_2->field_0x8 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x8,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x8);
  return param_1;
}

// operator<<<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator> @ 1461688c0

FArchive * __cdecl
operator<<<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  UObject *pUVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar13 < 1) {
    return param_1;
  }
  *piVar1 = uVar13;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14617c4ce;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14617c4ce:
  uVar11 = (ulonglong)uVar13;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar13 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar12;
      uVar9 = uVar7;
      while (uVar13 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14617c5ab;
        uVar13 = puVar12[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_14617c5ab:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_ = CONCAT44(uStack_74,uStack_78);
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        pUVar3 = *(UObject **)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar8 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_> @ 1461688d0

FArchive * __cdecl
operator<<<FMovieSceneEvaluationFieldEntityTree::
FEntityAndMetaDataIndex_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
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
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
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
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FEntityAndMetaDataIndex *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FEntityAndMetaDataIndex *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
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

// FEntry,TSizedDefaultAllocator<32>_> @ 1461688e0

FArchive * __cdecl
operator<<<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::
FEntityAndMetaDataIndex>::FEntry_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::FEntry,TSizedDefaultAllocator<32>_>
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
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar9 = 0;
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
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::FEntry,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FEntry *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc)
                      );
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
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

// FEntry,TSizedDefaultAllocator<32>_> @ 1461688f0

FArchive * __cdecl
operator<<<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::
FEntry_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,TSizedDefaultAllocator<32>_>
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
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar9 = 0;
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
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FEntry *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc)
                      );
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
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

// FEntry,TSizedDefaultAllocator<32>_> @ 146168900

FArchive * __cdecl
operator<<<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::
FEntry_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::FEntry,TSizedDefaultAllocator<32>_>
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
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar9 = 0;
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
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::FEntry,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FEntry *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc)
                      );
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
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

// operator<<<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> @ 146168910

FArchive * __cdecl
operator<<<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> *param_2)

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
  FMovieSceneEvaluationTreeNode *pFVar10;
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
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
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FMovieSceneEvaluationTreeNode *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x420,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FMovieSceneEvaluationTreeNode *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
              DefaultConstructItems<FMovieSceneEvaluationTreeNode,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
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

// operator<<<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> @ 146168920

FArchive * __cdecl
operator<<<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *param_2)

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
  FMovieSceneSubSequenceTreeEntry *pFVar10;
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
      DestructItems<FMovieSceneSubSequenceTreeEntry,int>
                ((FMovieSceneSubSequenceTreeEntry *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
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
                bVar4 = FDebug::CheckVerifyFailedImpl2
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
              operator<<(param_1,(FMovieSceneSubSequenceTreeEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_>::Empty
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
              pFVar10 = (FMovieSceneSubSequenceTreeEntry *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
              DefaultConstructItems<FMovieSceneSubSequenceTreeEntry,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
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

// operator<<<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 146168930

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<TObjectPtr<UObject>,int> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<TObjectPtr<UObject>,int> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x18,(longlong)*(int *)&param_2->field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
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
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_146168c2c;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_146168c2c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<TObjectPtr<UObject>,int>
                  (param_1,(TTuple<TObjectPtr<UObject>,int> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x18));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
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
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<TObjectPtr<UObject>,int> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x18);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<TObjectPtr<UObject>,int> *)0x0;
        if (local_78.Pointer != (TTuple<TObjectPtr<UObject>,int> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<TObjectPtr<UObject>,int>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<TObjectPtr<UObject>,int> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator*<FFrameTime> @ 146168ea0

TRange<FFrameTime> * __cdecl
operator*<FFrameTime>
          (TRange<FFrameTime> *__return_storage_ptr__,TRange<FFrameTime> *param_1,
          FMovieSceneTimeTransform *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined3 uVar5;
  FFrameNumber FVar6;
  bool bVar7;
  TRange<FFrameTime> *pTVar8;
  FFrameTime FVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  char local_28;
  char local_1c;
  
  uVar5 = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  FVar6.Value = (param_1->LowerBound).Value.FrameNumber.Value;
  uVar4 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
  (__return_storage_ptr__->LowerBound).Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(param_1->LowerBound).Type.Value;
  *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar5;
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)FVar6.Value;
  *(undefined8 *)&(__return_storage_ptr__->LowerBound).Value.SubFrame = uVar4;
  (__return_storage_ptr__->UpperBound).Value = (param_1->UpperBound).Value;
  uVar1 = (__return_storage_ptr__->LowerBound).Type;
  if (uVar1 != '\x02') {
    if ((__return_storage_ptr__->LowerBound).Type.Value == '\x02') {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TRange<FFrameTime> *)(*pcVar3)();
        return pTVar8;
      }
    }
    FVar9 = operator*((FFrameTime)local_res8,
                      (FMovieSceneTimeTransform *)(__return_storage_ptr__->LowerBound).Value);
    if ((__return_storage_ptr__->LowerBound).Type.Value == '\x02') {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,0x73,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TRange<FFrameTime> *)(*pcVar3)();
        return pTVar8;
      }
    }
    (__return_storage_ptr__->LowerBound).Value = *(FFrameTime *)FVar9;
  }
  uVar2 = (__return_storage_ptr__->UpperBound).Type;
  if (uVar2 != '\x02') {
    if ((__return_storage_ptr__->UpperBound).Type.Value == '\x02') {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TRange<FFrameTime> *)(*pcVar3)();
        return pTVar8;
      }
    }
    FVar9 = operator*((FFrameTime)local_res10,
                      (FMovieSceneTimeTransform *)(__return_storage_ptr__->UpperBound).Value);
    TRange<FFrameTime>::SetUpperBoundValue(__return_storage_ptr__,(FFrameTime *)FVar9);
  }
  return __return_storage_ptr__;
}

// AllOf<TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>,bool_(__cdecl_FMovieSceneNestedSequenceTransform::*)(void)const_> @ 146169880

bool __cdecl
Algo::
AllOf<TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>,bool_(__cdecl_FMovieSceneNestedSequenceTransform::*)(void)const_>
          (TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *param_1,
          pmf_bc166e85 param_2)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (*(code *)param_2)(pFVar3);
    if (cVar2 == '\0') {
      return false;
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return true;
}

// BinarySearch<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_> @ 146169ba0

int __cdecl
Algo::BinarySearch<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
          (TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_> *param_1,FGuid *param_2,
          TLess<void> param_3)

{
  uint uVar1;
  FMovieSceneBinding *pFVar2;
  int iVar3;
  int iVar4;
  FIdentityFunctor local_res8;
  
  iVar4 = param_1->ArrayNum;
  pFVar2 = (FMovieSceneBinding *)(param_1->AllocatorInstance).Data;
  iVar3 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBinding_const_,int,FGuid,FIdentityFunctor,TLess<void>_>
                    (pFVar2,iVar4,param_2,local_res8,param_3);
  if (iVar3 < iVar4) {
    uVar1 = pFVar2[iVar3].ObjectGuid.A;
    if (uVar1 <= param_2->A) {
      if (param_2->A == uVar1) {
        uVar1 = pFVar2[iVar3].ObjectGuid.B;
        if (param_2->B < uVar1) {
          return -1;
        }
        if (param_2->B == uVar1) {
          uVar1 = pFVar2[iVar3].ObjectGuid.C;
          if (param_2->C < uVar1) {
            return -1;
          }
          if (param_2->C == uVar1) {
            iVar4 = -1;
            if (pFVar2[iVar3].ObjectGuid.D <= param_2->D) {
              iVar4 = iVar3;
            }
            return iVar4;
          }
        }
      }
      return iVar3;
    }
  }
  return -1;
}

// BinarySearch<TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_> @ 146169c50

int __cdecl
Algo::BinarySearch<TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
          (TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_> *param_1,FGuid *param_2,
          TLess<void> param_3)

{
  uint uVar1;
  FMovieScenePossessable *pFVar2;
  int iVar3;
  int iVar4;
  FIdentityFunctor local_res8;
  
  iVar4 = param_1->ArrayNum;
  pFVar2 = (FMovieScenePossessable *)(param_1->AllocatorInstance).Data;
  iVar3 = AlgoImpl::
          LowerBoundInternal<FMovieScenePossessable_const_,int,FGuid,FIdentityFunctor,TLess<void>_>
                    (pFVar2,iVar4,param_2,local_res8,param_3);
  if (iVar3 < iVar4) {
    uVar1 = pFVar2[iVar3].Guid.A;
    if (uVar1 <= param_2->A) {
      if (param_2->A == uVar1) {
        uVar1 = pFVar2[iVar3].Guid.B;
        if (param_2->B < uVar1) {
          return -1;
        }
        if (param_2->B == uVar1) {
          uVar1 = pFVar2[iVar3].Guid.C;
          if (param_2->C < uVar1) {
            return -1;
          }
          if (param_2->C == uVar1) {
            iVar4 = -1;
            if (pFVar2[iVar3].Guid.D <= param_2->D) {
              iVar4 = iVar3;
            }
            return iVar4;
          }
        }
      }
      return iVar3;
    }
  }
  return -1;
}

// BinarySearch<TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_> @ 146169d00

int __cdecl
Algo::BinarySearch<TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
          (TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_> *param_1,FGuid *param_2,
          TLess<void> param_3)

{
  uint uVar1;
  FMovieSceneSpawnable *pFVar2;
  int iVar3;
  int iVar4;
  FIdentityFunctor local_res8;
  
  iVar4 = param_1->ArrayNum;
  pFVar2 = (FMovieSceneSpawnable *)(param_1->AllocatorInstance).Data;
  iVar3 = AlgoImpl::
          LowerBoundInternal<FMovieSceneSpawnable_const_,int,FGuid,FIdentityFunctor,TLess<void>_>
                    (pFVar2,iVar4,param_2,local_res8,param_3);
  if (iVar3 < iVar4) {
    uVar1 = pFVar2[iVar3].Guid.A;
    if (uVar1 <= param_2->A) {
      if (param_2->A == uVar1) {
        uVar1 = pFVar2[iVar3].Guid.B;
        if (param_2->B < uVar1) {
          return -1;
        }
        if (param_2->B == uVar1) {
          uVar1 = pFVar2[iVar3].Guid.C;
          if (param_2->C < uVar1) {
            return -1;
          }
          if (param_2->C == uVar1) {
            iVar4 = -1;
            if (pFVar2[iVar3].Guid.D <= param_2->D) {
              iVar4 = iVar3;
            }
            return iVar4;
          }
        }
      }
      return iVar3;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 146169dc0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 146169e40

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TArray<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>
           *param_1,FMovieSceneSequenceID *param_2,FKeyForward param_3,
          TLess<FMovieSceneSequenceID_const_&> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(uint *)(pFVar2 + (longlong)iVar4 * 0x10) < param_2->Value) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) &&
     (iVar4 = -1, *(uint *)(pFVar2 + (longlong)iVar5 * 0x10) <= param_2->Value)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 146169ec0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TArray<TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
           *param_1,FMovieSceneSequenceID *param_2,FKeyForward param_3,
          TLess<FMovieSceneSequenceID_const_&> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(uint *)(pFVar2 + (longlong)iVar4 * 0xc) < param_2->Value) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(uint *)(pFVar2 + (longlong)iVar5 * 0xc) <= param_2->Value) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 146169f40

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TArray<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FMovieSceneSequenceID *param_2,FKeyForward param_3,
          TLess<FMovieSceneSequenceID_const_&> param_4)

{
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar1;
  uint uVar2;
  int iVar3;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar4;
  uint uVar5;
  int iVar6;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>)
          param_1;
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                )0x0) {
    FVar4 = FVar1;
  }
  iVar6 = 0;
  if (0 < param_1->ArrayNum) {
    uVar5 = param_1->ArrayNum;
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      if (*(uint *)((longlong)iVar3 * 0x20 + (longlong)FVar4) < param_2->Value) {
        iVar6 = iVar3 + (uVar5 & 1);
      }
      uVar2 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar2 != 0);
  }
  iVar3 = -1;
  if (iVar6 < param_1->ArrayNum) {
    if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                  )0x0) {
      param_1 = (TArray<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar1;
    }
    iVar3 = -1;
    if (*(uint *)((longlong)iVar6 * 0x20 + (longlong)param_1) <= param_2->Value) {
      iVar3 = iVar6;
    }
  }
  return iVar3;
}

// BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID>,TSizedDefaultAllocator<32>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 146169ff0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID>,TSizedDefaultAllocator<32>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID>,TSizedDefaultAllocator<32>_>
           *param_1,FMovieSceneSequenceID *param_2,FKeyForward param_3,
          TLess<FMovieSceneSequenceID_const_&> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(uint *)(pFVar2 + (longlong)iVar4 * 8) < param_2->Value) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) &&
     (iVar4 = -1, *(uint *)(pFVar2 + (longlong)iVar5 * 8) <= param_2->Value)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_> @ 14616a060

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,TSizedDefaultAllocator<32>_>
           *param_1,FPreAnimatedStorageID *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FPreAnimatedStorageID_const_&> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(uint *)(pFVar2 + (longlong)iVar4 * 0x18) < param_2->TypeID) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(uint *)(pFVar2 + (longlong)iVar5 * 0x18) <= param_2->TypeID) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_> @ 14616a0e0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,TSizedDefaultAllocator<32>_>
           *param_1,FPreAnimatedStorageID *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FPreAnimatedStorageID_const_&> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(uint *)(pFVar2 + (longlong)iVar4 * 0x18) < param_2->TypeID) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(uint *)(pFVar2 + (longlong)iVar5 * 0x18) <= param_2->TypeID) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 14616a160

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,TSizedDefaultAllocator<32>_>
           *param_1,FPreAnimatedStorageIndex *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
                      *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4)
  ;
  if (param_1->ArrayNum <= iVar4) {
    return -1;
  }
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
  if (param_2->Value == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar1 = param_2->Value;
  if (*(int *)pFVar6 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar5 = -1;
  if (*(int *)pFVar6 <= iVar1) {
    iVar5 = iVar4;
  }
  return iVar5;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 14616a240

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,TSizedDefaultAllocator<32>_>
           *param_1,FPreAnimatedStorageIndex *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
                      *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4)
  ;
  if (param_1->ArrayNum <= iVar4) {
    return -1;
  }
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
  if (param_2->Value == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar1 = param_2->Value;
  if (*(int *)pFVar6 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar5 = -1;
  if (*(int *)pFVar6 <= iVar1) {
    iVar5 = iVar4;
  }
  return iVar5;
}

// CastChecked<UMovieSceneTrackInstanceInstantiator,UMovieSceneEntitySystem> @ 14616a320

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTrackInstanceInstantiator * __cdecl
CastChecked<UMovieSceneTrackInstanceInstantiator,UMovieSceneEntitySystem>
          (UMovieSceneEntitySystem *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneEntitySystem *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneTrackInstanceInstantiator>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneTrackInstanceInstantiator::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneTrackInstanceInstantiator *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneTrackInstanceInstantiator>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMovieSceneTrackInstanceInstantiator,UObject> @ 14616a3e0

UMovieSceneTrackInstanceInstantiator * __cdecl
CastChecked<UMovieSceneTrackInstanceInstantiator,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneTrackInstanceInstantiator>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneTrackInstanceInstantiator::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneTrackInstanceInstantiator *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneTrackInstanceInstantiator>(&local_28);
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

// CompareItems<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int> @ 14616a4a0

bool __cdecl
CompareItems<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int>
          (FEntityAndMetaDataIndex *param_1,FEntityAndMetaDataIndex *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(int *)(lVar1 + (longlong)param_2) != param_2->EntityIndex) ||
         (*(int *)(lVar1 + 4 + (longlong)param_2) != param_2->MetaDataIndex)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::FEntry,int> @ 14616a4d0

bool __cdecl
CompareItems<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::FEntry,int>
          (FEntry *param_1,FEntry *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = &param_2->Capacity;
    piVar1 = &param_1->Capacity;
    do {
      if (((((FEntry *)(piVar1 + -2))->StartIndex !=
            *(int *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)piVar1)) ||
          (piVar1[-1] != piVar2[-1])) || (*piVar1 != *piVar2)) {
        return false;
      }
      piVar1 = piVar1 + 3;
      piVar2 = piVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,int> @ 14616a520

bool __cdecl
CompareItems<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,int>
          (FEntry *param_1,FEntry *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = &param_2->Capacity;
    piVar1 = &param_1->Capacity;
    do {
      if (((((FEntry *)(piVar1 + -2))->StartIndex !=
            *(int *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)piVar1)) ||
          (piVar1[-1] != piVar2[-1])) || (*piVar1 != *piVar2)) {
        return false;
      }
      piVar1 = piVar1 + 3;
      piVar2 = piVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::FEntry,int> @ 14616a570

bool __cdecl
CompareItems<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::FEntry,int>
          (FEntry *param_1,FEntry *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = &param_2->Capacity;
    piVar1 = &param_1->Capacity;
    do {
      if (((((FEntry *)(piVar1 + -2))->StartIndex !=
            *(int *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)piVar1)) ||
          (piVar1[-1] != piVar2[-1])) || (*piVar1 != *piVar2)) {
        return false;
      }
      piVar1 = piVar1 + 3;
      piVar2 = piVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FMovieSceneEvaluationTreeNode,int> @ 14616a5c0

bool __cdecl
CompareItems<FMovieSceneEvaluationTreeNode,int>
          (FMovieSceneEvaluationTreeNode *param_1,FMovieSceneEvaluationTreeNode *param_2,int param_3
          )

{
  uchar uVar1;
  bool bVar2;
  TRangeBound<FFrameNumber> *pTVar3;
  TRangeBound<FFrameNumber> *pTVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    pTVar4 = &(param_2->Range).UpperBound;
    lVar5 = (longlong)param_2 + (-8 - (longlong)param_1);
    pTVar3 = &(param_1->Range).UpperBound;
    do {
      bVar2 = TRange<FFrameNumber>::IsEmpty((TRange<FFrameNumber> *)(pTVar3 + -1));
      if (((((!bVar2) ||
            (bVar2 = TRange<FFrameNumber>::IsEmpty
                               ((TRange<FFrameNumber> *)(lVar5 + (longlong)pTVar3)), !bVar2)) &&
           ((uVar1 = (((TRange<FFrameNumber> *)(pTVar3 + -1))->LowerBound).Type.Value,
            uVar1 != *(uchar *)(lVar5 + (longlong)pTVar3) ||
            ((((uVar1 != '\x02' &&
               ((((TRange<FFrameNumber> *)(pTVar3 + -1))->LowerBound).Value.Value !=
                (((TRange<FFrameNumber> *)(pTVar4 + -1))->LowerBound).Value.Value)) ||
              (uVar1 = (pTVar3->Type).Value, uVar1 != (pTVar4->Type).Value)) ||
             ((uVar1 != '\x02' && ((pTVar3->Value).Value != (pTVar4->Value).Value)))))))) ||
          (*(int *)(pTVar3 + 1) != *(int *)(pTVar4 + 1))) ||
         (((*(int *)((longlong)(pTVar3 + 1) + 4) != *(int *)((longlong)(pTVar4 + 1) + 4) ||
           (*(int *)(pTVar3 + 2) != *(int *)(pTVar4 + 2))) ||
          (*(int *)((longlong)(pTVar3 + 2) + 4) != *(int *)((longlong)(pTVar4 + 2) + 4))))) {
        return false;
      }
      pTVar4 = pTVar4 + 4;
      pTVar3 = pTVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FMovieSceneNestedSequenceTransform,int> @ 14616a690

bool __cdecl
CompareItems<FMovieSceneNestedSequenceTransform,int>
          (FMovieSceneNestedSequenceTransform *param_1,FMovieSceneNestedSequenceTransform *param_2,
          int param_3)

{
  FMovieSceneNumericVariant *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  float fStackX_24;
  float fStack_14;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_1 - (longlong)param_2;
    do {
      pFVar1 = (FMovieSceneNumericVariant *)(lVar4 + (longlong)param_2);
      bVar3 = operator==(pFVar1,(FMovieSceneNumericVariant *)param_2);
      if (!bVar3) {
        return false;
      }
      uVar2 = *(undefined8 *)pFVar1[1].Data;
      if ((int)uVar2 != (param_2->Offset).FrameNumber.Value) {
        return false;
      }
      fStackX_24 = (float)((ulonglong)uVar2 >> 0x20);
      fStack_14 = (param_2->Offset).SubFrame;
      if (fStackX_24 != fStack_14) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FMovieSceneSubSequenceTreeEntry,int> @ 14616a730

bool __cdecl
CompareItems<FMovieSceneSubSequenceTreeEntry,int>
          (FMovieSceneSubSequenceTreeEntry *param_1,FMovieSceneSubSequenceTreeEntry *param_2,
          int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(uint *)(lVar1 + (longlong)param_2) != (param_2->SequenceID).Value) ||
         (*(ESectionEvaluationFlags *)(lVar1 + 4 + (longlong)param_2) != param_2->Flags)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FMovieSceneTrackInstanceInput,int> @ 14616a760

bool __cdecl
CompareItems<FMovieSceneTrackInstanceInput,int>
          (FMovieSceneTrackInstanceInput *param_1,FMovieSceneTrackInstanceInput *param_2,int param_3
          )

{
  bool *pbVar1;
  bool *pbVar2;
  
  if (param_3 != 0) {
    pbVar2 = &param_2->bInputHasBeenProcessed;
    pbVar1 = &param_1->bInputHasBeenProcessed;
    do {
      if ((((FMovieSceneTrackInstanceInput *)(pbVar1 + -0xc))->Section).field0_0x0.DebugPtr !=
          *(UMovieSceneSection **)(pbVar1 + (longlong)param_2 + (-0xc - (longlong)param_1))) {
        return false;
      }
      if ((*(FInstanceHandle *)(pbVar1 + -4)).InstanceID !=
          (*(FInstanceHandle *)(pbVar2 + -4)).InstanceID) {
        return false;
      }
      if ((*(FInstanceHandle *)(pbVar1 + -4)).InstanceSerial !=
          (*(FInstanceHandle *)(pbVar2 + -4)).InstanceSerial) {
        return false;
      }
      if (*pbVar1 != *pbVar2) {
        return false;
      }
      pbVar1 = pbVar1 + 0x10;
      pbVar2 = pbVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TObjectPtr<UMovieSceneTrack>,TObjectPtr<UMovieSceneTrack>,int> @ 14616a7c0

void __cdecl
ConstructItems<TObjectPtr<UMovieSceneTrack>,TObjectPtr<UMovieSceneTrack>,int>
          (void *param_1,TObjectPtr<UMovieSceneTrack> *param_2,int param_3)

{
  TObjectPtr<UMovieSceneTrack> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UMovieSceneTrack>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UMovieSceneTrack>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UMovieSceneTrack *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UMovieSceneTrack *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int> @ 14616a820

void __cdecl
ConstructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
          (void *param_1,FEntry *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    puVar5 = &(param_2->Bits).BucketHash;
    lVar6 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)puVar5 + lVar6) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)puVar5 + lVar6);
      iVar3 = puVar5[-2];
      _Src = (((TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                *)(puVar5 + -4))->Buckets).Storage.AllocatorInstance.Data;
      piVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,0,pFVar2,iVar3,piVar4);
        memcpy(pFVar2->Data,_Src,(longlong)iVar3 * 2);
      }
      piVar4[1] = *puVar5;
      piVar1 = (int *)(puVar5 + 2);
      puVar5 = puVar5 + 8;
      piVar4[3] = *piVar1;
      piVar4 = piVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneInverseNestedSequenceTransform,FMovieSceneInverseNestedSequenceTransform,int> @ 14616a910

void __cdecl
ConstructItems<FMovieSceneInverseNestedSequenceTransform,FMovieSceneInverseNestedSequenceTransform,int>
          (void *param_1,FMovieSceneInverseNestedSequenceTransform *param_2,int param_3)

{
  FFrameTime *pFVar1;
  FMovieSceneNumericVariant *__return_storage_ptr__;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      __return_storage_ptr__ = (FMovieSceneNumericVariant *)(lVar2 + (longlong)param_2);
      FMovieSceneNumericVariant::ShallowCopy
                ((FMovieSceneNumericVariant *)param_2,__return_storage_ptr__);
      pFVar1 = &param_2->Offset;
      param_2 = param_2 + 1;
      *(FFrameTime *)__return_storage_ptr__[1].Data = *pFVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int> @ 14616a980

void __cdecl
ConstructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
          (void *param_1,FPrerequisite *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      lVar1 = *(longlong *)(lVar2 + (longlong)param_1);
      *(longlong *)param_1 = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
        UNLOCK();
      }
      *(undefined2 *)((longlong)param_1 + 8) = *(undefined2 *)(lVar2 + 8 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int> @ 14616aa80

void __cdecl
DefaultConstructItems<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::FEntry,int> @ 14616aa90

void __cdecl
DefaultConstructItems<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::FEntry,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,int> @ 14616aaa0

void __cdecl
DefaultConstructItems<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::FEntry,int> @ 14616aab0

void __cdecl
DefaultConstructItems<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::FEntry,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FMovieSceneEvaluationTreeNode,int> @ 14616aac0

void __cdecl DefaultConstructItems<FMovieSceneEvaluationTreeNode,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  uint local_res8;
  uint local_res18;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      local_res8 = local_res8 & 0xffffff00;
      puVar1[-2] = (ulonglong)local_res8;
      local_res18 = local_res18 & 0xffffff00;
      puVar1[-1] = (ulonglong)local_res18;
      *puVar1 = 0xffffffffffffffff;
      puVar1[1] = 0xffffffffffffffff;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 4;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneNestedSequenceTransform,int> @ 14616ab20

void __cdecl
DefaultConstructItems<FMovieSceneNestedSequenceTransform,int>(void *param_1,int param_2)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = __real_3ff0000000000000;
  if (param_2 != 0) {
    lVar2 = (longlong)param_1 + 0x14;
    do {
      FMovieSceneNumericVariant::FMovieSceneNumericVariant
                ((FMovieSceneNumericVariant *)(lVar2 + -0x14),dVar1);
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined8 *)(lVar2 + 4) = 0;
      lVar2 = lVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneSubSequenceTreeEntry,int> @ 14616ab90

void __cdecl DefaultConstructItems<FMovieSceneSubSequenceTreeEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0xffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,int> @ 14616abf0

void __cdecl
DestructItems<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,int> @ 14616ac30

void __cdecl
DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,int>
          (TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,int> @ 14616ac70

void __cdecl
DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,int>
          (TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>
           *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,int> @ 14616acc0

void __cdecl
DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,int>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
           *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &param_1->field_0x28;
    do {
      bVar1 = *pbVar3;
      if ((bVar1 & 1) != 0) {
        pbVar2 = pbVar3 + -0x20;
        if ((bVar1 & 2) == 0) {
          pbVar2 = *(byte **)(pbVar3 + -0x20);
        }
        *pbVar3 = bVar1 & 0xfe;
        (*(code *)**(undefined8 **)pbVar2)(pbVar2,0);
        if ((*pbVar3 & 2) == 0) {
          FMemory::Free(*(void **)(pbVar3 + -0x20));
        }
      }
      pbVar3 = pbVar3 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,int> @ 14616ad30

void __cdecl
DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,int>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
           *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &param_1->field_0x28;
    do {
      bVar1 = *pbVar3;
      if ((bVar1 & 1) != 0) {
        pbVar2 = pbVar3 + -0x20;
        if ((bVar1 & 2) == 0) {
          pbVar2 = *(byte **)(pbVar3 + -0x20);
        }
        *pbVar3 = bVar1 & 0xfe;
        (*(code *)**(undefined8 **)pbVar2)(pbVar2,0);
        if ((*pbVar3 & 2) == 0) {
          FMemory::Free(*(void **)(pbVar3 + -0x20));
        }
      }
      pbVar3 = pbVar3 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int> @ 14616ada0

void __cdecl
DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
          (FEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Bits).Buckets.Storage.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMovieSceneExecutionTokens::FEntry,int> @ 14616ade0

void __cdecl DestructItems<FMovieSceneExecutionTokens::FEntry,int>(FEntry *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &(param_1->Token).field_0x40;
    do {
      bVar1 = *pbVar3;
      if ((bVar1 & 1) != 0) {
        pbVar2 = pbVar3 + -0x40;
        if ((bVar1 & 2) == 0) {
          pbVar2 = *(byte **)(pbVar3 + -0x40);
        }
        *pbVar3 = bVar1 & 0xfe;
        (*(code *)**(undefined8 **)pbVar2)(pbVar2,0);
        if ((*pbVar3 & 2) == 0) {
          FMemory::Free(*(void **)(pbVar3 + -0x40));
        }
      }
      if (*(void **)(pbVar3 + -0x60) != (void *)0x0) {
        FMemory::Free(*(void **)(pbVar3 + -0x60));
      }
      if (*(void **)(pbVar3 + -0x78) != (void *)0x0) {
        FMemory::Free(*(void **)(pbVar3 + -0x78));
      }
      if (*(void **)(pbVar3 + -0x88) != (void *)0x0) {
        FMemory::Free(*(void **)(pbVar3 + -0x88));
      }
      pbVar3 = pbVar3 + 0xf0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex,int> @ 14616ae80

void __cdecl
DestructItems<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex,int>
          (FMetaDataToIndex *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->MetaData).Condition.SoftObjectPtr.field_0x18;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneBinding,int> @ 14616aed0

void __cdecl DestructItems<FMovieSceneBinding,int>(FMovieSceneBinding *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->BindingName_DEPRECATED;
    do {
      pFVar1 = (((TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if ((void *)((FMovieSceneBinding *)(pFVar2 + -2))->_padding_ != (void *)0x0) {
        FMemory::Free((void *)((FMovieSceneBinding *)(pFVar2 + -2))->_padding_);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneMarkedFrame,int> @ 14616af30

void __cdecl DestructItems<FMovieSceneMarkedFrame,int>(FMovieSceneMarkedFrame *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Label;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieScenePossessable,int> @ 14616af70

void __cdecl DestructItems<FMovieScenePossessable,int>(FMovieScenePossessable *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
    do {
      if ((void *)puVar1[4] != (void *)0x0) {
        FMemory::Free((void *)puVar1[4]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      if ((void *)puVar1[-5] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-5]);
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneSpawnable,int> @ 14616afd0

void __cdecl DestructItems<FMovieSceneSpawnable,int>(FMovieSceneSpawnable *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = (((TArray<FGuid,TSizedDefaultAllocator<32>_> *)
                ((TObjectPtr<UObject> *)(pFVar2 + 1) + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)(pFVar2 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + -2));
      }
      pFVar1 = (((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar2 + -5))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MovieScene::FPlaybackCapabilityIDInfo,int> @ 14616b040

void __cdecl
DestructItems<UE::MovieScene::FPlaybackCapabilityIDInfo,int>
          (FPlaybackCapabilityIDInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->DebugName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::MovieScene::FScheduledTask,int> @ 14616b080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestructItems<UE::MovieScene::FScheduledTask,int>(FScheduledTask *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->DebugName;
    do {
      pFVar1 = (((FLockedComponentData *)(pFVar2 + 2))->PreLockedComponentData).AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((TSharedPtr<UE::MovieScene::ITaskContext,1> *)(pFVar2 + -1))->
                 SharedReferenceCount).ReferenceController);
      DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
                (*(FEntry **)((longlong)(pFVar2 + -3) + 8),*(int *)(pFVar2 + -2));
      if (*(void **)((longlong)(pFVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -3) + 8));
      }
      DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
                (*(FEntry **)((longlong)(pFVar2 + -4) + 8),*(int *)(pFVar2 + -3));
      if (*(void **)((longlong)(pFVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -4) + 8));
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 8) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,int> @ 14616b110

void __cdecl
DestructItems<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,int>
          (TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>
           *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int> @ 14616b150

void __cdecl
DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
          (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &param_1->field_0x80;
    do {
      bVar1 = *pbVar3;
      if ((bVar1 & 1) != 0) {
        pbVar2 = pbVar3 + -0x80;
        if ((bVar1 & 2) == 0) {
          pbVar2 = *(byte **)(pbVar3 + -0x80);
        }
        *pbVar3 = bVar1 & 0xfe;
        (*(code *)**(undefined8 **)pbVar2)(pbVar2,0);
        if ((*pbVar3 & 2) == 0) {
          FMemory::Free(*(void **)(pbVar3 + -0x80));
        }
      }
      pbVar3 = pbVar3 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,int> @ 14616b1c0

void __cdecl
DestructItems<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,int>
          (TInlineValue<IMovieSceneSharedExecutionToken,32,8> *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &param_1->field_0x20;
    do {
      bVar1 = *pbVar3;
      if ((bVar1 & 1) != 0) {
        pbVar2 = pbVar3 + -0x20;
        if ((bVar1 & 2) == 0) {
          pbVar2 = *(byte **)(pbVar3 + -0x20);
        }
        *pbVar3 = bVar1 & 0xfe;
        (*(code *)**(undefined8 **)pbVar2)(pbVar2,0);
        if ((*pbVar3 & 2) == 0) {
          FMemory::Free(*(void **)(pbVar3 + -0x20));
        }
      }
      pbVar3 = pbVar3 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,int> @ 14616b230

void __cdecl
DestructItems<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,int>
          (TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>_&> @ 14616b280

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x8)
  ;
  MovieScene::FComponentMask::Set
            (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  MovieScene::FComponentMask::Set
            (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x30);
  MovieScene::FComponentMask::Set
            (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>_&> @ 14616b2e0

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
          *param_2)

{
  MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>::Apply
            ((TAdd<UE::MovieScene::FRootInstanceHandle> *)param_2,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAdd<FMovieSceneSequenceID>::Apply
            ((TAdd<FMovieSceneSequenceID> *)&param_2->field_0x8,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAdd<double>::Apply
            ((TAdd<double> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAdd<double>::Apply
            ((TAdd<double> *)&param_2->field_0x30,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  return;
}

// DuplicateObject<UMovieSceneClock> @ 14616b340

UMovieSceneClock * __cdecl
DuplicateObject<UMovieSceneClock>(UMovieSceneClock *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UMovieSceneClock *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UMovieSceneClock_NoRegister();
  pUVar2 = (UMovieSceneClock *)DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*> @ 14616fce0

FAggregatePreAnimatedStateMetaData * __cdecl
AlgoImpl::
FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
          (TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FPreAnimatedStateCachedValueHandle *param_2,pdm_ea6cf2fe param_3)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
  FVar3;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
                )0x0) {
    param_1 = (TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
           )((longlong)param_1 + (longlong)iVar2 * 0x14);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
         )param_1 == FVar3) break;
    if ((*(uint *)((longlong)(int)param_3 + (longlong)param_1) == (param_2->TypeID).TypeID) &&
       (*(int *)((longlong)(int)param_3 + 4 + (longlong)param_1) == (param_2->StorageIndex).Value))
    {
      return (FAggregatePreAnimatedStateMetaData *)
             (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
              )param_1;
    }
    param_1 = (TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 0x14);
  }
  return (FAggregatePreAnimatedStateMetaData *)0x0;
}

// FindBy<TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateEntry,UE::MovieScene::FPreAnimatedStateEntry_UE::MovieScene::FPreAnimatedStateMetaData::*> @ 14616fd80

FPreAnimatedStateMetaData * __cdecl
AlgoImpl::
FindBy<TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,UE::MovieScene::FPreAnimatedStateEntry,UE::MovieScene::FPreAnimatedStateEntry_UE::MovieScene::FPreAnimatedStateMetaData::*>
          (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FPreAnimatedStateEntry *param_2,pdm_ffecb909 param_3)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::MovieScene::FPreAnimatedStateMetaData> FVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  lVar4 = (longlong)(int)param_3;
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)0x0) {
    param_1 = (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)
          ((longlong)param_1 + (longlong)iVar2 * 0x14);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UE::MovieScene::FPreAnimatedStateMetaData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)param_1 == FVar3) break;
    if (((*(int *)(lVar4 + (longlong)param_1) == (param_2->GroupHandle).Value) &&
        (*(uint *)(lVar4 + 4 + (longlong)param_1) == (param_2->ValueHandle).TypeID.TypeID)) &&
       (*(int *)(lVar4 + 8 + (longlong)param_1) == (param_2->ValueHandle).StorageIndex.Value)) {
      return (FPreAnimatedStateMetaData *)
             (ForElementType<UE::MovieScene::FPreAnimatedStateMetaData>)param_1;
    }
    param_1 = (TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 0x14);
  }
  return (FPreAnimatedStateMetaData *)0x0;
}

// FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*> @ 14616fe30

FAggregatePreAnimatedStateMetaData * __cdecl
AlgoImpl::
FindBy<TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&,UE::MovieScene::FPreAnimatedStateCachedValueHandle,UE::MovieScene::FPreAnimatedStateCachedValueHandle_UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData::*>
          (TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FPreAnimatedStateCachedValueHandle *param_2,pdm_ea6cf2fe param_3)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
  FVar3;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
                )0x0) {
    param_1 = (TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
           )((longlong)param_1 + (longlong)iVar2 * 0x14);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
         )param_1 == FVar3) break;
    if ((*(uint *)((longlong)(int)param_3 + (longlong)param_1) == (param_2->TypeID).TypeID) &&
       (*(int *)((longlong)(int)param_3 + 4 + (longlong)param_1) == (param_2->StorageIndex).Value))
    {
      return (FAggregatePreAnimatedStateMetaData *)
             (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
              )param_1;
    }
    param_1 = (TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 0x14);
  }
  return (FAggregatePreAnimatedStateMetaData *)0x0;
}

// GetBlendingDataType<int> @ 146170fe0

FMovieSceneAnimTypeID __cdecl GetBlendingDataType<int>(void)

{
  ulong64 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&_TSS0);
    }
  }
  *in_RCX = TypeID.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetBlendingDataType<float> @ 146171070

FMovieSceneAnimTypeID __cdecl GetBlendingDataType<float>(void)

{
  ulong64 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&_TSS0);
    }
  }
  *in_RCX = TypeID.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetBlendingDataType<UE::Math::TTransform<double>_> @ 146171100

FMovieSceneAnimTypeID __cdecl GetBlendingDataType<UE::Math::TTransform<double>_>(void)

{
  ulong64 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&_TSS0);
    }
  }
  *in_RCX = TypeID.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetBlendingDataType<UE::Math::TVector2<double>_> @ 146171190

FMovieSceneAnimTypeID __cdecl GetBlendingDataType<UE::Math::TVector2<double>_>(void)

{
  ulong64 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&_TSS0);
    }
  }
  *in_RCX = TypeID.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetBlendingDataType<UE::Math::TVector4<double>_> @ 146171220

FMovieSceneAnimTypeID __cdecl GetBlendingDataType<UE::Math::TVector4<double>_>(void)

{
  ulong64 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&_TSS0);
    }
  }
  *in_RCX = TypeID.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetBlendingDataType<UE::Math::TVector<double>_> @ 1461712b0

FMovieSceneAnimTypeID __cdecl GetBlendingDataType<UE::Math::TVector<double>_>(void)

{
  ulong64 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&_TSS0);
    }
  }
  *in_RCX = TypeID.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetBlendingDataType<FEulerTransform> @ 146171340

FMovieSceneAnimTypeID __cdecl GetBlendingDataType<FEulerTransform>(void)

{
  ulong64 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&_TSS0);
    }
  }
  *in_RCX = TypeID.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetBlendingDataType<FLinearColor> @ 1461713d0

FMovieSceneAnimTypeID __cdecl GetBlendingDataType<FLinearColor>(void)

{
  ulong64 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      TypeId.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&_TSS0);
    }
  }
  *in_RCX = TypeId.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetTypeName<UMovieSceneTrackInstanceInstantiator> @ 146171fc0

FString * __cdecl GetTypeName<UMovieSceneTrackInstanceInstantiator>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneTrackInstanceInstantiator::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FMovieSceneSpawnable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>_> @ 146172000

void __cdecl
AlgoImpl::
HeapSiftDown<FMovieSceneSpawnable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>_>
          (FMovieSceneSpawnable *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_> *param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FScriptContainerElement *pFVar17;
  TObjectPtr<UFunction>_u_0 TVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  FScriptContainerElement *pFVar23;
  TObjectPtr<UObject>_u_0 TVar24;
  FScriptContainerElement *pFVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  TObjectPtr<UFunction>_u_0 TVar29;
  undefined8 uVar30;
  FScriptContainerElement *pFVar31;
  int iVar32;
  undefined6 uVar33;
  uint uVar34;
  ESpawnOwnership EVar35;
  undefined3 uVar36;
  FNameEntryId FVar37;
  int iVar38;
  int iVar39;
  bool bVar40;
  bool bVar41;
  undefined6 uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  ESpawnOwnership EVar51;
  undefined3 uVar52;
  FNameEntryId FVar53;
  longlong lVar54;
  FMovieSceneSpawnable *pFVar55;
  FMovieSceneSpawnable *pFVar56;
  int iVar57;
  bool bVar58;
  
  do {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar4 = param_2 * 2;
    iVar57 = iVar4 + 1;
    if (iVar4 + 2 < param_3) {
      lVar54 = (longlong)iVar4;
      lVar1 = lVar54 + 1;
      uVar2 = param_1[lVar1].Guid.A;
      uVar3 = param_1[lVar54 + 2].Guid.A;
      if (uVar3 < uVar2) {
        bVar58 = true;
      }
      else if (uVar2 < uVar3) {
        bVar58 = false;
      }
      else {
        uVar2 = param_1[lVar1].Guid.B;
        uVar3 = param_1[lVar54 + 2].Guid.B;
        if (uVar3 < uVar2) {
          bVar58 = true;
        }
        else if (uVar2 < uVar3) {
          bVar58 = false;
        }
        else {
          uVar2 = param_1[lVar1].Guid.C;
          uVar3 = param_1[lVar54 + 2].Guid.C;
          if (uVar3 < uVar2) {
            bVar58 = true;
          }
          else if (uVar2 < uVar3) {
            bVar58 = false;
          }
          else {
            bVar58 = param_1[lVar54 + 2].Guid.D < param_1[lVar1].Guid.D;
          }
        }
      }
      if (bVar58) {
        iVar57 = iVar4;
      }
      iVar57 = iVar57 + 1;
    }
    pFVar55 = param_1 + iVar57;
    pFVar56 = param_1 + param_2;
    uVar2 = (pFVar55->Guid).A;
    uVar3 = (pFVar56->Guid).A;
    if (uVar2 <= uVar3) {
      if (uVar3 != uVar2) {
        return;
      }
      uVar2 = (pFVar55->Guid).B;
      uVar3 = (pFVar56->Guid).B;
      if (uVar2 <= uVar3) {
        if (uVar3 != uVar2) {
          return;
        }
        uVar2 = (pFVar55->Guid).C;
        uVar3 = (pFVar56->Guid).C;
        if (uVar2 <= uVar3) {
          if (uVar3 != uVar2) {
            return;
          }
          if ((pFVar55->Guid).D <= (pFVar56->Guid).D) {
            return;
          }
        }
      }
    }
    dVar5 = (pFVar56->SpawnTransform).Rotation.XY.m128d_f64[0];
    dVar6 = (pFVar56->SpawnTransform).Rotation.XY.m128d_f64[1];
    dVar7 = (pFVar56->SpawnTransform).Rotation.ZW.m128d_f64[0];
    dVar8 = (pFVar56->SpawnTransform).Rotation.ZW.m128d_f64[1];
    dVar9 = (pFVar56->SpawnTransform).Translation.XY.m128d_f64[0];
    dVar10 = (pFVar56->SpawnTransform).Translation.XY.m128d_f64[1];
    dVar11 = (pFVar56->SpawnTransform).Translation.ZW.m128d_f64[0];
    dVar12 = (pFVar56->SpawnTransform).Translation.ZW.m128d_f64[1];
    dVar13 = (pFVar56->SpawnTransform).Scale3D.XY.m128d_f64[0];
    dVar14 = (pFVar56->SpawnTransform).Scale3D.XY.m128d_f64[1];
    dVar15 = (pFVar56->SpawnTransform).Scale3D.ZW.m128d_f64[0];
    dVar16 = (pFVar56->SpawnTransform).Scale3D.ZW.m128d_f64[1];
    pFVar17 = (pFVar56->Tags).AllocatorInstance.Data;
    iVar38 = (pFVar56->Tags).ArrayNum;
    iVar39 = (pFVar56->Tags).ArrayMax;
    bVar40 = pFVar56->bContinuouslyRespawn;
    bVar41 = pFVar56->bNetAddressableName;
    uVar42 = *(undefined6 *)&pFVar56->field_0x72;
    TVar18 = (pFVar56->DynamicBinding_DEPRECATED).Function.field0_0x0;
    uVar19 = *(undefined8 *)&(pFVar56->DynamicBinding_DEPRECATED).ResolveParamsProperty;
    uVar20 = *(undefined8 *)&(pFVar56->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
    uVar21 = *(undefined8 *)&(pFVar56->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
    uVar22 = *(undefined8 *)&(pFVar56->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
    uVar43 = (pFVar56->Guid).A;
    uVar44 = (pFVar56->Guid).B;
    uVar45 = (pFVar56->Guid).C;
    uVar46 = (pFVar56->Guid).D;
    pFVar23 = (pFVar56->Name).Data.AllocatorInstance.Data;
    iVar47 = (pFVar56->Name).Data.ArrayNum;
    iVar48 = (pFVar56->Name).Data.ArrayMax;
    TVar24 = (pFVar56->ObjectTemplate).field0_0x0;
    pFVar25 = (pFVar56->ChildPossessables).AllocatorInstance.Data;
    iVar49 = (pFVar56->ChildPossessables).ArrayNum;
    iVar50 = (pFVar56->ChildPossessables).ArrayMax;
    EVar51 = pFVar56->Ownership;
    uVar52 = *(undefined3 *)&pFVar56->field_0xd9;
    FVar53.Value = (pFVar56->LevelName).ComparisonIndex.Value;
    uVar26 = *(undefined8 *)&(pFVar56->LevelName).Number;
    uVar27 = *(undefined8 *)&pFVar56->field_0xe8;
    dVar28 = (pFVar55->SpawnTransform).Rotation.XY.m128d_f64[1];
    (pFVar56->SpawnTransform).Rotation.XY.m128d_f64[0] =
         (pFVar55->SpawnTransform).Rotation.XY.m128d_f64[0];
    (pFVar56->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar28;
    dVar28 = (pFVar55->SpawnTransform).Rotation.ZW.m128d_f64[1];
    (pFVar56->SpawnTransform).Rotation.ZW.m128d_f64[0] =
         (pFVar55->SpawnTransform).Rotation.ZW.m128d_f64[0];
    (pFVar56->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar28;
    dVar28 = (pFVar55->SpawnTransform).Translation.XY.m128d_f64[1];
    (pFVar56->SpawnTransform).Translation.XY.m128d_f64[0] =
         (pFVar55->SpawnTransform).Translation.XY.m128d_f64[0];
    (pFVar56->SpawnTransform).Translation.XY.m128d_f64[1] = dVar28;
    dVar28 = (pFVar55->SpawnTransform).Translation.ZW.m128d_f64[1];
    (pFVar56->SpawnTransform).Translation.ZW.m128d_f64[0] =
         (pFVar55->SpawnTransform).Translation.ZW.m128d_f64[0];
    (pFVar56->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar28;
    dVar28 = (pFVar55->SpawnTransform).Scale3D.XY.m128d_f64[1];
    (pFVar56->SpawnTransform).Scale3D.XY.m128d_f64[0] =
         (pFVar55->SpawnTransform).Scale3D.XY.m128d_f64[0];
    (pFVar56->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar28;
    dVar28 = (pFVar55->SpawnTransform).Scale3D.ZW.m128d_f64[1];
    (pFVar56->SpawnTransform).Scale3D.ZW.m128d_f64[0] =
         (pFVar55->SpawnTransform).Scale3D.ZW.m128d_f64[0];
    (pFVar56->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar28;
    iVar4 = (pFVar55->Tags).ArrayNum;
    iVar32 = (pFVar55->Tags).ArrayMax;
    (pFVar56->Tags).AllocatorInstance.Data = (pFVar55->Tags).AllocatorInstance.Data;
    (pFVar56->Tags).ArrayNum = iVar4;
    (pFVar56->Tags).ArrayMax = iVar32;
    bVar58 = pFVar55->bNetAddressableName;
    uVar33 = *(undefined6 *)&pFVar55->field_0x72;
    TVar29 = (pFVar55->DynamicBinding_DEPRECATED).Function.field0_0x0;
    pFVar56->bContinuouslyRespawn = pFVar55->bContinuouslyRespawn;
    pFVar56->bNetAddressableName = bVar58;
    *(undefined6 *)&pFVar56->field_0x72 = uVar33;
    (pFVar56->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar29;
    uVar30 = *(undefined8 *)&(pFVar55->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
    *(undefined8 *)&(pFVar56->DynamicBinding_DEPRECATED).ResolveParamsProperty =
         *(undefined8 *)&(pFVar55->DynamicBinding_DEPRECATED).ResolveParamsProperty;
    *(undefined8 *)&(pFVar56->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar30;
    uVar30 = *(undefined8 *)&(pFVar55->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
    *(undefined8 *)&(pFVar56->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
         *(undefined8 *)&(pFVar55->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
    *(undefined8 *)&(pFVar56->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = uVar30;
    uVar2 = (pFVar55->Guid).B;
    uVar3 = (pFVar55->Guid).C;
    uVar34 = (pFVar55->Guid).D;
    (pFVar56->Guid).A = (pFVar55->Guid).A;
    (pFVar56->Guid).B = uVar2;
    (pFVar56->Guid).C = uVar3;
    (pFVar56->Guid).D = uVar34;
    iVar4 = (pFVar55->Name).Data.ArrayNum;
    iVar32 = (pFVar55->Name).Data.ArrayMax;
    (pFVar56->Name).Data.AllocatorInstance.Data = (pFVar55->Name).Data.AllocatorInstance.Data;
    (pFVar56->Name).Data.ArrayNum = iVar4;
    (pFVar56->Name).Data.ArrayMax = iVar32;
    pFVar31 = (pFVar55->ChildPossessables).AllocatorInstance.Data;
    (pFVar56->ObjectTemplate).field0_0x0 = (pFVar55->ObjectTemplate).field0_0x0;
    (pFVar56->ChildPossessables).AllocatorInstance.Data = pFVar31;
    iVar4 = (pFVar55->ChildPossessables).ArrayMax;
    EVar35 = pFVar55->Ownership;
    uVar36 = *(undefined3 *)&pFVar55->field_0xd9;
    FVar37.Value = (pFVar55->LevelName).ComparisonIndex.Value;
    (pFVar56->ChildPossessables).ArrayNum = (pFVar55->ChildPossessables).ArrayNum;
    (pFVar56->ChildPossessables).ArrayMax = iVar4;
    pFVar56->Ownership = EVar35;
    *(undefined3 *)&pFVar56->field_0xd9 = uVar36;
    (pFVar56->LevelName).ComparisonIndex = (FNameEntryId)FVar37.Value;
    uVar30 = *(undefined8 *)&pFVar55->field_0xe8;
    *(undefined8 *)&(pFVar56->LevelName).Number = *(undefined8 *)&(pFVar55->LevelName).Number;
    *(undefined8 *)&pFVar56->field_0xe8 = uVar30;
    (pFVar55->SpawnTransform).Rotation.XY.m128d_f64[0] = dVar5;
    (pFVar55->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar6;
    (pFVar55->SpawnTransform).Rotation.ZW.m128d_f64[0] = dVar7;
    (pFVar55->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar8;
    (pFVar55->SpawnTransform).Translation.XY.m128d_f64[0] = dVar9;
    (pFVar55->SpawnTransform).Translation.XY.m128d_f64[1] = dVar10;
    (pFVar55->SpawnTransform).Translation.ZW.m128d_f64[0] = dVar11;
    (pFVar55->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar12;
    (pFVar55->SpawnTransform).Scale3D.XY.m128d_f64[0] = dVar13;
    (pFVar55->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar14;
    (pFVar55->SpawnTransform).Scale3D.ZW.m128d_f64[0] = dVar15;
    (pFVar55->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar16;
    (pFVar55->Tags).AllocatorInstance.Data = pFVar17;
    (pFVar55->Tags).ArrayNum = iVar38;
    (pFVar55->Tags).ArrayMax = iVar39;
    pFVar55->bContinuouslyRespawn = bVar40;
    pFVar55->bNetAddressableName = bVar41;
    *(undefined6 *)&pFVar55->field_0x72 = uVar42;
    (pFVar55->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar18;
    *(undefined8 *)&(pFVar55->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar19;
    *(undefined8 *)&(pFVar55->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar20;
    *(undefined8 *)&(pFVar55->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 = uVar21;
    *(undefined8 *)&(pFVar55->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = uVar22;
    (pFVar55->Guid).A = uVar43;
    (pFVar55->Guid).B = uVar44;
    (pFVar55->Guid).C = uVar45;
    (pFVar55->Guid).D = uVar46;
    (pFVar55->Name).Data.AllocatorInstance.Data = pFVar23;
    (pFVar55->Name).Data.ArrayNum = iVar47;
    (pFVar55->Name).Data.ArrayMax = iVar48;
    (pFVar55->ObjectTemplate).field0_0x0 = TVar24;
    (pFVar55->ChildPossessables).AllocatorInstance.Data = pFVar25;
    (pFVar55->ChildPossessables).ArrayNum = iVar49;
    (pFVar55->ChildPossessables).ArrayMax = iVar50;
    pFVar55->Ownership = EVar51;
    *(undefined3 *)&pFVar55->field_0xd9 = uVar52;
    (pFVar55->LevelName).ComparisonIndex = (FNameEntryId)FVar53.Value;
    *(undefined8 *)&(pFVar55->LevelName).Number = uVar26;
    *(undefined8 *)&pFVar55->field_0xe8 = uVar27;
    param_2 = iVar57;
  } while( true );
}

// HeapSortInternal<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,FIdentityFunctor,`FMovieSceneObjectCache::UpdateBindings'::__l98::<lambda_1>_> @ 146172300

void __cdecl
AlgoImpl::
HeapSortInternal<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,FIdentityFunctor,_FMovieSceneObjectCache::UpdateBindings_::__l98::<lambda_1>_>
          (TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> param_4)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr *pFVar2;
  FWeakObjectPtr FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  
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
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar13 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_146172412:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar12 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar13 = 0;
            FVar3 = param_1->WeakPtr;
            param_1->WeakPtr = param_1[lVar12].WeakPtr;
            param_1[lVar12].WeakPtr = FVar3;
            if (1 < iVar7) {
              do {
                iVar11 = iVar13 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  pUVar8 = FWeakObjectPtr::Get(&param_1[iVar11 + 2].WeakPtr);
                  pUVar9 = FWeakObjectPtr::Get(&param_1[iVar6].WeakPtr);
                  if (pUVar8 < pUVar9) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = &param_1[iVar13].WeakPtr;
                pUVar8 = FWeakObjectPtr::Get(pFVar1);
                pFVar2 = &param_1[iVar6].WeakPtr;
                pUVar9 = FWeakObjectPtr::Get(pFVar2);
                if (pUVar9 <= pUVar8) break;
                FVar3 = *pFVar1;
                *pFVar1 = *pFVar2;
                *pFVar2 = FVar3;
                iVar13 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar12 = lVar12 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar13 + -2;
      iVar13 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar10 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      pUVar8 = FWeakObjectPtr::Get(&param_1[iVar7 + 2].WeakPtr);
      pUVar9 = FWeakObjectPtr::Get(&param_1[iVar10].WeakPtr);
      if (pUVar8 < pUVar9) {
        iVar10 = iVar7;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar1 = &param_1[iVar6].WeakPtr;
    pUVar8 = FWeakObjectPtr::Get(pFVar1);
    pFVar2 = &param_1[iVar10].WeakPtr;
    pUVar9 = FWeakObjectPtr::Get(pFVar2);
    if (pUVar9 <= pUVar8) goto LAB_146172412;
    FVar3 = *pFVar1;
    *pFVar1 = *pFVar2;
    iVar7 = iVar10 * 2 + 1;
    *pFVar2 = FVar3;
    iVar6 = iVar10;
  } while( true );
}

// HeapSortInternal<FFrameTime,int,FIdentityFunctor,TLess<void>_> @ 146172510

void __cdecl
AlgoImpl::HeapSortInternal<FFrameTime,int,FIdentityFunctor,TLess<void>_>
          (FFrameTime *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FFrameNumber FVar9;
  longlong lVar10;
  FFrameNumber FVar11;
  int iVar12;
  float fStack_14;
  float fStack_c;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar12 = iVar6;
  iVar8 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_146172632:
      if (iVar8 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar12 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar1;
            if (1 < iVar6) {
              do {
                iVar5 = iVar12 * 2;
                iVar8 = iVar5 + 1;
                if (iVar5 + 2 < iVar6) {
                  FVar9 = param_1[iVar8].FrameNumber;
                  FVar11 = param_1[(longlong)iVar5 + 2].FrameNumber;
                  if (FVar11.Value < FVar9.Value) {
LAB_1461726c1:
                    bVar4 = true;
                  }
                  else {
                    if (FVar11.Value == FVar9.Value) {
                      fStack_c = param_1[(longlong)iVar5 + 2].SubFrame;
                      fStack_14 = param_1[iVar8].SubFrame;
                      if (fStack_c < fStack_14) goto LAB_1461726c1;
                    }
                    bVar4 = false;
                  }
                  if (bVar4) {
                    iVar8 = iVar5;
                  }
                  iVar8 = iVar8 + 1;
                }
                FVar1 = param_1[iVar8];
                FVar2 = param_1[iVar12];
                if (FVar1.FrameNumber.Value.Value <= FVar2.FrameNumber.Value.Value) {
                  if (FVar2.FrameNumber.Value.Value != FVar1.FrameNumber.Value.Value) break;
                  fStack_c = FVar2.SubFrame;
                  fStack_14 = FVar1.SubFrame;
                  if (fStack_14 <= fStack_c) break;
                }
                param_1[iVar12] = FVar1;
                param_1[iVar8] = FVar2;
                iVar12 = iVar8;
              } while (iVar8 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar8 + -1;
      iVar6 = iVar12 + -2;
      iVar12 = iVar6;
      iVar8 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      FVar9 = param_1[iVar7].FrameNumber;
      FVar11 = param_1[(longlong)iVar6 + 2].FrameNumber;
      if (FVar11.Value < FVar9.Value) {
LAB_1461725e0:
        bVar4 = true;
      }
      else {
        if (FVar11.Value == FVar9.Value) {
          fStack_14 = param_1[(longlong)iVar6 + 2].SubFrame;
          fStack_c = param_1[iVar7].SubFrame;
          if (fStack_14 < fStack_c) goto LAB_1461725e0;
        }
        bVar4 = false;
      }
      if (bVar4) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    FVar1 = param_1[iVar7];
    FVar2 = param_1[iVar5];
    if (FVar1.FrameNumber.Value.Value <= FVar2.FrameNumber.Value.Value) {
      if (FVar2.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
        fStack_c = FVar2.SubFrame;
        fStack_14 = FVar1.SubFrame;
        if (fStack_c < fStack_14) goto LAB_146172618;
      }
      goto LAB_146172632;
    }
LAB_146172618:
    param_1[iVar5] = FVar1;
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7] = FVar2;
    iVar5 = iVar7;
  } while( true );
}

// HeapSortInternal<FMovieSceneBinding,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_> @ 146172740

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneBinding,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>
          (FMovieSceneBinding *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneBinding,TLess<void>_> param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  longlong lVar19;
  FMovieSceneBinding *pFVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  FMovieSceneBinding *pFVar24;
  FMovieSceneBinding *pFVar25;
  int iVar26;
  TLess<void> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FMovieSceneBinding,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FMovieSceneBinding,TLess<void>_> *)&local_res20);
  iVar22 = param_2 + -1;
  lVar23 = (longlong)iVar22;
  if (0 < iVar22) {
    pFVar24 = param_1 + lVar23;
    do {
      lVar1 = pFVar24->_padding_;
      lVar19 = param_1->_padding_;
      lVar6 = param_1->_padding_;
      uVar10 = (param_1->ObjectGuid).A;
      uVar11 = (param_1->ObjectGuid).B;
      uVar12 = (param_1->ObjectGuid).C;
      uVar13 = (param_1->ObjectGuid).D;
      pFVar7 = (param_1->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
      iVar5 = (param_1->BindingName_DEPRECATED).Data.ArrayNum;
      iVar14 = (param_1->BindingName_DEPRECATED).Data.ArrayMax;
      pFVar8 = (param_1->Tracks).AllocatorInstance.Data;
      iVar15 = (param_1->Tracks).ArrayNum;
      iVar16 = (param_1->Tracks).ArrayMax;
      param_1->_padding_ = pFVar24->_padding_;
      param_1->_padding_ = lVar1;
      uVar2 = (pFVar24->ObjectGuid).B;
      uVar3 = (pFVar24->ObjectGuid).C;
      uVar9 = (pFVar24->ObjectGuid).D;
      (param_1->ObjectGuid).A = (pFVar24->ObjectGuid).A;
      (param_1->ObjectGuid).B = uVar2;
      (param_1->ObjectGuid).C = uVar3;
      (param_1->ObjectGuid).D = uVar9;
      iVar26 = (pFVar24->BindingName_DEPRECATED).Data.ArrayNum;
      iVar21 = (pFVar24->BindingName_DEPRECATED).Data.ArrayMax;
      (param_1->BindingName_DEPRECATED).Data.AllocatorInstance.Data =
           (pFVar24->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
      (param_1->BindingName_DEPRECATED).Data.ArrayNum = iVar26;
      (param_1->BindingName_DEPRECATED).Data.ArrayMax = iVar21;
      iVar26 = (pFVar24->Tracks).ArrayNum;
      iVar21 = (pFVar24->Tracks).ArrayMax;
      (param_1->Tracks).AllocatorInstance.Data = (pFVar24->Tracks).AllocatorInstance.Data;
      (param_1->Tracks).ArrayNum = iVar26;
      (param_1->Tracks).ArrayMax = iVar21;
      pFVar24->_padding_ = lVar19;
      pFVar24->_padding_ = lVar6;
      (pFVar24->ObjectGuid).A = uVar10;
      (pFVar24->ObjectGuid).B = uVar11;
      (pFVar24->ObjectGuid).C = uVar12;
      (pFVar24->ObjectGuid).D = uVar13;
      (pFVar24->BindingName_DEPRECATED).Data.AllocatorInstance.Data = pFVar7;
      (pFVar24->BindingName_DEPRECATED).Data.ArrayNum = iVar5;
      (pFVar24->BindingName_DEPRECATED).Data.ArrayMax = iVar14;
      (pFVar24->Tracks).AllocatorInstance.Data = pFVar8;
      (pFVar24->Tracks).ArrayNum = iVar15;
      (pFVar24->Tracks).ArrayMax = iVar16;
      iVar26 = 0;
      if (1 < iVar22) {
        do {
          iVar5 = iVar26 * 2;
          iVar21 = iVar5 + 1;
          if (iVar5 + 2 < iVar22) {
            lVar19 = (longlong)iVar5;
            lVar1 = lVar19 + 1;
            uVar2 = param_1[lVar1].ObjectGuid.A;
            uVar3 = param_1[lVar19 + 2].ObjectGuid.A;
            if (uVar3 < uVar2) {
              bVar18 = true;
            }
            else if (uVar2 < uVar3) {
              bVar18 = false;
            }
            else {
              uVar2 = param_1[lVar1].ObjectGuid.B;
              uVar3 = param_1[lVar19 + 2].ObjectGuid.B;
              if (uVar3 < uVar2) {
                bVar18 = true;
              }
              else if (uVar2 < uVar3) {
                bVar18 = false;
              }
              else {
                uVar2 = param_1[lVar1].ObjectGuid.C;
                uVar3 = param_1[lVar19 + 2].ObjectGuid.C;
                if (uVar3 < uVar2) {
                  bVar18 = true;
                }
                else if (uVar2 < uVar3) {
                  bVar18 = false;
                }
                else {
                  bVar18 = param_1[lVar19 + 2].ObjectGuid.D < param_1[lVar1].ObjectGuid.D;
                }
              }
            }
            if (bVar18) {
              iVar21 = iVar5;
            }
            iVar21 = iVar21 + 1;
          }
          pFVar20 = param_1 + iVar21;
          pFVar25 = param_1 + iVar26;
          uVar2 = (pFVar20->ObjectGuid).A;
          uVar3 = (pFVar25->ObjectGuid).A;
          if ((uVar2 <= uVar3) &&
             ((uVar3 != uVar2 ||
              ((uVar2 = (pFVar20->ObjectGuid).B, uVar3 = (pFVar25->ObjectGuid).B, uVar2 <= uVar3 &&
               ((uVar3 != uVar2 ||
                ((uVar2 = (pFVar20->ObjectGuid).C, uVar3 = (pFVar25->ObjectGuid).C, uVar2 <= uVar3
                 && ((uVar3 != uVar2 || ((pFVar20->ObjectGuid).D <= (pFVar25->ObjectGuid).D)))))))))
              ))) break;
          lVar1 = pFVar20->_padding_;
          lVar19 = pFVar25->_padding_;
          lVar6 = pFVar25->_padding_;
          uVar10 = (pFVar25->ObjectGuid).A;
          uVar11 = (pFVar25->ObjectGuid).B;
          uVar12 = (pFVar25->ObjectGuid).C;
          uVar13 = (pFVar25->ObjectGuid).D;
          pFVar7 = (pFVar25->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
          iVar14 = (pFVar25->BindingName_DEPRECATED).Data.ArrayNum;
          iVar15 = (pFVar25->BindingName_DEPRECATED).Data.ArrayMax;
          pFVar8 = (pFVar25->Tracks).AllocatorInstance.Data;
          iVar16 = (pFVar25->Tracks).ArrayNum;
          iVar17 = (pFVar25->Tracks).ArrayMax;
          pFVar25->_padding_ = pFVar20->_padding_;
          pFVar25->_padding_ = lVar1;
          uVar2 = (pFVar20->ObjectGuid).B;
          uVar3 = (pFVar20->ObjectGuid).C;
          uVar9 = (pFVar20->ObjectGuid).D;
          (pFVar25->ObjectGuid).A = (pFVar20->ObjectGuid).A;
          (pFVar25->ObjectGuid).B = uVar2;
          (pFVar25->ObjectGuid).C = uVar3;
          (pFVar25->ObjectGuid).D = uVar9;
          iVar26 = (pFVar20->BindingName_DEPRECATED).Data.ArrayNum;
          iVar5 = (pFVar20->BindingName_DEPRECATED).Data.ArrayMax;
          (pFVar25->BindingName_DEPRECATED).Data.AllocatorInstance.Data =
               (pFVar20->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
          (pFVar25->BindingName_DEPRECATED).Data.ArrayNum = iVar26;
          (pFVar25->BindingName_DEPRECATED).Data.ArrayMax = iVar5;
          iVar26 = (pFVar20->Tracks).ArrayNum;
          iVar5 = (pFVar20->Tracks).ArrayMax;
          (pFVar25->Tracks).AllocatorInstance.Data = (pFVar20->Tracks).AllocatorInstance.Data;
          (pFVar25->Tracks).ArrayNum = iVar26;
          (pFVar25->Tracks).ArrayMax = iVar5;
          pFVar20->_padding_ = lVar19;
          pFVar20->_padding_ = lVar6;
          (pFVar20->ObjectGuid).A = uVar10;
          (pFVar20->ObjectGuid).B = uVar11;
          (pFVar20->ObjectGuid).C = uVar12;
          (pFVar20->ObjectGuid).D = uVar13;
          (pFVar20->BindingName_DEPRECATED).Data.AllocatorInstance.Data = pFVar7;
          (pFVar20->BindingName_DEPRECATED).Data.ArrayNum = iVar14;
          (pFVar20->BindingName_DEPRECATED).Data.ArrayMax = iVar15;
          (pFVar20->Tracks).AllocatorInstance.Data = pFVar8;
          (pFVar20->Tracks).ArrayNum = iVar16;
          (pFVar20->Tracks).ArrayMax = iVar17;
          iVar26 = iVar21;
        } while (iVar21 * 2 + 1 < iVar22);
      }
      iVar22 = iVar22 + -1;
      lVar23 = lVar23 + -1;
      pFVar24 = pFVar24 + -1;
    } while (0 < lVar23);
  }
  return;
}

// HeapSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,`UMovieScene::FindNextMarkedFrame'::__l2::<lambda_1>_>_> @ 146172950

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::FindNextMarkedFrame_::__l2::<lambda_1>_>_>
          (FMovieSceneMarkedFrame *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneMarkedFrame,_public:_int___cdecl_UMovieScene::FindNextMarkedFrame(FFrameNumber,bool)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined6 uVar6;
  FFrameNumber FVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined6 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  FMovieSceneMarkedFrame *pFVar20;
  FMovieSceneMarkedFrame *pFVar21;
  int iVar22;
  FMovieSceneMarkedFrame *pFVar23;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar17 = iVar16;
  iVar22 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_146172a56:
      if (iVar22 == 0) {
        iVar16 = param_2 + -1;
        lVar19 = (longlong)iVar16;
        if (0 < iVar16) {
          pFVar23 = param_1 + lVar19;
          do {
            uVar4 = *(undefined4 *)&pFVar23->field_0x4;
            pFVar2 = (pFVar23->Label).Data.AllocatorInstance.Data;
            iVar18 = 0;
            FVar7.Value = (param_1->FrameNumber).Value;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            pFVar3 = (param_1->Label).Data.AllocatorInstance.Data;
            iVar15 = (param_1->Label).Data.ArrayNum;
            iVar22 = (param_1->Label).Data.ArrayMax;
            bVar11 = param_1->bIsDeterminismFence;
            bVar12 = param_1->bIsInclusiveTime;
            uVar13 = *(undefined6 *)&param_1->field_0x1a;
            param_1->FrameNumber = (FFrameNumber)(pFVar23->FrameNumber).Value;
            *(undefined4 *)&param_1->field_0x4 = uVar4;
            (param_1->Label).Data.AllocatorInstance.Data = pFVar2;
            iVar17 = (pFVar23->Label).Data.ArrayMax;
            bVar14 = pFVar23->bIsDeterminismFence;
            bVar5 = pFVar23->bIsInclusiveTime;
            uVar6 = *(undefined6 *)&pFVar23->field_0x1a;
            (param_1->Label).Data.ArrayNum = (pFVar23->Label).Data.ArrayNum;
            (param_1->Label).Data.ArrayMax = iVar17;
            param_1->bIsDeterminismFence = bVar14;
            param_1->bIsInclusiveTime = bVar5;
            *(undefined6 *)&param_1->field_0x1a = uVar6;
            pFVar23->FrameNumber = (FFrameNumber)FVar7.Value;
            *(undefined4 *)&pFVar23->field_0x4 = uVar8;
            (pFVar23->Label).Data.AllocatorInstance.Data = pFVar3;
            (pFVar23->Label).Data.ArrayNum = iVar15;
            (pFVar23->Label).Data.ArrayMax = iVar22;
            pFVar23->bIsDeterminismFence = bVar11;
            pFVar23->bIsInclusiveTime = bVar12;
            *(undefined6 *)&pFVar23->field_0x1a = uVar13;
            if (1 < iVar16) {
              do {
                iVar15 = iVar18 * 2;
                iVar17 = iVar15 + 1;
                if (iVar15 + 2 < iVar16) {
                  if (param_1[(longlong)iVar15 + 2].FrameNumber.Value <
                      param_1[iVar17].FrameNumber.Value) {
                    iVar17 = iVar15;
                  }
                  iVar17 = iVar17 + 1;
                }
                pFVar20 = param_1 + iVar17;
                pFVar21 = param_1 + iVar18;
                if ((pFVar20->FrameNumber).Value <= (pFVar21->FrameNumber).Value) break;
                uVar4 = *(undefined4 *)&pFVar20->field_0x4;
                pFVar2 = (pFVar20->Label).Data.AllocatorInstance.Data;
                FVar7.Value = (pFVar21->FrameNumber).Value;
                uVar8 = *(undefined4 *)&pFVar21->field_0x4;
                pFVar3 = (pFVar21->Label).Data.AllocatorInstance.Data;
                iVar22 = (pFVar21->Label).Data.ArrayNum;
                iVar18 = (pFVar21->Label).Data.ArrayMax;
                bVar11 = pFVar21->bIsDeterminismFence;
                bVar12 = pFVar21->bIsInclusiveTime;
                uVar13 = *(undefined6 *)&pFVar21->field_0x1a;
                pFVar21->FrameNumber = (FFrameNumber)(pFVar20->FrameNumber).Value;
                *(undefined4 *)&pFVar21->field_0x4 = uVar4;
                (pFVar21->Label).Data.AllocatorInstance.Data = pFVar2;
                iVar15 = (pFVar20->Label).Data.ArrayMax;
                bVar14 = pFVar20->bIsDeterminismFence;
                bVar5 = pFVar20->bIsInclusiveTime;
                uVar6 = *(undefined6 *)&pFVar20->field_0x1a;
                (pFVar21->Label).Data.ArrayNum = (pFVar20->Label).Data.ArrayNum;
                (pFVar21->Label).Data.ArrayMax = iVar15;
                pFVar21->bIsDeterminismFence = bVar14;
                pFVar21->bIsInclusiveTime = bVar5;
                *(undefined6 *)&pFVar21->field_0x1a = uVar6;
                pFVar20->FrameNumber = (FFrameNumber)FVar7.Value;
                *(undefined4 *)&pFVar20->field_0x4 = uVar8;
                (pFVar20->Label).Data.AllocatorInstance.Data = pFVar3;
                (pFVar20->Label).Data.ArrayNum = iVar22;
                (pFVar20->Label).Data.ArrayMax = iVar18;
                pFVar20->bIsDeterminismFence = bVar11;
                pFVar20->bIsInclusiveTime = bVar12;
                *(undefined6 *)&pFVar20->field_0x1a = uVar13;
                iVar18 = iVar17;
              } while (iVar17 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar19 = lVar19 + -1;
            pFVar23 = pFVar23 + -1;
          } while (0 < lVar19);
        }
        return;
      }
      iVar15 = iVar22 + -1;
      iVar16 = iVar17 + -2;
      iVar17 = iVar16;
      iVar22 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar18 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      if (param_1[(longlong)iVar16 + 2].FrameNumber.Value < param_1[iVar18].FrameNumber.Value) {
        iVar18 = iVar16;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar23 = param_1 + iVar18;
    pFVar20 = param_1 + iVar15;
    if ((pFVar23->FrameNumber).Value <= (pFVar20->FrameNumber).Value) goto LAB_146172a56;
    uVar4 = *(undefined4 *)&pFVar23->field_0x4;
    pFVar2 = (pFVar23->Label).Data.AllocatorInstance.Data;
    iVar16 = iVar18 * 2 + 1;
    FVar7.Value = (pFVar20->FrameNumber).Value;
    uVar8 = *(undefined4 *)&pFVar20->field_0x4;
    pFVar3 = (pFVar20->Label).Data.AllocatorInstance.Data;
    iVar9 = (pFVar20->Label).Data.ArrayNum;
    iVar10 = (pFVar20->Label).Data.ArrayMax;
    bVar11 = pFVar20->bIsDeterminismFence;
    bVar12 = pFVar20->bIsInclusiveTime;
    uVar13 = *(undefined6 *)&pFVar20->field_0x1a;
    pFVar20->FrameNumber = (FFrameNumber)(pFVar23->FrameNumber).Value;
    *(undefined4 *)&pFVar20->field_0x4 = uVar4;
    (pFVar20->Label).Data.AllocatorInstance.Data = pFVar2;
    iVar15 = (pFVar23->Label).Data.ArrayMax;
    bVar14 = pFVar23->bIsDeterminismFence;
    bVar5 = pFVar23->bIsInclusiveTime;
    uVar6 = *(undefined6 *)&pFVar23->field_0x1a;
    (pFVar20->Label).Data.ArrayNum = (pFVar23->Label).Data.ArrayNum;
    (pFVar20->Label).Data.ArrayMax = iVar15;
    pFVar20->bIsDeterminismFence = bVar14;
    pFVar20->bIsInclusiveTime = bVar5;
    *(undefined6 *)&pFVar20->field_0x1a = uVar6;
    pFVar23->FrameNumber = (FFrameNumber)FVar7.Value;
    *(undefined4 *)&pFVar23->field_0x4 = uVar8;
    (pFVar23->Label).Data.AllocatorInstance.Data = pFVar3;
    (pFVar23->Label).Data.ArrayNum = iVar9;
    (pFVar23->Label).Data.ArrayMax = iVar10;
    pFVar23->bIsDeterminismFence = bVar11;
    pFVar23->bIsInclusiveTime = bVar12;
    *(undefined6 *)&pFVar23->field_0x1a = uVar13;
    iVar15 = iVar18;
  } while( true );
}

// HeapSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,`UMovieScene::SortMarkedFrames'::__l2::<lambda_1>_>_> @ 146172b50

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::SortMarkedFrames_::__l2::<lambda_1>_>_>
          (FMovieSceneMarkedFrame *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneMarkedFrame,_public:_void___cdecl_UMovieScene::SortMarkedFrames(void)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined6 uVar6;
  FFrameNumber FVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined6 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  FMovieSceneMarkedFrame *pFVar20;
  FMovieSceneMarkedFrame *pFVar21;
  int iVar22;
  FMovieSceneMarkedFrame *pFVar23;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar17 = iVar16;
  iVar22 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_146172c56:
      if (iVar22 == 0) {
        iVar16 = param_2 + -1;
        lVar19 = (longlong)iVar16;
        if (0 < iVar16) {
          pFVar23 = param_1 + lVar19;
          do {
            uVar4 = *(undefined4 *)&pFVar23->field_0x4;
            pFVar2 = (pFVar23->Label).Data.AllocatorInstance.Data;
            iVar18 = 0;
            FVar7.Value = (param_1->FrameNumber).Value;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            pFVar3 = (param_1->Label).Data.AllocatorInstance.Data;
            iVar15 = (param_1->Label).Data.ArrayNum;
            iVar22 = (param_1->Label).Data.ArrayMax;
            bVar11 = param_1->bIsDeterminismFence;
            bVar12 = param_1->bIsInclusiveTime;
            uVar13 = *(undefined6 *)&param_1->field_0x1a;
            param_1->FrameNumber = (FFrameNumber)(pFVar23->FrameNumber).Value;
            *(undefined4 *)&param_1->field_0x4 = uVar4;
            (param_1->Label).Data.AllocatorInstance.Data = pFVar2;
            iVar17 = (pFVar23->Label).Data.ArrayMax;
            bVar14 = pFVar23->bIsDeterminismFence;
            bVar5 = pFVar23->bIsInclusiveTime;
            uVar6 = *(undefined6 *)&pFVar23->field_0x1a;
            (param_1->Label).Data.ArrayNum = (pFVar23->Label).Data.ArrayNum;
            (param_1->Label).Data.ArrayMax = iVar17;
            param_1->bIsDeterminismFence = bVar14;
            param_1->bIsInclusiveTime = bVar5;
            *(undefined6 *)&param_1->field_0x1a = uVar6;
            pFVar23->FrameNumber = (FFrameNumber)FVar7.Value;
            *(undefined4 *)&pFVar23->field_0x4 = uVar8;
            (pFVar23->Label).Data.AllocatorInstance.Data = pFVar3;
            (pFVar23->Label).Data.ArrayNum = iVar15;
            (pFVar23->Label).Data.ArrayMax = iVar22;
            pFVar23->bIsDeterminismFence = bVar11;
            pFVar23->bIsInclusiveTime = bVar12;
            *(undefined6 *)&pFVar23->field_0x1a = uVar13;
            if (1 < iVar16) {
              do {
                iVar15 = iVar18 * 2;
                iVar17 = iVar15 + 1;
                if (iVar15 + 2 < iVar16) {
                  if (param_1[(longlong)iVar15 + 2].FrameNumber.Value <
                      param_1[iVar17].FrameNumber.Value) {
                    iVar17 = iVar15;
                  }
                  iVar17 = iVar17 + 1;
                }
                pFVar20 = param_1 + iVar17;
                pFVar21 = param_1 + iVar18;
                if ((pFVar20->FrameNumber).Value <= (pFVar21->FrameNumber).Value) break;
                uVar4 = *(undefined4 *)&pFVar20->field_0x4;
                pFVar2 = (pFVar20->Label).Data.AllocatorInstance.Data;
                FVar7.Value = (pFVar21->FrameNumber).Value;
                uVar8 = *(undefined4 *)&pFVar21->field_0x4;
                pFVar3 = (pFVar21->Label).Data.AllocatorInstance.Data;
                iVar22 = (pFVar21->Label).Data.ArrayNum;
                iVar18 = (pFVar21->Label).Data.ArrayMax;
                bVar11 = pFVar21->bIsDeterminismFence;
                bVar12 = pFVar21->bIsInclusiveTime;
                uVar13 = *(undefined6 *)&pFVar21->field_0x1a;
                pFVar21->FrameNumber = (FFrameNumber)(pFVar20->FrameNumber).Value;
                *(undefined4 *)&pFVar21->field_0x4 = uVar4;
                (pFVar21->Label).Data.AllocatorInstance.Data = pFVar2;
                iVar15 = (pFVar20->Label).Data.ArrayMax;
                bVar14 = pFVar20->bIsDeterminismFence;
                bVar5 = pFVar20->bIsInclusiveTime;
                uVar6 = *(undefined6 *)&pFVar20->field_0x1a;
                (pFVar21->Label).Data.ArrayNum = (pFVar20->Label).Data.ArrayNum;
                (pFVar21->Label).Data.ArrayMax = iVar15;
                pFVar21->bIsDeterminismFence = bVar14;
                pFVar21->bIsInclusiveTime = bVar5;
                *(undefined6 *)&pFVar21->field_0x1a = uVar6;
                pFVar20->FrameNumber = (FFrameNumber)FVar7.Value;
                *(undefined4 *)&pFVar20->field_0x4 = uVar8;
                (pFVar20->Label).Data.AllocatorInstance.Data = pFVar3;
                (pFVar20->Label).Data.ArrayNum = iVar22;
                (pFVar20->Label).Data.ArrayMax = iVar18;
                pFVar20->bIsDeterminismFence = bVar11;
                pFVar20->bIsInclusiveTime = bVar12;
                *(undefined6 *)&pFVar20->field_0x1a = uVar13;
                iVar18 = iVar17;
              } while (iVar17 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar19 = lVar19 + -1;
            pFVar23 = pFVar23 + -1;
          } while (0 < lVar19);
        }
        return;
      }
      iVar15 = iVar22 + -1;
      iVar16 = iVar17 + -2;
      iVar17 = iVar16;
      iVar22 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar18 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      if (param_1[(longlong)iVar16 + 2].FrameNumber.Value < param_1[iVar18].FrameNumber.Value) {
        iVar18 = iVar16;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar23 = param_1 + iVar18;
    pFVar20 = param_1 + iVar15;
    if ((pFVar23->FrameNumber).Value <= (pFVar20->FrameNumber).Value) goto LAB_146172c56;
    uVar4 = *(undefined4 *)&pFVar23->field_0x4;
    pFVar2 = (pFVar23->Label).Data.AllocatorInstance.Data;
    iVar16 = iVar18 * 2 + 1;
    FVar7.Value = (pFVar20->FrameNumber).Value;
    uVar8 = *(undefined4 *)&pFVar20->field_0x4;
    pFVar3 = (pFVar20->Label).Data.AllocatorInstance.Data;
    iVar9 = (pFVar20->Label).Data.ArrayNum;
    iVar10 = (pFVar20->Label).Data.ArrayMax;
    bVar11 = pFVar20->bIsDeterminismFence;
    bVar12 = pFVar20->bIsInclusiveTime;
    uVar13 = *(undefined6 *)&pFVar20->field_0x1a;
    pFVar20->FrameNumber = (FFrameNumber)(pFVar23->FrameNumber).Value;
    *(undefined4 *)&pFVar20->field_0x4 = uVar4;
    (pFVar20->Label).Data.AllocatorInstance.Data = pFVar2;
    iVar15 = (pFVar23->Label).Data.ArrayMax;
    bVar14 = pFVar23->bIsDeterminismFence;
    bVar5 = pFVar23->bIsInclusiveTime;
    uVar6 = *(undefined6 *)&pFVar23->field_0x1a;
    (pFVar20->Label).Data.ArrayNum = (pFVar23->Label).Data.ArrayNum;
    (pFVar20->Label).Data.ArrayMax = iVar15;
    pFVar20->bIsDeterminismFence = bVar14;
    pFVar20->bIsInclusiveTime = bVar5;
    *(undefined6 *)&pFVar20->field_0x1a = uVar6;
    pFVar23->FrameNumber = (FFrameNumber)FVar7.Value;
    *(undefined4 *)&pFVar23->field_0x4 = uVar8;
    (pFVar23->Label).Data.AllocatorInstance.Data = pFVar3;
    (pFVar23->Label).Data.ArrayNum = iVar9;
    (pFVar23->Label).Data.ArrayMax = iVar10;
    pFVar23->bIsDeterminismFence = bVar11;
    pFVar23->bIsInclusiveTime = bVar12;
    *(undefined6 *)&pFVar23->field_0x1a = uVar13;
    iVar15 = iVar18;
  } while( true );
}

// HeapSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_> @ 146172d50

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_>
          (FMovieSceneOrderedEvaluationKey *param_1,int param_2,
          TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*> param_3,
          TLess<void> param_4)

{
  FMovieSceneOrderedEvaluationKey *pFVar1;
  FMovieSceneOrderedEvaluationKey *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FMovieSceneTrackIdentifier FVar6;
  FMovieSceneSequenceID FVar7;
  FMovieSceneTrackIdentifier FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  FMovieSceneOrderedEvaluationKey *pFVar15;
  int iVar16;
  int iVar17;
  
  lVar13 = (longlong)(int)param_3.DataMemberPtr;
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar16 = iVar11;
  iVar17 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_146172e55:
      if (iVar17 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar15 = param_1 + lVar14;
          do {
            FVar6.Value = (pFVar15->Key).TrackIdentifier.Value;
            uVar4 = *(undefined8 *)&(pFVar15->Key).SectionIndex;
            FVar7.Value = (param_1->Key).SequenceID.Value;
            FVar8.Value = (param_1->Key).TrackIdentifier.Value;
            uVar5 = *(undefined8 *)&(param_1->Key).SectionIndex;
            (param_1->Key).SequenceID = (FMovieSceneSequenceID)(pFVar15->Key).SequenceID.Value;
            (param_1->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar6.Value;
            *(undefined8 *)&(param_1->Key).SectionIndex = uVar4;
            (pFVar15->Key).SequenceID = (FMovieSceneSequenceID)FVar7.Value;
            (pFVar15->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar8.Value;
            *(undefined8 *)&(pFVar15->Key).SectionIndex = uVar5;
            iVar16 = 0;
            if (1 < iVar11) {
              do {
                iVar17 = iVar16 * 2;
                iVar10 = iVar17 + 1;
                if (iVar17 + 2 < iVar11) {
                  if (*(ushort *)
                       ((longlong)&param_1[(longlong)iVar17 + 2].Key.SequenceID.Value + lVar13) <
                      *(ushort *)((longlong)&param_1[iVar10].Key.SequenceID.Value + lVar13)) {
                    iVar10 = iVar17;
                  }
                  iVar10 = iVar10 + 1;
                }
                if (*(ushort *)((longlong)&param_1[iVar10].Key.SequenceID.Value + lVar13) <=
                    *(ushort *)((longlong)&param_1[iVar16].Key.SequenceID.Value + lVar13)) break;
                pFVar1 = param_1 + iVar10;
                FVar6.Value = (pFVar1->Key).TrackIdentifier.Value;
                uVar4 = *(undefined8 *)&(pFVar1->Key).SectionIndex;
                pFVar2 = param_1 + iVar16;
                FVar7.Value = (pFVar2->Key).SequenceID.Value;
                FVar8.Value = (pFVar2->Key).TrackIdentifier.Value;
                uVar5 = *(undefined8 *)&(pFVar2->Key).SectionIndex;
                pFVar2 = param_1 + iVar16;
                (pFVar2->Key).SequenceID = (FMovieSceneSequenceID)(pFVar1->Key).SequenceID.Value;
                (pFVar2->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar6.Value;
                *(undefined8 *)&(pFVar2->Key).SectionIndex = uVar4;
                pFVar1 = param_1 + iVar10;
                (pFVar1->Key).SequenceID = (FMovieSceneSequenceID)FVar7.Value;
                (pFVar1->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar8.Value;
                *(undefined8 *)&(pFVar1->Key).SectionIndex = uVar5;
                iVar16 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar17 + -1;
      iVar11 = iVar16 + -2;
      iVar16 = iVar11;
      iVar17 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (*(ushort *)((longlong)&param_1[(longlong)iVar11 + 2].Key.SequenceID.Value + lVar13) <
          *(ushort *)((longlong)&param_1[iVar12].Key.SequenceID.Value + lVar13)) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    if (*(ushort *)((longlong)&param_1[iVar12].Key.SequenceID.Value + lVar13) <=
        *(ushort *)((longlong)&param_1[iVar10].Key.SequenceID.Value + lVar13)) goto LAB_146172e55;
    pFVar15 = param_1 + iVar12;
    FVar6.Value = (pFVar15->Key).TrackIdentifier.Value;
    uVar4 = *(undefined8 *)&(pFVar15->Key).SectionIndex;
    iVar11 = iVar12 * 2 + 1;
    pFVar1 = param_1 + iVar10;
    FVar7.Value = (pFVar1->Key).SequenceID.Value;
    FVar8.Value = (pFVar1->Key).TrackIdentifier.Value;
    uVar5 = *(undefined8 *)&(pFVar1->Key).SectionIndex;
    pFVar1 = param_1 + iVar10;
    (pFVar1->Key).SequenceID = (FMovieSceneSequenceID)(pFVar15->Key).SequenceID.Value;
    (pFVar1->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar6.Value;
    *(undefined8 *)&(pFVar1->Key).SectionIndex = uVar4;
    pFVar15 = param_1 + iVar12;
    (pFVar15->Key).SequenceID = (FMovieSceneSequenceID)FVar7.Value;
    (pFVar15->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar8.Value;
    *(undefined8 *)&(pFVar15->Key).SectionIndex = uVar5;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<FMovieScenePossessable,int,FIdentityFunctor,TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_> @ 146172f50

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieScenePossessable,int,FIdentityFunctor,TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_>
          (FMovieScenePossessable *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieScenePossessable,TLess<void>_> param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TObjectPtr<UFunction>_u_0 TVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  undefined8 uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  bool bVar34;
  longlong lVar35;
  FMovieScenePossessable *pFVar36;
  int iVar37;
  int iVar38;
  longlong lVar39;
  FMovieScenePossessable *pFVar40;
  FMovieScenePossessable *pFVar41;
  int iVar42;
  TLess<void> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar34 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar34) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FMovieScenePossessable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FMovieScenePossessable,TLess<void>_> *)&local_res20);
  iVar38 = param_2 + -1;
  lVar39 = (longlong)iVar38;
  if (0 < iVar38) {
    pFVar40 = param_1 + lVar39;
    do {
      iVar42 = (pFVar40->Tags).ArrayNum;
      iVar37 = (pFVar40->Tags).ArrayMax;
      pFVar6 = (param_1->Tags).AllocatorInstance.Data;
      iVar5 = (param_1->Tags).ArrayNum;
      iVar16 = (param_1->Tags).ArrayMax;
      TVar7 = (param_1->DynamicBinding_DEPRECATED).Function.field0_0x0;
      uVar8 = *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty;
      uVar9 = *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
      uVar10 = *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10
      ;
      uVar11 = *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18
      ;
      uVar17 = (param_1->Guid).A;
      uVar18 = (param_1->Guid).B;
      uVar19 = (param_1->Guid).C;
      uVar20 = (param_1->Guid).D;
      pFVar12 = (param_1->Name).Data.AllocatorInstance.Data;
      iVar21 = (param_1->Name).Data.ArrayNum;
      iVar22 = (param_1->Name).Data.ArrayMax;
      uVar23 = (param_1->ParentGuid).A;
      uVar24 = (param_1->ParentGuid).B;
      uVar25 = (param_1->ParentGuid).C;
      uVar26 = (param_1->ParentGuid).D;
      uVar27 = (param_1->SpawnableObjectBindingID).Guid.A;
      uVar28 = (param_1->SpawnableObjectBindingID).Guid.B;
      uVar29 = (param_1->SpawnableObjectBindingID).Guid.C;
      uVar30 = (param_1->SpawnableObjectBindingID).Guid.D;
      iVar31 = (param_1->SpawnableObjectBindingID).SequenceID;
      iVar32 = (param_1->SpawnableObjectBindingID).ResolveParentIndex;
      (param_1->Tags).AllocatorInstance.Data = (pFVar40->Tags).AllocatorInstance.Data;
      (param_1->Tags).ArrayNum = iVar42;
      (param_1->Tags).ArrayMax = iVar37;
      uVar13 = *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty;
      (param_1->DynamicBinding_DEPRECATED).Function.field0_0x0 =
           (pFVar40->DynamicBinding_DEPRECATED).Function.field0_0x0;
      *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar13;
      uVar13 = *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10
      ;
      *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
           *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
      *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 = uVar13
      ;
      uVar2 = (pFVar40->Guid).A;
      uVar3 = (pFVar40->Guid).B;
      *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
           *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
      (param_1->Guid).A = uVar2;
      (param_1->Guid).B = uVar3;
      uVar2 = (pFVar40->Guid).D;
      pFVar14 = (pFVar40->Name).Data.AllocatorInstance.Data;
      (param_1->Guid).C = (pFVar40->Guid).C;
      (param_1->Guid).D = uVar2;
      (param_1->Name).Data.AllocatorInstance.Data = pFVar14;
      iVar42 = (pFVar40->Name).Data.ArrayMax;
      uVar2 = (pFVar40->ParentGuid).A;
      uVar3 = (pFVar40->ParentGuid).B;
      (param_1->Name).Data.ArrayNum = (pFVar40->Name).Data.ArrayNum;
      (param_1->Name).Data.ArrayMax = iVar42;
      (param_1->ParentGuid).A = uVar2;
      (param_1->ParentGuid).B = uVar3;
      uVar2 = (pFVar40->ParentGuid).D;
      uVar3 = (pFVar40->SpawnableObjectBindingID).Guid.A;
      uVar15 = (pFVar40->SpawnableObjectBindingID).Guid.B;
      (param_1->ParentGuid).C = (pFVar40->ParentGuid).C;
      (param_1->ParentGuid).D = uVar2;
      (param_1->SpawnableObjectBindingID).Guid.A = uVar3;
      (param_1->SpawnableObjectBindingID).Guid.B = uVar15;
      uVar2 = (pFVar40->SpawnableObjectBindingID).Guid.D;
      iVar42 = (pFVar40->SpawnableObjectBindingID).SequenceID;
      iVar37 = (pFVar40->SpawnableObjectBindingID).ResolveParentIndex;
      (param_1->SpawnableObjectBindingID).Guid.C = (pFVar40->SpawnableObjectBindingID).Guid.C;
      (param_1->SpawnableObjectBindingID).Guid.D = uVar2;
      (param_1->SpawnableObjectBindingID).SequenceID = iVar42;
      (param_1->SpawnableObjectBindingID).ResolveParentIndex = iVar37;
      (pFVar40->Tags).AllocatorInstance.Data = pFVar6;
      (pFVar40->Tags).ArrayNum = iVar5;
      (pFVar40->Tags).ArrayMax = iVar16;
      (pFVar40->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar7;
      *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar8;
      *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar9;
      *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 = uVar10
      ;
      *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = uVar11
      ;
      (pFVar40->Guid).A = uVar17;
      (pFVar40->Guid).B = uVar18;
      (pFVar40->Guid).C = uVar19;
      (pFVar40->Guid).D = uVar20;
      (pFVar40->Name).Data.AllocatorInstance.Data = pFVar12;
      (pFVar40->Name).Data.ArrayNum = iVar21;
      (pFVar40->Name).Data.ArrayMax = iVar22;
      (pFVar40->ParentGuid).A = uVar23;
      (pFVar40->ParentGuid).B = uVar24;
      (pFVar40->ParentGuid).C = uVar25;
      (pFVar40->ParentGuid).D = uVar26;
      (pFVar40->SpawnableObjectBindingID).Guid.A = uVar27;
      (pFVar40->SpawnableObjectBindingID).Guid.B = uVar28;
      (pFVar40->SpawnableObjectBindingID).Guid.C = uVar29;
      (pFVar40->SpawnableObjectBindingID).Guid.D = uVar30;
      (pFVar40->SpawnableObjectBindingID).SequenceID = iVar31;
      (pFVar40->SpawnableObjectBindingID).ResolveParentIndex = iVar32;
      iVar42 = 0;
      if (1 < iVar38) {
        do {
          iVar5 = iVar42 * 2;
          iVar37 = iVar5 + 1;
          if (iVar5 + 2 < iVar38) {
            lVar35 = (longlong)iVar5;
            lVar1 = lVar35 + 1;
            uVar2 = param_1[lVar1].Guid.A;
            uVar3 = param_1[lVar35 + 2].Guid.A;
            if (uVar3 < uVar2) {
              bVar34 = true;
            }
            else if (uVar2 < uVar3) {
              bVar34 = false;
            }
            else {
              uVar2 = param_1[lVar1].Guid.B;
              uVar3 = param_1[lVar35 + 2].Guid.B;
              if (uVar3 < uVar2) {
                bVar34 = true;
              }
              else if (uVar2 < uVar3) {
                bVar34 = false;
              }
              else {
                uVar2 = param_1[lVar1].Guid.C;
                uVar3 = param_1[lVar35 + 2].Guid.C;
                if (uVar3 < uVar2) {
                  bVar34 = true;
                }
                else if (uVar2 < uVar3) {
                  bVar34 = false;
                }
                else {
                  bVar34 = param_1[lVar35 + 2].Guid.D < param_1[lVar1].Guid.D;
                }
              }
            }
            if (bVar34) {
              iVar37 = iVar5;
            }
            iVar37 = iVar37 + 1;
          }
          pFVar36 = param_1 + iVar37;
          pFVar41 = param_1 + iVar42;
          uVar2 = (pFVar36->Guid).A;
          uVar3 = (pFVar41->Guid).A;
          if ((uVar2 <= uVar3) &&
             ((uVar3 != uVar2 ||
              ((uVar2 = (pFVar36->Guid).B, uVar3 = (pFVar41->Guid).B, uVar2 <= uVar3 &&
               ((uVar3 != uVar2 ||
                ((uVar2 = (pFVar36->Guid).C, uVar3 = (pFVar41->Guid).C, uVar2 <= uVar3 &&
                 ((uVar3 != uVar2 || ((pFVar36->Guid).D <= (pFVar41->Guid).D)))))))))))) break;
          iVar42 = (pFVar36->Tags).ArrayNum;
          iVar5 = (pFVar36->Tags).ArrayMax;
          pFVar6 = (pFVar41->Tags).AllocatorInstance.Data;
          iVar16 = (pFVar41->Tags).ArrayNum;
          iVar21 = (pFVar41->Tags).ArrayMax;
          TVar7 = (pFVar41->DynamicBinding_DEPRECATED).Function.field0_0x0;
          uVar8 = *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty;
          uVar9 = *(undefined8 *)
                   &(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
          uVar10 = *(undefined8 *)
                    &(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
          uVar11 = *(undefined8 *)
                    &(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
          uVar17 = (pFVar41->Guid).A;
          uVar18 = (pFVar41->Guid).B;
          uVar19 = (pFVar41->Guid).C;
          uVar20 = (pFVar41->Guid).D;
          pFVar12 = (pFVar41->Name).Data.AllocatorInstance.Data;
          iVar22 = (pFVar41->Name).Data.ArrayNum;
          iVar31 = (pFVar41->Name).Data.ArrayMax;
          uVar23 = (pFVar41->ParentGuid).A;
          uVar24 = (pFVar41->ParentGuid).B;
          uVar25 = (pFVar41->ParentGuid).C;
          uVar26 = (pFVar41->ParentGuid).D;
          uVar27 = (pFVar41->SpawnableObjectBindingID).Guid.A;
          uVar28 = (pFVar41->SpawnableObjectBindingID).Guid.B;
          uVar29 = (pFVar41->SpawnableObjectBindingID).Guid.C;
          uVar30 = (pFVar41->SpawnableObjectBindingID).Guid.D;
          iVar32 = (pFVar41->SpawnableObjectBindingID).SequenceID;
          iVar33 = (pFVar41->SpawnableObjectBindingID).ResolveParentIndex;
          (pFVar41->Tags).AllocatorInstance.Data = (pFVar36->Tags).AllocatorInstance.Data;
          (pFVar41->Tags).ArrayNum = iVar42;
          (pFVar41->Tags).ArrayMax = iVar5;
          uVar13 = *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty;
          (pFVar41->DynamicBinding_DEPRECATED).Function.field0_0x0 =
               (pFVar36->DynamicBinding_DEPRECATED).Function.field0_0x0;
          *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar13;
          uVar13 = *(undefined8 *)
                    &(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
          *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
               *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
          *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
               uVar13;
          uVar2 = (pFVar36->Guid).A;
          uVar3 = (pFVar36->Guid).B;
          *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
               *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18
          ;
          (pFVar41->Guid).A = uVar2;
          (pFVar41->Guid).B = uVar3;
          uVar2 = (pFVar36->Guid).D;
          pFVar14 = (pFVar36->Name).Data.AllocatorInstance.Data;
          (pFVar41->Guid).C = (pFVar36->Guid).C;
          (pFVar41->Guid).D = uVar2;
          (pFVar41->Name).Data.AllocatorInstance.Data = pFVar14;
          iVar42 = (pFVar36->Name).Data.ArrayMax;
          uVar2 = (pFVar36->ParentGuid).A;
          uVar3 = (pFVar36->ParentGuid).B;
          (pFVar41->Name).Data.ArrayNum = (pFVar36->Name).Data.ArrayNum;
          (pFVar41->Name).Data.ArrayMax = iVar42;
          (pFVar41->ParentGuid).A = uVar2;
          (pFVar41->ParentGuid).B = uVar3;
          uVar2 = (pFVar36->ParentGuid).D;
          uVar3 = (pFVar36->SpawnableObjectBindingID).Guid.A;
          uVar15 = (pFVar36->SpawnableObjectBindingID).Guid.B;
          (pFVar41->ParentGuid).C = (pFVar36->ParentGuid).C;
          (pFVar41->ParentGuid).D = uVar2;
          (pFVar41->SpawnableObjectBindingID).Guid.A = uVar3;
          (pFVar41->SpawnableObjectBindingID).Guid.B = uVar15;
          uVar2 = (pFVar36->SpawnableObjectBindingID).Guid.D;
          iVar42 = (pFVar36->SpawnableObjectBindingID).SequenceID;
          iVar5 = (pFVar36->SpawnableObjectBindingID).ResolveParentIndex;
          (pFVar41->SpawnableObjectBindingID).Guid.C = (pFVar36->SpawnableObjectBindingID).Guid.C;
          (pFVar41->SpawnableObjectBindingID).Guid.D = uVar2;
          (pFVar41->SpawnableObjectBindingID).SequenceID = iVar42;
          (pFVar41->SpawnableObjectBindingID).ResolveParentIndex = iVar5;
          (pFVar36->Tags).AllocatorInstance.Data = pFVar6;
          (pFVar36->Tags).ArrayNum = iVar16;
          (pFVar36->Tags).ArrayMax = iVar21;
          (pFVar36->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar7;
          *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar8;
          *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
               uVar9;
          *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
               uVar10;
          *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
               uVar11;
          (pFVar36->Guid).A = uVar17;
          (pFVar36->Guid).B = uVar18;
          (pFVar36->Guid).C = uVar19;
          (pFVar36->Guid).D = uVar20;
          (pFVar36->Name).Data.AllocatorInstance.Data = pFVar12;
          (pFVar36->Name).Data.ArrayNum = iVar22;
          (pFVar36->Name).Data.ArrayMax = iVar31;
          (pFVar36->ParentGuid).A = uVar23;
          (pFVar36->ParentGuid).B = uVar24;
          (pFVar36->ParentGuid).C = uVar25;
          (pFVar36->ParentGuid).D = uVar26;
          (pFVar36->SpawnableObjectBindingID).Guid.A = uVar27;
          (pFVar36->SpawnableObjectBindingID).Guid.B = uVar28;
          (pFVar36->SpawnableObjectBindingID).Guid.C = uVar29;
          (pFVar36->SpawnableObjectBindingID).Guid.D = uVar30;
          (pFVar36->SpawnableObjectBindingID).SequenceID = iVar32;
          (pFVar36->SpawnableObjectBindingID).ResolveParentIndex = iVar33;
          iVar42 = iVar37;
        } while (iVar37 * 2 + 1 < iVar38);
      }
      iVar38 = iVar38 + -1;
      lVar39 = lVar39 + -1;
      pFVar40 = pFVar40 + -1;
    } while (0 < lVar39);
  }
  return;
}

// HeapSortInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_> @ 146173240

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>
          (FMovieSceneSpawnable *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_> param_4)

{
  code *pcVar1;
  double dVar2;
  TObjectPtr<UFunction>_u_0 TVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  undefined6 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ESpawnOwnership EVar12;
  undefined3 uVar13;
  FNameEntryId FVar14;
  bool bVar15;
  FMovieSceneSpawnable *pFVar16;
  int iVar17;
  FIdentityFunctor local_res18 [8];
  TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_> local_res20;
  TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_> local_108 [2];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  FScriptContainerElement *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  TObjectPtr<UFunction>_u_0 TStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  TObjectPtr<UObject>_u_0 local_38;
  FScriptContainerElement *pFStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res18[0] = param_3;
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_108[0].Predicate = &local_res20;
  HeapifyInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>_>
            (param_1,param_2,param_3,&local_res20);
  iVar17 = param_2 + -1;
  if (0 < iVar17) {
    pFVar16 = param_1 + iVar17;
    do {
      local_f8 = (param_1->SpawnTransform).Rotation.XY.m128d_f64[0];
      dStack_f0 = (param_1->SpawnTransform).Rotation.XY.m128d_f64[1];
      local_e8 = (param_1->SpawnTransform).Rotation.ZW.m128d_f64[0];
      dStack_e0 = (param_1->SpawnTransform).Rotation.ZW.m128d_f64[1];
      local_d8 = (param_1->SpawnTransform).Translation.XY.m128d_f64[0];
      dStack_d0 = (param_1->SpawnTransform).Translation.XY.m128d_f64[1];
      local_c8 = (param_1->SpawnTransform).Translation.ZW.m128d_f64[0];
      dStack_c0 = (param_1->SpawnTransform).Translation.ZW.m128d_f64[1];
      local_b8 = (param_1->SpawnTransform).Scale3D.XY.m128d_f64[0];
      dStack_b0 = (param_1->SpawnTransform).Scale3D.XY.m128d_f64[1];
      local_a8 = (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[0];
      dStack_a0 = (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[1];
      local_98 = (param_1->Tags).AllocatorInstance.Data;
      uStack_90._0_4_ = (param_1->Tags).ArrayNum;
      uStack_90._4_4_ = (param_1->Tags).ArrayMax;
      local_88._0_1_ = param_1->bContinuouslyRespawn;
      local_88._1_1_ = param_1->bNetAddressableName;
      local_88._2_6_ = *(undefined6 *)&param_1->field_0x72;
      TStack_80 = (param_1->DynamicBinding_DEPRECATED).Function.field0_0x0;
      local_78 = *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty;
      uStack_70 = *(undefined8 *)
                   &(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
      local_68 = *(undefined8 *)
                  &(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
      uStack_60 = *(undefined8 *)
                   &(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
      local_58._0_4_ = (param_1->Guid).A;
      local_58._4_4_ = (param_1->Guid).B;
      uStack_50._0_4_ = (param_1->Guid).C;
      uStack_50._4_4_ = (param_1->Guid).D;
      local_48 = (param_1->Name).Data.AllocatorInstance.Data;
      uStack_40._0_4_ = (param_1->Name).Data.ArrayNum;
      uStack_40._4_4_ = (param_1->Name).Data.ArrayMax;
      local_38 = (param_1->ObjectTemplate).field0_0x0;
      pFStack_30 = (param_1->ChildPossessables).AllocatorInstance.Data;
      local_28._0_4_ = (param_1->ChildPossessables).ArrayNum;
      local_28._4_4_ = (param_1->ChildPossessables).ArrayMax;
      uStack_20._0_1_ = param_1->Ownership;
      uStack_20._1_3_ = *(undefined3 *)&param_1->field_0xd9;
      uStack_20._4_4_ = (param_1->LevelName).ComparisonIndex;
      local_18 = *(undefined8 *)&(param_1->LevelName).Number;
      uStack_10 = *(undefined8 *)&param_1->field_0xe8;
      dVar2 = (pFVar16->SpawnTransform).Rotation.XY.m128d_f64[1];
      (param_1->SpawnTransform).Rotation.XY.m128d_f64[0] =
           (pFVar16->SpawnTransform).Rotation.XY.m128d_f64[0];
      (param_1->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar2;
      dVar2 = (pFVar16->SpawnTransform).Rotation.ZW.m128d_f64[1];
      (param_1->SpawnTransform).Rotation.ZW.m128d_f64[0] =
           (pFVar16->SpawnTransform).Rotation.ZW.m128d_f64[0];
      (param_1->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (pFVar16->SpawnTransform).Translation.XY.m128d_f64[1];
      (param_1->SpawnTransform).Translation.XY.m128d_f64[0] =
           (pFVar16->SpawnTransform).Translation.XY.m128d_f64[0];
      (param_1->SpawnTransform).Translation.XY.m128d_f64[1] = dVar2;
      dVar2 = (pFVar16->SpawnTransform).Translation.ZW.m128d_f64[1];
      (param_1->SpawnTransform).Translation.ZW.m128d_f64[0] =
           (pFVar16->SpawnTransform).Translation.ZW.m128d_f64[0];
      (param_1->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (pFVar16->SpawnTransform).Scale3D.XY.m128d_f64[1];
      (param_1->SpawnTransform).Scale3D.XY.m128d_f64[0] =
           (pFVar16->SpawnTransform).Scale3D.XY.m128d_f64[0];
      (param_1->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar2;
      dVar2 = (pFVar16->SpawnTransform).Scale3D.ZW.m128d_f64[1];
      (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[0] =
           (pFVar16->SpawnTransform).Scale3D.ZW.m128d_f64[0];
      (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
      iVar6 = (pFVar16->Tags).ArrayNum;
      iVar7 = (pFVar16->Tags).ArrayMax;
      (param_1->Tags).AllocatorInstance.Data = (pFVar16->Tags).AllocatorInstance.Data;
      (param_1->Tags).ArrayNum = iVar6;
      (param_1->Tags).ArrayMax = iVar7;
      bVar15 = pFVar16->bNetAddressableName;
      uVar8 = *(undefined6 *)&pFVar16->field_0x72;
      TVar3 = (pFVar16->DynamicBinding_DEPRECATED).Function.field0_0x0;
      param_1->bContinuouslyRespawn = pFVar16->bContinuouslyRespawn;
      param_1->bNetAddressableName = bVar15;
      *(undefined6 *)&param_1->field_0x72 = uVar8;
      (param_1->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar3;
      uVar4 = *(undefined8 *)&(pFVar16->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
      *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty =
           *(undefined8 *)&(pFVar16->DynamicBinding_DEPRECATED).ResolveParamsProperty;
      *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar4;
      uVar4 = *(undefined8 *)&(pFVar16->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
      *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
           *(undefined8 *)&(pFVar16->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
      *(undefined8 *)&(param_1->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = uVar4;
      uVar9 = (pFVar16->Guid).B;
      uVar10 = (pFVar16->Guid).C;
      uVar11 = (pFVar16->Guid).D;
      (param_1->Guid).A = (pFVar16->Guid).A;
      (param_1->Guid).B = uVar9;
      (param_1->Guid).C = uVar10;
      (param_1->Guid).D = uVar11;
      iVar6 = (pFVar16->Name).Data.ArrayNum;
      iVar7 = (pFVar16->Name).Data.ArrayMax;
      (param_1->Name).Data.AllocatorInstance.Data = (pFVar16->Name).Data.AllocatorInstance.Data;
      (param_1->Name).Data.ArrayNum = iVar6;
      (param_1->Name).Data.ArrayMax = iVar7;
      pFVar5 = (pFVar16->ChildPossessables).AllocatorInstance.Data;
      (param_1->ObjectTemplate).field0_0x0 = (pFVar16->ObjectTemplate).field0_0x0;
      (param_1->ChildPossessables).AllocatorInstance.Data = pFVar5;
      iVar6 = (pFVar16->ChildPossessables).ArrayMax;
      EVar12 = pFVar16->Ownership;
      uVar13 = *(undefined3 *)&pFVar16->field_0xd9;
      FVar14.Value = (pFVar16->LevelName).ComparisonIndex.Value;
      (param_1->ChildPossessables).ArrayNum = (pFVar16->ChildPossessables).ArrayNum;
      (param_1->ChildPossessables).ArrayMax = iVar6;
      param_1->Ownership = EVar12;
      *(undefined3 *)&param_1->field_0xd9 = uVar13;
      (param_1->LevelName).ComparisonIndex = (FNameEntryId)FVar14.Value;
      uVar4 = *(undefined8 *)&pFVar16->field_0xe8;
      *(undefined8 *)&(param_1->LevelName).Number = *(undefined8 *)&(pFVar16->LevelName).Number;
      *(undefined8 *)&param_1->field_0xe8 = uVar4;
      (pFVar16->SpawnTransform).Rotation.XY.m128d_f64[0] = local_f8;
      (pFVar16->SpawnTransform).Rotation.XY.m128d_f64[1] = dStack_f0;
      (pFVar16->SpawnTransform).Rotation.ZW.m128d_f64[0] = local_e8;
      (pFVar16->SpawnTransform).Rotation.ZW.m128d_f64[1] = dStack_e0;
      (pFVar16->SpawnTransform).Translation.XY.m128d_f64[0] = local_d8;
      (pFVar16->SpawnTransform).Translation.XY.m128d_f64[1] = dStack_d0;
      (pFVar16->SpawnTransform).Translation.ZW.m128d_f64[0] = local_c8;
      (pFVar16->SpawnTransform).Translation.ZW.m128d_f64[1] = dStack_c0;
      (pFVar16->SpawnTransform).Scale3D.XY.m128d_f64[0] = local_b8;
      (pFVar16->SpawnTransform).Scale3D.XY.m128d_f64[1] = dStack_b0;
      (pFVar16->SpawnTransform).Scale3D.ZW.m128d_f64[0] = local_a8;
      (pFVar16->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dStack_a0;
      (pFVar16->Tags).AllocatorInstance.Data = local_98;
      (pFVar16->Tags).ArrayNum = (undefined4)uStack_90;
      (pFVar16->Tags).ArrayMax = uStack_90._4_4_;
      pFVar16->bContinuouslyRespawn = (bool)(undefined1)local_88;
      pFVar16->bNetAddressableName = (bool)local_88._1_1_;
      *(undefined6 *)&pFVar16->field_0x72 = local_88._2_6_;
      (pFVar16->DynamicBinding_DEPRECATED).Function.field0_0x0 = TStack_80;
      *(undefined8 *)&(pFVar16->DynamicBinding_DEPRECATED).ResolveParamsProperty = local_78;
      *(undefined8 *)&(pFVar16->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
           uStack_70;
      *(undefined8 *)&(pFVar16->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
           local_68;
      *(undefined8 *)&(pFVar16->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
           uStack_60;
      (pFVar16->Guid).A = (undefined4)local_58;
      (pFVar16->Guid).B = local_58._4_4_;
      (pFVar16->Guid).C = (undefined4)uStack_50;
      (pFVar16->Guid).D = uStack_50._4_4_;
      (pFVar16->Name).Data.AllocatorInstance.Data = local_48;
      (pFVar16->Name).Data.ArrayNum = (undefined4)uStack_40;
      (pFVar16->Name).Data.ArrayMax = uStack_40._4_4_;
      (pFVar16->ObjectTemplate).field0_0x0 = local_38;
      (pFVar16->ChildPossessables).AllocatorInstance.Data = pFStack_30;
      (pFVar16->ChildPossessables).ArrayNum = (undefined4)local_28;
      (pFVar16->ChildPossessables).ArrayMax = local_28._4_4_;
      pFVar16->Ownership = (undefined1)uStack_20;
      *(undefined3 *)&pFVar16->field_0xd9 = uStack_20._1_3_;
      (pFVar16->LevelName).ComparisonIndex = (FNameEntryId)uStack_20._4_4_;
      *(undefined8 *)&(pFVar16->LevelName).Number = local_18;
      *(undefined8 *)&pFVar16->field_0xe8 = uStack_10;
      HeapSiftDown<FMovieSceneSpawnable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>_>
                (param_1,0,iVar17,local_res18,local_108);
      iVar17 = iVar17 + -1;
      pFVar16 = pFVar16 + -1;
    } while (0 < iVar17);
  }
  return;
}

// HeapSortInternal<FMovieSceneTrackInstanceInput,int,FIdentityFunctor,TLess<void>_> @ 1461734c0

void __cdecl
AlgoImpl::HeapSortInternal<FMovieSceneTrackInstanceInput,int,FIdentityFunctor,TLess<void>_>
          (FMovieSceneTrackInstanceInput *param_1,int param_2,FIdentityFunctor param_3,
          TLess<void> param_4)

{
  longlong lVar1;
  longlong lVar2;
  UMovieSceneSection *pUVar3;
  UMovieSceneSection *pUVar4;
  code *pcVar5;
  TObjectPtr<UMovieSceneSection>_u_0 TVar6;
  FInstanceHandle FVar7;
  undefined3 uVar8;
  FInstanceHandle FVar9;
  bool bVar10;
  undefined3 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FMovieSceneTrackInstanceInput *pFVar17;
  int iVar18;
  FMovieSceneTrackInstanceInput *pFVar19;
  FMovieSceneTrackInstanceInput *pFVar20;
  longlong lVar21;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar16 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_1461735f2:
      if (iVar16 == 0) {
        iVar14 = param_2 + -1;
        lVar21 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar17 = param_1 + lVar21;
          do {
            FVar7 = pFVar17->InstanceHandle;
            bVar12 = pFVar17->bInputHasBeenProcessed;
            uVar8 = *(undefined3 *)&pFVar17->field_0xd;
            TVar6 = (param_1->Section).field0_0x0;
            FVar9 = param_1->InstanceHandle;
            bVar10 = param_1->bInputHasBeenProcessed;
            uVar11 = *(undefined3 *)&param_1->field_0xd;
            (param_1->Section).field0_0x0 = (pFVar17->Section).field0_0x0;
            param_1->InstanceHandle = FVar7;
            param_1->bInputHasBeenProcessed = bVar12;
            *(undefined3 *)&param_1->field_0xd = uVar8;
            (pFVar17->Section).field0_0x0 = TVar6;
            pFVar17->InstanceHandle = FVar9;
            pFVar17->bInputHasBeenProcessed = bVar10;
            *(undefined3 *)&pFVar17->field_0xd = uVar11;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar16 = iVar18 * 2;
                iVar13 = iVar16 + 1;
                if (iVar16 + 2 < iVar14) {
                  lVar1 = (longlong)iVar16 + 2;
                  lVar2 = (longlong)iVar16 + 1;
                  pUVar3 = param_1[lVar1].Section.field0_0x0.DebugPtr;
                  pUVar4 = param_1[lVar2].Section.field0_0x0.DebugPtr;
                  bVar12 = pUVar3 < pUVar4;
                  if (pUVar3 == pUVar4) {
                    bVar12 = param_1[lVar1].InstanceHandle.InstanceID <
                             param_1[lVar2].InstanceHandle.InstanceID;
                  }
                  if (bVar12) {
                    iVar13 = iVar16;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar19 = param_1 + iVar13;
                pFVar20 = param_1 + iVar18;
                pUVar3 = (pFVar19->Section).field0_0x0.DebugPtr;
                pUVar4 = (pFVar20->Section).field0_0x0.DebugPtr;
                bVar12 = pUVar4 < pUVar3;
                if (pUVar4 == pUVar3) {
                  bVar12 = (pFVar20->InstanceHandle).InstanceID <
                           (pFVar19->InstanceHandle).InstanceID;
                }
                if (!bVar12) break;
                FVar7 = pFVar19->InstanceHandle;
                bVar12 = pFVar19->bInputHasBeenProcessed;
                uVar8 = *(undefined3 *)&pFVar19->field_0xd;
                TVar6 = (pFVar20->Section).field0_0x0;
                FVar9 = pFVar20->InstanceHandle;
                bVar10 = pFVar20->bInputHasBeenProcessed;
                uVar11 = *(undefined3 *)&pFVar20->field_0xd;
                (pFVar20->Section).field0_0x0 = (pFVar19->Section).field0_0x0;
                pFVar20->InstanceHandle = FVar7;
                pFVar20->bInputHasBeenProcessed = bVar12;
                *(undefined3 *)&pFVar20->field_0xd = uVar8;
                (pFVar19->Section).field0_0x0 = TVar6;
                pFVar19->InstanceHandle = FVar9;
                pFVar19->bInputHasBeenProcessed = bVar10;
                *(undefined3 *)&pFVar19->field_0xd = uVar11;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar21 = lVar21 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar21);
        }
        return;
      }
      iVar13 = iVar16 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar16 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar15 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      lVar21 = (longlong)iVar14 + 2;
      lVar1 = (longlong)iVar14 + 1;
      pUVar3 = param_1[lVar21].Section.field0_0x0.DebugPtr;
      pUVar4 = param_1[lVar1].Section.field0_0x0.DebugPtr;
      bVar12 = pUVar3 < pUVar4;
      if (pUVar3 == pUVar4) {
        bVar12 = param_1[lVar21].InstanceHandle.InstanceID <
                 param_1[lVar1].InstanceHandle.InstanceID;
      }
      if (bVar12) {
        iVar15 = iVar14;
      }
      iVar15 = iVar15 + 1;
    }
    pFVar17 = param_1 + iVar15;
    pFVar19 = param_1 + iVar13;
    pUVar3 = (pFVar17->Section).field0_0x0.DebugPtr;
    pUVar4 = (pFVar19->Section).field0_0x0.DebugPtr;
    bVar12 = pUVar4 < pUVar3;
    if (pUVar4 == pUVar3) {
      bVar12 = (pFVar19->InstanceHandle).InstanceID < (pFVar17->InstanceHandle).InstanceID;
    }
    if (!bVar12) goto LAB_1461735f2;
    FVar7 = pFVar17->InstanceHandle;
    bVar12 = pFVar17->bInputHasBeenProcessed;
    uVar8 = *(undefined3 *)&pFVar17->field_0xd;
    iVar14 = iVar15 * 2 + 1;
    TVar6 = (pFVar19->Section).field0_0x0;
    FVar9 = pFVar19->InstanceHandle;
    bVar10 = pFVar19->bInputHasBeenProcessed;
    uVar11 = *(undefined3 *)&pFVar19->field_0xd;
    (pFVar19->Section).field0_0x0 = (pFVar17->Section).field0_0x0;
    pFVar19->InstanceHandle = FVar7;
    pFVar19->bInputHasBeenProcessed = bVar12;
    *(undefined3 *)&pFVar19->field_0xd = uVar8;
    (pFVar17->Section).field0_0x0 = TVar6;
    pFVar17->InstanceHandle = FVar9;
    pFVar17->bInputHasBeenProcessed = bVar10;
    *(undefined3 *)&pFVar17->field_0xd = uVar11;
    iVar13 = iVar15;
  } while( true );
}

// HeapSortInternal<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,int,FIdentityFunctor,bool_(__cdecl*)(TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&)> @ 146173710

void __cdecl
AlgoImpl::
HeapSortInternal<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,int,FIdentityFunctor,bool_(__cdecl*)(TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&)>
          (TInlineValue<IMovieSceneSharedExecutionToken,32,8> *param_1,int param_2,
          FIdentityFunctor param_3,
          _func___cdecl_bool_TInlineValue<IMovieSceneSharedExecutionToken,32,8>_ptr_TInlineValue<IMovieSceneSharedExecutionToken,32,8>_ptr
          *param_4)

{
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar1;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar24;
  
  if (param_2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar18 = (param_2 + -2) / 2;
  iVar19 = iVar18 * 2 + 1;
  iVar23 = iVar19;
  iVar22 = iVar18;
  do {
    while (param_2 <= iVar19) {
LAB_14617385c:
      if (iVar22 == 0) {
        iVar19 = param_2 + -1;
        lVar20 = (longlong)iVar19;
        if (0 < iVar19) {
          pTVar24 = param_1 + lVar20;
          do {
            uVar12 = *(undefined8 *)((pTVar24->Data).Pad + 8);
            iVar23 = 0;
            uVar3 = *(undefined8 *)&param_1->field_0x20;
            uVar5 = *(undefined4 *)(param_1->Data).Pad;
            uVar6 = *(undefined4 *)((param_1->Data).Pad + 4);
            uVar7 = *(undefined4 *)((param_1->Data).Pad + 8);
            uVar8 = *(undefined4 *)((param_1->Data).Pad + 0xc);
            uVar13 = *(undefined8 *)((param_1->Data).Pad + 0x10);
            uVar14 = *(undefined8 *)((param_1->Data).Pad + 0x18);
            *(undefined8 *)(param_1->Data).Pad = *(undefined8 *)(pTVar24->Data).Pad;
            *(undefined8 *)((param_1->Data).Pad + 8) = uVar12;
            uVar9 = *(undefined4 *)((pTVar24->Data).Pad + 0x14);
            uVar10 = *(undefined4 *)((pTVar24->Data).Pad + 0x18);
            uVar11 = *(undefined4 *)((pTVar24->Data).Pad + 0x1c);
            *(undefined4 *)((param_1->Data).Pad + 0x10) =
                 *(undefined4 *)((pTVar24->Data).Pad + 0x10);
            *(undefined4 *)((param_1->Data).Pad + 0x14) = uVar9;
            *(undefined4 *)((param_1->Data).Pad + 0x18) = uVar10;
            *(undefined4 *)((param_1->Data).Pad + 0x1c) = uVar11;
            *(undefined8 *)&param_1->field_0x20 = *(undefined8 *)&pTVar24->field_0x20;
            *(undefined4 *)(pTVar24->Data).Pad = uVar5;
            *(undefined4 *)((pTVar24->Data).Pad + 4) = uVar6;
            *(undefined4 *)((pTVar24->Data).Pad + 8) = uVar7;
            *(undefined4 *)((pTVar24->Data).Pad + 0xc) = uVar8;
            *(undefined8 *)((pTVar24->Data).Pad + 0x10) = uVar13;
            *(undefined8 *)((pTVar24->Data).Pad + 0x18) = uVar14;
            *(undefined8 *)&pTVar24->field_0x20 = uVar3;
            if (1 < iVar19) {
              do {
                iVar18 = iVar23 * 2;
                iVar22 = iVar18 + 1;
                if (iVar18 + 2 < iVar19) {
                  bVar17 = (*param_4)(param_1 + (iVar18 + 2),param_1 + iVar22);
                  if (bVar17) {
                    iVar22 = iVar18;
                  }
                  iVar22 = iVar22 + 1;
                }
                pTVar1 = param_1 + iVar22;
                pTVar2 = param_1 + iVar23;
                bVar17 = (*param_4)(pTVar2,pTVar1);
                if (!bVar17) break;
                uVar12 = *(undefined8 *)((pTVar1->Data).Pad + 8);
                uVar3 = *(undefined8 *)&pTVar2->field_0x20;
                uVar5 = *(undefined4 *)(pTVar2->Data).Pad;
                uVar6 = *(undefined4 *)((pTVar2->Data).Pad + 4);
                uVar7 = *(undefined4 *)((pTVar2->Data).Pad + 8);
                uVar8 = *(undefined4 *)((pTVar2->Data).Pad + 0xc);
                uVar13 = *(undefined8 *)((pTVar2->Data).Pad + 0x10);
                uVar14 = *(undefined8 *)((pTVar2->Data).Pad + 0x18);
                *(undefined8 *)(pTVar2->Data).Pad = *(undefined8 *)(pTVar1->Data).Pad;
                *(undefined8 *)((pTVar2->Data).Pad + 8) = uVar12;
                uVar9 = *(undefined4 *)((pTVar1->Data).Pad + 0x14);
                uVar10 = *(undefined4 *)((pTVar1->Data).Pad + 0x18);
                uVar11 = *(undefined4 *)((pTVar1->Data).Pad + 0x1c);
                *(undefined4 *)((pTVar2->Data).Pad + 0x10) =
                     *(undefined4 *)((pTVar1->Data).Pad + 0x10);
                *(undefined4 *)((pTVar2->Data).Pad + 0x14) = uVar9;
                *(undefined4 *)((pTVar2->Data).Pad + 0x18) = uVar10;
                *(undefined4 *)((pTVar2->Data).Pad + 0x1c) = uVar11;
                *(undefined8 *)&pTVar2->field_0x20 = *(undefined8 *)&pTVar1->field_0x20;
                *(undefined4 *)(pTVar1->Data).Pad = uVar5;
                *(undefined4 *)((pTVar1->Data).Pad + 4) = uVar6;
                *(undefined4 *)((pTVar1->Data).Pad + 8) = uVar7;
                *(undefined4 *)((pTVar1->Data).Pad + 0xc) = uVar8;
                *(undefined8 *)((pTVar1->Data).Pad + 0x10) = uVar13;
                *(undefined8 *)((pTVar1->Data).Pad + 0x18) = uVar14;
                *(undefined8 *)&pTVar1->field_0x20 = uVar3;
                iVar23 = iVar22;
              } while (iVar22 * 2 + 1 < iVar19);
            }
            lVar20 = lVar20 + -1;
            iVar19 = iVar19 + -1;
            pTVar24 = pTVar24 + -1;
          } while (0 < lVar20);
        }
        return;
      }
      iVar18 = iVar22 + -1;
      iVar19 = iVar23 + -2;
      iVar23 = iVar19;
      iVar22 = iVar18;
    }
    iVar19 = iVar18 * 2;
    iVar21 = iVar19 + 1;
    if (iVar19 + 2 < param_2) {
      bVar17 = (*param_4)(param_1 + (iVar19 + 2),param_1 + iVar21);
      if (bVar17) {
        iVar21 = iVar19;
      }
      iVar21 = iVar21 + 1;
    }
    pTVar24 = param_1 + iVar21;
    pTVar1 = param_1 + iVar18;
    bVar17 = (*param_4)(pTVar1,pTVar24);
    if (!bVar17) goto LAB_14617385c;
    uVar12 = *(undefined8 *)((pTVar24->Data).Pad + 8);
    iVar19 = iVar21 * 2 + 1;
    uVar3 = *(undefined8 *)&pTVar1->field_0x20;
    uVar13 = *(undefined8 *)(pTVar1->Data).Pad;
    uVar14 = *(undefined8 *)((pTVar1->Data).Pad + 8);
    uVar15 = *(undefined8 *)((pTVar1->Data).Pad + 0x10);
    uVar16 = *(undefined8 *)((pTVar1->Data).Pad + 0x18);
    *(undefined8 *)(pTVar1->Data).Pad = *(undefined8 *)(pTVar24->Data).Pad;
    *(undefined8 *)((pTVar1->Data).Pad + 8) = uVar12;
    uVar12 = *(undefined8 *)((pTVar24->Data).Pad + 0x18);
    *(undefined8 *)((pTVar1->Data).Pad + 0x10) = *(undefined8 *)((pTVar24->Data).Pad + 0x10);
    *(undefined8 *)((pTVar1->Data).Pad + 0x18) = uVar12;
    *(undefined8 *)&pTVar1->field_0x20 = *(undefined8 *)&pTVar24->field_0x20;
    *(undefined8 *)(pTVar24->Data).Pad = uVar13;
    *(undefined8 *)((pTVar24->Data).Pad + 8) = uVar14;
    *(undefined8 *)((pTVar24->Data).Pad + 0x10) = uVar15;
    *(undefined8 *)((pTVar24->Data).Pad + 0x18) = uVar16;
    *(undefined8 *)&pTVar24->field_0x20 = uVar3;
    iVar18 = iVar21;
  } while( true );
}

// HeapifyInternal<FMovieSceneBinding,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>_> @ 1461739c0

void __cdecl
AlgoImpl::
HeapifyInternal<FMovieSceneBinding,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>_>
          (FMovieSceneBinding *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_> param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  FMovieSceneBinding *pFVar23;
  int iVar24;
  int iVar25;
  FMovieSceneBinding *pFVar26;
  
  if (param_2 < 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar20 = (param_2 + -2) / 2;
  iVar21 = iVar20 * 2 + 1;
  iVar5 = iVar21;
  iVar25 = iVar20;
  do {
    while (param_2 <= iVar21) {
LAB_146173b43:
      if (iVar25 == 0) {
        return;
      }
      iVar20 = iVar25 + -1;
      iVar21 = iVar5 + -2;
      iVar5 = iVar21;
      iVar25 = iVar20;
    }
    iVar21 = iVar20 * 2;
    iVar24 = iVar21 + 1;
    if (iVar21 + 2 < param_2) {
      lVar22 = (longlong)iVar21;
      lVar1 = lVar22 + 1;
      uVar2 = param_1[lVar1].ObjectGuid.A;
      uVar3 = param_1[lVar22 + 2].ObjectGuid.A;
      if (uVar3 < uVar2) {
        bVar19 = true;
      }
      else if (uVar2 < uVar3) {
        bVar19 = false;
      }
      else {
        uVar2 = param_1[lVar1].ObjectGuid.B;
        uVar3 = param_1[lVar22 + 2].ObjectGuid.B;
        if (uVar3 < uVar2) {
          bVar19 = true;
        }
        else if (uVar2 < uVar3) {
          bVar19 = false;
        }
        else {
          uVar2 = param_1[lVar1].ObjectGuid.C;
          uVar3 = param_1[lVar22 + 2].ObjectGuid.C;
          if (uVar3 < uVar2) {
            bVar19 = true;
          }
          else if (uVar2 < uVar3) {
            bVar19 = false;
          }
          else {
            bVar19 = param_1[lVar22 + 2].ObjectGuid.D < param_1[lVar1].ObjectGuid.D;
          }
        }
      }
      if (bVar19) {
        iVar24 = iVar21;
      }
      iVar24 = iVar24 + 1;
    }
    pFVar23 = param_1 + iVar24;
    pFVar26 = param_1 + iVar20;
    uVar2 = (pFVar23->ObjectGuid).A;
    uVar3 = (pFVar26->ObjectGuid).A;
    if ((uVar2 <= uVar3) &&
       ((uVar3 != uVar2 ||
        ((uVar2 = (pFVar23->ObjectGuid).B, uVar3 = (pFVar26->ObjectGuid).B, uVar2 <= uVar3 &&
         ((uVar3 != uVar2 ||
          ((uVar2 = (pFVar23->ObjectGuid).C, uVar3 = (pFVar26->ObjectGuid).C, uVar2 <= uVar3 &&
           ((uVar3 != uVar2 || ((pFVar23->ObjectGuid).D <= (pFVar26->ObjectGuid).D))))))))))))
    goto LAB_146173b43;
    lVar1 = pFVar23->_padding_;
    iVar21 = iVar24 * 2 + 1;
    lVar22 = pFVar26->_padding_;
    lVar6 = pFVar26->_padding_;
    uVar11 = (pFVar26->ObjectGuid).A;
    uVar12 = (pFVar26->ObjectGuid).B;
    uVar13 = (pFVar26->ObjectGuid).C;
    uVar14 = (pFVar26->ObjectGuid).D;
    pFVar7 = (pFVar26->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
    iVar15 = (pFVar26->BindingName_DEPRECATED).Data.ArrayNum;
    iVar16 = (pFVar26->BindingName_DEPRECATED).Data.ArrayMax;
    pFVar8 = (pFVar26->Tracks).AllocatorInstance.Data;
    iVar17 = (pFVar26->Tracks).ArrayNum;
    iVar18 = (pFVar26->Tracks).ArrayMax;
    pFVar26->_padding_ = pFVar23->_padding_;
    pFVar26->_padding_ = lVar1;
    uVar2 = (pFVar23->ObjectGuid).B;
    uVar3 = (pFVar23->ObjectGuid).C;
    uVar9 = (pFVar23->ObjectGuid).D;
    (pFVar26->ObjectGuid).A = (pFVar23->ObjectGuid).A;
    (pFVar26->ObjectGuid).B = uVar2;
    (pFVar26->ObjectGuid).C = uVar3;
    (pFVar26->ObjectGuid).D = uVar9;
    iVar20 = (pFVar23->BindingName_DEPRECATED).Data.ArrayNum;
    iVar10 = (pFVar23->BindingName_DEPRECATED).Data.ArrayMax;
    (pFVar26->BindingName_DEPRECATED).Data.AllocatorInstance.Data =
         (pFVar23->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
    (pFVar26->BindingName_DEPRECATED).Data.ArrayNum = iVar20;
    (pFVar26->BindingName_DEPRECATED).Data.ArrayMax = iVar10;
    iVar20 = (pFVar23->Tracks).ArrayNum;
    iVar10 = (pFVar23->Tracks).ArrayMax;
    (pFVar26->Tracks).AllocatorInstance.Data = (pFVar23->Tracks).AllocatorInstance.Data;
    (pFVar26->Tracks).ArrayNum = iVar20;
    (pFVar26->Tracks).ArrayMax = iVar10;
    pFVar23->_padding_ = lVar22;
    pFVar23->_padding_ = lVar6;
    (pFVar23->ObjectGuid).A = uVar11;
    (pFVar23->ObjectGuid).B = uVar12;
    (pFVar23->ObjectGuid).C = uVar13;
    (pFVar23->ObjectGuid).D = uVar14;
    (pFVar23->BindingName_DEPRECATED).Data.AllocatorInstance.Data = pFVar7;
    (pFVar23->BindingName_DEPRECATED).Data.ArrayNum = iVar15;
    (pFVar23->BindingName_DEPRECATED).Data.ArrayMax = iVar16;
    (pFVar23->Tracks).AllocatorInstance.Data = pFVar8;
    (pFVar23->Tracks).ArrayNum = iVar17;
    (pFVar23->Tracks).ArrayMax = iVar18;
    iVar20 = iVar24;
  } while( true );
}

// HeapifyInternal<FMovieScenePossessable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_>_> @ 146173b70

void __cdecl
AlgoImpl::
HeapifyInternal<FMovieScenePossessable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_>_>
          (FMovieScenePossessable *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_> param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TObjectPtr<UFunction>_u_0 TVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  undefined8 uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  int iVar36;
  int iVar37;
  longlong lVar38;
  FMovieScenePossessable *pFVar39;
  int iVar40;
  int iVar41;
  FMovieScenePossessable *pFVar42;
  
  if (param_2 < 0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar35) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar36 = (param_2 + -2) / 2;
  iVar37 = iVar36 * 2 + 1;
  iVar5 = iVar37;
  iVar41 = iVar36;
  do {
    while (param_2 <= iVar37) {
LAB_146173d5d:
      if (iVar41 == 0) {
        return;
      }
      iVar36 = iVar41 + -1;
      iVar37 = iVar5 + -2;
      iVar5 = iVar37;
      iVar41 = iVar36;
    }
    iVar37 = iVar36 * 2;
    iVar40 = iVar37 + 1;
    if (iVar37 + 2 < param_2) {
      lVar38 = (longlong)iVar37;
      lVar1 = lVar38 + 1;
      uVar2 = param_1[lVar1].Guid.A;
      uVar3 = param_1[lVar38 + 2].Guid.A;
      if (uVar3 < uVar2) {
        bVar35 = true;
      }
      else if (uVar2 < uVar3) {
        bVar35 = false;
      }
      else {
        uVar2 = param_1[lVar1].Guid.B;
        uVar3 = param_1[lVar38 + 2].Guid.B;
        if (uVar3 < uVar2) {
          bVar35 = true;
        }
        else if (uVar2 < uVar3) {
          bVar35 = false;
        }
        else {
          uVar2 = param_1[lVar1].Guid.C;
          uVar3 = param_1[lVar38 + 2].Guid.C;
          if (uVar3 < uVar2) {
            bVar35 = true;
          }
          else if (uVar2 < uVar3) {
            bVar35 = false;
          }
          else {
            bVar35 = param_1[lVar38 + 2].Guid.D < param_1[lVar1].Guid.D;
          }
        }
      }
      if (bVar35) {
        iVar40 = iVar37;
      }
      iVar40 = iVar40 + 1;
    }
    pFVar39 = param_1 + iVar40;
    pFVar42 = param_1 + iVar36;
    uVar2 = (pFVar39->Guid).A;
    uVar3 = (pFVar42->Guid).A;
    if ((uVar2 <= uVar3) &&
       ((uVar3 != uVar2 ||
        ((uVar2 = (pFVar39->Guid).B, uVar3 = (pFVar42->Guid).B, uVar2 <= uVar3 &&
         ((uVar3 != uVar2 ||
          ((uVar2 = (pFVar39->Guid).C, uVar3 = (pFVar42->Guid).C, uVar2 <= uVar3 &&
           ((uVar3 != uVar2 || ((pFVar39->Guid).D <= (pFVar42->Guid).D))))))))))))
    goto LAB_146173d5d;
    iVar36 = (pFVar39->Tags).ArrayNum;
    iVar15 = (pFVar39->Tags).ArrayMax;
    iVar37 = iVar40 * 2 + 1;
    pFVar6 = (pFVar42->Tags).AllocatorInstance.Data;
    iVar17 = (pFVar42->Tags).ArrayNum;
    iVar18 = (pFVar42->Tags).ArrayMax;
    TVar7 = (pFVar42->DynamicBinding_DEPRECATED).Function.field0_0x0;
    uVar8 = *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty;
    uVar9 = *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
    uVar10 = *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
    uVar11 = *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
    uVar19 = (pFVar42->Guid).A;
    uVar20 = (pFVar42->Guid).B;
    uVar21 = (pFVar42->Guid).C;
    uVar22 = (pFVar42->Guid).D;
    pFVar12 = (pFVar42->Name).Data.AllocatorInstance.Data;
    iVar23 = (pFVar42->Name).Data.ArrayNum;
    iVar24 = (pFVar42->Name).Data.ArrayMax;
    uVar25 = (pFVar42->ParentGuid).A;
    uVar26 = (pFVar42->ParentGuid).B;
    uVar27 = (pFVar42->ParentGuid).C;
    uVar28 = (pFVar42->ParentGuid).D;
    uVar29 = (pFVar42->SpawnableObjectBindingID).Guid.A;
    uVar30 = (pFVar42->SpawnableObjectBindingID).Guid.B;
    uVar31 = (pFVar42->SpawnableObjectBindingID).Guid.C;
    uVar32 = (pFVar42->SpawnableObjectBindingID).Guid.D;
    iVar33 = (pFVar42->SpawnableObjectBindingID).SequenceID;
    iVar34 = (pFVar42->SpawnableObjectBindingID).ResolveParentIndex;
    (pFVar42->Tags).AllocatorInstance.Data = (pFVar39->Tags).AllocatorInstance.Data;
    (pFVar42->Tags).ArrayNum = iVar36;
    (pFVar42->Tags).ArrayMax = iVar15;
    uVar13 = *(undefined8 *)&(pFVar39->DynamicBinding_DEPRECATED).ResolveParamsProperty;
    (pFVar42->DynamicBinding_DEPRECATED).Function.field0_0x0 =
         (pFVar39->DynamicBinding_DEPRECATED).Function.field0_0x0;
    *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar13;
    uVar13 = *(undefined8 *)&(pFVar39->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
    *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
         *(undefined8 *)&(pFVar39->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
    *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 = uVar13;
    uVar2 = (pFVar39->Guid).A;
    uVar3 = (pFVar39->Guid).B;
    *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
         *(undefined8 *)&(pFVar39->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
    (pFVar42->Guid).A = uVar2;
    (pFVar42->Guid).B = uVar3;
    uVar2 = (pFVar39->Guid).D;
    pFVar14 = (pFVar39->Name).Data.AllocatorInstance.Data;
    (pFVar42->Guid).C = (pFVar39->Guid).C;
    (pFVar42->Guid).D = uVar2;
    (pFVar42->Name).Data.AllocatorInstance.Data = pFVar14;
    iVar36 = (pFVar39->Name).Data.ArrayMax;
    uVar2 = (pFVar39->ParentGuid).A;
    uVar3 = (pFVar39->ParentGuid).B;
    (pFVar42->Name).Data.ArrayNum = (pFVar39->Name).Data.ArrayNum;
    (pFVar42->Name).Data.ArrayMax = iVar36;
    (pFVar42->ParentGuid).A = uVar2;
    (pFVar42->ParentGuid).B = uVar3;
    uVar2 = (pFVar39->ParentGuid).D;
    uVar3 = (pFVar39->SpawnableObjectBindingID).Guid.A;
    uVar16 = (pFVar39->SpawnableObjectBindingID).Guid.B;
    (pFVar42->ParentGuid).C = (pFVar39->ParentGuid).C;
    (pFVar42->ParentGuid).D = uVar2;
    (pFVar42->SpawnableObjectBindingID).Guid.A = uVar3;
    (pFVar42->SpawnableObjectBindingID).Guid.B = uVar16;
    uVar2 = (pFVar39->SpawnableObjectBindingID).Guid.D;
    iVar36 = (pFVar39->SpawnableObjectBindingID).SequenceID;
    iVar15 = (pFVar39->SpawnableObjectBindingID).ResolveParentIndex;
    (pFVar42->SpawnableObjectBindingID).Guid.C = (pFVar39->SpawnableObjectBindingID).Guid.C;
    (pFVar42->SpawnableObjectBindingID).Guid.D = uVar2;
    (pFVar42->SpawnableObjectBindingID).SequenceID = iVar36;
    (pFVar42->SpawnableObjectBindingID).ResolveParentIndex = iVar15;
    (pFVar39->Tags).AllocatorInstance.Data = pFVar6;
    (pFVar39->Tags).ArrayNum = iVar17;
    (pFVar39->Tags).ArrayMax = iVar18;
    (pFVar39->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar7;
    *(undefined8 *)&(pFVar39->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar8;
    *(undefined8 *)&(pFVar39->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar9;
    *(undefined8 *)&(pFVar39->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 = uVar10;
    *(undefined8 *)&(pFVar39->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = uVar11;
    (pFVar39->Guid).A = uVar19;
    (pFVar39->Guid).B = uVar20;
    (pFVar39->Guid).C = uVar21;
    (pFVar39->Guid).D = uVar22;
    (pFVar39->Name).Data.AllocatorInstance.Data = pFVar12;
    (pFVar39->Name).Data.ArrayNum = iVar23;
    (pFVar39->Name).Data.ArrayMax = iVar24;
    (pFVar39->ParentGuid).A = uVar25;
    (pFVar39->ParentGuid).B = uVar26;
    (pFVar39->ParentGuid).C = uVar27;
    (pFVar39->ParentGuid).D = uVar28;
    (pFVar39->SpawnableObjectBindingID).Guid.A = uVar29;
    (pFVar39->SpawnableObjectBindingID).Guid.B = uVar30;
    (pFVar39->SpawnableObjectBindingID).Guid.C = uVar31;
    (pFVar39->SpawnableObjectBindingID).Guid.D = uVar32;
    (pFVar39->SpawnableObjectBindingID).SequenceID = iVar33;
    (pFVar39->SpawnableObjectBindingID).ResolveParentIndex = iVar34;
    iVar36 = iVar40;
  } while( true );
}

// HeapifyInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>_> @ 146173da0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
HeapifyInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>_>
          (FMovieSceneSpawnable *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_> param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FScriptContainerElement *pFVar18;
  TObjectPtr<UFunction>_u_0 TVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  FScriptContainerElement *pFVar24;
  TObjectPtr<UObject>_u_0 TVar25;
  FScriptContainerElement *pFVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  TObjectPtr<UFunction>_u_0 TVar30;
  undefined8 uVar31;
  FScriptContainerElement *pFVar32;
  undefined6 uVar33;
  uint uVar34;
  ESpawnOwnership EVar35;
  undefined3 uVar36;
  FNameEntryId FVar37;
  int iVar38;
  int iVar39;
  bool bVar40;
  bool bVar41;
  undefined6 uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  ESpawnOwnership EVar51;
  undefined3 uVar52;
  FNameEntryId FVar53;
  bool bVar54;
  int iVar55;
  int iVar56;
  longlong lVar57;
  FMovieSceneSpawnable *pFVar58;
  int iVar59;
  int iVar60;
  FMovieSceneSpawnable *pFVar61;
  
  if (param_2 < 0) {
    bVar54 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar54) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar55 = (param_2 + -2) / 2;
  iVar56 = iVar55 * 2 + 1;
  iVar5 = iVar56;
  iVar59 = iVar55;
  do {
    while (param_2 <= iVar56) {
LAB_1461740cc:
      if (iVar59 == 0) {
        return;
      }
      iVar55 = iVar59 + -1;
      iVar56 = iVar5 + -2;
      iVar5 = iVar56;
      iVar59 = iVar55;
    }
    iVar56 = iVar55 * 2;
    iVar60 = iVar56 + 1;
    if (iVar56 + 2 < param_2) {
      lVar57 = (longlong)iVar56;
      lVar1 = lVar57 + 1;
      uVar2 = param_1[lVar1].Guid.A;
      uVar3 = param_1[lVar57 + 2].Guid.A;
      if (uVar3 < uVar2) {
        bVar54 = true;
      }
      else if (uVar2 < uVar3) {
        bVar54 = false;
      }
      else {
        uVar2 = param_1[lVar1].Guid.B;
        uVar3 = param_1[lVar57 + 2].Guid.B;
        if (uVar3 < uVar2) {
          bVar54 = true;
        }
        else if (uVar2 < uVar3) {
          bVar54 = false;
        }
        else {
          uVar2 = param_1[lVar1].Guid.C;
          uVar3 = param_1[lVar57 + 2].Guid.C;
          if (uVar3 < uVar2) {
            bVar54 = true;
          }
          else if (uVar2 < uVar3) {
            bVar54 = false;
          }
          else {
            bVar54 = param_1[lVar57 + 2].Guid.D < param_1[lVar1].Guid.D;
          }
        }
      }
      if (bVar54) {
        iVar60 = iVar56;
      }
      iVar60 = iVar60 + 1;
    }
    pFVar58 = param_1 + iVar60;
    pFVar61 = param_1 + iVar55;
    uVar2 = (pFVar58->Guid).A;
    uVar3 = (pFVar61->Guid).A;
    if ((uVar2 <= uVar3) &&
       ((uVar3 != uVar2 ||
        ((uVar2 = (pFVar58->Guid).B, uVar3 = (pFVar61->Guid).B, uVar2 <= uVar3 &&
         ((uVar3 != uVar2 ||
          ((uVar2 = (pFVar58->Guid).C, uVar3 = (pFVar61->Guid).C, uVar2 <= uVar3 &&
           ((uVar3 != uVar2 || ((pFVar58->Guid).D <= (pFVar61->Guid).D))))))))))))
    goto LAB_1461740cc;
    dVar6 = (pFVar61->SpawnTransform).Rotation.XY.m128d_f64[0];
    dVar7 = (pFVar61->SpawnTransform).Rotation.XY.m128d_f64[1];
    dVar8 = (pFVar61->SpawnTransform).Rotation.ZW.m128d_f64[0];
    dVar9 = (pFVar61->SpawnTransform).Rotation.ZW.m128d_f64[1];
    dVar10 = (pFVar61->SpawnTransform).Translation.XY.m128d_f64[0];
    dVar11 = (pFVar61->SpawnTransform).Translation.XY.m128d_f64[1];
    dVar12 = (pFVar61->SpawnTransform).Translation.ZW.m128d_f64[0];
    dVar13 = (pFVar61->SpawnTransform).Translation.ZW.m128d_f64[1];
    dVar14 = (pFVar61->SpawnTransform).Scale3D.XY.m128d_f64[0];
    dVar15 = (pFVar61->SpawnTransform).Scale3D.XY.m128d_f64[1];
    dVar16 = (pFVar61->SpawnTransform).Scale3D.ZW.m128d_f64[0];
    dVar17 = (pFVar61->SpawnTransform).Scale3D.ZW.m128d_f64[1];
    pFVar18 = (pFVar61->Tags).AllocatorInstance.Data;
    iVar38 = (pFVar61->Tags).ArrayNum;
    iVar39 = (pFVar61->Tags).ArrayMax;
    bVar40 = pFVar61->bContinuouslyRespawn;
    bVar41 = pFVar61->bNetAddressableName;
    uVar42 = *(undefined6 *)&pFVar61->field_0x72;
    TVar19 = (pFVar61->DynamicBinding_DEPRECATED).Function.field0_0x0;
    uVar20 = *(undefined8 *)&(pFVar61->DynamicBinding_DEPRECATED).ResolveParamsProperty;
    uVar21 = *(undefined8 *)&(pFVar61->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
    uVar22 = *(undefined8 *)&(pFVar61->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
    uVar23 = *(undefined8 *)&(pFVar61->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
    uVar43 = (pFVar61->Guid).A;
    uVar44 = (pFVar61->Guid).B;
    uVar45 = (pFVar61->Guid).C;
    uVar46 = (pFVar61->Guid).D;
    pFVar24 = (pFVar61->Name).Data.AllocatorInstance.Data;
    iVar47 = (pFVar61->Name).Data.ArrayNum;
    iVar48 = (pFVar61->Name).Data.ArrayMax;
    TVar25 = (pFVar61->ObjectTemplate).field0_0x0;
    pFVar26 = (pFVar61->ChildPossessables).AllocatorInstance.Data;
    iVar49 = (pFVar61->ChildPossessables).ArrayNum;
    iVar50 = (pFVar61->ChildPossessables).ArrayMax;
    EVar51 = pFVar61->Ownership;
    uVar52 = *(undefined3 *)&pFVar61->field_0xd9;
    FVar53.Value = (pFVar61->LevelName).ComparisonIndex.Value;
    uVar27 = *(undefined8 *)&(pFVar61->LevelName).Number;
    uVar28 = *(undefined8 *)&pFVar61->field_0xe8;
    dVar29 = (pFVar58->SpawnTransform).Rotation.XY.m128d_f64[1];
    (pFVar61->SpawnTransform).Rotation.XY.m128d_f64[0] =
         (pFVar58->SpawnTransform).Rotation.XY.m128d_f64[0];
    (pFVar61->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar29;
    dVar29 = (pFVar58->SpawnTransform).Rotation.ZW.m128d_f64[1];
    (pFVar61->SpawnTransform).Rotation.ZW.m128d_f64[0] =
         (pFVar58->SpawnTransform).Rotation.ZW.m128d_f64[0];
    (pFVar61->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar29;
    dVar29 = (pFVar58->SpawnTransform).Translation.XY.m128d_f64[1];
    (pFVar61->SpawnTransform).Translation.XY.m128d_f64[0] =
         (pFVar58->SpawnTransform).Translation.XY.m128d_f64[0];
    (pFVar61->SpawnTransform).Translation.XY.m128d_f64[1] = dVar29;
    dVar29 = (pFVar58->SpawnTransform).Translation.ZW.m128d_f64[1];
    (pFVar61->SpawnTransform).Translation.ZW.m128d_f64[0] =
         (pFVar58->SpawnTransform).Translation.ZW.m128d_f64[0];
    (pFVar61->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar29;
    dVar29 = (pFVar58->SpawnTransform).Scale3D.XY.m128d_f64[1];
    (pFVar61->SpawnTransform).Scale3D.XY.m128d_f64[0] =
         (pFVar58->SpawnTransform).Scale3D.XY.m128d_f64[0];
    (pFVar61->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar29;
    dVar29 = (pFVar58->SpawnTransform).Scale3D.ZW.m128d_f64[1];
    (pFVar61->SpawnTransform).Scale3D.ZW.m128d_f64[0] =
         (pFVar58->SpawnTransform).Scale3D.ZW.m128d_f64[0];
    (pFVar61->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar29;
    iVar56 = (pFVar58->Tags).ArrayNum;
    iVar55 = (pFVar58->Tags).ArrayMax;
    (pFVar61->Tags).AllocatorInstance.Data = (pFVar58->Tags).AllocatorInstance.Data;
    (pFVar61->Tags).ArrayNum = iVar56;
    (pFVar61->Tags).ArrayMax = iVar55;
    bVar54 = pFVar58->bNetAddressableName;
    uVar33 = *(undefined6 *)&pFVar58->field_0x72;
    TVar30 = (pFVar58->DynamicBinding_DEPRECATED).Function.field0_0x0;
    pFVar61->bContinuouslyRespawn = pFVar58->bContinuouslyRespawn;
    pFVar61->bNetAddressableName = bVar54;
    *(undefined6 *)&pFVar61->field_0x72 = uVar33;
    (pFVar61->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar30;
    uVar31 = *(undefined8 *)&(pFVar58->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
    *(undefined8 *)&(pFVar61->DynamicBinding_DEPRECATED).ResolveParamsProperty =
         *(undefined8 *)&(pFVar58->DynamicBinding_DEPRECATED).ResolveParamsProperty;
    *(undefined8 *)&(pFVar61->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar31;
    uVar31 = *(undefined8 *)&(pFVar58->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
    *(undefined8 *)&(pFVar61->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
         *(undefined8 *)&(pFVar58->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
    *(undefined8 *)&(pFVar61->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = uVar31;
    uVar2 = (pFVar58->Guid).B;
    uVar3 = (pFVar58->Guid).C;
    uVar34 = (pFVar58->Guid).D;
    (pFVar61->Guid).A = (pFVar58->Guid).A;
    (pFVar61->Guid).B = uVar2;
    (pFVar61->Guid).C = uVar3;
    (pFVar61->Guid).D = uVar34;
    iVar56 = (pFVar58->Name).Data.ArrayNum;
    iVar55 = (pFVar58->Name).Data.ArrayMax;
    (pFVar61->Name).Data.AllocatorInstance.Data = (pFVar58->Name).Data.AllocatorInstance.Data;
    (pFVar61->Name).Data.ArrayNum = iVar56;
    (pFVar61->Name).Data.ArrayMax = iVar55;
    pFVar32 = (pFVar58->ChildPossessables).AllocatorInstance.Data;
    (pFVar61->ObjectTemplate).field0_0x0 = (pFVar58->ObjectTemplate).field0_0x0;
    (pFVar61->ChildPossessables).AllocatorInstance.Data = pFVar32;
    iVar56 = (pFVar58->ChildPossessables).ArrayMax;
    EVar35 = pFVar58->Ownership;
    uVar36 = *(undefined3 *)&pFVar58->field_0xd9;
    FVar37.Value = (pFVar58->LevelName).ComparisonIndex.Value;
    (pFVar61->ChildPossessables).ArrayNum = (pFVar58->ChildPossessables).ArrayNum;
    (pFVar61->ChildPossessables).ArrayMax = iVar56;
    pFVar61->Ownership = EVar35;
    *(undefined3 *)&pFVar61->field_0xd9 = uVar36;
    (pFVar61->LevelName).ComparisonIndex = (FNameEntryId)FVar37.Value;
    uVar31 = *(undefined8 *)&pFVar58->field_0xe8;
    *(undefined8 *)&(pFVar61->LevelName).Number = *(undefined8 *)&(pFVar58->LevelName).Number;
    *(undefined8 *)&pFVar61->field_0xe8 = uVar31;
    (pFVar58->SpawnTransform).Rotation.XY.m128d_f64[0] = dVar6;
    (pFVar58->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar7;
    (pFVar58->SpawnTransform).Rotation.ZW.m128d_f64[0] = dVar8;
    (pFVar58->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar9;
    (pFVar58->SpawnTransform).Translation.XY.m128d_f64[0] = dVar10;
    (pFVar58->SpawnTransform).Translation.XY.m128d_f64[1] = dVar11;
    (pFVar58->SpawnTransform).Translation.ZW.m128d_f64[0] = dVar12;
    (pFVar58->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar13;
    (pFVar58->SpawnTransform).Scale3D.XY.m128d_f64[0] = dVar14;
    (pFVar58->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar15;
    (pFVar58->SpawnTransform).Scale3D.ZW.m128d_f64[0] = dVar16;
    (pFVar58->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar17;
    (pFVar58->Tags).AllocatorInstance.Data = pFVar18;
    (pFVar58->Tags).ArrayNum = iVar38;
    (pFVar58->Tags).ArrayMax = iVar39;
    pFVar58->bContinuouslyRespawn = bVar40;
    pFVar58->bNetAddressableName = bVar41;
    *(undefined6 *)&pFVar58->field_0x72 = uVar42;
    (pFVar58->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar19;
    *(undefined8 *)&(pFVar58->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar20;
    *(undefined8 *)&(pFVar58->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar21;
    *(undefined8 *)&(pFVar58->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 = uVar22;
    *(undefined8 *)&(pFVar58->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = uVar23;
    (pFVar58->Guid).A = uVar43;
    (pFVar58->Guid).B = uVar44;
    (pFVar58->Guid).C = uVar45;
    (pFVar58->Guid).D = uVar46;
    (pFVar58->Name).Data.AllocatorInstance.Data = pFVar24;
    (pFVar58->Name).Data.ArrayNum = iVar47;
    (pFVar58->Name).Data.ArrayMax = iVar48;
    (pFVar58->ObjectTemplate).field0_0x0 = TVar25;
    (pFVar58->ChildPossessables).AllocatorInstance.Data = pFVar26;
    iVar56 = iVar60 * 2 + 1;
    (pFVar58->ChildPossessables).ArrayNum = iVar49;
    (pFVar58->ChildPossessables).ArrayMax = iVar50;
    pFVar58->Ownership = EVar51;
    *(undefined3 *)&pFVar58->field_0xd9 = uVar52;
    (pFVar58->LevelName).ComparisonIndex = (FNameEntryId)FVar53.Value;
    *(undefined8 *)&(pFVar58->LevelName).Number = uVar27;
    *(undefined8 *)&pFVar58->field_0xe8 = uVar28;
    iVar55 = iVar60;
  } while( true );
}

// IndexOfBy<TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneEvaluationFieldEntityKey,FMovieSceneEvaluationFieldEntityKey_FMovieSceneEntityComponentFieldBuilder::FKeyToIndex::*> @ 146174110

int __cdecl
AlgoImpl::
IndexOfBy<TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneEvaluationFieldEntityKey,FMovieSceneEvaluationFieldEntityKey_FMovieSceneEntityComponentFieldBuilder::FKeyToIndex::*>
          (TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FMovieSceneEvaluationFieldEntityKey *param_2,pdm_685685be param_3)

{
  int iVar1;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex> FVar2;
  bool bVar3;
  FWeakObjectPtr *pFVar4;
  int iVar5;
  longlong lVar6;
  FWeakObjectPtr local_28;
  uint local_20;
  FWeakObjectPtr local_18;
  uint local_10;
  
  iVar1 = param_1->ArrayNum;
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)0x0) {
    param_1 = (TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)FVar2;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    lVar6 = 0;
    pFVar4 = (FWeakObjectPtr *)((longlong)(int)param_3 + (longlong)param_1);
    do {
      local_28 = (param_2->EntityOwner).WeakPtr;
      local_20 = param_2->EntityID;
      local_18 = *pFVar4;
      local_10 = pFVar4[1].ObjectIndex;
      bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_18,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_28);
      if ((bVar3) && (local_10 == local_20)) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
      pFVar4 = pFVar4 + 2;
    } while (lVar6 < iVar1);
  }
  return -1;
}

// IndexOfBy<TArray<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneEvaluationFieldEntityMetaData,FMovieSceneEvaluationFieldEntityMetaData_FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex::*> @ 1461741d0

int __cdecl
AlgoImpl::
IndexOfBy<TArray<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneEvaluationFieldEntityMetaData,FMovieSceneEvaluationFieldEntityMetaData_FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex::*>
          (TArray<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FMovieSceneEvaluationFieldEntityMetaData *param_2,pdm_a382eb2c param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex> FVar4;
  int iVar5;
  ESectionEvaluationFlags *pEVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  iVar1 = param_1->ArrayNum;
  FVar4 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar4 != (ForElementType<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex>)0x0) {
    param_1 = (TArray<FMovieSceneEntityComponentFieldBuilder::FMetaDataToIndex,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
               *)FVar4;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    pEVar6 = (ESectionEvaluationFlags *)((longlong)(int)param_3 + 0x44 + (longlong)param_1);
    do {
      if ((*(undefined4 *)(pEVar6 + -4) == (param_2->ForcedTime).Value) &&
         (*pEVar6 == param_2->Flags)) {
        if ((((pEVar6[1] ^ param_2->bEvaluateInSequencePreRoll) & PreRoll) == None) &&
           (((pEVar6[1] ^ param_2->field_0x45) & PostRoll) == None)) {
          uVar2 = *(undefined4 *)(pEVar6 + -0x14);
          uVar3 = (param_2->OverrideBoundPropertyPath).Data.ArrayNum;
          if (uVar2 == uVar3) {
            if (1 < (int)uVar2) {
              iVar5 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)(pEVar6 + -0x1c),
                                 (wchar_t *)
                                 (param_2->OverrideBoundPropertyPath).Data.AllocatorInstance.Data);
              bVar9 = iVar5 == 0;
              goto LAB_14617426d;
            }
          }
          else {
            bVar9 = uVar2 + uVar3 == 1;
LAB_14617426d:
            if (!bVar9) goto LAB_14617428f;
          }
          if ((*(FName *)(pEVar6 + -0xc) == param_2->NotifyFunctionName) &&
             (bVar9 = FSoftObjectPath::operator==
                                ((FSoftObjectPath *)(pEVar6 + -0x3c),
                                 (FSoftObjectPath *)&(param_2->Condition).SoftObjectPtr.field_0x8),
             bVar9)) {
            return iVar7;
          }
        }
      }
LAB_14617428f:
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 1;
      pEVar6 = pEVar6 + 0x50;
    } while (lVar8 < iVar1);
  }
  return -1;
}

// InsertSorted<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FMovieSceneBinding> @ 1461742d0

int __cdecl
InsertSorted<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FMovieSceneBinding>
          (TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_> *param_1,
          FMovieSceneBinding *param_2)

{
  FMovieSceneBinding *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FIdentityFunctor local_res8;
  
  iVar5 = param_1->ArrayNum;
  iVar4 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBinding_const_,int,FMovieSceneBinding,FIdentityFunctor,TLess<void>_>
                    ((FMovieSceneBinding *)(param_1->AllocatorInstance).Data,iVar5,param_2,
                     local_res8,(TLess<void>)local_res8);
  if ((iVar4 < 0) || (iVar5 < iVar4)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= GetNum(Range)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                       ,0x11f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (FMovieSceneBinding *)(param_1->AllocatorInstance).Data;
  if ((pFVar1 <= param_2) && (param_2 < pFVar1 + param_1->ArrayMax)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)iVar4 * 0x40;
  memmove(pFVar6 + 0x40,pFVar6,(longlong)(iVar5 - iVar4) << 6);
  FMovieSceneBinding::FMovieSceneBinding
            ((FMovieSceneBinding *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x40),
             param_2);
  return iVar4;
}

// InsertSorted<TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>,FMovieScenePossessable> @ 146174410

int __cdecl
InsertSorted<TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>,FMovieScenePossessable>
          (TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_> *param_1,
          FMovieScenePossessable *param_2)

{
  FMovieScenePossessable *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FIdentityFunctor local_res8;
  
  iVar5 = param_1->ArrayNum;
  iVar4 = AlgoImpl::
          LowerBoundInternal<FMovieScenePossessable_const_,int,FMovieScenePossessable,FIdentityFunctor,TLess<void>_>
                    ((FMovieScenePossessable *)(param_1->AllocatorInstance).Data,iVar5,param_2,
                     local_res8,(TLess<void>)local_res8);
  if ((iVar4 < 0) || (iVar5 < iVar4)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= GetNum(Range)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                       ,0x11f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (FMovieScenePossessable *)(param_1->AllocatorInstance).Data;
  if ((pFVar1 <= param_2) && (param_2 < pFVar1 + param_1->ArrayMax)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x880,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)iVar4 * 0x80;
  memmove(pFVar6 + 0x80,pFVar6,(longlong)(iVar5 - iVar4) << 7);
  FMovieScenePossessable::FMovieScenePossessable
            ((FMovieScenePossessable *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x80),
             param_2);
  return iVar4;
}

// InsertSorted<TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>,FMovieSceneSpawnable> @ 146174550

int __cdecl
InsertSorted<TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>,FMovieSceneSpawnable>
          (TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_> *param_1,
          FMovieSceneSpawnable *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FIdentityFunctor local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<FMovieSceneSpawnable_const_,int,FMovieSceneSpawnable,FIdentityFunctor,TLess<void>_>
                    ((FMovieSceneSpawnable *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                     param_2,local_res8,(TLess<void>)local_res8);
  if ((iVar3 < 0) || (param_1->ArrayNum < iVar3)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= GetNum(Range)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                       ,0x11f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>::Insert(param_1,param_2,iVar3);
  return iVar3;
}

// InternalConstructor<UMovieScene> @ 1461745e0

void __cdecl InternalConstructor<UMovieScene>(FObjectInitializer *param_1)

{
  UMovieSceneDecorationContainerObject *this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  FFrameRate FVar4;
  uint local_res8;
  uint local_res10;
  FGuid local_18;
  
  this = (UMovieSceneDecorationContainerObject *)param_1->Obj;
  if (this != (UMovieSceneDecorationContainerObject *)0x0) {
    UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieScene__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].Decorations.Decorations.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].Decorations.Decorations.AllocatorInstance.Data + 4) = 0x80;
    this[1].Decorations.Decorations.ArrayNum = -1;
    this[1].Decorations.Decorations.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    uVar1 = local_res8 >> 8;
    local_res8 = uVar1 << 8;
    this[2]._padding_ = (ulonglong)local_res8;
    uVar2 = local_res10 >> 8;
    local_res10 = uVar2 << 8;
    this[2]._padding_ = (ulonglong)local_res10;
    local_res8 = uVar1 << 8;
    this[2]._padding_ = (ulonglong)local_res8;
    local_res10 = uVar2 << 8;
    this[2]._padding_ = (ulonglong)local_res10;
    *(undefined4 *)&this[2]._padding_ = 60000;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 1;
    *(undefined4 *)&this[2].Decorations.Decorations.AllocatorInstance.Data = 60000;
    *(undefined4 *)((longlong)&this[2].Decorations.Decorations.AllocatorInstance.Data + 4) = 1;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined2 *)&this[2].Decorations.Decorations.ArrayNum = 1;
    if ((this->_padding_ & 0x10) == 0) {
      local_18 = FSequencerObjectVersion::GUID;
      iVar3 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
      if (iVar3 < 7) {
        FVar4 = GetLegacyConversionFrameRate();
        this[2]._padding_ = *(longlong *)FVar4;
      }
    }
  }
  return;
}

// InternalConstructor<UMovieSceneBuiltInEasingFunction> @ 146174770

void __cdecl InternalConstructor<UMovieSceneBuiltInEasingFunction>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x8 = 0;
    *(undefined ***)this = &UMovieSceneBuiltInEasingFunction::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UMovieSceneBuiltInEasingFunction::_vftable__for__IMovieSceneEasingFunction__;
  }
  return;
}

// InternalConstructor<UMovieSceneCustomClockSource> @ 1461747b0

void __cdecl InternalConstructor<UMovieSceneCustomClockSource>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieSceneCustomClockSource__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneEasingExternalCurve> @ 1461747e0

void __cdecl InternalConstructor<UMovieSceneEasingExternalCurve>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UMovieSceneEasingExternalCurve::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UMovieSceneEasingExternalCurve::_vftable__for__IMovieSceneEasingFunction__;
  }
  return;
}

// InternalConstructor<UMovieSceneEvaluationHook> @ 146174830

void __cdecl InternalConstructor<UMovieSceneEvaluationHook>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieSceneEvaluationHook__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneNodeGroup> @ 146174860

void __cdecl InternalConstructor<UMovieSceneNodeGroup>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieSceneNodeGroup__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneNodeGroupCollection> @ 146174890

void __cdecl InternalConstructor<UMovieSceneNodeGroupCollection>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieSceneNodeGroupCollection__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneShotMetaData> @ 1461748c0

void __cdecl InternalConstructor<UMovieSceneShotMetaData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x9 = 0;
    *(undefined ***)this = &UMovieSceneShotMetaData::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UMovieSceneShotMetaData::_vftable__for__IMovieSceneMetaDataInterface__;
    this[1].field_0xb = 0;
    this[1].field_0xd = 0;
    this[1].field_0xf = 0;
    this[1].field_0x14 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneTrackInstance> @ 146174910

void __cdecl InternalConstructor<UMovieSceneTrackInstance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieSceneTrackInstance__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneTrackInstanceInstantiator> @ 146174960

void __cdecl InternalConstructor<UMovieSceneTrackInstanceInstantiator>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntityInstantiatorSystem *this;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  UClass *local_res10;
  
  this = (UMovieSceneEntityInstantiatorSystem *)param_1->Obj;
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneTrackInstanceInstantiator__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[2].field_0x30 = 0;
    *(undefined4 *)&this[2].field_0x38 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x80;
    if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
      local_res8 = *(UObject **)&this->field_0x10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10 = Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
      pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_res8 = *(UObject **)&this->field_0x10;
      FVar1.Value = *(ushort *)&pFVar2->BoundObject;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneTrackInstanceSystem> @ 146174aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneTrackInstanceSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar1;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->Phase = Scheduling;
    this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceSystem__6B_;
    this[1]._padding_ = 0;
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    (this->RelevantComponent).Value = (ushort)pFVar1->TrackInstance;
  }
  return;
}

// InternalConstructor<UNodeAndChannelMappings> @ 146174af0

void __cdecl InternalConstructor<UNodeAndChannelMappings>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNodeAndChannelMappings__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieScene> @ 146174b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieScene>(FVTableHelper *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UMovieSceneDecorationContainerObject *this;
  uint local_res18;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UMovieScene::GetPrivateStaticClass();
  this = (UMovieSceneDecorationContainerObject *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneDecorationContainerObject *)0x0) {
    UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieScene__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].Decorations.Decorations.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].Decorations.Decorations.AllocatorInstance.Data + 4) = 0x80;
    this[1].Decorations.Decorations.ArrayNum = -1;
    this[1].Decorations.Decorations.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    uVar1 = local_res18 >> 8;
    local_res18 = uVar1 << 8;
    this[2]._padding_ = (ulonglong)local_res18;
    this[2]._padding_ = 0;
    local_res18 = uVar1 << 8;
    this[2]._padding_ = (ulonglong)local_res18;
    *(undefined4 *)&this[2]._padding_ = 60000;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 1;
    *(undefined4 *)&this[2].Decorations.Decorations.AllocatorInstance.Data = 60000;
    *(undefined4 *)((longlong)&this[2].Decorations.Decorations.AllocatorInstance.Data + 4) = 1;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneBuiltInEasingFunction> @ 146174d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneBuiltInEasingFunction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneBuiltInEasingFunction::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UMovieSceneBuiltInEasingFunction::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMovieSceneBuiltInEasingFunction::_vftable__for__IMovieSceneEasingFunction__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCustomClockSource> @ 146174dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCustomClockSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCustomClockSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneCustomClockSource__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEasingExternalCurve> @ 146174e70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneEasingExternalCurve>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEasingExternalCurve::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UMovieSceneEasingExternalCurve::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMovieSceneEasingExternalCurve::_vftable__for__IMovieSceneEasingFunction__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEvaluationHook> @ 146174f30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneEvaluationHook>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEvaluationHook::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneEvaluationHook__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneNodeGroup> @ 146174fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneNodeGroup>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneNodeGroup::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneNodeGroup__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneNodeGroupCollection> @ 146175090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneNodeGroupCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneNodeGroupCollection::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneNodeGroupCollection__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneShotMetaData> @ 146175140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneShotMetaData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneShotMetaData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x9 = 0;
    *(undefined ***)pUVar1 = &UMovieSceneShotMetaData::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMovieSceneShotMetaData::_vftable__for__IMovieSceneMetaDataInterface__;
    pUVar1[1].field_0xb = 0;
    pUVar1[1].field_0xd = 0;
    pUVar1[1].field_0xf = 0;
    pUVar1[1].field_0x14 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTrackInstance> @ 146175210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTrackInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTrackInstance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneTrackInstance__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceInstantiator> @ 1461752d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceInstantiator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntityInstantiatorSystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTrackInstanceInstantiator::GetPrivateStaticClass();
  this = (UMovieSceneEntityInstantiatorSystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneTrackInstanceInstantiator__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[2].field_0x30 = 0;
    *(undefined4 *)&this[2].field_0x38 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x80;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceSystem> @ 146175400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTrackInstanceSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceSystem__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNodeAndChannelMappings> @ 1461754b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNodeAndChannelMappings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNodeAndChannelMappings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNodeAndChannelMappings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,FIdentityFunctor,`FMovieSceneObjectCache::UpdateBindings'::__l98::<lambda_1>_> @ 146175560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,FIdentityFunctor,_FMovieSceneObjectCache::UpdateBindings_::__l98::<lambda_1>_>
          (TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> param_4)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this;
  FWeakObjectPtr *pFVar5;
  TWeakObjectPtr<UObject,FWeakObjectPtr> **ppTVar6;
  FWeakObjectPtr *pFVar7;
  FWeakObjectPtr *pFVar8;
  FWeakObjectPtr *pFVar9;
  float fVar10;
  undefined1 auStack_398 [32];
  int local_378;
  TWeakObjectPtr<UObject,FWeakObjectPtr> **local_370;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_358;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_348;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    ppTVar6 = &local_348;
    do {
      pFVar7 = &ppTVar6[1]->WeakPtr;
      pFVar5 = &(*ppTVar6)->WeakPtr;
      local_358 = ppTVar6[2];
      iVar2 = (int)((longlong)pFVar7 - (longlong)pFVar5 >> 3) + 1;
      local_378 = (int)local_358;
      this = pFVar5;
      local_370 = ppTVar6;
      if ((int)local_358 != 0) {
LAB_146175623:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          pFVar8 = pFVar7 + 1;
          FVar1 = this[iVar2 >> 1];
          this[iVar2 >> 1] = *this;
          *this = FVar1;
          pFVar5 = this;
LAB_146175650:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar7) goto code_r0x000146175659;
          goto LAB_146175671;
        }
        for (; pFVar8 = this, pFVar5 = this, this < pFVar7; pFVar7 = pFVar7 + -1) {
          while (pFVar9 = pFVar8, pFVar5 = pFVar5 + 1, pFVar5 <= pFVar7) {
            pUVar3 = FWeakObjectPtr::Get(pFVar9);
            pUVar4 = FWeakObjectPtr::Get(pFVar5);
            pFVar8 = pFVar5;
            if (pUVar4 <= pUVar3) {
              pFVar8 = pFVar9;
            }
          }
          FVar1 = *pFVar9;
          *pFVar9 = *pFVar7;
          *pFVar7 = FVar1;
          ppTVar6 = local_370;
        }
        goto LAB_146175754;
      }
LAB_146175742:
      HeapSortInternal<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,FIdentityFunctor,_FMovieSceneObjectCache::UpdateBindings_::__l98::<lambda_1>_>
                ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)pFVar5,iVar2,param_3,param_4);
LAB_146175754:
      ppTVar6 = ppTVar6 + -3;
    } while (&local_348 <= ppTVar6);
  }
  return;
code_r0x000146175659:
  pUVar3 = FWeakObjectPtr::Get(this);
  pUVar4 = FWeakObjectPtr::Get(pFVar5);
  if (pUVar4 <= pUVar3) goto LAB_146175650;
LAB_146175671:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= this) break;
    pUVar3 = FWeakObjectPtr::Get(pFVar8);
    pUVar4 = FWeakObjectPtr::Get(this);
  } while (pUVar4 <= pUVar3);
  if (pFVar5 <= pFVar8) {
    FVar1 = *pFVar5;
    *pFVar5 = *pFVar8;
    *pFVar8 = FVar1;
    goto LAB_146175650;
  }
  FVar1 = *this;
  *this = *pFVar8;
  local_378 = local_378 + -1;
  *pFVar8 = FVar1;
  if ((longlong)((longlong)pFVar8 + (-8 - (longlong)this) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar7 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar7) {
      *ppTVar6 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)pFVar5;
      ppTVar6[1] = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)pFVar7;
      *(int *)(ppTVar6 + 2) = local_378;
      ppTVar6 = ppTVar6 + 3;
      local_370 = ppTVar6;
    }
    if (pFVar8 <= this + 1) goto LAB_146175754;
    pFVar7 = pFVar9 + -2;
    pFVar5 = this;
  }
  else {
    if (this + 1 < pFVar8) {
      *ppTVar6 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)this;
      ppTVar6[1] = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(pFVar9 + -2);
      *(int *)(ppTVar6 + 2) = local_378;
      ppTVar6 = ppTVar6 + 3;
      local_370 = ppTVar6;
    }
    if (pFVar7 <= pFVar5) goto LAB_146175754;
  }
  iVar2 = (int)((longlong)pFVar7 - (longlong)pFVar5 >> 3) + 1;
  this = pFVar5;
  if (local_378 == 0) goto LAB_146175742;
  goto LAB_146175623;
}

// IntroSortInternal<FFrameTime,int,FIdentityFunctor,TLess<void>_> @ 146175830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<FFrameTime,int,FIdentityFunctor,TLess<void>_>
          (FFrameTime *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FFrameTime FVar1;
  bool bVar2;
  FFrameTime *pFVar3;
  int iVar4;
  int iVar5;
  FFrameTime FVar6;
  FFrameTime *pFVar7;
  FFrameNumber FVar8;
  FFrameTime *pFVar9;
  FFrameTime *pFVar10;
  FFrameTime *pFVar11;
  int iVar12;
  FFrameTime **ppFVar13;
  float fVar14;
  undefined1 auStack_388 [32];
  FFrameTime local_368;
  FFrameTime local_360;
  FFrameTime *local_348;
  FFrameTime *local_338;
  FFrameTime *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar14;
    memset(local_320,0,0x2e8);
    ppFVar13 = &local_338;
    do {
      pFVar11 = ppFVar13[1];
      local_348 = ppFVar13[2];
      iVar4 = (int)((longlong)pFVar11 - (longlong)*ppFVar13 >> 3);
      pFVar3 = *ppFVar13;
      iVar12 = (int)local_348;
      while (iVar5 = iVar4 + 1, iVar12 != 0) {
        if (iVar5 < 9) {
          if (pFVar3 < pFVar11) {
            pFVar9 = pFVar3 + 1;
            do {
              pFVar10 = pFVar3;
              if (pFVar9 <= pFVar11) {
                pFVar7 = pFVar9;
                if (0x1f < ((longlong)pFVar11 + (8 - (longlong)pFVar9) & 0xfffffffffffffff8U)) {
                  do {
                    FVar1 = *pFVar7;
                    FVar6 = *pFVar10;
                    if (FVar6.FrameNumber.Value.Value < FVar1.FrameNumber.Value.Value) {
LAB_146175ab3:
                      FVar6 = FVar1;
                      pFVar10 = pFVar7;
                    }
                    else if (FVar6.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
                      local_368.SubFrame = FVar6.SubFrame;
                      local_360.SubFrame = FVar1.SubFrame;
                      if (local_368.SubFrame < local_360.SubFrame) goto LAB_146175ab3;
                    }
                    FVar8 = pFVar7[1].FrameNumber;
                    if (FVar6.FrameNumber.Value.Value < FVar8.Value) {
LAB_146175ada:
                      pFVar10 = pFVar7 + 1;
                    }
                    else if (FVar6.FrameNumber.Value.Value == FVar8.Value) {
                      local_368.SubFrame = FVar6.SubFrame;
                      local_360.SubFrame = pFVar7[1].SubFrame;
                      if (local_368.SubFrame < local_360.SubFrame) goto LAB_146175ada;
                    }
                    FVar1 = pFVar7[2];
                    local_368 = *pFVar10;
                    if (local_368.FrameNumber.Value.Value < FVar1.FrameNumber.Value.Value) {
LAB_146175b02:
                      pFVar10 = pFVar7 + 2;
                      local_368 = FVar1;
                    }
                    else if (local_368.FrameNumber.Value.Value == FVar1.FrameNumber.Value.Value) {
                      local_360.SubFrame = FVar1.SubFrame;
                      bVar2 = local_368.SubFrame < local_360.SubFrame;
                      if (bVar2) goto LAB_146175b02;
                    }
                    local_360 = pFVar7[3];
                    if (local_368.FrameNumber.Value.Value < local_360.FrameNumber.Value.Value) {
LAB_146175b2a:
                      pFVar10 = pFVar7 + 3;
                    }
                    else if (local_368.FrameNumber.Value.Value == local_360.FrameNumber.Value.Value)
                    {
                      if (local_368.SubFrame < local_360.SubFrame) goto LAB_146175b2a;
                    }
                    pFVar7 = pFVar7 + 4;
                  } while (pFVar7 <= pFVar11 + -3);
                }
                for (; pFVar7 <= pFVar11; pFVar7 = pFVar7 + 1) {
                  local_360 = *pFVar7;
                  local_368 = *pFVar10;
                  if (local_368.FrameNumber.Value.Value < local_360.FrameNumber.Value.Value) {
LAB_146175b67:
                    pFVar10 = pFVar7;
                  }
                  else if (local_368.FrameNumber.Value.Value == local_360.FrameNumber.Value.Value) {
                    if (local_368.SubFrame < local_360.SubFrame) goto LAB_146175b67;
                  }
                }
              }
              FVar1 = *pFVar10;
              pFVar7 = pFVar11 + -1;
              *pFVar10 = *pFVar11;
              *pFVar11 = FVar1;
              pFVar11 = pFVar7;
            } while (pFVar3 < pFVar7);
          }
          goto LAB_146175a16;
        }
        if (iVar5 < 0) {
          iVar5 = iVar4 + 2;
        }
        FVar1 = pFVar3[iVar5 >> 1];
        pFVar3[iVar5 >> 1] = *pFVar3;
        pFVar9 = pFVar11 + 1;
        *pFVar3 = FVar1;
        pFVar10 = pFVar3;
LAB_146175910:
        do {
          do {
            pFVar10 = pFVar10 + 1;
            if (pFVar11 < pFVar10) goto LAB_146175940;
            local_368 = *pFVar10;
            local_360 = *pFVar3;
            if (local_360.FrameNumber.Value.Value < local_368.FrameNumber.Value.Value)
            goto LAB_146175940;
          } while (local_360.FrameNumber.Value.Value != local_368.FrameNumber.Value.Value);
        } while (local_368.SubFrame <= local_360.SubFrame);
LAB_146175940:
        do {
          do {
            pFVar7 = pFVar9;
            pFVar9 = pFVar7 + -1;
            if (pFVar9 <= pFVar3) goto LAB_14617596c;
            local_368 = *pFVar3;
            local_360 = *pFVar9;
            if (local_360.FrameNumber.Value.Value < local_368.FrameNumber.Value.Value)
            goto LAB_14617596c;
          } while (local_360.FrameNumber.Value.Value != local_368.FrameNumber.Value.Value);
        } while (local_368.SubFrame <= local_360.SubFrame);
LAB_14617596c:
        if (pFVar10 <= pFVar9) {
          FVar1 = *pFVar10;
          *pFVar10 = *pFVar9;
          *pFVar9 = FVar1;
          goto LAB_146175910;
        }
        FVar1 = *pFVar3;
        iVar12 = iVar12 + -1;
        *pFVar3 = *pFVar9;
        *pFVar9 = FVar1;
        if ((longlong)((longlong)pFVar9 + (-8 - (longlong)pFVar3) & 0xfffffffffffffff8U) <
            (longlong)((longlong)pFVar11 - (longlong)pFVar10 & 0xfffffffffffffff8U)) {
          if (pFVar10 < pFVar11) {
            *ppFVar13 = pFVar10;
            ppFVar13[1] = pFVar11;
            *(int *)(ppFVar13 + 2) = iVar12;
            ppFVar13 = ppFVar13 + 3;
          }
          if (pFVar9 <= pFVar3 + 1) goto LAB_146175a16;
          pFVar11 = pFVar7 + -2;
          pFVar10 = pFVar3;
        }
        else {
          if (pFVar3 + 1 < pFVar9) {
            *ppFVar13 = pFVar3;
            ppFVar13[1] = pFVar7 + -2;
            *(int *)(ppFVar13 + 2) = iVar12;
            ppFVar13 = ppFVar13 + 3;
          }
          if (pFVar11 <= pFVar10) goto LAB_146175a16;
        }
        iVar4 = (int)((longlong)pFVar11 - (longlong)pFVar10 >> 3);
        pFVar3 = pFVar10;
      }
      HeapSortInternal<FFrameTime,int,FIdentityFunctor,TLess<void>_>(pFVar3,iVar5,param_3,param_4);
LAB_146175a16:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_338 <= ppFVar13);
  }
  return;
}

// IntroSortInternal<FMovieSceneBinding,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_> @ 146175ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneBinding,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>
          (FMovieSceneBinding *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneBinding,TLess<void>_> param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FMovieSceneBinding *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FMovieSceneBinding *pFVar20;
  FMovieSceneBinding *pFVar21;
  FMovieSceneBinding **ppFVar22;
  FMovieSceneBinding *pFVar23;
  FMovieSceneBinding *pFVar24;
  FMovieSceneBinding *pFVar25;
  int iVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_368 [48];
  FMovieSceneBinding *local_338;
  FMovieSceneBinding *local_328;
  FMovieSceneBinding *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (param_2 < 2) {
    return;
  }
  local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
  local_320 = param_1 + (longlong)param_2 + -1;
  local_328 = param_1;
  fVar28 = logf((float)param_2 * (float)param_2);
  local_318 = (undefined4)(longlong)fVar28;
  memset(local_310,0,0x2e8);
  ppFVar22 = &local_328;
  do {
    pFVar24 = ppFVar22[1];
    local_338 = ppFVar22[2];
    iVar19 = (int)((longlong)pFVar24 - (longlong)*ppFVar22 >> 6);
    pFVar8 = *ppFVar22;
    iVar26 = (int)local_338;
joined_r0x000146175c46:
    iVar19 = iVar19 + 1;
    if (iVar26 == 0) {
      HeapSortInternal<FMovieSceneBinding,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>
                (pFVar8,iVar19,param_3,param_4);
    }
    else {
      if (8 < iVar19) {
        lVar3 = pFVar8->_padding_;
        pFVar20 = pFVar24 + 1;
        pFVar25 = pFVar8 + iVar19 / 2;
        lVar4 = pFVar25->_padding_;
        lVar5 = pFVar25->_padding_;
        uVar11 = (pFVar25->ObjectGuid).A;
        uVar12 = (pFVar25->ObjectGuid).B;
        uVar13 = (pFVar25->ObjectGuid).C;
        uVar14 = (pFVar25->ObjectGuid).D;
        pFVar6 = (pFVar25->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
        iVar15 = (pFVar25->BindingName_DEPRECATED).Data.ArrayNum;
        iVar16 = (pFVar25->BindingName_DEPRECATED).Data.ArrayMax;
        pFVar7 = (pFVar25->Tracks).AllocatorInstance.Data;
        iVar17 = (pFVar25->Tracks).ArrayNum;
        iVar18 = (pFVar25->Tracks).ArrayMax;
        pFVar25->_padding_ = pFVar8->_padding_;
        pFVar25->_padding_ = lVar3;
        uVar1 = (pFVar8->ObjectGuid).B;
        uVar2 = (pFVar8->ObjectGuid).C;
        uVar9 = (pFVar8->ObjectGuid).D;
        (pFVar25->ObjectGuid).A = (pFVar8->ObjectGuid).A;
        (pFVar25->ObjectGuid).B = uVar1;
        (pFVar25->ObjectGuid).C = uVar2;
        (pFVar25->ObjectGuid).D = uVar9;
        iVar19 = (pFVar8->BindingName_DEPRECATED).Data.ArrayNum;
        iVar10 = (pFVar8->BindingName_DEPRECATED).Data.ArrayMax;
        (pFVar25->BindingName_DEPRECATED).Data.AllocatorInstance.Data =
             (pFVar8->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
        (pFVar25->BindingName_DEPRECATED).Data.ArrayNum = iVar19;
        (pFVar25->BindingName_DEPRECATED).Data.ArrayMax = iVar10;
        iVar19 = (pFVar8->Tracks).ArrayNum;
        iVar10 = (pFVar8->Tracks).ArrayMax;
        (pFVar25->Tracks).AllocatorInstance.Data = (pFVar8->Tracks).AllocatorInstance.Data;
        (pFVar25->Tracks).ArrayNum = iVar19;
        (pFVar25->Tracks).ArrayMax = iVar10;
        pFVar8->_padding_ = lVar4;
        pFVar8->_padding_ = lVar5;
        (pFVar8->ObjectGuid).A = uVar11;
        (pFVar8->ObjectGuid).B = uVar12;
        (pFVar8->ObjectGuid).C = uVar13;
        (pFVar8->ObjectGuid).D = uVar14;
        (pFVar8->BindingName_DEPRECATED).Data.AllocatorInstance.Data = pFVar6;
        (pFVar8->BindingName_DEPRECATED).Data.ArrayNum = iVar15;
        (pFVar8->BindingName_DEPRECATED).Data.ArrayMax = iVar16;
        (pFVar8->Tracks).AllocatorInstance.Data = pFVar7;
        (pFVar8->Tracks).ArrayNum = iVar17;
        (pFVar8->Tracks).ArrayMax = iVar18;
        pFVar25 = pFVar8;
LAB_146175cb3:
        pFVar23 = pFVar25;
        pFVar25 = pFVar23 + 1;
        if ((pFVar25 <= pFVar24) &&
           (uVar1 = pFVar23[1].ObjectGuid.A, uVar2 = (pFVar8->ObjectGuid).A, uVar1 <= uVar2)) break;
        goto LAB_146175cf0;
      }
      for (; pFVar25 = pFVar8, pFVar20 = pFVar8, pFVar8 < pFVar24; pFVar24 = pFVar24 + -1) {
        while (pFVar23 = pFVar25, pFVar20 = pFVar20 + 1, pFVar20 <= pFVar24) {
          uVar1 = (pFVar20->ObjectGuid).A;
          uVar2 = (pFVar23->ObjectGuid).A;
          if (uVar2 < uVar1) {
            bVar27 = true;
          }
          else if (uVar1 < uVar2) {
            bVar27 = false;
          }
          else {
            uVar1 = (pFVar20->ObjectGuid).B;
            uVar2 = (pFVar23->ObjectGuid).B;
            if (uVar2 < uVar1) {
              bVar27 = true;
            }
            else if (uVar1 < uVar2) {
              bVar27 = false;
            }
            else {
              uVar1 = (pFVar20->ObjectGuid).C;
              uVar2 = (pFVar23->ObjectGuid).C;
              if (uVar2 < uVar1) {
                bVar27 = true;
              }
              else if (uVar1 < uVar2) {
                bVar27 = false;
              }
              else {
                bVar27 = (pFVar23->ObjectGuid).D < (pFVar20->ObjectGuid).D;
              }
            }
          }
          pFVar25 = pFVar20;
          if (!bVar27) {
            pFVar25 = pFVar23;
          }
        }
        lVar3 = pFVar23->_padding_;
        lVar4 = pFVar23->_padding_;
        uVar11 = (pFVar23->ObjectGuid).A;
        uVar12 = (pFVar23->ObjectGuid).B;
        uVar13 = (pFVar23->ObjectGuid).C;
        uVar14 = (pFVar23->ObjectGuid).D;
        pFVar6 = (pFVar23->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
        iVar10 = (pFVar23->BindingName_DEPRECATED).Data.ArrayNum;
        iVar15 = (pFVar23->BindingName_DEPRECATED).Data.ArrayMax;
        lVar5 = pFVar24->_padding_;
        pFVar7 = (pFVar23->Tracks).AllocatorInstance.Data;
        iVar16 = (pFVar23->Tracks).ArrayNum;
        iVar17 = (pFVar23->Tracks).ArrayMax;
        pFVar23->_padding_ = pFVar24->_padding_;
        pFVar23->_padding_ = lVar5;
        uVar1 = (pFVar24->ObjectGuid).B;
        uVar2 = (pFVar24->ObjectGuid).C;
        uVar9 = (pFVar24->ObjectGuid).D;
        (pFVar23->ObjectGuid).A = (pFVar24->ObjectGuid).A;
        (pFVar23->ObjectGuid).B = uVar1;
        (pFVar23->ObjectGuid).C = uVar2;
        (pFVar23->ObjectGuid).D = uVar9;
        iVar19 = (pFVar24->BindingName_DEPRECATED).Data.ArrayNum;
        iVar26 = (pFVar24->BindingName_DEPRECATED).Data.ArrayMax;
        (pFVar23->BindingName_DEPRECATED).Data.AllocatorInstance.Data =
             (pFVar24->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
        (pFVar23->BindingName_DEPRECATED).Data.ArrayNum = iVar19;
        (pFVar23->BindingName_DEPRECATED).Data.ArrayMax = iVar26;
        iVar19 = (pFVar24->Tracks).ArrayNum;
        iVar26 = (pFVar24->Tracks).ArrayMax;
        (pFVar23->Tracks).AllocatorInstance.Data = (pFVar24->Tracks).AllocatorInstance.Data;
        (pFVar23->Tracks).ArrayNum = iVar19;
        (pFVar23->Tracks).ArrayMax = iVar26;
        pFVar24->_padding_ = lVar3;
        pFVar24->_padding_ = lVar4;
        (pFVar24->ObjectGuid).A = uVar11;
        (pFVar24->ObjectGuid).B = uVar12;
        (pFVar24->ObjectGuid).C = uVar13;
        (pFVar24->ObjectGuid).D = uVar14;
        (pFVar24->BindingName_DEPRECATED).Data.AllocatorInstance.Data = pFVar6;
        (pFVar24->BindingName_DEPRECATED).Data.ArrayNum = iVar10;
        (pFVar24->BindingName_DEPRECATED).Data.ArrayMax = iVar15;
        (pFVar24->Tracks).AllocatorInstance.Data = pFVar7;
        (pFVar24->Tracks).ArrayNum = iVar16;
        (pFVar24->Tracks).ArrayMax = iVar17;
      }
    }
LAB_146175e3f:
    ppFVar22 = ppFVar22 + -3;
    if (ppFVar22 < &local_328) {
      return;
    }
  } while( true );
  if ((uVar2 != uVar1) ||
     ((uVar1 = pFVar23[1].ObjectGuid.B, uVar2 = (pFVar8->ObjectGuid).B, uVar1 <= uVar2 &&
      ((uVar2 != uVar1 ||
       ((uVar1 = pFVar23[1].ObjectGuid.C, uVar2 = (pFVar8->ObjectGuid).C, uVar1 <= uVar2 &&
        ((uVar2 != uVar1 || (pFVar23[1].ObjectGuid.D <= (pFVar8->ObjectGuid).D))))))))))
  goto LAB_146175cb3;
LAB_146175cf0:
  do {
    pFVar21 = pFVar20;
    pFVar20 = pFVar21 + -1;
    if ((pFVar20 <= pFVar8) ||
       (uVar1 = (pFVar8->ObjectGuid).A, uVar2 = pFVar21[-1].ObjectGuid.A, uVar2 < uVar1)) break;
  } while ((uVar2 != uVar1) ||
          ((uVar1 = (pFVar8->ObjectGuid).B, uVar2 = pFVar21[-1].ObjectGuid.B, uVar1 <= uVar2 &&
           ((uVar2 != uVar1 ||
            ((uVar1 = (pFVar8->ObjectGuid).C, uVar2 = pFVar21[-1].ObjectGuid.C, uVar1 <= uVar2 &&
             ((uVar2 != uVar1 || ((pFVar8->ObjectGuid).D <= pFVar21[-1].ObjectGuid.D))))))))));
  lVar3 = pFVar21[-1]._padding_;
  if (pFVar25 <= pFVar20) {
    lVar4 = pFVar25->_padding_;
    lVar5 = pFVar23[1]._padding_;
    uVar11 = pFVar23[1].ObjectGuid.A;
    uVar12 = pFVar23[1].ObjectGuid.B;
    uVar13 = pFVar23[1].ObjectGuid.C;
    uVar14 = pFVar23[1].ObjectGuid.D;
    pFVar6 = pFVar23[1].BindingName_DEPRECATED.Data.AllocatorInstance.Data;
    iVar15 = pFVar23[1].BindingName_DEPRECATED.Data.ArrayNum;
    iVar16 = pFVar23[1].BindingName_DEPRECATED.Data.ArrayMax;
    pFVar7 = pFVar23[1].Tracks.AllocatorInstance.Data;
    iVar17 = pFVar23[1].Tracks.ArrayNum;
    iVar18 = pFVar23[1].Tracks.ArrayMax;
    pFVar25->_padding_ = pFVar20->_padding_;
    pFVar23[1]._padding_ = lVar3;
    uVar1 = pFVar21[-1].ObjectGuid.B;
    uVar2 = pFVar21[-1].ObjectGuid.C;
    uVar9 = pFVar21[-1].ObjectGuid.D;
    pFVar23[1].ObjectGuid.A = pFVar21[-1].ObjectGuid.A;
    pFVar23[1].ObjectGuid.B = uVar1;
    pFVar23[1].ObjectGuid.C = uVar2;
    pFVar23[1].ObjectGuid.D = uVar9;
    iVar19 = pFVar21[-1].BindingName_DEPRECATED.Data.ArrayNum;
    iVar10 = pFVar21[-1].BindingName_DEPRECATED.Data.ArrayMax;
    pFVar23[1].BindingName_DEPRECATED.Data.AllocatorInstance.Data =
         pFVar21[-1].BindingName_DEPRECATED.Data.AllocatorInstance.Data;
    pFVar23[1].BindingName_DEPRECATED.Data.ArrayNum = iVar19;
    pFVar23[1].BindingName_DEPRECATED.Data.ArrayMax = iVar10;
    iVar19 = pFVar21[-1].Tracks.ArrayNum;
    iVar10 = pFVar21[-1].Tracks.ArrayMax;
    pFVar23[1].Tracks.AllocatorInstance.Data = pFVar21[-1].Tracks.AllocatorInstance.Data;
    pFVar23[1].Tracks.ArrayNum = iVar19;
    pFVar23[1].Tracks.ArrayMax = iVar10;
    pFVar20->_padding_ = lVar4;
    pFVar21[-1]._padding_ = lVar5;
    pFVar21[-1].ObjectGuid.A = uVar11;
    pFVar21[-1].ObjectGuid.B = uVar12;
    pFVar21[-1].ObjectGuid.C = uVar13;
    pFVar21[-1].ObjectGuid.D = uVar14;
    pFVar21[-1].BindingName_DEPRECATED.Data.AllocatorInstance.Data = pFVar6;
    pFVar21[-1].BindingName_DEPRECATED.Data.ArrayNum = iVar15;
    pFVar21[-1].BindingName_DEPRECATED.Data.ArrayMax = iVar16;
    pFVar21[-1].Tracks.AllocatorInstance.Data = pFVar7;
    pFVar21[-1].Tracks.ArrayNum = iVar17;
    pFVar21[-1].Tracks.ArrayMax = iVar18;
    goto LAB_146175cb3;
  }
  lVar4 = pFVar8->_padding_;
  lVar5 = pFVar8->_padding_;
  uVar11 = (pFVar8->ObjectGuid).A;
  uVar12 = (pFVar8->ObjectGuid).B;
  uVar13 = (pFVar8->ObjectGuid).C;
  uVar14 = (pFVar8->ObjectGuid).D;
  pFVar6 = (pFVar8->BindingName_DEPRECATED).Data.AllocatorInstance.Data;
  iVar15 = (pFVar8->BindingName_DEPRECATED).Data.ArrayNum;
  iVar16 = (pFVar8->BindingName_DEPRECATED).Data.ArrayMax;
  iVar26 = iVar26 + -1;
  pFVar7 = (pFVar8->Tracks).AllocatorInstance.Data;
  iVar17 = (pFVar8->Tracks).ArrayNum;
  iVar18 = (pFVar8->Tracks).ArrayMax;
  pFVar8->_padding_ = pFVar20->_padding_;
  pFVar8->_padding_ = lVar3;
  uVar1 = pFVar21[-1].ObjectGuid.B;
  uVar2 = pFVar21[-1].ObjectGuid.C;
  uVar9 = pFVar21[-1].ObjectGuid.D;
  (pFVar8->ObjectGuid).A = pFVar21[-1].ObjectGuid.A;
  (pFVar8->ObjectGuid).B = uVar1;
  (pFVar8->ObjectGuid).C = uVar2;
  (pFVar8->ObjectGuid).D = uVar9;
  iVar19 = pFVar21[-1].BindingName_DEPRECATED.Data.ArrayNum;
  iVar10 = pFVar21[-1].BindingName_DEPRECATED.Data.ArrayMax;
  (pFVar8->BindingName_DEPRECATED).Data.AllocatorInstance.Data =
       pFVar21[-1].BindingName_DEPRECATED.Data.AllocatorInstance.Data;
  (pFVar8->BindingName_DEPRECATED).Data.ArrayNum = iVar19;
  (pFVar8->BindingName_DEPRECATED).Data.ArrayMax = iVar10;
  iVar19 = pFVar21[-1].Tracks.ArrayNum;
  iVar10 = pFVar21[-1].Tracks.ArrayMax;
  (pFVar8->Tracks).AllocatorInstance.Data = pFVar21[-1].Tracks.AllocatorInstance.Data;
  (pFVar8->Tracks).ArrayNum = iVar19;
  (pFVar8->Tracks).ArrayMax = iVar10;
  pFVar20->_padding_ = lVar4;
  pFVar21[-1]._padding_ = lVar5;
  pFVar21[-1].ObjectGuid.A = uVar11;
  pFVar21[-1].ObjectGuid.B = uVar12;
  pFVar21[-1].ObjectGuid.C = uVar13;
  pFVar21[-1].ObjectGuid.D = uVar14;
  pFVar21[-1].BindingName_DEPRECATED.Data.AllocatorInstance.Data = pFVar6;
  pFVar21[-1].BindingName_DEPRECATED.Data.ArrayNum = iVar15;
  pFVar21[-1].BindingName_DEPRECATED.Data.ArrayMax = iVar16;
  pFVar21[-1].Tracks.AllocatorInstance.Data = pFVar7;
  pFVar21[-1].Tracks.ArrayNum = iVar17;
  pFVar21[-1].Tracks.ArrayMax = iVar18;
  if ((longlong)((longlong)pFVar20 + (-0x40 - (longlong)pFVar8) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pFVar24 - (longlong)pFVar25 & 0xffffffffffffffc0U)) {
    if (pFVar25 < pFVar24) {
      *ppFVar22 = pFVar25;
      ppFVar22[1] = pFVar24;
      *(int *)(ppFVar22 + 2) = iVar26;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar20 <= pFVar8 + 1) goto LAB_146175e3f;
    pFVar24 = pFVar21 + -2;
    pFVar25 = pFVar8;
  }
  else {
    if (pFVar8 + 1 < pFVar20) {
      *ppFVar22 = pFVar8;
      ppFVar22[1] = pFVar21 + -2;
      *(int *)(ppFVar22 + 2) = iVar26;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar24 <= pFVar25) goto LAB_146175e3f;
  }
  iVar19 = (int)((longlong)pFVar24 - (longlong)pFVar25 >> 6);
  pFVar8 = pFVar25;
  goto joined_r0x000146175c46;
}

// IntroSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,`UMovieScene::FindNextMarkedFrame'::__l2::<lambda_1>_>_> @ 146175f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::FindNextMarkedFrame_::__l2::<lambda_1>_>_>
          (FMovieSceneMarkedFrame *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneMarkedFrame,_public:_int___cdecl_UMovieScene::FindNextMarkedFrame(FFrameNumber,bool)_::_2_::<lambda_1>_>
          param_4)

{
  FMovieSceneMarkedFrame *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  undefined6 uVar7;
  FFrameNumber FVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined6 uVar14;
  int iVar15;
  FMovieSceneMarkedFrame *pFVar16;
  FMovieSceneMarkedFrame **ppFVar17;
  FMovieSceneMarkedFrame *pFVar18;
  FMovieSceneMarkedFrame *pFVar19;
  FMovieSceneMarkedFrame *pFVar20;
  FMovieSceneMarkedFrame *pFVar21;
  FMovieSceneMarkedFrame *pFVar22;
  float fVar23;
  undefined1 auStack_368 [48];
  FMovieSceneMarkedFrame *local_338;
  FMovieSceneMarkedFrame *local_328;
  FMovieSceneMarkedFrame *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar23 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar23;
    memset(local_310,0,0x2e8);
    ppFVar17 = &local_328;
    do {
      pFVar20 = ppFVar17[1];
      pFVar22 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      iVar15 = (int)((longlong)pFVar20 - (longlong)pFVar22 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar21 = pFVar22;
      if ((int)local_338 != 0) {
LAB_146176000:
        if (8 < iVar15) {
          uVar4 = *(undefined4 *)&pFVar21->field_0x4;
          pFVar2 = (pFVar21->Label).Data.AllocatorInstance.Data;
          pFVar18 = pFVar20 + 1;
          pFVar22 = pFVar21 + iVar15 / 2;
          FVar8.Value = (pFVar22->FrameNumber).Value;
          uVar9 = *(undefined4 *)&pFVar22->field_0x4;
          pFVar3 = (pFVar22->Label).Data.AllocatorInstance.Data;
          iVar10 = (pFVar22->Label).Data.ArrayNum;
          iVar11 = (pFVar22->Label).Data.ArrayMax;
          bVar12 = pFVar22->bIsDeterminismFence;
          bVar13 = pFVar22->bIsInclusiveTime;
          uVar14 = *(undefined6 *)&pFVar22->field_0x1a;
          pFVar22->FrameNumber = (FFrameNumber)(pFVar21->FrameNumber).Value;
          *(undefined4 *)&pFVar22->field_0x4 = uVar4;
          (pFVar22->Label).Data.AllocatorInstance.Data = pFVar2;
          iVar15 = (pFVar21->Label).Data.ArrayMax;
          bVar5 = pFVar21->bIsDeterminismFence;
          bVar6 = pFVar21->bIsInclusiveTime;
          uVar7 = *(undefined6 *)&pFVar21->field_0x1a;
          (pFVar22->Label).Data.ArrayNum = (pFVar21->Label).Data.ArrayNum;
          (pFVar22->Label).Data.ArrayMax = iVar15;
          pFVar22->bIsDeterminismFence = bVar5;
          pFVar22->bIsInclusiveTime = bVar6;
          *(undefined6 *)&pFVar22->field_0x1a = uVar7;
          pFVar21->FrameNumber = (FFrameNumber)FVar8.Value;
          *(undefined4 *)&pFVar21->field_0x4 = uVar9;
          (pFVar21->Label).Data.AllocatorInstance.Data = pFVar3;
          (pFVar21->Label).Data.ArrayNum = iVar10;
          (pFVar21->Label).Data.ArrayMax = iVar11;
          pFVar21->bIsDeterminismFence = bVar12;
          pFVar21->bIsInclusiveTime = bVar13;
          *(undefined6 *)&pFVar21->field_0x1a = uVar14;
          pFVar22 = pFVar21;
LAB_146176040:
          pFVar16 = pFVar22;
          pFVar22 = pFVar16 + 1;
          if (pFVar22 <= pFVar20) goto code_r0x000146176049;
          goto LAB_146176050;
        }
        for (; pFVar22 = pFVar21, pFVar1 = pFVar21, pFVar21 < pFVar20; pFVar20 = pFVar20 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar20) {
            if ((pFVar22->FrameNumber).Value < (pFVar1->FrameNumber).Value) {
              pFVar22 = pFVar1;
            }
          }
          FVar8.Value = (pFVar22->FrameNumber).Value;
          uVar9 = *(undefined4 *)&pFVar22->field_0x4;
          pFVar2 = (pFVar22->Label).Data.AllocatorInstance.Data;
          iVar10 = (pFVar22->Label).Data.ArrayNum;
          iVar11 = (pFVar22->Label).Data.ArrayMax;
          bVar12 = pFVar22->bIsDeterminismFence;
          bVar13 = pFVar22->bIsInclusiveTime;
          uVar14 = *(undefined6 *)&pFVar22->field_0x1a;
          uVar4 = *(undefined4 *)&pFVar20->field_0x4;
          pFVar3 = (pFVar20->Label).Data.AllocatorInstance.Data;
          pFVar22->FrameNumber = (FFrameNumber)(pFVar20->FrameNumber).Value;
          *(undefined4 *)&pFVar22->field_0x4 = uVar4;
          (pFVar22->Label).Data.AllocatorInstance.Data = pFVar3;
          iVar15 = (pFVar20->Label).Data.ArrayMax;
          bVar5 = pFVar20->bIsDeterminismFence;
          bVar6 = pFVar20->bIsInclusiveTime;
          uVar7 = *(undefined6 *)&pFVar20->field_0x1a;
          (pFVar22->Label).Data.ArrayNum = (pFVar20->Label).Data.ArrayNum;
          (pFVar22->Label).Data.ArrayMax = iVar15;
          pFVar22->bIsDeterminismFence = bVar5;
          pFVar22->bIsInclusiveTime = bVar6;
          *(undefined6 *)&pFVar22->field_0x1a = uVar7;
          pFVar20->FrameNumber = (FFrameNumber)FVar8.Value;
          *(undefined4 *)&pFVar20->field_0x4 = uVar9;
          (pFVar20->Label).Data.AllocatorInstance.Data = pFVar2;
          (pFVar20->Label).Data.ArrayNum = iVar10;
          (pFVar20->Label).Data.ArrayMax = iVar11;
          pFVar20->bIsDeterminismFence = bVar12;
          pFVar20->bIsInclusiveTime = bVar13;
          *(undefined6 *)&pFVar20->field_0x1a = uVar14;
        }
        goto LAB_146176135;
      }
LAB_146176124:
      local_338 = pFVar1;
      HeapSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::FindNextMarkedFrame_::__l2::<lambda_1>_>_>
                (pFVar22,iVar15,param_3,param_4);
LAB_146176135:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_328 <= ppFVar17);
  }
  return;
code_r0x000146176049:
  if ((pFVar22->FrameNumber).Value <= (pFVar21->FrameNumber).Value) goto LAB_146176040;
LAB_146176050:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar21) break;
  } while ((pFVar21->FrameNumber).Value <= (pFVar18->FrameNumber).Value);
  pFVar2 = pFVar19[-1].Label.Data.AllocatorInstance.Data;
  if (pFVar22 <= pFVar18) {
    FVar8.Value = (pFVar22->FrameNumber).Value;
    uVar4 = *(undefined4 *)&pFVar22->field_0x4;
    pFVar3 = pFVar16[1].Label.Data.AllocatorInstance.Data;
    iVar10 = pFVar16[1].Label.Data.ArrayNum;
    iVar11 = pFVar16[1].Label.Data.ArrayMax;
    bVar12 = pFVar16[1].bIsDeterminismFence;
    bVar13 = pFVar16[1].bIsInclusiveTime;
    uVar14 = *(undefined6 *)&pFVar16[1].field_0x1a;
    *(undefined8 *)pFVar22 = *(undefined8 *)pFVar18;
    pFVar16[1].Label.Data.AllocatorInstance.Data = pFVar2;
    iVar15 = pFVar19[-1].Label.Data.ArrayMax;
    bVar5 = pFVar19[-1].bIsDeterminismFence;
    bVar6 = pFVar19[-1].bIsInclusiveTime;
    uVar7 = *(undefined6 *)&pFVar19[-1].field_0x1a;
    pFVar16[1].Label.Data.ArrayNum = pFVar19[-1].Label.Data.ArrayNum;
    pFVar16[1].Label.Data.ArrayMax = iVar15;
    pFVar16[1].bIsDeterminismFence = bVar5;
    pFVar16[1].bIsInclusiveTime = bVar6;
    *(undefined6 *)&pFVar16[1].field_0x1a = uVar7;
    pFVar18->FrameNumber = (FFrameNumber)FVar8.Value;
    *(undefined4 *)&pFVar18->field_0x4 = uVar4;
    pFVar19[-1].Label.Data.AllocatorInstance.Data = pFVar3;
    pFVar19[-1].Label.Data.ArrayNum = iVar10;
    pFVar19[-1].Label.Data.ArrayMax = iVar11;
    pFVar19[-1].bIsDeterminismFence = bVar12;
    pFVar19[-1].bIsInclusiveTime = bVar13;
    *(undefined6 *)&pFVar19[-1].field_0x1a = uVar14;
    goto LAB_146176040;
  }
  FVar8.Value = (pFVar21->FrameNumber).Value;
  uVar4 = *(undefined4 *)&pFVar21->field_0x4;
  pFVar3 = (pFVar21->Label).Data.AllocatorInstance.Data;
  iVar10 = (pFVar21->Label).Data.ArrayNum;
  iVar11 = (pFVar21->Label).Data.ArrayMax;
  bVar12 = pFVar21->bIsDeterminismFence;
  bVar13 = pFVar21->bIsInclusiveTime;
  uVar14 = *(undefined6 *)&pFVar21->field_0x1a;
  *(undefined8 *)pFVar21 = *(undefined8 *)pFVar18;
  (pFVar21->Label).Data.AllocatorInstance.Data = pFVar2;
  local_338._0_4_ = (int)local_338 + -1;
  iVar15 = pFVar19[-1].Label.Data.ArrayMax;
  bVar5 = pFVar19[-1].bIsDeterminismFence;
  bVar6 = pFVar19[-1].bIsInclusiveTime;
  uVar7 = *(undefined6 *)&pFVar19[-1].field_0x1a;
  (pFVar21->Label).Data.ArrayNum = pFVar19[-1].Label.Data.ArrayNum;
  (pFVar21->Label).Data.ArrayMax = iVar15;
  pFVar21->bIsDeterminismFence = bVar5;
  pFVar21->bIsInclusiveTime = bVar6;
  *(undefined6 *)&pFVar21->field_0x1a = uVar7;
  pFVar18->FrameNumber = (FFrameNumber)FVar8.Value;
  *(undefined4 *)&pFVar18->field_0x4 = uVar4;
  pFVar19[-1].Label.Data.AllocatorInstance.Data = pFVar3;
  pFVar19[-1].Label.Data.ArrayNum = iVar10;
  pFVar19[-1].Label.Data.ArrayMax = iVar11;
  pFVar19[-1].bIsDeterminismFence = bVar12;
  pFVar19[-1].bIsInclusiveTime = bVar13;
  *(undefined6 *)&pFVar19[-1].field_0x1a = uVar14;
  if ((longlong)((longlong)pFVar18 + (-0x20 - (longlong)pFVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar20 - (longlong)pFVar22 & 0xffffffffffffffe0U)) {
    if (pFVar22 < pFVar20) {
      *ppFVar17 = pFVar22;
      ppFVar17[1] = pFVar20;
      *(int *)(ppFVar17 + 2) = (int)local_338;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar18 <= pFVar21 + 1) goto LAB_146176135;
    pFVar20 = pFVar19 + -2;
    pFVar22 = pFVar21;
  }
  else {
    if (pFVar21 + 1 < pFVar18) {
      *ppFVar17 = pFVar21;
      ppFVar17[1] = pFVar19 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_338;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar20 <= pFVar22) goto LAB_146176135;
  }
  iVar15 = (int)((longlong)pFVar20 - (longlong)pFVar22 >> 5) + 1;
  pFVar21 = pFVar22;
  if ((int)local_338 == 0) goto LAB_146176124;
  goto LAB_146176000;
}

// IntroSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,`UMovieScene::SortMarkedFrames'::__l2::<lambda_1>_>_> @ 1461761d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::SortMarkedFrames_::__l2::<lambda_1>_>_>
          (FMovieSceneMarkedFrame *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneMarkedFrame,_public:_void___cdecl_UMovieScene::SortMarkedFrames(void)_::_2_::<lambda_1>_>
          param_4)

{
  FMovieSceneMarkedFrame *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  undefined6 uVar7;
  FFrameNumber FVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined6 uVar14;
  int iVar15;
  FMovieSceneMarkedFrame *pFVar16;
  FMovieSceneMarkedFrame **ppFVar17;
  FMovieSceneMarkedFrame *pFVar18;
  FMovieSceneMarkedFrame *pFVar19;
  FMovieSceneMarkedFrame *pFVar20;
  FMovieSceneMarkedFrame *pFVar21;
  FMovieSceneMarkedFrame *pFVar22;
  float fVar23;
  undefined1 auStack_368 [48];
  FMovieSceneMarkedFrame *local_338;
  FMovieSceneMarkedFrame *local_328;
  FMovieSceneMarkedFrame *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar23 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar23;
    memset(local_310,0,0x2e8);
    ppFVar17 = &local_328;
    do {
      pFVar20 = ppFVar17[1];
      pFVar22 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      iVar15 = (int)((longlong)pFVar20 - (longlong)pFVar22 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar21 = pFVar22;
      if ((int)local_338 != 0) {
LAB_146176280:
        if (8 < iVar15) {
          uVar4 = *(undefined4 *)&pFVar21->field_0x4;
          pFVar2 = (pFVar21->Label).Data.AllocatorInstance.Data;
          pFVar18 = pFVar20 + 1;
          pFVar22 = pFVar21 + iVar15 / 2;
          FVar8.Value = (pFVar22->FrameNumber).Value;
          uVar9 = *(undefined4 *)&pFVar22->field_0x4;
          pFVar3 = (pFVar22->Label).Data.AllocatorInstance.Data;
          iVar10 = (pFVar22->Label).Data.ArrayNum;
          iVar11 = (pFVar22->Label).Data.ArrayMax;
          bVar12 = pFVar22->bIsDeterminismFence;
          bVar13 = pFVar22->bIsInclusiveTime;
          uVar14 = *(undefined6 *)&pFVar22->field_0x1a;
          pFVar22->FrameNumber = (FFrameNumber)(pFVar21->FrameNumber).Value;
          *(undefined4 *)&pFVar22->field_0x4 = uVar4;
          (pFVar22->Label).Data.AllocatorInstance.Data = pFVar2;
          iVar15 = (pFVar21->Label).Data.ArrayMax;
          bVar5 = pFVar21->bIsDeterminismFence;
          bVar6 = pFVar21->bIsInclusiveTime;
          uVar7 = *(undefined6 *)&pFVar21->field_0x1a;
          (pFVar22->Label).Data.ArrayNum = (pFVar21->Label).Data.ArrayNum;
          (pFVar22->Label).Data.ArrayMax = iVar15;
          pFVar22->bIsDeterminismFence = bVar5;
          pFVar22->bIsInclusiveTime = bVar6;
          *(undefined6 *)&pFVar22->field_0x1a = uVar7;
          pFVar21->FrameNumber = (FFrameNumber)FVar8.Value;
          *(undefined4 *)&pFVar21->field_0x4 = uVar9;
          (pFVar21->Label).Data.AllocatorInstance.Data = pFVar3;
          (pFVar21->Label).Data.ArrayNum = iVar10;
          (pFVar21->Label).Data.ArrayMax = iVar11;
          pFVar21->bIsDeterminismFence = bVar12;
          pFVar21->bIsInclusiveTime = bVar13;
          *(undefined6 *)&pFVar21->field_0x1a = uVar14;
          pFVar22 = pFVar21;
LAB_1461762c0:
          pFVar16 = pFVar22;
          pFVar22 = pFVar16 + 1;
          if (pFVar22 <= pFVar20) goto code_r0x0001461762c9;
          goto LAB_1461762d0;
        }
        for (; pFVar22 = pFVar21, pFVar1 = pFVar21, pFVar21 < pFVar20; pFVar20 = pFVar20 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar20) {
            if ((pFVar22->FrameNumber).Value < (pFVar1->FrameNumber).Value) {
              pFVar22 = pFVar1;
            }
          }
          FVar8.Value = (pFVar22->FrameNumber).Value;
          uVar9 = *(undefined4 *)&pFVar22->field_0x4;
          pFVar2 = (pFVar22->Label).Data.AllocatorInstance.Data;
          iVar10 = (pFVar22->Label).Data.ArrayNum;
          iVar11 = (pFVar22->Label).Data.ArrayMax;
          bVar12 = pFVar22->bIsDeterminismFence;
          bVar13 = pFVar22->bIsInclusiveTime;
          uVar14 = *(undefined6 *)&pFVar22->field_0x1a;
          uVar4 = *(undefined4 *)&pFVar20->field_0x4;
          pFVar3 = (pFVar20->Label).Data.AllocatorInstance.Data;
          pFVar22->FrameNumber = (FFrameNumber)(pFVar20->FrameNumber).Value;
          *(undefined4 *)&pFVar22->field_0x4 = uVar4;
          (pFVar22->Label).Data.AllocatorInstance.Data = pFVar3;
          iVar15 = (pFVar20->Label).Data.ArrayMax;
          bVar5 = pFVar20->bIsDeterminismFence;
          bVar6 = pFVar20->bIsInclusiveTime;
          uVar7 = *(undefined6 *)&pFVar20->field_0x1a;
          (pFVar22->Label).Data.ArrayNum = (pFVar20->Label).Data.ArrayNum;
          (pFVar22->Label).Data.ArrayMax = iVar15;
          pFVar22->bIsDeterminismFence = bVar5;
          pFVar22->bIsInclusiveTime = bVar6;
          *(undefined6 *)&pFVar22->field_0x1a = uVar7;
          pFVar20->FrameNumber = (FFrameNumber)FVar8.Value;
          *(undefined4 *)&pFVar20->field_0x4 = uVar9;
          (pFVar20->Label).Data.AllocatorInstance.Data = pFVar2;
          (pFVar20->Label).Data.ArrayNum = iVar10;
          (pFVar20->Label).Data.ArrayMax = iVar11;
          pFVar20->bIsDeterminismFence = bVar12;
          pFVar20->bIsInclusiveTime = bVar13;
          *(undefined6 *)&pFVar20->field_0x1a = uVar14;
        }
        goto LAB_1461763b5;
      }
LAB_1461763a4:
      local_338 = pFVar1;
      HeapSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::SortMarkedFrames_::__l2::<lambda_1>_>_>
                (pFVar22,iVar15,param_3,param_4);
LAB_1461763b5:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_328 <= ppFVar17);
  }
  return;
code_r0x0001461762c9:
  if ((pFVar22->FrameNumber).Value <= (pFVar21->FrameNumber).Value) goto LAB_1461762c0;
LAB_1461762d0:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar21) break;
  } while ((pFVar21->FrameNumber).Value <= (pFVar18->FrameNumber).Value);
  pFVar2 = pFVar19[-1].Label.Data.AllocatorInstance.Data;
  if (pFVar22 <= pFVar18) {
    FVar8.Value = (pFVar22->FrameNumber).Value;
    uVar4 = *(undefined4 *)&pFVar22->field_0x4;
    pFVar3 = pFVar16[1].Label.Data.AllocatorInstance.Data;
    iVar10 = pFVar16[1].Label.Data.ArrayNum;
    iVar11 = pFVar16[1].Label.Data.ArrayMax;
    bVar12 = pFVar16[1].bIsDeterminismFence;
    bVar13 = pFVar16[1].bIsInclusiveTime;
    uVar14 = *(undefined6 *)&pFVar16[1].field_0x1a;
    *(undefined8 *)pFVar22 = *(undefined8 *)pFVar18;
    pFVar16[1].Label.Data.AllocatorInstance.Data = pFVar2;
    iVar15 = pFVar19[-1].Label.Data.ArrayMax;
    bVar5 = pFVar19[-1].bIsDeterminismFence;
    bVar6 = pFVar19[-1].bIsInclusiveTime;
    uVar7 = *(undefined6 *)&pFVar19[-1].field_0x1a;
    pFVar16[1].Label.Data.ArrayNum = pFVar19[-1].Label.Data.ArrayNum;
    pFVar16[1].Label.Data.ArrayMax = iVar15;
    pFVar16[1].bIsDeterminismFence = bVar5;
    pFVar16[1].bIsInclusiveTime = bVar6;
    *(undefined6 *)&pFVar16[1].field_0x1a = uVar7;
    pFVar18->FrameNumber = (FFrameNumber)FVar8.Value;
    *(undefined4 *)&pFVar18->field_0x4 = uVar4;
    pFVar19[-1].Label.Data.AllocatorInstance.Data = pFVar3;
    pFVar19[-1].Label.Data.ArrayNum = iVar10;
    pFVar19[-1].Label.Data.ArrayMax = iVar11;
    pFVar19[-1].bIsDeterminismFence = bVar12;
    pFVar19[-1].bIsInclusiveTime = bVar13;
    *(undefined6 *)&pFVar19[-1].field_0x1a = uVar14;
    goto LAB_1461762c0;
  }
  FVar8.Value = (pFVar21->FrameNumber).Value;
  uVar4 = *(undefined4 *)&pFVar21->field_0x4;
  pFVar3 = (pFVar21->Label).Data.AllocatorInstance.Data;
  iVar10 = (pFVar21->Label).Data.ArrayNum;
  iVar11 = (pFVar21->Label).Data.ArrayMax;
  bVar12 = pFVar21->bIsDeterminismFence;
  bVar13 = pFVar21->bIsInclusiveTime;
  uVar14 = *(undefined6 *)&pFVar21->field_0x1a;
  *(undefined8 *)pFVar21 = *(undefined8 *)pFVar18;
  (pFVar21->Label).Data.AllocatorInstance.Data = pFVar2;
  local_338._0_4_ = (int)local_338 + -1;
  iVar15 = pFVar19[-1].Label.Data.ArrayMax;
  bVar5 = pFVar19[-1].bIsDeterminismFence;
  bVar6 = pFVar19[-1].bIsInclusiveTime;
  uVar7 = *(undefined6 *)&pFVar19[-1].field_0x1a;
  (pFVar21->Label).Data.ArrayNum = pFVar19[-1].Label.Data.ArrayNum;
  (pFVar21->Label).Data.ArrayMax = iVar15;
  pFVar21->bIsDeterminismFence = bVar5;
  pFVar21->bIsInclusiveTime = bVar6;
  *(undefined6 *)&pFVar21->field_0x1a = uVar7;
  pFVar18->FrameNumber = (FFrameNumber)FVar8.Value;
  *(undefined4 *)&pFVar18->field_0x4 = uVar4;
  pFVar19[-1].Label.Data.AllocatorInstance.Data = pFVar3;
  pFVar19[-1].Label.Data.ArrayNum = iVar10;
  pFVar19[-1].Label.Data.ArrayMax = iVar11;
  pFVar19[-1].bIsDeterminismFence = bVar12;
  pFVar19[-1].bIsInclusiveTime = bVar13;
  *(undefined6 *)&pFVar19[-1].field_0x1a = uVar14;
  if ((longlong)((longlong)pFVar18 + (-0x20 - (longlong)pFVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar20 - (longlong)pFVar22 & 0xffffffffffffffe0U)) {
    if (pFVar22 < pFVar20) {
      *ppFVar17 = pFVar22;
      ppFVar17[1] = pFVar20;
      *(int *)(ppFVar17 + 2) = (int)local_338;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar18 <= pFVar21 + 1) goto LAB_1461763b5;
    pFVar20 = pFVar19 + -2;
    pFVar22 = pFVar21;
  }
  else {
    if (pFVar21 + 1 < pFVar18) {
      *ppFVar17 = pFVar21;
      ppFVar17[1] = pFVar19 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_338;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar20 <= pFVar22) goto LAB_1461763b5;
  }
  iVar15 = (int)((longlong)pFVar20 - (longlong)pFVar22 >> 5) + 1;
  pFVar21 = pFVar22;
  if ((int)local_338 == 0) goto LAB_1461763a4;
  goto LAB_146176280;
}

// IntroSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_> @ 146176450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_>
          (FMovieSceneOrderedEvaluationKey *param_1,int param_2,
          TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*> param_3,
          TLess<void> param_4)

{
  FMovieSceneOrderedEvaluationKey *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  FMovieSceneTrackIdentifier FVar6;
  FMovieSceneSequenceID FVar7;
  FMovieSceneTrackIdentifier FVar8;
  int iVar9;
  FMovieSceneOrderedEvaluationKey *pFVar10;
  longlong lVar11;
  FMovieSceneOrderedEvaluationKey *pFVar12;
  FMovieSceneOrderedEvaluationKey *pFVar13;
  FMovieSceneOrderedEvaluationKey *pFVar14;
  FMovieSceneOrderedEvaluationKey *pFVar15;
  FMovieSceneOrderedEvaluationKey *pFVar16;
  FMovieSceneOrderedEvaluationKey **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FMovieSceneOrderedEvaluationKey *local_348;
  FMovieSceneOrderedEvaluationKey *local_338;
  FMovieSceneOrderedEvaluationKey *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    lVar11 = (longlong)(int)param_3.DataMemberPtr;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar14 = ppFVar17[1];
      pFVar16 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 4) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar15 = pFVar16;
      if ((int)local_348 != 0) {
LAB_146176500:
        if (8 < iVar9) {
          FVar6.Value = (pFVar15->Key).TrackIdentifier.Value;
          uVar2 = *(undefined8 *)&(pFVar15->Key).SectionIndex;
          pFVar12 = pFVar14 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          FVar7.Value = (pFVar16->Key).SequenceID.Value;
          FVar8.Value = (pFVar16->Key).TrackIdentifier.Value;
          uVar5 = *(undefined8 *)&(pFVar16->Key).SectionIndex;
          pFVar16 = pFVar15 + iVar9 / 2;
          (pFVar16->Key).SequenceID = (FMovieSceneSequenceID)(pFVar15->Key).SequenceID.Value;
          (pFVar16->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar6.Value;
          *(undefined8 *)&(pFVar16->Key).SectionIndex = uVar2;
          (pFVar15->Key).SequenceID = (FMovieSceneSequenceID)FVar7.Value;
          (pFVar15->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar8.Value;
          *(undefined8 *)&(pFVar15->Key).SectionIndex = uVar5;
          pFVar16 = pFVar15;
LAB_146176530:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar14) goto code_r0x000146176539;
          goto LAB_146176544;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (*(ushort *)((longlong)&(pFVar16->Key).SequenceID.Value + lVar11) <
                *(ushort *)((longlong)&(pFVar1->Key).SequenceID.Value + lVar11)) {
              pFVar16 = pFVar1;
            }
          }
          FVar7.Value = (pFVar16->Key).SequenceID.Value;
          FVar8.Value = (pFVar16->Key).TrackIdentifier.Value;
          uVar2 = *(undefined8 *)&(pFVar16->Key).SectionIndex;
          FVar6.Value = (pFVar14->Key).TrackIdentifier.Value;
          uVar5 = *(undefined8 *)&(pFVar14->Key).SectionIndex;
          (pFVar16->Key).SequenceID = (FMovieSceneSequenceID)(pFVar14->Key).SequenceID.Value;
          (pFVar16->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar6.Value;
          *(undefined8 *)&(pFVar16->Key).SectionIndex = uVar5;
          (pFVar14->Key).SequenceID = (FMovieSceneSequenceID)FVar7.Value;
          (pFVar14->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar8.Value;
          *(undefined8 *)&(pFVar14->Key).SectionIndex = uVar2;
        }
        goto LAB_146176607;
      }
LAB_1461765f6:
      local_348 = pFVar1;
      HeapSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<unsigned_short_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_146176607:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x000146176539:
  if (*(ushort *)((longlong)&(pFVar16->Key).SequenceID.Value + lVar11) <=
      *(ushort *)((longlong)&(pFVar15->Key).SequenceID.Value + lVar11)) goto LAB_146176530;
LAB_146176544:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar15) break;
  } while (*(ushort *)((longlong)&(pFVar15->Key).SequenceID.Value + lVar11) <=
           *(ushort *)((longlong)&(pFVar12->Key).SequenceID.Value + lVar11));
  uVar3 = (pFVar12->Key).SequenceID;
  uVar4 = (pFVar12->Key).TrackIdentifier;
  uVar2 = *(undefined8 *)&pFVar13[-1].Key.SectionIndex;
  if (pFVar16 <= pFVar12) {
    FVar7.Value = (pFVar16->Key).SequenceID.Value;
    FVar6.Value = (pFVar16->Key).TrackIdentifier.Value;
    uVar5 = *(undefined8 *)&pFVar10[1].Key.SectionIndex;
    (pFVar16->Key).SequenceID = (FMovieSceneSequenceID)uVar3;
    (pFVar16->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)uVar4;
    *(undefined8 *)&pFVar10[1].Key.SectionIndex = uVar2;
    (pFVar12->Key).SequenceID = (FMovieSceneSequenceID)FVar7.Value;
    (pFVar12->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar6.Value;
    *(undefined8 *)&pFVar13[-1].Key.SectionIndex = uVar5;
    goto LAB_146176530;
  }
  FVar7.Value = (pFVar15->Key).SequenceID.Value;
  FVar6.Value = (pFVar15->Key).TrackIdentifier.Value;
  uVar5 = *(undefined8 *)&(pFVar15->Key).SectionIndex;
  local_348._0_4_ = (int)local_348 + -1;
  (pFVar15->Key).SequenceID = (FMovieSceneSequenceID)uVar3;
  (pFVar15->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)uVar4;
  *(undefined8 *)&(pFVar15->Key).SectionIndex = uVar2;
  (pFVar12->Key).SequenceID = (FMovieSceneSequenceID)FVar7.Value;
  (pFVar12->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar6.Value;
  *(undefined8 *)&pFVar13[-1].Key.SectionIndex = uVar5;
  if ((longlong)((longlong)pFVar12 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar16 & 0xfffffffffffffff0U)) {
    if (pFVar16 < pFVar14) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar14;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar12 <= pFVar15 + 1) goto LAB_146176607;
    pFVar14 = pFVar13 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar12) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar13 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar14 <= pFVar16) goto LAB_146176607;
  }
  iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 4) + 1;
  pFVar15 = pFVar16;
  if ((int)local_348 == 0) goto LAB_1461765f6;
  goto LAB_146176500;
}

// IntroSortInternal<FMovieScenePossessable,int,FIdentityFunctor,TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_> @ 1461766a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieScenePossessable,int,FIdentityFunctor,TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_>
          (FMovieScenePossessable *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieScenePossessable,TLess<void>_> param_4)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UFunction>_u_0 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FMovieScenePossessable *pFVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  FMovieScenePossessable *pFVar37;
  FMovieScenePossessable *pFVar38;
  FMovieScenePossessable **ppFVar39;
  FMovieScenePossessable *pFVar40;
  FMovieScenePossessable *pFVar41;
  FMovieScenePossessable *pFVar42;
  int iVar43;
  bool bVar44;
  float fVar45;
  undefined1 auStack_3a8 [48];
  FMovieScenePossessable *local_378;
  FMovieScenePossessable *local_368;
  FMovieScenePossessable *local_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  if (param_2 < 2) {
    return;
  }
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_360 = param_1 + (longlong)param_2 + -1;
  local_368 = param_1;
  fVar45 = logf((float)param_2 * (float)param_2);
  local_358 = (undefined4)(longlong)fVar45;
  memset(local_350,0,0x2e8);
  ppFVar39 = &local_368;
  do {
    pFVar41 = ppFVar39[1];
    local_378 = ppFVar39[2];
    iVar36 = (int)((longlong)pFVar41 - (longlong)*ppFVar39 >> 7);
    pFVar14 = *ppFVar39;
    iVar43 = (int)local_378;
joined_r0x000146176756:
    iVar36 = iVar36 + 1;
    if (iVar43 == 0) {
      HeapSortInternal<FMovieScenePossessable,int,FIdentityFunctor,TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_>
                (pFVar14,iVar36,param_3,param_4);
    }
    else {
      if (8 < iVar36) {
        iVar15 = (pFVar14->Tags).ArrayNum;
        iVar16 = (pFVar14->Tags).ArrayMax;
        pFVar37 = pFVar41 + 1;
        pFVar42 = pFVar14 + iVar36 / 2;
        pFVar3 = (pFVar42->Tags).AllocatorInstance.Data;
        iVar18 = (pFVar42->Tags).ArrayNum;
        iVar19 = (pFVar42->Tags).ArrayMax;
        TVar4 = (pFVar42->DynamicBinding_DEPRECATED).Function.field0_0x0;
        uVar5 = *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty;
        uVar6 = *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8
        ;
        uVar7 = *(undefined8 *)
                 &(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
        uVar8 = *(undefined8 *)
                 &(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
        uVar20 = (pFVar42->Guid).A;
        uVar21 = (pFVar42->Guid).B;
        uVar22 = (pFVar42->Guid).C;
        uVar23 = (pFVar42->Guid).D;
        pFVar9 = (pFVar42->Name).Data.AllocatorInstance.Data;
        iVar24 = (pFVar42->Name).Data.ArrayNum;
        iVar25 = (pFVar42->Name).Data.ArrayMax;
        uVar26 = (pFVar42->ParentGuid).A;
        uVar27 = (pFVar42->ParentGuid).B;
        uVar28 = (pFVar42->ParentGuid).C;
        uVar29 = (pFVar42->ParentGuid).D;
        uVar30 = (pFVar42->SpawnableObjectBindingID).Guid.A;
        uVar31 = (pFVar42->SpawnableObjectBindingID).Guid.B;
        uVar32 = (pFVar42->SpawnableObjectBindingID).Guid.C;
        uVar33 = (pFVar42->SpawnableObjectBindingID).Guid.D;
        iVar34 = (pFVar42->SpawnableObjectBindingID).SequenceID;
        iVar35 = (pFVar42->SpawnableObjectBindingID).ResolveParentIndex;
        (pFVar42->Tags).AllocatorInstance.Data = (pFVar14->Tags).AllocatorInstance.Data;
        (pFVar42->Tags).ArrayNum = iVar15;
        (pFVar42->Tags).ArrayMax = iVar16;
        uVar10 = *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty;
        (pFVar42->DynamicBinding_DEPRECATED).Function.field0_0x0 =
             (pFVar14->DynamicBinding_DEPRECATED).Function.field0_0x0;
        *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar10;
        uVar10 = *(undefined8 *)
                  &(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
        *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
             *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
        *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
             uVar10;
        uVar1 = (pFVar14->Guid).A;
        uVar2 = (pFVar14->Guid).B;
        *(undefined8 *)&(pFVar42->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
             *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
        (pFVar42->Guid).A = uVar1;
        (pFVar42->Guid).B = uVar2;
        uVar1 = (pFVar14->Guid).D;
        pFVar11 = (pFVar14->Name).Data.AllocatorInstance.Data;
        (pFVar42->Guid).C = (pFVar14->Guid).C;
        (pFVar42->Guid).D = uVar1;
        (pFVar42->Name).Data.AllocatorInstance.Data = pFVar11;
        iVar36 = (pFVar14->Name).Data.ArrayMax;
        uVar1 = (pFVar14->ParentGuid).A;
        uVar2 = (pFVar14->ParentGuid).B;
        (pFVar42->Name).Data.ArrayNum = (pFVar14->Name).Data.ArrayNum;
        (pFVar42->Name).Data.ArrayMax = iVar36;
        (pFVar42->ParentGuid).A = uVar1;
        (pFVar42->ParentGuid).B = uVar2;
        uVar1 = (pFVar14->ParentGuid).D;
        uVar2 = (pFVar14->SpawnableObjectBindingID).Guid.A;
        uVar17 = (pFVar14->SpawnableObjectBindingID).Guid.B;
        (pFVar42->ParentGuid).C = (pFVar14->ParentGuid).C;
        (pFVar42->ParentGuid).D = uVar1;
        (pFVar42->SpawnableObjectBindingID).Guid.A = uVar2;
        (pFVar42->SpawnableObjectBindingID).Guid.B = uVar17;
        uVar1 = (pFVar14->SpawnableObjectBindingID).Guid.D;
        iVar36 = (pFVar14->SpawnableObjectBindingID).SequenceID;
        iVar15 = (pFVar14->SpawnableObjectBindingID).ResolveParentIndex;
        (pFVar42->SpawnableObjectBindingID).Guid.C = (pFVar14->SpawnableObjectBindingID).Guid.C;
        (pFVar42->SpawnableObjectBindingID).Guid.D = uVar1;
        (pFVar42->SpawnableObjectBindingID).SequenceID = iVar36;
        (pFVar42->SpawnableObjectBindingID).ResolveParentIndex = iVar15;
        (pFVar14->Tags).AllocatorInstance.Data = pFVar3;
        (pFVar14->Tags).ArrayNum = iVar18;
        (pFVar14->Tags).ArrayMax = iVar19;
        (pFVar14->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar4;
        *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar5;
        *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar6
        ;
        *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
             uVar7;
        *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
             uVar8;
        (pFVar14->Guid).A = uVar20;
        (pFVar14->Guid).B = uVar21;
        (pFVar14->Guid).C = uVar22;
        (pFVar14->Guid).D = uVar23;
        (pFVar14->Name).Data.AllocatorInstance.Data = pFVar9;
        (pFVar14->Name).Data.ArrayNum = iVar24;
        (pFVar14->Name).Data.ArrayMax = iVar25;
        (pFVar14->ParentGuid).A = uVar26;
        (pFVar14->ParentGuid).B = uVar27;
        (pFVar14->ParentGuid).C = uVar28;
        (pFVar14->ParentGuid).D = uVar29;
        (pFVar14->SpawnableObjectBindingID).Guid.A = uVar30;
        (pFVar14->SpawnableObjectBindingID).Guid.B = uVar31;
        (pFVar14->SpawnableObjectBindingID).Guid.C = uVar32;
        (pFVar14->SpawnableObjectBindingID).Guid.D = uVar33;
        (pFVar14->SpawnableObjectBindingID).SequenceID = iVar34;
        (pFVar14->SpawnableObjectBindingID).ResolveParentIndex = iVar35;
        pFVar42 = pFVar14;
LAB_146176810:
        pFVar40 = pFVar42;
        pFVar42 = pFVar40 + 1;
        if ((pFVar42 <= pFVar41) &&
           (uVar1 = pFVar40[1].Guid.A, uVar2 = (pFVar14->Guid).A, uVar1 <= uVar2)) break;
        goto LAB_146176847;
      }
      for (; pFVar42 = pFVar14, pFVar37 = pFVar14, pFVar14 < pFVar41; pFVar41 = pFVar41 + -1) {
        while (pFVar40 = pFVar42, pFVar37 = pFVar37 + 1, pFVar37 <= pFVar41) {
          uVar1 = (pFVar37->Guid).A;
          uVar2 = (pFVar40->Guid).A;
          if (uVar2 < uVar1) {
            bVar44 = true;
          }
          else if (uVar1 < uVar2) {
            bVar44 = false;
          }
          else {
            uVar1 = (pFVar37->Guid).B;
            uVar2 = (pFVar40->Guid).B;
            if (uVar2 < uVar1) {
              bVar44 = true;
            }
            else if (uVar1 < uVar2) {
              bVar44 = false;
            }
            else {
              uVar1 = (pFVar37->Guid).C;
              uVar2 = (pFVar40->Guid).C;
              if (uVar2 < uVar1) {
                bVar44 = true;
              }
              else if (uVar1 < uVar2) {
                bVar44 = false;
              }
              else {
                bVar44 = (pFVar40->Guid).D < (pFVar37->Guid).D;
              }
            }
          }
          pFVar42 = pFVar37;
          if (!bVar44) {
            pFVar42 = pFVar40;
          }
        }
        pFVar3 = (pFVar40->Tags).AllocatorInstance.Data;
        iVar15 = (pFVar40->Tags).ArrayNum;
        iVar16 = (pFVar40->Tags).ArrayMax;
        TVar4 = (pFVar40->DynamicBinding_DEPRECATED).Function.field0_0x0;
        uVar5 = *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty;
        uVar6 = *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8
        ;
        uVar7 = *(undefined8 *)
                 &(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
        iVar36 = (pFVar41->Tags).ArrayNum;
        iVar43 = (pFVar41->Tags).ArrayMax;
        uVar8 = *(undefined8 *)
                 &(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
        uVar20 = (pFVar40->Guid).A;
        uVar21 = (pFVar40->Guid).B;
        uVar22 = (pFVar40->Guid).C;
        uVar23 = (pFVar40->Guid).D;
        pFVar9 = (pFVar40->Name).Data.AllocatorInstance.Data;
        iVar18 = (pFVar40->Name).Data.ArrayNum;
        iVar19 = (pFVar40->Name).Data.ArrayMax;
        uVar26 = (pFVar40->ParentGuid).A;
        uVar27 = (pFVar40->ParentGuid).B;
        uVar28 = (pFVar40->ParentGuid).C;
        uVar29 = (pFVar40->ParentGuid).D;
        uVar30 = (pFVar40->SpawnableObjectBindingID).Guid.A;
        uVar31 = (pFVar40->SpawnableObjectBindingID).Guid.B;
        uVar32 = (pFVar40->SpawnableObjectBindingID).Guid.C;
        uVar33 = (pFVar40->SpawnableObjectBindingID).Guid.D;
        iVar24 = (pFVar40->SpawnableObjectBindingID).SequenceID;
        iVar25 = (pFVar40->SpawnableObjectBindingID).ResolveParentIndex;
        (pFVar40->Tags).AllocatorInstance.Data = (pFVar41->Tags).AllocatorInstance.Data;
        (pFVar40->Tags).ArrayNum = iVar36;
        (pFVar40->Tags).ArrayMax = iVar43;
        uVar10 = *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty;
        (pFVar40->DynamicBinding_DEPRECATED).Function.field0_0x0 =
             (pFVar41->DynamicBinding_DEPRECATED).Function.field0_0x0;
        *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar10;
        uVar10 = *(undefined8 *)
                  &(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
        *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
             *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
        *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
             uVar10;
        uVar1 = (pFVar41->Guid).A;
        uVar2 = (pFVar41->Guid).B;
        *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
             *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
        (pFVar40->Guid).A = uVar1;
        (pFVar40->Guid).B = uVar2;
        uVar1 = (pFVar41->Guid).D;
        pFVar11 = (pFVar41->Name).Data.AllocatorInstance.Data;
        (pFVar40->Guid).C = (pFVar41->Guid).C;
        (pFVar40->Guid).D = uVar1;
        (pFVar40->Name).Data.AllocatorInstance.Data = pFVar11;
        iVar36 = (pFVar41->Name).Data.ArrayMax;
        uVar1 = (pFVar41->ParentGuid).A;
        uVar2 = (pFVar41->ParentGuid).B;
        (pFVar40->Name).Data.ArrayNum = (pFVar41->Name).Data.ArrayNum;
        (pFVar40->Name).Data.ArrayMax = iVar36;
        (pFVar40->ParentGuid).A = uVar1;
        (pFVar40->ParentGuid).B = uVar2;
        uVar1 = (pFVar41->ParentGuid).D;
        uVar2 = (pFVar41->SpawnableObjectBindingID).Guid.A;
        uVar17 = (pFVar41->SpawnableObjectBindingID).Guid.B;
        (pFVar40->ParentGuid).C = (pFVar41->ParentGuid).C;
        (pFVar40->ParentGuid).D = uVar1;
        (pFVar40->SpawnableObjectBindingID).Guid.A = uVar2;
        (pFVar40->SpawnableObjectBindingID).Guid.B = uVar17;
        uVar1 = (pFVar41->SpawnableObjectBindingID).Guid.D;
        iVar36 = (pFVar41->SpawnableObjectBindingID).SequenceID;
        iVar43 = (pFVar41->SpawnableObjectBindingID).ResolveParentIndex;
        (pFVar40->SpawnableObjectBindingID).Guid.C = (pFVar41->SpawnableObjectBindingID).Guid.C;
        (pFVar40->SpawnableObjectBindingID).Guid.D = uVar1;
        (pFVar40->SpawnableObjectBindingID).SequenceID = iVar36;
        (pFVar40->SpawnableObjectBindingID).ResolveParentIndex = iVar43;
        (pFVar41->Tags).AllocatorInstance.Data = pFVar3;
        (pFVar41->Tags).ArrayNum = iVar15;
        (pFVar41->Tags).ArrayMax = iVar16;
        (pFVar41->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar4;
        *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar5;
        *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar6
        ;
        *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
             uVar7;
        *(undefined8 *)&(pFVar41->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
             uVar8;
        (pFVar41->Guid).A = uVar20;
        (pFVar41->Guid).B = uVar21;
        (pFVar41->Guid).C = uVar22;
        (pFVar41->Guid).D = uVar23;
        (pFVar41->Name).Data.AllocatorInstance.Data = pFVar9;
        (pFVar41->Name).Data.ArrayNum = iVar18;
        (pFVar41->Name).Data.ArrayMax = iVar19;
        (pFVar41->ParentGuid).A = uVar26;
        (pFVar41->ParentGuid).B = uVar27;
        (pFVar41->ParentGuid).C = uVar28;
        (pFVar41->ParentGuid).D = uVar29;
        (pFVar41->SpawnableObjectBindingID).Guid.A = uVar30;
        (pFVar41->SpawnableObjectBindingID).Guid.B = uVar31;
        (pFVar41->SpawnableObjectBindingID).Guid.C = uVar32;
        (pFVar41->SpawnableObjectBindingID).Guid.D = uVar33;
        (pFVar41->SpawnableObjectBindingID).SequenceID = iVar24;
        (pFVar41->SpawnableObjectBindingID).ResolveParentIndex = iVar25;
      }
    }
LAB_146176a34:
    ppFVar39 = ppFVar39 + -3;
    if (ppFVar39 < &local_368) {
      return;
    }
  } while( true );
  if ((uVar2 != uVar1) ||
     ((uVar1 = pFVar40[1].Guid.B, uVar2 = (pFVar14->Guid).B, uVar1 <= uVar2 &&
      ((uVar2 != uVar1 ||
       ((uVar1 = pFVar40[1].Guid.C, uVar2 = (pFVar14->Guid).C, uVar1 <= uVar2 &&
        ((uVar2 != uVar1 || (pFVar40[1].Guid.D <= (pFVar14->Guid).D)))))))))) goto LAB_146176810;
LAB_146176847:
  do {
    pFVar38 = pFVar37;
    pFVar37 = pFVar38 + -1;
    if ((pFVar37 <= pFVar14) ||
       (uVar1 = (pFVar14->Guid).A, uVar2 = pFVar38[-1].Guid.A, uVar2 < uVar1)) break;
  } while ((uVar2 != uVar1) ||
          ((uVar1 = (pFVar14->Guid).B, uVar2 = pFVar38[-1].Guid.B, uVar1 <= uVar2 &&
           ((uVar2 != uVar1 ||
            ((uVar1 = (pFVar14->Guid).C, uVar2 = pFVar38[-1].Guid.C, uVar1 <= uVar2 &&
             ((uVar2 != uVar1 || ((pFVar14->Guid).D <= pFVar38[-1].Guid.D))))))))));
  pFVar3 = (pFVar37->Tags).AllocatorInstance.Data;
  uVar12 = pFVar38[-1].Tags.ArrayNum;
  uVar13 = pFVar38[-1].Tags.ArrayMax;
  if (pFVar42 <= pFVar37) {
    pFVar9 = (pFVar42->Tags).AllocatorInstance.Data;
    iVar16 = pFVar40[1].Tags.ArrayNum;
    iVar18 = pFVar40[1].Tags.ArrayMax;
    TVar4 = pFVar40[1].DynamicBinding_DEPRECATED.Function.field0_0x0;
    uVar5 = *(undefined8 *)&pFVar40[1].DynamicBinding_DEPRECATED.ResolveParamsProperty;
    uVar6 = *(undefined8 *)&pFVar40[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8;
    uVar7 = *(undefined8 *)&pFVar40[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10;
    uVar8 = *(undefined8 *)&pFVar40[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18;
    uVar20 = pFVar40[1].Guid.A;
    uVar21 = pFVar40[1].Guid.B;
    uVar22 = pFVar40[1].Guid.C;
    uVar23 = pFVar40[1].Guid.D;
    pFVar11 = pFVar40[1].Name.Data.AllocatorInstance.Data;
    iVar19 = pFVar40[1].Name.Data.ArrayNum;
    iVar24 = pFVar40[1].Name.Data.ArrayMax;
    uVar26 = pFVar40[1].ParentGuid.A;
    uVar27 = pFVar40[1].ParentGuid.B;
    uVar28 = pFVar40[1].ParentGuid.C;
    uVar29 = pFVar40[1].ParentGuid.D;
    uVar30 = pFVar40[1].SpawnableObjectBindingID.Guid.A;
    uVar31 = pFVar40[1].SpawnableObjectBindingID.Guid.B;
    uVar32 = pFVar40[1].SpawnableObjectBindingID.Guid.C;
    uVar33 = pFVar40[1].SpawnableObjectBindingID.Guid.D;
    iVar25 = pFVar40[1].SpawnableObjectBindingID.SequenceID;
    iVar34 = pFVar40[1].SpawnableObjectBindingID.ResolveParentIndex;
    (pFVar42->Tags).AllocatorInstance.Data = pFVar3;
    pFVar40[1].Tags.ArrayNum = uVar12;
    pFVar40[1].Tags.ArrayMax = uVar13;
    uVar10 = *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty;
    pFVar40[1].DynamicBinding_DEPRECATED.Function.field0_0x0 =
         pFVar38[-1].DynamicBinding_DEPRECATED.Function.field0_0x0;
    *(undefined8 *)&pFVar40[1].DynamicBinding_DEPRECATED.ResolveParamsProperty = uVar10;
    uVar10 = *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10;
    *(undefined8 *)&pFVar40[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8 =
         *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8;
    *(undefined8 *)&pFVar40[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10 = uVar10;
    uVar1 = pFVar38[-1].Guid.A;
    uVar2 = pFVar38[-1].Guid.B;
    *(undefined8 *)&pFVar40[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18 =
         *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18;
    pFVar40[1].Guid.A = uVar1;
    pFVar40[1].Guid.B = uVar2;
    uVar1 = pFVar38[-1].Guid.D;
    pFVar3 = pFVar38[-1].Name.Data.AllocatorInstance.Data;
    pFVar40[1].Guid.C = pFVar38[-1].Guid.C;
    pFVar40[1].Guid.D = uVar1;
    pFVar40[1].Name.Data.AllocatorInstance.Data = pFVar3;
    iVar36 = pFVar38[-1].Name.Data.ArrayMax;
    uVar1 = pFVar38[-1].ParentGuid.A;
    uVar2 = pFVar38[-1].ParentGuid.B;
    pFVar40[1].Name.Data.ArrayNum = pFVar38[-1].Name.Data.ArrayNum;
    pFVar40[1].Name.Data.ArrayMax = iVar36;
    pFVar40[1].ParentGuid.A = uVar1;
    pFVar40[1].ParentGuid.B = uVar2;
    uVar1 = pFVar38[-1].ParentGuid.D;
    uVar2 = pFVar38[-1].SpawnableObjectBindingID.Guid.A;
    uVar17 = pFVar38[-1].SpawnableObjectBindingID.Guid.B;
    pFVar40[1].ParentGuid.C = pFVar38[-1].ParentGuid.C;
    pFVar40[1].ParentGuid.D = uVar1;
    pFVar40[1].SpawnableObjectBindingID.Guid.A = uVar2;
    pFVar40[1].SpawnableObjectBindingID.Guid.B = uVar17;
    uVar1 = pFVar38[-1].SpawnableObjectBindingID.Guid.D;
    iVar36 = pFVar38[-1].SpawnableObjectBindingID.SequenceID;
    iVar15 = pFVar38[-1].SpawnableObjectBindingID.ResolveParentIndex;
    pFVar40[1].SpawnableObjectBindingID.Guid.C = pFVar38[-1].SpawnableObjectBindingID.Guid.C;
    pFVar40[1].SpawnableObjectBindingID.Guid.D = uVar1;
    pFVar40[1].SpawnableObjectBindingID.SequenceID = iVar36;
    pFVar40[1].SpawnableObjectBindingID.ResolveParentIndex = iVar15;
    (pFVar37->Tags).AllocatorInstance.Data = pFVar9;
    pFVar38[-1].Tags.ArrayNum = iVar16;
    pFVar38[-1].Tags.ArrayMax = iVar18;
    pFVar38[-1].DynamicBinding_DEPRECATED.Function.field0_0x0 = TVar4;
    *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty = uVar5;
    *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8 = uVar6;
    *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10 = uVar7;
    *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18 = uVar8;
    pFVar38[-1].Guid.A = uVar20;
    pFVar38[-1].Guid.B = uVar21;
    pFVar38[-1].Guid.C = uVar22;
    pFVar38[-1].Guid.D = uVar23;
    pFVar38[-1].Name.Data.AllocatorInstance.Data = pFVar11;
    pFVar38[-1].Name.Data.ArrayNum = iVar19;
    pFVar38[-1].Name.Data.ArrayMax = iVar24;
    pFVar38[-1].ParentGuid.A = uVar26;
    pFVar38[-1].ParentGuid.B = uVar27;
    pFVar38[-1].ParentGuid.C = uVar28;
    pFVar38[-1].ParentGuid.D = uVar29;
    pFVar38[-1].SpawnableObjectBindingID.Guid.A = uVar30;
    pFVar38[-1].SpawnableObjectBindingID.Guid.B = uVar31;
    pFVar38[-1].SpawnableObjectBindingID.Guid.C = uVar32;
    pFVar38[-1].SpawnableObjectBindingID.Guid.D = uVar33;
    pFVar38[-1].SpawnableObjectBindingID.SequenceID = iVar25;
    pFVar38[-1].SpawnableObjectBindingID.ResolveParentIndex = iVar34;
    goto LAB_146176810;
  }
  pFVar9 = (pFVar14->Tags).AllocatorInstance.Data;
  iVar16 = (pFVar14->Tags).ArrayNum;
  iVar18 = (pFVar14->Tags).ArrayMax;
  TVar4 = (pFVar14->DynamicBinding_DEPRECATED).Function.field0_0x0;
  uVar5 = *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty;
  uVar6 = *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
  uVar7 = *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
  iVar43 = iVar43 + -1;
  uVar8 = *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
  uVar20 = (pFVar14->Guid).A;
  uVar21 = (pFVar14->Guid).B;
  uVar22 = (pFVar14->Guid).C;
  uVar23 = (pFVar14->Guid).D;
  pFVar11 = (pFVar14->Name).Data.AllocatorInstance.Data;
  iVar19 = (pFVar14->Name).Data.ArrayNum;
  iVar24 = (pFVar14->Name).Data.ArrayMax;
  uVar26 = (pFVar14->ParentGuid).A;
  uVar27 = (pFVar14->ParentGuid).B;
  uVar28 = (pFVar14->ParentGuid).C;
  uVar29 = (pFVar14->ParentGuid).D;
  uVar30 = (pFVar14->SpawnableObjectBindingID).Guid.A;
  uVar31 = (pFVar14->SpawnableObjectBindingID).Guid.B;
  uVar32 = (pFVar14->SpawnableObjectBindingID).Guid.C;
  uVar33 = (pFVar14->SpawnableObjectBindingID).Guid.D;
  iVar25 = (pFVar14->SpawnableObjectBindingID).SequenceID;
  iVar34 = (pFVar14->SpawnableObjectBindingID).ResolveParentIndex;
  (pFVar14->Tags).AllocatorInstance.Data = pFVar3;
  (pFVar14->Tags).ArrayNum = uVar12;
  (pFVar14->Tags).ArrayMax = uVar13;
  uVar10 = *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty;
  (pFVar14->DynamicBinding_DEPRECATED).Function.field0_0x0 =
       pFVar38[-1].DynamicBinding_DEPRECATED.Function.field0_0x0;
  *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty = uVar10;
  uVar10 = *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10;
  *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
       *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8;
  *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 = uVar10;
  uVar1 = pFVar38[-1].Guid.A;
  uVar2 = pFVar38[-1].Guid.B;
  *(undefined8 *)&(pFVar14->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
       *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18;
  (pFVar14->Guid).A = uVar1;
  (pFVar14->Guid).B = uVar2;
  uVar1 = pFVar38[-1].Guid.D;
  pFVar3 = pFVar38[-1].Name.Data.AllocatorInstance.Data;
  (pFVar14->Guid).C = pFVar38[-1].Guid.C;
  (pFVar14->Guid).D = uVar1;
  (pFVar14->Name).Data.AllocatorInstance.Data = pFVar3;
  iVar36 = pFVar38[-1].Name.Data.ArrayMax;
  uVar1 = pFVar38[-1].ParentGuid.A;
  uVar2 = pFVar38[-1].ParentGuid.B;
  (pFVar14->Name).Data.ArrayNum = pFVar38[-1].Name.Data.ArrayNum;
  (pFVar14->Name).Data.ArrayMax = iVar36;
  (pFVar14->ParentGuid).A = uVar1;
  (pFVar14->ParentGuid).B = uVar2;
  uVar1 = pFVar38[-1].ParentGuid.D;
  uVar2 = pFVar38[-1].SpawnableObjectBindingID.Guid.A;
  uVar17 = pFVar38[-1].SpawnableObjectBindingID.Guid.B;
  (pFVar14->ParentGuid).C = pFVar38[-1].ParentGuid.C;
  (pFVar14->ParentGuid).D = uVar1;
  (pFVar14->SpawnableObjectBindingID).Guid.A = uVar2;
  (pFVar14->SpawnableObjectBindingID).Guid.B = uVar17;
  uVar1 = pFVar38[-1].SpawnableObjectBindingID.Guid.D;
  iVar36 = pFVar38[-1].SpawnableObjectBindingID.SequenceID;
  iVar15 = pFVar38[-1].SpawnableObjectBindingID.ResolveParentIndex;
  (pFVar14->SpawnableObjectBindingID).Guid.C = pFVar38[-1].SpawnableObjectBindingID.Guid.C;
  (pFVar14->SpawnableObjectBindingID).Guid.D = uVar1;
  (pFVar14->SpawnableObjectBindingID).SequenceID = iVar36;
  (pFVar14->SpawnableObjectBindingID).ResolveParentIndex = iVar15;
  (pFVar37->Tags).AllocatorInstance.Data = pFVar9;
  pFVar38[-1].Tags.ArrayNum = iVar16;
  pFVar38[-1].Tags.ArrayMax = iVar18;
  pFVar38[-1].DynamicBinding_DEPRECATED.Function.field0_0x0 = TVar4;
  *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty = uVar5;
  *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8 = uVar6;
  *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10 = uVar7;
  *(undefined8 *)&pFVar38[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18 = uVar8;
  pFVar38[-1].Guid.A = uVar20;
  pFVar38[-1].Guid.B = uVar21;
  pFVar38[-1].Guid.C = uVar22;
  pFVar38[-1].Guid.D = uVar23;
  pFVar38[-1].Name.Data.AllocatorInstance.Data = pFVar11;
  pFVar38[-1].Name.Data.ArrayNum = iVar19;
  pFVar38[-1].Name.Data.ArrayMax = iVar24;
  pFVar38[-1].ParentGuid.A = uVar26;
  pFVar38[-1].ParentGuid.B = uVar27;
  pFVar38[-1].ParentGuid.C = uVar28;
  pFVar38[-1].ParentGuid.D = uVar29;
  pFVar38[-1].SpawnableObjectBindingID.Guid.A = uVar30;
  pFVar38[-1].SpawnableObjectBindingID.Guid.B = uVar31;
  pFVar38[-1].SpawnableObjectBindingID.Guid.C = uVar32;
  pFVar38[-1].SpawnableObjectBindingID.Guid.D = uVar33;
  pFVar38[-1].SpawnableObjectBindingID.SequenceID = iVar25;
  pFVar38[-1].SpawnableObjectBindingID.ResolveParentIndex = iVar34;
  if ((longlong)((longlong)pFVar37 + (-0x80 - (longlong)pFVar14) & 0xffffffffffffff80U) <
      (longlong)((longlong)pFVar41 - (longlong)pFVar42 & 0xffffffffffffff80U)) {
    if (pFVar42 < pFVar41) {
      *ppFVar39 = pFVar42;
      ppFVar39[1] = pFVar41;
      *(int *)(ppFVar39 + 2) = iVar43;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar37 <= pFVar14 + 1) goto LAB_146176a34;
    pFVar41 = pFVar38 + -2;
    pFVar42 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar37) {
      *ppFVar39 = pFVar14;
      ppFVar39[1] = pFVar38 + -2;
      *(int *)(ppFVar39 + 2) = iVar43;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar41 <= pFVar42) goto LAB_146176a34;
  }
  iVar36 = (int)((longlong)pFVar41 - (longlong)pFVar42 >> 7);
  pFVar14 = pFVar42;
  goto joined_r0x000146176756;
}

// IntroSortInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_> @ 146176bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>
          (FMovieSceneSpawnable *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_> param_4)

{
  double *pdVar1;
  FMovieSceneSpawnable *pFVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FScriptContainerElement *pFVar18;
  double dVar19;
  TObjectPtr<UFunction>_u_0 TVar20;
  undefined8 uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  undefined6 uVar24;
  uint uVar25;
  ESpawnOwnership EVar26;
  undefined3 uVar27;
  FNameEntryId FVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  longlong lVar32;
  longlong lVar33;
  FMovieSceneSpawnable *pFVar34;
  FMovieSceneSpawnable *pFVar35;
  FMovieSceneSpawnable *pFVar36;
  FMovieSceneSpawnable *pFVar37;
  FMovieSceneSpawnable *pFVar38;
  FMovieSceneSpawnable **ppFVar39;
  FMovieSceneSpawnable *pFVar40;
  int iVar41;
  float fVar42;
  undefined1 auStackY_498 [32];
  FIdentityFunctor local_468 [8];
  TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_> local_460;
  TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_> local_458 [3];
  FMovieSceneSpawnable *local_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  FScriptContainerElement *local_3d8;
  double dStack_3d0;
  double local_3c8;
  TObjectPtr<UFunction>_u_0 TStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  FScriptContainerElement *local_388;
  double dStack_380;
  TObjectPtr<UObject>_u_0 local_378;
  FScriptContainerElement *pFStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  FMovieSceneSpawnable *local_348;
  FMovieSceneSpawnable *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar42 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar42;
    memset(local_330,0,0x2e8);
    ppFVar39 = &local_348;
    do {
      pFVar38 = ppFVar39[1];
      pFVar36 = *ppFVar39;
      pFVar2 = ppFVar39[2];
      local_440._0_4_ = (int)pFVar2;
      lVar32 = ((longlong)pFVar38 - (longlong)pFVar36) +
               SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar38 - (longlong)pFVar36),
                      8);
      iVar41 = ((int)(lVar32 >> 7) - (int)(lVar32 >> 0x3f)) + 1;
      pFVar40 = pFVar36;
      if ((int)local_440 != 0) {
LAB_146176ca3:
        if (8 < iVar41) {
          pFVar36 = pFVar40 + iVar41 / 2;
          dVar6 = (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[0];
          dVar7 = (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[1];
          dVar8 = (pFVar36->SpawnTransform).Rotation.ZW.m128d_f64[0];
          dVar9 = (pFVar36->SpawnTransform).Rotation.ZW.m128d_f64[1];
          dVar10 = (pFVar36->SpawnTransform).Translation.XY.m128d_f64[0];
          dVar11 = (pFVar36->SpawnTransform).Translation.XY.m128d_f64[1];
          dVar12 = (pFVar36->SpawnTransform).Translation.ZW.m128d_f64[0];
          dVar13 = (pFVar36->SpawnTransform).Translation.ZW.m128d_f64[1];
          dVar14 = (pFVar36->SpawnTransform).Scale3D.XY.m128d_f64[0];
          dVar15 = (pFVar36->SpawnTransform).Scale3D.XY.m128d_f64[1];
          dVar16 = (pFVar36->SpawnTransform).Scale3D.ZW.m128d_f64[0];
          dVar17 = (pFVar36->SpawnTransform).Scale3D.ZW.m128d_f64[1];
          pFVar18 = (pFVar36->Tags).AllocatorInstance.Data;
          iVar29 = (pFVar36->Tags).ArrayNum;
          iVar30 = (pFVar36->Tags).ArrayMax;
          local_3c8._0_1_ = pFVar36->bContinuouslyRespawn;
          local_3c8._1_1_ = pFVar36->bNetAddressableName;
          local_3c8._2_6_ = *(undefined6 *)&pFVar36->field_0x72;
          TStack_3c0 = (pFVar36->DynamicBinding_DEPRECATED).Function.field0_0x0;
          local_3b8 = *(double *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty;
          dStack_3b0 = *(double *)
                        &(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
          local_3a8 = *(double *)
                       &(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
          dStack_3a0 = *(double *)
                        &(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
          local_398._0_4_ = (pFVar36->Guid).A;
          local_398._4_4_ = (pFVar36->Guid).B;
          dStack_390._0_4_ = (pFVar36->Guid).C;
          dStack_390._4_4_ = (pFVar36->Guid).D;
          local_388 = (pFVar36->Name).Data.AllocatorInstance.Data;
          dStack_380._0_4_ = (pFVar36->Name).Data.ArrayNum;
          dStack_380._4_4_ = (pFVar36->Name).Data.ArrayMax;
          local_378 = (pFVar36->ObjectTemplate).field0_0x0;
          pFStack_370 = (pFVar36->ChildPossessables).AllocatorInstance.Data;
          local_368._0_4_ = (pFVar36->ChildPossessables).ArrayNum;
          local_368._4_4_ = (pFVar36->ChildPossessables).ArrayMax;
          dStack_360._0_1_ = pFVar36->Ownership;
          dStack_360._1_3_ = *(undefined3 *)&pFVar36->field_0xd9;
          dStack_360._4_4_ = (pFVar36->LevelName).ComparisonIndex;
          local_358 = *(double *)&(pFVar36->LevelName).Number;
          dStack_350 = *(double *)&pFVar36->field_0xe8;
          dVar19 = (pFVar40->SpawnTransform).Rotation.XY.m128d_f64[1];
          (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[0] =
               (pFVar40->SpawnTransform).Rotation.XY.m128d_f64[0];
          (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar19;
          dVar19 = (pFVar40->SpawnTransform).Rotation.ZW.m128d_f64[1];
          (pFVar36->SpawnTransform).Rotation.ZW.m128d_f64[0] =
               (pFVar40->SpawnTransform).Rotation.ZW.m128d_f64[0];
          (pFVar36->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar19;
          dVar19 = (pFVar40->SpawnTransform).Translation.XY.m128d_f64[1];
          (pFVar36->SpawnTransform).Translation.XY.m128d_f64[0] =
               (pFVar40->SpawnTransform).Translation.XY.m128d_f64[0];
          (pFVar36->SpawnTransform).Translation.XY.m128d_f64[1] = dVar19;
          dVar19 = (pFVar40->SpawnTransform).Translation.ZW.m128d_f64[1];
          (pFVar36->SpawnTransform).Translation.ZW.m128d_f64[0] =
               (pFVar40->SpawnTransform).Translation.ZW.m128d_f64[0];
          (pFVar36->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar19;
          dVar19 = (pFVar40->SpawnTransform).Scale3D.XY.m128d_f64[1];
          (pFVar36->SpawnTransform).Scale3D.XY.m128d_f64[0] =
               (pFVar40->SpawnTransform).Scale3D.XY.m128d_f64[0];
          (pFVar36->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar19;
          dVar19 = (pFVar40->SpawnTransform).Scale3D.ZW.m128d_f64[1];
          (pFVar36->SpawnTransform).Scale3D.ZW.m128d_f64[0] =
               (pFVar40->SpawnTransform).Scale3D.ZW.m128d_f64[0];
          (pFVar36->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar19;
          iVar41 = (pFVar40->Tags).ArrayNum;
          iVar23 = (pFVar40->Tags).ArrayMax;
          (pFVar36->Tags).AllocatorInstance.Data = (pFVar40->Tags).AllocatorInstance.Data;
          (pFVar36->Tags).ArrayNum = iVar41;
          (pFVar36->Tags).ArrayMax = iVar23;
          bVar31 = pFVar40->bNetAddressableName;
          uVar24 = *(undefined6 *)&pFVar40->field_0x72;
          TVar20 = (pFVar40->DynamicBinding_DEPRECATED).Function.field0_0x0;
          pFVar36->bContinuouslyRespawn = pFVar40->bContinuouslyRespawn;
          pFVar36->bNetAddressableName = bVar31;
          *(undefined6 *)&pFVar36->field_0x72 = uVar24;
          (pFVar36->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar20;
          uVar21 = *(undefined8 *)
                    &(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
          *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty =
               *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty;
          *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
               uVar21;
          uVar21 = *(undefined8 *)
                    &(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
          *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
               *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10
          ;
          *(undefined8 *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
               uVar21;
          uVar3 = (pFVar40->Guid).B;
          uVar4 = (pFVar40->Guid).C;
          uVar25 = (pFVar40->Guid).D;
          (pFVar36->Guid).A = (pFVar40->Guid).A;
          (pFVar36->Guid).B = uVar3;
          (pFVar36->Guid).C = uVar4;
          (pFVar36->Guid).D = uVar25;
          iVar41 = (pFVar40->Name).Data.ArrayNum;
          iVar23 = (pFVar40->Name).Data.ArrayMax;
          (pFVar36->Name).Data.AllocatorInstance.Data = (pFVar40->Name).Data.AllocatorInstance.Data;
          (pFVar36->Name).Data.ArrayNum = iVar41;
          (pFVar36->Name).Data.ArrayMax = iVar23;
          pFVar22 = (pFVar40->ChildPossessables).AllocatorInstance.Data;
          (pFVar36->ObjectTemplate).field0_0x0 = (pFVar40->ObjectTemplate).field0_0x0;
          (pFVar36->ChildPossessables).AllocatorInstance.Data = pFVar22;
          iVar41 = (pFVar40->ChildPossessables).ArrayMax;
          EVar26 = pFVar40->Ownership;
          uVar27 = *(undefined3 *)&pFVar40->field_0xd9;
          FVar28.Value = (pFVar40->LevelName).ComparisonIndex.Value;
          (pFVar36->ChildPossessables).ArrayNum = (pFVar40->ChildPossessables).ArrayNum;
          (pFVar36->ChildPossessables).ArrayMax = iVar41;
          pFVar36->Ownership = EVar26;
          *(undefined3 *)&pFVar36->field_0xd9 = uVar27;
          (pFVar36->LevelName).ComparisonIndex = (FNameEntryId)FVar28.Value;
          uVar21 = *(undefined8 *)&pFVar40->field_0xe8;
          *(undefined8 *)&(pFVar36->LevelName).Number = *(undefined8 *)&(pFVar40->LevelName).Number;
          *(undefined8 *)&pFVar36->field_0xe8 = uVar21;
          (pFVar40->SpawnTransform).Rotation.XY.m128d_f64[0] = dVar6;
          (pFVar40->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar7;
          (pFVar40->SpawnTransform).Rotation.ZW.m128d_f64[0] = dVar8;
          (pFVar40->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar9;
          (pFVar40->SpawnTransform).Translation.XY.m128d_f64[0] = dVar10;
          (pFVar40->SpawnTransform).Translation.XY.m128d_f64[1] = dVar11;
          (pFVar40->SpawnTransform).Translation.ZW.m128d_f64[0] = dVar12;
          (pFVar40->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar13;
          pFVar34 = pFVar38 + 1;
          (pFVar40->SpawnTransform).Scale3D.XY.m128d_f64[0] = dVar14;
          (pFVar40->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar15;
          (pFVar40->SpawnTransform).Scale3D.ZW.m128d_f64[0] = dVar16;
          (pFVar40->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar17;
          (pFVar40->Tags).AllocatorInstance.Data = pFVar18;
          (pFVar40->Tags).ArrayNum = iVar29;
          (pFVar40->Tags).ArrayMax = iVar30;
          pFVar36 = pFVar40;
          pFVar37 = pFVar40;
          do {
            *(double *)&pFVar37->bContinuouslyRespawn = local_3c8;
            (pFVar37->DynamicBinding_DEPRECATED).Function.field0_0x0 = TStack_3c0;
            *(double *)&(pFVar37->DynamicBinding_DEPRECATED).ResolveParamsProperty = local_3b8;
            *(double *)&(pFVar37->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
                 dStack_3b0;
            *(double *)&(pFVar37->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
                 local_3a8;
            *(double *)&(pFVar37->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
                 dStack_3a0;
            *(double *)&pFVar37->Guid = local_398;
            *(double *)&(pFVar37->Guid).C = dStack_390;
            (pFVar37->Name).Data.AllocatorInstance.Data = local_388;
            *(double *)&(pFVar37->Name).Data.ArrayNum = dStack_380;
            (pFVar37->ObjectTemplate).field0_0x0 = local_378;
            (pFVar37->ChildPossessables).AllocatorInstance.Data = pFStack_370;
            *(double *)&(pFVar37->ChildPossessables).ArrayNum = local_368;
            *(double *)&pFVar37->Ownership = dStack_360;
            *(double *)&(pFVar37->LevelName).Number = local_358;
            *(double *)&pFVar37->field_0xe8 = dStack_350;
            do {
              pFVar37 = pFVar36;
              pFVar36 = pFVar37 + 1;
              if ((pFVar38 < pFVar36) ||
                 (uVar3 = pFVar37[1].Guid.A, uVar4 = (pFVar40->Guid).A, uVar4 < uVar3)) break;
            } while ((uVar4 != uVar3) ||
                    ((uVar3 = pFVar37[1].Guid.B, uVar4 = (pFVar40->Guid).B, uVar3 <= uVar4 &&
                     ((uVar4 != uVar3 ||
                      ((uVar3 = pFVar37[1].Guid.C, uVar4 = (pFVar40->Guid).C, uVar3 <= uVar4 &&
                       ((uVar4 != uVar3 || (pFVar37[1].Guid.D <= (pFVar40->Guid).D))))))))));
            do {
              pFVar35 = pFVar34;
              pFVar34 = pFVar35 + -1;
              if ((pFVar34 <= pFVar40) ||
                 (uVar3 = (pFVar40->Guid).A, uVar4 = pFVar35[-1].Guid.A, uVar4 < uVar3)) break;
            } while ((uVar4 != uVar3) ||
                    ((uVar3 = (pFVar40->Guid).B, uVar4 = pFVar35[-1].Guid.B, uVar3 <= uVar4 &&
                     ((uVar4 != uVar3 ||
                      ((uVar3 = (pFVar40->Guid).C, uVar4 = pFVar35[-1].Guid.C, uVar3 <= uVar4 &&
                       ((uVar4 != uVar3 || ((pFVar40->Guid).D <= pFVar35[-1].Guid.D))))))))));
            if (pFVar34 < pFVar36) goto LAB_14617708c;
            dVar6 = (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[0];
            dVar7 = pFVar37[1].SpawnTransform.Rotation.XY.m128d_f64[1];
            dVar8 = pFVar37[1].SpawnTransform.Rotation.ZW.m128d_f64[0];
            dVar9 = pFVar37[1].SpawnTransform.Rotation.ZW.m128d_f64[1];
            dVar10 = pFVar37[1].SpawnTransform.Translation.XY.m128d_f64[0];
            dVar11 = pFVar37[1].SpawnTransform.Translation.XY.m128d_f64[1];
            dVar12 = pFVar37[1].SpawnTransform.Translation.ZW.m128d_f64[0];
            dVar13 = pFVar37[1].SpawnTransform.Translation.ZW.m128d_f64[1];
            dVar14 = pFVar37[1].SpawnTransform.Scale3D.XY.m128d_f64[0];
            dVar15 = pFVar37[1].SpawnTransform.Scale3D.XY.m128d_f64[1];
            dVar16 = pFVar37[1].SpawnTransform.Scale3D.ZW.m128d_f64[0];
            dVar17 = pFVar37[1].SpawnTransform.Scale3D.ZW.m128d_f64[1];
            pFVar18 = pFVar37[1].Tags.AllocatorInstance.Data;
            iVar29 = pFVar37[1].Tags.ArrayNum;
            iVar30 = pFVar37[1].Tags.ArrayMax;
            local_3c8._0_1_ = pFVar37[1].bContinuouslyRespawn;
            local_3c8._1_1_ = pFVar37[1].bNetAddressableName;
            local_3c8._2_6_ = *(undefined6 *)&pFVar37[1].field_0x72;
            TStack_3c0 = pFVar37[1].DynamicBinding_DEPRECATED.Function.field0_0x0;
            local_3b8 = *(double *)&pFVar37[1].DynamicBinding_DEPRECATED.ResolveParamsProperty;
            dStack_3b0 = *(double *)
                          &pFVar37[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8;
            local_3a8 = *(double *)
                         &pFVar37[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10;
            dStack_3a0 = *(double *)
                          &pFVar37[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18;
            local_398._0_4_ = pFVar37[1].Guid.A;
            local_398._4_4_ = pFVar37[1].Guid.B;
            dStack_390._0_4_ = pFVar37[1].Guid.C;
            dStack_390._4_4_ = pFVar37[1].Guid.D;
            local_388 = pFVar37[1].Name.Data.AllocatorInstance.Data;
            dStack_380._0_4_ = pFVar37[1].Name.Data.ArrayNum;
            dStack_380._4_4_ = pFVar37[1].Name.Data.ArrayMax;
            local_378 = pFVar37[1].ObjectTemplate.field0_0x0;
            pFStack_370 = pFVar37[1].ChildPossessables.AllocatorInstance.Data;
            local_368._0_4_ = pFVar37[1].ChildPossessables.ArrayNum;
            local_368._4_4_ = pFVar37[1].ChildPossessables.ArrayMax;
            dStack_360._0_1_ = pFVar37[1].Ownership;
            dStack_360._1_3_ = *(undefined3 *)&pFVar37[1].field_0xd9;
            dStack_360._4_4_ = pFVar37[1].LevelName.ComparisonIndex;
            local_358 = *(double *)&pFVar37[1].LevelName.Number;
            dStack_350 = *(double *)&pFVar37[1].field_0xe8;
            dVar19 = pFVar35[-1].SpawnTransform.Rotation.XY.m128d_f64[1];
            (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[0] =
                 (pFVar34->SpawnTransform).Rotation.XY.m128d_f64[0];
            pFVar37[1].SpawnTransform.Rotation.XY.m128d_f64[1] = dVar19;
            dVar19 = pFVar35[-1].SpawnTransform.Rotation.ZW.m128d_f64[1];
            pFVar37[1].SpawnTransform.Rotation.ZW.m128d_f64[0] =
                 pFVar35[-1].SpawnTransform.Rotation.ZW.m128d_f64[0];
            pFVar37[1].SpawnTransform.Rotation.ZW.m128d_f64[1] = dVar19;
            dVar19 = pFVar35[-1].SpawnTransform.Translation.XY.m128d_f64[1];
            pFVar37[1].SpawnTransform.Translation.XY.m128d_f64[0] =
                 pFVar35[-1].SpawnTransform.Translation.XY.m128d_f64[0];
            pFVar37[1].SpawnTransform.Translation.XY.m128d_f64[1] = dVar19;
            dVar19 = pFVar35[-1].SpawnTransform.Translation.ZW.m128d_f64[1];
            pFVar37[1].SpawnTransform.Translation.ZW.m128d_f64[0] =
                 pFVar35[-1].SpawnTransform.Translation.ZW.m128d_f64[0];
            pFVar37[1].SpawnTransform.Translation.ZW.m128d_f64[1] = dVar19;
            dVar19 = pFVar35[-1].SpawnTransform.Scale3D.XY.m128d_f64[1];
            pFVar37[1].SpawnTransform.Scale3D.XY.m128d_f64[0] =
                 pFVar35[-1].SpawnTransform.Scale3D.XY.m128d_f64[0];
            pFVar37[1].SpawnTransform.Scale3D.XY.m128d_f64[1] = dVar19;
            dVar19 = pFVar35[-1].SpawnTransform.Scale3D.ZW.m128d_f64[1];
            pFVar37[1].SpawnTransform.Scale3D.ZW.m128d_f64[0] =
                 pFVar35[-1].SpawnTransform.Scale3D.ZW.m128d_f64[0];
            pFVar37[1].SpawnTransform.Scale3D.ZW.m128d_f64[1] = dVar19;
            iVar41 = pFVar35[-1].Tags.ArrayNum;
            iVar23 = pFVar35[-1].Tags.ArrayMax;
            pFVar37[1].Tags.AllocatorInstance.Data = pFVar35[-1].Tags.AllocatorInstance.Data;
            pFVar37[1].Tags.ArrayNum = iVar41;
            pFVar37[1].Tags.ArrayMax = iVar23;
            bVar31 = pFVar35[-1].bNetAddressableName;
            uVar24 = *(undefined6 *)&pFVar35[-1].field_0x72;
            TVar20 = pFVar35[-1].DynamicBinding_DEPRECATED.Function.field0_0x0;
            pFVar37[1].bContinuouslyRespawn = pFVar35[-1].bContinuouslyRespawn;
            pFVar37[1].bNetAddressableName = bVar31;
            *(undefined6 *)&pFVar37[1].field_0x72 = uVar24;
            pFVar37[1].DynamicBinding_DEPRECATED.Function.field0_0x0 = TVar20;
            uVar21 = *(undefined8 *)
                      &pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8;
            *(undefined8 *)&pFVar37[1].DynamicBinding_DEPRECATED.ResolveParamsProperty =
                 *(undefined8 *)&pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty;
            *(undefined8 *)&pFVar37[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8 =
                 uVar21;
            uVar21 = *(undefined8 *)
                      &pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18;
            *(undefined8 *)&pFVar37[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10 =
                 *(undefined8 *)
                  &pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10;
            *(undefined8 *)&pFVar37[1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18 =
                 uVar21;
            uVar3 = pFVar35[-1].Guid.B;
            uVar4 = pFVar35[-1].Guid.C;
            uVar25 = pFVar35[-1].Guid.D;
            pFVar37[1].Guid.A = pFVar35[-1].Guid.A;
            pFVar37[1].Guid.B = uVar3;
            pFVar37[1].Guid.C = uVar4;
            pFVar37[1].Guid.D = uVar25;
            iVar41 = pFVar35[-1].Name.Data.ArrayNum;
            iVar23 = pFVar35[-1].Name.Data.ArrayMax;
            pFVar37[1].Name.Data.AllocatorInstance.Data =
                 pFVar35[-1].Name.Data.AllocatorInstance.Data;
            pFVar37[1].Name.Data.ArrayNum = iVar41;
            pFVar37[1].Name.Data.ArrayMax = iVar23;
            pFVar22 = pFVar35[-1].ChildPossessables.AllocatorInstance.Data;
            pFVar37[1].ObjectTemplate.field0_0x0 = pFVar35[-1].ObjectTemplate.field0_0x0;
            pFVar37[1].ChildPossessables.AllocatorInstance.Data = pFVar22;
            iVar41 = pFVar35[-1].ChildPossessables.ArrayMax;
            EVar26 = pFVar35[-1].Ownership;
            uVar27 = *(undefined3 *)&pFVar35[-1].field_0xd9;
            FVar28.Value = pFVar35[-1].LevelName.ComparisonIndex.Value;
            pFVar37[1].ChildPossessables.ArrayNum = pFVar35[-1].ChildPossessables.ArrayNum;
            pFVar37[1].ChildPossessables.ArrayMax = iVar41;
            pFVar37[1].Ownership = EVar26;
            *(undefined3 *)&pFVar37[1].field_0xd9 = uVar27;
            pFVar37[1].LevelName.ComparisonIndex = (FNameEntryId)FVar28.Value;
            uVar21 = *(undefined8 *)&pFVar35[-1].field_0xe8;
            *(undefined8 *)&pFVar37[1].LevelName.Number =
                 *(undefined8 *)&pFVar35[-1].LevelName.Number;
            *(undefined8 *)&pFVar37[1].field_0xe8 = uVar21;
            pFVar37 = pFVar35 + -1;
            (pFVar34->SpawnTransform).Rotation.XY.m128d_f64[0] = dVar6;
            pFVar35[-1].SpawnTransform.Rotation.XY.m128d_f64[1] = dVar7;
            pFVar35[-1].SpawnTransform.Rotation.ZW.m128d_f64[0] = dVar8;
            pFVar35[-1].SpawnTransform.Rotation.ZW.m128d_f64[1] = dVar9;
            pFVar35[-1].SpawnTransform.Translation.XY.m128d_f64[0] = dVar10;
            pFVar35[-1].SpawnTransform.Translation.XY.m128d_f64[1] = dVar11;
            pFVar35[-1].SpawnTransform.Translation.ZW.m128d_f64[0] = dVar12;
            pFVar35[-1].SpawnTransform.Translation.ZW.m128d_f64[1] = dVar13;
            pFVar35[-1].SpawnTransform.Scale3D.XY.m128d_f64[0] = dVar14;
            pFVar35[-1].SpawnTransform.Scale3D.XY.m128d_f64[1] = dVar15;
            pFVar35[-1].SpawnTransform.Scale3D.ZW.m128d_f64[0] = dVar16;
            pFVar35[-1].SpawnTransform.Scale3D.ZW.m128d_f64[1] = dVar17;
            pFVar35[-1].Tags.AllocatorInstance.Data = pFVar18;
            pFVar35[-1].Tags.ArrayNum = iVar29;
            pFVar35[-1].Tags.ArrayMax = iVar30;
          } while( true );
        }
        for (; pFVar2 = pFVar40, pFVar36 = pFVar40, pFVar40 < pFVar38; pFVar38 = pFVar38 + -1) {
          while (pFVar34 = pFVar2, pFVar2 = pFVar36 + 1, pFVar2 <= pFVar38) {
            uVar3 = pFVar36[1].Guid.A;
            uVar4 = (pFVar34->Guid).A;
            if (uVar4 < uVar3) {
              bVar31 = true;
            }
            else if (uVar3 < uVar4) {
              bVar31 = false;
            }
            else {
              uVar3 = pFVar36[1].Guid.B;
              uVar4 = (pFVar34->Guid).B;
              if (uVar4 < uVar3) {
                bVar31 = true;
              }
              else if (uVar3 < uVar4) {
                bVar31 = false;
              }
              else {
                uVar3 = pFVar36[1].Guid.C;
                uVar4 = (pFVar34->Guid).C;
                if (uVar4 < uVar3) {
                  bVar31 = true;
                }
                else if (uVar3 < uVar4) {
                  bVar31 = false;
                }
                else {
                  bVar31 = (pFVar34->Guid).D < pFVar36[1].Guid.D;
                }
              }
            }
            pFVar36 = pFVar2;
            if (!bVar31) {
              pFVar2 = pFVar34;
            }
          }
          local_438 = (pFVar34->SpawnTransform).Rotation.XY.m128d_f64[0];
          dStack_430 = (pFVar34->SpawnTransform).Rotation.XY.m128d_f64[1];
          local_428 = (pFVar34->SpawnTransform).Rotation.ZW.m128d_f64[0];
          dStack_420 = (pFVar34->SpawnTransform).Rotation.ZW.m128d_f64[1];
          local_418 = (pFVar34->SpawnTransform).Translation.XY.m128d_f64[0];
          dStack_410 = (pFVar34->SpawnTransform).Translation.XY.m128d_f64[1];
          local_408 = (pFVar34->SpawnTransform).Translation.ZW.m128d_f64[0];
          dStack_400 = (pFVar34->SpawnTransform).Translation.ZW.m128d_f64[1];
          local_3f8 = (pFVar34->SpawnTransform).Scale3D.XY.m128d_f64[0];
          dStack_3f0 = (pFVar34->SpawnTransform).Scale3D.XY.m128d_f64[1];
          local_3e8 = (pFVar34->SpawnTransform).Scale3D.ZW.m128d_f64[0];
          dStack_3e0 = (pFVar34->SpawnTransform).Scale3D.ZW.m128d_f64[1];
          local_3d8 = (pFVar34->Tags).AllocatorInstance.Data;
          dStack_3d0 = *(double *)&(pFVar34->Tags).ArrayNum;
          local_3c8 = *(double *)&pFVar34->bContinuouslyRespawn;
          TStack_3c0 = (pFVar34->DynamicBinding_DEPRECATED).Function.field0_0x0;
          local_3b8 = *(double *)&(pFVar34->DynamicBinding_DEPRECATED).ResolveParamsProperty;
          dStack_3b0 = *(double *)
                        &(pFVar34->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
          local_3a8 = *(double *)
                       &(pFVar34->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
          dStack_3a0 = *(double *)
                        &(pFVar34->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
          local_398 = *(double *)&pFVar34->Guid;
          dStack_390 = *(double *)&(pFVar34->Guid).C;
          local_388 = (pFVar34->Name).Data.AllocatorInstance.Data;
          dStack_380 = *(double *)&(pFVar34->Name).Data.ArrayNum;
          local_378 = (pFVar34->ObjectTemplate).field0_0x0;
          pFStack_370 = (pFVar34->ChildPossessables).AllocatorInstance.Data;
          local_368 = *(double *)&(pFVar34->ChildPossessables).ArrayNum;
          dStack_360 = *(double *)&pFVar34->Ownership;
          local_358 = *(double *)&(pFVar34->LevelName).Number;
          dStack_350 = *(double *)&pFVar34->field_0xe8;
          dVar6 = (pFVar38->SpawnTransform).Rotation.XY.m128d_f64[1];
          (pFVar34->SpawnTransform).Rotation.XY.m128d_f64[0] =
               (pFVar38->SpawnTransform).Rotation.XY.m128d_f64[0];
          (pFVar34->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar6;
          dVar6 = (pFVar38->SpawnTransform).Rotation.ZW.m128d_f64[1];
          (pFVar34->SpawnTransform).Rotation.ZW.m128d_f64[0] =
               (pFVar38->SpawnTransform).Rotation.ZW.m128d_f64[0];
          (pFVar34->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar6;
          dVar6 = (pFVar38->SpawnTransform).Translation.XY.m128d_f64[1];
          (pFVar34->SpawnTransform).Translation.XY.m128d_f64[0] =
               (pFVar38->SpawnTransform).Translation.XY.m128d_f64[0];
          (pFVar34->SpawnTransform).Translation.XY.m128d_f64[1] = dVar6;
          dVar6 = (pFVar38->SpawnTransform).Translation.ZW.m128d_f64[1];
          (pFVar34->SpawnTransform).Translation.ZW.m128d_f64[0] =
               (pFVar38->SpawnTransform).Translation.ZW.m128d_f64[0];
          (pFVar34->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar6;
          dVar6 = (pFVar38->SpawnTransform).Scale3D.XY.m128d_f64[1];
          (pFVar34->SpawnTransform).Scale3D.XY.m128d_f64[0] =
               (pFVar38->SpawnTransform).Scale3D.XY.m128d_f64[0];
          (pFVar34->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar6;
          dVar6 = (pFVar38->SpawnTransform).Scale3D.ZW.m128d_f64[1];
          (pFVar34->SpawnTransform).Scale3D.ZW.m128d_f64[0] =
               (pFVar38->SpawnTransform).Scale3D.ZW.m128d_f64[0];
          (pFVar34->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
          iVar41 = (pFVar38->Tags).ArrayNum;
          iVar23 = (pFVar38->Tags).ArrayMax;
          (pFVar34->Tags).AllocatorInstance.Data = (pFVar38->Tags).AllocatorInstance.Data;
          (pFVar34->Tags).ArrayNum = iVar41;
          (pFVar34->Tags).ArrayMax = iVar23;
          bVar31 = pFVar38->bNetAddressableName;
          uVar24 = *(undefined6 *)&pFVar38->field_0x72;
          TVar20 = (pFVar38->DynamicBinding_DEPRECATED).Function.field0_0x0;
          pFVar34->bContinuouslyRespawn = pFVar38->bContinuouslyRespawn;
          pFVar34->bNetAddressableName = bVar31;
          *(undefined6 *)&pFVar34->field_0x72 = uVar24;
          (pFVar34->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar20;
          uVar21 = *(undefined8 *)
                    &(pFVar38->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
          *(undefined8 *)&(pFVar34->DynamicBinding_DEPRECATED).ResolveParamsProperty =
               *(undefined8 *)&(pFVar38->DynamicBinding_DEPRECATED).ResolveParamsProperty;
          *(undefined8 *)&(pFVar34->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
               uVar21;
          uVar21 = *(undefined8 *)
                    &(pFVar38->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
          *(undefined8 *)&(pFVar34->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
               *(undefined8 *)&(pFVar38->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10
          ;
          *(undefined8 *)&(pFVar34->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
               uVar21;
          uVar3 = (pFVar38->Guid).B;
          uVar4 = (pFVar38->Guid).C;
          uVar25 = (pFVar38->Guid).D;
          (pFVar34->Guid).A = (pFVar38->Guid).A;
          (pFVar34->Guid).B = uVar3;
          (pFVar34->Guid).C = uVar4;
          (pFVar34->Guid).D = uVar25;
          iVar41 = (pFVar38->Name).Data.ArrayNum;
          iVar23 = (pFVar38->Name).Data.ArrayMax;
          (pFVar34->Name).Data.AllocatorInstance.Data = (pFVar38->Name).Data.AllocatorInstance.Data;
          (pFVar34->Name).Data.ArrayNum = iVar41;
          (pFVar34->Name).Data.ArrayMax = iVar23;
          pFVar18 = (pFVar38->ChildPossessables).AllocatorInstance.Data;
          (pFVar34->ObjectTemplate).field0_0x0 = (pFVar38->ObjectTemplate).field0_0x0;
          (pFVar34->ChildPossessables).AllocatorInstance.Data = pFVar18;
          iVar41 = (pFVar38->ChildPossessables).ArrayMax;
          EVar26 = pFVar38->Ownership;
          uVar27 = *(undefined3 *)&pFVar38->field_0xd9;
          FVar28.Value = (pFVar38->LevelName).ComparisonIndex.Value;
          (pFVar34->ChildPossessables).ArrayNum = (pFVar38->ChildPossessables).ArrayNum;
          (pFVar34->ChildPossessables).ArrayMax = iVar41;
          pFVar34->Ownership = EVar26;
          *(undefined3 *)&pFVar34->field_0xd9 = uVar27;
          (pFVar34->LevelName).ComparisonIndex = (FNameEntryId)FVar28.Value;
          uVar21 = *(undefined8 *)&pFVar38->field_0xe8;
          *(undefined8 *)&(pFVar34->LevelName).Number = *(undefined8 *)&(pFVar38->LevelName).Number;
          *(undefined8 *)&pFVar34->field_0xe8 = uVar21;
          (pFVar38->SpawnTransform).Rotation.XY.m128d_f64[0] = local_438;
          (pFVar38->SpawnTransform).Rotation.XY.m128d_f64[1] = dStack_430;
          (pFVar38->SpawnTransform).Rotation.ZW.m128d_f64[0] = local_428;
          (pFVar38->SpawnTransform).Rotation.ZW.m128d_f64[1] = dStack_420;
          (pFVar38->SpawnTransform).Translation.XY.m128d_f64[0] = local_418;
          (pFVar38->SpawnTransform).Translation.XY.m128d_f64[1] = dStack_410;
          (pFVar38->SpawnTransform).Translation.ZW.m128d_f64[0] = local_408;
          (pFVar38->SpawnTransform).Translation.ZW.m128d_f64[1] = dStack_400;
          (pFVar38->SpawnTransform).Scale3D.XY.m128d_f64[0] = local_3f8;
          (pFVar38->SpawnTransform).Scale3D.XY.m128d_f64[1] = dStack_3f0;
          (pFVar38->SpawnTransform).Scale3D.ZW.m128d_f64[0] = local_3e8;
          (pFVar38->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dStack_3e0;
          (pFVar38->Tags).AllocatorInstance.Data = local_3d8;
          *(double *)&(pFVar38->Tags).ArrayNum = dStack_3d0;
          *(double *)&pFVar38->bContinuouslyRespawn = local_3c8;
          (pFVar38->DynamicBinding_DEPRECATED).Function.field0_0x0 = TStack_3c0;
          *(double *)&(pFVar38->DynamicBinding_DEPRECATED).ResolveParamsProperty = local_3b8;
          *(double *)&(pFVar38->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 =
               dStack_3b0;
          *(double *)&(pFVar38->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
               local_3a8;
          *(double *)&(pFVar38->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
               dStack_3a0;
          *(double *)&pFVar38->Guid = local_398;
          *(double *)&(pFVar38->Guid).C = dStack_390;
          (pFVar38->Name).Data.AllocatorInstance.Data = local_388;
          *(double *)&(pFVar38->Name).Data.ArrayNum = dStack_380;
          (pFVar38->ObjectTemplate).field0_0x0 = local_378;
          (pFVar38->ChildPossessables).AllocatorInstance.Data = pFStack_370;
          *(double *)&(pFVar38->ChildPossessables).ArrayNum = local_368;
          *(double *)&pFVar38->Ownership = dStack_360;
          *(double *)&(pFVar38->LevelName).Number = local_358;
          *(double *)&pFVar38->field_0xe8 = dStack_350;
        }
        goto LAB_1461777b2;
      }
LAB_146177308:
      local_468[0] = param_3;
      local_460.Predicate = param_4.Predicate;
      local_440 = pFVar2;
      if (iVar41 < 0) {
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar31) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_1461775a6:
        local_458[0].Predicate = &local_460;
        HeapifyInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>_>
                  (pFVar36,iVar41,param_3,&local_460);
        iVar41 = iVar41 + -1;
        if (0 < iVar41) {
          lVar32 = (longlong)iVar41 * 0xf0;
          do {
            local_438 = (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[0];
            dStack_430 = (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[1];
            pdVar1 = (double *)((longlong)(pFVar36->SpawnTransform).Rotation.XY.m128d_f64 + lVar32);
            local_428 = (pFVar36->SpawnTransform).Rotation.ZW.m128d_f64[0];
            dStack_420 = (pFVar36->SpawnTransform).Rotation.ZW.m128d_f64[1];
            local_418 = (pFVar36->SpawnTransform).Translation.XY.m128d_f64[0];
            dStack_410 = (pFVar36->SpawnTransform).Translation.XY.m128d_f64[1];
            local_408 = (pFVar36->SpawnTransform).Translation.ZW.m128d_f64[0];
            dStack_400 = (pFVar36->SpawnTransform).Translation.ZW.m128d_f64[1];
            local_3f8 = (pFVar36->SpawnTransform).Scale3D.XY.m128d_f64[0];
            dStack_3f0 = (pFVar36->SpawnTransform).Scale3D.XY.m128d_f64[1];
            local_3e8 = (pFVar36->SpawnTransform).Scale3D.ZW.m128d_f64[0];
            dStack_3e0 = (pFVar36->SpawnTransform).Scale3D.ZW.m128d_f64[1];
            local_3d8 = (pFVar36->Tags).AllocatorInstance.Data;
            dStack_3d0 = *(double *)&(pFVar36->Tags).ArrayNum;
            local_3c8 = *(double *)&pFVar36->bContinuouslyRespawn;
            TStack_3c0 = (pFVar36->DynamicBinding_DEPRECATED).Function.field0_0x0;
            local_3b8 = *(double *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty;
            dStack_3b0 = *(double *)
                          &(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
            local_3a8 = *(double *)
                         &(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
            dStack_3a0 = *(double *)
                          &(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
            local_398 = *(double *)&pFVar36->Guid;
            dStack_390 = *(double *)&(pFVar36->Guid).C;
            local_388 = (pFVar36->Name).Data.AllocatorInstance.Data;
            dStack_380 = *(double *)&(pFVar36->Name).Data.ArrayNum;
            local_378 = (pFVar36->ObjectTemplate).field0_0x0;
            pFStack_370 = (pFVar36->ChildPossessables).AllocatorInstance.Data;
            local_368 = *(double *)&(pFVar36->ChildPossessables).ArrayNum;
            dStack_360 = *(double *)&pFVar36->Ownership;
            local_358 = *(double *)&(pFVar36->LevelName).Number;
            dStack_350 = *(double *)&pFVar36->field_0xe8;
            dVar6 = pdVar1[1];
            (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[0] = *pdVar1;
            (pFVar36->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar6;
            dVar6 = pdVar1[3];
            (pFVar36->SpawnTransform).Rotation.ZW.m128d_f64[0] = pdVar1[2];
            (pFVar36->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar6;
            dVar6 = pdVar1[5];
            (pFVar36->SpawnTransform).Translation.XY.m128d_f64[0] = pdVar1[4];
            (pFVar36->SpawnTransform).Translation.XY.m128d_f64[1] = dVar6;
            dVar6 = pdVar1[7];
            (pFVar36->SpawnTransform).Translation.ZW.m128d_f64[0] = pdVar1[6];
            (pFVar36->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar6;
            dVar6 = pdVar1[9];
            (pFVar36->SpawnTransform).Scale3D.XY.m128d_f64[0] = pdVar1[8];
            (pFVar36->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar6;
            dVar6 = pdVar1[0xb];
            (pFVar36->SpawnTransform).Scale3D.ZW.m128d_f64[0] = pdVar1[10];
            (pFVar36->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
            dVar6 = pdVar1[0xd];
            (pFVar36->Tags).AllocatorInstance.Data = (FScriptContainerElement *)pdVar1[0xc];
            *(double *)&(pFVar36->Tags).ArrayNum = dVar6;
            TVar20 = *(TObjectPtr<UFunction>_u_0 *)(pdVar1 + 0xf);
            *(double *)&pFVar36->bContinuouslyRespawn = pdVar1[0xe];
            (pFVar36->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar20;
            dVar6 = pdVar1[0x11];
            *(double *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty = pdVar1[0x10];
            *(double *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = dVar6
            ;
            dVar6 = pdVar1[0x13];
            *(double *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
                 pdVar1[0x12];
            *(double *)&(pFVar36->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 =
                 dVar6;
            dVar6 = pdVar1[0x15];
            *(double *)&pFVar36->Guid = pdVar1[0x14];
            *(double *)&(pFVar36->Guid).C = dVar6;
            dVar6 = pdVar1[0x17];
            (pFVar36->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)pdVar1[0x16];
            *(double *)&(pFVar36->Name).Data.ArrayNum = dVar6;
            pFVar18 = (FScriptContainerElement *)pdVar1[0x19];
            (pFVar36->ObjectTemplate).field0_0x0 = *(TObjectPtr<UObject>_u_0 *)(pdVar1 + 0x18);
            (pFVar36->ChildPossessables).AllocatorInstance.Data = pFVar18;
            dVar6 = pdVar1[0x1b];
            *(double *)&(pFVar36->ChildPossessables).ArrayNum = pdVar1[0x1a];
            *(double *)&pFVar36->Ownership = dVar6;
            dVar6 = pdVar1[0x1d];
            *(double *)&(pFVar36->LevelName).Number = pdVar1[0x1c];
            *(double *)&pFVar36->field_0xe8 = dVar6;
            *pdVar1 = local_438;
            pdVar1[1] = dStack_430;
            pdVar1[2] = local_428;
            pdVar1[3] = dStack_420;
            pdVar1[4] = local_418;
            pdVar1[5] = dStack_410;
            pdVar1[6] = local_408;
            pdVar1[7] = dStack_400;
            pdVar1[8] = local_3f8;
            pdVar1[9] = dStack_3f0;
            pdVar1[10] = local_3e8;
            pdVar1[0xb] = dStack_3e0;
            pdVar1[0xc] = (double)local_3d8;
            pdVar1[0xd] = dStack_3d0;
            pdVar1[0xe] = local_3c8;
            *(TObjectPtr<UFunction>_u_0 *)(pdVar1 + 0xf) = TStack_3c0;
            pdVar1[0x10] = local_3b8;
            pdVar1[0x11] = dStack_3b0;
            pdVar1[0x12] = local_3a8;
            pdVar1[0x13] = dStack_3a0;
            pdVar1[0x14] = local_398;
            pdVar1[0x15] = dStack_390;
            pdVar1[0x16] = (double)local_388;
            pdVar1[0x17] = dStack_380;
            *(TObjectPtr<UObject>_u_0 *)(pdVar1 + 0x18) = local_378;
            pdVar1[0x19] = (double)pFStack_370;
            pdVar1[0x1a] = local_368;
            pdVar1[0x1b] = dStack_360;
            pdVar1[0x1c] = local_358;
            pdVar1[0x1d] = dStack_350;
            HeapSiftDown<FMovieSceneSpawnable,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>_>
                      (pFVar36,0,iVar41,local_468,local_458);
            iVar41 = iVar41 + -1;
            lVar32 = lVar32 + -0xf0;
          } while (0 < iVar41);
        }
      }
      else if (iVar41 != 0) goto LAB_1461775a6;
LAB_1461777b2:
      ppFVar39 = ppFVar39 + -3;
    } while (&local_348 <= ppFVar39);
  }
  return;
LAB_14617708c:
  local_438 = (pFVar40->SpawnTransform).Rotation.XY.m128d_f64[0];
  dStack_430 = (pFVar40->SpawnTransform).Rotation.XY.m128d_f64[1];
  local_428 = (pFVar40->SpawnTransform).Rotation.ZW.m128d_f64[0];
  dStack_420 = (pFVar40->SpawnTransform).Rotation.ZW.m128d_f64[1];
  local_418 = (pFVar40->SpawnTransform).Translation.XY.m128d_f64[0];
  dStack_410 = (pFVar40->SpawnTransform).Translation.XY.m128d_f64[1];
  local_408 = (pFVar40->SpawnTransform).Translation.ZW.m128d_f64[0];
  dStack_400 = (pFVar40->SpawnTransform).Translation.ZW.m128d_f64[1];
  local_3f8 = (pFVar40->SpawnTransform).Scale3D.XY.m128d_f64[0];
  dStack_3f0 = (pFVar40->SpawnTransform).Scale3D.XY.m128d_f64[1];
  local_3e8 = (pFVar40->SpawnTransform).Scale3D.ZW.m128d_f64[0];
  dStack_3e0 = (pFVar40->SpawnTransform).Scale3D.ZW.m128d_f64[1];
  local_3d8 = (pFVar40->Tags).AllocatorInstance.Data;
  dStack_3d0 = *(double *)&(pFVar40->Tags).ArrayNum;
  local_3c8 = *(double *)&pFVar40->bContinuouslyRespawn;
  TStack_3c0 = (pFVar40->DynamicBinding_DEPRECATED).Function.field0_0x0;
  local_3b8 = *(double *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty;
  dStack_3b0 = *(double *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8;
  local_3a8 = *(double *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10;
  dStack_3a0 = *(double *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18;
  local_398 = *(double *)&pFVar40->Guid;
  dStack_390 = *(double *)&(pFVar40->Guid).C;
  local_388 = (pFVar40->Name).Data.AllocatorInstance.Data;
  dStack_380 = *(double *)&(pFVar40->Name).Data.ArrayNum;
  local_378 = (pFVar40->ObjectTemplate).field0_0x0;
  pFStack_370 = (pFVar40->ChildPossessables).AllocatorInstance.Data;
  local_368 = *(double *)&(pFVar40->ChildPossessables).ArrayNum;
  dStack_360 = *(double *)&pFVar40->Ownership;
  local_358 = *(double *)&(pFVar40->LevelName).Number;
  dStack_350 = *(double *)&pFVar40->field_0xe8;
  dVar6 = pFVar35[-1].SpawnTransform.Rotation.XY.m128d_f64[1];
  (pFVar40->SpawnTransform).Rotation.XY.m128d_f64[0] =
       (pFVar34->SpawnTransform).Rotation.XY.m128d_f64[0];
  (pFVar40->SpawnTransform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = pFVar35[-1].SpawnTransform.Rotation.ZW.m128d_f64[1];
  (pFVar40->SpawnTransform).Rotation.ZW.m128d_f64[0] =
       pFVar35[-1].SpawnTransform.Rotation.ZW.m128d_f64[0];
  (pFVar40->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = pFVar35[-1].SpawnTransform.Translation.XY.m128d_f64[1];
  (pFVar40->SpawnTransform).Translation.XY.m128d_f64[0] =
       pFVar35[-1].SpawnTransform.Translation.XY.m128d_f64[0];
  (pFVar40->SpawnTransform).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = pFVar35[-1].SpawnTransform.Translation.ZW.m128d_f64[1];
  (pFVar40->SpawnTransform).Translation.ZW.m128d_f64[0] =
       pFVar35[-1].SpawnTransform.Translation.ZW.m128d_f64[0];
  (pFVar40->SpawnTransform).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = pFVar35[-1].SpawnTransform.Scale3D.XY.m128d_f64[1];
  (pFVar40->SpawnTransform).Scale3D.XY.m128d_f64[0] =
       pFVar35[-1].SpawnTransform.Scale3D.XY.m128d_f64[0];
  (pFVar40->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = pFVar35[-1].SpawnTransform.Scale3D.ZW.m128d_f64[1];
  (pFVar40->SpawnTransform).Scale3D.ZW.m128d_f64[0] =
       pFVar35[-1].SpawnTransform.Scale3D.ZW.m128d_f64[0];
  (pFVar40->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
  iVar41 = pFVar35[-1].Tags.ArrayNum;
  iVar23 = pFVar35[-1].Tags.ArrayMax;
  (pFVar40->Tags).AllocatorInstance.Data = pFVar35[-1].Tags.AllocatorInstance.Data;
  (pFVar40->Tags).ArrayNum = iVar41;
  (pFVar40->Tags).ArrayMax = iVar23;
  bVar31 = pFVar35[-1].bNetAddressableName;
  uVar24 = *(undefined6 *)&pFVar35[-1].field_0x72;
  TVar20 = pFVar35[-1].DynamicBinding_DEPRECATED.Function.field0_0x0;
  pFVar40->bContinuouslyRespawn = pFVar35[-1].bContinuouslyRespawn;
  pFVar40->bNetAddressableName = bVar31;
  *(undefined6 *)&pFVar40->field_0x72 = uVar24;
  (pFVar40->DynamicBinding_DEPRECATED).Function.field0_0x0 = TVar20;
  uVar21 = *(undefined8 *)&pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8;
  *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty =
       *(undefined8 *)&pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty;
  *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = uVar21;
  uVar21 = *(undefined8 *)&pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18;
  *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 =
       *(undefined8 *)&pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10;
  *(undefined8 *)&(pFVar40->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = uVar21;
  uVar3 = pFVar35[-1].Guid.B;
  uVar4 = pFVar35[-1].Guid.C;
  uVar25 = pFVar35[-1].Guid.D;
  (pFVar40->Guid).A = pFVar35[-1].Guid.A;
  (pFVar40->Guid).B = uVar3;
  (pFVar40->Guid).C = uVar4;
  (pFVar40->Guid).D = uVar25;
  iVar41 = pFVar35[-1].Name.Data.ArrayNum;
  iVar23 = pFVar35[-1].Name.Data.ArrayMax;
  (pFVar40->Name).Data.AllocatorInstance.Data = pFVar35[-1].Name.Data.AllocatorInstance.Data;
  (pFVar40->Name).Data.ArrayNum = iVar41;
  (pFVar40->Name).Data.ArrayMax = iVar23;
  pFVar18 = pFVar35[-1].ChildPossessables.AllocatorInstance.Data;
  (pFVar40->ObjectTemplate).field0_0x0 = pFVar35[-1].ObjectTemplate.field0_0x0;
  (pFVar40->ChildPossessables).AllocatorInstance.Data = pFVar18;
  iVar41 = pFVar35[-1].ChildPossessables.ArrayMax;
  EVar26 = pFVar35[-1].Ownership;
  uVar27 = *(undefined3 *)&pFVar35[-1].field_0xd9;
  FVar28.Value = pFVar35[-1].LevelName.ComparisonIndex.Value;
  (pFVar40->ChildPossessables).ArrayNum = pFVar35[-1].ChildPossessables.ArrayNum;
  (pFVar40->ChildPossessables).ArrayMax = iVar41;
  pFVar40->Ownership = EVar26;
  *(undefined3 *)&pFVar40->field_0xd9 = uVar27;
  (pFVar40->LevelName).ComparisonIndex = (FNameEntryId)FVar28.Value;
  uVar21 = *(undefined8 *)&pFVar35[-1].field_0xe8;
  *(undefined8 *)&(pFVar40->LevelName).Number = *(undefined8 *)&pFVar35[-1].LevelName.Number;
  *(undefined8 *)&pFVar40->field_0xe8 = uVar21;
  (pFVar34->SpawnTransform).Rotation.XY.m128d_f64[0] = local_438;
  pFVar35[-1].SpawnTransform.Rotation.XY.m128d_f64[1] = dStack_430;
  pFVar35[-1].SpawnTransform.Rotation.ZW.m128d_f64[0] = local_428;
  pFVar35[-1].SpawnTransform.Rotation.ZW.m128d_f64[1] = dStack_420;
  pFVar35[-1].SpawnTransform.Translation.XY.m128d_f64[0] = local_418;
  pFVar35[-1].SpawnTransform.Translation.XY.m128d_f64[1] = dStack_410;
  pFVar35[-1].SpawnTransform.Translation.ZW.m128d_f64[0] = local_408;
  pFVar35[-1].SpawnTransform.Translation.ZW.m128d_f64[1] = dStack_400;
  pFVar35[-1].SpawnTransform.Scale3D.XY.m128d_f64[0] = local_3f8;
  pFVar35[-1].SpawnTransform.Scale3D.XY.m128d_f64[1] = dStack_3f0;
  pFVar35[-1].SpawnTransform.Scale3D.ZW.m128d_f64[0] = local_3e8;
  pFVar35[-1].SpawnTransform.Scale3D.ZW.m128d_f64[1] = dStack_3e0;
  pFVar35[-1].Tags.AllocatorInstance.Data = local_3d8;
  *(double *)&pFVar35[-1].Tags.ArrayNum = dStack_3d0;
  local_440._0_4_ = (int)local_440 + -1;
  *(double *)&pFVar35[-1].bContinuouslyRespawn = local_3c8;
  pFVar35[-1].DynamicBinding_DEPRECATED.Function.field0_0x0 = TStack_3c0;
  *(double *)&pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty = local_3b8;
  *(double *)&pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x8 = dStack_3b0;
  *(double *)&pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x10 = local_3a8;
  *(double *)&pFVar35[-1].DynamicBinding_DEPRECATED.ResolveParamsProperty.field_0x18 = dStack_3a0;
  *(double *)&pFVar35[-1].Guid = local_398;
  *(double *)&pFVar35[-1].Guid.C = dStack_390;
  pFVar35[-1].Name.Data.AllocatorInstance.Data = local_388;
  *(double *)&pFVar35[-1].Name.Data.ArrayNum = dStack_380;
  pFVar35[-1].ObjectTemplate.field0_0x0 = local_378;
  pFVar35[-1].ChildPossessables.AllocatorInstance.Data = pFStack_370;
  *(double *)&pFVar35[-1].ChildPossessables.ArrayNum = local_368;
  *(double *)&pFVar35[-1].Ownership = dStack_360;
  *(double *)&pFVar35[-1].LevelName.Number = local_358;
  *(double *)&pFVar35[-1].field_0xe8 = dStack_350;
  lVar32 = (longlong)pFVar34 + (-0xf0 - (longlong)pFVar40);
  lVar32 = lVar32 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar32),8);
  lVar33 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar38 - (longlong)pFVar36),8) +
           ((longlong)pFVar38 - (longlong)pFVar36);
  if ((lVar32 >> 7) - (lVar32 >> 0x3f) < (lVar33 >> 7) - (lVar33 >> 0x3f)) {
    if (pFVar36 < pFVar38) {
      *ppFVar39 = pFVar36;
      ppFVar39[1] = pFVar38;
      *(int *)(ppFVar39 + 2) = (int)local_440;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar34 <= pFVar40 + 1) goto LAB_1461777b2;
    pFVar38 = pFVar35 + -2;
    pFVar36 = pFVar40;
  }
  else {
    if (pFVar40 + 1 < pFVar34) {
      *ppFVar39 = pFVar40;
      ppFVar39[1] = pFVar35 + -2;
      *(int *)(ppFVar39 + 2) = (int)local_440;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar38 <= pFVar36) goto LAB_1461777b2;
  }
  lVar32 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar38 - (longlong)pFVar36),8) +
           ((longlong)pFVar38 - (longlong)pFVar36);
  iVar41 = ((int)(lVar32 >> 7) - (int)(lVar32 >> 0x3f)) + 1;
  pFVar40 = pFVar36;
  if ((int)local_440 == 0) goto LAB_146177308;
  goto LAB_146176ca3;
}

// IntroSortInternal<FMovieSceneTrackInstanceInput,int,FIdentityFunctor,TLess<void>_> @ 146177810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<FMovieSceneTrackInstanceInput,int,FIdentityFunctor,TLess<void>_>
          (FMovieSceneTrackInstanceInput *param_1,int param_2,FIdentityFunctor param_3,
          TLess<void> param_4)

{
  FMovieSceneTrackInstanceInput *pFVar1;
  UMovieSceneSection *pUVar2;
  UMovieSceneSection *pUVar3;
  TObjectPtr<UMovieSceneSection>_u_0 TVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined3 uVar8;
  TObjectPtr<UMovieSceneSection>_u_0 TVar9;
  FInstanceHandle FVar10;
  undefined3 uVar11;
  FInstanceHandle FVar12;
  bool bVar13;
  undefined3 uVar14;
  int iVar15;
  FMovieSceneTrackInstanceInput *pFVar16;
  FMovieSceneTrackInstanceInput **ppFVar17;
  FMovieSceneTrackInstanceInput *pFVar18;
  FMovieSceneTrackInstanceInput *pFVar19;
  FMovieSceneTrackInstanceInput *pFVar20;
  FMovieSceneTrackInstanceInput *pFVar21;
  FMovieSceneTrackInstanceInput *pFVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_368 [48];
  FMovieSceneTrackInstanceInput *local_338;
  FMovieSceneTrackInstanceInput *local_328;
  FMovieSceneTrackInstanceInput *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar24;
    memset(local_310,0,0x2e8);
    ppFVar17 = &local_328;
    do {
      pFVar20 = ppFVar17[1];
      pFVar22 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      iVar15 = (int)((longlong)pFVar20 - (longlong)pFVar22 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar21 = pFVar22;
      if ((int)local_338 != 0) {
LAB_1461778c0:
        if (8 < iVar15) {
          FVar10 = pFVar21->InstanceHandle;
          bVar23 = pFVar21->bInputHasBeenProcessed;
          uVar11 = *(undefined3 *)&pFVar21->field_0xd;
          pFVar18 = pFVar20 + 1;
          pFVar22 = pFVar21 + iVar15 / 2;
          TVar4 = (pFVar22->Section).field0_0x0;
          FVar12 = pFVar22->InstanceHandle;
          bVar13 = pFVar22->bInputHasBeenProcessed;
          uVar14 = *(undefined3 *)&pFVar22->field_0xd;
          pFVar22 = pFVar21 + iVar15 / 2;
          (pFVar22->Section).field0_0x0 = (pFVar21->Section).field0_0x0;
          pFVar22->InstanceHandle = FVar10;
          pFVar22->bInputHasBeenProcessed = bVar23;
          *(undefined3 *)&pFVar22->field_0xd = uVar11;
          (pFVar21->Section).field0_0x0 = TVar4;
          pFVar21->InstanceHandle = FVar12;
          pFVar21->bInputHasBeenProcessed = bVar13;
          *(undefined3 *)&pFVar21->field_0xd = uVar14;
          pFVar22 = pFVar21;
LAB_1461778f0:
          pFVar16 = pFVar22;
          pFVar22 = pFVar16 + 1;
          if (pFVar22 <= pFVar20) goto code_r0x0001461778f9;
          goto LAB_146177911;
        }
        for (; pFVar22 = pFVar21, pFVar1 = pFVar21, pFVar21 < pFVar20; pFVar20 = pFVar20 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar20) {
            pUVar2 = (pFVar1->Section).field0_0x0.DebugPtr;
            pUVar3 = (pFVar22->Section).field0_0x0.DebugPtr;
            bVar23 = pUVar3 < pUVar2;
            if (pUVar3 == pUVar2) {
              bVar23 = (pFVar22->InstanceHandle).InstanceID < (pFVar1->InstanceHandle).InstanceID;
            }
            if (bVar23) {
              pFVar22 = pFVar1;
            }
          }
          TVar4 = (pFVar22->Section).field0_0x0;
          FVar12 = pFVar22->InstanceHandle;
          bVar13 = pFVar22->bInputHasBeenProcessed;
          uVar14 = *(undefined3 *)&pFVar22->field_0xd;
          FVar10 = pFVar20->InstanceHandle;
          bVar23 = pFVar20->bInputHasBeenProcessed;
          uVar11 = *(undefined3 *)&pFVar20->field_0xd;
          (pFVar22->Section).field0_0x0 = (pFVar20->Section).field0_0x0;
          pFVar22->InstanceHandle = FVar10;
          pFVar22->bInputHasBeenProcessed = bVar23;
          *(undefined3 *)&pFVar22->field_0xd = uVar11;
          (pFVar20->Section).field0_0x0 = TVar4;
          pFVar20->InstanceHandle = FVar12;
          pFVar20->bInputHasBeenProcessed = bVar13;
          *(undefined3 *)&pFVar20->field_0xd = uVar14;
        }
        goto LAB_1461779e2;
      }
LAB_1461779d0:
      local_338 = pFVar1;
      HeapSortInternal<FMovieSceneTrackInstanceInput,int,FIdentityFunctor,TLess<void>_>
                (pFVar22,iVar15,param_3,param_4);
LAB_1461779e2:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_328 <= ppFVar17);
  }
  return;
code_r0x0001461778f9:
  pUVar2 = (pFVar22->Section).field0_0x0.DebugPtr;
  pUVar3 = (pFVar21->Section).field0_0x0.DebugPtr;
  bVar23 = pUVar3 < pUVar2;
  if (pUVar3 == pUVar2) {
    bVar23 = (pFVar21->InstanceHandle).InstanceID < pFVar16[1].InstanceHandle.InstanceID;
  }
  if (!bVar23) goto LAB_1461778f0;
LAB_146177911:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar21) break;
    pUVar2 = (pFVar21->Section).field0_0x0.DebugPtr;
    pUVar3 = (pFVar18->Section).field0_0x0.DebugPtr;
    bVar23 = pUVar3 < pUVar2;
    if (pUVar3 == pUVar2) {
      bVar23 = pFVar19[-1].InstanceHandle.InstanceID < (pFVar21->InstanceHandle).InstanceID;
    }
  } while (!bVar23);
  TVar4 = (pFVar18->Section).field0_0x0;
  uVar5 = pFVar19[-1].InstanceHandle.InstanceID;
  uVar6 = pFVar19[-1].InstanceHandle.InstanceSerial;
  uVar7 = pFVar19[-1].bInputHasBeenProcessed;
  uVar8 = *(undefined3 *)&pFVar19[-1].field_0xd;
  if (pFVar22 <= pFVar18) {
    TVar9 = (pFVar22->Section).field0_0x0;
    FVar10 = pFVar16[1].InstanceHandle;
    bVar23 = pFVar16[1].bInputHasBeenProcessed;
    uVar11 = *(undefined3 *)&pFVar16[1].field_0xd;
    (pFVar22->Section).field0_0x0 = TVar4;
    pFVar16[1].InstanceHandle.InstanceID = uVar5;
    pFVar16[1].InstanceHandle.InstanceSerial = uVar6;
    pFVar16[1].bInputHasBeenProcessed = (bool)uVar7;
    *(undefined3 *)&pFVar16[1].field_0xd = uVar8;
    (pFVar18->Section).field0_0x0 = TVar9;
    pFVar19[-1].InstanceHandle = FVar10;
    pFVar19[-1].bInputHasBeenProcessed = bVar23;
    *(undefined3 *)&pFVar19[-1].field_0xd = uVar11;
    goto LAB_1461778f0;
  }
  TVar9 = (pFVar21->Section).field0_0x0;
  FVar10 = pFVar21->InstanceHandle;
  bVar23 = pFVar21->bInputHasBeenProcessed;
  uVar11 = *(undefined3 *)&pFVar21->field_0xd;
  local_338._0_4_ = (int)local_338 + -1;
  (pFVar21->Section).field0_0x0 = TVar4;
  (pFVar21->InstanceHandle).InstanceID = uVar5;
  (pFVar21->InstanceHandle).InstanceSerial = uVar6;
  pFVar21->bInputHasBeenProcessed = (bool)uVar7;
  *(undefined3 *)&pFVar21->field_0xd = uVar8;
  (pFVar18->Section).field0_0x0 = TVar9;
  pFVar19[-1].InstanceHandle = FVar10;
  pFVar19[-1].bInputHasBeenProcessed = bVar23;
  *(undefined3 *)&pFVar19[-1].field_0xd = uVar11;
  if ((longlong)((longlong)pFVar18 + (-0x10 - (longlong)pFVar21) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar20 - (longlong)pFVar22 & 0xfffffffffffffff0U)) {
    if (pFVar22 < pFVar20) {
      *ppFVar17 = pFVar22;
      ppFVar17[1] = pFVar20;
      *(int *)(ppFVar17 + 2) = (int)local_338;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar18 <= pFVar21 + 1) goto LAB_1461779e2;
    pFVar20 = pFVar19 + -2;
    pFVar22 = pFVar21;
  }
  else {
    if (pFVar21 + 1 < pFVar18) {
      *ppFVar17 = pFVar21;
      ppFVar17[1] = pFVar19 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_338;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar20 <= pFVar22) goto LAB_1461779e2;
  }
  iVar15 = (int)((longlong)pFVar20 - (longlong)pFVar22 >> 4) + 1;
  pFVar21 = pFVar22;
  if ((int)local_338 == 0) goto LAB_1461779d0;
  goto LAB_1461778c0;
}

// IntroSortInternal<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,int,FIdentityFunctor,bool_(__cdecl*)(TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&)> @ 146177a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,int,FIdentityFunctor,bool_(__cdecl*)(TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&)>
          (TInlineValue<IMovieSceneSharedExecutionToken,32,8> *param_1,int param_2,
          FIdentityFunctor param_3,
          _func___cdecl_bool_TInlineValue<IMovieSceneSharedExecutionToken,32,8>_ptr_TInlineValue<IMovieSceneSharedExecutionToken,32,8>_ptr
          *param_4)

{
  uchar *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar11;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar12;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar13;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar14;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar15;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> **ppTVar16;
  int iVar17;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *pTVar18;
  float fVar19;
  undefined1 auStack_398 [48];
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *local_368;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *local_358;
  TInlineValue<IMovieSceneSharedExecutionToken,32,8> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar19;
    memset(local_340,0,0x2e8);
    ppTVar16 = &local_358;
    do {
      pTVar18 = ppTVar16[1];
      pTVar12 = *ppTVar16;
      local_368 = ppTVar16[2];
      iVar10 = (int)(((longlong)pTVar18 - (longlong)pTVar12) / 0x28) + 1;
      pTVar11 = pTVar12;
      iVar17 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_146177b60:
        if (8 < iVar10) {
          uVar4 = *(undefined8 *)((pTVar11->Data).Pad + 8);
          pTVar13 = pTVar18 + 1;
          iVar10 = iVar10 / 2;
          uVar3 = *(undefined8 *)pTVar11[iVar10].Data.Pad;
          uVar5 = *(undefined8 *)(pTVar11[iVar10].Data.Pad + 8);
          puVar1 = pTVar11[iVar10].Data.Pad + 0x10;
          uVar6 = *(undefined8 *)puVar1;
          uVar7 = *(undefined8 *)(puVar1 + 8);
          uVar2 = *(undefined8 *)&pTVar11[iVar10].field_0x20;
          *(undefined8 *)pTVar11[iVar10].Data.Pad = *(undefined8 *)(pTVar11->Data).Pad;
          *(undefined8 *)(pTVar11[iVar10].Data.Pad + 8) = uVar4;
          uVar4 = *(undefined8 *)((pTVar11->Data).Pad + 0x18);
          puVar1 = pTVar11[iVar10].Data.Pad + 0x10;
          *(undefined8 *)puVar1 = *(undefined8 *)((pTVar11->Data).Pad + 0x10);
          *(undefined8 *)(puVar1 + 8) = uVar4;
          *(undefined8 *)&pTVar11[iVar10].field_0x20 = *(undefined8 *)&pTVar11->field_0x20;
          *(undefined8 *)(pTVar11->Data).Pad = uVar3;
          *(undefined8 *)((pTVar11->Data).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar11->Data).Pad + 0x10) = uVar6;
          *(undefined8 *)((pTVar11->Data).Pad + 0x18) = uVar7;
          *(undefined8 *)&pTVar11->field_0x20 = uVar2;
          pTVar12 = pTVar11;
LAB_146177bc0:
          pTVar15 = pTVar12;
          pTVar12 = pTVar15 + 1;
          if (pTVar12 <= pTVar18) goto code_r0x000146177bc9;
          goto LAB_146177bd6;
        }
        for (; pTVar13 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar18; pTVar18 = pTVar18 + -1) {
          while (pTVar15 = pTVar13, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar18) {
            bVar9 = (*param_4)(pTVar15,pTVar12);
            pTVar13 = pTVar12;
            if (!bVar9) {
              pTVar13 = pTVar15;
            }
          }
          uVar4 = *(undefined8 *)(pTVar15->Data).Pad;
          uVar3 = *(undefined8 *)((pTVar15->Data).Pad + 8);
          uVar2 = *(undefined8 *)&pTVar15->field_0x20;
          uVar5 = *(undefined8 *)((pTVar15->Data).Pad + 0x10);
          uVar6 = *(undefined8 *)((pTVar15->Data).Pad + 0x18);
          uVar7 = *(undefined8 *)((pTVar18->Data).Pad + 8);
          *(undefined8 *)(pTVar15->Data).Pad = *(undefined8 *)(pTVar18->Data).Pad;
          *(undefined8 *)((pTVar15->Data).Pad + 8) = uVar7;
          uVar7 = *(undefined8 *)((pTVar18->Data).Pad + 0x18);
          *(undefined8 *)((pTVar15->Data).Pad + 0x10) = *(undefined8 *)((pTVar18->Data).Pad + 0x10);
          *(undefined8 *)((pTVar15->Data).Pad + 0x18) = uVar7;
          *(undefined8 *)&pTVar15->field_0x20 = *(undefined8 *)&pTVar18->field_0x20;
          *(undefined8 *)(pTVar18->Data).Pad = uVar4;
          *(undefined8 *)((pTVar18->Data).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar18->Data).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar18->Data).Pad + 0x18) = uVar6;
          *(undefined8 *)&pTVar18->field_0x20 = uVar2;
        }
        goto LAB_146177d2a;
      }
LAB_146177d11:
      HeapSortInternal<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,int,FIdentityFunctor,bool_(__cdecl*)(TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&)>
                (pTVar12,iVar10,param_3,param_4);
LAB_146177d2a:
      ppTVar16 = ppTVar16 + -3;
    } while (&local_358 <= ppTVar16);
  }
  return;
code_r0x000146177bc9:
  bVar9 = (*param_4)(pTVar11,pTVar12);
  if (!bVar9) goto LAB_146177bc0;
LAB_146177bd6:
  do {
    pTVar14 = pTVar13;
    pTVar13 = pTVar14 + -1;
    if (pTVar13 <= pTVar11) break;
    bVar9 = (*param_4)(pTVar13,pTVar11);
  } while (!bVar9);
  uVar2 = *(undefined8 *)(pTVar13->Data).Pad;
  uVar4 = *(undefined8 *)(pTVar14[-1].Data.Pad + 8);
  if (pTVar12 <= pTVar13) {
    uVar5 = *(undefined8 *)(pTVar12->Data).Pad;
    uVar6 = *(undefined8 *)(pTVar15[1].Data.Pad + 8);
    uVar7 = *(undefined8 *)(pTVar15[1].Data.Pad + 0x10);
    uVar8 = *(undefined8 *)(pTVar15[1].Data.Pad + 0x18);
    uVar3 = *(undefined8 *)&pTVar15[1].field_0x20;
    *(undefined8 *)(pTVar12->Data).Pad = uVar2;
    *(undefined8 *)(pTVar15[1].Data.Pad + 8) = uVar4;
    uVar2 = *(undefined8 *)(pTVar14[-1].Data.Pad + 0x18);
    *(undefined8 *)(pTVar15[1].Data.Pad + 0x10) = *(undefined8 *)(pTVar14[-1].Data.Pad + 0x10);
    *(undefined8 *)(pTVar15[1].Data.Pad + 0x18) = uVar2;
    *(undefined8 *)&pTVar15[1].field_0x20 = *(undefined8 *)&pTVar14[-1].field_0x20;
    *(undefined8 *)(pTVar13->Data).Pad = uVar5;
    *(undefined8 *)(pTVar14[-1].Data.Pad + 8) = uVar6;
    *(undefined8 *)(pTVar14[-1].Data.Pad + 0x10) = uVar7;
    *(undefined8 *)(pTVar14[-1].Data.Pad + 0x18) = uVar8;
    *(undefined8 *)&pTVar14[-1].field_0x20 = uVar3;
    goto LAB_146177bc0;
  }
  uVar5 = *(undefined8 *)(pTVar11->Data).Pad;
  uVar6 = *(undefined8 *)((pTVar11->Data).Pad + 8);
  uVar7 = *(undefined8 *)((pTVar11->Data).Pad + 0x10);
  uVar8 = *(undefined8 *)((pTVar11->Data).Pad + 0x18);
  uVar3 = *(undefined8 *)&pTVar11->field_0x20;
  *(undefined8 *)(pTVar11->Data).Pad = uVar2;
  *(undefined8 *)((pTVar11->Data).Pad + 8) = uVar4;
  uVar2 = *(undefined8 *)(pTVar14[-1].Data.Pad + 0x18);
  iVar17 = iVar17 + -1;
  *(undefined8 *)((pTVar11->Data).Pad + 0x10) = *(undefined8 *)(pTVar14[-1].Data.Pad + 0x10);
  *(undefined8 *)((pTVar11->Data).Pad + 0x18) = uVar2;
  *(undefined8 *)&pTVar11->field_0x20 = *(undefined8 *)&pTVar14[-1].field_0x20;
  *(undefined8 *)(pTVar13->Data).Pad = uVar5;
  *(undefined8 *)(pTVar14[-1].Data.Pad + 8) = uVar6;
  *(undefined8 *)(pTVar14[-1].Data.Pad + 0x10) = uVar7;
  *(undefined8 *)(pTVar14[-1].Data.Pad + 0x18) = uVar8;
  *(undefined8 *)&pTVar14[-1].field_0x20 = uVar3;
  if (((longlong)pTVar13 + (-0x28 - (longlong)pTVar11)) / 0x28 <
      ((longlong)pTVar18 - (longlong)pTVar12) / 0x28) {
    if (pTVar12 < pTVar18) {
      *ppTVar16 = pTVar12;
      ppTVar16[1] = pTVar18;
      *(int *)(ppTVar16 + 2) = iVar17;
      ppTVar16 = ppTVar16 + 3;
    }
    if (pTVar13 <= pTVar11 + 1) goto LAB_146177d2a;
    pTVar18 = pTVar14 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar13) {
      *ppTVar16 = pTVar11;
      ppTVar16[1] = pTVar14 + -2;
      *(int *)(ppTVar16 + 2) = iVar17;
      ppTVar16 = ppTVar16 + 3;
    }
    if (pTVar18 <= pTVar12) goto LAB_146177d2a;
  }
  iVar10 = (int)(((longlong)pTVar18 - (longlong)pTVar12) / 0x28) + 1;
  pTVar11 = pTVar12;
  if (iVar17 == 0) goto LAB_146177d11;
  goto LAB_146177b60;
}

// IsObjectPtrEqual<UMovieSceneClock,UMovieSceneClock_*,0> @ 146177e10

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieSceneClock,UMovieSceneClock_*,0>
          (TObjectPtr<UMovieSceneClock> *param_1,UMovieSceneClock **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieSceneClock *)0x0) {
    return *param_2 == (UMovieSceneClock *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UMovieSceneSection,UMovieSceneSection_const_*,0> @ 146177e30

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieSceneSection,UMovieSceneSection_const_*,0>
          (TObjectPtr<UMovieSceneSection> *param_1,UMovieSceneSection **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieSceneSection *)0x0) {
    return *param_2 == (UMovieSceneSection *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UMovieSceneTrack,UMovieSceneTrack_*,0> @ 146177e50

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieSceneTrack,UMovieSceneTrack_*,0>
          (TObjectPtr<UMovieSceneTrack> *param_1,UMovieSceneTrack **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieSceneTrack *)0x0) {
    return *param_2 == (UMovieSceneTrack *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// Iterate_PerAllocationImpl<`UMovieSceneTrackInstanceInstantiator::OnRun'::__l6::<lambda_2>_&> @ 146177e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
::Iterate_PerAllocationImpl<_UMovieSceneTrackInstanceInstantiator::OnRun_::__l6::<lambda_2>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_2> *param_3)

{
  EComponentHeaderLockMode EVar1;
  EComponentHeaderLockMode EVar2;
  FTrackInstanceInputComponent *pFVar3;
  code *pcVar4;
  EEntityThreadingModel EVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  FEntityAllocationWriteContext local_a8 [2];
  FEntityAllocationProxy local_98;
  FEntityAllocationIteratorProxy local_88;
  FEntityAllocationProxy local_78;
  FEntityAllocationIterator local_68;
  FEntityAllocationIterator local_50;
  
  if (*(short *)&this->Accessors != -1 && *(short *)&(this->Accessors).field_0x2 != -1) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_a8,param_1);
    EVar5 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_88,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_68,local_88.Manager,local_88.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_50,local_88.Manager);
    bVar6 = FEntityAllocationIterator::operator!=(&local_68,&local_50);
    if (bVar6) {
      do {
        FEntityAllocationIterator::operator*(&local_68,&local_98);
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_98);
        if (EVar5 == NoThreading) {
          pFVar7->LockMode = LockFree;
        }
        else {
          pFVar7 = (FEntityAllocation *)0x0;
        }
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_98);
        pFVar11 = pFVar8->ComponentHeaders;
        pFVar10 = pFVar11 + pFVar8->NumComponents;
        for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 1) {
          if ((pFVar11->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_146177fca;
        }
        pFVar11 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146177fca:
        EVar1 = pFVar8->LockMode;
        if (EVar1 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
        }
        LOCK();
        pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar3 = (FTrackInstanceInputComponent *)pFVar11->Components;
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_98);
        pFVar10 = pFVar8->ComponentHeaders;
        pFVar9 = pFVar10 + pFVar8->NumComponents;
        for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 1) {
          if ((pFVar10->ComponentType).Value == *(ushort *)&this->Accessors) goto LAB_146178048;
        }
        pFVar10 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146178048:
        EVar2 = pFVar8->LockMode;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
        }
        LOCK();
        pFVar10->ScheduledAccessCount = (atomic<int>)((int)pFVar10->ScheduledAccessCount + 1);
        UNLOCK();
        local_78.Manager = local_98.Manager;
        local_78.AllocationIndex = local_98.AllocationIndex;
        local_78._12_4_ = local_98._12_4_;
        `UMovieSceneTrackInstanceInstantiator::OnRun'::__l6::<lambda_2>::operator()
                  (param_3,&local_78,(FInstanceHandle *)pFVar10->Components,pFVar3);
        LOCK();
        pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar1 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
        }
        LOCK();
        pFVar10->ScheduledAccessCount = (atomic<int>)((int)pFVar10->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar2 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
        }
        if (pFVar7 != (FEntityAllocation *)0x0) {
          pFVar7->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_68);
        bVar6 = FEntityAllocationIterator::operator!=(&local_68,&local_50);
      } while (bVar6);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_50);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_68);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneTrackInstanceInstantiator::OnCleanTaggedGarbage'::__l2::<lambda_1>_&> @ 146178130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
::
Iterate_PerEntityImpl<_UMovieSceneTrackInstanceInstantiator::OnCleanTaggedGarbage_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  uint *puVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  int iVar4;
  FMovieSceneEntityID *pFVar5;
  UObject *pUVar6;
  UMovieSceneTrackInstanceInstantiator *pUVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  EEntityThreadingModel EVar10;
  bool bVar11;
  int iVar12;
  FComponentHeader *pFVar13;
  FEntityAllocation *pFVar14;
  FComponentHeader *pFVar15;
  FComponentHeader *pFVar16;
  FComponentHeader *pFVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  int iVar20;
  FComponentHeader *pFVar21;
  FEntityAllocationIteratorProxy local_98;
  FEntityAllocationProxy local_88;
  FEntityAllocationIterator local_78;
  FEntityAllocationIterator local_60;
  FEntityAllocationWriteContext local_48 [2];
  
  if (*(short *)&(this->Accessors).field_0x2 != -1) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_48,param_1);
    EVar10 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_98,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_78,local_98.Manager,local_98.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_60,local_98.Manager);
    bVar11 = FEntityAllocationIterator::operator!=(&local_78,&local_60);
    if (bVar11) {
      do {
        pFVar21 = (FComponentHeader *)0x0;
        FEntityAllocationIterator::operator*(&local_78,&local_88);
        pFVar13 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_88);
        pFVar16 = pFVar21;
        if (EVar10 == NoThreading) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar13->Size + 4) = LockFree;
          pFVar16 = pFVar13;
        }
        pFVar14 = FEntityAllocationProxy::GetAllocation(&local_88);
        pFVar17 = pFVar14->ComponentHeaders;
        pFVar15 = pFVar17 + pFVar14->NumComponents;
        for (; pFVar17 != pFVar15; pFVar17 = pFVar17 + 1) {
          if ((pFVar17->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_146178281;
        }
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        pFVar17 = pFVar21;
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_146178281:
        EVar3 = pFVar14->LockMode;
        if (EVar3 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar17->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar17->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar17->ScheduledAccessCount).field_0x0 + 1;
        UNLOCK();
        pFVar5 = (FMovieSceneEntityID *)pFVar17->Components;
        FEntityAllocationProxy::GetAllocation(&local_88);
        uVar2 = *(ushort *)((longlong)&pFVar13->DebugComponents + 6);
        if (uVar2 != 0) {
          uVar19 = (ulonglong)uVar2;
          do {
            pUVar6 = *(UObject **)((longlong)&pFVar5->Value + (longlong)&pFVar21->_padding_);
            if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
              GC::MarkAsReachable(pUVar6);
            }
            pUVar7 = param_3->__this;
            iVar4 = *(int *)((longlong)&pFVar21->DebugComponents + (longlong)pFVar5);
            iVar20 = (iVar4 - (pUVar7->InvalidatedOutputs).NumBits) + 1;
            if (0 < iVar20) {
              iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                 (&pUVar7->InvalidatedOutputs,iVar20);
              TBitArray<FDefaultBitArrayAllocator>::SetRange
                        (&pUVar7->InvalidatedOutputs,iVar12,iVar20,false);
            }
            pUVar7 = param_3->__this;
            if (((iVar4 < 0) || ((pUVar7->InvalidatedOutputs).NumBits <= iVar4)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar8 = (pUVar7->InvalidatedOutputs).AllocatorInstance.SecondaryData;
            FVar18 = (ForElementType<unsigned_int>)&pUVar7->InvalidatedOutputs;
            if (FVar8 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar8;
            }
            iVar20 = iVar4;
            if (iVar4 < 0) {
              iVar20 = iVar4 + 0x1f;
            }
            puVar1 = (uint *)((longlong)FVar18 + (longlong)(iVar20 >> 5) * 4);
            pFVar21 = (FComponentHeader *)&pFVar21->Size;
            *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        LOCK();
        *(int *)&(pFVar17->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar17->ScheduledAccessCount).field_0x0 + -1;
        UNLOCK();
        if (EVar3 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar17->ReadWriteLock);
        }
        if (pFVar16 != (FComponentHeader *)0x0) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar16->Size + 4) = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_78);
        bVar11 = FEntityAllocationIterator::operator!=(&local_78,&local_60);
      } while (bVar11);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_60);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_78);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneTrackInstanceInstantiator::OnRun'::__l2::<lambda_1>_&> @ 146178440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
::Iterate_PerEntityImpl<_UMovieSceneTrackInstanceInstantiator::OnRun_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  uint *puVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  int iVar4;
  FMovieSceneEntityID *pFVar5;
  UObject *pUVar6;
  UMovieSceneTrackInstanceInstantiator *pUVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  EEntityThreadingModel EVar10;
  bool bVar11;
  int iVar12;
  FComponentHeader *pFVar13;
  FEntityAllocation *pFVar14;
  FComponentHeader *pFVar15;
  FComponentHeader *pFVar16;
  FComponentHeader *pFVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  int iVar20;
  FComponentHeader *pFVar21;
  FEntityAllocationIteratorProxy local_98;
  FEntityAllocationIterator local_88;
  FEntityAllocationProxy local_70;
  FEntityAllocationIterator local_60;
  FEntityAllocationWriteContext local_48 [2];
  
  if (this->Accessors != (TTuple<UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>)0xffff)
  {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_48,param_1);
    EVar10 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_98,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_88,local_98.Manager,local_98.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_60,local_98.Manager);
    bVar11 = FEntityAllocationIterator::operator!=(&local_88,&local_60);
    if (bVar11) {
      do {
        pFVar21 = (FComponentHeader *)0x0;
        FEntityAllocationIterator::operator*(&local_88,&local_70);
        pFVar13 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_70);
        pFVar16 = pFVar21;
        if (EVar10 == NoThreading) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar13->Size + 4) = LockFree;
          pFVar16 = pFVar13;
        }
        pFVar14 = FEntityAllocationProxy::GetAllocation(&local_70);
        pFVar17 = pFVar14->ComponentHeaders;
        pFVar15 = pFVar17 + pFVar14->NumComponents;
        for (; pFVar17 != pFVar15; pFVar17 = pFVar17 + 1) {
          if ((TTuple<UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>)
              (pFVar17->ComponentType).Value == this->Accessors) goto LAB_146178590;
        }
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        pFVar17 = pFVar21;
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_146178590:
        EVar3 = pFVar14->LockMode;
        if (EVar3 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar17->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar17->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar17->ScheduledAccessCount).field_0x0 + 1;
        UNLOCK();
        uVar2 = *(ushort *)((longlong)&pFVar13->DebugComponents + 6);
        pFVar5 = (FMovieSceneEntityID *)pFVar17->Components;
        if (uVar2 != 0) {
          uVar19 = (ulonglong)uVar2;
          do {
            pUVar6 = *(UObject **)((longlong)&pFVar5->Value + (longlong)&pFVar21->_padding_);
            if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
              GC::MarkAsReachable(pUVar6);
            }
            pUVar7 = param_3->__this;
            iVar4 = *(int *)((longlong)&pFVar21->DebugComponents + (longlong)pFVar5);
            iVar20 = (iVar4 - (pUVar7->InvalidatedOutputs).NumBits) + 1;
            if (0 < iVar20) {
              iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                 (&pUVar7->InvalidatedOutputs,iVar20);
              TBitArray<FDefaultBitArrayAllocator>::SetRange
                        (&pUVar7->InvalidatedOutputs,iVar12,iVar20,false);
            }
            pUVar7 = param_3->__this;
            if (((iVar4 < 0) || ((pUVar7->InvalidatedOutputs).NumBits <= iVar4)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar8 = (pUVar7->InvalidatedOutputs).AllocatorInstance.SecondaryData;
            FVar18 = (ForElementType<unsigned_int>)&pUVar7->InvalidatedOutputs;
            if (FVar8 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar8;
            }
            iVar20 = iVar4;
            if (iVar4 < 0) {
              iVar20 = iVar4 + 0x1f;
            }
            puVar1 = (uint *)((longlong)FVar18 + (longlong)(iVar20 >> 5) * 4);
            pFVar21 = (FComponentHeader *)&pFVar21->Size;
            *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        LOCK();
        *(int *)&(pFVar17->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar17->ScheduledAccessCount).field_0x0 + -1;
        UNLOCK();
        if (EVar3 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar17->ReadWriteLock);
        }
        if (pFVar16 != (FComponentHeader *)0x0) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar16->Size + 4) = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_88);
        bVar11 = FEntityAllocationIterator::operator!=(&local_88,&local_60);
      } while (bVar11);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_60);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_88);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneTrackInstanceInstantiator::OnTagGarbage'::__l2::<lambda_1>_&> @ 146178740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
::Iterate_PerEntityImpl<_UMovieSceneTrackInstanceInstantiator::OnTagGarbage_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  uint *puVar1;
  ushort uVar2;
  UObject *pUVar3;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  UMovieSceneTrackInstanceInstantiator *pUVar6;
  ForElementType<unsigned_int> FVar7;
  code *pcVar8;
  FMovieSceneEntityID *pFVar9;
  ulonglong uVar10;
  EEntityThreadingModel EVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FComponentHeader *pFVar15;
  FEntityAllocation *pFVar16;
  FUObjectItem *pFVar17;
  FComponentHeader *pFVar18;
  FComponentHeader *pFVar19;
  int iVar20;
  ForElementType<unsigned_int> FVar21;
  FComponentHeader *pFVar22;
  FComponentHeader *pFVar23;
  FMovieSceneEntityID *pFVar24;
  ushort local_c8 [4];
  EEntityThreadingModel local_c0;
  EComponentHeaderLockMode local_bc;
  FComponentHeader *local_b8;
  FComponentHeader *local_b0;
  FMovieSceneEntityID *local_a8;
  FMovieSceneEntityID *local_a0;
  ulonglong local_98;
  FEntityAllocationIteratorProxy local_90;
  FEntityAllocationProxy local_80;
  FEntityAllocationIterator local_70;
  FEntityAllocationIterator local_58;
  FEntityAllocationWriteContext local_40;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_40,param_1);
    EVar11 = FEntityManager::GetThreadingModel(param_1);
    local_c0 = EVar11;
    FEntityManager::Iterate(param_1,&local_90,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_70,local_90.Manager,local_90.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_90.Manager);
    bVar12 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
    if (bVar12) {
      do {
        pFVar22 = (FComponentHeader *)0x0;
        FEntityAllocationIterator::operator*(&local_70,&local_80);
        pFVar15 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_80);
        pFVar19 = pFVar22;
        if (EVar11 == NoThreading) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar15->Size + 4) = LockFree;
          pFVar19 = pFVar15;
        }
        local_b0 = pFVar19;
        pFVar16 = FEntityAllocationProxy::GetAllocation(&local_80);
        local_b8 = pFVar16->ComponentHeaders;
        pFVar18 = local_b8 + pFVar16->NumComponents;
        for (; local_b8 != pFVar18; local_b8 = local_b8 + 1) {
          pFVar23 = local_b8;
          if ((local_b8->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_146178888;
        }
        local_b8 = (FComponentHeader *)0x0;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        pFVar23 = pFVar22;
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
LAB_146178888:
        local_bc = pFVar16->LockMode;
        if (local_bc == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar23->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar23->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar23->ScheduledAccessCount).field_0x0 + 1;
        UNLOCK();
        local_a8 = (FMovieSceneEntityID *)pFVar23->Components;
        pFVar16 = FEntityAllocationProxy::GetAllocation(&local_80);
        pFVar9 = local_a8;
        pFVar24 = pFVar16->EntityIDs;
        uVar2 = *(ushort *)((longlong)&pFVar15->DebugComponents + 6);
        pFVar15 = pFVar22;
        local_a0 = pFVar24;
        uVar10 = (ulonglong)uVar2;
        if (uVar2 != 0) {
          do {
            local_98 = uVar10;
            pUVar3 = *(UObject **)((longlong)&pFVar15->_padding_ + (longlong)&pFVar9->Value);
            if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UObject *)0x0)) {
              local_c8[0] = pFVar24[(longlong)pFVar22].Value;
              iVar20 = *(int *)((longlong)&pFVar15->_padding_ + (longlong)&pFVar9[4].Value);
              if (pUVar3 != (UObject *)0x0) goto LAB_14617891d;
LAB_146178946:
              pTVar4 = param_3->Garbage;
              pFVar5 = (pTVar4->AllocatorInstance).Data;
              if ((pFVar5 <= (FScriptContainerElement *)local_c8) &&
                 (((FScriptContainerElement *)local_c8 < pFVar5 + (longlong)pTVar4->ArrayMax * 2 &&
                  (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)))) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar13 = pTVar4->ArrayNum;
              if (iVar13 == pTVar4->ArrayMax) {
                iVar13 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x202,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
              }
              pTVar4->ArrayNum = iVar13 + 1;
              *(ushort *)((pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 2) = local_c8[0];
              pUVar6 = param_3->__this;
              iVar13 = (iVar20 - (pUVar6->InvalidatedOutputs).NumBits) + 1;
              if (0 < iVar13) {
                iVar14 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                   (&pUVar6->InvalidatedOutputs,iVar13);
                TBitArray<FDefaultBitArrayAllocator>::SetRange
                          (&pUVar6->InvalidatedOutputs,iVar14,iVar13,false);
              }
              pUVar6 = param_3->__this;
              if (((iVar20 < 0) || ((pUVar6->InvalidatedOutputs).NumBits <= iVar20)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar7 = (pUVar6->InvalidatedOutputs).AllocatorInstance.SecondaryData;
              FVar21 = (ForElementType<unsigned_int>)&pUVar6->InvalidatedOutputs;
              if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                FVar21 = FVar7;
              }
              iVar13 = iVar20;
              if (iVar20 < 0) {
                iVar13 = iVar20 + 0x1f;
              }
              puVar1 = (uint *)((longlong)FVar21 + (longlong)(iVar13 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)iVar20 & 0x1f);
              pFVar24 = local_a0;
            }
            else {
              GC::MarkAsReachable(pUVar3);
              local_c8[0] = pFVar24[(longlong)pFVar22].Value;
              iVar20 = *(int *)((longlong)&pFVar15->_padding_ + (longlong)&pFVar9[4].Value);
LAB_14617891d:
              if (((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) != 0) ||
                 (pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc),
                 ((uint)((ulonglong)(pFVar17->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0))
              goto LAB_146178946;
            }
            pFVar22 = (FComponentHeader *)((longlong)&pFVar22->_padding_ + 1);
            pFVar19 = local_b0;
            pFVar15 = (FComponentHeader *)&pFVar15->Size;
            pFVar23 = local_b8;
            uVar10 = local_98;
          } while ((longlong)pFVar22 < (longlong)local_98);
        }
        LOCK();
        *(int *)&(pFVar23->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar23->ScheduledAccessCount).field_0x0 + -1;
        UNLOCK();
        if (local_bc == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar23->ReadWriteLock);
        }
        if (pFVar19 != (FComponentHeader *)0x0) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar19->Size + 4) = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_70);
        bVar12 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
        EVar11 = local_c0;
      } while (bVar12);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_70);
  }
  return;
}

// LowerBoundInternal<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 146178b30

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>_const_,int,int,TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *param_1,
          int param_2,int *param_3,FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 146178b80

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_> *param_1,int param_2,
          FMovieSceneSequenceID *param_3,FKeyForward param_4,
          TLess<FMovieSceneSequenceID_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 146178be0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *param_1,
          int param_2,FMovieSceneSequenceID *param_3,FKeyForward param_4,
          TLess<FMovieSceneSequenceID_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 146178c30

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs> *param_1,int param_2
          ,FMovieSceneSequenceID *param_3,FKeyForward param_4,
          TLess<FMovieSceneSequenceID_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 146178c90

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TTuple<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID> *param_1,int param_2,
          FMovieSceneSequenceID *param_3,FKeyForward param_4,
          TLess<FMovieSceneSequenceID_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>_const_,int,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_> @ 146178ce0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>_const_,int,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
          (TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
           *param_1,int param_2,FPreAnimatedStorageID *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FPreAnimatedStorageID_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < param_3->TypeID) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>_const_,int,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_> @ 146178d30

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>_const_,int,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
          (TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>
           *param_1,int param_2,FPreAnimatedStorageID *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FPreAnimatedStorageID_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < param_3->TypeID) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 146178d80

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
           *param_1,int param_2,FPreAnimatedStorageIndex *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      if ((*(int *)(param_1 + iVar1) == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar2 = *(int *)(param_1 + iVar1);
      if ((param_3->Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (iVar2 < param_3->Value) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar4 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar4 != 0);
  }
  return iVar6;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 146178e60

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
           *param_1,int param_2,FPreAnimatedStorageIndex *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      if ((*(int *)(param_1 + iVar1) == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar2 = *(int *)(param_1 + iVar1);
      if ((param_3->Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (iVar2 < param_3->Value) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar4 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar4 != 0);
  }
  return iVar6;
}

// LowerBoundInternal<FMovieSceneBinding_const_,int,FMovieSceneBinding,FIdentityFunctor,TLess<void>_> @ 146178f40

int __cdecl
AlgoImpl::
LowerBoundInternal<FMovieSceneBinding_const_,int,FMovieSceneBinding,FIdentityFunctor,TLess<void>_>
          (FMovieSceneBinding *param_1,int param_2,FMovieSceneBinding *param_3,
          FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (0 < param_2) {
    uVar2 = (param_3->ObjectGuid).A;
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      uVar3 = param_1[iVar1].ObjectGuid.A;
      if (uVar3 < uVar2) {
        bVar6 = true;
      }
      else if (uVar2 < uVar3) {
        bVar6 = false;
      }
      else {
        uVar3 = (param_3->ObjectGuid).B;
        uVar4 = param_1[iVar1].ObjectGuid.B;
        if (uVar4 < uVar3) {
          bVar6 = true;
        }
        else if (uVar3 < uVar4) {
          bVar6 = false;
        }
        else {
          uVar3 = (param_3->ObjectGuid).C;
          uVar4 = param_1[iVar1].ObjectGuid.C;
          if (uVar4 < uVar3) {
            bVar6 = true;
          }
          else if (uVar3 < uVar4) {
            bVar6 = false;
          }
          else {
            bVar6 = param_1[iVar1].ObjectGuid.D < (param_3->ObjectGuid).D;
          }
        }
      }
      if (bVar6) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<FMovieSceneBinding_const_,int,FGuid,FIdentityFunctor,TLess<void>_> @ 146178fe0

int __cdecl
AlgoImpl::LowerBoundInternal<FMovieSceneBinding_const_,int,FGuid,FIdentityFunctor,TLess<void>_>
          (FMovieSceneBinding *param_1,int param_2,FGuid *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      uVar2 = param_1[iVar1].ObjectGuid.A;
      if (uVar2 < param_3->A) {
        bVar4 = true;
      }
      else if (param_3->A < uVar2) {
        bVar4 = false;
      }
      else {
        uVar2 = param_1[iVar1].ObjectGuid.B;
        if (uVar2 < param_3->B) {
          bVar4 = true;
        }
        else if (param_3->B < uVar2) {
          bVar4 = false;
        }
        else {
          uVar2 = param_1[iVar1].ObjectGuid.C;
          if (uVar2 < param_3->C) {
            bVar4 = true;
          }
          else if (param_3->C < uVar2) {
            bVar4 = false;
          }
          else {
            bVar4 = param_1[iVar1].ObjectGuid.D < param_3->D;
          }
        }
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

// LowerBoundInternal<FMovieScenePossessable_const_,int,FMovieScenePossessable,FIdentityFunctor,TLess<void>_> @ 146179080

int __cdecl
AlgoImpl::
LowerBoundInternal<FMovieScenePossessable_const_,int,FMovieScenePossessable,FIdentityFunctor,TLess<void>_>
          (FMovieScenePossessable *param_1,int param_2,FMovieScenePossessable *param_3,
          FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (0 < param_2) {
    uVar2 = (param_3->Guid).A;
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      uVar3 = param_1[iVar1].Guid.A;
      if (uVar3 < uVar2) {
        bVar6 = true;
      }
      else if (uVar2 < uVar3) {
        bVar6 = false;
      }
      else {
        uVar3 = (param_3->Guid).B;
        uVar4 = param_1[iVar1].Guid.B;
        if (uVar4 < uVar3) {
          bVar6 = true;
        }
        else if (uVar3 < uVar4) {
          bVar6 = false;
        }
        else {
          uVar3 = (param_3->Guid).C;
          uVar4 = param_1[iVar1].Guid.C;
          if (uVar4 < uVar3) {
            bVar6 = true;
          }
          else if (uVar3 < uVar4) {
            bVar6 = false;
          }
          else {
            bVar6 = param_1[iVar1].Guid.D < (param_3->Guid).D;
          }
        }
      }
      if (bVar6) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<FMovieScenePossessable_const_,int,FGuid,FIdentityFunctor,TLess<void>_> @ 146179120

int __cdecl
AlgoImpl::LowerBoundInternal<FMovieScenePossessable_const_,int,FGuid,FIdentityFunctor,TLess<void>_>
          (FMovieScenePossessable *param_1,int param_2,FGuid *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      uVar2 = param_1[iVar1].Guid.A;
      if (uVar2 < param_3->A) {
        bVar4 = true;
      }
      else if (param_3->A < uVar2) {
        bVar4 = false;
      }
      else {
        uVar2 = param_1[iVar1].Guid.B;
        if (uVar2 < param_3->B) {
          bVar4 = true;
        }
        else if (param_3->B < uVar2) {
          bVar4 = false;
        }
        else {
          uVar2 = param_1[iVar1].Guid.C;
          if (uVar2 < param_3->C) {
            bVar4 = true;
          }
          else if (param_3->C < uVar2) {
            bVar4 = false;
          }
          else {
            bVar4 = param_1[iVar1].Guid.D < param_3->D;
          }
        }
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

// LowerBoundInternal<FMovieSceneSpawnable_const_,int,FMovieSceneSpawnable,FIdentityFunctor,TLess<void>_> @ 1461791c0

int __cdecl
AlgoImpl::
LowerBoundInternal<FMovieSceneSpawnable_const_,int,FMovieSceneSpawnable,FIdentityFunctor,TLess<void>_>
          (FMovieSceneSpawnable *param_1,int param_2,FMovieSceneSpawnable *param_3,
          FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (0 < param_2) {
    uVar2 = (param_3->Guid).A;
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      uVar3 = param_1[iVar1].Guid.A;
      if (uVar3 < uVar2) {
        bVar6 = true;
      }
      else if (uVar2 < uVar3) {
        bVar6 = false;
      }
      else {
        uVar3 = (param_3->Guid).B;
        uVar4 = param_1[iVar1].Guid.B;
        if (uVar4 < uVar3) {
          bVar6 = true;
        }
        else if (uVar3 < uVar4) {
          bVar6 = false;
        }
        else {
          uVar3 = (param_3->Guid).C;
          uVar4 = param_1[iVar1].Guid.C;
          if (uVar4 < uVar3) {
            bVar6 = true;
          }
          else if (uVar3 < uVar4) {
            bVar6 = false;
          }
          else {
            bVar6 = param_1[iVar1].Guid.D < (param_3->Guid).D;
          }
        }
      }
      if (bVar6) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<FMovieSceneSpawnable_const_,int,FGuid,FIdentityFunctor,TLess<void>_> @ 146179290

int __cdecl
AlgoImpl::LowerBoundInternal<FMovieSceneSpawnable_const_,int,FGuid,FIdentityFunctor,TLess<void>_>
          (FMovieSceneSpawnable *param_1,int param_2,FGuid *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      uVar2 = param_1[iVar1].Guid.A;
      if (uVar2 < param_3->A) {
        bVar4 = true;
      }
      else if (param_3->A < uVar2) {
        bVar4 = false;
      }
      else {
        uVar2 = param_1[iVar1].Guid.B;
        if (uVar2 < param_3->B) {
          bVar4 = true;
        }
        else if (param_3->B < uVar2) {
          bVar4 = false;
        }
        else {
          uVar2 = param_1[iVar1].Guid.C;
          if (uVar2 < param_3->C) {
            bVar4 = true;
          }
          else if (param_3->C < uVar2) {
            bVar4 = false;
          }
          else {
            bVar4 = param_1[iVar1].Guid.D < param_3->D;
          }
        }
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

// MakeShared<UE::MovieScene::FSystemTaskPrerequisites,1> @ 146179340

TSharedRef<UE::MovieScene::FSystemTaskPrerequisites,1> * __cdecl
MakeShared<UE::MovieScene::FSystemTaskPrerequisites,1>
          (TSharedRef<UE::MovieScene::FSystemTaskPrerequisites,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::MovieScene::FSystemTaskPrerequisites,1> *pTVar4;
  
  pTVar3 = operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSystemTaskPrerequisites *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSystemTaskPrerequisites_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x4;
    pTVar3[8]._padding_ = 0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x4;
    __return_storage_ptr__->Object = (FSystemTaskPrerequisites *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FSystemTaskPrerequisites *)(pTVar3 + 1) == (FSystemTaskPrerequisites *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::MovieScene::FSystemTaskPrerequisites,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UMovieSceneExternalClock> @ 146179400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneExternalClock * __cdecl NewObject<UMovieSceneExternalClock>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneExternalClock *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieSceneExternalClock_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneExternalClock *)
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

// NewObject<UMovieSceneTrack> @ 1461794a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneTrack * __cdecl
NewObject<UMovieSceneTrack>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneTrack *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
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
  pUVar2 = (UMovieSceneTrack *)
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

// NewObject<UMovieSceneTrackInstance> @ 1461795a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneTrackInstance * __cdecl
NewObject<UMovieSceneTrackInstance>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneTrackInstance *pUVar2;
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
  pUVar1 = UMovieSceneTrackInstance::StaticClass();
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
  pUVar2 = (UMovieSceneTrackInstance *)
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

// NoneOf<TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,`FMovieSceneEntityComponentFieldBuilder::~FMovieSceneEntityComponentFieldBuilder'::__l2::<lambda_1>_> @ 1461796a0

bool __cdecl
Algo::
NoneOf<TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,_FMovieSceneEntityComponentFieldBuilder::~FMovieSceneEntityComponentFieldBuilder_::__l2::<lambda_1>_>
          (TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *param_1,<lambda_1> param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex> FVar3;
  undefined1 local_res8 [8];
  
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  iVar2 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  if (FVar3 != (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)0x0) {
    param_1 = (TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)
          ((longlong)iVar2 * 0x10 + (longlong)param_1);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex>)param_1 == FVar3)
    break;
    if (*(int *)((longlong)param_1 + 0xc) != -1) {
      return false;
    }
    param_1 = (TArray<FMovieSceneEntityComponentFieldBuilder::FKeyToIndex,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 0x10);
  }
  return true;
}

// NoneOf<TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>,bool_(__cdecl_FMovieSceneNestedSequenceTransform::*)(void)const_> @ 146179720

bool __cdecl
Algo::
NoneOf<TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>,bool_(__cdecl_FMovieSceneNestedSequenceTransform::*)(void)const_>
          (TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *param_1,
          pmf_bc166e85 param_2)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (*(code *)param_2)(pFVar3);
    if (cVar2 != '\0') {
      return false;
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return true;
}

// RandomShuffle<TArray<int,TSizedDefaultAllocator<32>_>_&> @ 146179a80

void __cdecl
Algo::RandomShuffle<TArray<int,TSizedDefaultAllocator<32>_>_&>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  
  fVar4 = __real_38000100;
  iVar10 = param_1->ArrayNum;
  iVar11 = 0;
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar1 = iVar10 + -1;
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      if (iVar10 < 1) {
        iVar6 = 0;
      }
      else {
        lVar9 = (longlong)iVar10 + -1;
        uVar5 = rand();
        lVar7 = (longlong)(int)((float)(uVar5 & 0x7fff) * (float)(longlong)iVar10 * fVar4);
        if (lVar7 < lVar9) {
          lVar9 = lVar7;
        }
        iVar6 = (int)lVar9;
      }
      iVar6 = iVar11 + iVar6;
      if (iVar6 != iVar11) {
        uVar2 = *(undefined4 *)(pFVar3 + lVar8 * 4);
        *(undefined4 *)(pFVar3 + lVar8 * 4) = *(undefined4 *)(pFVar3 + (longlong)iVar6 * 4);
        *(undefined4 *)(pFVar3 + (longlong)iVar6 * 4) = uVar2;
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + -1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
  }
  return;
}

// RemoveAll<`TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 14617acb0

int __thiscall
TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  byte bVar11;
  
  iVar1 = this->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  piVar3 = *(int **)param_1;
  iVar10 = 0;
  if (((((piVar3[3] == *(int *)(pFVar2 + 0xc) && piVar3[2] == *(int *)(pFVar2 + 8)) &&
        piVar3[1] == *(int *)(pFVar2 + 4)) && *piVar3 == *(int *)pFVar2) &&
      (*(int *)(pFVar2 + 0x10) == piVar3[4])) && (*(int *)(pFVar2 + 0x14) == piVar3[5])) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar9) {
      piVar3 = *(int **)param_1;
      pFVar4 = pFVar2 + (lVar6 * 3 + 1) * 8;
      do {
        if (((((piVar3[3] == *(int *)(pFVar4 + 4) && piVar3[1] == *(int *)(pFVar4 + -4)) &&
              *piVar3 == *(int *)(pFVar4 + -8)) && piVar3[2] == *(int *)pFVar4) &&
            (*(int *)(pFVar4 + 8) == piVar3[4])) && (*(int *)(pFVar4 + 0xc) == piVar3[5])) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
        if (bVar11 != bVar5) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
        pFVar4 = pFVar4 + 0x18;
      } while (lVar6 < lVar9);
    }
    if (bVar11 != 0) {
      if (iVar10 != iVar7) {
        memmove(pFVar2 + (longlong)iVar10 * 0x18,pFVar2 + (longlong)iVar7 * 0x18,
                (longlong)(iVar8 - iVar7) * 0x18);
      }
      iVar10 = iVar10 + (iVar8 - iVar7);
    }
    bVar11 = bVar11 ^ 1;
    iVar7 = iVar8;
    if (lVar9 <= lVar6) {
      this->ArrayNum = iVar10;
      return iVar1 - iVar10;
    }
  } while( true );
}

// SerializeInlineValue<FMovieSceneEvalTemplate,128> @ 14617d330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
SerializeInlineValue<FMovieSceneEvalTemplate,128>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *param_1,FArchive *param_2,bool param_3)

{
  uint uVar1;
  size_t sVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  ICppStructOps *pIVar5;
  undefined1 *puVar6;
  FMovieSceneEvalTemplate *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 local_res10 [8];
  FString local_38;
  TStringView<wchar_t> local_28;
  
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FMovieSceneEvaluationCustomVersion::GUID);
  if ((param_2->field_0x28 & 1) == 0) {
    if ((param_2->field_0x28 & 4) == 0) {
      return false;
    }
    if (param_1->bIsValid) {
      pFVar7 = TInlineValue<FMovieSceneEvalTemplate,128,8>::GetValue(param_1);
      pUVar4 = (UScriptStruct *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)pUVar4,(FString *)&local_28,(UObject *)0x0);
      operator<<(param_2,(FString *)&local_28);
      UScriptStruct::SerializeItem(pUVar4,param_2,pFVar7,(void *)0x0);
      FVar8.Data = (FScriptContainerElement *)local_28.DataPtr;
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      operator<<(param_2,&local_38);
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar9 = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    operator<<(param_2,&local_38);
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
    if (1 < local_38.Data.ArrayNum) {
      local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        sVar2 = wcslen((wchar_t *)local_38.Data.AllocatorInstance.Data);
        iVar9 = (int)sVar2;
      }
      local_28.Size = iVar9;
      pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
      pUVar4 = (UScriptStruct *)StaticFindObject(pUVar3,(UObject *)0x0,&local_28,None);
      if (pUVar4 == (UScriptStruct *)0x0) {
        if ((param_3) && (2 < (byte)LogMovieScene._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    (&`bool___cdecl_SerializeInlineValue<FMovieSceneEvalTemplate,128>(TInlineValue<FMovieSceneEvalTemplate,128,8>&___ptr64,FArchive&___ptr64,bool)'
                      ::__l15::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        }
        pUVar4 = FMovieSceneEmptyStruct::StaticStruct();
        puVar6 = local_res10;
      }
      else {
        pIVar5 = UScriptStruct::GetCppStructOps(pUVar4);
        uVar1 = pIVar5->Size;
        pIVar5 = UScriptStruct::GetCppStructOps(pUVar4);
        puVar6 = TInlineValue<FMovieSceneEvalTemplate,128,8>::Reserve
                           (param_1,uVar1,pIVar5->Alignment);
        pIVar5 = UScriptStruct::GetCppStructOps(pUVar4);
        UScriptStruct::ICppStructOps::Construct(pIVar5,puVar6);
      }
      UScriptStruct::SerializeItem(pUVar4,param_2,puVar6,(void *)0x0);
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return true;
}

// SerializeInlineValue<FMovieSceneTrackImplementation,48> @ 14617d520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
SerializeInlineValue<FMovieSceneTrackImplementation,48>
          (TInlineValue<FMovieSceneTrackImplementation,48,8> *param_1,FArchive *param_2,bool param_3
          )

{
  uint uVar1;
  size_t sVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  ICppStructOps *pIVar5;
  undefined1 *puVar6;
  FMovieSceneTrackImplementation *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 local_res10 [8];
  FString local_38;
  TStringView<wchar_t> local_28;
  
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FMovieSceneEvaluationCustomVersion::GUID);
  if ((param_2->field_0x28 & 1) == 0) {
    if ((param_2->field_0x28 & 4) == 0) {
      return false;
    }
    if (param_1->bIsValid) {
      pFVar7 = TInlineValue<FMovieSceneTrackImplementation,48,8>::GetValue(param_1);
      pUVar4 = (UScriptStruct *)(**(code **)(*(longlong *)pFVar7 + 0x20))(pFVar7);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)pUVar4,(FString *)&local_28,(UObject *)0x0);
      operator<<(param_2,(FString *)&local_28);
      UScriptStruct::SerializeItem(pUVar4,param_2,pFVar7,(void *)0x0);
      FVar8.Data = (FScriptContainerElement *)local_28.DataPtr;
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      operator<<(param_2,&local_38);
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar9 = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    operator<<(param_2,&local_38);
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
    if (1 < local_38.Data.ArrayNum) {
      local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        sVar2 = wcslen((wchar_t *)local_38.Data.AllocatorInstance.Data);
        iVar9 = (int)sVar2;
      }
      local_28.Size = iVar9;
      pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
      pUVar4 = (UScriptStruct *)StaticFindObject(pUVar3,(UObject *)0x0,&local_28,None);
      if (pUVar4 == (UScriptStruct *)0x0) {
        if ((param_3) && (2 < (byte)LogMovieScene._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    (&`bool___cdecl_SerializeInlineValue<FMovieSceneTrackImplementation,48>(TInlineValue<FMovieSceneTrackImplementation,48,8>&___ptr64,FArchive&___ptr64,bool)'
                      ::__l15::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        }
        pUVar4 = FMovieSceneEmptyStruct::StaticStruct();
        puVar6 = local_res10;
      }
      else {
        pIVar5 = UScriptStruct::GetCppStructOps(pUVar4);
        uVar1 = pIVar5->Size;
        pIVar5 = UScriptStruct::GetCppStructOps(pUVar4);
        puVar6 = TInlineValue<FMovieSceneTrackImplementation,48,8>::Reserve
                           (param_1,uVar1,pIVar5->Alignment);
        pIVar5 = UScriptStruct::GetCppStructOps(pUVar4);
        UScriptStruct::ICppStructOps::Construct(pIVar5,puVar6);
      }
      UScriptStruct::SerializeItem(pUVar4,param_2,puVar6,(void *)0x0);
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return true;
}

// StaticEnum<enum_EEvaluationMethod> @ 14617d7c0

UEnum * __cdecl StaticEnum<enum_EEvaluationMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EEvaluationMethod,(UObject *)pUVar1,
                       L"EEvaluationMethod");
  }
  return Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton;
}

// StaticEnum<enum_EMovieSceneBlendType> @ 14617d800

UEnum * __cdecl StaticEnum<enum_EMovieSceneBlendType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType,(UObject *)pUVar1,
                       L"EMovieSceneBlendType");
  }
  return Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton;
}

// StaticEnum<enum_EMovieSceneBreadcrumbMode> @ 14617d840

UEnum * __cdecl StaticEnum<enum_EMovieSceneBreadcrumbMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBreadcrumbMode,(UObject *)pUVar1,
                       L"EMovieSceneBreadcrumbMode");
  }
  return Z_Registration_Info_UEnum_EMovieSceneBreadcrumbMode.OuterSingleton;
}

// StaticEnum<enum_EMovieSceneBuiltInEasing> @ 14617d880

UEnum * __cdecl StaticEnum<enum_EMovieSceneBuiltInEasing>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing,(UObject *)pUVar1,
                       L"EMovieSceneBuiltInEasing");
  }
  return Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.OuterSingleton;
}

// Unique<TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&> @ 14617da10

int __cdecl
Algo::
Unique<TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&>
          (TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar1;
  bool bVar2;
  int iVar3;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> this;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  iVar3 = param_1->ArrayNum;
  if (FVar1 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    param_1 = (TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar1;
  }
  if (1 < iVar3) {
    this = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)param_1;
    FVar1 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)param_1;
    while (FVar1 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)((longlong)FVar1 + 8),
          FVar1 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                   ((longlong)param_1 + (longlong)iVar3 * 8)) {
      bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)this,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)FVar1);
      if ((!bVar2) &&
         (this = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)((longlong)this + 8),
         this != FVar1)) {
        *(FWeakObjectPtr *)this = *(FWeakObjectPtr *)FVar1;
      }
    }
    iVar3 = (int)(((longlong)this - (longlong)param_1) + 8 >> 3);
  }
  return iVar3;
}

// Unique<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,FIdentityFunctor,TEqualTo<void>_> @ 14617daa0

int __cdecl
AlgoImpl::Unique<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,FIdentityFunctor,TEqualTo<void>_>
          (TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1,int param_2,FIdentityFunctor param_3,
          TEqualTo<void> param_4)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  FWeakObjectPtr *this;
  
  if (param_2 < 2) {
    return param_2;
  }
  this = &param_1->WeakPtr;
  pFVar1 = &param_1->WeakPtr;
  while (pFVar1 = pFVar1 + 1, pFVar1 != &param_1[param_2].WeakPtr) {
    bVar2 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)this,
                       (TWeakObjectPtr<UObject,FWeakObjectPtr> *)pFVar1);
    if ((!bVar2) && (this = this + 1, this != pFVar1)) {
      *this = *pFVar1;
    }
  }
  return (int)((longlong)this + (8 - (longlong)param_1) >> 3);
}

// UpperBoundInternal<FMovieSceneFrameRange_const_,int,TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>_(__cdecl_FMovieSceneFrameRange::*)(void)const_,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)> @ 14617db30

int __cdecl
AlgoImpl::
UpperBoundInternal<FMovieSceneFrameRange_const_,int,TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>_(__cdecl_FMovieSceneFrameRange::*)(void)const_,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          (FMovieSceneFrameRange *param_1,int param_2,TRangeBound<FFrameNumber> *param_3,
          pmf_ea704e07 param_4,
          _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  TRangeBound<FFrameNumber> local_38 [2];
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      (*(code *)param_4)(param_1 + iVar1,local_38);
      bVar3 = (*param_5)(*param_3,local_38[0]);
      if (!bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// ~TFunction_OwnedObject<`UMovieSceneTrackInstanceSystem::OnRun'::__l10::<lambda_1>,1,0> @ 146183a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieSceneTrackInstanceSystem::OnRun'::__l10::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMovieSceneTrackInstanceSystem::OnRun_::__l10::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMovieSceneTrackInstanceSystem::OnRun'::`10'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// operator<< @ 146186e50

FArchive * __cdecl operator<<(FArchive *param_1,FEntityAndMetaDataIndex *param_2)

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
    param_2->EntityIndex = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->MetaDataIndex;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
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

// operator<< @ 146186f20

FArchive * __cdecl operator<<(FArchive *param_1,FEntry *param_2)

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
    param_2->StartIndex = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->Size;
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
  piVar1 = &param_2->Capacity;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
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

// operator<< @ 146187040

FArchive * __cdecl operator<<(FArchive *param_1,FEntry *param_2)

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
    param_2->StartIndex = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->Size;
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
  piVar1 = &param_2->Capacity;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
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

// operator<< @ 146187160

FArchive * __cdecl operator<<(FArchive *param_1,FEntry *param_2)

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
    param_2->StartIndex = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->Size;
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
  piVar1 = &param_2->Capacity;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
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

// operator<< @ 146187280

FArchive * __cdecl operator<<(FArchive *param_1,FMovieSceneEvaluationTreeNode *param_2)

{
  FEvaluationTreeEntryHandle *pFVar1;
  undefined1 *puVar2;
  uchar *puVar3;
  int *piVar4;
  int *piVar5;
  FArchive *pFVar6;
  
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    (param_2->Range).LowerBound.Type.Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pFVar6 = operator<<(param_1,&(param_2->Range).LowerBound.Value);
  puVar3 = (uchar *)**(undefined8 **)&pFVar6->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&(param_2->Range).UpperBound,1);
  }
  else {
    (param_2->Range).UpperBound.Type.Value = *puVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 1;
  }
  pFVar6 = operator<<(pFVar6,&(param_2->Range).UpperBound.Value);
  piVar4 = (int *)**(undefined8 **)&pFVar6->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar4 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&param_2->Parent,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)&param_2->Parent);
    }
  }
  else {
    (param_2->Parent).ChildrenHandle.EntryIndex = *piVar4;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  piVar4 = &(param_2->Parent).Index;
  puVar2 = &pFVar6->field_0x2a;
  piVar5 = (int *)**(undefined8 **)&pFVar6->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,piVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)piVar4);
    }
  }
  else {
    *piVar4 = *piVar5;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  pFVar1 = &param_2->ChildrenID;
  piVar4 = (int *)**(undefined8 **)&pFVar6->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)pFVar1);
    }
  }
  else {
    pFVar1->EntryIndex = *piVar4;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  pFVar1 = &param_2->DataID;
  piVar4 = (int *)**(undefined8 **)&pFVar6->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)pFVar1);
    }
  }
  else {
    pFVar1->EntryIndex = *piVar4;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  return pFVar6;
}

// operator<< @ 146187460

FArchive * __cdecl operator<<(FArchive *param_1,FMovieSceneSubSequenceTreeEntry *param_2)

{
  uint *puVar1;
  ESectionEvaluationFlags *pEVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    (param_2->SequenceID).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar2 = (ESectionEvaluationFlags *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar2 + 1 <= (ESectionEvaluationFlags *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Flags = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Flags,1);
  return param_1;
}

// operator== @ 146187510

bool __cdecl
operator==(TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *param_1,
          TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_1->Entries).ArrayNum;
  if (iVar1 == (param_2->Entries).ArrayNum) {
    bVar2 = CompareItems<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,int>
                      ((FEntry *)(param_1->Entries).AllocatorInstance.Data,
                       (FEntry *)(param_2->Entries).AllocatorInstance.Data,iVar1);
    if ((bVar2) && (iVar1 = (param_1->Items).ArrayNum, iVar1 == (param_2->Items).ArrayNum)) {
      bVar2 = CompareItems<FMovieSceneEvaluationTreeNode,int>
                        ((FMovieSceneEvaluationTreeNode *)(param_1->Items).AllocatorInstance.Data,
                         (FMovieSceneEvaluationTreeNode *)(param_2->Items).AllocatorInstance.Data,
                         iVar1);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// operator== @ 146187580

bool __cdecl
operator==(FMovieSceneEvaluationFieldEntityMetaData *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_1->ForcedTime).Value != (param_2->ForcedTime).Value) {
    return false;
  }
  if (param_1->Flags != param_2->Flags) {
    return false;
  }
  if (((param_1->bEvaluateInSequencePreRoll ^ param_2->bEvaluateInSequencePreRoll) & 1) != 0) {
    return false;
  }
  if (((param_1->field_0x45 ^ param_2->field_0x45) & 2) != 0) {
    return false;
  }
  iVar2 = (param_1->OverrideBoundPropertyPath).Data.ArrayNum;
  iVar1 = (param_2->OverrideBoundPropertyPath).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_1461875e5;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->OverrideBoundPropertyPath).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->OverrideBoundPropertyPath).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_1461875e5:
  if ((param_1->NotifyFunctionName == param_2->NotifyFunctionName) &&
     (bVar3 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&(param_1->Condition).SoftObjectPtr.field_0x8,
                         (FSoftObjectPath *)&(param_2->Condition).SoftObjectPtr.field_0x8), bVar3))
  {
    return true;
  }
  return false;
}

// operator== @ 146187620

bool __cdecl
operator==(FMovieSceneEvaluationTreeNode *param_1,FMovieSceneEvaluationTreeNode *param_2)

{
  uchar uVar1;
  bool bVar2;
  
  bVar2 = TRange<FFrameNumber>::IsEmpty(&param_1->Range);
  if ((!bVar2) || (bVar2 = TRange<FFrameNumber>::IsEmpty(&param_2->Range), !bVar2)) {
    uVar1 = (param_1->Range).LowerBound.Type.Value;
    if (uVar1 != (param_2->Range).LowerBound.Type.Value) {
      return false;
    }
    if ((uVar1 != '\x02') &&
       ((param_1->Range).LowerBound.Value.Value != (param_2->Range).LowerBound.Value.Value)) {
      return false;
    }
    uVar1 = (param_1->Range).UpperBound.Type.Value;
    if (uVar1 != (param_2->Range).UpperBound.Type.Value) {
      return false;
    }
    if ((uVar1 != '\x02') &&
       ((param_1->Range).UpperBound.Value.Value != (param_2->Range).UpperBound.Value.Value)) {
      return false;
    }
  }
  if (((((param_1->Parent).ChildrenHandle.EntryIndex == (param_2->Parent).ChildrenHandle.EntryIndex)
       && ((param_1->Parent).Index == (param_2->Parent).Index)) &&
      ((param_1->ChildrenID).EntryIndex == (param_2->ChildrenID).EntryIndex)) &&
     ((param_1->DataID).EntryIndex == (param_2->DataID).EntryIndex)) {
    return true;
  }
  return false;
}

// operator== @ 1461876b0

bool __cdecl
operator==(FMovieSceneSubSequenceTreeEntry *param_1,FMovieSceneSubSequenceTreeEntry *param_2)

{
  if (((param_1->SequenceID).Value == (param_2->SequenceID).Value) &&
     (param_1->Flags == param_2->Flags)) {
    return true;
  }
  return false;
}

// operator* @ 146187890

FFrameTime __cdecl operator*(FFrameTime param_1,FMovieSceneSequenceTransform *param_2)

{
  int iVar1;
  FFrameTime FVar2;
  FMovieSceneNestedSequenceTransform *pFVar3;
  FMovieSceneNestedSequenceTransform *this;
  longlong in_R8;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  
  if (*(int *)(in_R8 + 0x18) == 0) {
    operator*(param_1,&param_2->LinearTransform);
    return param_1;
  }
  operator*((FFrameTime)&local_res18,&param_2->LinearTransform);
  iVar1 = *(int *)(in_R8 + 0x18);
  this = *(FMovieSceneNestedSequenceTransform **)(in_R8 + 0x10);
  pFVar3 = this + iVar1;
  while( true ) {
    if (*(int *)(in_R8 + 0x18) != iVar1) {
      `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res18);
    }
    if (this == pFVar3) break;
    FVar2 = FMovieSceneNestedSequenceTransform::TransformTime(this,(FFrameTime)local_res20);
    this = this + 1;
    local_res18 = *(undefined8 *)FVar2;
  }
  *(undefined8 *)param_1 = local_res18;
  return param_1;
}

// operator* @ 146187950

FMovieSceneTimeTransform * __cdecl
operator*(FMovieSceneTimeTransform *__return_storage_ptr__,FMovieSceneTimeTransform *param_1,
         FMovieSceneTimeTransform *param_2)

{
  FFrameTime FVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FFrameTime FVar8;
  FMovieSceneTimeTransform *pFVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  float fVar18;
  double dVar19;
  FFrameTime local_res10;
  float fStackX_1c;
  float fStackX_24;
  
  if (param_1->TimeScale != __real_3f800000) {
    iVar6 = _finite((double)param_1->TimeScale);
    if (iVar6 != 0) {
      fStackX_1c = (param_2->Offset).SubFrame;
      dVar19 = ((double)(param_2->Offset).FrameNumber.Value + (double)fStackX_1c) *
               (double)param_1->TimeScale;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar19;
      auVar17 = roundpd(in_XMM2,auVar17,1);
      dVar11 = auVar17._0_8_;
      dVar12 = dVar11;
      if (__real_41dfffffffc00000 <= dVar11) {
        dVar12 = __real_41dfffffffc00000;
      }
      if (dVar12 <= __real_c1e0000000000000) {
        dVar12 = __real_c1e0000000000000;
      }
      fVar10 = (float)(dVar19 - dVar11);
      if (FFrameTime::MaxSubframe <= fVar10) {
        fVar10 = FFrameTime::MaxSubframe;
      }
      auVar13 = ZEXT416((uint)fVar10);
      if (fVar10 <= 0.0) {
        auVar13 = ZEXT816(0) << 0x20;
      }
      if (FFrameTime::MaxSubframe <= auVar13._0_4_) {
        auVar13._0_4_ = FFrameTime::MaxSubframe;
      }
      if (auVar13._0_4_ <= 0.0) {
        auVar3._12_4_ = 0;
        auVar3._0_12_ = auVar13._4_12_;
        auVar13 = auVar3 << 0x20;
      }
      FVar8.SubFrame = auVar13._0_4_;
      FVar8.FrameNumber.Value = (int)dVar12;
      goto LAB_146187a0c;
    }
  }
  FVar8 = param_2->Offset;
LAB_146187a0c:
  fVar10 = FFrameTime::MaxSubframe;
  FVar1 = param_1->Offset;
  fVar18 = param_1->TimeScale * param_2->TimeScale;
  local_res10.SubFrame = FVar8.SubFrame;
  fStackX_24 = FVar1.SubFrame;
  fStackX_24 = local_res10.SubFrame + fStackX_24;
  fVar14 = (fStackX_24 + fStackX_24) - __real_3f000000;
  iVar6 = (int)fStackX_24;
  fVar15 = fStackX_24;
  if ((iVar6 != -0x80000000) && ((float)iVar6 != fStackX_24)) {
    auVar16._4_4_ = fStackX_24;
    auVar16._0_4_ = fStackX_24;
    auVar16._8_8_ = 0;
    uVar7 = movmskps(FVar8.FrameNumber.Value.Value,auVar16);
    fVar15 = (float)(int)(iVar6 - (uVar7 & 1));
  }
  __return_storage_ptr__->TimeScale = fVar18;
  fVar4 = __real_322bcc77;
  fVar18 = (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  local_res10.SubFrame = fStackX_24 - fVar15;
  if (fVar10 <= fStackX_24 - fVar15) {
    local_res10.SubFrame = fVar10;
  }
  if (local_res10.SubFrame <= 0.0) {
    local_res10.SubFrame = 0.0;
  }
  local_res10.FrameNumber.Value =
       ((int)ROUND(fVar14) >> 1) + FVar1.FrameNumber.Value.Value + FVar8.FrameNumber.Value.Value;
  __return_storage_ptr__->Offset = local_res10;
  if (fVar18 <= fVar4) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("!FMath::IsNearlyZero(TimeScale)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                       ,0x2c,
                       L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FMovieSceneTimeTransform *)(*pcVar2)();
      return pFVar9;
    }
  }
  return __return_storage_ptr__;
}

// operator+ @ 146188400

FFrameTime __cdecl operator+(FFrameTime param_1,FFrameTime param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  int in_R8D;
  float in_register_00000084;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uStackX_14;
  
  uStackX_14 = param_2.SubFrame;
  uStackX_14 = in_register_00000084 + uStackX_14;
  iVar2 = (int)uStackX_14;
  fVar4 = uStackX_14;
  if ((iVar2 != -0x80000000) && ((float)iVar2 != uStackX_14)) {
    auVar5._4_4_ = uStackX_14;
    auVar5._0_4_ = uStackX_14;
    auVar5._8_8_ = 0;
    uVar1 = movmskps(in_EAX,auVar5);
    fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
  }
  fVar3 = uStackX_14 - fVar4;
  if (FFrameTime::MaxSubframe <= uStackX_14 - fVar4) {
    fVar3 = FFrameTime::MaxSubframe;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(int *)param_1 =
       ((int)ROUND((uStackX_14 + uStackX_14) - __real_3f000000) >> 1) + in_R8D +
       param_2.FrameNumber.Value.Value;
  *(float *)((longlong)param_1 + 4) = fVar3;
  return param_1;
}

// `vcall'{8,{flat}}'_}' @ 146189f80

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{8,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__8__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146189f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 8))();
  return;
}

// `vcall'{0,{flat}}'_}' @ 146189f8c

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{0,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__0__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146189f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*this)();
  return;
}

// `vcall'{16,{flat}}'_}' @ 146189f98

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{16,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__16__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146189f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x10))();
  return;
}

// `vcall'{24,{flat}}'_}' @ 146189fa4

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{24,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__24__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146189fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x18))();
  return;
}

// `vcall'{72,{flat}}'_}' @ 146189fb0

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{72,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__72__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146189fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x48))();
  return;
}

// `vcall'{80,{flat}}'_}' @ 146189fbc

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{80,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__80__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146189fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x50))();
  return;
}

// `vcall'{88,{flat}}'_}' @ 146189fc8

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{88,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__88__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146189fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x58))();
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146189fd4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneBuiltInEasingFunction::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneBuiltInEasingFunction::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneBuiltInEasingFunction *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneBuiltInEasingFunction *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146189fe4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneEasingExternalCurve::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneEasingExternalCurve::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneEasingExternalCurve *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneEasingExternalCurve *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146189ff4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneShotMetaData::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneShotMetaData::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneShotMetaData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneShotMetaData *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14618a010

void * __thiscall
IBaseDelegateInstance<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a040

void * __thiscall
IBaseDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a070

void * __thiscall
IBaseDelegateInstance<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a0a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a0d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMovieSceneRootEvaluationTemplateInstance::Initialize'::__l14::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a100

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a130

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a160

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a190

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a1c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a1f0

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_> *this,
          uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a230

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a270

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a2b0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a2f0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a330

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a370

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a3b0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a3f0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a430

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a470

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::MovieScene::FEntitySystemScheduler::ExecuteTasks'::__l54::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a4e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::MovieScene::FEntitySystemScheduler::PrerequisiteCompleted'::__l40::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a550

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::MovieScene::FEntitySystemScheduler::ExecuteTasks'::__l54::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a590

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::MovieScene::FEntitySystemScheduler::PrerequisiteCompleted'::__l40::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a5d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieSceneTrackInstanceSystem::OnRun'::__l10::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMovieSceneTrackInstanceSystem::OnRun'::`10'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a610

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TMemberFunctionTaskWrapper<UMovieSceneTrackInstanceSystem>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TMemberFunctionTaskWrapper<UMovieSceneTrackInstanceSystem>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a650

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a690

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a6d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedObjectGroupManager,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a710

void * __thiscall
UE::MovieScene::TMemberFunctionTaskWrapper<UMovieSceneTrackInstanceSystem>::
_scalar_deleting_destructor_
          (TMemberFunctionTaskWrapper<UMovieSceneTrackInstanceSystem> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a750

void * __thiscall
UE::MovieScene::TPlaybackCapabilityDebuggingTypedPtr<IMovieScenePlaybackClient_*>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<IMovieScenePlaybackClient_*> *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a790

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID>::
_scalar_deleting_destructor_
          (TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->KeyToMetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyToMetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToMetaData);
  this->_padding_ = (longlong)&___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a800

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput>::
_scalar_deleting_destructor_
          (TPreAnimatedCaptureSources<FMovieSceneTrackInstanceInput> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->KeyToMetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyToMetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToMetaData);
  this->_padding_ = (longlong)&___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a870

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedCaptureSources<FObjectKey>::_scalar_deleting_destructor_
          (TPreAnimatedCaptureSources<FObjectKey> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->KeyToMetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyToMetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToMetaData);
  this->_padding_ = (longlong)&___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvalHookKeyType>::
_scalar_deleting_destructor_
          (TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvalHookKeyType> *this,
          uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->KeyToMetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyToMetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToMetaData);
  this->_padding_ = (longlong)&___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a950

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvaluationKeyType>::
_scalar_deleting_destructor_
          (TPreAnimatedCaptureSources<UE::MovieScene::FPreAnimatedEvaluationKeyType> *this,
          uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->KeyToMetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyToMetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToMetaData);
  this->_padding_ = (longlong)&___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618a9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedStateGroupManager<FObjectKey>::_scalar_deleting_destructor_
          (TPreAnimatedStateGroupManager<FObjectKey> *this,uint param_1)

{
  ~TPreAnimatedStateGroupManager<FObjectKey>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618aa00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
_scalar_deleting_destructor_
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this,
          uint param_1)

{
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618aa40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
_scalar_deleting_destructor_
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this,uint param_1)

{
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618aa80

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTrackInstancePropertyBindings,SharedPointerInternals::DefaultDeleter<FTrackInstancePropertyBindings>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTrackInstancePropertyBindings,SharedPointerInternals::DefaultDeleter<FTrackInstancePropertyBindings>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618aac0

void * __thiscall
TMovieSceneEvaluationTree<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::
FAddUniqueOperator::_scalar_deleting_destructor_(FAddUniqueOperator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneEvaluationTreeNodeOperator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618ab00

void * __thiscall
TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::FAddUniqueOperator::
_scalar_deleting_destructor_(FAddUniqueOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->DataToInsert).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->DataToInsert).RootToSequenceWarpCounter._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEvaluationTreeNodeOperator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618ab60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage::_scalar_deleting_destructor_
          (FAnimTypePreAnimatedStateObjectStorage *this,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618aba0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FAnimTypePreAnimatedStateRootStorage::_scalar_deleting_destructor_
          (FAnimTypePreAnimatedStateRootStorage *this,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618abe0

void * __thiscall
UE::MovieScene::FSequenceDirectorPlaybackCapability::FDirectorInstanceCache::
_scalar_deleting_destructor_(FDirectorInstanceCache *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DirectorInstances).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618ac40

void * __thiscall
UE::MovieScene::FFrameRateRetiming::_scalar_deleting_destructor_
          (FFrameRateRetiming *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618ac80

void * __thiscall
FMovieSceneEvalTemplate::_scalar_deleting_destructor_(FMovieSceneEvalTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618acc0

void * __thiscall
FMovieScenePropertySectionTemplate::_scalar_deleting_destructor_
          (FMovieScenePropertySectionTemplate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMovieScenePropertySectionTemplate__6B_;
  pFVar1 = (this->PropertyData).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618ad20

void * __thiscall
FMovieSceneRemoveInitialGlobalValueToken::_scalar_deleting_destructor_
          (FMovieSceneRemoveInitialGlobalValueToken *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakActuator).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedGlobalToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618ad90

void * __thiscall
FMovieSceneRemoveInitialGlobalValueTokenProducer::_scalar_deleting_destructor_
          (FMovieSceneRemoveInitialGlobalValueTokenProducer *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneRemoveInitialGlobalValueTokenProducer__6B_;
  pTVar3 = (this->WeakActuator).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedGlobalTokenProducer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618ae00

void * __thiscall
FMovieSceneRemoveInitialValueToken::_scalar_deleting_destructor_
          (FMovieSceneRemoveInitialValueToken *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakActuator).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618ae70

void * __thiscall
FMovieSceneRemoveInitialValueTokenProducer::_scalar_deleting_destructor_
          (FMovieSceneRemoveInitialValueTokenProducer *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneRemoveInitialValueTokenProducer__6B_;
  pTVar3 = (this->WeakActuator).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedTokenProducer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618aee0

void * __thiscall
FMovieSceneTimeController::_scalar_deleting_destructor_
          (FMovieSceneTimeController *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618af20

void * __thiscall
FMovieSceneTimeController_Custom::_scalar_deleting_destructor_
          (FMovieSceneTimeController_Custom *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618af70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMovieSceneTrackEvaluator::_scalar_deleting_destructor_
          (FMovieSceneTrackEvaluator *this,uint param_1)

{
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneTrackEvaluator__6B_;
  if (((GExitPurge == false) && ((this->ThisFrameMetaData).ActiveEntities.ArrayNum != 0)) &&
     (5 < (byte)LogMovieSceneECS._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
  }
  FMovieSceneExecutionTokens::~FMovieSceneExecutionTokens(&this->ExecutionTokens);
  FVar1 = (this->RootOverridePath).PathToRoot.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->ThisFrameMetaData).ActiveEntities.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ThisFrameMetaData).ActiveSequences.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LastFrameMetaData).ActiveEntities.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LastFrameMetaData).ActiveSequences.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->CachedPtrs).Pairs.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                )0x0) {
    FMemory::Free((void *)FVar3);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b070

void * __thiscall
`FMovieSceneEvaluationTree::AddTimeRange'::__l2::FNullOp::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  *(undefined ***)this = &___7IMovieSceneEvaluationTreeNodeOperator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b0b0

void * __thiscall
UE::MovieScene::FPreAnimatedEntityCaptureSource::_scalar_deleting_destructor_
          (FPreAnimatedEntityCaptureSource *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  *(undefined ***)this = &___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b120

void * __thiscall
UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources::_scalar_deleting_destructor_
          (FPreAnimatedEvaluationHookCaptureSources *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvalHookKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  *(undefined ***)this = &___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b190

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FPreAnimatedObjectGroupManager::_scalar_deleting_destructor_
          (FPreAnimatedObjectGroupManager *this,uint param_1)

{
  TPreAnimatedStateGroupManager<FObjectKey>::~TPreAnimatedStateGroupManager<FObjectKey>
            ((TPreAnimatedStateGroupManager<FObjectKey> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b1d0

void * __thiscall
UE::MovieScene::FPreAnimatedTemplateCaptureSources::_scalar_deleting_destructor_
          (FPreAnimatedTemplateCaptureSources *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FPreAnimatedEvaluationKeyType,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  *(undefined ***)this = &___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b240

void * __thiscall
UE::MovieScene::FPreAnimatedTrackInstanceCaptureSources::_scalar_deleting_destructor_
          (FPreAnimatedTrackInstanceCaptureSources *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  *(undefined ***)this = &___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b2b0

void * __thiscall
UE::MovieScene::FPreAnimatedTrackInstanceInputCaptureSources::_scalar_deleting_destructor_
          (FPreAnimatedTrackInstanceInputCaptureSources *this,uint param_1)

{
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  *(undefined ***)this = &___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b320

void * __thiscall
`FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState'::__l2::FRestoreMask::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7IRestoreMask___TPreAnimatedStateStorage_UFPreAnimatedObjectTokenTraits_MovieScene_UE___MovieScene_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b360

void * __thiscall
PropertyTemplate::FSectionData::_scalar_deleting_destructor_(FSectionData *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PropertyBindings).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IPersistentEvaluationData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b3b0

void * __thiscall
UE::MovieScene::FTrackInstanceInputComponentInitializer::_scalar_deleting_destructor_
          (FTrackInstanceInputComponentInitializer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b3f0

void * __thiscall
IMovieSceneEasingFunction::_scalar_deleting_destructor_
          (IMovieSceneEasingFunction *this,uint param_1)

{
  *this = (IMovieSceneEasingFunction)&___7IMovieSceneEasingFunction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b430

void * __thiscall
IMovieSceneMetaDataInterface::_scalar_deleting_destructor_
          (IMovieSceneMetaDataInterface *this,uint param_1)

{
  *this = (IMovieSceneMetaDataInterface)&___7IMovieSceneMetaDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b470

void * __thiscall
IMovieScenePreAnimatedGlobalToken::_scalar_deleting_destructor_
          (IMovieScenePreAnimatedGlobalToken *this,uint param_1)

{
  *this = (IMovieScenePreAnimatedGlobalToken)&___7IMovieScenePreAnimatedGlobalToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b4b0

void * __thiscall
IMovieScenePreAnimatedGlobalTokenProducer::_scalar_deleting_destructor_
          (IMovieScenePreAnimatedGlobalTokenProducer *this,uint param_1)

{
  *this = (IMovieScenePreAnimatedGlobalTokenProducer)
          &___7IMovieScenePreAnimatedGlobalTokenProducer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b4f0

void * __thiscall
IPersistentEvaluationData::_scalar_deleting_destructor_
          (IPersistentEvaluationData *this,uint param_1)

{
  *this = (IPersistentEvaluationData)&___7IPersistentEvaluationData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b530

void * __thiscall
UE::MovieScene::IPreAnimatedCaptureSource::_scalar_deleting_destructor_
          (IPreAnimatedCaptureSource *this,uint param_1)

{
  *this = (IPreAnimatedCaptureSource)&___7IPreAnimatedCaptureSource_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b570

void * __thiscall
UE::MovieScene::IPreAnimatedStateGroupManager::_scalar_deleting_destructor_
          (IPreAnimatedStateGroupManager *this,uint param_1)

{
  *this = (IPreAnimatedStateGroupManager)&___7IPreAnimatedStateGroupManager_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b5b0

void * __thiscall
UE::MovieScene::IPreAnimatedStorage::_scalar_deleting_destructor_
          (IPreAnimatedStorage *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IPreAnimatedStorage_MovieScene_UE__6B_;
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
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b620

void * __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
IRestoreMask::_scalar_deleting_destructor_(IRestoreMask *this,uint param_1)

{
  *this = (IRestoreMask)
          &
          ___7IRestoreMask___TPreAnimatedStateStorage_UFPreAnimatedObjectTokenTraits_MovieScene_UE___MovieScene_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b660

void * __thiscall UMovieScene::_scalar_deleting_destructor_(UMovieScene *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieScene__6B_;
  pFVar1 = (this->GeneratedConditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneMarkedFrame,int>
            ((FMovieSceneMarkedFrame *)(this->MarkedFrames).AllocatorInstance.Data,
             (this->MarkedFrames).ArrayNum);
  pFVar1 = (this->MarkedFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->BindingGroups).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BindingGroups).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BindingGroups);
  DestructItems<FMovieSceneBinding,int>
            ((FMovieSceneBinding *)(this->ObjectBindings).AllocatorInstance.Data,
             (this->ObjectBindings).ArrayNum);
  pFVar1 = (this->ObjectBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieScenePossessable,int>
            ((FMovieScenePossessable *)(this->Possessables).AllocatorInstance.Data,
             (this->Possessables).ArrayNum);
  pFVar1 = (this->Possessables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneSpawnable,int>
            ((FMovieSceneSpawnable *)(this->Spawnables).AllocatorInstance.Data,
             (this->Spawnables).ArrayNum);
  pFVar1 = (this->Spawnables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618b7a0

void * __thiscall
UMovieSceneBuiltInEasingFunction::_scalar_deleting_destructor_
          (UMovieSceneBuiltInEasingFunction *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneEasingFunction__6B_;
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

// `scalar_deleting_destructor' @ 14618b810

void * __thiscall
UMovieSceneCustomClockSource::_scalar_deleting_destructor_
          (UMovieSceneCustomClockSource *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14618b870

void * __thiscall
UMovieSceneEasingExternalCurve::_scalar_deleting_destructor_
          (UMovieSceneEasingExternalCurve *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneEasingFunction__6B_;
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

// `scalar_deleting_destructor' @ 14618b8e0

void * __thiscall
UMovieSceneEvaluationHook::_scalar_deleting_destructor_
          (UMovieSceneEvaluationHook *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14618b940

void * __thiscall
UMovieSceneNodeGroup::_scalar_deleting_destructor_(UMovieSceneNodeGroup *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneNodeGroup__6B_;
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

// `scalar_deleting_destructor' @ 14618b9a0

void * __thiscall
UMovieSceneNodeGroupCollection::_scalar_deleting_destructor_
          (UMovieSceneNodeGroupCollection *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneNodeGroupCollection__6B_;
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

// `scalar_deleting_destructor' @ 14618ba00

void * __thiscall
UMovieSceneShotMetaData::_scalar_deleting_destructor_(UMovieSceneShotMetaData *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneMetaDataInterface__6B_;
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

// `scalar_deleting_destructor' @ 14618ba70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneTrackInstance::_scalar_deleting_destructor_(UMovieSceneTrackInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstance__6B_;
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14618bae0

void * __thiscall
UMovieSceneTrackInstanceInstantiator::_scalar_deleting_destructor_
          (UMovieSceneTrackInstanceInstantiator *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceInstantiator__6B_;
  FVar1 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BoundObjectToInstances).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoundObjectToInstances);
  TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator>(&this->TrackInstances);
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618bba0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneTrackInstanceSystem::_scalar_deleting_destructor_
          (UMovieSceneTrackInstanceSystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14618bc00

void * __thiscall
UNodeAndChannelMappings::_scalar_deleting_destructor_(UNodeAndChannelMappings *this,uint param_1)

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

// CircIn @ 146196b90

float __cdecl Impl::CircIn(float param_1)

{
  return __real_3f800000 - SQRT(__real_3f800000 - param_1 * param_1);
}

// CircOut @ 146196bc0

float __cdecl Impl::CircOut(float param_1)

{
  return SQRT(__real_3f800000 - (__real_3f800000 - param_1) * (__real_3f800000 - param_1));
}

// EmptyLinkFunctionForGeneratedCodeIMovieSceneCustomClockSource @ 1461a11a0

void __cdecl EmptyLinkFunctionForGeneratedCodeIMovieSceneCustomClockSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIMovieSceneEvaluationHook @ 1461a11b0

void __cdecl EmptyLinkFunctionForGeneratedCodeIMovieSceneEvaluationHook(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeINodeAndChannelMappings @ 1461a11c0

void __cdecl EmptyLinkFunctionForGeneratedCodeINodeAndChannelMappings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScene @ 1461a11d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScene(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBlendType @ 1461a11e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBlendType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEasingCurves @ 1461a11f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEasingCurves(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTemplate @ 1461a1200

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationField @ 1461a1210

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationField(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplate @ 1461a1220

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplateInstance @ 1461a1230

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplateInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTrack @ 1461a1240

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMarkedFrame @ 1461a1250

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMarkedFrame(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTemplate @ 1461a1260

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceHierarchy @ 1461a1270

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceHierarchy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTransform @ 1461a1280

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTransform(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneShotMetaData @ 1461a1290

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneShotMetaData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarping @ 1461a12a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarping(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTrackImplementation @ 1461a12b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTrackImplementation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstance @ 1461a12c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstanceSystem @ 1461a12d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstanceSystem(void)

{
  return;
}

// ExpIn @ 1461a5460

float __cdecl Impl::ExpIn(float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_40000000,(param_1 - __real_3f800000) * __real_41200000);
  return fVar1;
}

// ExpOut @ 1461a5490

float __cdecl Impl::ExpOut(float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_40000000,param_1 * __real_c1200000);
  return __real_3f800000 - fVar1;
}

// GetInitialValueTypeID @ 1461b10c0

FMovieSceneAnimTypeID __cdecl GetInitialValueTypeID(void)

{
  ulong64 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      ID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&_TSS0);
    }
  }
  *in_RCX = ID.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetMaxUpperBound @ 1461b13d0

TOptional<TRangeBound<FFrameNumber>_> * __cdecl
GetMaxUpperBound(TOptional<TRangeBound<FFrameNumber>_> *__return_storage_ptr__,
                UMovieSceneTrack *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  TOptional<TRangeBound<FFrameNumber>_> *pTVar5;
  TOptional<TRangeBound<FFrameNumber>_> *pTVar6;
  TEnumAsByte<ERangeBoundTypes::Type> TVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  TOptional<TRangeBound<FFrameNumber>_> local_28;
  
  __return_storage_ptr__->bIsSet = false;
  plVar4 = (longlong *)(**(code **)(param_1->_padding_ + 0x360))(param_1);
  plVar8 = (longlong *)*plVar4;
  lVar3 = plVar4[1];
  plVar1 = plVar8 + (int)lVar3;
  do {
    while( true ) {
      if ((int)plVar4[1] != (int)lVar3) {
        `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (plVar8 == plVar1) {
        return __return_storage_ptr__;
      }
      local_28.TypedValue = *(TRangeBound<FFrameNumber> *)(*plVar8 + 0xb8);
      TVar7 = local_28.TypedValue.Type.Value;
      if (TVar7.Value != '\x02') break;
LAB_1461b1488:
      plVar8 = plVar8 + 1;
    }
    if (__return_storage_ptr__->bIsSet == false) {
      pTVar5 = &local_28;
LAB_1461b1451:
      iVar2 = (pTVar5->TypedValue).Value.Value;
      pTVar6 = pTVar5;
      if (iVar2 <= local_28.TypedValue.Value.Value.Value) {
        if (iVar2 < local_28.TypedValue.Value.Value.Value) {
          pTVar6 = &local_28;
        }
        else {
          pTVar6 = &local_28;
          if (TVar7.Value == '\x01') {
            pTVar6 = pTVar5;
          }
        }
      }
      if (pTVar6 != __return_storage_ptr__) {
        __return_storage_ptr__->TypedValue = pTVar6->TypedValue;
        __return_storage_ptr__->bIsSet = true;
      }
      goto LAB_1461b1488;
    }
    TVar7.Value = (__return_storage_ptr__->TypedValue).Type.Value;
    pTVar5 = __return_storage_ptr__;
    if (TVar7.Value != '\x02') goto LAB_1461b1451;
    plVar8 = plVar8 + 1;
  } while( true );
}

// GetTypeHash @ 1461b47a0

uint __cdecl GetTypeHash(FMovieSceneEvaluationFieldSegmentPtr *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(ulonglong *)param_1;
  iVar4 = (int)uVar1;
  uVar3 = (int)(uVar1 >> 0x20) - iVar4 ^ (uint)(uVar1 >> 0xd) & 0x7ffff;
  uVar2 = (-0x61c88647 - uVar3) - iVar4 ^ uVar3 << 8;
  uVar5 = (iVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = (param_1->SegmentID).IdentifierIndex - uVar5 ^ uVar5 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar2 << 8;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  return (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// LexToString @ 1461bc5c0

FString * __cdecl LexToString(FString *__return_storage_ptr__,FMovieSceneAnimTypeID *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%#010llx");
  return __return_storage_ptr__;
}

// LexToString @ 1461bc5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl LexToString(FString *__return_storage_ptr__,FMovieSceneSequenceTransform *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  uchar uVar4;
  FString *pFVar5;
  void *pvVar6;
  ulong64 uVar7;
  FMovieSceneNestedSequenceTransform *this;
  FMovieSceneNestedSequenceTransform *pFVar8;
  int iVar9;
  double dVar10;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [8];
  undefined8 local_2a0;
  FFrameTime local_298;
  FString local_290;
  FString *local_280;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_278.End = (wchar_t *)local_58;
  local_280 = __return_storage_ptr__;
  pFVar5 = LexToString(&local_290,&param_1->LinearTransform);
  iVar1 = (pFVar5->Data).ArrayNum;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  uVar7 = (ulong64)iVar9;
  if (local_278.End < local_278.CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_278,uVar7);
  }
  if (iVar9 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_278.CurPos,pFVar2,uVar7 * 2);
    local_278.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
  }
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  dVar3 = __real_3ff0000000000000;
  iVar9 = (param_1->NestedTransforms).ArrayNum;
  this = (FMovieSceneNestedSequenceTransform *)(param_1->NestedTransforms).AllocatorInstance.Data;
  pFVar8 = this + iVar9;
  do {
    if ((param_1->NestedTransforms).ArrayNum != iVar9) {
      `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2a8);
    }
    pFVar5 = local_280;
    if (this == pFVar8) {
      if (local_278.End < local_278.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,1);
      }
      *local_278.CurPos = L'\0';
      FString::FString(pFVar5,local_278.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
      return pFVar5;
    }
    local_2a0 = 0;
    local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298 = this->Offset;
    if ((local_298.FrameNumber.Value.Value == 0) && (local_298.SubFrame == 0.0)) {
      if ((*(ulonglong *)(this->TimeScale).Variant.Data & 0xfff8000000000000) == 0xfff8000000000000)
      {
        uVar4 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this);
        if (uVar4 != 0xff) goto LAB_1461bc7b3;
      }
      dVar10 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(&this->TimeScale);
      if (dVar10 == dVar3) {
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_278,L" [ %d = ");
        FMovieSceneNestedSequenceTransform::ToString(this,&local_278);
        if (local_278.End < local_278.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_278,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_278.CurPos,L" ]",4);
        local_278.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
      }
    }
LAB_1461bc7b3:
    this = this + 1;
  } while( true );
}

// LexToString @ 1461bc840

FString * __cdecl LexToString(FString *__return_storage_ptr__,FMovieSceneTimeTransform *param_1)

{
  float fVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  fVar1 = (param_1->Offset).SubFrame;
  if (param_1->TimeScale == __real_3f800000) {
    if (fVar1 == 0.0) {
      FString::PrintfImpl(&local_18,L"[ %+i ]");
    }
    else {
      FString::PrintfImpl(&local_18,L"[ %+i+%.3f ]");
    }
  }
  else if (fVar1 == 0.0) {
    FString::PrintfImpl(&local_18,L"[ %+i x%.3f ]");
  }
  else {
    FString::PrintfImpl(&local_18,L"[ %+i+%.3f x%.3f ]");
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  FString::FString(__return_storage_ptr__,(wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LexToString @ 1461bc910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl LexToString(FString *__return_storage_ptr__,FMovieSceneWarpCounter *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_298 [32];
  undefined1 local_278 [8];
  FString local_270;
  undefined8 local_260;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  if ((int)param_1->_padding_ == 0) {
    FString::FString(__return_storage_ptr__,L"[]");
  }
  else {
    local_258.Base = local_238;
    local_258.CurPos = local_238;
    local_258.End = (wchar_t *)local_38;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    pvVar3 = FGenericPlatformString::Memcpy(local_238,L"[",2);
    iVar2 = (int)param_1->_padding_;
    local_258.CurPos = (wchar_t *)((longlong)pvVar3 + 2);
    puVar4 = (undefined8 *)param_1->_padding_;
    iVar5 = 0;
    puVar1 = puVar4 + iVar2;
    while( true ) {
      if ((int)param_1->_padding_ != iVar2) {
        `TCheckedPointerIterator<FFrameTime_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_278);
      }
      if (puVar4 == puVar1) break;
      local_260 = *puVar4;
      if (0 < iVar5) {
        if (local_258.End < local_258.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_258,1);
        }
        pvVar3 = FGenericPlatformString::Memcpy(local_258.CurPos,L",",2);
        local_258.CurPos = (wchar_t *)((longlong)pvVar3 + 2);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"%.3f");
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    pvVar3 = FGenericPlatformString::Memcpy(local_258.CurPos,L"]",2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar3 + 2);
    if (local_258.End < (wchar_t *)((longlong)pvVar3 + 4U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    *local_258.CurPos = L'\0';
    FString::FString(&local_270,local_258.Base);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_270.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_270.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  }
  return __return_storage_ptr__;
}

// PowIn @ 1461c38b0

float __cdecl Impl::PowIn(float param_1,float param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fc21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = powf(param_1,param_2);
  return fVar1;
}

// PowOut @ 1461c38c0

float __cdecl Impl::PowOut(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  fVar2 = powf(__real_3f800000 - param_1,param_2);
  return fVar1 - fVar2;
}

// SinIn @ 1461d4650

float __cdecl Impl::SinIn(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  fVar2 = sinf((__real_3f800000 - param_1) * __real_3fc90fdb);
  return fVar1 - fVar2;
}

// SinOut @ 1461d4690

float __cdecl Impl::SinOut(float param_1)

{
  float fVar1;
  
  fVar1 = sinf(param_1 * __real_3fc90fdb);
  return fVar1;
}

// SortLowerBounds @ 1461d46b0

bool __cdecl
MovieSceneHelpers::SortLowerBounds
          (TRangeBound<FFrameNumber> param_1,TRangeBound<FFrameNumber> param_2)

{
  TEnumAsByte<ERangeBoundTypes::Type> TVar1;
  FFrameNumber FVar2;
  TEnumAsByte<ERangeBoundTypes::Type> TVar3;
  TEnumAsByte<ERangeBoundTypes::Type> TVar5;
  FFrameNumber FVar6;
  uint uVar7;
  FFrameNumber FVar4;
  
  TVar1 = param_1.Type.Value;
  uVar7 = param_1._0_4_ & 0xff;
  TVar3 = param_2.Type.Value;
  FVar4 = param_2.Value.Value;
  FVar2 = param_1.Value.Value;
  FVar6.Value = FVar2.Value;
  TVar5.Value = TVar1.Value;
  if ((((uVar7 != 2) &&
       (FVar6.Value = FVar4.Value, TVar5.Value = TVar3.Value, TVar3.Value != '\x02')) &&
      (FVar6.Value = FVar2.Value, TVar5.Value = TVar1.Value, FVar4.Value <= FVar2.Value)) &&
     ((FVar6.Value = FVar4.Value, TVar5.Value = TVar3.Value, FVar2.Value <= FVar4.Value &&
      (uVar7 == 1)))) {
    FVar6.Value = FVar2.Value;
    TVar5.Value = TVar1.Value;
  }
  if (((TVar5.Value == uVar7) && ((TVar5.Value == 2 || (FVar6.Value == FVar2.Value)))) &&
     ((uVar7 != (param_2._0_4_ & 0xff) || ((uVar7 != 2 && (FVar2.Value != FVar4.Value)))))) {
    return true;
  }
  return false;
}

// SortTokens @ 1461d4790

bool __cdecl
SortTokens(TInlineValue<IMovieSceneSharedExecutionToken,32,8> *param_1,
          TInlineValue<IMovieSceneSharedExecutionToken,32,8> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (!param_1->bIsValid) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  if (!param_1->bInline) {
    param_1 = *(TInlineValue<IMovieSceneSharedExecutionToken,32,8> **)(param_1->Data).Pad;
  }
  iVar1 = *(int *)((param_1->Data).Pad + 8);
  if (!param_2->bIsValid) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  if (!param_2->bInline) {
    param_2 = *(TInlineValue<IMovieSceneSharedExecutionToken,32,8> **)(param_2->Data).Pad;
  }
  return iVar1 < *(int *)((param_2->Data).Pad + 8);
}

// SortUpperBounds @ 1461d4830

bool __cdecl
MovieSceneHelpers::SortUpperBounds
          (TRangeBound<FFrameNumber> param_1,TRangeBound<FFrameNumber> param_2)

{
  FFrameNumber FVar1;
  FFrameNumber FVar2;
  uint uVar3;
  FFrameNumber FVar4;
  uint uVar5;
  
  uVar3 = param_1._0_4_;
  uVar5 = uVar3 & 0xff;
  FVar2 = param_2.Value.Value;
  FVar1 = param_1.Value.Value;
  if (uVar5 != 2) {
    FVar4.Value = FVar1.Value;
    if (param_2.Type.Value.Value == '\x02') {
      uVar3 = uVar3 & 0xff;
      goto LAB_1461d488c;
    }
    if (FVar1.Value < FVar2.Value) {
      uVar3 = uVar3 & 0xff;
      goto LAB_1461d488c;
    }
    if ((FVar1.Value <= FVar2.Value) && (param_1.Type.Value.Value == '\0')) {
      uVar3 = uVar3 & 0xff;
      goto LAB_1461d488c;
    }
  }
  uVar3 = param_2._0_4_ & 0xff;
  FVar4.Value = FVar2.Value;
LAB_1461d488c:
  if (((uVar3 == uVar5) && (((char)uVar3 == '\x02' || (FVar4.Value == FVar1.Value)))) &&
     ((uVar5 != (param_2._0_4_ & 0xff) || ((uVar5 != 2 && (FVar1.Value != FVar2.Value)))))) {
    return true;
  }
  return false;
}

// Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister @ 1461e1240

UClass * __cdecl Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBuiltInEasingFunction",
               &Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.InnerSingleton,
               UMovieSceneBuiltInEasingFunction::
               StaticRegisterNativesUMovieSceneBuiltInEasingFunction,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBuiltInEasingFunction>,
               InternalVTableHelperCtorCaller<UMovieSceneBuiltInEasingFunction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCustomClockSource_NoRegister @ 1461e12f0

UClass * __cdecl Z_Construct_UClass_UMovieSceneCustomClockSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomClockSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCustomClockSource",
               &Z_Registration_Info_UClass_UMovieSceneCustomClockSource.InnerSingleton,
               UMovieSceneCustomClockSource::StaticRegisterNativesUMovieSceneCustomClockSource,0x28,
               8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCustomClockSource>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomClockSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomClockSource.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEasingExternalCurve_NoRegister @ 1461e13b0

UClass * __cdecl Z_Construct_UClass_UMovieSceneEasingExternalCurve_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEasingExternalCurve",
               &Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.InnerSingleton,
               UMovieSceneEasingExternalCurve::StaticRegisterNativesUMovieSceneEasingExternalCurve,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEasingExternalCurve>,
               InternalVTableHelperCtorCaller<UMovieSceneEasingExternalCurve>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister @ 1461e1460

UClass * __cdecl Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEvaluationHook.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEvaluationHook",
               &Z_Registration_Info_UClass_UMovieSceneEvaluationHook.InnerSingleton,
               UMovieSceneEvaluationHook::StaticRegisterNativesUMovieSceneEvaluationHook,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEvaluationHook>,
               InternalVTableHelperCtorCaller<UMovieSceneEvaluationHook>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvaluationHook.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister @ 1461e1520

UClass * __cdecl Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNodeGroupCollection",
               &Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.InnerSingleton,
               UMovieSceneNodeGroupCollection::StaticRegisterNativesUMovieSceneNodeGroupCollection,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneNodeGroupCollection>,
               InternalVTableHelperCtorCaller<UMovieSceneNodeGroupCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister @ 1461e15d0

UClass * __cdecl Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNodeGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNodeGroup",
               &Z_Registration_Info_UClass_UMovieSceneNodeGroup.InnerSingleton,
               UMovieSceneNodeGroup::StaticRegisterNativesUMovieSceneNodeGroup,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNodeGroup>,
               InternalVTableHelperCtorCaller<UMovieSceneNodeGroup>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNodeGroup.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneShotMetaData_NoRegister @ 1461e1680

UClass * __cdecl Z_Construct_UClass_UMovieSceneShotMetaData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneShotMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneShotMetaData",
               &Z_Registration_Info_UClass_UMovieSceneShotMetaData.InnerSingleton,
               UMovieSceneShotMetaData::StaticRegisterNativesUMovieSceneShotMetaData,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneShotMetaData>
               ,InternalVTableHelperCtorCaller<UMovieSceneShotMetaData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneShotMetaData.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister @ 1461e1730

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackInstanceSystem",
               &Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.InnerSingleton,
               UMovieSceneTrackInstanceSystem::StaticRegisterNativesUMovieSceneTrackInstanceSystem,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackInstanceSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieScene_NoRegister @ 1461e17f0

UClass * __cdecl Z_Construct_UClass_UMovieScene_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScene",
               &Z_Registration_Info_UClass_UMovieScene.InnerSingleton,
               UMovieScene::StaticRegisterNativesUMovieScene,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieScene>,
               InternalVTableHelperCtorCaller<UMovieScene>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene.InnerSingleton;
}

// Z_Construct_UClass_UNodeAndChannelMappings_NoRegister @ 1461e18b0

UClass * __cdecl Z_Construct_UClass_UNodeAndChannelMappings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNodeAndChannelMappings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"NodeAndChannelMappings",
               &Z_Registration_Info_UClass_UNodeAndChannelMappings.InnerSingleton,
               UNodeAndChannelMappings::StaticRegisterNativesUNodeAndChannelMappings,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNodeAndChannelMappings>,
               InternalVTableHelperCtorCaller<UNodeAndChannelMappings>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNodeAndChannelMappings.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneEditorData @ 1461e1970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEditorData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEditorData.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEditorData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEditorData.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEditorData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEntityComponentField @ 1461e19f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEntityComponentField(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntityComponentField.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEntityComponentField.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEntityComponentField_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntityComponentField.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEntityComponentField.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationField @ 1461e1a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationField(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationField.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationField.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationField_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationField.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationField.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr @ 1461e1af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate @ 1461e1b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplate.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform @ 1461e1bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneInverseSequenceTransform.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneInverseSequenceTransform.InnerSingleton
               ,&Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneInverseSequenceTransform.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneInverseSequenceTransform.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate @ 1461e1c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance @ 1461e1cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSectionGroup @ 1461e1d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSectionGroup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionGroup.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSectionGroup.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionGroup.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSectionGroup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy @ 1461e1df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchy.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSubSectionData @ 1461e1e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSubSectionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry @ 1461e1ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTreeEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTreeEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTreeEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTreeEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTimeWarping @ 1461e1f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTimeWarping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarping.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTimeWarping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarping.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTrackImplementation @ 1461e1ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackImplementation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementation.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementation.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementation.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementation.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry @ 1461e2070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTrackLabels @ 1461e20f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackLabels(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackLabels.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackLabels.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackLabels.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackLabels.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneWarpCounter @ 1461e2170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneWarpCounter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneWarpCounter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneWarpCounter.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneWarpCounter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneWarpCounter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType @ 1461e21f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOptionalMovieSceneBlendType.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOptionalMovieSceneBlendType.InnerSingleton,
               &Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOptionalMovieSceneBlendType.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOptionalMovieSceneBlendType.InnerSingleton;
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

// begin @ 1461e22c0

FMovieSceneBlendTypeFieldIterator __cdecl begin(FMovieSceneBlendTypeField *param_1)

{
  UPackage *pUVar1;
  EMovieSceneBlendType EVar2;
  EMovieSceneBlendType *in_RDX;
  
  param_1->BlendTypeField = Invalid;
  param_1->BlendTypeField = *in_RDX;
  EVar2 = ~Invalid;
  while (param_1[1].BlendTypeField = EVar2 + Absolute, -1 < (char)(EVar2 + Absolute)) {
    if (Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton == (UEnum *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_MovieScene();
      Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType,(UObject *)pUVar1,
                         L"EMovieSceneBlendType");
    }
    EVar2 = param_1[1].BlendTypeField;
    if (((char)((char)((Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton)->Names).
                      NumValues + -2) < (char)EVar2) ||
       ((param_1->BlendTypeField &
        '\x01' << (EVar2 & (Override|AdditiveFromBase|Relative|Additive|Absolute))) != Invalid))
    break;
  }
  return SUB82(param_1,0);
}

// end @ 1461e23f0

FMovieSceneBlendTypeFieldIterator __cdecl end(FMovieSceneBlendTypeField *param_1)

{
  UPackage *pUVar1;
  EMovieSceneBlendType *in_RDX;
  
  param_1->BlendTypeField = Invalid;
  param_1->BlendTypeField = *in_RDX;
  if (Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType,(UObject *)pUVar1,
                       L"EMovieSceneBlendType");
  }
  param_1[1].BlendTypeField =
       (char)((Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton)->Names).NumValues -
       Absolute;
  return SUB82(param_1,0);
}

// Override'' @ 1503d9720

void __cdecl `dynamic_atexit_destructor_for_'FGetTrackSegmentBlender::Override__(void)

{
  TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *pTVar1;
  
  if (FGetTrackSegmentBlender::Override.bIsValid) {
    pTVar1 = &FGetTrackSegmentBlender::Override;
    if (!FGetTrackSegmentBlender::Override.bInline) {
      pTVar1 = (TInlineValue<FMovieSceneTrackSegmentBlender,16,8> *)
               FGetTrackSegmentBlender::Override.Data.Pad._0_8_;
    }
    FGetTrackSegmentBlender::Override.bIsValid = false;
    (*(code *)**(undefined8 **)(pTVar1->Data).Pad)(pTVar1,0);
    if (!FGetTrackSegmentBlender::Override.bInline) {
      FMemory::Free((void *)FGetTrackSegmentBlender::Override.Data.Pad._0_8_);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreDependenciesWhenNotThreading'' @ 1503d9780

void __cdecl
UE::MovieScene::_dynamic_atexit_destructor_for__CVarIgnoreDependenciesWhenNotThreading__(void)

{
  CVarIgnoreDependenciesWhenNotThreading._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIgnoreDependenciesWhenNotThreading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerCustomTaskScheduling'' @ 1503d97a0

void __cdecl
UE::MovieScene::_dynamic_atexit_destructor_for__CVarSequencerCustomTaskScheduling__(void)

{
  CVarSequencerCustomTaskScheduling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSequencerCustomTaskScheduling);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterMovieSceneEvaluationCustomVersion'' @ 1503d97c0

void __cdecl _dynamic_atexit_destructor_for__GRegisterMovieSceneEvaluationCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterMovieSceneEvaluationCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 1503d97e0

void __cdecl
`UE::MovieScene::FPlaybackCapabilityIDRegistry::Get'::__l2::
_dynamic_atexit_destructor_for__Instance__(void)

{
  DestructItems<UE::MovieScene::FPlaybackCapabilityIDInfo,int>
            ((FPlaybackCapabilityIDInfo *)::Instance.Infos.AllocatorInstance.Data,
             ::Instance.Infos.ArrayNum);
  if (::Instance.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.Infos.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'PropertyTypeIDs'' @ 1503d9820

void __cdecl _dynamic_atexit_destructor_for__PropertyTypeIDs__(void)

{
  DestructItems<FString,int>
            ((FString *)PropertyTypeIDs.Data.AllocatorInstance.Data,PropertyTypeIDs.Data.ArrayNum);
  if (PropertyTypeIDs.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(PropertyTypeIDs.Data.AllocatorInstance.Data);
  }
  if (PropertyTypeIDs.TypeIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(PropertyTypeIDs.TypeIDs.AllocatorInstance.Data);
    return;
  }
  return;
}

