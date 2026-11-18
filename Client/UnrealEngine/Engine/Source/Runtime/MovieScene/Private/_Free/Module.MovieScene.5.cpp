// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 652

// AssetRegistryTag_Author'' @ 1410889e0

void __cdecl `dynamic_initializer_for_'UMovieSceneMetaData::AssetRegistryTag_Author__(void)

{
  ::FName::FName(&UMovieSceneMetaData::AssetRegistryTag_Author,"MovieSceneMetaData_Author");
  return;
}

// AssetRegistryTag_Created'' @ 141088a00

void __cdecl `dynamic_initializer_for_'UMovieSceneMetaData::AssetRegistryTag_Created__(void)

{
  ::FName::FName(&UMovieSceneMetaData::AssetRegistryTag_Created,"MovieSceneMetaData_Created");
  return;
}

// AssetRegistryTag_Notes'' @ 141088a20

void __cdecl `dynamic_initializer_for_'UMovieSceneMetaData::AssetRegistryTag_Notes__(void)

{
  ::FName::FName(&UMovieSceneMetaData::AssetRegistryTag_Notes,"MovieSceneMetaData_Notes");
  return;
}

// `dynamic_initializer_for_'CVarLegacyConversionFrameRate'' @ 141088a40

void __cdecl _dynamic_initializer_for__CVarLegacyConversionFrameRate__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"60000fps");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarLegacyConversionFrameRate,L"MovieScene.LegacyConversionFrameRate",&local_18,
             L"Specifies default tick resolution for UMovieScene data saved before 4.20 (default: 60000fps). Examples: 60000 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarLegacyConversionFrameRate__);
  return;
}

// `dynamic_initializer_for_'CVarMovieSceneMaxLatentActionLoops'' @ 141088ab0

void __cdecl UE::MovieScene::_dynamic_initializer_for__CVarMovieSceneMaxLatentActionLoops__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMovieSceneMaxLatentActionLoops,L"Sequencer.MaxLatentActionLoops",
             &GMovieSceneMaxLatentActionLoops,
             L"Defines the maximum number of latent action loops that can be run in one frame.\n",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarMovieSceneMaxLatentActionLoops__);
  return;
}

// `dynamic_initializer_for_'CVarMovieSceneRemoveMutedTracksOnCook'' @ 141088b00

void __cdecl _dynamic_initializer_for__CVarMovieSceneRemoveMutedTracksOnCook__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMovieSceneRemoveMutedTracksOnCook,L"MovieScene.RemoveMutedTracksOnCook",
             &GMovieSceneRemoveMutedTracksOnCook,
             L"If 1 remove muted tracks on cook, otherwise leave as is.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMovieSceneRemoveMutedTracksOnCook__);
  return;
}

// `dynamic_initializer_for_'CVarMovieSceneSuppressSignatureChangeInCook'' @ 141088b50

void __cdecl _dynamic_initializer_for__CVarMovieSceneSuppressSignatureChangeInCook__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMovieSceneSuppressSignatureChangeInCook,L"Sequencer.SuppressSignatureChangeInCook"
             ,&GMovieSceneSuppressSignatureChangeInCook,
             L"(Default: true) Globally suppress signature GUID changes inside cook commandlets.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarMovieSceneSuppressSignatureChangeInCook__);
  return;
}

// `dynamic_initializer_for_'CVarMovieSceneTickIntervalResolutionMs'' @ 141088ba0

void __cdecl
UE::MovieScene::_dynamic_initializer_for__CVarMovieSceneTickIntervalResolutionMs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMovieSceneTickIntervalResolutionMs,L"Sequencer.TickIntervalGroupingResolutionMs",
             &GMovieSceneTickIntervalResolutionMs,
             L"Defines the maximum resolution for actor tick interval groupings. Bigger numbers will group more actors together when they have custom tick intervals, but will lead to less accurate intervals.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMovieSceneTickIntervalResolutionMs__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerApplyDisplayRateToDynResFrameTimeBudget'' @ 141088bf0

void __cdecl _dynamic_initializer_for__CVarSequencerApplyDisplayRateToDynResFrameTimeBudget__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSequencerApplyDisplayRateToDynResFrameTimeBudget,
             L"Sequencer.ApplyDisplayRateToDynamicResolutionFrameTimeBudget",
             &GSequencerApplyDisplayRateToDynResFrameTimeBudget,
             L"(Whether to override r.DynamicRes.FrameTimeBudget based on sequence display rate when using \'Lock to Display Rate at Runtime\'."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerApplyDisplayRateToDynResFrameTimeBudget__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerMaxSmoothedNetSyncSampleAge'' @ 141088c40

void __cdecl _dynamic_initializer_for__CVarSequencerMaxSmoothedNetSyncSampleAge__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSequencerMaxSmoothedNetSyncSampleAge,L"Sequencer.SmoothedMaxNetSyncSampleAge",
             &GSequencerMaxSmoothedNetSyncSampleAge,
             L"(Default: 5000. Defines the range of samples (in milliseconds) required to perform smoothed net sync. Use 0 to disable smoothing."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerMaxSmoothedNetSyncSampleAge__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerMaxSmoothedNetSyncSampleCount'' @ 141088c90

void __cdecl _dynamic_initializer_for__CVarSequencerMaxSmoothedNetSyncSampleCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSequencerMaxSmoothedNetSyncSampleCount,L"Sequencer.SmoothedMaxNetSyncSampleCount",
             &GSequencerMaxSmoothedNetSyncSampleCount,
             L"(Default: 50. The maximum number of samples to keep in memory.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerMaxSmoothedNetSyncSampleCount__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerNetSyncThresholdMS'' @ 141088ce0

void __cdecl _dynamic_initializer_for__CVarSequencerNetSyncThresholdMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSequencerNetSyncThresholdMS,L"Sequencer.NetSyncThreshold",
             &GSequencerNetSyncThresholdMS,
             L"(Default: 200ms. Defines the threshold at which clients and servers must be forcibly re-synced during playback."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerNetSyncThresholdMS__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerRelativeTimecodeSmoothing'' @ 141088d30

void __cdecl _dynamic_initializer_for__CVarSequencerRelativeTimecodeSmoothing__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSequencerRelativeTimecodeSmoothing,L"Sequencer.RelativeTimecodeSmoothing",
             local_res8,
             L"If nonzero, accumulate with platform time since when the timecodes were equal.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerRelativeTimecodeSmoothing__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerSecondsPerFrame'' @ 141088d80

void __cdecl _dynamic_initializer_for__CVarSequencerSecondsPerFrame__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSequencerSecondsPerFrame,L"Sequencer.SecondsPerFrame",local_res8,
             L"Seconds per frame to wait when in play every frame mode.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerSecondsPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerSmoothedNetSyncDeviationThreshold'' @ 141088dd0

void __cdecl _dynamic_initializer_for__CVarSequencerSmoothedNetSyncDeviationThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSequencerSmoothedNetSyncDeviationThreshold,
             L"Sequencer.SmoothedNetSyncDeviationThreshold",
             &GSequencerSmoothedNetSyncDeviationThreshold,
             L"(Default: 200ms. Defines the acceptable deviation for smoothed net sync samples. Samples outside this deviation will be discarded."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerSmoothedNetSyncDeviationThreshold__);
  return;
}

// `dynamic_initializer_for_'GDeferredSignedObjectChangeHandler'' @ 141088e20

void __cdecl UE::MovieScene::_dynamic_initializer_for__GDeferredSignedObjectChangeHandler__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDeferredSignedObjectChangeHandler__);
  return;
}

// `dynamic_initializer_for_'GDeferredSignedObjectFlushSignals'' @ 141088e40

void __cdecl UE::MovieScene::_dynamic_initializer_for__GDeferredSignedObjectFlushSignals__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDeferredSignedObjectFlushSignals__);
  return;
}

// `dynamic_initializer_for_'GGlobalPlayerRegistry'' @ 141088e60

void __cdecl UE::MovieScene::_dynamic_initializer_for__GGlobalPlayerRegistry__(void)

{
  atexit(_dynamic_atexit_destructor_for__GGlobalPlayerRegistry__);
  return;
}

// `dynamic_initializer_for_'GGlobalPlayerRegistryLock'' @ 141088e80

void __cdecl UE::MovieScene::_dynamic_initializer_for__GGlobalPlayerRegistryLock__(void)

{
  atexit(_dynamic_atexit_destructor_for__GGlobalPlayerRegistryLock__);
  return;
}

// `dynamic_initializer_for_'GGlobalPlayerUpdateFlags'' @ 141088ea0

void __cdecl UE::MovieScene::_dynamic_initializer_for__GGlobalPlayerUpdateFlags__(void)

{
  atexit(_dynamic_atexit_destructor_for__GGlobalPlayerUpdateFlags__);
  return;
}

// `dynamic_initializer_for_'LogMovieScene'' @ 141088ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMovieScene__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMovieScene,L"LogMovieScene",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMovieScene__);
  return;
}

// `dynamic_initializer_for_'LogMovieSceneECS'' @ 141088f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMovieSceneECS__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMovieSceneECS,L"LogMovieSceneECS",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMovieSceneECS__);
  return;
}

// `dynamic_initializer_for_'LogMovieSceneRepl'' @ 141088f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMovieSceneRepl__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMovieSceneRepl,L"LogMovieSceneRepl",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMovieSceneRepl__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMovieScene'' @ 141088f80

void __cdecl _dynamic_initializer_for__ModuleRegistrantMovieScene__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MovieScene";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MovieScene",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMovieSceneModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent'' @ 141088fd0

void __cdecl
_dynamic_initializer_for__NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent__(void)

{
  FName::FName(&NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent,
               L"RPC_ExplicitServerUpdateEvent");
  return;
}

// `dynamic_initializer_for_'NAME_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent'' @ 141088ff0

void __cdecl
_dynamic_initializer_for__NAME_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent__(void)

{
  FName::FName(&NAME_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent,
               L"RPC_OnFinishPlaybackEvent");
  return;
}

// `dynamic_initializer_for_'NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent'' @ 141089010

void __cdecl _dynamic_initializer_for__NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent__(void)

{
  FName::FName(&NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent,L"RPC_OnStopEvent");
  return;
}

// `dynamic_initializer_for_'SpawnablesAnnotation'' @ 141089030

void __cdecl _dynamic_initializer_for__SpawnablesAnnotation__(void)

{
  atexit(_dynamic_atexit_destructor_for__SpawnablesAnnotation__);
  return;
}

// `dynamic_initializer_for_'SpawnedObjectAnnotation'' @ 141089050

void __cdecl _dynamic_initializer_for__SpawnedObjectAnnotation__(void)

{
  atexit(_dynamic_atexit_destructor_for__SpawnedObjectAnnotation__);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 141089070

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 141089100

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 141089190

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 141089220

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_SequenceTickManager'' @ 1410892b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_SequenceTickManager__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_SequenceTickManager ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_SequenceTickManager>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_SequenceTickManager");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SequenceTickManager,*pFVar1,
               L"Sequence Tick Manager","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_TickClients'' @ 141089340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_TickClients__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_TickClients ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_TickClients>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_TickClients");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_TickClients,*pFVar1,
               L"Tick Clients","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneRepl_NumServerSamples'' @ 1410893d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneRepl_NumServerSamples__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneRepl_NumServerSamples ==
      (FThreadSafeStaticStat<FStat_MovieSceneRepl_NumServerSamples>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneRepl_NumServerSamples");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneRepl_NumServerSamples,*pFVar1,
               L"NumServerSamples","STATGROUP_MovieSceneRepl","STATCAT_Advanced",L"MovieSceneRepl",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneRepl_SmoothedServerTime'' @ 141089460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneRepl_SmoothedServerTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneRepl_SmoothedServerTime ==
      (FThreadSafeStaticStat<FStat_MovieSceneRepl_SmoothedServerTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneRepl_SmoothedServerTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneRepl_SmoothedServerTime,*pFVar1,
               L"SmoothedServerTime","STATGROUP_MovieSceneRepl","STATCAT_Advanced",L"MovieSceneRepl"
               ,true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h__Script_MovieScene_232653786'' @ 1410894f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h__Script_MovieScene_232653786__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h__Script_MovieScene_1128646424'' @ 141089530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h__Script_MovieScene_1128646424__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h__Script_MovieScene_1078181054'' @ 141089570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h__Script_MovieScene_1078181054__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h__Script_MovieScene_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingProxy_h__Script_MovieScene_1812478865'' @ 1410895c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingProxy_h__Script_MovieScene_1812478865__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingProxy_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingReferences_h__Script_MovieScene_2060223123'' @ 141089600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingReferences_h__Script_MovieScene_2060223123__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingReferences_h__Script_MovieScene_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h__Script_MovieScene_1418426183'' @ 141089640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h__Script_MovieScene_1418426183__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h__Script_MovieScene_1932007745'' @ 141089680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h__Script_MovieScene_1932007745__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneClock_h__Script_MovieScene_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h__Script_MovieScene_154819365'' @ 1410896c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h__Script_MovieScene_154819365__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h__Script_MovieScene_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h__Script_MovieScene_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h__Script_MovieScene_2425765223'' @ 141089710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h__Script_MovieScene_2425765223__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h__Script_MovieScene_156788197'' @ 141089750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h__Script_MovieScene_156788197__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h__Script_MovieScene_4249345922'' @ 141089790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h__Script_MovieScene_4249345922__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h__Script_MovieScene_3829467701'' @ 1410897d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h__Script_MovieScene_3829467701__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h__Script_MovieScene_2358440632'' @ 141089810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h__Script_MovieScene_2358440632__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h__Script_MovieScene_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h__Script_MovieScene_2578333587'' @ 141089860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h__Script_MovieScene_2578333587__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h__Script_MovieScene_3490475445'' @ 1410898a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h__Script_MovieScene_3490475445__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h__Script_MovieScene_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h__Script_MovieScene_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h__Script_MovieScene_3473531340'' @ 1410898f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h__Script_MovieScene_3473531340__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h__Script_MovieScene_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h__Script_MovieScene_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h__Script_MovieScene_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickInterval_h__Script_MovieScene_734517890'' @ 141089940

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickInterval_h__Script_MovieScene_734517890__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickInterval_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h__Script_MovieScene_4282853983'' @ 141089980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h__Script_MovieScene_4282853983__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h__Script_MovieScene_2674558743'' @ 1410899c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h__Script_MovieScene_2674558743__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h__Script_MovieScene_4090978168'' @ 141089a00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h__Script_MovieScene_4090978168__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h__Script_MovieScene_979004193'' @ 141089a40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h__Script_MovieScene_979004193__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSpawnable_h__Script_MovieScene_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h__Script_MovieScene_2825305436'' @ 141089a90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h__Script_MovieScene_2825305436__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h__Script_MovieScene_2175188024'' @ 141089ad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h__Script_MovieScene_2175188024__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h__Script_MovieScene_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h__Script_MovieScene_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h__Script_MovieScene_3926948800'' @ 141089b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h__Script_MovieScene_3926948800__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h__Script_MovieScene_2047972021'' @ 141089b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h__Script_MovieScene_2047972021__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h__Script_MovieScene_3248379222'' @ 141089ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h__Script_MovieScene_3248379222__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSectionTimingParameters_h__Script_MovieScene_1814973305'' @ 141089be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSectionTimingParameters_h__Script_MovieScene_1814973305__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSectionTimingParameters_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UClass_UMovieSceneTrack_NoRegister @ 1461e28c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrack",
               &Z_Registration_Info_UClass_UMovieSceneTrack.InnerSingleton,
               UMovieSceneTrack::StaticRegisterNativesUMovieSceneTrack,0x118,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTrack>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrack.InnerSingleton;
}

// `scalar_deleting_destructor' @ 1461e2ff0

void * __thiscall
FMovieSceneSequenceInstanceData::_scalar_deleting_destructor_
          (FMovieSceneSequenceInstanceData *this,uint param_1)

{
  *this = (FMovieSceneSequenceInstanceData)&___7FMovieSceneSequenceInstanceData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneSequence_NoRegister @ 1461e3200

UClass * __cdecl Z_Construct_UClass_UMovieSceneSequence_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequence",
               &Z_Registration_Info_UClass_UMovieSceneSequence.InnerSingleton,
               UMovieSceneSequence::StaticRegisterNativesUMovieSceneSequence,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequence>,
               InternalVTableHelperCtorCaller<UMovieSceneSequence>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequence.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister @ 1461e3380

UClass * __cdecl Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMovieSceneSequenceTickManager::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequenceTickManager",
               &Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.InnerSingleton,
               UMovieSceneSequenceTickManager::StaticRegisterNativesUMovieSceneSequenceTickManager,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequenceTickManager>,
               InternalVTableHelperCtorCaller<UMovieSceneSequenceTickManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.InnerSingleton;
}

// `scalar_deleting_destructor' @ 1461e3650

void * __thiscall
FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneFolder_NoRegister @ 1461e3690

UClass * __cdecl Z_Construct_UClass_UMovieSceneFolder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneFolder",
               &Z_Registration_Info_UClass_UMovieSceneFolder.InnerSingleton,
               UMovieSceneFolder::StaticRegisterNativesUMovieSceneFolder,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFolder>,
               InternalVTableHelperCtorCaller<UMovieSceneFolder>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFolder.InnerSingleton;
}

// NewStructOps @ 1461e3750

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneBinding,&UE::CoreUObject::Private::Construct<FMovieSceneBinding>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneBinding>,&UE::CoreUObject::Private::Destruct<FMovieSceneBinding>,&UE::CoreUObject::Private::Copy<FMovieSceneBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneHookSection @ 1461e3a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneHookSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneHookSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneHookSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneHookSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneHookSection.OuterSingleton;
}

// NewProp_bRequiresRangedHook_SetBit @ 1461e3a70

void __cdecl
Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x120) = *(byte *)((longlong)param_1 + 0x120) | 1;
  return;
}

// NewProp_bRequiresTriggerHooks_SetBit @ 1461e3a80

void __cdecl
Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x120) = *(byte *)((longlong)param_1 + 0x120) | 2;
  return;
}

// NewStructOps @ 1461e3cc0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneBindingProxy,&UE::CoreUObject::Private::Construct<FMovieSceneBindingProxy>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneBindingProxy>,&UE::CoreUObject::Private::Destruct<FMovieSceneBindingProxy>,&UE::CoreUObject::Private::Copy<FMovieSceneBindingProxy>,&UE::CoreUObject::Private::GetStructTypeHash<FMovieSceneBindingProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneFolder @ 1461e4030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneFolder(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneFolder.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneFolder.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneFolder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneFolder.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1461e41e0

void * __thiscall
FMovieSceneModule::_scalar_deleting_destructor_(FMovieSceneModule *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ = (longlong)&___7FMovieSceneModule__6B_;
  pTVar3 = (this->ModuleHandle).SharedReferenceCount.ReferenceController;
  if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) ||
     (pTVar3->SharedReferenceCount != (atomic<int>)0x1)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2094403319714807719>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneModule.cpp"
                       ,0x59,"ModuleHandle.IsUnique()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  *(undefined4 *)&(this->EvaluationGroupParameters).field_0x48 = 0;
  pvVar7 = *(void **)&(this->EvaluationGroupParameters).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneEvaluationGroupParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneEvaluationGroupParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneEvaluationGroupParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EvaluationGroupParameters);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModuleHandle).SharedReferenceCount.ReferenceController);
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
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// Z_Construct_UScriptStruct_FMovieSceneBindingReference @ 1461e42c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneBindingReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneBindingReference.InnerSingleton;
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

// NewStructOps @ 1461e4380

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneBindingReference,&UE::CoreUObject::Private::Construct<FMovieSceneBindingReference>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneBindingReference>,&UE::CoreUObject::Private::Destruct<FMovieSceneBindingReference>,&UE::CoreUObject::Private::Copy<FMovieSceneBindingReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneSequencePlayer @ 1461e43c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSequencePlayer(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSequencePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSequencePlayer.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequencePlayer.OuterSingleton;
}

// Z_Construct_UEnum_MovieScene_EMovieScenePositionType @ 1461e4400

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EMovieScenePositionType(void)

{
  if (Z_Registration_Info_UEnum_EMovieScenePositionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieScenePositionType.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieScenePositionType.InnerSingleton;
}

// Z_Construct_UEnum_MovieScene_EUpdatePositionMethod @ 1461e4480

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EUpdatePositionMethod(void)

{
  if (Z_Registration_Info_UEnum_EUpdatePositionMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUpdatePositionMethod.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUpdatePositionMethod.InnerSingleton;
}

// Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature @ 1461e44c0

UFunction * __cdecl
Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams @ 1461e4500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams @ 1461e4580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlayToParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlayToParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlayToParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlayToParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties @ 1461e4600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceReplProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSequenceReplProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceReplProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceReplProperties.InnerSingleton;
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

// EUpdatePositionMethod_StaticEnum @ 1461e46d0

UEnum * __cdecl EUpdatePositionMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod,(UObject *)pUVar1,
                       L"EUpdatePositionMethod");
  }
  return Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton;
}

// NewStructOps @ 1461e48b0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSequenceReplProperties,&UE::CoreUObject::Private::Construct<FMovieSceneSequenceReplProperties>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSequenceReplProperties>,&UE::CoreUObject::Private::Destruct<FMovieSceneSequenceReplProperties>,&UE::CoreUObject::Private::Copy<FMovieSceneSequenceReplProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1461e48f0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingResolveParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneBindingResolveParams,&UE::CoreUObject::Private::Construct<FMovieSceneBindingResolveParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneBindingResolveParams>,&UE::CoreUObject::Private::Destruct<FMovieSceneBindingResolveParams>,&UE::CoreUObject::Private::Copy<FMovieSceneBindingResolveParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EMovieScenePositionType_StaticEnum @ 1461e4930

UEnum * __cdecl EMovieScenePositionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieScenePositionType,(UObject *)pUVar1,
                       L"EMovieScenePositionType");
  }
  return Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton;
}

// NewStructOps @ 1461e4970

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneBindingReferences,&UE::CoreUObject::Private::Construct<FMovieSceneBindingReferences>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneBindingReferences>,&UE::CoreUObject::Private::Destruct<FMovieSceneBindingReferences>,&UE::CoreUObject::Private::Copy<FMovieSceneBindingReferences>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasJumped_SetBit @ 1461e49b0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// NewStructOps @ 1461e49c0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSequencePlaybackParams,&UE::CoreUObject::Private::Construct<FMovieSceneSequencePlaybackParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSequencePlaybackParams>,&UE::CoreUObject::Private::Destruct<FMovieSceneSequencePlaybackParams>,&UE::CoreUObject::Private::Copy<FMovieSceneSequencePlaybackParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bLoop_SetBit @ 1461e4a00

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bLoop_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 1;
  return;
}

// NewProp_bClampToInnerRange_SetBit @ 1461e4a10

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::
NewProp_bClampToInnerRange_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 2;
  return;
}

// NewProp_bReverse_SetBit @ 1461e4a20

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bReverse_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 4;
  return;
}

// NewProp_bClampToOuterRange_SetBit @ 1461e4a30

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::
NewProp_bClampToOuterRange_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 8;
  return;
}

// NewStructOps @ 1461e4a40

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSectionTimingParametersSeconds,&UE::CoreUObject::Private::Construct<FMovieSceneSectionTimingParametersSeconds>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSectionTimingParametersSeconds>,&UE::CoreUObject::Private::Destruct<FMovieSceneSectionTimingParametersSeconds>,&UE::CoreUObject::Private::Copy<FMovieSceneSectionTimingParametersSeconds>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bExclusive_SetBit @ 1461e4af0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1461e4b00

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSequencePlayToParams,&UE::CoreUObject::Private::Construct<FMovieSceneSequencePlayToParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSequencePlayToParams>,&UE::CoreUObject::Private::Destruct<FMovieSceneSequencePlayToParams>,&UE::CoreUObject::Private::Copy<FMovieSceneSequencePlayToParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bLoop_SetBit @ 1461e4b50

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bLoop_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 1;
  return;
}

// NewProp_bClampToInnerRange_SetBit @ 1461e4b70

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::
NewProp_bClampToInnerRange_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 2;
  return;
}

// NewProp_bReverse_SetBit @ 1461e4b80

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bReverse_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 4;
  return;
}

// NewProp_bClampToOuterRange_SetBit @ 1461e4bb0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::
NewProp_bClampToOuterRange_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 8;
  return;
}

// NewStructOps @ 1461e4bc0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSectionTimingParametersFrames,&UE::CoreUObject::Private::Construct<FMovieSceneSectionTimingParametersFrames>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSectionTimingParametersFrames>,&UE::CoreUObject::Private::Destruct<FMovieSceneSectionTimingParametersFrames>,&UE::CoreUObject::Private::Copy<FMovieSceneSectionTimingParametersFrames>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection @ 1461e4cd0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects @ 1461e4d10

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride @ 1461e4d90

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime @ 1461e4e80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1461e4ec0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts @ 1461e4ed0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration @ 1461e4f50

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime @ 1461e5090

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration @ 1461e5130

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate @ 1461e51c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1461e5200

void __cdecl
Z_Construct_UFunction_UMovieSceneSequencePlayer_GetHideHud_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry @ 1461e5210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry.InnerSingleton;
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

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetHideHud @ 1461e5290

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetHideHud(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetHideHud_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1461e52d0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackEvaluationFieldEntry,&UE::CoreUObject::Private::Construct<FMovieSceneTrackEvaluationFieldEntry>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackEvaluationFieldEntry>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackEvaluationFieldEntry>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackEvaluationFieldEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings @ 1461e5310

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate @ 1461e5350

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1461e5390

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackEvaluationField,&UE::CoreUObject::Private::Construct<FMovieSceneTrackEvaluationField>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackEvaluationField>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackEvaluationField>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackEvaluationField>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence @ 1461e53d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAddClientInfo_SetBit @ 1461e5410

void __cdecl
Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::
NewProp_bAddClientInfo_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName @ 1461e5420

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime @ 1461e54d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop @ 1461e5550

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1461e56f0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused @ 1461e5700

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1461e57c0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying @ 1461e57d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneSequence @ 1461e5810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSequence(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSequence.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSequence.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSequence_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequence.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneSection @ 1461e5850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneEasingSettings @ 1461e5890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEasingSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEasingSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEasingSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEasingSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEasingSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions @ 1461e5910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionEvalOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSectionEvalOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionEvalOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSectionEvalOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTimecodeSource @ 1461e5990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTimecodeSource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimecodeSource.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTimecodeSource.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimecodeSource.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTimecodeSource.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 1461e5a10

void __cdecl
Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bCanEditCompletionMode_SetBit @ 1461e5a20

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::
NewProp_bCanEditCompletionMode_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1461e5a30

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSectionEvalOptions,&UE::CoreUObject::Private::Construct<FMovieSceneSectionEvalOptions>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSectionEvalOptions>,&UE::CoreUObject::Private::Destruct<FMovieSceneSectionEvalOptions>,&UE::CoreUObject::Private::Copy<FMovieSceneSectionEvalOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag @ 1461e5a70

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed @ 1461e5ab0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause @ 1461e5af0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_Play @ 1461e5b30

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag @ 1461e5b70

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneBindingLifetimeSection @ 1461e5bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneBindingLifetimeSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping @ 1461e5c30

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bManualEaseIn_SetBit @ 1461e5c80

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bManualEaseOut_SetBit @ 1461e5c90

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 1461e5ca0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEasingSettings,&UE::CoreUObject::Private::Construct<FMovieSceneEasingSettings>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEasingSettings>,&UE::CoreUObject::Private::Destruct<FMovieSceneEasingSettings>,&UE::CoreUObject::Private::Copy<FMovieSceneEasingSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse @ 1461e5ce0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource @ 1461e5db0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo @ 1461e5df0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bParentContextsAreSignificant_SetBit @ 1461e5e50

void __cdecl
Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// NewProp_bPlayableDirectly_SetBit @ 1461e5e90

void __cdecl
Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight @ 1461e5eb0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_RequestInvalidateBinding @ 1461e5fb0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_RequestInvalidateBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_RequestInvalidateBinding_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1461e5ff0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTimecodeSource,&UE::CoreUObject::Private::Construct<FMovieSceneTimecodeSource>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTimecodeSource>,&UE::CoreUObject::Private::Destruct<FMovieSceneTimecodeSource>,&UE::CoreUObject::Private::Copy<FMovieSceneTimecodeSource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EMovieSceneObjectBindingSpace_StaticEnum @ 1461e6030

UEnum * __cdecl EMovieSceneObjectBindingSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace,(UObject *)pUVar1,
                       L"EMovieSceneObjectBindingSpace");
  }
  return Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState @ 1461e61b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1461e62b0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneObjectBindingID,&UE::CoreUObject::Private::Construct<FMovieSceneObjectBindingID>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneObjectBindingID>,&UE::CoreUObject::Private::Destruct<FMovieSceneObjectBindingID>,&UE::CoreUObject::Private::Copy<FMovieSceneObjectBindingID>,&UE::CoreUObject::Private::GetStructTypeHash<FMovieSceneObjectBindingID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent @ 1461e62f0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSection_GetBlendType @ 1461e63f0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_GetBlendType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent @ 1461e6430

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSection_GetColorTint @ 1461e6470

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_GetColorTint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_GetColorTint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode @ 1461e64f0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent @ 1461e6530

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub @ 1461e6570

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority @ 1461e65b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride @ 1461e6620

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames @ 1461e6660

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_MovieScene_ESpawnOwnership @ 1461e66a0

UEnum * __cdecl Z_Construct_UEnum_MovieScene_ESpawnOwnership(void)

{
  if (Z_Registration_Info_UEnum_ESpawnOwnership.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpawnOwnership.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_ESpawnOwnership_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpawnOwnership.InnerSingleton;
}

// ESpawnOwnership_StaticEnum @ 1461e6710

UEnum * __cdecl ESpawnOwnership_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpawnOwnership.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_ESpawnOwnership.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_ESpawnOwnership,(UObject *)pUVar1,
                       L"ESpawnOwnership");
  }
  return Z_Registration_Info_UEnum_ESpawnOwnership.OuterSingleton;
}

// NewProp_bInDisableCameraCuts_SetBit @ 1461e6780

void __cdecl
Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::
NewProp_bInDisableCameraCuts_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames @ 1461e67d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts @ 1461e6810

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bContinuouslyRespawn_SetBit @ 1461e6850

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary @ 1461e6860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary(void)

{
  if (Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.OuterSingleton,
               &Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneDynamicBinding @ 1461e68a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneDynamicBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBinding.InnerSingleton;
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

// NewProp_bNetAddressableName_SetBit @ 1461e6920

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult @ 1461e6a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveResult.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveResult.InnerSingleton;
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

// Z_Construct_UClass_UMovieSceneClock @ 1461e6ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneClock(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneClock.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneClock.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneClock_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneClock.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneExternalClock @ 1461e6af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneExternalClock(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneExternalClock.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneExternalClock.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneExternalClock_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneExternalClock.OuterSingleton;
}

// NewStructOps @ 1461e6b30

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneDynamicBindingPayloadVariable,&UE::CoreUObject::Private::Construct<FMovieSceneDynamicBindingPayloadVariable>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneDynamicBindingPayloadVariable>,&UE::CoreUObject::Private::Destruct<FMovieSceneDynamicBindingPayloadVariable>,&UE::CoreUObject::Private::Copy<FMovieSceneDynamicBindingPayloadVariable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneSignedObject @ 1461e6b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSignedObject(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSignedObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSignedObject.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSignedObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSignedObject.OuterSingleton;
}

// NewStructOps @ 1461e6bf0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSpawnable,&UE::CoreUObject::Private::Construct<FMovieSceneSpawnable>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSpawnable>,&UE::CoreUObject::Private::Destruct<FMovieSceneSpawnable>,&UE::CoreUObject::Private::Copy<FMovieSceneSpawnable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSection_GetRowIndex @ 1461e6cf0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_GetRowIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange @ 1461e6d50

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1461e6d90

void __cdecl
Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSection_IsActive @ 1461e6f00

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_IsActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1461e6f40

void __cdecl
Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate @ 1461e6f50

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1461e6f90

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneDynamicBinding,&UE::CoreUObject::Private::Construct<FMovieSceneDynamicBinding>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneDynamicBinding>,&UE::CoreUObject::Private::Destruct<FMovieSceneDynamicBinding>,&UE::CoreUObject::Private::Copy<FMovieSceneDynamicBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSection_IsLocked @ 1461e6fd0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_IsLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_HideHud_SetBit @ 1461e7010

void __cdecl
Z_Construct_UFunction_UMovieSceneSequencePlayer_SetHideHud_Statics::NewProp_HideHud_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_SetHideHud @ 1461e7020

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_SetHideHud(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetHideHud_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSection_SetBlendType @ 1461e7060

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_SetBlendType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition @ 1461e70a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1461e7120

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSequenceInstanceData,&UE::CoreUObject::Private::Construct<FMovieSceneSequenceInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSequenceInstanceData>,&UE::CoreUObject::Private::Destruct<FMovieSceneSequenceInstanceData>,&UE::CoreUObject::Private::Copy<FMovieSceneSequenceInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSection_SetColorTint @ 1461e7160

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_SetColorTint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_SetColorTint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1461e71a0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneDynamicBindingResolveParams,&UE::CoreUObject::Private::Construct<FMovieSceneDynamicBindingResolveParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneDynamicBindingResolveParams>,&UE::CoreUObject::Private::Destruct<FMovieSceneDynamicBindingResolveParams>,&UE::CoreUObject::Private::Copy<FMovieSceneDynamicBindingResolveParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate @ 1461e7280

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions @ 1461e72c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvalOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvalOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvalOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvalOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField @ 1461e7340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvaluationField.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvaluationField.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvaluationField.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackEvaluationField.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTrackRowMetadata @ 1461e73c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackRowMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackRowMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackRowMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackRowMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackRowMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackRowMetadata.InnerSingleton;
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

// Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode @ 1461e7440

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCanEvaluateNearestSection_SetBit @ 1461e7480

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::
NewProp_bCanEvaluateNearestSection_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bEvalNearestSection_SetBit @ 1461e7490

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bEvaluateInPreroll_SetBit @ 1461e74a0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bEvaluateInPostroll_SetBit @ 1461e74b0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// NewProp_bEvaluateNearestSection_SetBit @ 1461e74c0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::
NewProp_bEvaluateNearestSection_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x10;
  return;
}

// NewStructOps @ 1461e74d0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackEvalOptions,&UE::CoreUObject::Private::Construct<FMovieSceneTrackEvalOptions>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackEvalOptions>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackEvalOptions>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackEvalOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInIsActive_SetBit @ 1461e7510

void __cdecl
Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::NewProp_bInIsActive_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange @ 1461e7520

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1461e7570

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSequenceInstanceDataPtr,&UE::CoreUObject::Private::Construct<FMovieSceneSequenceInstanceDataPtr>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSequenceInstanceDataPtr>,&UE::CoreUObject::Private::Destruct<FMovieSceneSequenceInstanceDataPtr>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneSequenceInstanceDataPtr>,&UE::CoreUObject::Private::Copy<FMovieSceneSequenceInstanceDataPtr>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSection_SetIsActive @ 1461e75c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_SetIsActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsPossessedObject_SetBit @ 1461e7610

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::
NewProp_bIsPossessedObject_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 1461e7620

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneDynamicBindingResolveResult,&UE::CoreUObject::Private::Construct<FMovieSceneDynamicBindingResolveResult>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneDynamicBindingResolveResult>,&UE::CoreUObject::Private::Destruct<FMovieSceneDynamicBindingResolveResult>,&UE::CoreUObject::Private::Copy<FMovieSceneDynamicBindingResolveResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight @ 1461e7660

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsLocked_SetBit @ 1461e76a0

void __cdecl
Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::NewProp_bInIsLocked_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop @ 1461e7700

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSection_SetIsLocked @ 1461e7750

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_SetIsLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime @ 1461e7790

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority @ 1461e7880

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShowVerticalFrames_SetBit @ 1461e7900

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewStructOps @ 1461e7910

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackDisplayOptions,&UE::CoreUObject::Private::Construct<FMovieSceneTrackDisplayOptions>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackDisplayOptions>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackDisplayOptions>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackDisplayOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bReversePlayback_SetBit @ 1461e7950

void __cdecl
Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c4) = *(uint *)((longlong)param_1 + 0x2c4) | 1;
  return;
}

// NewStructOps @ 1461e79e0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneDynamicBindingContainer,&UE::CoreUObject::Private::Construct<FMovieSceneDynamicBindingContainer>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneDynamicBindingContainer>,&UE::CoreUObject::Private::Destruct<FMovieSceneDynamicBindingContainer>,&UE::CoreUObject::Private::Copy<FMovieSceneDynamicBindingContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames @ 1461e7a20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames @ 1461e7a60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneBindingOverrides @ 1461e7aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneBindingOverrides(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneBindingOverrides.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneBindingOverrides.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingOverrides.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData @ 1461e7ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingOverrideData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneBindingOverrideData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingOverrideData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneBindingOverrideData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneObjectBindingID @ 1461e7b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneObjectBindingID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingID.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingID.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingID.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneObjectBindingID.InnerSingleton;
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

// NewProp_bOverridesDefault_SetBit @ 1461e7be0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewStructOps @ 1461e7bf0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneBindingOverrideData,&UE::CoreUObject::Private::Construct<FMovieSceneBindingOverrideData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneBindingOverrideData>,&UE::CoreUObject::Private::Destruct<FMovieSceneBindingOverrideData>,&UE::CoreUObject::Private::Copy<FMovieSceneBindingOverrideData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1461e7c30

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackRowMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackRowMetadata,&UE::CoreUObject::Private::Construct<FMovieSceneTrackRowMetadata>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackRowMetadata>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackRowMetadata>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackRowMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneSection_SetRowIndex @ 1461e7c70

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSection_SetRowIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsActive_SetBit @ 1461e7cb0

void __cdecl Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd8) = *(uint *)((longlong)param_1 + 0xd8) | 1;
  return;
}

// NewProp_bIsLocked_SetBit @ 1461e7cc0

void __cdecl Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd8) = *(uint *)((longlong)param_1 + 0xd8) | 2;
  return;
}

// Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn @ 1461e7cd0

UFunction * __cdecl
Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsInfinite_SetBit @ 1461e7d10

void __cdecl
Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xec) = *(uint *)((longlong)param_1 + 0xec) | 1;
  return;
}

// NewProp_bSupportsInfiniteRange_SetBit @ 1461e7d20

void __cdecl
Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewProp_bIsEvalDisabled_SetBit @ 1461e7d30

void __cdecl
Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bIsEvalDisabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x89) = 1;
  return;
}

// NewProp_bTickWhenPaused_SetBit @ 1461e7f80

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bTickWhenPaused_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bAllowRounding_SetBit @ 1461e7f90

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bAllowRounding_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewStructOps @ 1461e7fa0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSequenceTickInterval,&UE::CoreUObject::Private::Construct<FMovieSceneSequenceTickInterval>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSequenceTickInterval>,&UE::CoreUObject::Private::Destruct<FMovieSceneSequenceTickInterval>,&UE::CoreUObject::Private::Copy<FMovieSceneSequenceTickInterval>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneBoolSection @ 1461e80a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneBoolSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneBoolSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneBoolSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneBoolSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolSection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneFrameRange @ 1461e80e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneFrameRange(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFrameRange.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneFrameRange.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFrameRange.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneFrameRange.InnerSingleton;
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

// NewStructOps @ 1461e8160

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneFrameRange,&UE::CoreUObject::Private::Construct<FMovieSceneFrameRange>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneFrameRange>,&UE::CoreUObject::Private::Destruct<FMovieSceneFrameRange>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneFrameRange>,&UE::CoreUObject::Private::Copy<FMovieSceneFrameRange>,&UE::CoreUObject::Private::Identical<FMovieSceneFrameRange>,&UE::CoreUObject::Private::ExportTextItem<FMovieSceneFrameRange>,&UE::CoreUObject::Private::ImportTextItem<FMovieSceneFrameRange>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneFrameRange>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_DefaultValue_SetBit @ 1461e81b0

void __cdecl
Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  return;
}

// Z_Construct_UClass_UMovieSceneSequenceTickManager @ 1461e85b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSequenceTickManager(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneMetaData @ 1461e87d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMetaData(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMetaData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMetaData.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMetaData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMetaData.OuterSingleton;
}

// NewStructOps @ 1461e8810

void * __cdecl Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieScenePossessable,&UE::CoreUObject::Private::Construct<FMovieScenePossessable>,&UE::CoreUObject::Private::ConstructForTests<FMovieScenePossessable>,&UE::CoreUObject::Private::Destruct<FMovieScenePossessable>,&UE::CoreUObject::Private::Copy<FMovieScenePossessable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor @ 1461e8890

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneMetaData_GetCreated @ 1461e8950

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMetaData_GetCreated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneMetaData_GetNotes @ 1461e8990

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMetaData_GetNotes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneSection_NoRegister @ 1461e89d0

UClass * __cdecl Z_Construct_UClass_UMovieSceneSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSection",
               &Z_Registration_Info_UClass_UMovieSceneSection.InnerSingleton,
               UMovieSceneSection::StaticRegisterNativesUMovieSceneSection,0x110,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSection>,local_res8,
               UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSection.InnerSingleton;
}

// Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor @ 1461e8b50

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneMetaData_SetCreated @ 1461e8c10

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMetaData_SetCreated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCanUseClassLookup_SetBit @ 1461e8dc0

void __cdecl
Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 1461e8dd0

void * __cdecl Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieScenePropertyBinding,&UE::CoreUObject::Private::Construct<FMovieScenePropertyBinding>,&UE::CoreUObject::Private::ConstructForTests<FMovieScenePropertyBinding>,&UE::CoreUObject::Private::Destruct<FMovieScenePropertyBinding>,&UE::CoreUObject::Private::Copy<FMovieScenePropertyBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieSceneMetaData_SetNotes @ 1461e8e10

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMetaData_SetNotes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1461e91e0

void * __thiscall
FUObjectAnnotationSparse<FIsSpawnable,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FIsSpawnable,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FIsSpawnable,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461e9310

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMovieSceneModule,`FMovieSceneModule::StartupModule'::__l2::FNoopDefaultDeleter,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461e9350

void * __thiscall
IMovieSceneModule::_scalar_deleting_destructor_(IMovieSceneModule *this,uint param_1)

{
  *this = (IMovieSceneModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneNameableTrack @ 1461e94f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneNameableTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneNameableTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneNameableTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneNameableTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneNameableTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTrack @ 1461e9530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrack.OuterSingleton;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_> @ 1461e96c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
           *this,EForwardingConstructor param_1,
          TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *param_2,
          TAddConditional<int> *param_3,TAddConditional<FEasingComponentData> *param_4,
          TAddConditional<short> *param_5,
          TAddConditional<UE::MovieScene::FInterrogationKey> *param_6,
          TAddConditional<UE::MovieScene::FInterrogationInstance> *param_7,
          TAddConditional<FFrameTime> *param_8)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  int iVar4;
  float fVar5;
  
  *(int *)this = (int)param_2->_padding_;
  this->field_0x10 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x10 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.Class.field0_0x0.DebugPtr;
    *(UClass **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(int *)&this->field_0x18 = param_3->_padding_;
  this->field_0x20 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x20 = bVar1;
  if (bVar1 != false) {
    *(int *)&this->field_0x1c = (param_3->Payload).TypedValue;
  }
  *(int *)&this->field_0x28 = (int)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    pUVar3 = (param_4->Payload).TypedValue.Section.field0_0x0.DebugPtr;
    *(UMovieSceneSection **)&this->field_0x30 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(int *)&this->field_0x40 = param_5->_padding_;
  this->field_0x46 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x46 = bVar1;
  if (bVar1 != false) {
    *(short *)&this->field_0x44 = (param_5->Payload).TypedValue;
  }
  *(int *)&this->field_0x48 = param_6->_padding_;
  this->field_0x54 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x54 = bVar1;
  if (bVar1 != false) {
    iVar4 = (param_6->Payload).TypedValue.InterrogationIndex;
    *(int *)&this->field_0x4c = (param_6->Payload).TypedValue.Channel.Value;
    *(int *)&this->field_0x50 = iVar4;
  }
  *(int *)&this->field_0x58 = (int)param_7->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneSequence **)&this->field_0x60 = (param_7->Payload).TypedValue.Sequence;
  }
  *(int *)&this->field_0x70 = param_8->_padding_;
  this->field_0x7c = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0x7c = bVar1;
  if (bVar1 != false) {
    fVar5 = (param_8->Payload).TypedValue.SubFrame;
    *(int *)&this->field_0x74 = (param_8->Payload).TypedValue.FrameNumber.Value;
    *(float *)&this->field_0x78 = fVar5;
  }
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional> @ 1461e97f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
           *this,EForwardingConstructor param_1,
          TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *param_2,
          TAddConditional<int> *param_3,TAddConditional<FEasingComponentData> *param_4,
          TAddConditional<short> *param_5,
          TAddConditional<UE::MovieScene::FInterrogationKey> *param_6,
          TAddConditional<UE::MovieScene::FInterrogationInstance> *param_7,
          TAddConditional<FFrameTime> *param_8,FAddConditional *param_9)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  int iVar4;
  float fVar5;
  undefined1 uVar6;
  
  *(int *)this = (int)param_2->_padding_;
  this->field_0x10 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x10 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.Class.field0_0x0.DebugPtr;
    *(UClass **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(int *)&this->field_0x18 = param_3->_padding_;
  this->field_0x20 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x20 = bVar1;
  if (bVar1 != false) {
    *(int *)&this->field_0x1c = (param_3->Payload).TypedValue;
  }
  *(int *)&this->field_0x28 = (int)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    pUVar3 = (param_4->Payload).TypedValue.Section.field0_0x0.DebugPtr;
    *(UMovieSceneSection **)&this->field_0x30 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(int *)&this->field_0x40 = param_5->_padding_;
  this->field_0x46 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x46 = bVar1;
  if (bVar1 != false) {
    *(short *)&this->field_0x44 = (param_5->Payload).TypedValue;
  }
  *(int *)&this->field_0x48 = param_6->_padding_;
  this->field_0x54 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x54 = bVar1;
  if (bVar1 != false) {
    iVar4 = (param_6->Payload).TypedValue.InterrogationIndex;
    *(int *)&this->field_0x4c = (param_6->Payload).TypedValue.Channel.Value;
    *(int *)&this->field_0x50 = iVar4;
  }
  *(int *)&this->field_0x58 = (int)param_7->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneSequence **)&this->field_0x60 = (param_7->Payload).TypedValue.Sequence;
  }
  *(int *)&this->field_0x70 = param_8->_padding_;
  this->field_0x7c = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0x7c = bVar1;
  if (bVar1 != false) {
    fVar5 = (param_8->Payload).TypedValue.SubFrame;
    *(int *)&this->field_0x74 = (param_8->Payload).TypedValue.FrameNumber.Value;
    *(float *)&this->field_0x78 = fVar5;
  }
  bVar1 = param_9->bCondition;
  uVar6 = param_9->field_0x3;
  *(ushort *)&this->field_0x80 = (param_9->ComponentTypeID).Value;
  this->field_0x82 = bVar1;
  this->field_0x83 = uVar6;
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional> @ 1461e9930

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,EForwardingConstructor param_1,
          TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *param_2,
          TAddConditional<int> *param_3,TAddConditional<FEasingComponentData> *param_4,
          TAddConditional<short> *param_5,
          TAddConditional<UE::MovieScene::FInterrogationKey> *param_6,
          TAddConditional<UE::MovieScene::FInterrogationInstance> *param_7,
          TAddConditional<FFrameTime> *param_8,FAddConditional *param_9,FAddConditional *param_10)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  int iVar4;
  float fVar5;
  undefined1 uVar6;
  
  *(int *)this = (int)param_2->_padding_;
  this->field_0x10 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x10 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.Class.field0_0x0.DebugPtr;
    *(UClass **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(int *)&this->field_0x18 = param_3->_padding_;
  this->field_0x20 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x20 = bVar1;
  if (bVar1 != false) {
    *(int *)&this->field_0x1c = (param_3->Payload).TypedValue;
  }
  *(int *)&this->field_0x28 = (int)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    pUVar3 = (param_4->Payload).TypedValue.Section.field0_0x0.DebugPtr;
    *(UMovieSceneSection **)&this->field_0x30 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(int *)&this->field_0x40 = param_5->_padding_;
  this->field_0x46 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x46 = bVar1;
  if (bVar1 != false) {
    *(short *)&this->field_0x44 = (param_5->Payload).TypedValue;
  }
  *(int *)&this->field_0x48 = param_6->_padding_;
  this->field_0x54 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x54 = bVar1;
  if (bVar1 != false) {
    iVar4 = (param_6->Payload).TypedValue.InterrogationIndex;
    *(int *)&this->field_0x4c = (param_6->Payload).TypedValue.Channel.Value;
    *(int *)&this->field_0x50 = iVar4;
  }
  *(int *)&this->field_0x58 = (int)param_7->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneSequence **)&this->field_0x60 = (param_7->Payload).TypedValue.Sequence;
  }
  *(int *)&this->field_0x70 = param_8->_padding_;
  this->field_0x7c = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0x7c = bVar1;
  if (bVar1 != false) {
    fVar5 = (param_8->Payload).TypedValue.SubFrame;
    *(int *)&this->field_0x74 = (param_8->Payload).TypedValue.FrameNumber.Value;
    *(float *)&this->field_0x78 = fVar5;
  }
  bVar1 = param_9->bCondition;
  uVar6 = param_9->field_0x3;
  *(ushort *)&this->field_0x80 = (param_9->ComponentTypeID).Value;
  this->field_0x82 = bVar1;
  this->field_0x83 = uVar6;
  bVar1 = param_10->bCondition;
  uVar6 = param_10->field_0x3;
  *(ushort *)&this->field_0x84 = (param_10->ComponentTypeID).Value;
  this->field_0x86 = bVar1;
  this->field_0x87 = uVar6;
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional> @ 1461e9a80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,EForwardingConstructor param_1,
          TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *param_2,
          TAddConditional<int> *param_3,TAddConditional<FEasingComponentData> *param_4,
          TAddConditional<short> *param_5,
          TAddConditional<UE::MovieScene::FInterrogationKey> *param_6,
          TAddConditional<UE::MovieScene::FInterrogationInstance> *param_7,
          TAddConditional<FFrameTime> *param_8,FAddConditional *param_9,FAddConditional *param_10,
          FAddConditional *param_11)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  int iVar4;
  float fVar5;
  undefined1 uVar6;
  
  *(int *)this = (int)param_2->_padding_;
  this->field_0x10 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x10 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.Class.field0_0x0.DebugPtr;
    *(UClass **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(int *)&this->field_0x18 = param_3->_padding_;
  this->field_0x20 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x20 = bVar1;
  if (bVar1 != false) {
    *(int *)&this->field_0x1c = (param_3->Payload).TypedValue;
  }
  *(int *)&this->field_0x28 = (int)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    pUVar3 = (param_4->Payload).TypedValue.Section.field0_0x0.DebugPtr;
    *(UMovieSceneSection **)&this->field_0x30 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(int *)&this->field_0x40 = param_5->_padding_;
  this->field_0x46 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x46 = bVar1;
  if (bVar1 != false) {
    *(short *)&this->field_0x44 = (param_5->Payload).TypedValue;
  }
  *(int *)&this->field_0x48 = param_6->_padding_;
  this->field_0x54 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x54 = bVar1;
  if (bVar1 != false) {
    iVar4 = (param_6->Payload).TypedValue.InterrogationIndex;
    *(int *)&this->field_0x4c = (param_6->Payload).TypedValue.Channel.Value;
    *(int *)&this->field_0x50 = iVar4;
  }
  *(int *)&this->field_0x58 = (int)param_7->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneSequence **)&this->field_0x60 = (param_7->Payload).TypedValue.Sequence;
  }
  *(int *)&this->field_0x70 = param_8->_padding_;
  this->field_0x7c = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0x7c = bVar1;
  if (bVar1 != false) {
    fVar5 = (param_8->Payload).TypedValue.SubFrame;
    *(int *)&this->field_0x74 = (param_8->Payload).TypedValue.FrameNumber.Value;
    *(float *)&this->field_0x78 = fVar5;
  }
  bVar1 = param_9->bCondition;
  uVar6 = param_9->field_0x3;
  *(ushort *)&this->field_0x80 = (param_9->ComponentTypeID).Value;
  this->field_0x82 = bVar1;
  this->field_0x83 = uVar6;
  bVar1 = param_10->bCondition;
  uVar6 = param_10->field_0x3;
  *(ushort *)&this->field_0x84 = (param_10->ComponentTypeID).Value;
  this->field_0x86 = bVar1;
  this->field_0x87 = uVar6;
  bVar1 = param_11->bCondition;
  uVar6 = param_11->field_0x3;
  *(ushort *)&this->field_0x88 = (param_11->ComponentTypeID).Value;
  this->field_0x8a = bVar1;
  this->field_0x8b = uVar6;
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional> @ 1461e9be0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,EForwardingConstructor param_1,
          TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *param_2,
          TAddConditional<int> *param_3,TAddConditional<FEasingComponentData> *param_4,
          TAddConditional<short> *param_5,
          TAddConditional<UE::MovieScene::FInterrogationKey> *param_6,
          TAddConditional<UE::MovieScene::FInterrogationInstance> *param_7,
          TAddConditional<FFrameTime> *param_8,FAddConditional *param_9,FAddConditional *param_10,
          FAddConditional *param_11,FAddConditional *param_12)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  int iVar4;
  float fVar5;
  undefined1 uVar6;
  
  *(int *)this = (int)param_2->_padding_;
  this->field_0x10 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x10 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.Class.field0_0x0.DebugPtr;
    *(UClass **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(int *)&this->field_0x18 = param_3->_padding_;
  this->field_0x20 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x20 = bVar1;
  if (bVar1 != false) {
    *(int *)&this->field_0x1c = (param_3->Payload).TypedValue;
  }
  *(int *)&this->field_0x28 = (int)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    pUVar3 = (param_4->Payload).TypedValue.Section.field0_0x0.DebugPtr;
    *(UMovieSceneSection **)&this->field_0x30 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(int *)&this->field_0x40 = param_5->_padding_;
  this->field_0x46 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x46 = bVar1;
  if (bVar1 != false) {
    *(short *)&this->field_0x44 = (param_5->Payload).TypedValue;
  }
  *(int *)&this->field_0x48 = param_6->_padding_;
  this->field_0x54 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x54 = bVar1;
  if (bVar1 != false) {
    iVar4 = (param_6->Payload).TypedValue.InterrogationIndex;
    *(int *)&this->field_0x4c = (param_6->Payload).TypedValue.Channel.Value;
    *(int *)&this->field_0x50 = iVar4;
  }
  *(int *)&this->field_0x58 = (int)param_7->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneSequence **)&this->field_0x60 = (param_7->Payload).TypedValue.Sequence;
  }
  *(int *)&this->field_0x70 = param_8->_padding_;
  this->field_0x7c = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0x7c = bVar1;
  if (bVar1 != false) {
    fVar5 = (param_8->Payload).TypedValue.SubFrame;
    *(int *)&this->field_0x74 = (param_8->Payload).TypedValue.FrameNumber.Value;
    *(float *)&this->field_0x78 = fVar5;
  }
  bVar1 = param_9->bCondition;
  uVar6 = param_9->field_0x3;
  *(ushort *)&this->field_0x80 = (param_9->ComponentTypeID).Value;
  this->field_0x82 = bVar1;
  this->field_0x83 = uVar6;
  bVar1 = param_10->bCondition;
  uVar6 = param_10->field_0x3;
  *(ushort *)&this->field_0x84 = (param_10->ComponentTypeID).Value;
  this->field_0x86 = bVar1;
  this->field_0x87 = uVar6;
  bVar1 = param_11->bCondition;
  uVar6 = param_11->field_0x3;
  *(ushort *)&this->field_0x88 = (param_11->ComponentTypeID).Value;
  this->field_0x8a = bVar1;
  this->field_0x8b = uVar6;
  bVar1 = param_12->bCondition;
  uVar6 = param_12->field_0x3;
  *(ushort *)&this->field_0x8c = (param_12->ComponentTypeID).Value;
  this->field_0x8e = bVar1;
  this->field_0x8f = uVar6;
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional> @ 1461e9d50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,EForwardingConstructor param_1,
          TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *param_2,
          TAddConditional<int> *param_3,TAddConditional<FEasingComponentData> *param_4,
          TAddConditional<short> *param_5,
          TAddConditional<UE::MovieScene::FInterrogationKey> *param_6,
          TAddConditional<UE::MovieScene::FInterrogationInstance> *param_7,
          TAddConditional<FFrameTime> *param_8,FAddConditional *param_9,FAddConditional *param_10,
          FAddConditional *param_11,FAddConditional *param_12,FAddConditional *param_13)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  int iVar4;
  float fVar5;
  undefined1 uVar6;
  
  *(int *)this = (int)param_2->_padding_;
  this->field_0x10 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x10 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.Class.field0_0x0.DebugPtr;
    *(UClass **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(int *)&this->field_0x18 = param_3->_padding_;
  this->field_0x20 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x20 = bVar1;
  if (bVar1 != false) {
    *(int *)&this->field_0x1c = (param_3->Payload).TypedValue;
  }
  *(int *)&this->field_0x28 = (int)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    pUVar3 = (param_4->Payload).TypedValue.Section.field0_0x0.DebugPtr;
    *(UMovieSceneSection **)&this->field_0x30 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(int *)&this->field_0x40 = param_5->_padding_;
  this->field_0x46 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x46 = bVar1;
  if (bVar1 != false) {
    *(short *)&this->field_0x44 = (param_5->Payload).TypedValue;
  }
  *(int *)&this->field_0x48 = param_6->_padding_;
  this->field_0x54 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x54 = bVar1;
  if (bVar1 != false) {
    iVar4 = (param_6->Payload).TypedValue.InterrogationIndex;
    *(int *)&this->field_0x4c = (param_6->Payload).TypedValue.Channel.Value;
    *(int *)&this->field_0x50 = iVar4;
  }
  *(int *)&this->field_0x58 = (int)param_7->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneSequence **)&this->field_0x60 = (param_7->Payload).TypedValue.Sequence;
  }
  *(int *)&this->field_0x70 = param_8->_padding_;
  this->field_0x7c = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0x7c = bVar1;
  if (bVar1 != false) {
    fVar5 = (param_8->Payload).TypedValue.SubFrame;
    *(int *)&this->field_0x74 = (param_8->Payload).TypedValue.FrameNumber.Value;
    *(float *)&this->field_0x78 = fVar5;
  }
  bVar1 = param_9->bCondition;
  uVar6 = param_9->field_0x3;
  *(ushort *)&this->field_0x80 = (param_9->ComponentTypeID).Value;
  this->field_0x82 = bVar1;
  this->field_0x83 = uVar6;
  bVar1 = param_10->bCondition;
  uVar6 = param_10->field_0x3;
  *(ushort *)&this->field_0x84 = (param_10->ComponentTypeID).Value;
  this->field_0x86 = bVar1;
  this->field_0x87 = uVar6;
  bVar1 = param_11->bCondition;
  uVar6 = param_11->field_0x3;
  *(ushort *)&this->field_0x88 = (param_11->ComponentTypeID).Value;
  this->field_0x8a = bVar1;
  this->field_0x8b = uVar6;
  bVar1 = param_12->bCondition;
  uVar6 = param_12->field_0x3;
  *(ushort *)&this->field_0x8c = (param_12->ComponentTypeID).Value;
  this->field_0x8e = bVar1;
  this->field_0x8f = uVar6;
  bVar1 = param_13->bCondition;
  uVar6 = param_13->field_0x3;
  *(ushort *)&this->field_0x90 = (param_13->ComponentTypeID).Value;
  this->field_0x92 = bVar1;
  this->field_0x93 = uVar6;
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional> @ 1461e9ed0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,EForwardingConstructor param_1,
          TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *param_2,
          TAddConditional<int> *param_3,TAddConditional<FEasingComponentData> *param_4,
          TAddConditional<short> *param_5,
          TAddConditional<UE::MovieScene::FInterrogationKey> *param_6,
          TAddConditional<UE::MovieScene::FInterrogationInstance> *param_7,
          TAddConditional<FFrameTime> *param_8,FAddConditional *param_9,FAddConditional *param_10,
          FAddConditional *param_11,FAddConditional *param_12,FAddConditional *param_13,
          FAddConditional *param_14)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  int iVar4;
  float fVar5;
  undefined1 uVar6;
  
  *(int *)this = (int)param_2->_padding_;
  this->field_0x10 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x10 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.Class.field0_0x0.DebugPtr;
    *(UClass **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(int *)&this->field_0x18 = param_3->_padding_;
  this->field_0x20 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x20 = bVar1;
  if (bVar1 != false) {
    *(int *)&this->field_0x1c = (param_3->Payload).TypedValue;
  }
  *(int *)&this->field_0x28 = (int)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    pUVar3 = (param_4->Payload).TypedValue.Section.field0_0x0.DebugPtr;
    *(UMovieSceneSection **)&this->field_0x30 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(int *)&this->field_0x40 = param_5->_padding_;
  this->field_0x46 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x46 = bVar1;
  if (bVar1 != false) {
    *(short *)&this->field_0x44 = (param_5->Payload).TypedValue;
  }
  *(int *)&this->field_0x48 = param_6->_padding_;
  this->field_0x54 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x54 = bVar1;
  if (bVar1 != false) {
    iVar4 = (param_6->Payload).TypedValue.InterrogationIndex;
    *(int *)&this->field_0x4c = (param_6->Payload).TypedValue.Channel.Value;
    *(int *)&this->field_0x50 = iVar4;
  }
  *(int *)&this->field_0x58 = (int)param_7->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneSequence **)&this->field_0x60 = (param_7->Payload).TypedValue.Sequence;
  }
  *(int *)&this->field_0x70 = param_8->_padding_;
  this->field_0x7c = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0x7c = bVar1;
  if (bVar1 != false) {
    fVar5 = (param_8->Payload).TypedValue.SubFrame;
    *(int *)&this->field_0x74 = (param_8->Payload).TypedValue.FrameNumber.Value;
    *(float *)&this->field_0x78 = fVar5;
  }
  bVar1 = param_9->bCondition;
  uVar6 = param_9->field_0x3;
  *(ushort *)&this->field_0x80 = (param_9->ComponentTypeID).Value;
  this->field_0x82 = bVar1;
  this->field_0x83 = uVar6;
  bVar1 = param_10->bCondition;
  uVar6 = param_10->field_0x3;
  *(ushort *)&this->field_0x84 = (param_10->ComponentTypeID).Value;
  this->field_0x86 = bVar1;
  this->field_0x87 = uVar6;
  bVar1 = param_11->bCondition;
  uVar6 = param_11->field_0x3;
  *(ushort *)&this->field_0x88 = (param_11->ComponentTypeID).Value;
  this->field_0x8a = bVar1;
  this->field_0x8b = uVar6;
  bVar1 = param_12->bCondition;
  uVar6 = param_12->field_0x3;
  *(ushort *)&this->field_0x8c = (param_12->ComponentTypeID).Value;
  this->field_0x8e = bVar1;
  this->field_0x8f = uVar6;
  bVar1 = param_13->bCondition;
  uVar6 = param_13->field_0x3;
  *(ushort *)&this->field_0x90 = (param_13->ComponentTypeID).Value;
  this->field_0x92 = bVar1;
  this->field_0x93 = uVar6;
  bVar1 = param_14->bCondition;
  uVar6 = param_14->field_0x3;
  *(ushort *)&this->field_0x94 = (param_14->ComponentTypeID).Value;
  this->field_0x96 = bVar1;
  this->field_0x97 = uVar6;
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional> @ 1461ea060

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional><UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,EForwardingConstructor param_1,
          TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *param_2,
          TAddConditional<int> *param_3,TAddConditional<FEasingComponentData> *param_4,
          TAddConditional<short> *param_5,
          TAddConditional<UE::MovieScene::FInterrogationKey> *param_6,
          TAddConditional<UE::MovieScene::FInterrogationInstance> *param_7,
          TAddConditional<FFrameTime> *param_8,FAddConditional *param_9,FAddConditional *param_10,
          FAddConditional *param_11,FAddConditional *param_12,FAddConditional *param_13,
          FAddConditional *param_14,FAddConditional *param_15)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  int iVar4;
  float fVar5;
  undefined1 uVar6;
  
  *(int *)this = (int)param_2->_padding_;
  this->field_0x10 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x10 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.Class.field0_0x0.DebugPtr;
    *(UClass **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  *(int *)&this->field_0x18 = param_3->_padding_;
  this->field_0x20 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x20 = bVar1;
  if (bVar1 != false) {
    *(int *)&this->field_0x1c = (param_3->Payload).TypedValue;
  }
  *(int *)&this->field_0x28 = (int)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    pUVar3 = (param_4->Payload).TypedValue.Section.field0_0x0.DebugPtr;
    *(UMovieSceneSection **)&this->field_0x30 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  *(int *)&this->field_0x40 = param_5->_padding_;
  this->field_0x46 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x46 = bVar1;
  if (bVar1 != false) {
    *(short *)&this->field_0x44 = (param_5->Payload).TypedValue;
  }
  *(int *)&this->field_0x48 = param_6->_padding_;
  this->field_0x54 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x54 = bVar1;
  if (bVar1 != false) {
    iVar4 = (param_6->Payload).TypedValue.InterrogationIndex;
    *(int *)&this->field_0x4c = (param_6->Payload).TypedValue.Channel.Value;
    *(int *)&this->field_0x50 = iVar4;
  }
  *(int *)&this->field_0x58 = (int)param_7->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(UMovieSceneSequence **)&this->field_0x60 = (param_7->Payload).TypedValue.Sequence;
  }
  *(int *)&this->field_0x70 = param_8->_padding_;
  this->field_0x7c = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0x7c = bVar1;
  if (bVar1 != false) {
    fVar5 = (param_8->Payload).TypedValue.SubFrame;
    *(int *)&this->field_0x74 = (param_8->Payload).TypedValue.FrameNumber.Value;
    *(float *)&this->field_0x78 = fVar5;
  }
  bVar1 = param_9->bCondition;
  uVar6 = param_9->field_0x3;
  *(ushort *)&this->field_0x80 = (param_9->ComponentTypeID).Value;
  this->field_0x82 = bVar1;
  this->field_0x83 = uVar6;
  bVar1 = param_10->bCondition;
  uVar6 = param_10->field_0x3;
  *(ushort *)&this->field_0x84 = (param_10->ComponentTypeID).Value;
  this->field_0x86 = bVar1;
  this->field_0x87 = uVar6;
  bVar1 = param_11->bCondition;
  uVar6 = param_11->field_0x3;
  *(ushort *)&this->field_0x88 = (param_11->ComponentTypeID).Value;
  this->field_0x8a = bVar1;
  this->field_0x8b = uVar6;
  bVar1 = param_12->bCondition;
  uVar6 = param_12->field_0x3;
  *(ushort *)&this->field_0x8c = (param_12->ComponentTypeID).Value;
  this->field_0x8e = bVar1;
  this->field_0x8f = uVar6;
  bVar1 = param_13->bCondition;
  uVar6 = param_13->field_0x3;
  *(ushort *)&this->field_0x90 = (param_13->ComponentTypeID).Value;
  this->field_0x92 = bVar1;
  this->field_0x93 = uVar6;
  bVar1 = param_14->bCondition;
  uVar6 = param_14->field_0x3;
  *(ushort *)&this->field_0x94 = (param_14->ComponentTypeID).Value;
  this->field_0x96 = bVar1;
  this->field_0x97 = uVar6;
  bVar1 = param_15->bCondition;
  uVar6 = param_15->field_0x3;
  *(ushort *)&this->field_0x98 = (param_15->ComponentTypeID).Value;
  this->field_0x9a = bVar1;
  this->field_0x9b = uVar6;
  return this;
}

// CastChecked<AActor,UObject> @ 1461f0f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl CastChecked<AActor,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<AActor>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (AActor *)param_1;
  }
  pFVar3 = GetTypeName<AActor>(&local_28);
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

// CastChecked<UMovieSceneEvaluationHookSystem,UMovieSceneEntitySystem> @ 1461f1050

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEvaluationHookSystem * __cdecl
CastChecked<UMovieSceneEvaluationHookSystem,UMovieSceneEntitySystem>
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
    pFVar3 = GetTypeName<UMovieSceneEvaluationHookSystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneEvaluationHookSystem *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneEvaluationHookSystem>(&local_28);
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

// CastChecked<UMovieSceneMetaData,UObject> @ 1461f1110

UMovieSceneMetaData * __cdecl CastChecked<UMovieSceneMetaData,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneMetaData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneMetaData::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneMetaData *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneMetaData>(&local_28);
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

// CastChecked<UMovieSceneSequenceTickManager,UObject> @ 1461f11d0

UMovieSceneSequenceTickManager * __cdecl
CastChecked<UMovieSceneSequenceTickManager,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneSequenceTickManager>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneSequenceTickManager::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneSequenceTickManager *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneSequenceTickManager>(&local_28);
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

// CastChecked<UMovieSceneTrack,UObject> @ 1461f1290

UMovieSceneTrack * __cdecl CastChecked<UMovieSceneTrack,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneTrack>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneTrack::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneTrack *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneTrack>(&local_28);
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

// CastChecked<UMovieSceneTrackRowDecoration,UObject> @ 1461f1350

UMovieSceneTrackRowDecoration * __cdecl
CastChecked<UMovieSceneTrackRowDecoration,UObject>(UObject *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    if (param_2 != NullChecked) {
      return (UMovieSceneTrackRowDecoration *)0x0;
    }
    pFVar3 = GetTypeName<UMovieSceneTrackRowDecoration>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneTrackRowDecoration_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneTrackRowDecoration *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneTrackRowDecoration>(&local_28);
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

// ConstructItems<FMovieSceneBindingReference,FMovieSceneBindingReference,int> @ 1461f1430

void __cdecl
ConstructItems<FMovieSceneBindingReference,FMovieSceneBindingReference,int>
          (void *param_1,FMovieSceneBindingReference *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  ForAnyElementType *pFVar7;
  FUniversalObjectLocator *pFVar8;
  
  if (param_3 != 0) {
    pFVar7 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    pFVar8 = &param_2->Locator;
    do {
      uVar6 = *(undefined8 *)&(((FMovieSceneBindingReference *)(pFVar8 + -1))->ID).C;
      piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
      puVar2 = (undefined8 *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar8);
      *puVar2 = *(undefined8 *)&((FMovieSceneBindingReference *)(pFVar8 + -1))->ID;
      puVar2[1] = uVar6;
      pFVar7->Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar8->Fragments).ArrayNum;
      pFVar4 = (FUniversalObjectLocatorFragment *)(pFVar8->Fragments).AllocatorInstance.Data;
      *(int *)&pFVar7[1].Data = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar3,0,pFVar7,iVar3,piVar1);
        ConstructItems<FUniversalObjectLocatorFragment,FUniversalObjectLocatorFragment,int>
                  (pFVar7->Data,pFVar4,iVar3);
      }
      *(ELocatorResolveFlags *)&pFVar7[2].Data = *(ELocatorResolveFlags *)(pFVar8 + 1);
      pUVar5 = (UObject *)
               (((TObjectPtr<UMovieSceneCustomBinding> *)((longlong)(pFVar8 + 1) + 8))->field0_0x0).
               DebugPtr;
      pFVar7[3].Data = (FScriptContainerElement *)pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      pFVar7 = pFVar7 + 6;
      pFVar8 = pFVar8 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneMarkedFrame,FMovieSceneMarkedFrame,int> @ 1461f1520

void __cdecl
ConstructItems<FMovieSceneMarkedFrame,FMovieSceneMarkedFrame,int>
          (void *param_1,FMovieSceneMarkedFrame *param_2,int param_3)

{
  undefined1 *puVar1;
  bool *pbVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x18);
    pbVar2 = &param_2->bIsDeterminismFence;
    do {
      *(undefined4 *)(puVar1 + -0x18) =
           *(undefined4 *)(puVar1 + (longlong)param_2 + (-0x18 - (longlong)param_1));
      FString::FString((FString *)(puVar1 + -0x10),(FString *)(pbVar2 + -0x10));
      *puVar1 = *pbVar2;
      puVar1[1] = pbVar2[1];
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x20;
      pbVar2 = pbVar2 + 0x20;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneTrackEvaluationFieldEntry,FMovieSceneTrackEvaluationFieldEntry,int> @ 1461f15a0

void __cdecl
ConstructItems<FMovieSceneTrackEvaluationFieldEntry,FMovieSceneTrackEvaluationFieldEntry,int>
          (void *param_1,FMovieSceneTrackEvaluationFieldEntry *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  ESectionEvaluationFlags *pEVar3;
  undefined4 uVar4;
  int *piVar5;
  FFrameNumber *pFVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x18);
    pFVar6 = &param_2->ForcedTime;
    do {
      pUVar1 = *(UObject **)((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)piVar5);
      *(UObject **)(piVar5 + -6) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      uVar4 = pFVar6[-3];
      uVar2 = *(undefined8 *)(pFVar6 + -2);
      piVar5[-4] = (int)pFVar6[-4];
      piVar5[-3] = uVar4;
      *(undefined8 *)(piVar5 + -2) = uVar2;
      *piVar5 = pFVar6->Value;
      *(ESectionEvaluationFlags *)(piVar5 + 1) = *(ESectionEvaluationFlags *)(pFVar6 + 1);
      pEVar3 = (ESectionEvaluationFlags *)(pFVar6 + 1);
      pFVar6 = pFVar6 + 8;
      *(short *)((longlong)piVar5 + 6) = *(short *)(pEVar3 + 2);
      piVar5 = piVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneConditionContainer,int> @ 1461f1630

void __cdecl DefaultConstructItems<FMovieSceneConditionContainer,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<FMovieSceneBindingOverrideData,int> @ 1461f16b0

void __cdecl
DestructItems<FMovieSceneBindingOverrideData,int>
          (FMovieSceneBindingOverrideData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Object).SoftObjectPtr.field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneBindingReference,int> @ 1461f16f0

void __cdecl
DestructItems<FMovieSceneBindingReference,int>(FMovieSceneBindingReference *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FUniversalObjectLocator *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Locator;
    do {
      DestructItems<FUniversalObjectLocatorFragment,int>
                ((FUniversalObjectLocatorFragment *)(pFVar2->Fragments).AllocatorInstance.Data,
                 (pFVar2->Fragments).ArrayNum);
      pFVar1 = (pFVar2->Fragments).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneChannelEntry,int> @ 1461f1740

void __cdecl
DestructItems<FMovieSceneChannelEntry,int>(FMovieSceneChannelEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Channels).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FMovieSceneChannelEntry *)(&param_1->Channels + 1);
  }
  return;
}

// DestructItems<TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>,int> @ 1461f1780

void __cdecl
DestructItems<TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

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

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f17c0

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  if (param_2->field_0x5a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x58);
  }
  if (param_2->field_0x72 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x70);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x86 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x84);
  }
  if (param_2->field_0x8a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x88);
  }
  if (param_2->field_0x8e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x8c);
  }
  if (param_2->field_0x92 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x90);
  }
  if (param_2->field_0x96 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x94);
  }
  if (param_2->field_0x9a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x98);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f1910

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  if (param_2->field_0x5a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x58);
  }
  if (param_2->field_0x72 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x70);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x86 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x84);
  }
  if (param_2->field_0x8a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x88);
  }
  if (param_2->field_0x8e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x8c);
  }
  if (param_2->field_0x92 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x90);
  }
  if (param_2->field_0x96 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x94);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f1a40

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  if (param_2->field_0x5a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x58);
  }
  if (param_2->field_0x72 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x70);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x86 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x84);
  }
  if (param_2->field_0x8a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x88);
  }
  if (param_2->field_0x8e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x8c);
  }
  if (param_2->field_0x92 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x90);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f1b60

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  if (param_2->field_0x5a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x58);
  }
  if (param_2->field_0x72 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x70);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x86 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x84);
  }
  if (param_2->field_0x8a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x88);
  }
  if (param_2->field_0x8e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x8c);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f1c60

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  if (param_2->field_0x5a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x58);
  }
  if (param_2->field_0x72 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x70);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x86 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x84);
  }
  if (param_2->field_0x8a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x88);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f1d50

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  if (param_2->field_0x5a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x58);
  }
  if (param_2->field_0x72 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x70);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  if (param_2->field_0x86 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x84);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>_&> @ 1461f1e20

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>
::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  if (param_2->field_0x5a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x58);
  }
  if (param_2->field_0x72 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x70);
  }
  if (param_2->field_0x82 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x80);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>_&> @ 1461f1ee0

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  if (param_2->field_0x5a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x58);
  }
  if (param_2->field_0x72 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x70);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>_&> @ 1461f1f80

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  if (param_2->field_0x5a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x58);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>_&> @ 1461f2010

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
          *param_2)

{
  if (param_2->field_0x2 != '\0') {
    MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  }
  if (param_2->field_0x1a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x18);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  if (param_2->field_0x42 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x40);
  }
  if (param_2->field_0x4a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x48);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f2090

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationInstance> *)&param_2->field_0x58,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FFrameTime>::Apply
            ((TAddConditional<FFrameTime> *)&param_2->field_0x70,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f2120

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationInstance> *)&param_2->field_0x58,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FFrameTime>::Apply
            ((TAddConditional<FFrameTime> *)&param_2->field_0x70,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f21b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationInstance> *)&param_2->field_0x58,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FFrameTime>::Apply
            ((TAddConditional<FFrameTime> *)&param_2->field_0x70,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f2240

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationInstance> *)&param_2->field_0x58,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FFrameTime>::Apply
            ((TAddConditional<FFrameTime> *)&param_2->field_0x70,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f22d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationInstance> *)&param_2->field_0x58,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FFrameTime>::Apply
            ((TAddConditional<FFrameTime> *)&param_2->field_0x70,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&> @ 1461f2360

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationInstance> *)&param_2->field_0x58,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FFrameTime>::Apply
            ((TAddConditional<FFrameTime> *)&param_2->field_0x70,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>_&> @ 1461f23f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>_>
::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationInstance> *)&param_2->field_0x58,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FFrameTime>::Apply
            ((TAddConditional<FFrameTime> *)&param_2->field_0x70,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>_&> @ 1461f2480

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationInstance> *)&param_2->field_0x58,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FFrameTime>::Apply
            ((TAddConditional<FFrameTime> *)&param_2->field_0x70,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>_&> @ 1461f2510

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationInstance> *)&param_2->field_0x58,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>_&> @ 1461f2590

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
          *param_2)

{
  MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *)param_2,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<int>::Apply
            ((TAddConditional<int> *)&param_2->field_0x18,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FEasingComponentData>::Apply
            ((TAddConditional<FEasingComponentData> *)&param_2->field_0x28,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<short>::Apply
            ((TAddConditional<short> *)&param_2->field_0x40,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
            ((TAddConditional<UE::MovieScene::FInterrogationKey> *)&param_2->field_0x48,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  return;
}

// DuplicateObject<UMovieSceneSection> @ 1461f2600

UMovieSceneSection * __cdecl
DuplicateObject<UMovieSceneSection>(UMovieSceneSection *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  
  pUVar1 = UMovieSceneSection::StaticClass();
  pUVar2 = (UMovieSceneSection *)DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3)
  ;
  return pUVar2;
}

// FindFieldChecked<FProperty> @ 1461f4700

/* WARNING: Enum "Type": Some values do not have unique names */

FProperty * __cdecl FindFieldChecked<FProperty>(UStruct *param_1,FName param_2)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FFieldClass *this;
  UStruct *pUVar5;
  FName local_res10;
  FName local_res18;
  FString local_58;
  FString local_48;
  TFieldIterator<FProperty> local_38;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  if ((param_2 != (FName)0x0) &&
     (pUVar5 = param_1, local_res10 = param_2, param_1 != (UStruct *)0x0)) {
    do {
      local_38.Field = pUVar5->ChildProperties;
      local_38.InterfaceIndex = -1;
      local_38.bIncludeSuper = true;
      local_38.bIncludeDeprecated = true;
      local_38.bIncludeInterface = false;
      local_38.Struct = pUVar5;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      pFVar2 = (FProperty *)local_38.Field;
      while (local_38.Field = (FField *)pFVar2, pFVar2 != (FProperty *)0x0) {
        bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
        if (bVar3) {
          local_res18 = (FName)pFVar2->_padding_;
        }
        else {
          local_res18.ComparisonIndex.Value = 0;
          local_res18.Number = 0;
        }
        if (local_res18 == local_res10) {
          return pFVar2;
        }
        local_38.Field = (FField *)pFVar2->_padding_;
        TFieldIterator<FProperty>::IterateToNext(&local_38);
        pFVar2 = (FProperty *)local_38.Field;
      }
      pUVar5 = (UStruct *)pUVar5->_padding_;
      if (pUVar5 == (UStruct *)0x0) {
LAB_1461f4802:
        pUVar5 = (UStruct *)0x0;
      }
      else {
        pUVar4 = Z_Construct_UClass_UStruct_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) goto LAB_1461f4802;
      }
    } while (pUVar5 != (UStruct *)0x0);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)param_1,(FString *)&local_38,(UObject *)0x0,None);
    FName::ToString(&local_res10,&local_48);
    this = FProperty::StaticClass();
    FName::ToString(&this->Name,&local_58);
    UE::Logging::Private::BasicFatalLog
              (&`class_FProperty*___ptr64___cdecl_FindFieldChecked<FProperty>(UStruct_const*___ptr64,FName)'
                ::__l13::LOG_Static,(FLogCategoryBase *)&LogType);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Struct != (UStruct *)0x0) {
      FMemory::Free(local_38.Struct);
    }
  }
  return (FProperty *)0x0;
}

// ForEachComponent_Internal<UCameraComponent,1,1,`AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 1461f4ca0

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
ForEachComponent_Internal<UCameraComponent,1,1,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
    if (bVar12) goto LAB_1461f4dc3;
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
LAB_1461f4dc3:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1461f4e5d;
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
LAB_1461f4e5d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_1461f4f60;
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
LAB_1461f4f60:
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
        ForEachComponent_Internal<UCameraComponent,1,1,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
      `AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar8);
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

// ForEachComponent_Internal<UCameraComponent,1,0,`AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 1461f51d0

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
ForEachComponent_Internal<UCameraComponent,1,0,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
  TArray<UCameraComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
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
    if (bVar6) goto LAB_1461f52d6;
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
LAB_1461f52d6:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1461f535d;
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
LAB_1461f535d:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1461f5461;
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
LAB_1461f5461:
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
      `AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UCameraComponent,0,1,`AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 1461f54e0

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
ForEachComponent_Internal<UCameraComponent,0,1,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
    if (bVar13) goto LAB_1461f55d3;
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
LAB_1461f55d3:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_1461f5680;
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
LAB_1461f5680:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_1461f5790;
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
LAB_1461f5790:
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
        ForEachComponent_Internal<UCameraComponent,0,1,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
        `AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar8);
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

// ForEachComponent_Internal<UCameraComponent,0,0,`AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 1461f5a20

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
ForEachComponent_Internal<UCameraComponent,0,0,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
  TArray<UCameraComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
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
    if (bVar9) goto LAB_1461f5afe;
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
LAB_1461f5afe:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_1461f5b8f;
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
LAB_1461f5b8f:
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
      goto LAB_1461f5ca0;
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
LAB_1461f5ca0:
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
        `AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetTypeHash<UE::MovieScene::IDeferredSignedObjectFlushSignal_const_,1> @ 1461f5dc0

uint __cdecl
GetTypeHash<UE::MovieScene::IDeferredSignedObjectFlushSignal_const_,1>
          (TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<AActor> @ 1461f5df0

FString * __cdecl GetTypeName<AActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneEvaluationHookSystem> @ 1461f5e30

FString * __cdecl GetTypeName<UMovieSceneEvaluationHookSystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneMetaData> @ 1461f5e70

FString * __cdecl GetTypeName<UMovieSceneMetaData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneMetaData::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneSequenceTickManager> @ 1461f5eb0

FString * __cdecl GetTypeName<UMovieSceneSequenceTickManager>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneSequenceTickManager::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneTrack> @ 1461f5ef0

FString * __cdecl GetTypeName<UMovieSceneTrack>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneTrack::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneTrackRowDecoration> @ 1461f5f30

FString * __cdecl GetTypeName<UMovieSceneTrackRowDecoration>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneTrackRowDecoration_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSubclassOf<UMovieSceneCustomBinding>_const_,int,FIdentityFunctor,TDereferenceWrapper<TSubclassOf<UMovieSceneCustomBinding>_const_,`MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>_>_> @ 1461f5ff0

void __cdecl
AlgoImpl::
HeapSortInternal<TSubclassOf<UMovieSceneCustomBinding>_const_,int,FIdentityFunctor,TDereferenceWrapper<TSubclassOf<UMovieSceneCustomBinding>_const_,_MovieSceneHelpers::GetPrioritySortedCustomBindingTypes_::__l2::<lambda_1>_>_>
          (TSubclassOf<UMovieSceneCustomBinding> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSubclassOf<UMovieSceneCustomBinding>_const_,_public:_static_void___cdecl_MovieSceneHelpers::GetPrioritySortedCustomBindingTypes(TArray<TSubclassOf<UMovieSceneCustomBinding>_const_,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  TSubclassOf<UMovieSceneCustomBinding> *pTVar1;
  TSubclassOf<UMovieSceneCustomBinding> *pTVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
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
  iVar11 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1461f60f7:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar11 = 0;
            TVar3 = (param_1->Class).field0_0x0;
            (param_1->Class).field0_0x0 = param_1[lVar10].Class.field0_0x0;
            param_1[lVar10].Class.field0_0x0 = TVar3;
            if (1 < iVar7) {
              do {
                iVar9 = iVar11 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>
                          ::operator()(param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar1 = param_1 + iVar6;
                pTVar2 = param_1 + iVar11;
                bVar5 = `MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>::
                        operator()(param_4.Predicate,pTVar2,pTVar1);
                if (!bVar5) break;
                TVar3 = (pTVar2->Class).field0_0x0;
                (pTVar2->Class).field0_0x0 = (pTVar1->Class).field0_0x0;
                (pTVar1->Class).field0_0x0 = TVar3;
                iVar11 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar1 = param_1 + iVar8;
    pTVar2 = param_1 + iVar6;
    bVar5 = `MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pTVar2,pTVar1);
    if (!bVar5) goto LAB_1461f60f7;
    TVar3 = (pTVar2->Class).field0_0x0;
    (pTVar2->Class).field0_0x0 = (pTVar1->Class).field0_0x0;
    iVar7 = iVar8 * 2 + 1;
    (pTVar1->Class).field0_0x0 = TVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<UMovieSceneSection_*,int,FIdentityFunctor,bool_(__cdecl*)(UMovieSceneSection_const_*,UMovieSceneSection_const_*)> @ 1461f61e0

void __cdecl
AlgoImpl::
HeapSortInternal<UMovieSceneSection_*,int,FIdentityFunctor,bool_(__cdecl*)(UMovieSceneSection_const_*,UMovieSceneSection_const_*)>
          (UMovieSceneSection **param_1,int param_2,FIdentityFunctor param_3,
          _func___cdecl_bool_UMovieSceneSection_ptr_UMovieSceneSection_ptr *param_4)

{
  UMovieSceneSection *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
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
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_1461f62de:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pUVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = (*param_4)(param_1[(longlong)iVar8 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = (*param_4)(param_1[iVar7],param_1[iVar4]);
                if (!bVar3) break;
                pUVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = pUVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = (*param_4)(param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = (*param_4)(param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_1461f62de;
    pUVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pUVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<UMovieSceneSection_*,int,`MovieSceneHelpers::SortConsecutiveSections'::__l2::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)> @ 1461f63b0

void __cdecl
AlgoImpl::
HeapSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::SortConsecutiveSections_::__l2::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          (UMovieSceneSection **param_1,int param_2,<lambda_1> param_3,
          _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *param_4)

{
  UMovieSceneSection *pUVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TRangeBound<FFrameNumber> TVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  int iVar8;
  int iVar9;
  TRangeBound<FFrameNumber> TVar10;
  int iVar11;
  longlong lVar12;
  _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *local_res20;
  uint local_48;
  uint local_40;
  uint local_38;
  uint local_30;
  
  local_res20 = param_4;
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::SortConsecutiveSections_::__l2::<lambda_1>,TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>_>
            (param_1,param_2,param_3,
             (TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
              )&local_res20);
  iVar9 = param_2 + -1;
  lVar12 = (longlong)iVar9;
  if (0 < iVar9) {
    do {
      pUVar1 = *param_1;
      *param_1 = param_1[lVar12];
      param_1[lVar12] = pUVar1;
      iVar11 = 0;
      if (1 < iVar9) {
        do {
          iVar3 = iVar11 * 2;
          iVar8 = iVar3 + 1;
          if (iVar3 + 2 < iVar9) {
            if (param_1[(longlong)iVar3 + 2] == (UMovieSceneSection *)0x0) {
              local_48 = CONCAT31(local_48._1_3_,1);
              TVar10.Value.Value = 0;
              TVar10._0_4_ = local_48;
            }
            else {
              TVar10 = (param_1[(longlong)iVar3 + 2]->SectionRange).Value.LowerBound;
            }
            if (param_1[iVar8] == (UMovieSceneSection *)0x0) {
              local_40 = CONCAT31(local_40._1_3_,1);
              TVar6.Value.Value = 0;
              TVar6._0_4_ = local_40;
            }
            else {
              TVar6 = (param_1[iVar8]->SectionRange).Value.LowerBound;
            }
            bVar4 = (*local_res20)(TVar10,TVar6);
            if (bVar4) {
              iVar8 = iVar3;
            }
            iVar8 = iVar8 + 1;
          }
          if (param_1[iVar11] == (UMovieSceneSection *)0x0) {
            local_38 = CONCAT31(local_38._1_3_,1);
            TVar5.Value.Value = 0;
            TVar5._0_4_ = local_38;
          }
          else {
            TVar5 = (param_1[iVar11]->SectionRange).Value.LowerBound;
          }
          if (param_1[iVar8] == (UMovieSceneSection *)0x0) {
            local_30 = CONCAT31(local_30._1_3_,1);
            TVar7.Value.Value = 0;
            TVar7._0_4_ = local_30;
          }
          else {
            TVar7 = (param_1[iVar8]->SectionRange).Value.LowerBound;
          }
          bVar4 = (*local_res20)(TVar5,TVar7);
          if (!bVar4) break;
          pUVar1 = param_1[iVar11];
          param_1[iVar11] = param_1[iVar8];
          param_1[iVar8] = pUVar1;
          iVar11 = iVar8;
        } while (iVar8 * 2 + 1 < iVar9);
      }
      iVar9 = iVar9 + -1;
      lVar12 = lVar12 + -1;
    } while (0 < lVar12);
  }
  return;
}

// HeapSortInternal<UMovieSceneSection_*,int,`Projection<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const_,TRangeBound<FFrameNumber>_(__cdecl_TRange<FFrameNumber>::*)(void)const_>'::__l3::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)> @ 1461f6570

void __cdecl
AlgoImpl::
HeapSortInternal<UMovieSceneSection_*,int,_Projection<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const_,TRangeBound<FFrameNumber>_(__cdecl_TRange<FFrameNumber>::*)(void)const_>_::__l3::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          (UMovieSceneSection **param_1,int param_2,<lambda_1> *param_3,
          _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *param_4)

{
  UMovieSceneSection *pUVar1;
  code *pcVar2;
  pmf_9615a320 pVar3;
  pmf_b3ab0383 pVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TRangeBound<FFrameNumber> local_108;
  TRangeBound<FFrameNumber> local_100;
  TRangeBound<FFrameNumber> local_f8;
  TRangeBound<FFrameNumber> local_f0;
  TRangeBound<FFrameNumber> local_e8;
  TRangeBound<FFrameNumber> local_e0;
  TRangeBound<FFrameNumber> local_d8;
  TRangeBound<FFrameNumber> local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  pVar3 = (param_3->Callable0).MemberFunctionPtr;
  pVar4 = (param_3->CallableRest).MemberFunctionPtr;
  if ((param_2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                         ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar11 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1461f6741:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar8 = (longlong)iVar7;
        if (0 < iVar7) {
          local_c8 = *(undefined4 *)&(param_3->Callable0).MemberFunctionPtr;
          uStack_c4 = *(undefined4 *)&(param_3->Callable0).MemberFunctionPtr.field_0x4;
          pVar3 = (param_3->Callable0).MemberFunctionPtr;
          uStack_c0 = *(undefined4 *)&(param_3->CallableRest).MemberFunctionPtr;
          uStack_bc = *(undefined4 *)&(param_3->CallableRest).MemberFunctionPtr.field_0x4;
          pVar4 = (param_3->CallableRest).MemberFunctionPtr;
          do {
            iVar11 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pUVar1;
            if (1 < iVar7) {
              do {
                iVar10 = iVar11 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  (*(code *)pVar3)(param_1[(longlong)iVar10 + 2],local_78);
                  (*(code *)pVar4)(local_78,&local_e0);
                  (*(code *)pVar3)(param_1[iVar6],local_68);
                  (*(code *)pVar4)(local_68,&local_e8);
                  bVar5 = (*param_4)(local_e0,local_e8);
                  if (bVar5) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                (*(code *)pVar3)(param_1[iVar11],local_58);
                (*(code *)pVar4)(local_58,&local_d0);
                (*(code *)pVar3)(param_1[iVar6],local_48);
                (*(code *)pVar4)(local_48,&local_d8);
                bVar5 = (*param_4)(local_d0,local_d8);
                if (!bVar5) break;
                pUVar1 = param_1[iVar11];
                param_1[iVar11] = param_1[iVar6];
                param_1[iVar6] = pUVar1;
                iVar11 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            lVar8 = lVar8 + -1;
            iVar7 = iVar7 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      (*(code *)pVar3)(param_1[(longlong)iVar7 + 2],local_b8);
      (*(code *)pVar4)(local_b8,&local_100);
      (*(code *)pVar3)(param_1[iVar9],local_a8);
      (*(code *)pVar4)(local_a8,&local_108);
      bVar5 = (*param_4)(local_100,local_108);
      if (bVar5) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    (*(code *)pVar3)(param_1[iVar6],local_98);
    (*(code *)pVar4)(local_98,&local_f0);
    (*(code *)pVar3)(param_1[iVar9],local_88);
    (*(code *)pVar4)(local_88,&local_f8);
    bVar5 = (*param_4)(local_f0,local_f8);
    if (!bVar5) goto LAB_1461f6741;
    pUVar1 = param_1[iVar6];
    param_1[iVar6] = param_1[iVar9];
    iVar7 = iVar9 * 2 + 1;
    param_1[iVar9] = pUVar1;
    iVar6 = iVar9;
  } while( true );
}

// HeapSortInternal<UMovieSceneSection_*,int,`MovieSceneHelpers::FindNearestSectionAtTime'::__l25::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)> @ 1461f68b0

void __cdecl
AlgoImpl::
HeapSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::FindNearestSectionAtTime_::__l25::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          (UMovieSceneSection **param_1,int param_2,<lambda_1> param_3,
          _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *param_4)

{
  UMovieSceneSection *pUVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TRangeBound<FFrameNumber> TVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  int iVar8;
  int iVar9;
  TRangeBound<FFrameNumber> TVar10;
  int iVar11;
  longlong lVar12;
  _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *local_res20;
  uint local_48;
  uint local_40;
  uint local_38;
  uint local_30;
  
  local_res20 = param_4;
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::FindNearestSectionAtTime_::__l25::<lambda_1>,TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>_>
            (param_1,param_2,param_3,
             (TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
              )&local_res20);
  iVar9 = param_2 + -1;
  lVar12 = (longlong)iVar9;
  if (0 < iVar9) {
    do {
      pUVar1 = *param_1;
      *param_1 = param_1[lVar12];
      param_1[lVar12] = pUVar1;
      iVar11 = 0;
      if (1 < iVar9) {
        do {
          iVar3 = iVar11 * 2;
          iVar8 = iVar3 + 1;
          if (iVar3 + 2 < iVar9) {
            if (param_1[(longlong)iVar3 + 2] == (UMovieSceneSection *)0x0) {
              local_48 = CONCAT31(local_48._1_3_,1);
              TVar10.Value.Value = 0;
              TVar10._0_4_ = local_48;
            }
            else {
              TVar10 = (param_1[(longlong)iVar3 + 2]->SectionRange).Value.LowerBound;
            }
            if (param_1[iVar8] == (UMovieSceneSection *)0x0) {
              local_40 = CONCAT31(local_40._1_3_,1);
              TVar6.Value.Value = 0;
              TVar6._0_4_ = local_40;
            }
            else {
              TVar6 = (param_1[iVar8]->SectionRange).Value.LowerBound;
            }
            bVar4 = (*local_res20)(TVar10,TVar6);
            if (bVar4) {
              iVar8 = iVar3;
            }
            iVar8 = iVar8 + 1;
          }
          if (param_1[iVar11] == (UMovieSceneSection *)0x0) {
            local_38 = CONCAT31(local_38._1_3_,1);
            TVar5.Value.Value = 0;
            TVar5._0_4_ = local_38;
          }
          else {
            TVar5 = (param_1[iVar11]->SectionRange).Value.LowerBound;
          }
          if (param_1[iVar8] == (UMovieSceneSection *)0x0) {
            local_30 = CONCAT31(local_30._1_3_,1);
            TVar7.Value.Value = 0;
            TVar7._0_4_ = local_30;
          }
          else {
            TVar7 = (param_1[iVar8]->SectionRange).Value.LowerBound;
          }
          bVar4 = (*local_res20)(TVar5,TVar7);
          if (!bVar4) break;
          pUVar1 = param_1[iVar11];
          param_1[iVar11] = param_1[iVar8];
          param_1[iVar8] = pUVar1;
          iVar11 = iVar8;
        } while (iVar8 * 2 + 1 < iVar9);
      }
      iVar9 = iVar9 + -1;
      lVar12 = lVar12 + -1;
    } while (0 < lVar12);
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>_>_> @ 1461f6a70

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1461f6b60:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            iVar10 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar12->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if (param_1[(longlong)iVar11 + 2]._s_1.PrevFreeIndex <
                      param_1[iVar6]._s_1.PrevFreeIndex) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (param_1[iVar6]._s_1.PrevFreeIndex <= param_1[iVar10]._s_1.PrevFreeIndex) break;
                uVar2 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
                TVar3 = param_1[iVar10]._s_1;
                uVar4 = *(undefined8 *)(param_1[iVar10].ElementData.Pad + 8);
                param_1[iVar10]._s_1 = param_1[iVar6]._s_1;
                *(undefined8 *)((longlong)param_1[iVar10].ElementData.Pad + 8) = uVar2;
                param_1[iVar6]._s_1 = TVar3;
                *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2]._s_1.PrevFreeIndex < param_1[iVar8]._s_1.PrevFreeIndex) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if (param_1[iVar8]._s_1.PrevFreeIndex <= param_1[iVar6]._s_1.PrevFreeIndex) goto LAB_1461f6b60;
    uVar2 = *(undefined8 *)(param_1[iVar8].ElementData.Pad + 8);
    iVar7 = iVar8 * 2 + 1;
    TVar3 = param_1[iVar6]._s_1;
    uVar4 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
    param_1[iVar6]._s_1 = param_1[iVar8]._s_1;
    *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar2;
    param_1[iVar8]._s_1 = TVar3;
    *(undefined8 *)((longlong)param_1[iVar8].ElementData.Pad + 8) = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TTuple<UE::MovieScene::FComplexInclusivityFilter,int>,int,`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_4>,TLess<void>_> @ 1461f6c40

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<UE::MovieScene::FComplexInclusivityFilter,int>,int,_UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer_::__l2::<lambda_4>,TLess<void>_>
          (TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *param_1,int param_2,
          <lambda_4> param_3,TLess<void> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar16;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar17;
  int iVar18;
  int iVar19;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar20;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar18 = iVar13;
  iVar19 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_1461f6d71:
      if (iVar19 == 0) {
        iVar13 = param_2 + -1;
        lVar15 = (longlong)iVar13;
        if (0 < iVar13) {
          pTVar20 = param_1 + lVar15;
          do {
            uVar2 = *(undefined8 *)&pTVar20->field_0x8;
            iVar18 = 0;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            uVar5 = *(undefined8 *)&param_1->field_0x10;
            uVar6 = *(undefined8 *)&param_1->field_0x18;
            uVar7 = *(undefined8 *)&param_1->field_0x20;
            uVar8 = *(undefined8 *)&param_1->field_0x28;
            uVar9 = *(undefined8 *)&param_1->field_0x30;
            uVar10 = *(undefined8 *)&param_1->field_0x38;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar20;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            uVar2 = *(undefined8 *)&pTVar20->field_0x18;
            *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pTVar20->field_0x10;
            *(undefined8 *)&param_1->field_0x18 = uVar2;
            uVar2 = *(undefined8 *)&pTVar20->field_0x28;
            *(undefined8 *)&param_1->field_0x20 = *(undefined8 *)&pTVar20->field_0x20;
            *(undefined8 *)&param_1->field_0x28 = uVar2;
            uVar2 = *(undefined8 *)&pTVar20->field_0x38;
            *(undefined8 *)&param_1->field_0x30 = *(undefined8 *)&pTVar20->field_0x30;
            *(undefined8 *)&param_1->field_0x38 = uVar2;
            *(undefined8 *)pTVar20 = uVar3;
            *(undefined8 *)&pTVar20->field_0x8 = uVar4;
            *(undefined8 *)&pTVar20->field_0x10 = uVar5;
            *(undefined8 *)&pTVar20->field_0x18 = uVar6;
            *(undefined8 *)&pTVar20->field_0x20 = uVar7;
            *(undefined8 *)&pTVar20->field_0x28 = uVar8;
            *(undefined8 *)&pTVar20->field_0x30 = uVar9;
            *(undefined8 *)&pTVar20->field_0x38 = uVar10;
            if (1 < iVar13) {
              do {
                iVar19 = iVar18 * 2;
                iVar12 = iVar19 + 1;
                if (iVar19 + 2 < iVar13) {
                  if (*(int *)&param_1[(longlong)iVar19 + 2].field_0x3c <
                      *(int *)&param_1[iVar12].field_0x3c) {
                    iVar12 = iVar19;
                  }
                  iVar12 = iVar12 + 1;
                }
                pTVar16 = param_1 + iVar12;
                pTVar17 = param_1 + iVar18;
                if (*(int *)&pTVar16->field_0x3c <= *(int *)&pTVar17->field_0x3c) break;
                uVar2 = *(undefined8 *)&pTVar16->field_0x8;
                uVar3 = *(undefined8 *)pTVar17;
                uVar4 = *(undefined8 *)&pTVar17->field_0x8;
                uVar5 = *(undefined8 *)&pTVar17->field_0x10;
                uVar6 = *(undefined8 *)&pTVar17->field_0x18;
                uVar7 = *(undefined8 *)&pTVar17->field_0x20;
                uVar8 = *(undefined8 *)&pTVar17->field_0x28;
                uVar9 = *(undefined8 *)&pTVar17->field_0x30;
                uVar10 = *(undefined8 *)&pTVar17->field_0x38;
                *(undefined8 *)pTVar17 = *(undefined8 *)pTVar16;
                *(undefined8 *)&pTVar17->field_0x8 = uVar2;
                uVar2 = *(undefined8 *)&pTVar16->field_0x18;
                *(undefined8 *)&pTVar17->field_0x10 = *(undefined8 *)&pTVar16->field_0x10;
                *(undefined8 *)&pTVar17->field_0x18 = uVar2;
                uVar2 = *(undefined8 *)&pTVar16->field_0x28;
                *(undefined8 *)&pTVar17->field_0x20 = *(undefined8 *)&pTVar16->field_0x20;
                *(undefined8 *)&pTVar17->field_0x28 = uVar2;
                uVar2 = *(undefined8 *)&pTVar16->field_0x38;
                *(undefined8 *)&pTVar17->field_0x30 = *(undefined8 *)&pTVar16->field_0x30;
                *(undefined8 *)&pTVar17->field_0x38 = uVar2;
                *(undefined8 *)pTVar16 = uVar3;
                *(undefined8 *)&pTVar16->field_0x8 = uVar4;
                *(undefined8 *)&pTVar16->field_0x10 = uVar5;
                *(undefined8 *)&pTVar16->field_0x18 = uVar6;
                *(undefined8 *)&pTVar16->field_0x20 = uVar7;
                *(undefined8 *)&pTVar16->field_0x28 = uVar8;
                *(undefined8 *)&pTVar16->field_0x30 = uVar9;
                *(undefined8 *)&pTVar16->field_0x38 = uVar10;
                iVar18 = iVar12;
              } while (iVar12 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar15 = lVar15 + -1;
            pTVar20 = pTVar20 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar12 = iVar19 + -1;
      iVar13 = iVar18 + -2;
      iVar18 = iVar13;
      iVar19 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar14 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (*(int *)&param_1[(longlong)iVar13 + 2].field_0x3c < *(int *)&param_1[iVar14].field_0x3c) {
        iVar14 = iVar13;
      }
      iVar14 = iVar14 + 1;
    }
    pTVar20 = param_1 + iVar14;
    pTVar16 = param_1 + iVar12;
    if (*(int *)&pTVar20->field_0x3c <= *(int *)&pTVar16->field_0x3c) goto LAB_1461f6d71;
    uVar2 = *(undefined8 *)&pTVar20->field_0x8;
    iVar13 = iVar14 * 2 + 1;
    uVar3 = *(undefined8 *)pTVar16;
    uVar4 = *(undefined8 *)&pTVar16->field_0x8;
    uVar5 = *(undefined8 *)&pTVar16->field_0x10;
    uVar6 = *(undefined8 *)&pTVar16->field_0x18;
    uVar7 = *(undefined8 *)&pTVar16->field_0x20;
    uVar8 = *(undefined8 *)&pTVar16->field_0x28;
    uVar9 = *(undefined8 *)&pTVar16->field_0x30;
    uVar10 = *(undefined8 *)&pTVar16->field_0x38;
    *(undefined8 *)pTVar16 = *(undefined8 *)pTVar20;
    *(undefined8 *)&pTVar16->field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pTVar20->field_0x18;
    *(undefined8 *)&pTVar16->field_0x10 = *(undefined8 *)&pTVar20->field_0x10;
    *(undefined8 *)&pTVar16->field_0x18 = uVar2;
    uVar2 = *(undefined8 *)&pTVar20->field_0x28;
    *(undefined8 *)&pTVar16->field_0x20 = *(undefined8 *)&pTVar20->field_0x20;
    *(undefined8 *)&pTVar16->field_0x28 = uVar2;
    uVar2 = *(undefined8 *)&pTVar20->field_0x38;
    *(undefined8 *)&pTVar16->field_0x30 = *(undefined8 *)&pTVar20->field_0x30;
    *(undefined8 *)&pTVar16->field_0x38 = uVar2;
    *(undefined8 *)pTVar20 = uVar3;
    *(undefined8 *)&pTVar20->field_0x8 = uVar4;
    *(undefined8 *)&pTVar20->field_0x10 = uVar5;
    *(undefined8 *)&pTVar20->field_0x18 = uVar6;
    *(undefined8 *)&pTVar20->field_0x20 = uVar7;
    *(undefined8 *)&pTVar20->field_0x28 = uVar8;
    *(undefined8 *)&pTVar20->field_0x30 = uVar9;
    *(undefined8 *)&pTVar20->field_0x38 = uVar10;
    iVar12 = iVar14;
  } while( true );
}

// HeapSortInternal<TTuple<UE::MovieScene::FComponentTypeID,int>,int,`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_3>,TLess<void>_> @ 1461f6ed0

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<UE::MovieScene::FComponentTypeID,int>,int,_UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer_::__l2::<lambda_3>,TLess<void>_>
          (TTuple<UE::MovieScene::FComponentTypeID,int> *param_1,int param_2,<lambda_3> param_3,
          TLess<void> param_4)

{
  TTuple<UE::MovieScene::FComponentTypeID,int> *pTVar1;
  TTuple<UE::MovieScene::FComponentTypeID,int> *pTVar2;
  TTuple<UE::MovieScene::FComponentTypeID,int> TVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
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
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1461f6fb5:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            TVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = TVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (*(int *)&param_1[(longlong)iVar10 + 2].field_0x4 <
                      *(int *)&param_1[iVar6].field_0x4) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar1 = param_1 + iVar6;
                pTVar2 = param_1 + iVar9;
                if (*(int *)&pTVar1->field_0x4 <= *(int *)&pTVar2->field_0x4) break;
                TVar3 = *pTVar2;
                *pTVar2 = *pTVar1;
                *pTVar1 = TVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(int *)&param_1[(longlong)iVar7 + 2].field_0x4 < *(int *)&param_1[iVar8].field_0x4) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar1 = param_1 + iVar8;
    pTVar2 = param_1 + iVar6;
    if (*(int *)&pTVar1->field_0x4 <= *(int *)&pTVar2->field_0x4) goto LAB_1461f6fb5;
    TVar3 = *pTVar2;
    *pTVar2 = *pTVar1;
    iVar7 = iVar8 * 2 + 1;
    *pTVar1 = TVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<FMovieSceneBindingReference,int,UE::Core::Private::TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>,TLess<void>_> @ 1461f7070

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneBindingReference,int,UE::Core::Private::TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>,TLess<void>_>
          (FMovieSceneBindingReference *param_1,int param_2,
          TProjectionMemberData<FGuid_FMovieSceneBindingReference::*> param_3,TLess<void> param_4)

{
  FMovieSceneBindingReference *pFVar1;
  FMovieSceneBindingReference *pFVar2;
  FUniversalObjectLocator *pFVar3;
  FUniversalObjectLocator *pFVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TObjectPtr<UMovieSceneCustomBinding>_u_0 TVar9;
  TObjectPtr<UMovieSceneCustomBinding>_u_0 TVar10;
  uint uVar11;
  uint uVar12;
  undefined7 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ELocatorResolveFlags EVar20;
  undefined7 uVar21;
  int iVar22;
  bool bVar23;
  uint *puVar24;
  int iVar25;
  longlong lVar26;
  FMovieSceneBindingReference *pFVar27;
  int iVar28;
  uint *puVar29;
  int iVar30;
  longlong lVar31;
  TLess<void> local_res20 [8];
  
  lVar26 = (longlong)(int)param_3.DataMemberPtr;
  local_res20[0] = param_4;
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
  HeapifyInternal<FMovieSceneBindingReference,int,UE::Core::Private::TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>,TReversePredicate<TLess<void>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar28 = param_2 + -1;
  lVar31 = (longlong)iVar28;
  if (0 < iVar28) {
    pFVar27 = param_1 + lVar31;
    do {
      uVar5 = (pFVar27->ID).B;
      uVar11 = (pFVar27->ID).C;
      uVar12 = (pFVar27->ID).D;
      iVar30 = 0;
      uVar14 = (param_1->ID).A;
      uVar15 = (param_1->ID).B;
      uVar16 = (param_1->ID).C;
      uVar17 = (param_1->ID).D;
      pFVar8 = (param_1->Locator).Fragments.AllocatorInstance.Data;
      iVar18 = (param_1->Locator).Fragments.ArrayNum;
      iVar19 = (param_1->Locator).Fragments.ArrayMax;
      EVar20 = param_1->ResolveFlags;
      uVar21 = *(undefined7 *)&param_1->field_0x21;
      TVar9 = (param_1->CustomBinding).field0_0x0;
      (param_1->ID).A = (pFVar27->ID).A;
      (param_1->ID).B = uVar5;
      (param_1->ID).C = uVar11;
      (param_1->ID).D = uVar12;
      iVar25 = (pFVar27->Locator).Fragments.ArrayNum;
      iVar7 = (pFVar27->Locator).Fragments.ArrayMax;
      (param_1->Locator).Fragments.AllocatorInstance.Data =
           (pFVar27->Locator).Fragments.AllocatorInstance.Data;
      (param_1->Locator).Fragments.ArrayNum = iVar25;
      (param_1->Locator).Fragments.ArrayMax = iVar7;
      uVar13 = *(undefined7 *)&pFVar27->field_0x21;
      TVar10 = (pFVar27->CustomBinding).field0_0x0;
      param_1->ResolveFlags = pFVar27->ResolveFlags;
      *(undefined7 *)&param_1->field_0x21 = uVar13;
      (param_1->CustomBinding).field0_0x0 = TVar10;
      (pFVar27->ID).A = uVar14;
      (pFVar27->ID).B = uVar15;
      (pFVar27->ID).C = uVar16;
      (pFVar27->ID).D = uVar17;
      (pFVar27->Locator).Fragments.AllocatorInstance.Data = pFVar8;
      (pFVar27->Locator).Fragments.ArrayNum = iVar18;
      (pFVar27->Locator).Fragments.ArrayMax = iVar19;
      pFVar27->ResolveFlags = EVar20;
      *(undefined7 *)&pFVar27->field_0x21 = uVar21;
      (pFVar27->CustomBinding).field0_0x0 = TVar9;
      if (1 < iVar28) {
        do {
          iVar7 = iVar30 * 2;
          iVar25 = iVar7 + 1;
          if (iVar7 + 2 < iVar28) {
            puVar24 = (uint *)((longlong)&param_1[(longlong)iVar7 + 1].ID.A + lVar26);
            puVar29 = (uint *)((longlong)&param_1[(longlong)iVar7 + 2].ID.A + lVar26);
            if (*puVar29 < *puVar24) {
              bVar23 = true;
            }
            else if (*puVar24 < *puVar29) {
              bVar23 = false;
            }
            else if (puVar29[1] < puVar24[1]) {
              bVar23 = true;
            }
            else if (puVar24[1] < puVar29[1]) {
              bVar23 = false;
            }
            else if (puVar29[2] < puVar24[2]) {
              bVar23 = true;
            }
            else if (puVar24[2] < puVar29[2]) {
              bVar23 = false;
            }
            else {
              bVar23 = puVar29[3] < puVar24[3];
            }
            if (bVar23) {
              iVar25 = iVar7;
            }
            iVar25 = iVar25 + 1;
          }
          puVar24 = (uint *)((longlong)&param_1[iVar30].ID.A + lVar26);
          uVar5 = *(uint *)((longlong)&param_1[iVar25].ID.A + lVar26);
          if ((uVar5 <= *puVar24) &&
             ((*puVar24 != uVar5 ||
              ((uVar5 = *(uint *)((longlong)&param_1[iVar25].ID.B + lVar26), uVar5 <= puVar24[1] &&
               ((puVar24[1] != uVar5 ||
                ((uVar5 = *(uint *)((longlong)&param_1[iVar25].ID.C + lVar26), uVar5 <= puVar24[2]
                 && ((puVar24[2] != uVar5 ||
                     (*(uint *)((longlong)&param_1[iVar25].ID.D + lVar26) <= puVar24[3]))))))))))))
          break;
          pFVar1 = param_1 + iVar25;
          uVar5 = (pFVar1->ID).B;
          uVar11 = (pFVar1->ID).C;
          uVar12 = (pFVar1->ID).D;
          pFVar2 = param_1 + iVar30;
          uVar14 = (pFVar2->ID).A;
          uVar15 = (pFVar2->ID).B;
          uVar16 = (pFVar2->ID).C;
          uVar17 = (pFVar2->ID).D;
          pFVar3 = &param_1[iVar30].Locator;
          pFVar8 = (pFVar3->Fragments).AllocatorInstance.Data;
          iVar19 = (pFVar3->Fragments).ArrayNum;
          iVar22 = (pFVar3->Fragments).ArrayMax;
          pFVar2 = param_1 + iVar30;
          EVar20 = pFVar2->ResolveFlags;
          uVar21 = *(undefined7 *)&pFVar2->field_0x21;
          TVar9 = *(TObjectPtr<UMovieSceneCustomBinding>_u_0 *)(&pFVar2->ResolveFlags + 8);
          pFVar2 = param_1 + iVar30;
          (pFVar2->ID).A = (pFVar1->ID).A;
          (pFVar2->ID).B = uVar5;
          (pFVar2->ID).C = uVar11;
          (pFVar2->ID).D = uVar12;
          pFVar3 = &param_1[iVar25].Locator;
          iVar7 = (pFVar3->Fragments).ArrayNum;
          iVar18 = (pFVar3->Fragments).ArrayMax;
          pFVar4 = &param_1[iVar30].Locator;
          (pFVar4->Fragments).AllocatorInstance.Data = (pFVar3->Fragments).AllocatorInstance.Data;
          (pFVar4->Fragments).ArrayNum = iVar7;
          (pFVar4->Fragments).ArrayMax = iVar18;
          pFVar1 = param_1 + iVar25;
          uVar13 = *(undefined7 *)&pFVar1->field_0x21;
          TVar10 = *(TObjectPtr<UMovieSceneCustomBinding>_u_0 *)(&pFVar1->ResolveFlags + 8);
          pFVar2 = param_1 + iVar30;
          pFVar2->ResolveFlags = pFVar1->ResolveFlags;
          *(undefined7 *)&pFVar2->field_0x21 = uVar13;
          *(TObjectPtr<UMovieSceneCustomBinding>_u_0 *)(&pFVar2->ResolveFlags + 8) = TVar10;
          pFVar1 = param_1 + iVar25;
          (pFVar1->ID).A = uVar14;
          (pFVar1->ID).B = uVar15;
          (pFVar1->ID).C = uVar16;
          (pFVar1->ID).D = uVar17;
          pFVar3 = &param_1[iVar25].Locator;
          (pFVar3->Fragments).AllocatorInstance.Data = pFVar8;
          (pFVar3->Fragments).ArrayNum = iVar19;
          (pFVar3->Fragments).ArrayMax = iVar22;
          pFVar1 = param_1 + iVar25;
          pFVar1->ResolveFlags = EVar20;
          *(undefined7 *)&pFVar1->field_0x21 = uVar21;
          *(TObjectPtr<UMovieSceneCustomBinding>_u_0 *)(&pFVar1->ResolveFlags + 8) = TVar9;
          iVar30 = iVar25;
        } while (iVar25 * 2 + 1 < iVar28);
      }
      iVar28 = iVar28 + -1;
      lVar31 = lVar31 + -1;
      pFVar27 = pFVar27 + -1;
    } while (0 < lVar31);
  }
  return;
}

// HeapifyInternal<UMovieSceneSection_*,int,`MovieSceneHelpers::SortConsecutiveSections'::__l2::<lambda_1>,TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>_> @ 1461f7280

void __cdecl
AlgoImpl::
HeapifyInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::SortConsecutiveSections_::__l2::<lambda_1>,TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>_>
          (UMovieSceneSection **param_1,int param_2,<lambda_1> param_3,
          TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          param_4)

{
  UMovieSceneSection *pUVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> TVar9;
  int iVar10;
  int iVar11;
  TRangeBound<FFrameNumber> TVar12;
  int iVar13;
  uint local_48;
  uint local_40;
  uint local_38;
  uint local_30;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar11 = iVar6 * 2 + 1;
  iVar3 = iVar11;
  iVar13 = iVar6;
  do {
    while (param_2 <= iVar11) {
LAB_1461f73f2:
      if (iVar13 == 0) {
        return;
      }
      iVar6 = iVar13 + -1;
      iVar11 = iVar3 + -2;
      iVar3 = iVar11;
      iVar13 = iVar6;
    }
    iVar11 = iVar6 * 2;
    iVar10 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2] == (UMovieSceneSection *)0x0) {
        uVar4 = local_48 >> 8;
        local_48 = CONCAT31((int3)uVar4,1);
        TVar12.Value.Value = 0;
        TVar12._0_4_ = local_48;
      }
      else {
        TVar12 = (param_1[(longlong)iVar11 + 2]->SectionRange).Value.LowerBound;
      }
      if (param_1[iVar10] == (UMovieSceneSection *)0x0) {
        uVar4 = local_40 >> 8;
        local_40 = CONCAT31((int3)uVar4,1);
        TVar8.Value.Value = 0;
        TVar8._0_4_ = local_40;
      }
      else {
        TVar8 = (param_1[iVar10]->SectionRange).Value.LowerBound;
      }
      bVar5 = (**param_4.Predicate)(TVar12,TVar8);
      if (bVar5) {
        iVar10 = iVar11;
      }
      iVar10 = iVar10 + 1;
    }
    if (param_1[iVar6] == (UMovieSceneSection *)0x0) {
      uVar4 = local_38 >> 8;
      local_38 = CONCAT31((int3)uVar4,1);
      TVar7.Value.Value = 0;
      TVar7._0_4_ = local_38;
    }
    else {
      TVar7 = (param_1[iVar6]->SectionRange).Value.LowerBound;
    }
    if (param_1[iVar10] == (UMovieSceneSection *)0x0) {
      uVar4 = local_30 >> 8;
      local_30 = CONCAT31((int3)uVar4,1);
      TVar9.Value.Value = 0;
      TVar9._0_4_ = local_30;
    }
    else {
      TVar9 = (param_1[iVar10]->SectionRange).Value.LowerBound;
    }
    bVar5 = (**param_4.Predicate)(TVar7,TVar9);
    if (!bVar5) goto LAB_1461f73f2;
    pUVar1 = param_1[iVar6];
    param_1[iVar6] = param_1[iVar10];
    iVar11 = iVar10 * 2 + 1;
    param_1[iVar10] = pUVar1;
    iVar6 = iVar10;
  } while( true );
}

// HeapifyInternal<UMovieSceneSection_*,int,`MovieSceneHelpers::FindNearestSectionAtTime'::__l25::<lambda_1>,TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>_> @ 1461f7430

void __cdecl
AlgoImpl::
HeapifyInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::FindNearestSectionAtTime_::__l25::<lambda_1>,TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>_>
          (UMovieSceneSection **param_1,int param_2,<lambda_1> param_3,
          TReversePredicate<bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          param_4)

{
  UMovieSceneSection *pUVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> TVar9;
  int iVar10;
  int iVar11;
  TRangeBound<FFrameNumber> TVar12;
  int iVar13;
  uint local_48;
  uint local_40;
  uint local_38;
  uint local_30;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar11 = iVar6 * 2 + 1;
  iVar3 = iVar11;
  iVar13 = iVar6;
  do {
    while (param_2 <= iVar11) {
LAB_1461f75a2:
      if (iVar13 == 0) {
        return;
      }
      iVar6 = iVar13 + -1;
      iVar11 = iVar3 + -2;
      iVar3 = iVar11;
      iVar13 = iVar6;
    }
    iVar11 = iVar6 * 2;
    iVar10 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2] == (UMovieSceneSection *)0x0) {
        uVar4 = local_48 >> 8;
        local_48 = CONCAT31((int3)uVar4,1);
        TVar12.Value.Value = 0;
        TVar12._0_4_ = local_48;
      }
      else {
        TVar12 = (param_1[(longlong)iVar11 + 2]->SectionRange).Value.LowerBound;
      }
      if (param_1[iVar10] == (UMovieSceneSection *)0x0) {
        uVar4 = local_40 >> 8;
        local_40 = CONCAT31((int3)uVar4,1);
        TVar8.Value.Value = 0;
        TVar8._0_4_ = local_40;
      }
      else {
        TVar8 = (param_1[iVar10]->SectionRange).Value.LowerBound;
      }
      bVar5 = (**param_4.Predicate)(TVar12,TVar8);
      if (bVar5) {
        iVar10 = iVar11;
      }
      iVar10 = iVar10 + 1;
    }
    if (param_1[iVar6] == (UMovieSceneSection *)0x0) {
      uVar4 = local_38 >> 8;
      local_38 = CONCAT31((int3)uVar4,1);
      TVar7.Value.Value = 0;
      TVar7._0_4_ = local_38;
    }
    else {
      TVar7 = (param_1[iVar6]->SectionRange).Value.LowerBound;
    }
    if (param_1[iVar10] == (UMovieSceneSection *)0x0) {
      uVar4 = local_30 >> 8;
      local_30 = CONCAT31((int3)uVar4,1);
      TVar9.Value.Value = 0;
      TVar9._0_4_ = local_30;
    }
    else {
      TVar9 = (param_1[iVar10]->SectionRange).Value.LowerBound;
    }
    bVar5 = (**param_4.Predicate)(TVar7,TVar9);
    if (!bVar5) goto LAB_1461f75a2;
    pUVar1 = param_1[iVar6];
    param_1[iVar6] = param_1[iVar10];
    iVar11 = iVar10 * 2 + 1;
    param_1[iVar10] = pUVar1;
    iVar6 = iVar10;
  } while( true );
}

// HeapifyInternal<FMovieSceneBindingReference,int,UE::Core::Private::TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>,TReversePredicate<TLess<void>_>_> @ 1461f75e0

void __cdecl
AlgoImpl::
HeapifyInternal<FMovieSceneBindingReference,int,UE::Core::Private::TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>,TReversePredicate<TLess<void>_>_>
          (FMovieSceneBindingReference *param_1,int param_2,
          TProjectionMemberData<FGuid_FMovieSceneBindingReference::*> param_3,
          TReversePredicate<TLess<void>_> param_4)

{
  FMovieSceneBindingReference *pFVar1;
  FMovieSceneBindingReference *pFVar2;
  FUniversalObjectLocator *pFVar3;
  FUniversalObjectLocator *pFVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TObjectPtr<UMovieSceneCustomBinding>_u_0 TVar9;
  TObjectPtr<UMovieSceneCustomBinding>_u_0 TVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined7 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ELocatorResolveFlags EVar22;
  undefined7 uVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  int iVar28;
  longlong lVar29;
  int iVar30;
  uint *puVar31;
  
  lVar29 = (longlong)(int)param_3.DataMemberPtr;
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
  iVar30 = iVar25;
  do {
    while (param_2 <= iVar26) {
LAB_1461f7783:
      if (iVar30 == 0) {
        return;
      }
      iVar25 = iVar30 + -1;
      iVar26 = iVar7 + -2;
      iVar7 = iVar26;
      iVar30 = iVar25;
    }
    iVar26 = iVar25 * 2;
    iVar28 = iVar26 + 1;
    if (iVar26 + 2 < param_2) {
      puVar27 = (uint *)((longlong)&param_1[(longlong)iVar26 + 1].ID.A + lVar29);
      puVar31 = (uint *)((longlong)&param_1[(longlong)iVar26 + 2].ID.A + lVar29);
      if (*puVar31 < *puVar27) {
        bVar24 = true;
      }
      else if (*puVar27 < *puVar31) {
        bVar24 = false;
      }
      else if (puVar31[1] < puVar27[1]) {
        bVar24 = true;
      }
      else if (puVar27[1] < puVar31[1]) {
        bVar24 = false;
      }
      else if (puVar31[2] < puVar27[2]) {
        bVar24 = true;
      }
      else if (puVar27[2] < puVar31[2]) {
        bVar24 = false;
      }
      else {
        bVar24 = puVar31[3] < puVar27[3];
      }
      if (bVar24) {
        iVar28 = iVar26;
      }
      iVar28 = iVar28 + 1;
    }
    puVar27 = (uint *)((longlong)&param_1[iVar25].ID.A + lVar29);
    uVar5 = *(uint *)((longlong)&param_1[iVar28].ID.A + lVar29);
    if ((uVar5 <= *puVar27) &&
       ((*puVar27 != uVar5 ||
        ((uVar5 = *(uint *)((longlong)&param_1[iVar28].ID.B + lVar29), uVar5 <= puVar27[1] &&
         ((puVar27[1] != uVar5 ||
          ((uVar5 = *(uint *)((longlong)&param_1[iVar28].ID.C + lVar29), uVar5 <= puVar27[2] &&
           ((puVar27[2] != uVar5 ||
            (*(uint *)((longlong)&param_1[iVar28].ID.D + lVar29) <= puVar27[3]))))))))))))
    goto LAB_1461f7783;
    pFVar1 = param_1 + iVar28;
    uVar5 = (pFVar1->ID).B;
    uVar11 = (pFVar1->ID).C;
    uVar12 = (pFVar1->ID).D;
    iVar26 = iVar28 * 2 + 1;
    pFVar2 = param_1 + iVar25;
    uVar16 = (pFVar2->ID).A;
    uVar17 = (pFVar2->ID).B;
    uVar18 = (pFVar2->ID).C;
    uVar19 = (pFVar2->ID).D;
    pFVar3 = &param_1[iVar25].Locator;
    pFVar8 = (pFVar3->Fragments).AllocatorInstance.Data;
    iVar20 = (pFVar3->Fragments).ArrayNum;
    iVar21 = (pFVar3->Fragments).ArrayMax;
    pFVar2 = param_1 + iVar25;
    EVar22 = pFVar2->ResolveFlags;
    uVar23 = *(undefined7 *)&pFVar2->field_0x21;
    TVar9 = *(TObjectPtr<UMovieSceneCustomBinding>_u_0 *)(&pFVar2->ResolveFlags + 8);
    pFVar2 = param_1 + iVar25;
    (pFVar2->ID).A = (pFVar1->ID).A;
    (pFVar2->ID).B = uVar5;
    (pFVar2->ID).C = uVar11;
    (pFVar2->ID).D = uVar12;
    pFVar3 = &param_1[iVar28].Locator;
    iVar13 = (pFVar3->Fragments).ArrayNum;
    iVar14 = (pFVar3->Fragments).ArrayMax;
    pFVar4 = &param_1[iVar25].Locator;
    (pFVar4->Fragments).AllocatorInstance.Data = (pFVar3->Fragments).AllocatorInstance.Data;
    (pFVar4->Fragments).ArrayNum = iVar13;
    (pFVar4->Fragments).ArrayMax = iVar14;
    pFVar1 = param_1 + iVar28;
    uVar15 = *(undefined7 *)&pFVar1->field_0x21;
    TVar10 = *(TObjectPtr<UMovieSceneCustomBinding>_u_0 *)(&pFVar1->ResolveFlags + 8);
    pFVar2 = param_1 + iVar25;
    pFVar2->ResolveFlags = pFVar1->ResolveFlags;
    *(undefined7 *)&pFVar2->field_0x21 = uVar15;
    *(TObjectPtr<UMovieSceneCustomBinding>_u_0 *)(&pFVar2->ResolveFlags + 8) = TVar10;
    pFVar1 = param_1 + iVar28;
    (pFVar1->ID).A = uVar16;
    (pFVar1->ID).B = uVar17;
    (pFVar1->ID).C = uVar18;
    (pFVar1->ID).D = uVar19;
    pFVar3 = &param_1[iVar28].Locator;
    (pFVar3->Fragments).AllocatorInstance.Data = pFVar8;
    (pFVar3->Fragments).ArrayNum = iVar20;
    (pFVar3->Fragments).ArrayMax = iVar21;
    pFVar1 = param_1 + iVar28;
    pFVar1->ResolveFlags = EVar22;
    *(undefined7 *)&pFVar1->field_0x21 = uVar23;
    *(TObjectPtr<UMovieSceneCustomBinding>_u_0 *)(&pFVar1->ResolveFlags + 8) = TVar9;
    iVar25 = iVar28;
  } while( true );
}

// IndexOfBy<TArray<UMovieSceneSequenceTickManager::FTickableClientData,TSizedDefaultAllocator<32>_>,IMovieSceneSequenceTickManagerClient_*,IMovieSceneSequenceTickManagerClient_*_UMovieSceneSequenceTickManager::FTickableClientData::*> @ 1461f77c0

int __cdecl
AlgoImpl::
IndexOfBy<TArray<UMovieSceneSequenceTickManager::FTickableClientData,TSizedDefaultAllocator<32>_>,IMovieSceneSequenceTickManagerClient_*,IMovieSceneSequenceTickManagerClient_*_UMovieSceneSequenceTickManager::FTickableClientData::*>
          (TArray<UMovieSceneSequenceTickManager::FTickableClientData,TSizedDefaultAllocator<32>_>
           *param_1,IMovieSceneSequenceTickManagerClient **param_2,pdm_53580730 param_3)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data + (int)param_3;
    uVar3 = uVar2;
    do {
      if (*(IMovieSceneSequenceTickManagerClient **)pFVar1 == *param_2) {
        return (int)uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      pFVar1 = pFVar1 + 0x18;
    } while ((longlong)uVar2 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// InternalConstructor<UBuiltInDynamicBindingResolverLibrary> @ 1461f7970

void __cdecl InternalConstructor<UBuiltInDynamicBindingResolverLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UBuiltInDynamicBindingResolverLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneBindingLifetimeSection> @ 1461f79a0

void __cdecl InternalConstructor<UMovieSceneBindingLifetimeSection>(FObjectInitializer *param_1)

{
  UMovieSceneSection *this;
  
  this = (UMovieSceneSection *)param_1->Obj;
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->bSupportsInfiniteRange = true;
    this->_padding_ =
         (longlong)&UMovieSceneBindingLifetimeSection::_vftable__for__UMovieSceneSection__;
    this[1]._padding_ =
         (longlong)&UMovieSceneBindingLifetimeSection::_vftable__for__IMovieSceneEntityProvider__;
  }
  return;
}

// InternalConstructor<UMovieSceneBindingOverrides> @ 1461f79f0

void __cdecl InternalConstructor<UMovieSceneBindingOverrides>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x10 = 1;
    *(undefined ***)this = &___7UMovieSceneBindingOverrides__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneBoolSection> @ 1461f7a60

void __cdecl InternalConstructor<UMovieSceneBoolSection>(FObjectInitializer *param_1)

{
  UMovieSceneBoolSection *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  uint local_res8;
  uint local_res10;
  FGuid local_18;
  
  this = (UMovieSceneBoolSection *)param_1->Obj;
  if (this != (UMovieSceneBoolSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
    this->DefaultValue_DEPRECATED = false;
    this->_padding_ = (longlong)&___7UMovieSceneBoolSection__6B_;
    FMovieSceneBoolChannel::FMovieSceneBoolChannel(&this->BoolCurve);
    local_res8 = CONCAT31(local_res8._1_3_,2);
    local_res10 = CONCAT31(local_res10._1_3_,2);
    *(undefined1 *)&this->_padding_ = 1;
    if (((char)this->_padding_ == '\x02') && ((char)this->_padding_ == '\x02')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uint)this->_padding_ >> 1 & 1) == 0) && (bVar1)) {
      bVar4 = 1;
      if (((uint)this->_padding_ >> 9 & 1) == 0) {
        bVar4 = ~(byte)((uint)this->_padding_ >> 1) & 1;
      }
      if (bVar4 != 0) {
        local_18.D = 0;
        local_18.C = local_res10;
        this->_padding_ = (ulonglong)local_res8;
        this->_padding_ = local_18._8_8_;
      }
    }
    local_18 = FSequencerObjectVersion::GUID;
    iVar3 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    if (iVar3 < 4) {
      cVar2 = '\0';
    }
    else {
      local_18 = FSequencerObjectVersion::GUID;
      iVar3 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
      cVar2 = (5 < iVar3) + '\x01';
    }
    *(undefined1 *)&this->_padding_ = 1;
    *(char *)((longlong)&this->_padding_ + 1) = cVar2;
    UMovieSceneBoolSection::ReconstructChannelProxy(this);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneClock> @ 1461f7b80

void __cdecl InternalConstructor<UMovieSceneClock>(FObjectInitializer *param_1)

{
  UMovieSceneSignedObject *this;
  
  this = (UMovieSceneSignedObject *)param_1->Obj;
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneClock__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneExternalClock> @ 1461f7bb0

void __cdecl InternalConstructor<UMovieSceneExternalClock>(FObjectInitializer *param_1)

{
  UMovieSceneSignedObject *this;
  
  this = (UMovieSceneSignedObject *)param_1->Obj;
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneExternalClock__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneFolder> @ 1461f7c00

void __cdecl InternalConstructor<UMovieSceneFolder>(FObjectInitializer *param_1)

{
  UMovieSceneDecorationContainerObject *this;
  
  this = (UMovieSceneDecorationContainerObject *)param_1->Obj;
  if (this != (UMovieSceneDecorationContainerObject *)0x0) {
    UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneFolder__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneHookSection> @ 1461f7c70

void __cdecl InternalConstructor<UMovieSceneHookSection>(FObjectInitializer *param_1)

{
  UMovieSceneSection *this;
  
  this = (UMovieSceneSection *)param_1->Obj;
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    *(byte *)&this[1]._padding_ = (byte)this[1]._padding_ & 0xfc;
    this->_padding_ = (longlong)&UMovieSceneHookSection::_vftable__for__UMovieSceneSection__;
    this[1]._padding_ =
         (longlong)&UMovieSceneHookSection::_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ =
         (longlong)&UMovieSceneHookSection::_vftable__for__IMovieSceneEvaluationHook__;
  }
  return;
}

// InternalConstructor<UMovieSceneMetaData> @ 1461f7cd0

void __cdecl InternalConstructor<UMovieSceneMetaData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UMovieSceneMetaData::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UMovieSceneMetaData::_vftable__for__IMovieSceneMetaDataInterface__
    ;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneNameableTrack> @ 1461f7d20

void __cdecl InternalConstructor<UMovieSceneNameableTrack>(FObjectInitializer *param_1)

{
  UMovieSceneTrack *this;
  
  this = (UMovieSceneTrack *)param_1->Obj;
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneNameableTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieSceneNameableTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  }
  return;
}

// InternalConstructor<UMovieSceneSection> @ 1461f7d60

void __cdecl InternalConstructor<UMovieSceneSection>(FObjectInitializer *param_1)

{
  if ((UMovieSceneSection *)param_1->Obj != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneSequence> @ 1461f7d80

void __cdecl InternalConstructor<UMovieSceneSequence>(FObjectInitializer *param_1)

{
  UMovieSceneSignedObject *this;
  
  this = (UMovieSceneSignedObject *)param_1->Obj;
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 1) = 0x100;
    this->_padding_ = (longlong)&___7UMovieSceneSequence__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 3) = 0;
    if ((this->_padding_ & 0x10) != 0) {
      UMovieSceneCompiledDataManager::GetPrecompiledData();
      return;
    }
  }
  return;
}

// InternalConstructor<UMovieSceneSequencePlayer> @ 1461f7de0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneSequencePlayer>(FObjectInitializer *param_1)

{
  if ((UMovieSceneSequencePlayer *)param_1->Obj != (UMovieSceneSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::UMovieSceneSequencePlayer
              ((UMovieSceneSequencePlayer *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneSequenceTickManager> @ 1461f7e00

void __cdecl InternalConstructor<UMovieSceneSequenceTickManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieSceneSequenceTickManager__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    this[3].field_0x18 = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneSignedObject> @ 1461f7e80

void __cdecl InternalConstructor<UMovieSceneSignedObject>(FObjectInitializer *param_1)

{
  if ((UMovieSceneSignedObject *)param_1->Obj != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject
              ((UMovieSceneSignedObject *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneTrack> @ 1461f7ea0

void __cdecl InternalConstructor<UMovieSceneTrack>(FObjectInitializer *param_1)

{
  if ((UMovieSceneTrack *)param_1->Obj != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UBuiltInDynamicBindingResolverLibrary> @ 1461f7ec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBuiltInDynamicBindingResolverLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBuiltInDynamicBindingResolverLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBuiltInDynamicBindingResolverLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSection> @ 1461f7f70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneBindingLifetimeSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneBindingLifetimeSection::_vftable__for__UMovieSceneSection__;
    this[1]._padding_ =
         (longlong)&UMovieSceneBindingLifetimeSection::_vftable__for__IMovieSceneEntityProvider__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneBindingOverrides> @ 1461f8030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneBindingOverrides>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneBindingOverrides::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneBindingOverrides__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneBoolSection> @ 1461f8110

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneBoolSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneBoolSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneBoolSection__6B_;
    FMovieSceneBoolChannel::FMovieSceneBoolChannel((FMovieSceneBoolChannel *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneClock> @ 1461f81d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneClock>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneClock::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined ***)pUVar1 = &___7UMovieSceneClock__6B_;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneExternalClock> @ 1461f82a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneExternalClock>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneExternalClock::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined ***)pUVar1 = &___7UMovieSceneExternalClock__6B_;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 2;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneFolder> @ 1461f8380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneFolder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneDecorationContainerObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneFolder::GetPrivateStaticClass();
  this = (UMovieSceneDecorationContainerObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneDecorationContainerObject *)0x0) {
    UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneFolder__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneHookSection> @ 1461f8470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneHookSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneHookSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&UMovieSceneHookSection::_vftable__for__UMovieSceneSection__;
    this[1]._padding_ =
         (longlong)&UMovieSceneHookSection::_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ =
         (longlong)&UMovieSceneHookSection::_vftable__for__IMovieSceneEvaluationHook__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMetaData> @ 1461f8540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneMetaData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMetaData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UMovieSceneMetaData::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMovieSceneMetaData::_vftable__for__IMovieSceneMetaDataInterface__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneNameableTrack> @ 1461f8610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneNameableTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneNameableTrack::GetPrivateStaticClass();
  this = (UMovieSceneTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneNameableTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieSceneNameableTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSection> @ 1461f86d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSection::GetPrivateStaticClass();
  pUVar3 = (UMovieSceneSection *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMovieSceneSection *)0x0) {
    pUVar3 = UMovieSceneSection::UMovieSceneSection(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSequence> @ 1461f8770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneSequence>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSequence::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined ***)pUVar1 = &___7UMovieSceneSequence__6B_;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 2;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSequencePlayer> @ 1461f8840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneSequencePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSequencePlayer *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSequencePlayer::GetPrivateStaticClass();
  pUVar3 = (UMovieSceneSequencePlayer *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMovieSceneSequencePlayer *)0x0) {
    pUVar3 = UMovieSceneSequencePlayer::UMovieSceneSequencePlayer(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSequenceTickManager> @ 1461f88e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneSequenceTickManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSequenceTickManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneSequenceTickManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSignedObject> @ 1461f89d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneSignedObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSignedObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneSignedObject__6B_;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTrack> @ 1461f8aa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneTrack *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTrack::GetPrivateStaticClass();
  pUVar3 = (UMovieSceneTrack *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMovieSceneTrack *)0x0) {
    pUVar3 = UMovieSceneTrack::UMovieSceneTrack(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSubclassOf<UMovieSceneCustomBinding>_const_,int,FIdentityFunctor,TDereferenceWrapper<TSubclassOf<UMovieSceneCustomBinding>_const_,`MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>_>_> @ 1461f8b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<TSubclassOf<UMovieSceneCustomBinding>_const_,int,FIdentityFunctor,TDereferenceWrapper<TSubclassOf<UMovieSceneCustomBinding>_const_,_MovieSceneHelpers::GetPrioritySortedCustomBindingTypes_::__l2::<lambda_1>_>_>
          (TSubclassOf<UMovieSceneCustomBinding> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSubclassOf<UMovieSceneCustomBinding>_const_,_public:_static_void___cdecl_MovieSceneHelpers::GetPrioritySortedCustomBindingTypes(TArray<TSubclassOf<UMovieSceneCustomBinding>_const_,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  TObjectPtr<UClass>_u_0 TVar1;
  FObjectPtr_u_0 FVar2;
  bool bVar3;
  int iVar4;
  TSubclassOf<UMovieSceneCustomBinding> *pTVar5;
  TSubclassOf<UMovieSceneCustomBinding> *pTVar6;
  int iVar7;
  TSubclassOf<UMovieSceneCustomBinding> **ppTVar8;
  TSubclassOf<UMovieSceneCustomBinding> *pTVar9;
  TSubclassOf<UMovieSceneCustomBinding> *pTVar10;
  TSubclassOf<UMovieSceneCustomBinding> *pTVar11;
  float fVar12;
  undefined1 auStack_388 [48];
  TSubclassOf<UMovieSceneCustomBinding> *local_358;
  TSubclassOf<UMovieSceneCustomBinding> *local_348;
  TSubclassOf<UMovieSceneCustomBinding> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar12;
    memset(local_330,0,0x2e8);
    ppTVar8 = &local_348;
    do {
      pTVar5 = ppTVar8[1];
      pTVar6 = *ppTVar8;
      local_358 = ppTVar8[2];
      iVar4 = (int)((longlong)pTVar5 - (longlong)pTVar6 >> 3) + 1;
      pTVar11 = pTVar6;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1461f8c00:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          pTVar9 = pTVar5 + 1;
          TVar1 = pTVar11[iVar4 >> 1].Class.field0_0x0;
          pTVar11[iVar4 >> 1].Class.field0_0x0.ObjectPtr.field0_0x0 =
               *(FObjectPtr_u_0 *)&(pTVar11->Class).field0_0x0;
          (pTVar11->Class).field0_0x0 = TVar1;
          pTVar6 = pTVar11;
LAB_1461f8c30:
          pTVar6 = pTVar6 + 1;
          if (pTVar6 <= pTVar5) goto code_r0x0001461f8c39;
          goto LAB_1461f8c50;
        }
        for (; pTVar9 = pTVar11, pTVar6 = pTVar11, pTVar11 < pTVar5;
            pTVar5 = (TSubclassOf<UMovieSceneCustomBinding> *)
                     ((longlong)pTVar5 + 0xfffffffffffffff8)) {
          while (pTVar10 = pTVar9, pTVar6 = pTVar6 + 1, pTVar6 <= pTVar5) {
            bVar3 = `MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>::
                    operator()(param_4.Predicate,pTVar10,pTVar6);
            pTVar9 = pTVar6;
            if (!bVar3) {
              pTVar9 = pTVar10;
            }
          }
          FVar2 = *(FObjectPtr_u_0 *)&(pTVar10->Class).field0_0x0;
          (pTVar10->Class).field0_0x0 = (FObjectPtr)*(FObjectPtr *)pTVar5;
          *pTVar5 = (TSubclassOf<UMovieSceneCustomBinding>)FVar2;
        }
        goto LAB_1461f8d16;
      }
LAB_1461f8d05:
      HeapSortInternal<TSubclassOf<UMovieSceneCustomBinding>_const_,int,FIdentityFunctor,TDereferenceWrapper<TSubclassOf<UMovieSceneCustomBinding>_const_,_MovieSceneHelpers::GetPrioritySortedCustomBindingTypes_::__l2::<lambda_1>_>_>
                (pTVar6,iVar4,param_3,param_4);
LAB_1461f8d16:
      ppTVar8 = ppTVar8 + -3;
    } while (&local_348 <= ppTVar8);
  }
  return;
code_r0x0001461f8c39:
  bVar3 = `MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,pTVar11,pTVar6);
  if (!bVar3) goto LAB_1461f8c30;
LAB_1461f8c50:
  do {
    pTVar10 = pTVar9;
    pTVar9 = pTVar10 + -1;
    if (pTVar9 <= pTVar11) break;
    bVar3 = `MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pTVar9,pTVar11);
  } while (!bVar3);
  FVar2 = *(FObjectPtr_u_0 *)&(pTVar9->Class).field0_0x0;
  if (pTVar6 <= pTVar9) {
    (pTVar6->Class).field0_0x0.ObjectPtr.field0_0x0 = FVar2;
    (pTVar9->Class).field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)&(pTVar6->Class).field0_0x0
    ;
    goto LAB_1461f8c30;
  }
  iVar7 = iVar7 + -1;
  (pTVar11->Class).field0_0x0.ObjectPtr.field0_0x0 = FVar2;
  (pTVar9->Class).field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)&(pTVar11->Class).field0_0x0;
  if ((longlong)((longlong)pTVar9 + (-8 - (longlong)pTVar11) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar5 - (longlong)pTVar6 & 0xfffffffffffffff8U)) {
    if (pTVar6 < pTVar5) {
      *ppTVar8 = pTVar6;
      ppTVar8[1] = pTVar5;
      *(int *)(ppTVar8 + 2) = iVar7;
      ppTVar8 = ppTVar8 + 3;
    }
    if (pTVar9 <= pTVar11 + 1) goto LAB_1461f8d16;
    pTVar5 = pTVar10 + -2;
    pTVar6 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar9) {
      *ppTVar8 = pTVar11;
      ppTVar8[1] = pTVar10 + -2;
      *(int *)(ppTVar8 + 2) = iVar7;
      ppTVar8 = ppTVar8 + 3;
    }
    if (pTVar5 <= pTVar6) goto LAB_1461f8d16;
  }
  iVar4 = (int)((longlong)pTVar5 - (longlong)pTVar6 >> 3) + 1;
  pTVar11 = pTVar6;
  if (iVar7 == 0) goto LAB_1461f8d05;
  goto LAB_1461f8c00;
}

// IntroSortInternal<UMovieSceneSection_*,int,FIdentityFunctor,bool_(__cdecl*)(UMovieSceneSection_const_*,UMovieSceneSection_const_*)> @ 1461f8de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UMovieSceneSection_*,int,FIdentityFunctor,bool_(__cdecl*)(UMovieSceneSection_const_*,UMovieSceneSection_const_*)>
          (UMovieSceneSection **param_1,int param_2,FIdentityFunctor param_3,
          _func___cdecl_bool_UMovieSceneSection_ptr_UMovieSceneSection_ptr *param_4)

{
  UMovieSceneSection *pUVar1;
  bool bVar2;
  int iVar3;
  UMovieSceneSection **ppUVar4;
  UMovieSceneSection **ppUVar5;
  UMovieSceneSection **ppUVar6;
  UMovieSceneSection **ppUVar7;
  UMovieSceneSection ***pppUVar8;
  int iVar9;
  UMovieSceneSection **ppUVar10;
  float fVar11;
  undefined1 auStack_398 [48];
  UMovieSceneSection **local_368;
  UMovieSceneSection **local_358;
  UMovieSceneSection **local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar11;
    memset(local_340,0,0x2e8);
    pppUVar8 = &local_358;
    do {
      ppUVar4 = pppUVar8[1];
      ppUVar7 = *pppUVar8;
      local_368 = pppUVar8[2];
      iVar3 = (int)((longlong)ppUVar4 - (longlong)ppUVar7 >> 3) + 1;
      ppUVar10 = ppUVar7;
      iVar9 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_1461f8ea0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppUVar5 = ppUVar4 + 1;
          pUVar1 = ppUVar10[iVar3 >> 1];
          ppUVar10[iVar3 >> 1] = *ppUVar10;
          *ppUVar10 = pUVar1;
          ppUVar7 = ppUVar10;
LAB_1461f8ed0:
          ppUVar7 = ppUVar7 + 1;
          if (ppUVar7 <= ppUVar4) goto code_r0x0001461f8ed9;
          goto LAB_1461f8ee6;
        }
        for (; ppUVar5 = ppUVar10, ppUVar7 = ppUVar10, ppUVar10 < ppUVar4; ppUVar4 = ppUVar4 + -1) {
          while (ppUVar6 = ppUVar5, ppUVar7 = ppUVar7 + 1, ppUVar7 <= ppUVar4) {
            bVar2 = (*param_4)(*ppUVar6,*ppUVar7);
            ppUVar5 = ppUVar7;
            if (!bVar2) {
              ppUVar5 = ppUVar6;
            }
          }
          pUVar1 = *ppUVar6;
          *ppUVar6 = *ppUVar4;
          *ppUVar4 = pUVar1;
        }
        goto LAB_1461f8fab;
      }
LAB_1461f8f9a:
      HeapSortInternal<UMovieSceneSection_*,int,FIdentityFunctor,bool_(__cdecl*)(UMovieSceneSection_const_*,UMovieSceneSection_const_*)>
                (ppUVar7,iVar3,param_3,param_4);
LAB_1461f8fab:
      pppUVar8 = pppUVar8 + -3;
    } while (&local_358 <= pppUVar8);
  }
  return;
code_r0x0001461f8ed9:
  bVar2 = (*param_4)(*ppUVar10,*ppUVar7);
  if (!bVar2) goto LAB_1461f8ed0;
LAB_1461f8ee6:
  do {
    ppUVar6 = ppUVar5;
    ppUVar5 = ppUVar6 + -1;
    if (ppUVar5 <= ppUVar10) break;
    bVar2 = (*param_4)(*ppUVar5,*ppUVar10);
  } while (!bVar2);
  if (ppUVar7 <= ppUVar5) {
    pUVar1 = *ppUVar7;
    *ppUVar7 = *ppUVar5;
    *ppUVar5 = pUVar1;
    goto LAB_1461f8ed0;
  }
  pUVar1 = *ppUVar10;
  iVar9 = iVar9 + -1;
  *ppUVar10 = *ppUVar5;
  *ppUVar5 = pUVar1;
  if ((longlong)((longlong)ppUVar5 + (-8 - (longlong)ppUVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar4 - (longlong)ppUVar7 & 0xfffffffffffffff8U)) {
    if (ppUVar7 < ppUVar4) {
      *pppUVar8 = ppUVar7;
      pppUVar8[1] = ppUVar4;
      *(int *)(pppUVar8 + 2) = iVar9;
      pppUVar8 = pppUVar8 + 3;
    }
    if (ppUVar5 <= ppUVar10 + 1) goto LAB_1461f8fab;
    ppUVar4 = ppUVar6 + -2;
    ppUVar7 = ppUVar10;
  }
  else {
    if (ppUVar10 + 1 < ppUVar5) {
      *pppUVar8 = ppUVar10;
      pppUVar8[1] = ppUVar6 + -2;
      *(int *)(pppUVar8 + 2) = iVar9;
      pppUVar8 = pppUVar8 + 3;
    }
    if (ppUVar4 <= ppUVar7) goto LAB_1461f8fab;
  }
  iVar3 = (int)((longlong)ppUVar4 - (longlong)ppUVar7 >> 3) + 1;
  ppUVar10 = ppUVar7;
  if (iVar9 == 0) goto LAB_1461f8f9a;
  goto LAB_1461f8ea0;
}

// IntroSortInternal<UMovieSceneSection_*,int,`MovieSceneHelpers::SortConsecutiveSections'::__l2::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)> @ 1461f9070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::SortConsecutiveSections_::__l2::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          (UMovieSceneSection **param_1,int param_2,<lambda_1> param_3,
          _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *param_4)

{
  UMovieSceneSection *pUVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  TRangeBound<FFrameNumber> TVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> TVar9;
  TRangeBound<FFrameNumber> TVar10;
  int iVar11;
  UMovieSceneSection **ppUVar12;
  UMovieSceneSection **ppUVar13;
  UMovieSceneSection **ppUVar14;
  UMovieSceneSection ***pppUVar15;
  UMovieSceneSection **ppUVar16;
  UMovieSceneSection **ppUVar17;
  float fVar18;
  undefined1 auStack_3b8 [32];
  uint local_398;
  undefined4 uStack_394;
  uint local_390;
  undefined4 uStack_38c;
  uint local_388;
  undefined4 uStack_384;
  uint local_380;
  undefined4 uStack_37c;
  uint local_378;
  undefined4 uStack_374;
  uint local_370;
  undefined4 uStack_36c;
  UMovieSceneSection **local_358;
  UMovieSceneSection **local_348;
  UMovieSceneSection **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    pppUVar15 = &local_348;
    do {
      ppUVar17 = pppUVar15[1];
      ppUVar14 = *pppUVar15;
      local_358 = pppUVar15[2];
      iVar4 = (int)((longlong)ppUVar17 - (longlong)ppUVar14 >> 3) + 1;
      ppUVar16 = ppUVar14;
      iVar11 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1461f9131:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          ppUVar12 = ppUVar17 + 1;
          pUVar1 = ppUVar16[iVar4 >> 1];
          ppUVar16[iVar4 >> 1] = *ppUVar16;
          *ppUVar16 = pUVar1;
          ppUVar14 = ppUVar16;
LAB_1461f9160:
          ppUVar14 = ppUVar14 + 1;
          if (ppUVar14 <= ppUVar17) goto code_r0x0001461f9169;
          goto LAB_1461f91b6;
        }
        for (; ppUVar12 = ppUVar16, ppUVar14 = ppUVar16, ppUVar16 < ppUVar17;
            ppUVar17 = ppUVar17 + -1) {
          while (ppUVar13 = ppUVar12, ppUVar14 = ppUVar14 + 1, ppUVar14 <= ppUVar17) {
            if (*ppUVar14 == (UMovieSceneSection *)0x0) {
              uVar2 = local_378 >> 8;
              local_378 = CONCAT31((int3)uVar2,1);
              uStack_374 = 0;
              TVar10.Value.Value = 0;
              TVar10._0_4_ = local_378;
            }
            else {
              TVar10 = ((*ppUVar14)->SectionRange).Value.LowerBound;
            }
            if (*ppUVar13 == (UMovieSceneSection *)0x0) {
              uVar2 = local_370 >> 8;
              local_370 = CONCAT31((int3)uVar2,1);
              uStack_36c = 0;
              TVar7.Value.Value = 0;
              TVar7._0_4_ = local_370;
            }
            else {
              TVar7 = ((*ppUVar13)->SectionRange).Value.LowerBound;
            }
            bVar3 = (*param_4)(TVar7,TVar10);
            ppUVar12 = ppUVar14;
            if (!bVar3) {
              ppUVar12 = ppUVar13;
            }
          }
          pUVar1 = *ppUVar13;
          *ppUVar13 = *ppUVar17;
          *ppUVar17 = pUVar1;
        }
        goto LAB_1461f92c1;
      }
LAB_1461f92b0:
      HeapSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::SortConsecutiveSections_::__l2::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
                (ppUVar14,iVar4,param_3,param_4);
LAB_1461f92c1:
      pppUVar15 = pppUVar15 + -3;
    } while (&local_348 <= pppUVar15);
  }
  return;
code_r0x0001461f9169:
  if (*ppUVar14 == (UMovieSceneSection *)0x0) {
    local_398 = CONCAT31(local_398._1_3_,1);
    uStack_394 = 0;
    TVar8.Value.Value = 0;
    TVar8._0_4_ = local_398;
  }
  else {
    TVar8 = ((*ppUVar14)->SectionRange).Value.LowerBound;
  }
  if (*ppUVar16 == (UMovieSceneSection *)0x0) {
    local_390 = CONCAT31(local_390._1_3_,1);
    uStack_38c = 0;
    TVar5.Value.Value = 0;
    TVar5._0_4_ = local_390;
  }
  else {
    TVar5 = ((*ppUVar16)->SectionRange).Value.LowerBound;
  }
  bVar3 = (*param_4)(TVar5,TVar8);
  if (!bVar3) goto LAB_1461f9160;
LAB_1461f91b6:
  do {
    ppUVar13 = ppUVar12;
    ppUVar12 = ppUVar13 + -1;
    if (ppUVar12 <= ppUVar16) break;
    if (*ppUVar16 == (UMovieSceneSection *)0x0) {
      local_388 = CONCAT31(local_388._1_3_,1);
      uStack_384 = 0;
      TVar9.Value.Value = 0;
      TVar9._0_4_ = local_388;
    }
    else {
      TVar9 = ((*ppUVar16)->SectionRange).Value.LowerBound;
    }
    if (*ppUVar12 == (UMovieSceneSection *)0x0) {
      local_380 = CONCAT31(local_380._1_3_,1);
      uStack_37c = 0;
      TVar6.Value.Value = 0;
      TVar6._0_4_ = local_380;
    }
    else {
      TVar6 = ((*ppUVar12)->SectionRange).Value.LowerBound;
    }
    bVar3 = (*param_4)(TVar6,TVar9);
  } while (!bVar3);
  if (ppUVar14 <= ppUVar12) {
    pUVar1 = *ppUVar14;
    *ppUVar14 = *ppUVar12;
    *ppUVar12 = pUVar1;
    goto LAB_1461f9160;
  }
  pUVar1 = *ppUVar16;
  iVar11 = iVar11 + -1;
  *ppUVar16 = *ppUVar12;
  *ppUVar12 = pUVar1;
  if ((longlong)((longlong)ppUVar12 + (-8 - (longlong)ppUVar16) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar17 - (longlong)ppUVar14 & 0xfffffffffffffff8U)) {
    if (ppUVar14 < ppUVar17) {
      *pppUVar15 = ppUVar14;
      pppUVar15[1] = ppUVar17;
      *(int *)(pppUVar15 + 2) = iVar11;
      pppUVar15 = pppUVar15 + 3;
    }
    if (ppUVar12 <= ppUVar16 + 1) goto LAB_1461f92c1;
    ppUVar17 = ppUVar13 + -2;
    ppUVar14 = ppUVar16;
  }
  else {
    if (ppUVar16 + 1 < ppUVar12) {
      *pppUVar15 = ppUVar16;
      pppUVar15[1] = ppUVar13 + -2;
      *(int *)(pppUVar15 + 2) = iVar11;
      pppUVar15 = pppUVar15 + 3;
    }
    if (ppUVar17 <= ppUVar14) goto LAB_1461f92c1;
  }
  iVar4 = (int)((longlong)ppUVar17 - (longlong)ppUVar14 >> 3) + 1;
  ppUVar16 = ppUVar14;
  if (iVar11 == 0) goto LAB_1461f92b0;
  goto LAB_1461f9131;
}

// IntroSortInternal<UMovieSceneSection_*,int,`Projection<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const_,TRangeBound<FFrameNumber>_(__cdecl_TRange<FFrameNumber>::*)(void)const_>'::__l3::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)> @ 1461f93d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UMovieSceneSection_*,int,_Projection<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const_,TRangeBound<FFrameNumber>_(__cdecl_TRange<FFrameNumber>::*)(void)const_>_::__l3::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          (UMovieSceneSection **param_1,int param_2,<lambda_1> *param_3,
          _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *param_4)

{
  undefined8 uVar1;
  pmf_b3ab0383 pVar2;
  pmf_9615a320 pVar3;
  <lambda_1> *p<Var4;
  _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *p_Var5;
  <lambda_1> *p<Var6;
  pmf_9615a320 pVar7;
  TRangeBound<FFrameNumber> TVar8;
  bool bVar9;
  int iVar10;
  TProjectionMemberFunction<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const> TVar11;
  TProjectionMemberFunction<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const> TVar12;
  pmf_9615a320 pVar13;
  float fVar15;
  undefined1 auStack_468 [32];
  pmf_9615a320 *local_448;
  <lambda_1> *local_440;
  _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *local_438;
  int local_430;
  pmf_9615a320 local_428;
  pmf_9615a320 local_420;
  TRangeBound<FFrameNumber> local_418;
  TRangeBound<FFrameNumber> local_410;
  TRangeBound<FFrameNumber> local_408;
  TRangeBound<FFrameNumber> local_400;
  <lambda_1> local_3f8;
  TRangeBound<FFrameNumber> local_3e8;
  TRangeBound<FFrameNumber> local_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [32];
  pmf_9615a320 local_368;
  pmf_9615a320 local_358;
  UMovieSceneSection **local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  pmf_9615a320 pVar14;
  
  if (param_2 < 2) {
    return;
  }
  local_58 = __security_cookie.value ^ (ulonglong)auStack_468;
  local_350 = param_1 + (longlong)param_2 + -1;
  local_440 = param_3;
  local_438 = param_4;
  local_358 = (pmf_9615a320)param_1;
  fVar15 = logf((float)param_2 * (float)param_2);
  local_348 = (undefined4)(longlong)fVar15;
  memset(local_340,0,0x2e8);
  local_448 = &local_358;
LAB_1461f9470:
  local_420 = local_448[1];
  TVar11.MemberFunctionPtr = *local_448;
  local_368 = local_448[2];
  iVar10 = (int)((longlong)local_420 - (longlong)TVar11.MemberFunctionPtr >> 3) + 1;
  local_430 = local_368._0_4_;
  if (local_368._0_4_ != 0) {
LAB_1461f94a1:
    param_4 = local_438;
    param_3 = local_440;
    pVar14 = local_420;
    if (8 < iVar10) {
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1;
      }
      uVar1 = *(undefined8 *)((longlong)TVar11.MemberFunctionPtr + (longlong)(iVar10 >> 1) * 8);
      *(undefined8 *)((longlong)TVar11.MemberFunctionPtr + (longlong)(iVar10 >> 1) * 8) =
           *(undefined8 *)TVar11.MemberFunctionPtr;
      *(undefined8 *)TVar11.MemberFunctionPtr = uVar1;
      TVar12.MemberFunctionPtr = TVar11.MemberFunctionPtr;
      local_428 = (pmf_9615a320)((longlong)local_420 + 8);
      p<Var4 = local_440;
LAB_1461f94d6:
      TVar12.MemberFunctionPtr = TVar12.MemberFunctionPtr + 8;
      pVar13 = local_428;
      p_Var5 = local_438;
      p<Var6 = local_440;
      if ((ulonglong)TVar12.MemberFunctionPtr <= (ulonglong)pVar14) goto code_r0x0001461f94df;
      goto LAB_1461f9540;
    }
    for (; pVar3 = TVar11.MemberFunctionPtr, pVar13 = TVar11.MemberFunctionPtr,
        (ulonglong)TVar11.MemberFunctionPtr < (ulonglong)pVar14;
        pVar14 = (pmf_9615a320)((longlong)pVar14 + -8)) {
      while (pVar7 = pVar3, pVar13 = (pmf_9615a320)((longlong)pVar13 + 8),
            (ulonglong)pVar13 <= (ulonglong)pVar14) {
        (*(code *)(param_3->Callable0).MemberFunctionPtr)(*(undefined8 *)pVar13,local_398);
        (*(code *)(param_3->CallableRest).MemberFunctionPtr)(local_398,&local_3e8);
        TVar8 = local_3e8;
        (*(code *)(param_3->Callable0).MemberFunctionPtr)(*(undefined8 *)pVar7,local_388);
        (*(code *)(param_3->CallableRest).MemberFunctionPtr)(local_388,&local_3e0);
        bVar9 = (*param_4)(local_3e0,TVar8);
        pVar3 = pVar13;
        if (!bVar9) {
          pVar3 = pVar7;
        }
      }
      uVar1 = *(undefined8 *)pVar7;
      *(undefined8 *)pVar7 = *(undefined8 *)pVar14;
      *(undefined8 *)pVar14 = uVar1;
    }
    goto LAB_1461f9739;
  }
  goto LAB_1461f966b;
code_r0x0001461f94df:
  pVar13 = (p<Var4->Callable0).MemberFunctionPtr;
  (*(code *)pVar13)(*(undefined8 *)TVar12.MemberFunctionPtr,local_3d8);
  pVar2 = (p<Var4->CallableRest).MemberFunctionPtr;
  (*(code *)pVar2)(local_3d8,&local_418);
  TVar8 = local_418;
  (*(code *)pVar13)(*(undefined8 *)TVar11.MemberFunctionPtr,local_3c8);
  (*(code *)pVar2)(local_3c8,&local_410);
  bVar9 = (*local_438)(local_410,TVar8);
  pVar13 = local_428;
  p_Var5 = local_438;
  p<Var6 = local_440;
  if (!bVar9) goto LAB_1461f94d6;
LAB_1461f9540:
  do {
    local_3f8.Callable0.MemberFunctionPtr = TVar12.MemberFunctionPtr;
    pVar14 = pVar13;
    pVar13 = (pmf_9615a320)((longlong)pVar14 + -8);
    if ((ulonglong)pVar13 <= (ulonglong)TVar11.MemberFunctionPtr) break;
    pVar3 = (p<Var6->Callable0).MemberFunctionPtr;
    (*(code *)pVar3)(*(undefined8 *)TVar11.MemberFunctionPtr,local_3b8);
    pVar2 = (p<Var6->CallableRest).MemberFunctionPtr;
    (*(code *)pVar2)(local_3b8,&local_408);
    TVar8 = local_408;
    (*(code *)pVar3)(*(undefined8 *)pVar13,local_3a8);
    (*(code *)pVar2)(local_3a8,&local_400);
    bVar9 = (*p_Var5)(local_400,TVar8);
    TVar12.MemberFunctionPtr = local_3f8.Callable0.MemberFunctionPtr;
  } while (!bVar9);
  local_428 = pVar13;
  if ((ulonglong)local_3f8.Callable0.MemberFunctionPtr <= (ulonglong)pVar13) {
    uVar1 = *(undefined8 *)local_3f8.Callable0.MemberFunctionPtr;
    *(undefined8 *)local_3f8.Callable0.MemberFunctionPtr = *(undefined8 *)pVar13;
    *(undefined8 *)pVar13 = uVar1;
    TVar12.MemberFunctionPtr = local_3f8.Callable0.MemberFunctionPtr;
    pVar14 = local_420;
    p<Var4 = local_440;
    goto LAB_1461f94d6;
  }
  uVar1 = *(undefined8 *)TVar11.MemberFunctionPtr;
  *(undefined8 *)TVar11.MemberFunctionPtr = *(undefined8 *)pVar13;
  local_430 = local_430 + -1;
  *(undefined8 *)pVar13 = uVar1;
  param_3 = local_440;
  param_4 = local_438;
  if ((longlong)(((longlong)pVar13 - (longlong)TVar11.MemberFunctionPtr) - 8U & 0xfffffffffffffff8)
      < (longlong)
        ((longlong)local_420 - (longlong)local_3f8.Callable0.MemberFunctionPtr & 0xfffffffffffffff8U
        )) {
    if ((ulonglong)local_3f8.Callable0.MemberFunctionPtr < (ulonglong)local_420) {
      *local_448 = local_3f8.Callable0.MemberFunctionPtr;
      local_448[1] = local_420;
      *(int *)(local_448 + 2) = local_430;
      local_448 = local_448 + 3;
    }
    if ((ulonglong)pVar13 <= (ulonglong)(TVar11.MemberFunctionPtr + 8U)) goto LAB_1461f9739;
    local_420 = (pmf_9615a320)((longlong)pVar14 + -0x10);
  }
  else {
    if ((ulonglong)(TVar11.MemberFunctionPtr + 8U) < (ulonglong)pVar13) {
      *local_448 = TVar11.MemberFunctionPtr;
      local_448[1] = (pmf_9615a320)((longlong)pVar14 + -0x10);
      *(int *)(local_448 + 2) = local_430;
      local_448 = local_448 + 3;
    }
    TVar11.MemberFunctionPtr = local_3f8.Callable0.MemberFunctionPtr;
    if ((ulonglong)local_420 <= (ulonglong)local_3f8.Callable0.MemberFunctionPtr)
    goto LAB_1461f9739;
  }
  iVar10 = (int)((longlong)local_420 - (longlong)TVar11.MemberFunctionPtr >> 3) + 1;
  if (local_430 == 0) goto code_r0x0001461f9661;
  goto LAB_1461f94a1;
code_r0x0001461f9661:
  local_430 = 0;
LAB_1461f966b:
  local_3f8.Callable0.MemberFunctionPtr = (param_3->Callable0).MemberFunctionPtr;
  local_3f8.CallableRest.MemberFunctionPtr = (param_3->CallableRest).MemberFunctionPtr;
  HeapSortInternal<UMovieSceneSection_*,int,_Projection<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const_,TRangeBound<FFrameNumber>_(__cdecl_TRange<FFrameNumber>::*)(void)const_>_::__l3::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
            ((UMovieSceneSection **)TVar11.MemberFunctionPtr,iVar10,&local_3f8,param_4);
LAB_1461f9739:
  local_448 = local_448 + -3;
  if (local_448 < &local_358) {
    return;
  }
  goto LAB_1461f9470;
}

// IntroSortInternal<UMovieSceneSection_*,int,`MovieSceneHelpers::FindNearestSectionAtTime'::__l25::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)> @ 1461f97a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::FindNearestSectionAtTime_::__l25::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          (UMovieSceneSection **param_1,int param_2,<lambda_1> param_3,
          _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *param_4)

{
  UMovieSceneSection *pUVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  TRangeBound<FFrameNumber> TVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> TVar9;
  TRangeBound<FFrameNumber> TVar10;
  int iVar11;
  UMovieSceneSection **ppUVar12;
  UMovieSceneSection **ppUVar13;
  UMovieSceneSection **ppUVar14;
  UMovieSceneSection ***pppUVar15;
  UMovieSceneSection **ppUVar16;
  UMovieSceneSection **ppUVar17;
  float fVar18;
  undefined1 auStack_3b8 [32];
  uint local_398;
  undefined4 uStack_394;
  uint local_390;
  undefined4 uStack_38c;
  uint local_388;
  undefined4 uStack_384;
  uint local_380;
  undefined4 uStack_37c;
  uint local_378;
  undefined4 uStack_374;
  uint local_370;
  undefined4 uStack_36c;
  UMovieSceneSection **local_358;
  UMovieSceneSection **local_348;
  UMovieSceneSection **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    pppUVar15 = &local_348;
    do {
      ppUVar17 = pppUVar15[1];
      ppUVar14 = *pppUVar15;
      local_358 = pppUVar15[2];
      iVar4 = (int)((longlong)ppUVar17 - (longlong)ppUVar14 >> 3) + 1;
      ppUVar16 = ppUVar14;
      iVar11 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1461f9861:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          ppUVar12 = ppUVar17 + 1;
          pUVar1 = ppUVar16[iVar4 >> 1];
          ppUVar16[iVar4 >> 1] = *ppUVar16;
          *ppUVar16 = pUVar1;
          ppUVar14 = ppUVar16;
LAB_1461f9890:
          ppUVar14 = ppUVar14 + 1;
          if (ppUVar14 <= ppUVar17) goto code_r0x0001461f9899;
          goto LAB_1461f98e6;
        }
        for (; ppUVar12 = ppUVar16, ppUVar14 = ppUVar16, ppUVar16 < ppUVar17;
            ppUVar17 = ppUVar17 + -1) {
          while (ppUVar13 = ppUVar12, ppUVar14 = ppUVar14 + 1, ppUVar14 <= ppUVar17) {
            if (*ppUVar14 == (UMovieSceneSection *)0x0) {
              uVar2 = local_378 >> 8;
              local_378 = CONCAT31((int3)uVar2,1);
              uStack_374 = 0;
              TVar10.Value.Value = 0;
              TVar10._0_4_ = local_378;
            }
            else {
              TVar10 = ((*ppUVar14)->SectionRange).Value.LowerBound;
            }
            if (*ppUVar13 == (UMovieSceneSection *)0x0) {
              uVar2 = local_370 >> 8;
              local_370 = CONCAT31((int3)uVar2,1);
              uStack_36c = 0;
              TVar7.Value.Value = 0;
              TVar7._0_4_ = local_370;
            }
            else {
              TVar7 = ((*ppUVar13)->SectionRange).Value.LowerBound;
            }
            bVar3 = (*param_4)(TVar7,TVar10);
            ppUVar12 = ppUVar14;
            if (!bVar3) {
              ppUVar12 = ppUVar13;
            }
          }
          pUVar1 = *ppUVar13;
          *ppUVar13 = *ppUVar17;
          *ppUVar17 = pUVar1;
        }
        goto LAB_1461f99f1;
      }
LAB_1461f99e0:
      HeapSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::FindNearestSectionAtTime_::__l25::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
                (ppUVar14,iVar4,param_3,param_4);
LAB_1461f99f1:
      pppUVar15 = pppUVar15 + -3;
    } while (&local_348 <= pppUVar15);
  }
  return;
code_r0x0001461f9899:
  if (*ppUVar14 == (UMovieSceneSection *)0x0) {
    local_398 = CONCAT31(local_398._1_3_,1);
    uStack_394 = 0;
    TVar8.Value.Value = 0;
    TVar8._0_4_ = local_398;
  }
  else {
    TVar8 = ((*ppUVar14)->SectionRange).Value.LowerBound;
  }
  if (*ppUVar16 == (UMovieSceneSection *)0x0) {
    local_390 = CONCAT31(local_390._1_3_,1);
    uStack_38c = 0;
    TVar5.Value.Value = 0;
    TVar5._0_4_ = local_390;
  }
  else {
    TVar5 = ((*ppUVar16)->SectionRange).Value.LowerBound;
  }
  bVar3 = (*param_4)(TVar5,TVar8);
  if (!bVar3) goto LAB_1461f9890;
LAB_1461f98e6:
  do {
    ppUVar13 = ppUVar12;
    ppUVar12 = ppUVar13 + -1;
    if (ppUVar12 <= ppUVar16) break;
    if (*ppUVar16 == (UMovieSceneSection *)0x0) {
      local_388 = CONCAT31(local_388._1_3_,1);
      uStack_384 = 0;
      TVar9.Value.Value = 0;
      TVar9._0_4_ = local_388;
    }
    else {
      TVar9 = ((*ppUVar16)->SectionRange).Value.LowerBound;
    }
    if (*ppUVar12 == (UMovieSceneSection *)0x0) {
      local_380 = CONCAT31(local_380._1_3_,1);
      uStack_37c = 0;
      TVar6.Value.Value = 0;
      TVar6._0_4_ = local_380;
    }
    else {
      TVar6 = ((*ppUVar12)->SectionRange).Value.LowerBound;
    }
    bVar3 = (*param_4)(TVar6,TVar9);
  } while (!bVar3);
  if (ppUVar14 <= ppUVar12) {
    pUVar1 = *ppUVar14;
    *ppUVar14 = *ppUVar12;
    *ppUVar12 = pUVar1;
    goto LAB_1461f9890;
  }
  pUVar1 = *ppUVar16;
  iVar11 = iVar11 + -1;
  *ppUVar16 = *ppUVar12;
  *ppUVar12 = pUVar1;
  if ((longlong)((longlong)ppUVar12 + (-8 - (longlong)ppUVar16) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar17 - (longlong)ppUVar14 & 0xfffffffffffffff8U)) {
    if (ppUVar14 < ppUVar17) {
      *pppUVar15 = ppUVar14;
      pppUVar15[1] = ppUVar17;
      *(int *)(pppUVar15 + 2) = iVar11;
      pppUVar15 = pppUVar15 + 3;
    }
    if (ppUVar12 <= ppUVar16 + 1) goto LAB_1461f99f1;
    ppUVar17 = ppUVar13 + -2;
    ppUVar14 = ppUVar16;
  }
  else {
    if (ppUVar16 + 1 < ppUVar12) {
      *pppUVar15 = ppUVar16;
      pppUVar15[1] = ppUVar13 + -2;
      *(int *)(pppUVar15 + 2) = iVar11;
      pppUVar15 = pppUVar15 + 3;
    }
    if (ppUVar17 <= ppUVar14) goto LAB_1461f99f1;
  }
  iVar4 = (int)((longlong)ppUVar17 - (longlong)ppUVar14 >> 3) + 1;
  ppUVar16 = ppUVar14;
  if (iVar11 == 0) goto LAB_1461f99e0;
  goto LAB_1461f9861;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>_>_> @ 1461f9b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  int iVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **ppTVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar7 = &local_328;
    do {
      pTVar10 = ppTVar7[1];
      pTVar12 = *ppTVar7;
      pTVar1 = ppTVar7[2];
      iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar11 = pTVar12;
      if ((int)local_338 != 0) {
LAB_1461f9bb0:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
          pTVar8 = pTVar10 + 1;
          TVar3 = pTVar11[iVar5 / 2]._s_1;
          uVar4 = *(undefined8 *)((longlong)pTVar11[iVar5 / 2].ElementData.Pad + 8);
          pTVar11[iVar5 / 2]._s_1 = pTVar11->_s_1;
          *(undefined8 *)((longlong)pTVar11[iVar5 / 2].ElementData.Pad + 8) = uVar2;
          pTVar11->_s_1 = TVar3;
          *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar4;
          pTVar12 = pTVar11;
LAB_1461f9be0:
          pTVar6 = pTVar12;
          pTVar12 = pTVar6 + 1;
          if (pTVar12 <= pTVar10) goto code_r0x0001461f9be9;
          goto LAB_1461f9bf0;
        }
        for (; pTVar12 = pTVar11, pTVar1 = pTVar11, pTVar11 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar10) {
            if ((pTVar12->_s_1).PrevFreeIndex < (pTVar1->_s_1).PrevFreeIndex) {
              pTVar12 = pTVar1;
            }
          }
          TVar3 = pTVar12->_s_1;
          uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar10->ElementData).Pad + 8);
          pTVar12->_s_1 = pTVar10->_s_1;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
          pTVar10->_s_1 = TVar3;
          *(undefined8 *)((pTVar10->ElementData).Pad + 8) = uVar2;
        }
        goto LAB_1461f9caf;
      }
LAB_1461f9c9e:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_1461f9caf:
      ppTVar7 = ppTVar7 + -3;
    } while (&local_328 <= ppTVar7);
  }
  return;
code_r0x0001461f9be9:
  if ((pTVar12->_s_1).PrevFreeIndex <= (pTVar11->_s_1).PrevFreeIndex) goto LAB_1461f9be0;
LAB_1461f9bf0:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar11) break;
  } while ((pTVar11->_s_1).PrevFreeIndex <= (pTVar8->_s_1).PrevFreeIndex);
  uVar2 = *(undefined8 *)((longlong)pTVar9 + -8);
  if (pTVar12 <= pTVar8) {
    TVar3 = pTVar12->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar6 + 0x18);
    pTVar12->_s_1 = pTVar8->_s_1;
    *(undefined8 *)((longlong)pTVar6 + 0x18) = uVar2;
    pTVar8->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar9 + -8) = uVar4;
    goto LAB_1461f9be0;
  }
  TVar3 = pTVar11->_s_1;
  uVar4 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar11->_s_1 = pTVar8->_s_1;
  *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar2;
  pTVar8->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar9 + -8) = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar10) {
      *ppTVar7 = pTVar12;
      ppTVar7[1] = pTVar10;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar8 <= pTVar11 + 1) goto LAB_1461f9caf;
    pTVar10 = pTVar9 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar8) {
      *ppTVar7 = pTVar11;
      ppTVar7[1] = pTVar9 + -2;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar10 <= pTVar12) goto LAB_1461f9caf;
  }
  iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if ((int)local_338 == 0) goto LAB_1461f9c9e;
  goto LAB_1461f9bb0;
}

// IntroSortInternal<TTuple<UE::MovieScene::FComplexInclusivityFilter,int>,int,`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_4>,TLess<void>_> @ 1461f9d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<UE::MovieScene::FComplexInclusivityFilter,int>,int,_UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer_::__l2::<lambda_4>,TLess<void>_>
          (TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *param_1,int param_2,
          <lambda_4> param_3,TLess<void> param_4)

{
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar12;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> **ppTVar13;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar14;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar15;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar16;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar17;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *pTVar18;
  float fVar19;
  undefined1 auStack_368 [48];
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *local_338;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *local_328;
  TTuple<UE::MovieScene::FComplexInclusivityFilter,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar19;
    memset(local_310,0,0x2e8);
    ppTVar13 = &local_328;
    do {
      pTVar16 = ppTVar13[1];
      pTVar18 = *ppTVar13;
      pTVar1 = ppTVar13[2];
      iVar11 = (int)((longlong)pTVar16 - (longlong)pTVar18 >> 6) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar17 = pTVar18;
      if ((int)local_338 != 0) {
LAB_1461f9df0:
        if (8 < iVar11) {
          uVar2 = *(undefined8 *)&pTVar17->field_0x8;
          pTVar14 = pTVar16 + 1;
          pTVar18 = pTVar17 + iVar11 / 2;
          uVar3 = *(undefined8 *)pTVar18;
          uVar4 = *(undefined8 *)&pTVar18->field_0x8;
          uVar5 = *(undefined8 *)&pTVar18->field_0x10;
          uVar6 = *(undefined8 *)&pTVar18->field_0x18;
          uVar7 = *(undefined8 *)&pTVar18->field_0x20;
          uVar8 = *(undefined8 *)&pTVar18->field_0x28;
          uVar9 = *(undefined8 *)&pTVar18->field_0x30;
          uVar10 = *(undefined8 *)&pTVar18->field_0x38;
          *(undefined8 *)pTVar18 = *(undefined8 *)pTVar17;
          *(undefined8 *)&pTVar18->field_0x8 = uVar2;
          uVar2 = *(undefined8 *)&pTVar17->field_0x18;
          *(undefined8 *)&pTVar18->field_0x10 = *(undefined8 *)&pTVar17->field_0x10;
          *(undefined8 *)&pTVar18->field_0x18 = uVar2;
          uVar2 = *(undefined8 *)&pTVar17->field_0x28;
          *(undefined8 *)&pTVar18->field_0x20 = *(undefined8 *)&pTVar17->field_0x20;
          *(undefined8 *)&pTVar18->field_0x28 = uVar2;
          uVar2 = *(undefined8 *)&pTVar17->field_0x38;
          *(undefined8 *)&pTVar18->field_0x30 = *(undefined8 *)&pTVar17->field_0x30;
          *(undefined8 *)&pTVar18->field_0x38 = uVar2;
          *(undefined8 *)pTVar17 = uVar3;
          *(undefined8 *)&pTVar17->field_0x8 = uVar4;
          *(undefined8 *)&pTVar17->field_0x10 = uVar5;
          *(undefined8 *)&pTVar17->field_0x18 = uVar6;
          *(undefined8 *)&pTVar17->field_0x20 = uVar7;
          *(undefined8 *)&pTVar17->field_0x28 = uVar8;
          *(undefined8 *)&pTVar17->field_0x30 = uVar9;
          *(undefined8 *)&pTVar17->field_0x38 = uVar10;
          pTVar18 = pTVar17;
LAB_1461f9e53:
          pTVar12 = pTVar18;
          pTVar18 = pTVar12 + 1;
          if (pTVar18 <= pTVar16) goto code_r0x0001461f9e5c;
          goto LAB_1461f9e65;
        }
        for (; pTVar18 = pTVar17, pTVar1 = pTVar17, pTVar17 < pTVar16; pTVar16 = pTVar16 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar16) {
            if (*(int *)&pTVar18->field_0x3c < *(int *)&pTVar1->field_0x3c) {
              pTVar18 = pTVar1;
            }
          }
          uVar2 = *(undefined8 *)pTVar18;
          uVar3 = *(undefined8 *)&pTVar18->field_0x8;
          uVar4 = *(undefined8 *)&pTVar18->field_0x10;
          uVar5 = *(undefined8 *)&pTVar18->field_0x18;
          uVar6 = *(undefined8 *)&pTVar18->field_0x20;
          uVar7 = *(undefined8 *)&pTVar18->field_0x28;
          uVar8 = *(undefined8 *)&pTVar16->field_0x8;
          uVar9 = *(undefined8 *)&pTVar18->field_0x30;
          uVar10 = *(undefined8 *)&pTVar18->field_0x38;
          *(undefined8 *)pTVar18 = *(undefined8 *)pTVar16;
          *(undefined8 *)&pTVar18->field_0x8 = uVar8;
          uVar8 = *(undefined8 *)&pTVar16->field_0x18;
          *(undefined8 *)&pTVar18->field_0x10 = *(undefined8 *)&pTVar16->field_0x10;
          *(undefined8 *)&pTVar18->field_0x18 = uVar8;
          uVar8 = *(undefined8 *)&pTVar16->field_0x28;
          *(undefined8 *)&pTVar18->field_0x20 = *(undefined8 *)&pTVar16->field_0x20;
          *(undefined8 *)&pTVar18->field_0x28 = uVar8;
          uVar8 = *(undefined8 *)&pTVar16->field_0x38;
          *(undefined8 *)&pTVar18->field_0x30 = *(undefined8 *)&pTVar16->field_0x30;
          *(undefined8 *)&pTVar18->field_0x38 = uVar8;
          *(undefined8 *)pTVar16 = uVar2;
          *(undefined8 *)&pTVar16->field_0x8 = uVar3;
          *(undefined8 *)&pTVar16->field_0x10 = uVar4;
          *(undefined8 *)&pTVar16->field_0x18 = uVar5;
          *(undefined8 *)&pTVar16->field_0x20 = uVar6;
          *(undefined8 *)&pTVar16->field_0x28 = uVar7;
          *(undefined8 *)&pTVar16->field_0x30 = uVar9;
          *(undefined8 *)&pTVar16->field_0x38 = uVar10;
        }
        goto LAB_1461f9f99;
      }
LAB_1461f9f87:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<UE::MovieScene::FComplexInclusivityFilter,int>,int,_UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer_::__l2::<lambda_4>,TLess<void>_>
                (pTVar18,iVar11,param_3,param_4);
LAB_1461f9f99:
      ppTVar13 = ppTVar13 + -3;
    } while (&local_328 <= ppTVar13);
  }
  return;
code_r0x0001461f9e5c:
  if (*(int *)&pTVar12[1].field_0x3c <= *(int *)&pTVar17->field_0x3c) goto LAB_1461f9e53;
LAB_1461f9e65:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar17) break;
  } while (*(int *)&pTVar17->field_0x3c <= *(int *)&pTVar15[-1].field_0x3c);
  uVar2 = *(undefined8 *)&pTVar15[-1].field_0x8;
  if (pTVar18 <= pTVar14) {
    uVar3 = *(undefined8 *)pTVar18;
    uVar4 = *(undefined8 *)&pTVar12[1].field_0x8;
    uVar5 = *(undefined8 *)&pTVar12[1].field_0x10;
    uVar6 = *(undefined8 *)&pTVar12[1].field_0x18;
    uVar7 = *(undefined8 *)&pTVar12[1].field_0x20;
    uVar8 = *(undefined8 *)&pTVar12[1].field_0x28;
    uVar9 = *(undefined8 *)&pTVar12[1].field_0x30;
    uVar10 = *(undefined8 *)&pTVar12[1].field_0x38;
    *(undefined8 *)pTVar18 = *(undefined8 *)pTVar14;
    *(undefined8 *)&pTVar12[1].field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pTVar15[-1].field_0x18;
    *(undefined8 *)&pTVar12[1].field_0x10 = *(undefined8 *)&pTVar15[-1].field_0x10;
    *(undefined8 *)&pTVar12[1].field_0x18 = uVar2;
    uVar2 = *(undefined8 *)&pTVar15[-1].field_0x28;
    *(undefined8 *)&pTVar12[1].field_0x20 = *(undefined8 *)&pTVar15[-1].field_0x20;
    *(undefined8 *)&pTVar12[1].field_0x28 = uVar2;
    uVar2 = *(undefined8 *)&pTVar15[-1].field_0x38;
    *(undefined8 *)&pTVar12[1].field_0x30 = *(undefined8 *)&pTVar15[-1].field_0x30;
    *(undefined8 *)&pTVar12[1].field_0x38 = uVar2;
    *(undefined8 *)pTVar14 = uVar3;
    *(undefined8 *)&pTVar15[-1].field_0x8 = uVar4;
    *(undefined8 *)&pTVar15[-1].field_0x10 = uVar5;
    *(undefined8 *)&pTVar15[-1].field_0x18 = uVar6;
    *(undefined8 *)&pTVar15[-1].field_0x20 = uVar7;
    *(undefined8 *)&pTVar15[-1].field_0x28 = uVar8;
    *(undefined8 *)&pTVar15[-1].field_0x30 = uVar9;
    *(undefined8 *)&pTVar15[-1].field_0x38 = uVar10;
    goto LAB_1461f9e53;
  }
  uVar3 = *(undefined8 *)pTVar17;
  uVar4 = *(undefined8 *)&pTVar17->field_0x8;
  uVar5 = *(undefined8 *)&pTVar17->field_0x10;
  uVar6 = *(undefined8 *)&pTVar17->field_0x18;
  uVar7 = *(undefined8 *)&pTVar17->field_0x20;
  uVar8 = *(undefined8 *)&pTVar17->field_0x28;
  local_338._0_4_ = (int)local_338 + -1;
  uVar9 = *(undefined8 *)&pTVar17->field_0x30;
  uVar10 = *(undefined8 *)&pTVar17->field_0x38;
  *(undefined8 *)pTVar17 = *(undefined8 *)pTVar14;
  *(undefined8 *)&pTVar17->field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&pTVar15[-1].field_0x18;
  *(undefined8 *)&pTVar17->field_0x10 = *(undefined8 *)&pTVar15[-1].field_0x10;
  *(undefined8 *)&pTVar17->field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&pTVar15[-1].field_0x28;
  *(undefined8 *)&pTVar17->field_0x20 = *(undefined8 *)&pTVar15[-1].field_0x20;
  *(undefined8 *)&pTVar17->field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&pTVar15[-1].field_0x38;
  *(undefined8 *)&pTVar17->field_0x30 = *(undefined8 *)&pTVar15[-1].field_0x30;
  *(undefined8 *)&pTVar17->field_0x38 = uVar2;
  *(undefined8 *)pTVar14 = uVar3;
  *(undefined8 *)&pTVar15[-1].field_0x8 = uVar4;
  *(undefined8 *)&pTVar15[-1].field_0x10 = uVar5;
  *(undefined8 *)&pTVar15[-1].field_0x18 = uVar6;
  *(undefined8 *)&pTVar15[-1].field_0x20 = uVar7;
  *(undefined8 *)&pTVar15[-1].field_0x28 = uVar8;
  *(undefined8 *)&pTVar15[-1].field_0x30 = uVar9;
  *(undefined8 *)&pTVar15[-1].field_0x38 = uVar10;
  if ((longlong)((longlong)pTVar14 + (-0x40 - (longlong)pTVar17) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pTVar16 - (longlong)pTVar18 & 0xffffffffffffffc0U)) {
    if (pTVar18 < pTVar16) {
      *ppTVar13 = pTVar18;
      ppTVar13[1] = pTVar16;
      *(int *)(ppTVar13 + 2) = (int)local_338;
      ppTVar13 = ppTVar13 + 3;
    }
    if (pTVar14 <= pTVar17 + 1) goto LAB_1461f9f99;
    pTVar16 = pTVar15 + -2;
    pTVar18 = pTVar17;
  }
  else {
    if (pTVar17 + 1 < pTVar14) {
      *ppTVar13 = pTVar17;
      ppTVar13[1] = pTVar15 + -2;
      *(int *)(ppTVar13 + 2) = (int)local_338;
      ppTVar13 = ppTVar13 + 3;
    }
    if (pTVar16 <= pTVar18) goto LAB_1461f9f99;
  }
  iVar11 = (int)((longlong)pTVar16 - (longlong)pTVar18 >> 6) + 1;
  pTVar17 = pTVar18;
  if ((int)local_338 == 0) goto LAB_1461f9f87;
  goto LAB_1461f9df0;
}

// IntroSortInternal<TTuple<UE::MovieScene::FComponentTypeID,int>,int,`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l2::<lambda_3>,TLess<void>_> @ 1461fa060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<UE::MovieScene::FComponentTypeID,int>,int,_UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer_::__l2::<lambda_3>,TLess<void>_>
          (TTuple<UE::MovieScene::FComponentTypeID,int> *param_1,int param_2,<lambda_3> param_3,
          TLess<void> param_4)

{
  TTuple<UE::MovieScene::FComponentTypeID,int> *pTVar1;
  TTuple<UE::MovieScene::FComponentTypeID,int> TVar2;
  TTuple<UE::MovieScene::FComponentTypeID,int> *pTVar3;
  int iVar4;
  TTuple<UE::MovieScene::FComponentTypeID,int> *pTVar5;
  TTuple<UE::MovieScene::FComponentTypeID,int> **ppTVar6;
  TTuple<UE::MovieScene::FComponentTypeID,int> *pTVar7;
  TTuple<UE::MovieScene::FComponentTypeID,int> *pTVar8;
  TTuple<UE::MovieScene::FComponentTypeID,int> *pTVar9;
  TTuple<UE::MovieScene::FComponentTypeID,int> *pTVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  TTuple<UE::MovieScene::FComponentTypeID,int> *local_338;
  TTuple<UE::MovieScene::FComponentTypeID,int> *local_328;
  TTuple<UE::MovieScene::FComponentTypeID,int> *local_320;
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
    ppTVar6 = &local_328;
    do {
      pTVar8 = ppTVar6[1];
      pTVar10 = *ppTVar6;
      pTVar1 = ppTVar6[2];
      iVar4 = (int)((longlong)pTVar8 - (longlong)pTVar10 >> 3) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar9 = pTVar10;
      if ((int)local_338 != 0) {
LAB_1461fa110:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          pTVar7 = pTVar8 + 1;
          TVar2 = pTVar9[iVar4 >> 1];
          pTVar9[iVar4 >> 1] = *pTVar9;
          *pTVar9 = TVar2;
          pTVar5 = pTVar9;
LAB_1461fa140:
          pTVar10 = pTVar5 + 1;
          if (pTVar10 <= pTVar8) goto code_r0x0001461fa149;
          goto LAB_1461fa152;
        }
        for (; pTVar10 = pTVar9, pTVar1 = pTVar9, pTVar9 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(int *)&pTVar10->field_0x4 < *(int *)&pTVar1->field_0x4) {
              pTVar10 = pTVar1;
            }
          }
          TVar2 = *pTVar10;
          *pTVar10 = *pTVar8;
          *pTVar8 = TVar2;
        }
        goto LAB_1461fa20b;
      }
LAB_1461fa1f9:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<UE::MovieScene::FComponentTypeID,int>,int,_UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer_::__l2::<lambda_3>,TLess<void>_>
                (pTVar10,iVar4,param_3,param_4);
LAB_1461fa20b:
      ppTVar6 = ppTVar6 + -3;
    } while (&local_328 <= ppTVar6);
  }
  return;
code_r0x0001461fa149:
  pTVar3 = pTVar5 + 1;
  pTVar5 = pTVar10;
  if (*(int *)&pTVar3->field_0x4 <= *(int *)&pTVar9->field_0x4) goto LAB_1461fa140;
LAB_1461fa152:
  do {
    pTVar5 = pTVar7;
    pTVar7 = pTVar5 + -1;
    if (pTVar7 <= pTVar9) break;
  } while (*(int *)&pTVar9->field_0x4 <= *(int *)&pTVar5[-1].field_0x4);
  if (pTVar10 <= pTVar7) {
    TVar2 = *pTVar10;
    *pTVar10 = *pTVar7;
    *pTVar7 = TVar2;
    pTVar5 = pTVar10;
    goto LAB_1461fa140;
  }
  TVar2 = *pTVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pTVar9 = *pTVar7;
  *pTVar7 = TVar2;
  if ((longlong)((longlong)pTVar7 + (-8 - (longlong)pTVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar8 - (longlong)pTVar10 & 0xfffffffffffffff8U)) {
    if (pTVar10 < pTVar8) {
      *ppTVar6 = pTVar10;
      ppTVar6[1] = pTVar8;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar7 <= pTVar9 + 1) goto LAB_1461fa20b;
    pTVar8 = pTVar5 + -2;
    pTVar10 = pTVar9;
  }
  else {
    if (pTVar9 + 1 < pTVar7) {
      *ppTVar6 = pTVar9;
      ppTVar6[1] = pTVar5 + -2;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar8 <= pTVar10) goto LAB_1461fa20b;
  }
  iVar4 = (int)((longlong)pTVar8 - (longlong)pTVar10 >> 3) + 1;
  pTVar9 = pTVar10;
  if ((int)local_338 == 0) goto LAB_1461fa1f9;
  goto LAB_1461fa110;
}

// IntroSortInternal<FMovieSceneBindingReference,int,UE::Core::Private::TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>,TLess<void>_> @ 1461fa2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneBindingReference,int,UE::Core::Private::TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>,TLess<void>_>
          (FMovieSceneBindingReference *param_1,int param_2,
          TProjectionMemberData<FGuid_FMovieSceneBindingReference::*> param_3,TLess<void> param_4)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UMovieSceneCustomBinding>_u_0 TVar4;
  TObjectPtr<UMovieSceneCustomBinding>_u_0 TVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FMovieSceneBindingReference *pFVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined7 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ELocatorResolveFlags EVar21;
  undefined7 uVar22;
  longlong lVar23;
  longlong lVar24;
  FMovieSceneBindingReference *pFVar25;
  FMovieSceneBindingReference *pFVar26;
  FMovieSceneBindingReference *pFVar27;
  FMovieSceneBindingReference *pFVar28;
  FMovieSceneBindingReference *pFVar29;
  FMovieSceneBindingReference **ppFVar30;
  int iVar31;
  bool bVar32;
  float fVar33;
  undefined1 auStack_388 [48];
  FMovieSceneBindingReference *local_358;
  FMovieSceneBindingReference *local_348;
  FMovieSceneBindingReference *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (param_2 < 2) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  lVar24 = (longlong)(int)param_3.DataMemberPtr;
  local_340 = param_1 + (longlong)param_2 + -1;
  local_348 = param_1;
  fVar33 = logf((float)param_2 * (float)param_2);
  local_338 = (undefined4)(longlong)fVar33;
  memset(local_330,0,0x2e8);
  ppFVar30 = &local_348;
  do {
    pFVar25 = ppFVar30[1];
    local_358 = ppFVar30[2];
    iVar11 = (int)(((longlong)pFVar25 - (longlong)*ppFVar30) / 0x30);
    pFVar10 = *ppFVar30;
    iVar31 = (int)local_358;
joined_r0x0001461fa377:
    iVar11 = iVar11 + 1;
    if (iVar31 == 0) {
      HeapSortInternal<FMovieSceneBindingReference,int,UE::Core::Private::TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>,TLess<void>_>
                (pFVar10,iVar11,param_3,param_4);
    }
    else {
      if (8 < iVar11) {
        uVar1 = (pFVar10->ID).B;
        uVar2 = (pFVar10->ID).C;
        uVar12 = (pFVar10->ID).D;
        pFVar26 = pFVar25 + 1;
        pFVar28 = pFVar10 + iVar11 / 2;
        uVar15 = (pFVar28->ID).A;
        uVar16 = (pFVar28->ID).B;
        uVar17 = (pFVar28->ID).C;
        uVar18 = (pFVar28->ID).D;
        pFVar3 = (pFVar28->Locator).Fragments.AllocatorInstance.Data;
        iVar19 = (pFVar28->Locator).Fragments.ArrayNum;
        iVar20 = (pFVar28->Locator).Fragments.ArrayMax;
        EVar21 = pFVar28->ResolveFlags;
        uVar22 = *(undefined7 *)&pFVar28->field_0x21;
        TVar4 = (pFVar28->CustomBinding).field0_0x0;
        (pFVar28->ID).A = (pFVar10->ID).A;
        (pFVar28->ID).B = uVar1;
        (pFVar28->ID).C = uVar2;
        (pFVar28->ID).D = uVar12;
        iVar11 = (pFVar10->Locator).Fragments.ArrayNum;
        iVar13 = (pFVar10->Locator).Fragments.ArrayMax;
        (pFVar28->Locator).Fragments.AllocatorInstance.Data =
             (pFVar10->Locator).Fragments.AllocatorInstance.Data;
        (pFVar28->Locator).Fragments.ArrayNum = iVar11;
        (pFVar28->Locator).Fragments.ArrayMax = iVar13;
        uVar14 = *(undefined7 *)&pFVar10->field_0x21;
        TVar5 = (pFVar10->CustomBinding).field0_0x0;
        pFVar28->ResolveFlags = pFVar10->ResolveFlags;
        *(undefined7 *)&pFVar28->field_0x21 = uVar14;
        (pFVar28->CustomBinding).field0_0x0 = TVar5;
        (pFVar10->ID).A = uVar15;
        (pFVar10->ID).B = uVar16;
        (pFVar10->ID).C = uVar17;
        (pFVar10->ID).D = uVar18;
        (pFVar10->Locator).Fragments.AllocatorInstance.Data = pFVar3;
        (pFVar10->Locator).Fragments.ArrayNum = iVar19;
        (pFVar10->Locator).Fragments.ArrayMax = iVar20;
        pFVar10->ResolveFlags = EVar21;
        *(undefined7 *)&pFVar10->field_0x21 = uVar22;
        (pFVar10->CustomBinding).field0_0x0 = TVar4;
        pFVar28 = pFVar10;
LAB_1461fa3d7:
        pFVar29 = pFVar28;
        pFVar28 = pFVar29 + 1;
        if ((pFVar28 <= pFVar25) &&
           (uVar1 = *(uint *)((longlong)&(pFVar28->ID).A + lVar24),
           uVar2 = *(uint *)((longlong)&(pFVar10->ID).A + lVar24), uVar1 <= uVar2)) break;
        goto LAB_1461fa414;
      }
      for (; pFVar28 = pFVar10, pFVar26 = pFVar10, pFVar10 < pFVar25; pFVar25 = pFVar25 + -1) {
        while (pFVar29 = pFVar28, pFVar26 = pFVar26 + 1, pFVar26 <= pFVar25) {
          uVar1 = *(uint *)((longlong)&(pFVar26->ID).A + lVar24);
          uVar2 = *(uint *)((longlong)&(pFVar29->ID).A + lVar24);
          if (uVar2 < uVar1) {
            bVar32 = true;
          }
          else if (uVar1 < uVar2) {
            bVar32 = false;
          }
          else {
            uVar1 = *(uint *)((longlong)&(pFVar26->ID).B + lVar24);
            uVar2 = *(uint *)((longlong)&(pFVar29->ID).B + lVar24);
            if (uVar2 < uVar1) {
              bVar32 = true;
            }
            else if (uVar1 < uVar2) {
              bVar32 = false;
            }
            else {
              uVar1 = *(uint *)((longlong)&(pFVar26->ID).C + lVar24);
              uVar2 = *(uint *)((longlong)&(pFVar29->ID).C + lVar24);
              if (uVar2 < uVar1) {
                bVar32 = true;
              }
              else if (uVar1 < uVar2) {
                bVar32 = false;
              }
              else {
                bVar32 = *(uint *)((longlong)&(pFVar29->ID).D + lVar24) <
                         *(uint *)((longlong)&(pFVar26->ID).D + lVar24);
              }
            }
          }
          pFVar28 = pFVar26;
          if (!bVar32) {
            pFVar28 = pFVar29;
          }
        }
        uVar15 = (pFVar29->ID).A;
        uVar16 = (pFVar29->ID).B;
        uVar17 = (pFVar29->ID).C;
        uVar18 = (pFVar29->ID).D;
        pFVar3 = (pFVar29->Locator).Fragments.AllocatorInstance.Data;
        iVar13 = (pFVar29->Locator).Fragments.ArrayNum;
        iVar19 = (pFVar29->Locator).Fragments.ArrayMax;
        EVar21 = pFVar29->ResolveFlags;
        uVar22 = *(undefined7 *)&pFVar29->field_0x21;
        TVar4 = (pFVar29->CustomBinding).field0_0x0;
        uVar1 = (pFVar25->ID).B;
        uVar2 = (pFVar25->ID).C;
        uVar12 = (pFVar25->ID).D;
        (pFVar29->ID).A = (pFVar25->ID).A;
        (pFVar29->ID).B = uVar1;
        (pFVar29->ID).C = uVar2;
        (pFVar29->ID).D = uVar12;
        iVar11 = (pFVar25->Locator).Fragments.ArrayNum;
        iVar31 = (pFVar25->Locator).Fragments.ArrayMax;
        (pFVar29->Locator).Fragments.AllocatorInstance.Data =
             (pFVar25->Locator).Fragments.AllocatorInstance.Data;
        (pFVar29->Locator).Fragments.ArrayNum = iVar11;
        (pFVar29->Locator).Fragments.ArrayMax = iVar31;
        uVar14 = *(undefined7 *)&pFVar25->field_0x21;
        TVar5 = (pFVar25->CustomBinding).field0_0x0;
        pFVar29->ResolveFlags = pFVar25->ResolveFlags;
        *(undefined7 *)&pFVar29->field_0x21 = uVar14;
        (pFVar29->CustomBinding).field0_0x0 = TVar5;
        (pFVar25->ID).A = uVar15;
        (pFVar25->ID).B = uVar16;
        (pFVar25->ID).C = uVar17;
        (pFVar25->ID).D = uVar18;
        (pFVar25->Locator).Fragments.AllocatorInstance.Data = pFVar3;
        (pFVar25->Locator).Fragments.ArrayNum = iVar13;
        (pFVar25->Locator).Fragments.ArrayMax = iVar19;
        pFVar25->ResolveFlags = EVar21;
        *(undefined7 *)&pFVar25->field_0x21 = uVar22;
        (pFVar25->CustomBinding).field0_0x0 = TVar4;
      }
    }
LAB_1461fa585:
    ppFVar30 = ppFVar30 + -3;
    if (ppFVar30 < &local_348) {
      return;
    }
  } while( true );
  if ((uVar2 != uVar1) ||
     ((uVar1 = *(uint *)((longlong)&(pFVar28->ID).B + lVar24),
      uVar2 = *(uint *)((longlong)&(pFVar10->ID).B + lVar24), uVar1 <= uVar2 &&
      ((uVar2 != uVar1 ||
       ((uVar1 = *(uint *)((longlong)&(pFVar28->ID).C + lVar24),
        uVar2 = *(uint *)((longlong)&(pFVar10->ID).C + lVar24), uVar1 <= uVar2 &&
        ((uVar2 != uVar1 ||
         (*(uint *)((longlong)&(pFVar28->ID).D + lVar24) <=
          *(uint *)((longlong)&(pFVar10->ID).D + lVar24))))))))))) goto LAB_1461fa3d7;
LAB_1461fa414:
  do {
    pFVar27 = pFVar26;
    pFVar26 = pFVar27 + -1;
    if ((pFVar26 <= pFVar10) ||
       (uVar1 = *(uint *)((longlong)&(pFVar10->ID).A + lVar24),
       uVar2 = *(uint *)((longlong)&(pFVar26->ID).A + lVar24), uVar2 < uVar1)) break;
  } while ((uVar2 != uVar1) ||
          ((uVar1 = *(uint *)((longlong)&(pFVar10->ID).B + lVar24),
           uVar2 = *(uint *)((longlong)&(pFVar26->ID).B + lVar24), uVar1 <= uVar2 &&
           ((uVar2 != uVar1 ||
            ((uVar1 = *(uint *)((longlong)&(pFVar10->ID).C + lVar24),
             uVar2 = *(uint *)((longlong)&(pFVar26->ID).C + lVar24), uVar1 <= uVar2 &&
             ((uVar2 != uVar1 ||
              (*(uint *)((longlong)&(pFVar10->ID).D + lVar24) <=
               *(uint *)((longlong)&(pFVar26->ID).D + lVar24)))))))))));
  uVar6 = (pFVar26->ID).A;
  uVar7 = (pFVar26->ID).B;
  uVar8 = pFVar27[-1].ID.C;
  uVar9 = pFVar27[-1].ID.D;
  if (pFVar28 <= pFVar26) {
    uVar1 = (pFVar28->ID).A;
    uVar2 = (pFVar28->ID).B;
    uVar12 = pFVar29[1].ID.C;
    uVar15 = pFVar29[1].ID.D;
    pFVar3 = pFVar29[1].Locator.Fragments.AllocatorInstance.Data;
    iVar19 = pFVar29[1].Locator.Fragments.ArrayNum;
    iVar20 = pFVar29[1].Locator.Fragments.ArrayMax;
    EVar21 = pFVar29[1].ResolveFlags;
    uVar22 = *(undefined7 *)&pFVar29[1].field_0x21;
    TVar5 = pFVar29[1].CustomBinding.field0_0x0;
    (pFVar28->ID).A = uVar6;
    (pFVar28->ID).B = uVar7;
    pFVar29[1].ID.C = uVar8;
    pFVar29[1].ID.D = uVar9;
    iVar11 = pFVar27[-1].Locator.Fragments.ArrayNum;
    iVar13 = pFVar27[-1].Locator.Fragments.ArrayMax;
    pFVar29[1].Locator.Fragments.AllocatorInstance.Data =
         pFVar27[-1].Locator.Fragments.AllocatorInstance.Data;
    pFVar29[1].Locator.Fragments.ArrayNum = iVar11;
    pFVar29[1].Locator.Fragments.ArrayMax = iVar13;
    uVar14 = *(undefined7 *)&pFVar27[-1].field_0x21;
    TVar4 = pFVar27[-1].CustomBinding.field0_0x0;
    pFVar29[1].ResolveFlags = pFVar27[-1].ResolveFlags;
    *(undefined7 *)&pFVar29[1].field_0x21 = uVar14;
    pFVar29[1].CustomBinding.field0_0x0 = TVar4;
    (pFVar26->ID).A = uVar1;
    (pFVar26->ID).B = uVar2;
    pFVar27[-1].ID.C = uVar12;
    pFVar27[-1].ID.D = uVar15;
    pFVar27[-1].Locator.Fragments.AllocatorInstance.Data = pFVar3;
    pFVar27[-1].Locator.Fragments.ArrayNum = iVar19;
    pFVar27[-1].Locator.Fragments.ArrayMax = iVar20;
    pFVar27[-1].ResolveFlags = EVar21;
    *(undefined7 *)&pFVar27[-1].field_0x21 = uVar22;
    pFVar27[-1].CustomBinding.field0_0x0 = TVar5;
    goto LAB_1461fa3d7;
  }
  uVar1 = (pFVar10->ID).A;
  uVar2 = (pFVar10->ID).B;
  uVar12 = (pFVar10->ID).C;
  uVar15 = (pFVar10->ID).D;
  pFVar3 = (pFVar10->Locator).Fragments.AllocatorInstance.Data;
  iVar19 = (pFVar10->Locator).Fragments.ArrayNum;
  iVar20 = (pFVar10->Locator).Fragments.ArrayMax;
  iVar31 = iVar31 + -1;
  EVar21 = pFVar10->ResolveFlags;
  uVar22 = *(undefined7 *)&pFVar10->field_0x21;
  TVar4 = (pFVar10->CustomBinding).field0_0x0;
  lVar23 = (longlong)pFVar26 + (-0x30 - (longlong)pFVar10);
  lVar23 = lVar23 / 6 + (lVar23 >> 0x3f);
  (pFVar10->ID).A = uVar6;
  (pFVar10->ID).B = uVar7;
  (pFVar10->ID).C = uVar8;
  (pFVar10->ID).D = uVar9;
  iVar11 = pFVar27[-1].Locator.Fragments.ArrayNum;
  iVar13 = pFVar27[-1].Locator.Fragments.ArrayMax;
  (pFVar10->Locator).Fragments.AllocatorInstance.Data =
       pFVar27[-1].Locator.Fragments.AllocatorInstance.Data;
  (pFVar10->Locator).Fragments.ArrayNum = iVar11;
  (pFVar10->Locator).Fragments.ArrayMax = iVar13;
  uVar14 = *(undefined7 *)&pFVar27[-1].field_0x21;
  TVar5 = pFVar27[-1].CustomBinding.field0_0x0;
  pFVar10->ResolveFlags = pFVar27[-1].ResolveFlags;
  *(undefined7 *)&pFVar10->field_0x21 = uVar14;
  (pFVar10->CustomBinding).field0_0x0 = TVar5;
  (pFVar26->ID).A = uVar1;
  (pFVar26->ID).B = uVar2;
  pFVar27[-1].ID.C = uVar12;
  pFVar27[-1].ID.D = uVar15;
  pFVar27[-1].Locator.Fragments.AllocatorInstance.Data = pFVar3;
  pFVar27[-1].Locator.Fragments.ArrayNum = iVar19;
  pFVar27[-1].Locator.Fragments.ArrayMax = iVar20;
  pFVar27[-1].ResolveFlags = EVar21;
  *(undefined7 *)&pFVar27[-1].field_0x21 = uVar22;
  pFVar27[-1].CustomBinding.field0_0x0 = TVar4;
  if ((lVar23 >> 3) - (lVar23 >> 0x3f) < ((longlong)pFVar25 - (longlong)pFVar28) / 0x30) {
    if (pFVar28 < pFVar25) {
      *ppFVar30 = pFVar28;
      ppFVar30[1] = pFVar25;
      *(int *)(ppFVar30 + 2) = iVar31;
      ppFVar30 = ppFVar30 + 3;
    }
    if (pFVar26 <= pFVar10 + 1) goto LAB_1461fa585;
    pFVar25 = pFVar27 + -2;
    pFVar28 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar26) {
      *ppFVar30 = pFVar10;
      ppFVar30[1] = pFVar27 + -2;
      *(int *)(ppFVar30 + 2) = iVar31;
      ppFVar30 = ppFVar30 + 3;
    }
    if (pFVar25 <= pFVar28) goto LAB_1461fa585;
  }
  iVar11 = (int)(((longlong)pFVar25 - (longlong)pFVar28) / 0x30);
  pFVar10 = pFVar28;
  goto joined_r0x0001461fa377;
}

// IsObjectPtrEqual<UMovieSceneTrack,UMovieSceneTrack_const_*,0> @ 1461fa6a0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieSceneTrack,UMovieSceneTrack_const_*,0>
          (TObjectPtr<UMovieSceneTrack> *param_1,UMovieSceneTrack **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieSceneTrack *)0x0) {
    return *param_2 == (UMovieSceneTrack *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_> @ 1461fa6c0

int __cdecl
AlgoImpl::
LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
          (FMovieSceneBindingReference *param_1,int param_2,FGuid *param_3,pdm_2fa4d329 param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      puVar3 = (uint *)((longlong)&param_1[iVar1].ID.A + (longlong)(int)param_4);
      if (*puVar3 < param_3->A) {
        bVar5 = true;
      }
      else if (param_3->A < *puVar3) {
        bVar5 = false;
      }
      else if (puVar3[1] < param_3->B) {
        bVar5 = true;
      }
      else if (param_3->B < puVar3[1]) {
        bVar5 = false;
      }
      else if (puVar3[2] < param_3->C) {
        bVar5 = true;
      }
      else if (param_3->C < puVar3[2]) {
        bVar5 = false;
      }
      else {
        bVar5 = puVar3[3] < param_3->D;
      }
      if (bVar5) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<UMovieSceneSequencePlayer::FServerTimeSample_const_,int,double,double_UMovieSceneSequencePlayer::FServerTimeSample::*,TLess<void>_> @ 1461fa780

int __cdecl
AlgoImpl::
LowerBoundInternal<UMovieSceneSequencePlayer::FServerTimeSample_const_,int,double,double_UMovieSceneSequencePlayer::FServerTimeSample::*,TLess<void>_>
          (FServerTimeSample *param_1,int param_2,double *param_3,pdm_041ad876 param_4,
          TLess<void> param_5)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      pdVar2 = (double *)((longlong)&param_1[iVar1].ServerTime + (longlong)(int)param_4);
      if (*pdVar2 <= *param_3 && *param_3 != *pdVar2) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar4;
}

// MakeShared<FMovieSceneTimeController_Tick,1> @ 1461fa7d0

TSharedRef<FMovieSceneTimeController_Tick,1> * __cdecl
MakeShared<FMovieSceneTimeController_Tick,1>
          (TSharedRef<FMovieSceneTimeController_Tick,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FMovieSceneTimeController_Tick,1> *pTVar4;
  
  pTVar3 = operator_new(0x40);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FMovieSceneTimeController_Tick *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_Tick___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FMovieSceneTimeController_Tick__6B_;
    *(undefined1 *)&pTVar3[2].SharedReferenceCount = 0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0xea60;
    *(undefined4 *)&pTVar3[3]._padding_ = 1;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FMovieSceneTimeController_Tick *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FMovieSceneTimeController_Tick *)(pTVar3 + 1) == (FMovieSceneTimeController_Tick *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FMovieSceneTimeController_Tick,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UMovieSceneCompiledData> @ 1461fa930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCompiledData * __cdecl
NewObject<UMovieSceneCompiledData>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneCompiledData *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneCompiledData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneCompiledData *)
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

// NewObject<UMovieSceneGroupCondition> @ 1461faa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneGroupCondition * __cdecl NewObject<UMovieSceneGroupCondition>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneGroupCondition *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieSceneGroupCondition_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneGroupCondition *)
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

// NewObject<UMovieSceneMetaData> @ 1461faac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneMetaData * __cdecl
NewObject<UMovieSceneMetaData>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneMetaData *pUVar2;
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
  pUVar1 = UMovieSceneMetaData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneMetaData *)
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

// NewObject<UMovieSceneSequenceTickManager> @ 1461fabb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSequenceTickManager * __cdecl
NewObject<UMovieSceneSequenceTickManager>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneSequenceTickManager *pUVar2;
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
  pUVar1 = UMovieSceneSequenceTickManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneSequenceTickManager *)
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

// NoneOf<TArrayView<FMovieSceneBindingReference_const_,int>,`MovieSceneHelpers::IsBoundToAnySpawnable'::__l14::<lambda_1>_> @ 1461faca0

bool __cdecl
Algo::
NoneOf<TArrayView<FMovieSceneBindingReference_const_,int>,_MovieSceneHelpers::IsBoundToAnySpawnable_::__l14::<lambda_1>_>
          (TArrayView<FMovieSceneBindingReference_const_,int> *param_1,<lambda_1> param_2)

{
  UMovieSceneCustomBinding *pUVar1;
  code *pcVar2;
  char cVar3;
  FMovieSceneBindingReference *pFVar4;
  FMovieSceneBindingReference *pFVar5;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pFVar5 = param_1->DataPtr;
  pFVar4 = pFVar5 + param_1->ArrayNum;
  do {
    if (pFVar5 == pFVar4) {
      return true;
    }
    pUVar1 = (pFVar5->CustomBinding).field0_0x0.DebugPtr;
    if (pUVar1 != (UMovieSceneCustomBinding *)0x0) {
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x2b8);
      local_18 = (param_2.SharedPlaybackState)->Object;
      local_10 = ((param_2.SharedPlaybackState)->SharedReferenceCount).ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      cVar3 = (*pcVar2)(pUVar1,&local_18);
      if (cVar3 != '\0') {
        return false;
      }
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// RemoveAll<`UMovieSceneBindingOverrides::ResetBinding'::__l2::<lambda_1>_> @ 1461fb520

int __thiscall
TArray<FMovieSceneBindingOverrideData,TSizedDefaultAllocator<32>_>::
RemoveAll<_UMovieSceneBindingOverrides::ResetBinding_::__l2::<lambda_1>_>
          (TArray<FMovieSceneBindingOverrideData,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  
  iVar1 = this->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar11 = 0;
  if (((((*(uint *)(pFVar2 + 0xc) == (param_1->Binding).Guid.D &&
         *(uint *)(pFVar2 + 8) == (param_1->Binding).Guid.C) &&
        *(uint *)(pFVar2 + 4) == (param_1->Binding).Guid.B) &&
        *(uint *)pFVar2 == (param_1->Binding).Guid.A) &&
      ((param_1->Binding).SequenceID == *(int *)(pFVar2 + 0x10))) &&
     ((param_1->Binding).ResolveParentIndex == *(int *)(pFVar2 + 0x14))) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  lVar5 = 0;
  iVar6 = 0;
  do {
    lVar5 = lVar5 + 1;
    iVar7 = iVar6 + 1;
    if (lVar5 < lVar9) {
      pFVar3 = pFVar2 + (lVar5 * 9 + 1) * 8;
      do {
        if ((((((param_1->Binding).Guid.A == *(uint *)(pFVar3 + -8) &&
               (param_1->Binding).Guid.B == *(uint *)(pFVar3 + -4)) &&
              (param_1->Binding).Guid.D == *(uint *)(pFVar3 + 4)) &&
              (param_1->Binding).Guid.C == *(uint *)pFVar3) &&
            ((param_1->Binding).SequenceID == *(int *)(pFVar3 + 8))) &&
           ((param_1->Binding).ResolveParentIndex == *(int *)(pFVar3 + 0xc))) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar10 != bVar4) break;
        iVar7 = iVar7 + 1;
        lVar5 = lVar5 + 1;
        pFVar3 = pFVar3 + 0x48;
      } while (lVar5 < lVar9);
    }
    iVar8 = iVar7 - iVar6;
    if (bVar10 == 0) {
      DestructItems<FMovieSceneBindingOverrideData,int>
                ((FMovieSceneBindingOverrideData *)(pFVar2 + (longlong)iVar6 * 0x48),iVar8);
    }
    else {
      if (iVar11 != iVar6) {
        memmove(pFVar2 + (longlong)iVar11 * 0x48,pFVar2 + (longlong)iVar6 * 0x48,
                (longlong)iVar8 * 0x48);
      }
      iVar11 = iVar11 + iVar8;
    }
    bVar10 = bVar10 ^ 1;
    iVar6 = iVar7;
    if (lVar9 <= lVar5) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// SerializeInlineValue<FMovieSceneSequenceInstanceData,16> @ 1461fb9f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
SerializeInlineValue<FMovieSceneSequenceInstanceData,16>
          (TInlineValue<FMovieSceneSequenceInstanceData,16,8> *param_1,FArchive *param_2,
          bool param_3)

{
  uint uVar1;
  size_t sVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  ICppStructOps *pIVar5;
  undefined1 *puVar6;
  FMovieSceneSequenceInstanceData *pFVar7;
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
      pFVar7 = TInlineValue<FMovieSceneSequenceInstanceData,16,8>::GetValue(param_1);
      pUVar4 = (UScriptStruct *)(**(code **)((longlong)*pFVar7 + 8))(pFVar7);
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
                    (&`bool___cdecl_SerializeInlineValue<FMovieSceneSequenceInstanceData,16>(TInlineValue<FMovieSceneSequenceInstanceData,16,8>&___ptr64,FArchive&___ptr64,bool)'
                      ::__l15::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        }
        pUVar4 = FMovieSceneEmptyStruct::StaticStruct();
        puVar6 = local_res10;
      }
      else {
        pIVar5 = UScriptStruct::GetCppStructOps(pUVar4);
        uVar1 = pIVar5->Size;
        pIVar5 = UScriptStruct::GetCppStructOps(pUVar4);
        puVar6 = TInlineValue<FMovieSceneSequenceInstanceData,16,8>::Reserve
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

// StaticEnum<enum_EMovieSceneObjectBindingSpace> @ 1461fbf00

UEnum * __cdecl StaticEnum<enum_EMovieSceneObjectBindingSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace,(UObject *)pUVar1,
                       L"EMovieSceneObjectBindingSpace");
  }
  return Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.OuterSingleton;
}

// StaticEnum<enum_EMovieScenePositionType> @ 1461fbf40

UEnum * __cdecl StaticEnum<enum_EMovieScenePositionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieScenePositionType,(UObject *)pUVar1,
                       L"EMovieScenePositionType");
  }
  return Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton;
}

// StaticEnum<enum_ESpawnOwnership> @ 1461fbf80

UEnum * __cdecl StaticEnum<enum_ESpawnOwnership>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpawnOwnership.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_ESpawnOwnership.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_ESpawnOwnership,(UObject *)pUVar1,
                       L"ESpawnOwnership");
  }
  return Z_Registration_Info_UEnum_ESpawnOwnership.OuterSingleton;
}

// StaticEnum<enum_EUpdatePositionMethod> @ 1461fbfc0

UEnum * __cdecl StaticEnum<enum_EUpdatePositionMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod,(UObject *)pUVar1,
                       L"EUpdatePositionMethod");
  }
  return Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton;
}

// UpperBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_> @ 1461fc0a0

int __cdecl
AlgoImpl::
UpperBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
          (FMovieSceneBindingReference *param_1,int param_2,FGuid *param_3,pdm_2fa4d329 param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  if (0 < param_2) {
    lVar3 = (longlong)(int)param_4;
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      uVar2 = *(uint *)((longlong)&param_1[iVar1].ID.A + lVar3);
      if (param_3->A < uVar2) {
        bVar5 = true;
      }
      else if (uVar2 < param_3->A) {
        bVar5 = false;
      }
      else {
        uVar2 = *(uint *)((longlong)&param_1[iVar1].ID.B + lVar3);
        if (param_3->B < uVar2) {
          bVar5 = true;
        }
        else if (uVar2 < param_3->B) {
          bVar5 = false;
        }
        else {
          uVar2 = *(uint *)((longlong)&param_1[iVar1].ID.C + lVar3);
          if (param_3->C < uVar2) {
            bVar5 = true;
          }
          else if (uVar2 < param_3->C) {
            bVar5 = false;
          }
          else {
            bVar5 = param_3->D < *(uint *)((longlong)&param_1[iVar1].ID.D + lVar3);
          }
        }
      }
      if (!bVar5) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// UpperBoundInternal<UMovieSceneSection_*_const,int,TRangeBound<FFrameNumber>,`Projection<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const_,TRangeBound<FFrameNumber>_(__cdecl_TRange<FFrameNumber>::*)(void)const_>'::__l3::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)> @ 1461fc160

int __cdecl
AlgoImpl::
UpperBoundInternal<UMovieSceneSection_*_const,int,TRangeBound<FFrameNumber>,_Projection<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const_,TRangeBound<FFrameNumber>_(__cdecl_TRange<FFrameNumber>::*)(void)const_>_::__l3::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
          (UMovieSceneSection **param_1,int param_2,TRangeBound<FFrameNumber> *param_3,
          <lambda_1> *param_4,
          _func___cdecl_bool_TRangeBound<FFrameNumber>_TRangeBound<FFrameNumber> *param_5)

{
  int iVar1;
  pmf_9615a320 pVar2;
  pmf_b3ab0383 pVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TRangeBound<FFrameNumber> local_48;
  undefined1 local_40 [24];
  
  iVar6 = 0;
  if (0 < param_2) {
    pVar2 = (param_4->Callable0).MemberFunctionPtr;
    pVar3 = (param_4->CallableRest).MemberFunctionPtr;
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      (*(code *)pVar2)(param_1[iVar1],local_40);
      (*(code *)pVar3)(local_40,&local_48);
      bVar5 = (*param_5)(*param_3,local_48);
      if (!bVar5) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar4 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar4 != 0);
  }
  return iVar6;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional> @ 1461fc480

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
                 *param_1)

{
  char cVar1;
  UObject *pUVar2;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  this->field_0x10 = 0;
  cVar1 = param_1->field_0x10;
  this->field_0x10 = cVar1;
  if (cVar1 != '\0') {
    pUVar2 = *(UObject **)&param_1->field_0x8;
    *(UObject **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
  }
  *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
  this->field_0x20 = 0;
  cVar1 = param_1->field_0x20;
  this->field_0x20 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
  }
  *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
  this->field_0x38 = 0;
  cVar1 = param_1->field_0x38;
  this->field_0x38 = cVar1;
  if (cVar1 != '\0') {
    pUVar2 = *(UObject **)&param_1->field_0x30;
    *(UObject **)&this->field_0x30 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
  }
  *(undefined4 *)&this->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  this->field_0x46 = 0;
  cVar1 = param_1->field_0x46;
  this->field_0x46 = cVar1;
  if (cVar1 != '\0') {
    *(undefined2 *)&this->field_0x44 = *(undefined2 *)&param_1->field_0x44;
  }
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  this->field_0x54 = 0;
  cVar1 = param_1->field_0x54;
  this->field_0x54 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x4c = *(undefined8 *)&param_1->field_0x4c;
  }
  *(undefined4 *)&this->field_0x58 = *(undefined4 *)&param_1->field_0x58;
  this->field_0x68 = 0;
  cVar1 = param_1->field_0x68;
  this->field_0x68 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x60 = *(undefined8 *)&param_1->field_0x60;
  }
  *(undefined4 *)&this->field_0x70 = *(undefined4 *)&param_1->field_0x70;
  this->field_0x7c = 0;
  cVar1 = param_1->field_0x7c;
  this->field_0x7c = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x74 = *(undefined8 *)&param_1->field_0x74;
  }
  *(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_1->field_0x80;
  *(undefined4 *)&this->field_0x84 = *(undefined4 *)&param_1->field_0x84;
  *(undefined4 *)&this->field_0x88 = *(undefined4 *)&param_1->field_0x88;
  *(undefined4 *)&this->field_0x8c = *(undefined4 *)&param_1->field_0x8c;
  *(undefined4 *)&this->field_0x90 = *(undefined4 *)&param_1->field_0x90;
  *(undefined4 *)&this->field_0x94 = *(undefined4 *)&param_1->field_0x94;
  *(undefined4 *)&this->field_0x98 = *(undefined4 *)&param_1->field_0x98;
  return this;
}

// operator* @ 146200760

FFrameTime __cdecl operator*(float param_1,FFrameRate param_2)

{
  FFrameTime in_RCX;
  int iVar1;
  undefined8 in_R8;
  float in_XMM1_Da;
  double dVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  float fVar6;
  
  dVar4 = ((double)(int)in_R8 * (double)in_XMM1_Da) / (double)(int)((ulonglong)in_R8 >> 0x20);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  auVar3 = roundpd(in_XMM2,auVar3,1);
  dVar2 = auVar3._0_8_;
  dVar4 = dVar4 - dVar2;
  if (__real_41dfffffffc00000 <= dVar2) {
    dVar2 = __real_41dfffffffc00000;
  }
  if (dVar2 <= __real_c1e0000000000000) {
    dVar2 = __real_c1e0000000000000;
  }
  iVar1 = (int)dVar4;
  fVar5 = (float)dVar4 - (float)iVar1;
  fVar6 = fVar5;
  if ((0.0 < fVar5) && (fVar6 = FFrameTime::MaxSubframe, fVar5 <= FFrameTime::MaxSubframe)) {
    fVar6 = fVar5;
  }
  fVar5 = FFrameTime::MaxSubframe;
  if (fVar6 <= FFrameTime::MaxSubframe) {
    fVar5 = fVar6;
  }
  *(int *)in_RCX = (int)dVar2 + iVar1;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)((longlong)in_RCX + 4) = fVar5;
  return in_RCX;
}

// operator() @ 146200930

bool __thiscall
`MovieSceneHelpers::GetPrioritySortedCustomBindingTypes'::__l2::<lambda_1>::operator()
          (void *this,TSubclassOf<UMovieSceneCustomBinding> *param_1,
          TSubclassOf<UMovieSceneCustomBinding> *param_2)

{
  UClass *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UMovieSceneCustomBinding *pUVar7;
  UClass *pUVar8;
  UMovieSceneCustomBinding *pUVar9;
  
  pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar1 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar3 = (int)pUVar5->_padding_;
    if (((int)pUVar1->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar3 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((bVar2) && ((param_1->Class).field0_0x0.DebugPtr != (UClass *)0x0)) &&
        (pUVar1 = (param_2->Class).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) &&
       (pUVar5 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister(), pUVar5 != (UClass *)0x0))
    {
      iVar3 = (int)pUVar5->_padding_;
      if (((int)pUVar1->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((param_2->Class).field0_0x0.DebugPtr != (UClass *)0x0)) {
        pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
        pUVar5 = (UClass *)0x0;
        pUVar8 = pUVar5;
        if ((pUVar1 != (UClass *)0x0) &&
           (pUVar6 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister(),
           pUVar6 != (UClass *)0x0)) {
          iVar3 = (int)pUVar6->_padding_;
          if (((int)pUVar1->_padding_ < iVar3) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar3 * 8) !=
              &pUVar6->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            pUVar8 = (param_1->Class).field0_0x0.DebugPtr;
          }
        }
        pUVar7 = UClass::GetDefaultObject<UMovieSceneCustomBinding>(pUVar8);
        pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
        if ((pUVar1 != (UClass *)0x0) &&
           (pUVar8 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister(),
           pUVar8 != (UClass *)0x0)) {
          iVar3 = (int)pUVar8->_padding_;
          if (((int)pUVar1->_padding_ < iVar3) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar3 * 8) !=
              &pUVar8->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            pUVar5 = (param_2->Class).field0_0x0.DebugPtr;
          }
        }
        pUVar9 = UClass::GetDefaultObject<UMovieSceneCustomBinding>(pUVar5);
        iVar3 = (**(code **)(*(longlong *)pUVar9 + 0x2c0))(pUVar9);
        iVar4 = (**(code **)(*(longlong *)pUVar7 + 0x2c0))(pUVar7);
        if (iVar3 < iVar4) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator() @ 146201760

bool __thiscall
`MovieSceneHelpers::FixupConsecutiveSections'::__l34::<lambda_1>::operator()
          (void *this,UMovieSceneSection *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 local_18 [4];
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  if (param_1 == *(UMovieSceneSection **)this) {
    return false;
  }
  iStack_14 = (param_1->SectionRange).Value.LowerBound.Value.Value;
  uStack_10 = *(undefined4 *)&(param_1->SectionRange).Value.UpperBound;
  iStack_c = (param_1->SectionRange).Value.UpperBound.Value.Value;
  cVar1 = *(char *)((longlong)this + 8);
  puVar3 = (undefined1 *)((longlong)this + 8);
  if (cVar1 != '\x02') {
    cVar2 = (char)*(undefined4 *)&(param_1->SectionRange).Value.LowerBound;
    if ((cVar2 == '\x02') ||
       ((iStack_14 <= *(int *)((longlong)this + 0xc) &&
        ((iStack_14 < *(int *)((longlong)this + 0xc) || (cVar1 != '\x01')))))) {
      if (cVar2 != cVar1) {
        return false;
      }
      puVar3 = local_18;
      if (cVar2 == '\x02') goto LAB_1462017c3;
    }
    if (*(int *)(puVar3 + 4) != *(int *)((longlong)this + 0xc)) {
      return false;
    }
  }
LAB_1462017c3:
  cVar1 = *(char *)((longlong)this + 0x10);
  puVar4 = (undefined4 *)((longlong)this + 0x10);
  if (cVar1 != '\x02') {
    cVar2 = (char)uStack_10;
    if ((cVar2 == '\x02') ||
       ((*(int *)((longlong)this + 0x14) <= iStack_c &&
        ((*(int *)((longlong)this + 0x14) < iStack_c || (cVar1 != '\x01')))))) {
      puVar4 = &uStack_10;
      if (cVar2 != cVar1) {
        return false;
      }
      if (cVar2 == '\x02') {
        return true;
      }
    }
    if (puVar4[1] != *(int *)((longlong)this + 0x14)) {
      return false;
    }
  }
  return true;
}

// operator() @ 146201820

bool __thiscall
`MovieSceneHelpers::FixupConsecutiveBlendingSections'::__l63::<lambda_1>::operator()
          (void *this,UMovieSceneSection *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 local_18 [4];
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  if (param_1 == *(UMovieSceneSection **)this) {
    return false;
  }
  iStack_14 = (param_1->SectionRange).Value.LowerBound.Value.Value;
  uStack_10 = *(undefined4 *)&(param_1->SectionRange).Value.UpperBound;
  iStack_c = (param_1->SectionRange).Value.UpperBound.Value.Value;
  cVar1 = *(char *)((longlong)this + 8);
  puVar3 = (undefined1 *)((longlong)this + 8);
  if (cVar1 != '\x02') {
    cVar2 = (char)*(undefined4 *)&(param_1->SectionRange).Value.LowerBound;
    if ((cVar2 == '\x02') ||
       ((iStack_14 <= *(int *)((longlong)this + 0xc) &&
        ((iStack_14 < *(int *)((longlong)this + 0xc) || (cVar1 != '\x01')))))) {
      if (cVar2 != cVar1) {
        return false;
      }
      puVar3 = local_18;
      if (cVar2 == '\x02') goto LAB_146201883;
    }
    if (*(int *)(puVar3 + 4) != *(int *)((longlong)this + 0xc)) {
      return false;
    }
  }
LAB_146201883:
  cVar1 = *(char *)((longlong)this + 0x10);
  puVar4 = (undefined4 *)((longlong)this + 0x10);
  if (cVar1 != '\x02') {
    cVar2 = (char)uStack_10;
    if ((cVar2 == '\x02') ||
       ((*(int *)((longlong)this + 0x14) <= iStack_c &&
        ((*(int *)((longlong)this + 0x14) < iStack_c || (cVar1 != '\x01')))))) {
      puVar4 = &uStack_10;
      if (cVar2 != cVar1) {
        return false;
      }
      if (cVar2 == '\x02') {
        return true;
      }
    }
    if (puVar4[1] != *(int *)((longlong)this + 0x14)) {
      return false;
    }
  }
  return true;
}

// `vcall'{8,{flat}}'_}' @ 146202408

/* [thunk]: __cdecl UE::MovieScene::IFolderEventHandler::`vcall'{8,{flat}}' }' */

void __thiscall
UE::MovieScene::IFolderEventHandler::_vcall__8__flat______(IFolderEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014620240b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 8))();
  return;
}

// `vcall'{0,{flat}}'_}' @ 146202414

/* [thunk]: __cdecl UE::MovieScene::IFolderEventHandler::`vcall'{0,{flat}}' }' */

void __thiscall
UE::MovieScene::IFolderEventHandler::_vcall__0__flat______(IFolderEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146202417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*this)();
  return;
}

// `vcall'{16,{flat}}'_}' @ 146202420

/* [thunk]: __cdecl UE::MovieScene::IFolderEventHandler::`vcall'{16,{flat}}' }' */

void __thiscall
UE::MovieScene::IFolderEventHandler::_vcall__16__flat______(IFolderEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146202423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x10))();
  return;
}

// `vcall'{24,{flat}}'_}' @ 14620242c

/* [thunk]: __cdecl UE::MovieScene::IFolderEventHandler::`vcall'{24,{flat}}' }' */

void __thiscall
UE::MovieScene::IFolderEventHandler::_vcall__24__flat______(IFolderEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014620242f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x18))();
  return;
}

// `vcall'{32,{flat}}'_}' @ 146202438

/* [thunk]: __cdecl UE::MovieScene::IFolderEventHandler::`vcall'{32,{flat}}' }' */

void __thiscall
UE::MovieScene::IFolderEventHandler::_vcall__32__flat______(IFolderEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014620243b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x20))();
  return;
}

// `vcall'{40,{flat}}'_}' @ 146202444

/* [thunk]: __cdecl UE::MovieScene::IFolderEventHandler::`vcall'{40,{flat}}' }' */

void __thiscall
UE::MovieScene::IFolderEventHandler::_vcall__40__flat______(IFolderEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146202447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x28))();
  return;
}

// `vcall'{8,{flat}}'_}' @ 146202450

/* [thunk]: __cdecl UE::MovieScene::ISectionEventHandler::`vcall'{8,{flat}}' }' */

void __thiscall
UE::MovieScene::ISectionEventHandler::_vcall__8__flat______(ISectionEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146202453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 8))();
  return;
}

// `vcall'{0,{flat}}'_}' @ 14620245c

/* [thunk]: __cdecl UE::MovieScene::ISectionEventHandler::`vcall'{0,{flat}}' }' */

void __thiscall
UE::MovieScene::ISectionEventHandler::_vcall__0__flat______(ISectionEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014620245f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*this)();
  return;
}

// `vcall'{16,{flat}}'_}' @ 146202468

/* [thunk]: __cdecl UE::MovieScene::ISectionEventHandler::`vcall'{16,{flat}}' }' */

void __thiscall
UE::MovieScene::ISectionEventHandler::_vcall__16__flat______(ISectionEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014620246b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x10))();
  return;
}

// `vcall'{48,{flat}}'_}' @ 146202474

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{48,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__48__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146202477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x30))();
  return;
}

// `vcall'{56,{flat}}'_}' @ 146202480

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{56,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__56__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146202483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x38))();
  return;
}

// `vcall'{64,{flat}}'_}' @ 14620248c

/* [thunk]: __cdecl UE::MovieScene::ISequenceDataEventHandler::`vcall'{64,{flat}}' }' */

void __thiscall
UE::MovieScene::ISequenceDataEventHandler::_vcall__64__flat______(ISequenceDataEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014620248f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x40))();
  return;
}

// `vcall'{8,{flat}}'_}' @ 146202498

/* [thunk]: __cdecl UE::MovieScene::ISignedObjectEventHandler::`vcall'{8,{flat}}' }' */

void __thiscall
UE::MovieScene::ISignedObjectEventHandler::_vcall__8__flat______(ISignedObjectEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014620249b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 8))();
  return;
}

// `vcall'{0,{flat}}'_}' @ 1462024a4

/* [thunk]: __cdecl UE::MovieScene::ISignedObjectEventHandler::`vcall'{0,{flat}}' }' */

void __thiscall
UE::MovieScene::ISignedObjectEventHandler::_vcall__0__flat______(ISignedObjectEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001462024a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*this)();
  return;
}

// `vector_deleting_destructor'`adjustor{272}' @ 1462024b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneBindingLifetimeSection::`vector
   deleting destructor'`adjustor{272}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneBindingLifetimeSection::_vector_deleting_destructor__adjustor_272__
          (UMovieSceneBindingLifetimeSection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneBindingLifetimeSection *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{272}' @ 1462024c4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneHookSection::`vector deleting
   destructor'`adjustor{272}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneHookSection::_vector_deleting_destructor__adjustor_272__
          (UMovieSceneHookSection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneHookSection *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{280}' @ 1462024d8

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneHookSection::`vector deleting
   destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneHookSection::_vector_deleting_destructor__adjustor_280__
          (UMovieSceneHookSection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneHookSection *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1462024ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneMetaData::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneMetaData::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneMetaData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneMetaData *)&this[-1].Author,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{536}' @ 1462024fc

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneSequencePlayer::`vector deleting
   destructor'`adjustor{536}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneSequencePlayer::_vector_deleting_destructor__adjustor_536__
          (UMovieSceneSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneSequencePlayer *)&this[-1].OnFinished.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146202510

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneSequencePlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneSequencePlayer::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneSequencePlayer *)&this[-1].PauseOnFrame.bIsSet,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146202520

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202550

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202580

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462025b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462025e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202610

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
           *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202660

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202690

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462026c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462026f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->Payload).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202740

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FFrameTime>_>::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FFrameTime>_> *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202780

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>_>::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FGuid>_> *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462027c0

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_> *this
          ,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202800

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202840

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_> *this,
          uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202880

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462028c0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202900

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202940

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202980

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462029c0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202a00

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202a40

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202a80

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202ac0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202b00

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202b40

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202b80

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202bc0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202c00

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202c40

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202c80

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202cc0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202d00

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202d40

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202d80

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202dc0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202e00

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202e40

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202e80

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202ec0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202f00

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202f40

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202f80

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146202fc0

void * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_>::
_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FFrameTime>_> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203000

void * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_>::
_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FGuid>_> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203040

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203080

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462030c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneBlendingAccumulator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneBlendingAccumulator,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203100

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneChannelProxy,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneChannelProxy,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203140

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneEvaluationState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneEvaluationState,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203180

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_AudioClock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneTimeController_AudioClock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462031c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_Custom,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneTimeController_Custom,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203200

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_PlatformClock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneTimeController_PlatformClock,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203240

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_PlayEveryFrame,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneTimeController_PlayEveryFrame,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203280

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FMovieSceneTimeController_RelativeTimecodeClock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneTimeController_RelativeTimecodeClock,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462032c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_Tick,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneTimeController_Tick,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203300

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_TimecodeClock,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneTimeController_TimecodeClock,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203340

void * __thiscall
UE::MovieScene::TPlaybackCapabilityDebuggingTypedPtr<FMovieSceneEvaluationState_*>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<FMovieSceneEvaluationState_*> *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203380

void * __thiscall
UE::MovieScene::
TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462033c0

void * __thiscall
UE::MovieScene::
TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203400

void * __thiscall
UE::MovieScene::TPlaybackCapabilityDebuggingTypedPtr<FMovieSceneSpawnRegister_*>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<FMovieSceneSpawnRegister_*> *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203440

void * __thiscall
UE::MovieScene::
TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::FEventTriggerControlPlaybackCapability>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::FEventTriggerControlPlaybackCapability>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203480

void * __thiscall
UE::MovieScene::
TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::FSequenceDirectorPlaybackCapability>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::FSequenceDirectorPlaybackCapability>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462034c0

void * __thiscall
UE::MovieScene::TPlaybackCapabilityDebuggingTypedPtr<TSharedPtr<FMovieSceneEvaluationState,1>_>::
_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<TSharedPtr<FMovieSceneEvaluationState,1>_> *this,
          uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203500

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMovieSceneSequencePlayer::Pause'::__l29::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203530

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMovieSceneSequencePlayer::StopInternal'::__l29::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203560

void * __thiscall
FDefaultTrackRowSegmentBlender::_scalar_deleting_destructor_
          (FDefaultTrackRowSegmentBlender *this,uint param_1)

{
  *this = (FDefaultTrackRowSegmentBlender)&___7FMovieSceneTrackRowSegmentBlender__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462035a0

void * __thiscall
FEvaluateNearestSegmentBlender::_scalar_deleting_destructor_
          (FEvaluateNearestSegmentBlender *this,uint param_1)

{
  *(undefined ***)this = &___7FMovieSceneTrackSegmentBlender__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462035e0

void * __thiscall
FMovieSceneEvaluationState::_scalar_deleting_destructor_
          (FMovieSceneEvaluationState *this,uint param_1)

{
  ~FMovieSceneEvaluationState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203620

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FMovieSceneLegacyPlayer::_scalar_deleting_destructor_(FMovieSceneLegacyPlayer *this,uint param_1)

{
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
            (&this->EvaluationTemplateInstance);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedPlaybackState).SharedReferenceCount.ReferenceController);
  IMovieScenePlayer::~IMovieScenePlayer((IMovieScenePlayer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203680

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
MovieSceneHelpers::FMovieSceneScopedPackageDirtyGuard::_scalar_deleting_destructor_
          (FMovieSceneScopedPackageDirtyGuard *this,uint param_1)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FMovieSceneScopedPackageDirtyGuard_MovieSceneHelpers__6B_;
  if (this->Component != (USceneComponent *)0x0) {
    pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Component);
    if (pUVar1 != (UPackage *)0x0) {
      pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Component);
      UPackage::SetDirtyFlag(pUVar1,this->bPackageWasDirty);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462036f0

void * __thiscall
FMovieSceneSpawnRegister::_scalar_deleting_destructor_(FMovieSceneSpawnRegister *this,uint param_1)

{
  ~FMovieSceneSpawnRegister(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203730

void * __thiscall
FMovieSceneTimeController_AudioClock::_scalar_deleting_destructor_
          (FMovieSceneTimeController_AudioClock *this,uint param_1)

{
  *(undefined ***)this = &___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203770

void * __thiscall
FMovieSceneTimeController_ExternalClock::_scalar_deleting_destructor_
          (FMovieSceneTimeController_ExternalClock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462037b0

void * __thiscall
FMovieSceneTimeController_PlatformClock::_scalar_deleting_destructor_
          (FMovieSceneTimeController_PlatformClock *this,uint param_1)

{
  *(undefined ***)this = &___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462037f0

void * __thiscall
FMovieSceneTimeController_PlayEveryFrame::_scalar_deleting_destructor_
          (FMovieSceneTimeController_PlayEveryFrame *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203830

void * __thiscall
FMovieSceneTimeController_RelativeTimecodeClock::_scalar_deleting_destructor_
          (FMovieSceneTimeController_RelativeTimecodeClock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203870

void * __thiscall
FMovieSceneTimeController_Tick::_scalar_deleting_destructor_
          (FMovieSceneTimeController_Tick *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462038b0

void * __thiscall
FMovieSceneTimeController_TimecodeClock::_scalar_deleting_destructor_
          (FMovieSceneTimeController_TimecodeClock *this,uint param_1)

{
  *(undefined ***)this = &___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462038f0

void * __thiscall
FMovieSceneTrackRowSegmentBlender::_scalar_deleting_destructor_
          (FMovieSceneTrackRowSegmentBlender *this,uint param_1)

{
  *this = (FMovieSceneTrackRowSegmentBlender)&___7FMovieSceneTrackRowSegmentBlender__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203930

void * __thiscall
FMovieSceneTrackSegmentBlender::_scalar_deleting_destructor_
          (FMovieSceneTrackSegmentBlender *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneTrackSegmentBlender__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203970

void * __thiscall
FNullMovieSceneSpawnRegister::_scalar_deleting_destructor_
          (FNullMovieSceneSpawnRegister *this,uint param_1)

{
  FMovieSceneSpawnRegister::~FMovieSceneSpawnRegister((FMovieSceneSpawnRegister *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462039b0

void * __thiscall
UE::MovieScene::FSequenceDirectorPlaybackCapability::_scalar_deleting_destructor_
          (FSequenceDirectorPlaybackCapability *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FDirectorInstanceCache *pFVar2;
  
  pFVar1 = (this->WeakCache).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->Cache).Ptr;
  if (pFVar2 != (FDirectorInstanceCache *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  this->_padding_ = (longlong)&___7IPlaybackCapability_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203a20

void * __thiscall
UE::MovieScene::FStaticBindingOverrides::_scalar_deleting_destructor_
          (FStaticBindingOverrides *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->BindingOverrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BindingOverrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BindingOverrides);
  this->_padding_ = (longlong)&___7IStaticBindingOverridesPlaybackCapability_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203a90

void * __thiscall
IMovieSceneEvaluationHook::_scalar_deleting_destructor_
          (IMovieSceneEvaluationHook *this,uint param_1)

{
  *this = (IMovieSceneEvaluationHook)&___7IMovieSceneEvaluationHook__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203ad0

void * __thiscall
IMovieScenePlayer::_scalar_deleting_destructor_(IMovieScenePlayer *this,uint param_1)

{
  ~IMovieScenePlayer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203b10

void * __thiscall
IMovieSceneSequenceTickManagerClient::_scalar_deleting_destructor_
          (IMovieSceneSequenceTickManagerClient *this,uint param_1)

{
  *this = (IMovieSceneSequenceTickManagerClient)&___7IMovieSceneSequenceTickManagerClient__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203b50

void * __thiscall
UE::MovieScene::IPlaybackCapability::_scalar_deleting_destructor_
          (IPlaybackCapability *this,uint param_1)

{
  *this = (IPlaybackCapability)&___7IPlaybackCapability_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203b90

void * __thiscall
UE::MovieScene::IStaticBindingOverridesPlaybackCapability::_scalar_deleting_destructor_
          (IStaticBindingOverridesPlaybackCapability *this,uint param_1)

{
  *this = (IStaticBindingOverridesPlaybackCapability)
          &___7IStaticBindingOverridesPlaybackCapability_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203bd0

void * __thiscall
UBuiltInDynamicBindingResolverLibrary::_scalar_deleting_destructor_
          (UBuiltInDynamicBindingResolverLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBuiltInDynamicBindingResolverLibrary__6B_;
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

// `scalar_deleting_destructor' @ 146203c30

void * __thiscall
UMovieSceneBindingLifetimeSection::_scalar_deleting_destructor_
          (UMovieSceneBindingLifetimeSection *this,uint param_1)

{
  *(undefined ***)&this->field_0x110 = &___7IMovieSceneEntityProvider__6B_;
  *(undefined ***)this = &___7UMovieSceneSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x100);
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203cb0

void * __thiscall
UMovieSceneBindingOverrides::_scalar_deleting_destructor_
          (UMovieSceneBindingOverrides *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneBindingOverrides__6B_;
  *(undefined4 *)&(this->LookupMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LookupMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LookupMap);
  DestructItems<FMovieSceneBindingOverrideData,int>
            ((FMovieSceneBindingOverrideData *)(this->BindingData).AllocatorInstance.Data,
             (this->BindingData).ArrayNum);
  pFVar2 = (this->BindingData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
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

// `scalar_deleting_destructor' @ 146203d60

void * __thiscall
UMovieSceneBoolSection::_scalar_deleting_destructor_(UMovieSceneBoolSection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneBoolSection__6B_;
  FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&this->BoolCurve);
  this->_padding_ = (longlong)&___7UMovieSceneSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146203df0

void * __thiscall
UMovieSceneClock::_scalar_deleting_destructor_(UMovieSceneClock *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneSignedObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x48,
             *(int *)&this->field_0x50);
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x40);
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

// `scalar_deleting_destructor' @ 146203e90

void * __thiscall
UMovieSceneExternalClock::_scalar_deleting_destructor_(UMovieSceneExternalClock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneExternalClock__6B_;
  pFVar1 = (this->CustomClockSourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieSceneSignedObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
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

// `scalar_deleting_destructor' @ 146203f40

void * __thiscall
UMovieSceneFolder::_scalar_deleting_destructor_(UMovieSceneFolder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneFolder__6B_;
  pFVar1 = (this->ChildObjectBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ChildObjectBindingStrings).AllocatorInstance.Data,
             (this->ChildObjectBindingStrings).ArrayNum);
  pFVar1 = (this->ChildObjectBindingStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildFolders).AllocatorInstance.Data;
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
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146204000

void * __thiscall
UMovieSceneHookSection::_scalar_deleting_destructor_(UMovieSceneHookSection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneEvaluationHook__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  this->_padding_ = (longlong)&___7UMovieSceneSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146204090

void * __thiscall
UMovieSceneMetaData::_scalar_deleting_destructor_(UMovieSceneMetaData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneMetaDataInterface__;
  pFVar1 = (this->Notes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Author).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneMetaDataInterface__6B_;
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

// `scalar_deleting_destructor' @ 146204130

void * __thiscall
UMovieSceneNameableTrack::_scalar_deleting_destructor_(UMovieSceneNameableTrack *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1462041a0

void * __thiscall
UMovieSceneSection::_scalar_deleting_destructor_(UMovieSceneSection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChannelProxy).SharedReferenceCount.ReferenceController);
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146204210

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UMovieSceneSequence::_scalar_deleting_destructor_(UMovieSceneSequence *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneSignedObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
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

// `scalar_deleting_destructor' @ 1462042b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneSequencePlayer::_scalar_deleting_destructor_
          (UMovieSceneSequencePlayer *this,uint param_1)

{
  ~UMovieSceneSequencePlayer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146204310

void * __thiscall
UMovieSceneSequenceTickManager::_scalar_deleting_destructor_
          (UMovieSceneSequenceTickManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneSequenceTickManager__6B_;
  DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             (this->LatentActionManager).LatentActions.AllocatorInstance.Data,
             (this->LatentActionManager).LatentActions.ArrayNum);
  pFVar1 = (this->LatentActionManager).LatentActions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>
            (&this->LinkerGroups);
  pFVar1 = (this->TickableClients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 1462043b0

void * __thiscall
UMovieSceneSignedObject::_scalar_deleting_destructor_(UMovieSceneSignedObject *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneSignedObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSignatureChangedEvent).field_0x8,
             *(int *)&(this->OnSignatureChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnSignatureChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSignatureChangedEvent);
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

// `scalar_deleting_destructor' @ 146204450

void * __thiscall
UMovieSceneTrack::_scalar_deleting_destructor_(UMovieSceneTrack *this,uint param_1)

{
  ~UMovieSceneTrack(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// CalculateWeightForBlending @ 146209da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl
MovieSceneHelpers::CalculateWeightForBlending(UMovieSceneSection *param_1,FFrameNumber param_2)

{
  undefined8 *puVar1;
  ForElementType<UMovieSceneSection_*> FVar2;
  FOptionalMovieSceneBlendType FVar3;
  UObjectBaseUtility *this;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  char cVar13;
  int *piVar14;
  int *piVar15;
  EMovieSceneBlendType EVar16;
  ForElementType<UMovieSceneSection_*> FVar17;
  int iVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_108 [32];
  UObjectBaseUtility **local_e8;
  ForElementType<UMovieSceneSection_*> local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined1 local_b7 [3];
  FOptionalMovieSceneBlendType local_b4;
  UObjectBaseUtility *local_b0;
  undefined1 local_a8;
  int local_a4;
  undefined1 local_a0;
  int local_9c;
  undefined4 local_98;
  int iStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  ForElementType<UMovieSceneSection_*> local_78;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  fVar20 = __real_3f800000;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar10 = UMovieSceneTrack::StaticClass();
  pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar10);
  local_b4 = param_1->BlendType;
  if ((pUVar11 != (UObject *)0x0) && (bVar7 = local_b4.bIsValid, bVar7 != false)) {
    EVar16 = local_b4.BlendType;
    if ((EVar16 != Additive) && (EVar16 != Absolute)) {
      if ((bVar7 == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendType.h"
                             ,0x4c,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar20 = (float)(*pcVar4)();
        return fVar20;
      }
      if (EVar16 != Override) {
        return fVar20;
      }
    }
    if ((bVar7 == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendType.h"
                           ,0x4c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      fVar20 = (float)(*pcVar4)();
      return fVar20;
    }
    if (EVar16 != Additive) {
      if ((bVar7 == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendType.h"
                             ,0x4c,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        fVar20 = (float)(*pcVar4)();
        return fVar20;
      }
      if (EVar16 != Override) {
        plVar12 = (longlong *)(**(code **)(*(longlong *)pUVar11 + 0x360))(pUVar11);
        local_4c = 4;
        local_78.SecondaryData = (ForElementType<UMovieSceneSection_*>)0x0;
        local_50 = 0;
        puVar19 = (undefined8 *)*plVar12;
        lVar5 = plVar12[1];
        puVar1 = puVar19 + (int)lVar5;
        do {
          if ((int)plVar12[1] != (int)lVar5) {
            local_b8 = 0;
            `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_b8);
          }
          iVar9 = local_50;
          if (puVar19 == puVar1) {
            iVar18 = 1;
            FVar17 = (ForElementType<UMovieSceneSection_*>)&local_78;
            if (local_78.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
              FVar17 = local_78.SecondaryData;
            }
            FVar2 = (ForElementType<UMovieSceneSection_*>)
                    ((longlong)FVar17 + (longlong)local_50 * 8);
            while( true ) {
              if (local_50 != iVar9) {
                `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_b7);
              }
              if (FVar17 == FVar2) break;
              FVar3 = (*(UMovieSceneSection **)FVar17)->BlendType;
              if (((*(UMovieSceneSection **)FVar17 != param_1) && (FVar3.bIsValid != false)) &&
                 (FVar3.BlendType == Absolute)) {
                iVar18 = iVar18 + 1;
              }
              FVar17 = (ForElementType<UMovieSceneSection_*>)((longlong)FVar17 + 8);
            }
            fVar21 = 0.0;
            uStack_84 = 0;
            local_88 = param_2.Value;
            fVar20 = (float)(**(code **)(param_1->_padding_ + 0x368))(param_1,param_2.Value);
            if (__real_322bcc77 < (float)((uint)fVar20 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
              fVar21 = (float)iVar18 / fVar20;
            }
            if (local_78.SecondaryData == (ForElementType<UMovieSceneSection_*>)0x0) {
              return fVar21;
            }
            FMemory::Free((void *)local_78.SecondaryData);
            return fVar21;
          }
          this = (UObjectBaseUtility *)*puVar19;
          local_b0 = this;
          if (this != (UObjectBaseUtility *)0x0) {
            pUVar10 = UMovieSceneTrack::StaticClass();
            pUVar11 = UObjectBaseUtility::GetTypedOuter(this,pUVar10);
            if (pUVar11 != (UObject *)0x0) {
              piVar14 = *(int **)&pUVar11[3].field_0x18;
              piVar15 = piVar14 + *(int *)&pUVar11[3].field_0x20;
              for (; piVar14 != piVar15; piVar14 = piVar14 + 1) {
                if (*piVar14 == *(int *)&this[5].field_0x8) goto LAB_14620a117;
              }
              if ((pUVar11[3].field_0x11 == '\0') && ((this[5].field_0x10 & 1) != 0)) {
                local_a8 = 1;
                local_a4 = param_2.Value;
                iStack_94 = *(int *)&local_b0[4].field_0x14;
                iStack_8c = *(int *)&local_b0[4].field_0x1c;
                local_98 = *(undefined4 *)&local_b0[4].field_0x10;
                uStack_90 = *(undefined4 *)&local_b0[4].field_0x18;
                cVar8 = (char)*(undefined4 *)&local_b0[4].field_0x10;
                if (cVar8 == '\x02') {
                  piVar15 = &iStack_94;
                  cVar13 = cVar8;
LAB_146209fdb:
                  bVar7 = cVar13 != cVar8;
                  cVar8 = cVar13;
                  if (bVar7) goto LAB_14620a117;
                }
                else {
                  if (param_2.Value <= iStack_94) {
                    if ((param_2.Value < iStack_94) || (piVar15 = &iStack_94, cVar8 != '\x01')) {
                      piVar15 = &local_a4;
                    }
                    cVar13 = '\x01';
                    goto LAB_146209fdb;
                  }
                  piVar15 = &iStack_94;
                }
                if ((cVar8 == '\x02') || (*piVar15 == iStack_94)) {
                  local_a0 = 1;
                  local_9c = param_2.Value;
                  cVar8 = (char)*(undefined4 *)&local_b0[4].field_0x18;
                  if (cVar8 == '\x02') {
                    piVar15 = &iStack_8c;
                    cVar13 = cVar8;
LAB_14620a036:
                    bVar7 = cVar13 != cVar8;
                    cVar8 = cVar13;
                    if (bVar7) goto LAB_14620a117;
                  }
                  else {
                    if (iStack_8c <= param_2.Value) {
                      if ((iStack_8c < param_2.Value) || (piVar15 = &iStack_8c, cVar8 != '\x01')) {
                        piVar15 = &local_9c;
                      }
                      cVar13 = '\x01';
                      goto LAB_14620a036;
                    }
                    piVar15 = &iStack_8c;
                  }
                  if ((cVar8 == '\x02') || (*piVar15 == iStack_8c)) {
                    FVar17 = (ForElementType<UMovieSceneSection_*>)&local_78;
                    if (local_78.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
                      FVar17 = local_78.SecondaryData;
                    }
                    if ((ulonglong)FVar17 <= &local_b0) {
                      FVar17 = (ForElementType<UMovieSceneSection_*>)&local_78;
                      if (local_78.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
                        FVar17 = local_78.SecondaryData;
                      }
                      if (&local_b0 <
                          (UObjectBaseUtility **)((longlong)FVar17 + (longlong)local_4c * 8)) {
                        local_d0 = (longlong)local_50;
                        local_c8 = 8;
                        local_e8 = &local_b0;
                        local_e0 = (ForElementType<UMovieSceneSection_*>)&local_78;
                        if (local_78.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
                          local_e0 = local_78.SecondaryData;
                        }
                        local_d8 = (longlong)local_4c;
                        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          );
                        if (bVar7) {
                          pcVar4 = (code *)swi(3);
                          fVar20 = (float)(*pcVar4)();
                          return fVar20;
                        }
                      }
                    }
                    iVar9 = local_50;
                    if (local_50 == local_4c) {
                      iVar9 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UMovieSceneSection_*>_>
                                        (0x808,&local_78,&local_4c);
                    }
                    local_50 = iVar9 + 1;
                    FVar17 = (ForElementType<UMovieSceneSection_*>)&local_78;
                    if (local_78.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
                      FVar17 = local_78.SecondaryData;
                    }
                    *(UObjectBaseUtility **)((longlong)FVar17 + (longlong)iVar9 * 8) = local_b0;
                  }
                }
              }
            }
          }
LAB_14620a117:
          puVar19 = puVar19 + 1;
        } while( true );
      }
    }
    uStack_7c = 0;
    local_80 = param_2.Value;
    fVar21 = (float)(**(code **)(param_1->_padding_ + 0x368))(param_1,param_2.Value);
    if (__real_322bcc77 < (float)((uint)fVar21 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar20 = fVar20 / fVar21;
    }
    else {
      fVar20 = 0.0;
    }
  }
  return fVar20;
}

// CameraComponentFromActor @ 14620a4a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCameraComponent * __cdecl MovieSceneHelpers::CameraComponentFromActor(AActor *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  longlong *plVar8;
  UCameraComponent *pUVar9;
  UClass *local_res10;
  longlong *local_18;
  ulonglong local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  pUVar4 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14620a4ee;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14620a4ee:
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar2 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pUVar5 = pUVar4;
      if (bVar3) goto LAB_14620a523;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14620a523:
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar4;
  if (pUVar5 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UCameraComponent,1,0,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_res10,
               (TArray<UCameraComponent_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UCameraComponent,0,0,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_res10,
               (TArray<UCameraComponent_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  iVar2 = (int)local_10;
  uVar7 = (ulonglong)(int)local_10;
  plVar1 = local_18 + uVar7;
  plVar8 = local_18;
  while( true ) {
    if ((int)uVar7 != iVar2) {
      `TCheckedPointerIterator<UCameraComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
      uVar7 = local_10 & 0xffffffff;
    }
    if (plVar8 == plVar1) break;
    pUVar9 = (UCameraComponent *)*plVar8;
    if ((pUVar9->_padding_ & 0x100000) != 0) goto LAB_14620a5ce;
    plVar8 = plVar8 + 1;
  }
  if ((int)uVar7 < 1) {
    pUVar9 = (UCameraComponent *)0x0;
  }
  else {
    pUVar9 = (UCameraComponent *)*local_18;
  }
LAB_14620a5ce:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return pUVar9;
}

// CameraComponentFromRuntimeObject @ 14620a600

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCameraComponent * __cdecl MovieSceneHelpers::CameraComponentFromRuntimeObject(UObject *param_1)

{
  longlong *plVar1;
  int iVar2;
  UCameraComponent *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  UClass *local_res10;
  UClass *local_res18 [2];
  longlong *local_38;
  ulonglong local_30;
  
  if (param_1 == (UObject *)0x0) {
    return (UCameraComponent *)0x0;
  }
  pUVar5 = Z_Construct_UClass_UCameraComponent_NoRegister();
  iVar2 = (int)pUVar5->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar5->_padding_)) {
    return (UCameraComponent *)param_1;
  }
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
  iVar2 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar2) {
    return (UCameraComponent *)0x0;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar5->_padding_) {
    return (UCameraComponent *)0x0;
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  pUVar5 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14620a6af;
  }
  else if (pUVar5 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14620a6af:
    pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pUVar6 = pUVar5;
      if (bVar4) goto LAB_14620a6e3;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14620a6e3:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar6 == pUVar7) {
    local_res10 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UCameraComponent,1,0,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)param_1,(TSubclassOf<UActorComponent>)&local_res10,
               (TArray<UCameraComponent_*,TSizedDefaultAllocator<32>_> *)&local_38);
  }
  else {
    local_res18[0] = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UCameraComponent,0,0,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)param_1,(TSubclassOf<UActorComponent>)local_res18,
               (TArray<UCameraComponent_*,TSizedDefaultAllocator<32>_> *)&local_38);
  }
  iVar2 = (int)local_30;
  uVar8 = (ulonglong)(int)local_30;
  plVar1 = local_38 + uVar8;
  plVar9 = local_38;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UCameraComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      uVar8 = local_30 & 0xffffffff;
    }
    if (plVar9 == plVar1) break;
    pUVar3 = (UCameraComponent *)*plVar9;
    if ((pUVar3->_padding_ & 0x100000) != 0) {
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      return pUVar3;
    }
    plVar9 = plVar9 + 1;
  }
  if (0 < (int)uVar8) {
    pUVar3 = (UCameraComponent *)*local_38;
    FMemory::Free(local_38);
    return pUVar3;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return (UCameraComponent *)0x0;
}

// CopyObjectTemplate @ 14620c600

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
MovieSceneHelpers::CopyObjectTemplate
          (UMovieSceneSequence *param_1,FGuid *param_2,UObject *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4,int param_5)

{
  UMovieScene *this;
  FMovieSceneSpawnable *this_00;
  FMovieSceneBindingReferences *this_01;
  UMovieSceneCustomBinding *this_02;
  UMovieSceneSpawnableBindingBase *pUVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  if (((param_1 != (UMovieSceneSequence *)0x0) && (param_3 != (UObject *)0x0)) &&
     (this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(), this != (UMovieScene *)0x0)
     ) {
    this_00 = UMovieScene::FindSpawnable(this,param_2);
    if (this_00 != (FMovieSceneSpawnable *)0x0) {
      FMovieSceneSpawnable::CopyObjectTemplate(this_00,param_3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
      return true;
    }
    this_01 = (FMovieSceneBindingReferences *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
    if ((this_01 != (FMovieSceneBindingReferences *)0x0) &&
       (this_02 = FMovieSceneBindingReferences::GetCustomBinding(this_01,param_2,param_5),
       this_02 != (UMovieSceneCustomBinding *)0x0)) {
      local_18.Object = param_4->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_4->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar1 = UMovieSceneCustomBinding::AsSpawnable(this_02,&local_18);
      if (pUVar1 != (UMovieSceneSpawnableBindingBase *)0x0) {
        (**(code **)(pUVar1->_padding_ + 800))(pUVar1,param_3,param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_4->SharedReferenceCount).ReferenceController);
        return true;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// CreateTransientSharedPlaybackState @ 14620de60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<UE::MovieScene::FSharedPlaybackState,1> * __cdecl
MovieSceneHelpers::CreateTransientSharedPlaybackState
          (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *__return_storage_ptr__,
          UObject *param_1,UMovieSceneSequence *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> *paVar6;
  FMovieSceneEvaluationState *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSharedPlaybackState *this;
  FMovieSceneEvaluationState *this_00;
  undefined1 local_res8 [8];
  byte local_res10;
  TSharedRef<FMovieSceneEvaluationState,1> local_88;
  FPlaybackCapabilityPtr local_78;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  FSharedPlaybackStateCreateParams local_58;
  
  if (((param_1 == (UObject *)0x0) || (param_2 == (UMovieSceneSequence *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldContext && Sequence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneCommonHelpers.cpp"
                         ,0x482,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar1)();
    return pTVar3;
  }
  local_58.RootInstanceHandle = (FRootInstanceHandle)0xffff;
  local_58.Linker.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneEntitySystemLinker>_u_0)0x0;
  local_58.CompiledDataManager = (UMovieSceneCompiledDataManager *)0x0;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_58.PlaybackContext = param_1;
  pTVar4 = ::operator_new(0x88);
  pTVar5 = pTVar8;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSharedPlaybackState_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    UE::MovieScene::FSharedPlaybackState::FSharedPlaybackState
              ((FSharedPlaybackState *)(pTVar4 + 1),param_2,&local_58);
    pTVar5 = pTVar4;
  }
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1>::
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1>
            (__return_storage_ptr__,(FSharedPlaybackState *)(pTVar5 + 1),pTVar5);
  pTVar5 = ::operator_new(0x110);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    this = __return_storage_ptr__->Object;
    this_00 = (FMovieSceneEvaluationState *)&DAT_00000010;
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneEvaluationState___00_SharedPointerInternals__6B_
    ;
    memset(pTVar5 + 1,0,0x100);
    FMovieSceneEvaluationState::FMovieSceneEvaluationState
              ((FMovieSceneEvaluationState *)(pTVar5 + 1));
    this_00 = (FMovieSceneEvaluationState *)(pTVar5 + 1);
    if ((this_00 == (FMovieSceneEvaluationState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar1)();
      return pTVar3;
    }
    this = __return_storage_ptr__->Object;
    paVar6 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
    pTVar8 = pTVar5;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    local_res8[0] = bVar2;
    `UE::MovieScene::FSharedPlaybackState::AddCapabilityShared<FMovieSceneEvaluationState>'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_88.Object = this_00;
  local_88.SharedReferenceCount.ReferenceController = pTVar8;
  FMovieSceneEvaluationState::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<TSharedPtr<FMovieSceneEvaluationState,1>,FMovieSceneEvaluationState,TSharedRef<FMovieSceneEvaluationState,1>_>
            ((FPlaybackCapabilitiesImpl *)&this->Capabilities,&local_78,1 << (local_res10 & 0x1f),
             &local_88);
  if ((local_78.Ptr == (FMovieSceneEvaluationState *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar1)();
    return pTVar3;
  }
  pFVar7 = local_78.Ptr;
  if (local_78.StorageMode != Inline) {
    if ((local_78.StorageMode == RawPointer) || (local_78.StorageMode == SharedPointer)) {
      pFVar7 = *(FMovieSceneEvaluationState **)local_78.Ptr;
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  UE::MovieScene::FSharedPlaybackState::MaybeInitialize<FMovieSceneEvaluationState>(this,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  local_68.Object = __return_storage_ptr__->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneEvaluationState::AssignSequence(this_00,&MovieSceneSequenceID::Root,param_2,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// EmitLegacyOutOfBoundsError @ 14620f340

void __cdecl EmitLegacyOutOfBoundsError(UObject *param_1,FFrameRate param_2,double param_3)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBinding @ 14620f490

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBindingLifetimeSection @ 14620f4a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBindingLifetimeSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBindingOverrides @ 14620f4b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBindingOverrides(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBindingProxy @ 14620f4c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBindingProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBindingReferences @ 14620f4d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBindingReferences(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBoolSection @ 14620f4e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBoolSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneClock @ 14620f4f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneClock(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneDynamicBinding @ 14620f500

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneDynamicBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneFolder @ 14620f510

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneFolder(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneFrameMigration @ 14620f520

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneFrameMigration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneHookSection @ 14620f530

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneHookSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMetaData @ 14620f540

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMetaData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneNameableTrack @ 14620f550

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneNameableTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneObjectBindingID @ 14620f560

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneObjectBindingID(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScenePossessable @ 14620f570

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScenePossessable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScenePropertyBinding @ 14620f580

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScenePropertyBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSection @ 14620f590

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSectionTimingParameters @ 14620f5a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSectionTimingParameters(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSequence @ 14620f5b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSequence(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceInstanceData @ 14620f5c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceInstanceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSequencePlayer @ 14620f5d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSequencePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTickInterval @ 14620f5e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTickInterval(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTickManager @ 14620f5f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTickManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSignedObject @ 14620f600

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSignedObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnable @ 14620f610

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTrack @ 14620f620

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTrackEvaluationField @ 14620f630

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTrackEvaluationField(void)

{
  return;
}

// EvaluateSequenceCondition @ 14620fb90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
MovieSceneHelpers::EvaluateSequenceCondition
          (FGuid *param_1,FMovieSceneSequenceID *param_2,UMovieSceneCondition *param_3,
          UObject *param_4,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  
  if (param_3 == (UMovieSceneCondition *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
    return true;
  }
  pUVar4 = FWeakObjectPtr::Get(&(param_5->Object->WeakLinker).WeakPtr);
  if (*(longlong *)&pUVar4[0x23].field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = UE::MovieScene::FSequenceInstance::EvaluateCondition
                    ((FSequenceInstance *)
                     ((ulonglong)*(ushort *)&param_5->Object->RootInstanceHandle * 0x140 +
                     *(longlong *)(*(longlong *)&pUVar4[0x23].field_0x8 + 8)),param_1,param_2,
                     param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return bVar2;
}

// FOnMovieSceneSequencePlayerEvent_DelegateWrapper @ 146210ac0

void __cdecl
FOnMovieSceneSequencePlayerEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FindNearestSectionAtTime @ 1462117e0

UMovieSceneSection * __cdecl
MovieSceneHelpers::FindNearestSectionAtTime
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,FFrameNumber param_2,int param_3)

{
  int iVar1;
  UMovieSceneSection **ppUVar2;
  UMovieSceneSection *this;
  code *pcVar3;
  char cVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UMovieSceneSection *pUVar8;
  ForAnyElementType FVar9;
  char cVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  UMovieSceneSection **ppUVar15;
  uint uVar16;
  bool bVar17;
  undefined4 local_res8;
  undefined8 local_res20;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  UMovieSceneSection *local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  undefined1 local_90;
  int local_8c;
  undefined1 local_88;
  int local_84;
  undefined4 local_80;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined8 local_70;
  int aiStack_64 [3];
  <lambda_1> local_58;
  TRange<FFrameNumber> local_48;
  
  pUVar8 = (UMovieSceneSection *)0x0;
  ppUVar15 = param_1->DataPtr;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  ppUVar2 = ppUVar15 + param_1->ArrayNum;
  local_b0 = 0;
  for (; ppUVar15 != ppUVar2; ppUVar15 = ppUVar15 + 1) {
    this = *ppUVar15;
    local_a8 = this;
    if (((param_3 == -1) || (this->RowIndex == param_3)) && (this != (UMovieSceneSection *)0x0)) {
      pUVar6 = UMovieSceneTrack::StaticClass();
      pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
      if (pUVar7 != (UObject *)0x0) {
        piVar12 = *(int **)&pUVar7[3].field_0x18;
        piVar13 = piVar12 + *(int *)&pUVar7[3].field_0x20;
        for (; piVar12 != piVar13; piVar12 = piVar12 + 1) {
          if (*piVar12 == this->RowIndex) goto LAB_146211aae;
        }
        if ((pUVar7[3].field_0x11 == '\0') && (this->bIsActive != 0)) {
          local_90 = 1;
          local_8c = param_2.Value;
          local_80 = *(undefined4 *)&(local_a8->SectionRange).Value.LowerBound;
          iStack_7c = (local_a8->SectionRange).Value.LowerBound.Value.Value;
          uStack_78 = *(undefined4 *)&(local_a8->SectionRange).Value.UpperBound;
          iStack_74 = (local_a8->SectionRange).Value.UpperBound.Value.Value;
          cVar4 = (char)local_80;
          if (cVar4 == '\x02') {
            piVar13 = &iStack_7c;
            cVar10 = cVar4;
LAB_146211908:
            bVar17 = cVar10 == cVar4;
            cVar4 = cVar10;
            if (bVar17) goto LAB_146211910;
LAB_146211a12:
            if (((local_b8.Data <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 < local_b8.Data + (longlong)local_b0._4_4_ * 8
                )) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar17)) {
              pcVar3 = (code *)swi(3);
              pUVar8 = (UMovieSceneSection *)(*pcVar3)();
              return pUVar8;
            }
            iVar5 = (uint)local_b0;
            if ((uint)local_b0 == local_b0._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_b8,(int *)((longlong)&local_b0 + 4));
            }
            local_b0 = CONCAT44(local_b0._4_4_,iVar5 + 1);
            FVar9.Data = local_b8.Data;
          }
          else {
            if (param_2.Value <= iStack_7c) {
              if ((param_2.Value < iStack_7c) || (piVar13 = &iStack_7c, cVar4 != '\x01')) {
                piVar13 = &local_8c;
              }
              cVar10 = '\x01';
              goto LAB_146211908;
            }
            piVar13 = &iStack_7c;
LAB_146211910:
            if ((cVar4 != '\x02') && (*piVar13 != iStack_7c)) goto LAB_146211a12;
            local_88 = 1;
            local_84 = param_2.Value;
            cVar4 = (char)uStack_78;
            if (cVar4 == '\x02') {
              piVar13 = &iStack_74;
              cVar10 = cVar4;
LAB_146211963:
              bVar17 = cVar10 != cVar4;
              cVar4 = cVar10;
              if (bVar17) goto LAB_146211a12;
            }
            else {
              if (iStack_74 <= param_2.Value) {
                if ((iStack_74 < param_2.Value) || (piVar13 = &iStack_74, cVar4 != '\x01')) {
                  piVar13 = &local_84;
                }
                cVar10 = '\x01';
                goto LAB_146211963;
              }
              piVar13 = &iStack_74;
            }
            if ((cVar4 != '\x02') && (*piVar13 != iStack_74)) goto LAB_146211a12;
            if ((local_a0.Data <= (FScriptContainerElement *)&local_a8) &&
               (((FScriptContainerElement *)&local_a8 < local_a0.Data + (longlong)local_98._4_4_ * 8
                && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)))) {
              pcVar3 = (code *)swi(3);
              pUVar8 = (UMovieSceneSection *)(*pcVar3)();
              return pUVar8;
            }
            iVar5 = (int)local_98;
            if ((int)local_98 == local_98._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_a0,(int *)((longlong)&local_98 + 4));
            }
            local_98 = CONCAT44(local_98._4_4_,iVar5 + 1);
            FVar9.Data = local_a0.Data;
          }
          *(UMovieSceneSection **)(FVar9.Data + (longlong)iVar5 * 8) = local_a8;
        }
      }
    }
LAB_146211aae:
  }
  if ((int)local_98 == 0) {
    if ((uint)local_b0 == 0) goto LAB_146211cd5;
    local_58.Callable0.MemberFunctionPtr = (pmf_9615a320)UMovieSceneSection::GetRange;
    local_58.CallableRest.MemberFunctionPtr = (pmf_b3ab0383)TRange<FFrameNumber>::GetUpperBound;
    AlgoImpl::
    IntroSortInternal<UMovieSceneSection_*,int,_Projection<TRange<FFrameNumber>_(__cdecl_UMovieSceneSection::*)(void)const_,TRangeBound<FFrameNumber>_(__cdecl_TRange<FFrameNumber>::*)(void)const_>_::__l3::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
              ((UMovieSceneSection **)local_b8.Data,(uint)local_b0,&local_58,SortUpperBounds);
    FVar9.Data = local_b8.Data;
    iVar5 = 0;
    local_res8 = CONCAT31(local_res8._1_3_,1);
    if (0 < (int)(uint)local_b0) {
      local_70 = CONCAT44(param_2.Value,local_res8);
      uVar14 = (uint)local_b0;
      do {
        iVar1 = (uVar14 >> 1) + iVar5;
        UMovieSceneSection::GetRange
                  (*(UMovieSceneSection **)(FVar9.Data + (longlong)iVar1 * 8),&local_48);
        TRange<FFrameNumber>::GetUpperBound(&local_48);
        cVar4 = (char)local_res20;
        iVar11 = (int)((ulonglong)local_res20 >> 0x20);
        if (cVar4 == '\x02') {
          piVar13 = (int *)((longlong)&local_70 + 4);
LAB_146211bde:
          if ((*piVar13 != param_2.Value) || ((cVar4 == '\x01' && (param_2.Value == iVar11))))
          goto LAB_146211c00;
          bVar17 = true;
        }
        else {
          if (param_2.Value < iVar11) {
            piVar13 = (int *)((longlong)&local_70 + 4);
            goto LAB_146211bde;
          }
          piVar13 = aiStack_64;
          if (cVar4 == '\x01') goto LAB_146211bde;
LAB_146211c00:
          bVar17 = false;
        }
        if (!bVar17) {
          iVar5 = iVar1 + (uVar14 & 1);
        }
        uVar16 = uVar14 >> 1;
        uVar14 = uVar14 >> 1;
      } while (uVar16 != 0);
    }
    uVar14 = iVar5 - 1;
    if ((-1 < (int)uVar14) && ((int)uVar14 < (int)(uint)local_b0)) {
      uVar16 = 0;
      if ((int)uVar14 < (int)(uint)local_b0) {
        uVar16 = ~uVar14 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UMovieSceneSection *)(*pcVar3)();
        return pUVar8;
      }
      pUVar8 = *(UMovieSceneSection **)(local_b8.Data + (longlong)(int)uVar14 * 8);
      goto LAB_146211cd5;
    }
    AlgoImpl::
    IntroSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::FindNearestSectionAtTime_::__l25::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
              ((UMovieSceneSection **)local_b8.Data,(uint)local_b0,(<lambda_1>)0x1,SortLowerBounds);
    FVar9.Data = local_b8.Data;
    if (((int)(uint)local_b0 < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar9.Data = local_b8.Data, bVar17)) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UMovieSceneSection *)(*pcVar3)();
      return pUVar8;
    }
  }
  else {
    AlgoImpl::
    IntroSortInternal<UMovieSceneSection_*,int,FIdentityFunctor,bool_(__cdecl*)(UMovieSceneSection_const_*,UMovieSceneSection_const_*)>
              ((UMovieSceneSection **)local_a0.Data,(int)local_98,local_res8._0_1_,
               SortOverlappingSections);
    FVar9.Data = local_a0.Data;
    if (((int)local_98 < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar9.Data = local_a0.Data, bVar17)) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UMovieSceneSection *)(*pcVar3)();
      return pUVar8;
    }
  }
  pUVar8 = *(UMovieSceneSection **)FVar9.Data;
LAB_146211cd5:
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return pUVar8;
}

// FindNextSection @ 146211d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieSceneSection * __cdecl
MovieSceneHelpers::FindNextSection
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,FFrameNumber param_2)

{
  TRangeBound<FFrameNumber> TVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  UMovieSceneSection *pUVar7;
  ulonglong uVar8;
  UMovieSceneSection **ppUVar9;
  char cVar10;
  int iVar11;
  ForAnyElementType FVar12;
  UMovieSceneSection *pUVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  TEnumAsByte<ERangeBoundTypes::Type> TVar18;
  uint uVar19;
  ulonglong uVar20;
  UMovieSceneSection *pUVar21;
  uint *puVar22;
  ForElementType<unsigned_int> FVar23;
  int iVar24;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  FIdentityFunctor local_198 [4];
  uint local_194;
  int local_190;
  undefined1 local_18c;
  int local_188;
  undefined1 local_184;
  int local_180 [2];
  uint local_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_170;
  undefined4 local_168;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  int iStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  TPairInitializer<FFrameNumber_&&,int_const_&> local_108;
  int **local_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  int *local_c8;
  uint *local_c0;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
  *pTStack_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  iVar17 = 0x7fffffff;
  iVar24 = -1;
  pUVar7 = (UMovieSceneSection *)0x0;
  local_88._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)0x0;
  local_88._8_4_ = 0;
  local_88._12_4_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  iVar16 = param_1->ArrayNum;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_194 = 0;
  pUVar13 = pUVar7;
  if (0 < iVar16) {
    do {
      uVar15 = (uint)pUVar13;
      uVar19 = 0;
      if ((int)uVar15 < iVar16) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_1a0 = (longlong)iVar16;
        local_1a8 = (longlong)(int)uVar15;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UMovieSceneSection *)(*pcVar3)();
          return pUVar7;
        }
      }
      pUVar13 = param_1->DataPtr[(int)uVar15];
      if (pUVar13 != (UMovieSceneSection *)0x0) {
        TVar1 = (pUVar13->SectionRange).Value.LowerBound;
        TVar18 = TVar1.Type.Value;
        if (TVar18.Value != '\x02') {
          local_158 = *(undefined4 *)&(pUVar13->SectionRange).Value.LowerBound;
          iStack_154 = (pUVar13->SectionRange).Value.LowerBound.Value.Value;
          uStack_150 = *(undefined4 *)&(pUVar13->SectionRange).Value.UpperBound;
          iStack_14c = (pUVar13->SectionRange).Value.UpperBound.Value.Value;
          local_18c = 1;
          local_188 = param_2.Value;
          cVar6 = (char)local_158;
          if (cVar6 == '\x02') {
            piVar14 = &iStack_154;
            cVar10 = cVar6;
LAB_146211e8c:
            bVar5 = cVar10 == cVar6;
            cVar6 = cVar10;
            if (bVar5) goto LAB_146211e90;
          }
          else {
            if (param_2.Value <= iStack_154) {
              if ((param_2.Value < iStack_154) || (piVar14 = &iStack_154, cVar6 != '\x01')) {
                piVar14 = &local_188;
              }
              cVar10 = '\x01';
              goto LAB_146211e8c;
            }
            piVar14 = &iStack_154;
LAB_146211e90:
            if ((cVar6 == '\x02') || (*piVar14 == iStack_154)) {
              local_184 = 1;
              local_180[0] = param_2.Value;
              cVar6 = (char)uStack_150;
              if (cVar6 == '\x02') {
                piVar14 = &iStack_14c;
                cVar10 = cVar6;
LAB_146211ee5:
                bVar5 = cVar10 != cVar6;
                cVar6 = cVar10;
                if (bVar5) goto LAB_146211ef6;
              }
              else {
                if (iStack_14c <= param_2.Value) {
                  if ((iStack_14c < param_2.Value) || (piVar14 = &iStack_14c, cVar6 != '\x01')) {
                    piVar14 = local_180;
                  }
                  cVar10 = '\x01';
                  goto LAB_146211ee5;
                }
                piVar14 = &iStack_14c;
              }
              if ((cVar6 == '\x02') || (*piVar14 == iStack_14c)) goto LAB_146211f2f;
            }
          }
LAB_146211ef6:
          local_190 = (int)TVar1.Value.Value;
          if (TVar18.Value != '\x01') {
            local_190 = local_190 + 1;
          }
          local_c8 = &local_190;
          local_c0 = &local_194;
          TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FFrameNumber_&&,int_const_&>_>
                    ((TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
                      *)local_88,&local_108,(bool *)&local_c8);
        }
      }
LAB_146211f2f:
      iVar16 = param_1->ArrayNum;
      local_194 = local_194 + 1;
      pUVar13 = (UMovieSceneSection *)(ulonglong)local_194;
    } while ((int)local_194 < iVar16);
  }
  local_108.Value = (int *)local_198;
  local_f8 = &local_108.Value;
  if (0 < local_88._8_4_ - local_54) {
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_88);
    uVar4 = local_88._0_8_;
    iVar16 = local_88._8_4_ - local_54;
    if ((iVar16 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UMovieSceneSection *)(*pcVar3)();
      return pUVar7;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)uVar4,iVar16,local_198[0],
               (FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>
                *)&local_f8);
  }
  uVar19 = local_40;
  uVar20 = (ulonglong)local_40;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar19 == 0) goto LAB_14621206c;
  uVar15 = uVar19;
  if (uVar19 < 2) {
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      uVar15 = 0;
      goto LAB_14621200d;
    }
  }
  else {
LAB_14621200d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar15,4);
  }
  if (0 < (int)uVar19) {
    pUVar13 = pUVar7;
    do {
      FVar12.Data = (FScriptContainerElement *)local_50;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FVar12.Data = local_48.Data;
      }
      uVar8 = (ulonglong)pUVar13 & (longlong)(int)uVar19 - 1U;
      pUVar13 = (UMovieSceneSection *)((longlong)&pUVar13->_padding_ + 1);
      *(undefined4 *)((longlong)FVar12.Data + uVar8 * 4) = 0xffffffff;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
LAB_14621206c:
  iVar16 = 1;
  if (local_40 != 0) {
    uStack_174 = 1;
    local_178 = 0;
    local_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    pTStack_170 = local_e8.Array;
    local_168 = 0xffffffff;
    uStack_164 = 0;
    uStack_160 = 0;
    pUVar13 = pUVar7;
    if (local_60 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_68;
      }
      uVar19 = *(uint *)FVar23;
      pUVar21 = pUVar7;
      while (uVar19 == 0) {
        uStack_160 = (int)pUVar21 + 0x20;
        pUVar21 = (UMovieSceneSection *)(ulonglong)uStack_160;
        iVar11 = (int)pUVar13;
        local_178 = iVar11 + 1;
        pUVar13 = (UMovieSceneSection *)(ulonglong)local_178;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_178)
        goto LAB_14621211e;
        uVar19 = ((uint *)((longlong)FVar23 + 4))[iVar11];
        local_168 = 0xffffffff;
      }
      uStack_174 = -uVar19 & uVar19;
      uVar20 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_164 = (int)lVar2 + -1 + uStack_160;
      pUVar13 = (UMovieSceneSection *)(ulonglong)uStack_164;
      if ((int)local_60 < (int)uStack_164) {
LAB_14621211e:
        pUVar13 = (UMovieSceneSection *)(ulonglong)local_60;
        uStack_164 = local_60;
      }
    }
    local_168 = 0xffffffff;
    local_f0 = (longlong *)local_88;
    local_e8._padding_ = CONCAT44(uStack_174,local_178);
    local_e8.CurrentBitIndex = uStack_164;
    local_e8.UnvisitedBitMask = 0xffffffff;
    local_e8._28_4_ = uStack_15c;
    local_e8.BaseBitIndex = uStack_160;
    if ((int)pUVar13 < (int)local_60) {
      do {
        puVar22 = (uint *)((longlong)(int)pUVar13 * 0x10 + *local_f0);
        uVar19 = local_40 - 1 & *puVar22;
        puVar22[3] = uVar19;
        FVar12.Data = (FScriptContainerElement *)local_50;
        if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
          FVar12.Data = local_48.Data;
        }
        uVar20 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar19;
        puVar22[2] = *(uint *)((longlong)FVar12.Data + uVar20 * 4);
        *(int *)((longlong)FVar12.Data + uVar20 * 4) = (int)pUVar13;
        local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
        pUVar13 = (UMovieSceneSection *)(ulonglong)(uint)local_e8.CurrentBitIndex;
      } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
    }
  }
  TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_b8,
             (TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
              *)local_88);
  local_118 = (TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
               *)local_88;
  local_110 = 0;
  stack0xfffffffffffffec8 = local_b8._16_16_;
  local_148 = (longlong *)local_b8._0_8_;
  auStack_140._0_8_ = local_b8._8_8_;
  local_128 = local_98;
  pTStack_120 = pTStack_90;
  uVar20 = local_b8._24_8_ >> 0x20;
  uVar19 = local_b8._28_4_;
  if ((int)uVar19 < *(int *)(local_b8._16_8_ + 0x18)) {
    do {
      iVar11 = *(int *)(*local_148 + (longlong)(int)uVar20 * 0x10);
      if (param_2.Value < iVar11) {
        iVar11 = iVar11 - param_2.Value;
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        if (iVar11 < iVar17) {
          iVar24 = *(int *)(*local_148 + 4 + (longlong)(int)uVar19 * 0x10);
          iVar17 = iVar11;
        }
      }
      uStack_130 = uStack_130 & ~auStack_140._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
      uVar20 = (ulonglong)uStack_12c;
      uVar19 = uStack_12c;
    } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
    if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
      uVar19 = *(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34;
      if (3 < uVar19) {
        uVar20 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar16 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar19) && (local_118->HashSize < iVar16)) || (iVar16 < local_118->HashSize)) {
        local_118->HashSize = iVar16;
        TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
        ::Rehash(local_118);
      }
    }
    if (iVar24 != -1) {
      ppUVar9 = TArrayView<UMovieSceneSection_*_const,int>::operator[](param_1,iVar24);
      pUVar7 = *ppUVar9;
    }
  }
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return pUVar7;
}

// FindPreviousSection @ 146212640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieSceneSection * __cdecl
MovieSceneHelpers::FindPreviousSection
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,FFrameNumber param_2)

{
  TRangeBound<FFrameNumber> TVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  UMovieSceneSection *pUVar7;
  ulonglong uVar8;
  UMovieSceneSection **ppUVar9;
  char cVar10;
  int iVar11;
  ForAnyElementType FVar12;
  UMovieSceneSection *pUVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  TEnumAsByte<ERangeBoundTypes::Type> TVar18;
  uint uVar19;
  ulonglong uVar20;
  UMovieSceneSection *pUVar21;
  uint *puVar22;
  ForElementType<unsigned_int> FVar23;
  int iVar24;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  FIdentityFunctor local_198 [4];
  uint local_194;
  int local_190;
  undefined1 local_18c;
  int local_188;
  undefined1 local_184;
  int local_180 [2];
  uint local_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_170;
  undefined4 local_168;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  int iStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  TPairInitializer<FFrameNumber_&&,int_const_&> local_108;
  int **local_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  int *local_c8;
  uint *local_c0;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
  *pTStack_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  iVar17 = 0x7fffffff;
  iVar24 = -1;
  pUVar7 = (UMovieSceneSection *)0x0;
  local_88._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)0x0;
  local_88._8_4_ = 0;
  local_88._12_4_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  iVar16 = param_1->ArrayNum;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_194 = 0;
  pUVar13 = pUVar7;
  if (0 < iVar16) {
    do {
      uVar15 = (uint)pUVar13;
      uVar19 = 0;
      if ((int)uVar15 < iVar16) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_1a0 = (longlong)iVar16;
        local_1a8 = (longlong)(int)uVar15;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UMovieSceneSection *)(*pcVar3)();
          return pUVar7;
        }
      }
      pUVar13 = param_1->DataPtr[(int)uVar15];
      if (pUVar13 != (UMovieSceneSection *)0x0) {
        TVar1 = (pUVar13->SectionRange).Value.LowerBound;
        TVar18 = TVar1.Type.Value;
        if (TVar18.Value != '\x02') {
          local_158 = *(undefined4 *)&(pUVar13->SectionRange).Value.LowerBound;
          iStack_154 = (pUVar13->SectionRange).Value.LowerBound.Value.Value;
          uStack_150 = *(undefined4 *)&(pUVar13->SectionRange).Value.UpperBound;
          iStack_14c = (pUVar13->SectionRange).Value.UpperBound.Value.Value;
          local_18c = 1;
          local_188 = param_2.Value;
          cVar6 = (char)local_158;
          if (cVar6 == '\x02') {
            piVar14 = &iStack_154;
            cVar10 = cVar6;
LAB_14621279c:
            bVar5 = cVar10 == cVar6;
            cVar6 = cVar10;
            if (bVar5) goto LAB_1462127a0;
          }
          else {
            if (param_2.Value <= iStack_154) {
              if ((param_2.Value < iStack_154) || (piVar14 = &iStack_154, cVar6 != '\x01')) {
                piVar14 = &local_188;
              }
              cVar10 = '\x01';
              goto LAB_14621279c;
            }
            piVar14 = &iStack_154;
LAB_1462127a0:
            if ((cVar6 == '\x02') || (*piVar14 == iStack_154)) {
              local_184 = 1;
              local_180[0] = param_2.Value;
              cVar6 = (char)uStack_150;
              if (cVar6 == '\x02') {
                piVar14 = &iStack_14c;
                cVar10 = cVar6;
LAB_1462127f5:
                bVar5 = cVar10 != cVar6;
                cVar6 = cVar10;
                if (bVar5) goto LAB_146212806;
              }
              else {
                if (iStack_14c <= param_2.Value) {
                  if ((iStack_14c < param_2.Value) || (piVar14 = &iStack_14c, cVar6 != '\x01')) {
                    piVar14 = local_180;
                  }
                  cVar10 = '\x01';
                  goto LAB_1462127f5;
                }
                piVar14 = &iStack_14c;
              }
              if ((cVar6 == '\x02') || (*piVar14 == iStack_14c)) goto LAB_14621283f;
            }
          }
LAB_146212806:
          local_190 = (int)TVar1.Value.Value;
          if (TVar18.Value != '\x01') {
            local_190 = local_190 + 1;
          }
          local_c8 = &local_190;
          local_c0 = &local_194;
          TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FFrameNumber_&&,int_const_&>_>
                    ((TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
                      *)local_88,&local_108,(bool *)&local_c8);
        }
      }
LAB_14621283f:
      iVar16 = param_1->ArrayNum;
      local_194 = local_194 + 1;
      pUVar13 = (UMovieSceneSection *)(ulonglong)local_194;
    } while ((int)local_194 < iVar16);
  }
  local_108.Value = (int *)local_198;
  local_f8 = &local_108.Value;
  if (0 < local_88._8_4_ - local_54) {
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_88);
    uVar4 = local_88._0_8_;
    iVar16 = local_88._8_4_ - local_54;
    if ((iVar16 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UMovieSceneSection *)(*pcVar3)();
      return pUVar7;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)uVar4,iVar16,local_198[0],
               (FElementCompareClass<TSortableMapBase<FFrameNumber,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>_>::FKeyComparisonClass<TLess<FFrameNumber>_>_>
                *)&local_f8);
  }
  uVar19 = local_40;
  uVar20 = (ulonglong)local_40;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar19 == 0) goto LAB_14621297c;
  uVar15 = uVar19;
  if (uVar19 < 2) {
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      uVar15 = 0;
      goto LAB_14621291d;
    }
  }
  else {
LAB_14621291d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar15,4);
  }
  if (0 < (int)uVar19) {
    pUVar13 = pUVar7;
    do {
      FVar12.Data = (FScriptContainerElement *)local_50;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FVar12.Data = local_48.Data;
      }
      uVar8 = (ulonglong)pUVar13 & (longlong)(int)uVar19 - 1U;
      pUVar13 = (UMovieSceneSection *)((longlong)&pUVar13->_padding_ + 1);
      *(undefined4 *)((longlong)FVar12.Data + uVar8 * 4) = 0xffffffff;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
LAB_14621297c:
  iVar16 = 1;
  if (local_40 != 0) {
    uStack_174 = 1;
    local_178 = 0;
    local_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    pTStack_170 = local_e8.Array;
    local_168 = 0xffffffff;
    uStack_164 = 0;
    uStack_160 = 0;
    pUVar13 = pUVar7;
    if (local_60 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_68;
      }
      uVar19 = *(uint *)FVar23;
      pUVar21 = pUVar7;
      while (uVar19 == 0) {
        uStack_160 = (int)pUVar21 + 0x20;
        pUVar21 = (UMovieSceneSection *)(ulonglong)uStack_160;
        iVar11 = (int)pUVar13;
        local_178 = iVar11 + 1;
        pUVar13 = (UMovieSceneSection *)(ulonglong)local_178;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_178)
        goto LAB_146212a2e;
        uVar19 = ((uint *)((longlong)FVar23 + 4))[iVar11];
        local_168 = 0xffffffff;
      }
      uStack_174 = -uVar19 & uVar19;
      uVar20 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_164 = (int)lVar2 + -1 + uStack_160;
      pUVar13 = (UMovieSceneSection *)(ulonglong)uStack_164;
      if ((int)local_60 < (int)uStack_164) {
LAB_146212a2e:
        pUVar13 = (UMovieSceneSection *)(ulonglong)local_60;
        uStack_164 = local_60;
      }
    }
    local_168 = 0xffffffff;
    local_f0 = (longlong *)local_88;
    local_e8._padding_ = CONCAT44(uStack_174,local_178);
    local_e8.CurrentBitIndex = uStack_164;
    local_e8.UnvisitedBitMask = 0xffffffff;
    local_e8._28_4_ = uStack_15c;
    local_e8.BaseBitIndex = uStack_160;
    if ((int)pUVar13 < (int)local_60) {
      do {
        puVar22 = (uint *)((longlong)(int)pUVar13 * 0x10 + *local_f0);
        uVar19 = local_40 - 1 & *puVar22;
        puVar22[3] = uVar19;
        FVar12.Data = (FScriptContainerElement *)local_50;
        if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
          FVar12.Data = local_48.Data;
        }
        uVar20 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar19;
        puVar22[2] = *(uint *)((longlong)FVar12.Data + uVar20 * 4);
        *(int *)((longlong)FVar12.Data + uVar20 * 4) = (int)pUVar13;
        local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
        pUVar13 = (UMovieSceneSection *)(ulonglong)(uint)local_e8.CurrentBitIndex;
      } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
    }
  }
  TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_b8,
             (TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
              *)local_88);
  local_118 = (TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
               *)local_88;
  local_110 = 0;
  stack0xfffffffffffffec8 = local_b8._16_16_;
  local_148 = (longlong *)local_b8._0_8_;
  auStack_140._0_8_ = local_b8._8_8_;
  local_128 = local_98;
  pTStack_120 = pTStack_90;
  uVar20 = local_b8._24_8_ >> 0x20;
  uVar19 = local_b8._28_4_;
  if ((int)uVar19 < *(int *)(local_b8._16_8_ + 0x18)) {
    do {
      iVar11 = *(int *)(*local_148 + (longlong)(int)uVar20 * 0x10);
      if (iVar11 <= param_2.Value) {
        iVar11 = iVar11 - param_2.Value;
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        if (iVar11 < iVar17) {
          iVar24 = *(int *)(*local_148 + 4 + (longlong)(int)uVar19 * 0x10);
          iVar17 = iVar11;
        }
      }
      uStack_130 = uStack_130 & ~auStack_140._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
      uVar20 = (ulonglong)uStack_12c;
      uVar19 = uStack_12c;
    } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
    if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
      uVar19 = *(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34;
      if (3 < uVar19) {
        uVar20 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar16 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar19) && (local_118->HashSize < iVar16)) || (iVar16 < local_118->HashSize)) {
        local_118->HashSize = iVar16;
        TSet<TTuple<FFrameNumber,int>,TDefaultMapHashableKeyFuncs<FFrameNumber,int,0>,FDefaultSetAllocator>
        ::Rehash(local_118);
      }
    }
    if (iVar24 != -1) {
      ppUVar9 = TArrayView<UMovieSceneSection_*_const,int>::operator[](param_1,iVar24);
      pUVar7 = *ppUVar9;
    }
  }
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFrameNumber,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return pUVar7;
}

// FindSectionAtTime @ 146212c50

UMovieSceneSection * __cdecl
MovieSceneHelpers::FindSectionAtTime
          (TArrayView<UMovieSceneSection_*_const,int> *param_1,FFrameNumber param_2,int param_3)

{
  int *piVar1;
  uchar uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UMovieSceneSection *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FFrameNumber *pFVar9;
  TRangeBound<FFrameNumber> *pTVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FFrameNumber local_24;
  TRangeBound<FFrameNumber> local_20;
  
  uVar13 = 0;
  iVar12 = param_1->ArrayNum;
  if (0 < iVar12) {
    lVar14 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar13 < iVar12) {
        uVar5 = ~uVar13 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UMovieSceneSection *)(*pcVar3)();
        return pUVar6;
      }
      pUVar6 = *(UMovieSceneSection **)(lVar14 + (longlong)param_1->DataPtr);
      if ((param_3 != -1) && (pUVar6->RowIndex != param_3)) goto LAB_146212db2;
      uVar2 = (pUVar6->SectionRange).Value.LowerBound.Type.Value;
      local_24.Value = param_2.Value;
      if (uVar2 == '\x02') {
LAB_146212d2d:
        pTVar10 = &(pUVar6->SectionRange).Value.UpperBound;
        local_20.Type.Value = '\x01';
        uVar2 = (pTVar10->Type).Value;
        local_20.Value.Value = param_2.Value;
        if (uVar2 != '\x02') {
          iVar12 = (pUVar6->SectionRange).Value.UpperBound.Value.Value;
          if (iVar12 <= param_2.Value) {
            if (iVar12 < param_2.Value) {
              pTVar10 = &local_20;
            }
            if (uVar2 != '\x01') goto LAB_146212db2;
          }
          if ((pTVar10->Value).Value != (pUVar6->SectionRange).Value.UpperBound.Value.Value)
          goto LAB_146212db2;
        }
        pUVar7 = UMovieSceneTrack::StaticClass();
        pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar6,pUVar7);
        if (pUVar8 != (UObject *)0x0) {
          piVar11 = *(int **)&pUVar8[3].field_0x18;
          piVar1 = piVar11 + *(int *)&pUVar8[3].field_0x20;
          for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
            if (*piVar11 == pUVar6->RowIndex) goto LAB_146212db2;
          }
          if ((pUVar8[3].field_0x11 == '\0') && (pUVar6->bIsActive != 0)) {
            return pUVar6;
          }
        }
      }
      else {
        iVar12 = (pUVar6->SectionRange).Value.LowerBound.Value.Value;
        if (iVar12 < param_2.Value) {
LAB_146212d18:
          pFVar9 = &(pUVar6->SectionRange).Value.LowerBound.Value;
LAB_146212d1f:
          if (pFVar9->Value == (pUVar6->SectionRange).Value.LowerBound.Value.Value)
          goto LAB_146212d2d;
        }
        else if (param_2.Value < iVar12) {
          pFVar9 = &local_24;
          if (uVar2 == '\x01') goto LAB_146212d1f;
        }
        else if (uVar2 == '\x01') goto LAB_146212d18;
      }
LAB_146212db2:
      iVar12 = param_1->ArrayNum;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar13 < iVar12);
  }
  return (UMovieSceneSection *)0x0;
}

// FixupConsecutiveBlendingSections @ 146213750

bool __cdecl
MovieSceneHelpers::FixupConsecutiveBlendingSections
          (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1,
          UMovieSceneSection *param_2,bool param_3,bool param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  TRangeBound<FFrameNumber> TVar3;
  code *pcVar4;
  uchar uVar5;
  FFrameNumber *pFVar6;
  uchar uVar7;
  TRangeBound<FFrameNumber> *pTVar8;
  undefined3 uVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  TRangeBound<FFrameNumber> TVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 uVar15;
  TEnumAsByte<ERangeBoundTypes::Type> TVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  uint uVar30;
  ulonglong uVar31;
  FFrameNumber FVar32;
  <lambda_1> local_res10 [8];
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  ForAnyElementType local_108;
  undefined8 local_100;
  longlong local_f8;
  uint local_f0;
  FScriptContainerElement *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int iStack_ac;
  TRangeBound<FFrameNumber> local_a8;
  TRangeBound<FFrameNumber> local_a0;
  FScriptContainerElement *local_98;
  longlong local_90;
  undefined8 uStack_88;
  char local_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  int iStack_7c;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  UMovieSceneSection *local_70;
  TRangeBound<FFrameNumber> TStack_68;
  undefined8 uStack_60;
  UMovieSceneSection *local_58;
  TRangeBound<FFrameNumber> TStack_50;
  undefined8 local_48;
  ulonglong uVar29;
  
  uVar5 = (param_2->SectionRange).Value.LowerBound.Type.Value;
  pFVar6 = &(param_2->SectionRange).Value.LowerBound.Value;
  TVar12 = (param_2->SectionRange).Value.LowerBound;
  iVar22 = pFVar6->Value;
  iVar19 = pFVar6->Value;
  iVar18 = pFVar6->Value;
  pTVar8 = &(param_2->SectionRange).Value.UpperBound;
  uVar7 = (pTVar8->Type).Value;
  uVar13 = *(undefined4 *)pTVar8;
  uVar10 = *(undefined4 *)pTVar8;
  pFVar6 = &(param_2->SectionRange).Value.UpperBound.Value;
  uVar11 = (undefined2)pFVar6->Value;
  uStack_10a = *(undefined1 *)((longlong)&(param_2->SectionRange).Value.UpperBound.Value.Value + 2);
  uVar9 = (undefined3)pFVar6->Value;
  uVar15 = *(undefined1 *)((longlong)&(param_2->SectionRange).Value.UpperBound.Value.Value + 3);
  iVar25 = pFVar6->Value;
  if ((uVar5 == '\x02') || (uVar7 == '\x02')) {
    uStack_10c = (undefined1)uVar9;
    uStack_10b = (undefined1)((uint3)uVar9 >> 8);
    uStack_10a = (undefined1)((uint3)uVar9 >> 0x10);
  }
  else {
    if ((uVar5 == '\x02') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return (bool)uVar15;
    }
    uStack_10c = (undefined1)uVar11;
    uStack_10b = (undefined1)((ushort)uVar11 >> 8);
    if (iVar25 <= iVar18) {
      return false;
    }
  }
  pFVar24 = (param_1->AllocatorInstance).Data;
  pFVar23 = pFVar24;
  do {
    if (pFVar23 == pFVar24 + (longlong)param_1->ArrayNum * 8) {
LAB_14621397a:
      FVar28.Data = (FScriptContainerElement *)0x0;
      bVar14 = false;
      if (param_4) {
        uStack_60 = CONCAT17(uVar15,CONCAT16(uStack_10a,
                                             CONCAT15(uStack_10b,CONCAT14(uStack_10c,uVar13))));
        local_e8 = (FScriptContainerElement *)0x0;
        pFVar23 = (param_1->AllocatorInstance).Data;
        pFVar24 = pFVar23 + (longlong)param_1->ArrayNum * 8;
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = 0;
        local_70 = param_2;
        local_58 = param_2;
        local_48 = uStack_60;
        TStack_68 = TVar12;
        TStack_50 = TVar12;
        for (; pFVar23 != pFVar24; pFVar23 = pFVar23 + 8) {
          bVar14 = `MovieSceneHelpers::FixupConsecutiveBlendingSections'::__l63::<lambda_1>::
                   operator()(&local_58,*(UMovieSceneSection **)pFVar23);
          if (bVar14) {
            if (((FVar28.Data <= pFVar23) && (pFVar23 < FVar28.Data + (longlong)local_100._4_4_ * 8)
                ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), FVar28.Data = local_108.Data, bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            if ((uint)local_100 == local_100._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_108,(int *)((longlong)&local_100 + 4));
              local_100 = CONCAT44(local_100._4_4_,iVar18);
              FVar28.Data = local_108.Data;
            }
            lVar20 = (longlong)(int)(uint)local_100;
            local_100 = CONCAT44(local_100._4_4_,(uint)local_100 + 1);
            *(undefined8 *)(FVar28.Data + lVar20 * 8) = *(undefined8 *)pFVar23;
            FVar28.Data = local_108.Data;
          }
        }
        uVar21 = (ulonglong)(int)(uint)local_100;
        local_f0 = (uint)local_100;
        pFVar24 = FVar28.Data + uVar21 * 8;
        local_e8 = FVar28.Data;
        local_98 = pFVar24;
        while( true ) {
          pFVar23 = local_e8;
          if ((uint)local_100 != (int)uVar21) {
            local_res10[0] = (<lambda_1>)0x0;
            `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar23 == pFVar24) break;
          pFVar2 = (param_1->AllocatorInstance).Data;
          local_f8 = *(longlong *)pFVar23;
          if (((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          iVar18 = param_1->ArrayNum;
          if (iVar18 != 0) {
            pFVar24 = (param_1->AllocatorInstance).Data;
            uVar21 = 0;
            bVar14 = *(longlong *)pFVar24 != local_f8;
            lVar20 = local_f8;
            uVar29 = uVar21;
            uVar31 = uVar21;
            do {
              uVar26 = (uint)uVar29;
              uVar27 = uVar26;
              do {
                uVar21 = uVar21 + 1;
                uVar27 = uVar27 + 1;
                uVar29 = (ulonglong)uVar27;
                if ((longlong)iVar18 <= (longlong)uVar21) break;
              } while (bVar14 == (*(longlong *)(pFVar24 + uVar21 * 8) != lVar20));
              if (bVar14 != false) {
                uVar30 = (uint)uVar31;
                if (uVar30 != uVar26) {
                  memmove(pFVar24 + (longlong)(int)uVar30 * 8,pFVar24 + (longlong)(int)uVar26 * 8,
                          (longlong)(int)(uVar27 - uVar26) << 3);
                  lVar20 = local_f8;
                }
                uVar31 = (ulonglong)(uVar30 + (uVar27 - uVar26));
              }
              bVar14 = (bool)(bVar14 ^ 1);
            } while ((longlong)uVar21 < (longlong)iVar18);
            param_1->ArrayNum = (int)uVar31;
            pFVar24 = local_98;
            pFVar23 = local_e8;
          }
          uVar21 = (ulonglong)local_f0;
          local_e8 = pFVar23 + 8;
        }
        bVar14 = 0 < (int)(uint)local_100;
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data);
        }
      }
      AlgoImpl::
      IntroSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::SortConsecutiveSections_::__l2::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
                ((UMovieSceneSection **)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                 local_res10[0],SortLowerBounds);
      return bVar14;
    }
    if (*(UMovieSceneSection **)pFVar23 == param_2) {
      iVar18 = (int)((longlong)pFVar23 - (longlong)pFVar24 >> 3);
      if (iVar18 == -1) goto LAB_14621397a;
      iVar25 = iVar18 + -1;
      if ((iVar25 < 0) || (param_1->ArrayNum <= iVar25)) {
        if (param_3) goto LAB_14621397a;
        (param_2->Easing).AutoEaseInDuration = 0;
      }
      else {
        if ((iVar25 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        plVar1 = *(longlong **)((param_1->AllocatorInstance).Data + (longlong)iVar25 * 8);
        if (param_3) {
          lVar20 = plVar1[0x16];
          if ((char)lVar20 != '\x02') {
            uVar27 = (uint)lVar20 & 0xff;
            local_e0 = lVar20;
            if ((char)lVar20 == '\x01') {
              if ((uVar27 == 2) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar14)) {
                pcVar4 = (code *)swi(3);
                uVar15 = (*pcVar4)();
                return (bool)uVar15;
              }
              iVar18 = local_e0._4_4_;
            }
            else {
              if ((uVar27 == 2) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar14)) {
                pcVar4 = (code *)swi(3);
                uVar15 = (*pcVar4)();
                return (bool)uVar15;
              }
              iVar18 = local_e0._4_4_ + 1;
            }
            if ((uVar7 == '\x02') &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            if (CONCAT13(uVar15,CONCAT12(uStack_10a,CONCAT11(uStack_10b,uStack_10c))) <= iVar18)
            goto LAB_14621397a;
          }
          (**(code **)(*plVar1 + 0x2d8))
                    (plVar1,CONCAT17(uVar15,CONCAT16(uStack_10a,
                                                     CONCAT15(uStack_10b,CONCAT14(uStack_10c,uVar10)
                                                             ))));
          goto LAB_14621397a;
        }
        local_90 = plVar1[0x16];
        uStack_88 = plVar1[0x17];
        if (((char)plVar1[0x17] == '\x02') &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        if ((uVar5 == '\x02') &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        if (iVar19 - uStack_88._4_4_ < 1) {
          if ((param_2->SectionRange).Value.UpperBound.Type.Value != '\x02') {
            lVar20 = plVar1[0x17];
            if ((char)lVar20 != '\x02') {
              uVar27 = (uint)lVar20 & 0xff;
              local_c8 = lVar20;
              if ((char)lVar20 == '\x01') {
                if ((uVar27 == 2) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type != ERangeBoundTypes::Open",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                        ,99,L""), bVar14)) {
                  pcVar4 = (code *)swi(3);
                  uVar15 = (*pcVar4)();
                  return (bool)uVar15;
                }
                iVar25 = local_c8._4_4_ + 1;
              }
              else {
                if ((uVar27 == 2) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type != ERangeBoundTypes::Open",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                        ,99,L""), bVar14)) {
                  pcVar4 = (code *)swi(3);
                  uVar15 = (*pcVar4)();
                  return (bool)uVar15;
                }
                iVar25 = local_c8._4_4_;
              }
              TVar3 = (param_2->SectionRange).Value.UpperBound;
              TVar16 = TVar3.Type.Value;
              FVar32 = TVar3.Value.Value;
              if (TVar16.Value == '\x01') {
                FVar32.Value = FVar32.Value + 1;
              }
              else if ((TVar16.Value == '\x02') &&
                      (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Type != ERangeBoundTypes::Open",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                           ,99,L""), bVar14)) {
                pcVar4 = (code *)swi(3);
                uVar15 = (*pcVar4)();
                return (bool)uVar15;
              }
              iVar19 = (param_2->Easing).AutoEaseOutDuration;
              iVar25 = FVar32.Value - iVar25;
              if (iVar25 < 0) {
                iVar25 = 0;
              }
              if (iVar25 < iVar19) {
                iVar19 = iVar25;
              }
              (param_2->Easing).AutoEaseOutDuration = iVar19;
              iVar19 = (param_2->Easing).ManualEaseOutDuration;
              if (iVar25 < iVar19) {
                iVar19 = iVar25;
              }
              (param_2->Easing).ManualEaseOutDuration = iVar19;
            }
          }
          if ((param_2->SectionRange).Value.LowerBound.Type.Value != '\x02') {
            lVar20 = plVar1[0x16];
            if ((char)lVar20 != '\x02') {
              uVar27 = (uint)lVar20 & 0xff;
              local_c0 = lVar20;
              if ((char)lVar20 == '\x01') {
                if ((uVar27 == 2) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type != ERangeBoundTypes::Open",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                        ,99,L""), bVar14)) {
                  pcVar4 = (code *)swi(3);
                  uVar15 = (*pcVar4)();
                  return (bool)uVar15;
                }
                iVar25 = local_c0._4_4_;
              }
              else {
                if ((uVar27 == 2) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type != ERangeBoundTypes::Open",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                        ,99,L""), bVar14)) {
                  pcVar4 = (code *)swi(3);
                  uVar15 = (*pcVar4)();
                  return (bool)uVar15;
                }
                iVar25 = local_c0._4_4_ + 1;
              }
              TVar3 = (param_2->SectionRange).Value.LowerBound;
              FVar32 = TVar3.Value.Value;
              TVar16 = TVar3.Type.Value;
              if (TVar16.Value != '\x01') {
                if ((TVar16.Value == '\x02') &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type != ERangeBoundTypes::Open",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                        ,99,L""), bVar14)) {
                  pcVar4 = (code *)swi(3);
                  uVar15 = (*pcVar4)();
                  return (bool)uVar15;
                }
                FVar32.Value = FVar32.Value + 1;
              }
              iVar25 = FVar32.Value - iVar25;
              if (iVar25 < 0) {
                iVar25 = 0;
              }
              iVar19 = (int)plVar1[0xf];
              if (iVar25 < (int)plVar1[0xf]) {
                iVar19 = iVar25;
              }
              *(int *)(plVar1 + 0xf) = iVar19;
              iVar19 = *(int *)((longlong)plVar1 + 0x94);
              if (iVar25 < *(int *)((longlong)plVar1 + 0x94)) {
                iVar19 = iVar25;
              }
              *(int *)((longlong)plVar1 + 0x94) = iVar19;
            }
          }
        }
        else {
          if ((param_2->Easing).bManualEaseIn == false) {
            iVar25 = (param_2->Easing).AutoEaseInDuration;
          }
          else {
            iVar25 = (param_2->Easing).ManualEaseInDuration;
          }
          if ((uVar5 == '\x02') &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          lVar20 = plVar1[0x16];
          iVar22 = iVar22 + iVar25;
          local_d0 = local_d0 & 0xffffff00;
          iStack_cc = iVar22;
          if ((char)lVar20 != '\x02') {
            uVar27 = (uint)lVar20 & 0xff;
            local_d8 = lVar20;
            if ((char)lVar20 == '\x01') {
              if ((uVar27 == 2) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar14)) {
                pcVar4 = (code *)swi(3);
                uVar15 = (*pcVar4)();
                return (bool)uVar15;
              }
              iVar25 = local_d8._4_4_;
            }
            else {
              if ((uVar27 == 2) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar14)) {
                pcVar4 = (code *)swi(3);
                uVar15 = (*pcVar4)();
                return (bool)uVar15;
              }
              iVar25 = local_d8._4_4_ + 1;
            }
            if (iVar22 <= iVar25) goto LAB_146213d46;
          }
          (**(code **)(*plVar1 + 0x2d8))(plVar1,CONCAT44(iStack_cc,local_d0));
        }
      }
LAB_146213d46:
      iVar18 = iVar18 + 1;
      if ((iVar18 < 0) || (param_1->ArrayNum <= iVar18)) {
        (param_2->Easing).AutoEaseOutDuration = 0;
        goto LAB_14621397a;
      }
      if ((iVar18 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      plVar1 = *(longlong **)((param_1->AllocatorInstance).Data + (longlong)iVar18 * 8);
      if ((uVar7 == '\x02') &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      local_80 = (char)plVar1[0x16];
      uStack_7f = *(undefined1 *)((longlong)plVar1 + 0xb1);
      uStack_7e = *(undefined1 *)((longlong)plVar1 + 0xb2);
      uStack_7d = *(undefined1 *)((longlong)plVar1 + 0xb3);
      iStack_7c = *(int *)((longlong)plVar1 + 0xb4);
      uStack_78 = (undefined1)plVar1[0x17];
      uStack_77 = *(undefined1 *)((longlong)plVar1 + 0xb9);
      uStack_76 = *(undefined1 *)((longlong)plVar1 + 0xba);
      uStack_75 = *(undefined1 *)((longlong)plVar1 + 0xbb);
      uStack_74 = *(undefined1 *)((longlong)plVar1 + 0xbc);
      uStack_73 = *(undefined1 *)((longlong)plVar1 + 0xbd);
      uStack_72 = *(undefined1 *)((longlong)plVar1 + 0xbe);
      uStack_71 = *(undefined1 *)((longlong)plVar1 + 0xbf);
      if ((local_80 == '\x02') &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      if (iStack_7c - CONCAT13(uVar15,CONCAT12(uStack_10a,CONCAT11(uStack_10b,uStack_10c))) < 1) {
        TVar3 = (param_2->SectionRange).Value.LowerBound;
        if ((TVar3.Type.Value.Value != '\x02') && ((char)plVar1[0x16] != '\x02')) {
          uVar27 = TVar3._0_4_ & 0xff;
          local_a8 = TVar3;
          if (TVar3.Type.Value.Value == '\x01') {
            if ((uVar27 == 2) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            FVar32.Value = local_a8.Value.Value;
          }
          else {
            if ((uVar27 == 2) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            FVar32.Value = local_a8.Value.Value + 1;
          }
          iVar18 = (int)((ulonglong)plVar1[0x16] >> 0x20);
          cVar17 = (char)plVar1[0x16];
          if (cVar17 != '\x01') {
            if ((cVar17 == '\x02') &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            iVar18 = iVar18 + 1;
          }
          iVar25 = (param_2->Easing).AutoEaseInDuration;
          iVar18 = iVar18 - FVar32.Value;
          if (iVar18 < 0) {
            iVar18 = 0;
          }
          if (iVar18 < iVar25) {
            iVar25 = iVar18;
          }
          (param_2->Easing).AutoEaseInDuration = iVar25;
          iVar25 = (param_2->Easing).ManualEaseInDuration;
          if (iVar18 < iVar25) {
            iVar25 = iVar18;
          }
          (param_2->Easing).ManualEaseInDuration = iVar25;
        }
        TVar3 = (param_2->SectionRange).Value.UpperBound;
        if ((TVar3.Type.Value.Value != '\x02') && ((char)plVar1[0x17] != '\x02')) {
          uVar27 = TVar3._0_4_ & 0xff;
          local_a0 = TVar3;
          if (TVar3.Type.Value.Value == '\x01') {
            if ((uVar27 == 2) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            FVar32.Value = local_a0.Value.Value + 1;
          }
          else {
            if ((uVar27 == 2) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            FVar32.Value = local_a0.Value.Value;
          }
          cVar17 = (char)plVar1[0x17];
          iVar18 = (int)((ulonglong)plVar1[0x17] >> 0x20);
          if (cVar17 == '\x01') {
            iVar18 = iVar18 + 1;
          }
          else if ((cVar17 == '\x02') &&
                  (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          iVar18 = iVar18 - FVar32.Value;
          if (iVar18 < 0) {
            iVar18 = 0;
          }
          iVar25 = *(int *)((longlong)plVar1 + 0x7c);
          if (iVar18 < *(int *)((longlong)plVar1 + 0x7c)) {
            iVar25 = iVar18;
          }
          *(int *)((longlong)plVar1 + 0x7c) = iVar25;
          iVar25 = *(int *)((longlong)plVar1 + 0xac);
          if (iVar18 < *(int *)((longlong)plVar1 + 0xac)) {
            iVar25 = iVar18;
          }
          *(int *)((longlong)plVar1 + 0xac) = iVar25;
        }
      }
      else {
        if ((char)plVar1[0x12] == '\0') {
          iVar18 = (int)plVar1[0xf];
        }
        else {
          iVar18 = *(int *)((longlong)plVar1 + 0x94);
        }
        if ((uVar7 == '\x02') &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        lVar20 = plVar1[0x17];
        iVar18 = CONCAT13(uVar15,CONCAT12(uStack_10a,CONCAT11(uStack_10b,uStack_10c))) - iVar18;
        local_b0 = CONCAT31(local_b0._1_3_,1);
        iStack_ac = iVar18;
        if ((char)lVar20 != '\x02') {
          uVar27 = (uint)lVar20 & 0xff;
          local_b8 = lVar20;
          if ((char)lVar20 == '\x01') {
            if ((uVar27 == 2) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            iVar25 = local_b8._4_4_ + 1;
          }
          else {
            if ((uVar27 == 2) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            iVar25 = local_b8._4_4_;
          }
          if (iVar25 <= iVar18) goto LAB_14621397a;
        }
        (**(code **)(*plVar1 + 0x2d0))(plVar1,CONCAT44(iStack_ac,local_b0));
      }
      goto LAB_14621397a;
    }
    pFVar23 = pFVar23 + 8;
  } while( true );
}

// FixupConsecutiveSections @ 146214380

bool __cdecl
MovieSceneHelpers::FixupConsecutiveSections
          (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1,
          UMovieSceneSection *param_2,bool param_3,bool param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TRangeBound<FFrameNumber> TVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  TEnumAsByte<ERangeBoundTypes::Type> TVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FFrameNumber FVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  <lambda_1> local_res10 [8];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TRangeBound<FFrameNumber> local_c8;
  TRangeBound<FFrameNumber> TStack_c0;
  TRangeBound<FFrameNumber> local_b8;
  TRangeBound<FFrameNumber> local_b0;
  longlong local_a8;
  uint local_a0;
  FScriptContainerElement *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  UMovieSceneSection *local_70;
  TRangeBound<FFrameNumber> TStack_68;
  TRangeBound<FFrameNumber> TStack_60;
  UMovieSceneSection *local_58;
  TRangeBound<FFrameNumber> TStack_50;
  TRangeBound<FFrameNumber> local_48;
  
  TVar4 = (param_2->SectionRange).Value.LowerBound;
  TStack_c0 = (param_2->SectionRange).Value.UpperBound;
  TVar13 = TVar4.Type.Value;
  local_c8 = TVar4;
  if ((TVar13.Value == '\x02') || (TStack_c0.Type.Value == '\x02')) {
    FVar16.Value = TStack_c0.Value.Value;
  }
  else {
    if ((TVar13.Value == '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = TStack_c0.Value.Value <= local_c8.Value.Value;
    FVar16.Value = TStack_c0.Value.Value;
    if (bVar5) {
      return false;
    }
  }
  pFVar15 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar15;
  do {
    if (pFVar14 == pFVar15 + (longlong)param_1->ArrayNum * 8) {
LAB_1462147f5:
      bVar5 = false;
      if (param_4) {
        pFVar14 = (param_1->AllocatorInstance).Data;
        FVar8.Data = (FScriptContainerElement *)0x0;
        local_98 = (FScriptContainerElement *)0x0;
        local_d8.Data = (FScriptContainerElement *)0x0;
        local_d0 = 0;
        pFVar15 = pFVar14 + (longlong)param_1->ArrayNum * 8;
        local_70 = param_2;
        local_58 = param_2;
        TStack_68 = local_c8;
        TStack_60 = TStack_c0;
        TStack_50 = local_c8;
        local_48 = TStack_c0;
        for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 8) {
          bVar5 = `MovieSceneHelpers::FixupConsecutiveSections'::__l34::<lambda_1>::operator()
                            (&local_58,*(UMovieSceneSection **)pFVar14);
          if (bVar5) {
            if (((FVar8.Data <= pFVar14) && (pFVar14 < FVar8.Data + (longlong)local_d0._4_4_ * 8))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), FVar8.Data = local_d8.Data, bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            if ((uint)local_d0 == local_d0._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
              local_d0 = CONCAT44(local_d0._4_4_,iVar7);
              FVar8.Data = local_d8.Data;
            }
            lVar10 = (longlong)(int)(uint)local_d0;
            local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 + 1);
            *(undefined8 *)(FVar8.Data + lVar10 * 8) = *(undefined8 *)pFVar14;
            FVar8.Data = local_d8.Data;
          }
        }
        uVar11 = (ulonglong)(int)(uint)local_d0;
        local_a0 = (uint)local_d0;
        pFVar15 = FVar8.Data + uVar11 * 8;
        local_98 = FVar8.Data;
        local_78 = pFVar15;
        while( true ) {
          pFVar14 = local_98;
          if ((uint)local_d0 != (int)uVar11) {
            local_res10[0] = (<lambda_1>)0x0;
            `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar14 == pFVar15) break;
          pFVar2 = (param_1->AllocatorInstance).Data;
          local_a8 = *(longlong *)pFVar14;
          if (((pFVar2 <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar7 = param_1->ArrayNum;
          if (iVar7 != 0) {
            pFVar15 = (param_1->AllocatorInstance).Data;
            iVar18 = 0;
            lVar10 = 0;
            bVar5 = *(longlong *)pFVar15 != local_a8;
            lVar12 = local_a8;
            iVar19 = 0;
            do {
              iVar17 = iVar19;
              do {
                lVar10 = lVar10 + 1;
                iVar17 = iVar17 + 1;
                if (iVar7 <= lVar10) break;
              } while (bVar5 == (*(longlong *)(pFVar15 + lVar10 * 8) != lVar12));
              if (bVar5 != false) {
                if (iVar18 != iVar19) {
                  memmove(pFVar15 + (longlong)iVar18 * 8,pFVar15 + (longlong)iVar19 * 8,
                          (longlong)(iVar17 - iVar19) << 3);
                  lVar12 = local_a8;
                }
                iVar18 = iVar18 + (iVar17 - iVar19);
              }
              bVar5 = (bool)(bVar5 ^ 1);
              iVar19 = iVar17;
            } while (lVar10 < iVar7);
            param_1->ArrayNum = iVar18;
            pFVar15 = local_78;
            pFVar14 = local_98;
          }
          uVar11 = (ulonglong)local_a0;
          local_98 = pFVar14 + 8;
        }
        bVar5 = 0 < (int)(uint)local_d0;
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
      }
      AlgoImpl::
      IntroSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::SortConsecutiveSections_::__l2::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
                ((UMovieSceneSection **)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                 local_res10[0],SortLowerBounds);
      return bVar5;
    }
    if (*(UMovieSceneSection **)pFVar14 == param_2) {
      iVar7 = (int)((longlong)pFVar14 - (longlong)pFVar15 >> 3);
      if (iVar7 == -1) goto LAB_1462147f5;
      iVar19 = iVar7 + -1;
      if ((iVar19 < 0) || (param_1->ArrayNum <= iVar19)) {
        if (param_3) goto LAB_1462147f5;
      }
      else {
        if ((iVar19 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        plVar1 = *(longlong **)((param_1->AllocatorInstance).Data + (longlong)iVar19 * 8);
        if (param_3) {
          lVar10 = plVar1[0x16];
          if ((char)lVar10 != '\x02') {
            uVar9 = (uint)lVar10 & 0xff;
            local_90 = lVar10;
            if ((char)lVar10 == '\x01') {
              if ((uVar9 == 2) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar7 = local_90._4_4_;
            }
            else {
              if ((uVar9 == 2) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar7 = local_90._4_4_ + 1;
            }
            if ((TStack_c0.Type.Value == '\x02') &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            if (FVar16.Value <= iVar7) goto LAB_1462147f5;
          }
          (**(code **)(*plVar1 + 0x2d8))(plVar1,TStack_c0);
          goto LAB_1462147f5;
        }
        FVar16 = TVar4.Value.Value;
        if (TVar13.Value == '\0') {
          TVar13.Value = '\x01';
          local_b8.Value.Value = FVar16.Value;
          local_b8.Type.Value = '\x01';
          TVar4 = local_b8;
        }
        else if (TVar13.Value == '\x01') {
          TVar13.Value = '\0';
          local_b8.Value.Value = FVar16.Value;
          local_b8 = (TRangeBound<FFrameNumber>)((ulonglong)local_b8 & 0xffffffffffffff00);
          TVar4 = local_b8;
        }
        local_b8 = TVar4;
        lVar10 = plVar1[0x16];
        if ((char)lVar10 != '\x02') {
          uVar9 = (uint)lVar10 & 0xff;
          local_88 = lVar10;
          if ((char)lVar10 == '\x01') {
            if ((uVar9 == 2) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            iVar19 = local_88._4_4_;
          }
          else {
            if ((uVar9 == 2) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            iVar19 = local_88._4_4_ + 1;
          }
          if ((TVar13.Value == '\x02') &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (FVar16.Value <= iVar19) goto LAB_146214696;
        }
        (**(code **)(*plVar1 + 0x2d8))(plVar1,local_b8);
      }
LAB_146214696:
      iVar7 = iVar7 + 1;
      if ((iVar7 < 0) || (param_1->ArrayNum <= iVar7)) goto LAB_1462147f5;
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      plVar1 = *(longlong **)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8);
      TVar13 = TStack_c0.Type.Value;
      FVar16 = TStack_c0.Value.Value;
      if (TVar13.Value == '\0') {
        TVar13.Value = '\x01';
        local_b0.Type.Value = 1;
        local_b0.Value.Value = FVar16.Value;
      }
      else if (TVar13.Value == '\x01') {
        TVar13.Value = '\0';
        local_b0.Value.Value = FVar16.Value;
        local_b0 = (TRangeBound<FFrameNumber>)((ulonglong)local_b0 & 0xffffffffffffff00);
      }
      else {
        local_b0 = TStack_c0;
      }
      lVar10 = plVar1[0x17];
      if ((char)lVar10 != '\x02') {
        uVar9 = (uint)lVar10 & 0xff;
        local_80 = lVar10;
        if ((char)lVar10 == '\x01') {
          if ((uVar9 == 2) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar7 = local_80._4_4_ + 1;
        }
        else {
          if ((uVar9 == 2) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar7 = local_80._4_4_;
        }
        if ((TVar13.Value == '\x02') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (iVar7 <= FVar16.Value) goto LAB_1462147f5;
      }
      (**(code **)(*plVar1 + 0x2d0))(plVar1,local_b0);
      goto LAB_1462147f5;
    }
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// GetBoundObjects @ 1462169c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
MovieSceneHelpers::GetBoundObjects
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieSceneSequenceID *param_1,FGuid *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,int param_4)

{
  ForElementType<UObject_*> FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FWeakObjectPtr this;
  TObjectPtr<UMovieSceneSequence>_u_0 TVar9;
  UMovieScene *pUVar10;
  FMovieSceneSpawnable *pFVar11;
  UObject *pUVar12;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar13;
  FMovieScenePossessable *pFVar14;
  TObjectPtr<UObject>_u_0 TVar15;
  FMovieScenePossessable *pFVar16;
  FMovieSceneEvaluationState *this_00;
  ulonglong uVar17;
  FGuid *pFVar18;
  FWeakObjectPtr *pFVar19;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar20;
  ForElementType<UObject_*> FVar21;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [8];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *local_170;
  FWeakObjectPtr local_168;
  UObject *local_160;
  undefined8 local_158;
  FWeakObjectPtr local_150;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_148;
  FWeakObjectPtr local_138;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_130;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_120;
  FGuid local_110;
  FMovieSceneSequenceID local_100;
  FGuid local_fc;
  FMovieSceneSequenceID local_ec;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_e8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_d8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_c8;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> local_b8;
  TObjectPtr<UObject>_u_0 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  TObjectPtr<UMovieSceneSequence>_u_0 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  TObjectPtr<UObject>_u_0 local_70;
  TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_170 = param_3;
  local_168 = (FWeakObjectPtr)param_1;
  local_120.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)param_2;
  this = (FWeakObjectPtr)
         UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                   (param_3->Object);
  pTVar20 = local_170;
  local_138 = this;
  if (((this != (FWeakObjectPtr)0x0) &&
      (TVar9.DebugPtr =
            FMovieSceneEvaluationState::FindSequence((FMovieSceneEvaluationState *)this,param_1),
      pTVar20 = local_170, TVar9.DebugPtr != (UMovieSceneSequence *)0x0)) &&
     (pUVar10 = (UMovieScene *)(**(code **)((TVar9.DebugPtr)->_padding_ + 0x2f8))(TVar9.DebugPtr),
     pTVar20 = local_170, pUVar10 != (UMovieScene *)0x0)) {
    pFVar11 = UMovieScene::FindSpawnable(pUVar10,param_2);
    if (pFVar11 == (FMovieSceneSpawnable *)0x0) {
      pFVar14 = UMovieScene::FindPossessable(pUVar10,param_2);
      pTVar20 = local_170;
      local_148.Object = (FSharedPlaybackState *)pFVar14;
      if ((pFVar14 != (FMovieScenePossessable *)0x0) &&
         (local_130.Object =
               (FSharedPlaybackState *)
               (**(code **)((TVar9.DebugPtr)->_padding_ + 0x2b8))(TVar9.DebugPtr),
         pTVar20 = local_170, local_130.Object != (FSharedPlaybackState *)0x0)) {
        pTVar2 = (local_170->SharedReferenceCount).ReferenceController;
        local_150 = (FWeakObjectPtr)local_170->Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        TVar15.DebugPtr = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)local_150 + 0x18));
        pUVar10 = (UMovieScene *)(**(code **)((TVar9.DebugPtr)->_padding_ + 0x2f8))(TVar9.DebugPtr);
        pFVar16 = UMovieScene::FindPossessable(pUVar10,(FGuid *)local_120.DataPtr);
        if ((((pFVar16 != (FMovieScenePossessable *)0x0) &&
             (pTVar20 = local_170,
             (((pFVar16->ParentGuid).D != 0 || (pFVar16->ParentGuid).C != 0) ||
             (pFVar16->ParentGuid).B != 0) || (pFVar16->ParentGuid).A != 0)) &&
            ((TVar9.DebugPtr)->bParentContextsAreSignificant != false)) &&
           (this_00 = UE::MovieScene::FSharedPlaybackState::
                      FindCapability<FMovieSceneEvaluationState>((FSharedPlaybackState *)local_150),
           pTVar20 = local_170, this_00 != (FMovieSceneEvaluationState *)0x0)) {
          local_e8.Object = (FSharedPlaybackState *)local_150;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_e8.SharedReferenceCount.ReferenceController = pTVar2;
          FMovieSceneEvaluationState::FindBoundObjects
                    (this_00,&local_d8,&pFVar16->ParentGuid,(FMovieSceneSequenceID *)local_168,
                     &local_e8);
          pTVar20 = local_170;
          pFVar14 = (FMovieScenePossessable *)local_148.Object;
          for (pFVar19 = &(local_d8.DataPtr)->WeakPtr; local_170 = pTVar20,
              local_148.Object = (FSharedPlaybackState *)pFVar14,
              pFVar19 != &local_d8.DataPtr[local_d8.ArrayNum].WeakPtr; pFVar19 = pFVar19 + 1) {
            local_150 = *pFVar19;
            TVar15.DebugPtr = FWeakObjectPtr::Get(&local_150);
            pTVar20 = local_170;
            pFVar14 = (FMovieScenePossessable *)local_148.Object;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (((((pFVar14->ParentGuid).D != 0 || (pFVar14->ParentGuid).C != 0) ||
             (pFVar14->ParentGuid).B != 0) || (pFVar14->ParentGuid).A != 0) &&
           ((TVar9.DebugPtr)->bParentContextsAreSignificant != false)) {
          local_148.Object = pTVar20->Object;
          pTVar2 = (pTVar20->SharedReferenceCount).ReferenceController;
          if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
            local_fc.A = (pFVar14->ParentGuid).A;
            local_fc.B = (pFVar14->ParentGuid).B;
            local_fc.C = (pFVar14->ParentGuid).C;
            local_fc.D = (pFVar14->ParentGuid).D;
            local_ec.Value = *(uint *)local_168;
          }
          else {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
            local_fc.A = (pFVar14->ParentGuid).A;
            local_fc.B = (pFVar14->ParentGuid).B;
            local_fc.C = (pFVar14->ParentGuid).C;
            local_fc.D = (pFVar14->ParentGuid).D;
            local_ec.Value = *(uint *)local_168;
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_148.SharedReferenceCount.ReferenceController = pTVar2;
          FMovieSceneEvaluationState::FindBoundObjects
                    ((FMovieSceneEvaluationState *)local_138,&local_c8,&local_fc,&local_ec,
                     &local_148);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          for (pFVar19 = &(local_c8.DataPtr)->WeakPtr;
              pFVar19 != &local_c8.DataPtr[local_c8.ArrayNum].WeakPtr; pFVar19 = pFVar19 + 1) {
            local_138 = *pFVar19;
            TVar15.DebugPtr = FWeakObjectPtr::Get(&local_138);
          }
        }
        local_68.AllocatorInstance.SecondaryData = (ForElementType<UObject_*>)0x0;
        local_68.ArrayNum = 0;
        local_68.ArrayMax = 1;
        local_a0 = 0;
        local_98 = 0;
        local_a8 = TVar15;
        local_90.DebugPtr = TVar9.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
        }
        local_88 = *local_120.DataPtr;
        uStack_80 = *(undefined8 *)((longlong)local_120.DataPtr + 8);
        local_78 = *(uint *)local_168;
        local_70 = TVar15;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar15.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(TVar15.DebugPtr);
        }
        pTVar20 = local_170;
        local_b8.Object = local_170->Object;
        local_b8.SharedReferenceCount.ReferenceController =
             (local_170->SharedReferenceCount).ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FMovieSceneBindingReferences::ResolveSingleBinding
                  ((FMovieSceneBindingReferences *)local_130.Object,
                   (FMovieSceneBindingResolveParams *)&local_90.ObjectPtr,param_4,
                   (FResolveParams *)&local_a8.ObjectPtr,&local_b8,&local_68);
        iVar7 = local_68.ArrayNum;
        uVar17 = (ulonglong)local_68.ArrayNum;
        FVar21 = (ForElementType<UObject_*>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
          FVar21 = local_68.AllocatorInstance.SecondaryData;
        }
        FVar1 = (ForElementType<UObject_*>)((longlong)FVar21 + uVar17 * 8);
        while( true ) {
          if ((uint)uVar17 != iVar7) {
            local_178[0] = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_178);
          }
          if (FVar21 == FVar1) break;
          local_158 = *(undefined8 *)FVar21;
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_158) &&
              ((FScriptContainerElement *)&local_158 <
               pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar13 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar13;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          FVar21 = (ForElementType<UObject_*>)((longlong)FVar21 + 8);
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(undefined8 *)(pFVar3 + (longlong)iVar8 * 8) = local_158;
          uVar17 = (ulonglong)(uint)local_68.ArrayNum;
        }
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
          FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
        }
      }
    }
    else {
      pTVar2 = (local_170->SharedReferenceCount).ReferenceController;
      local_130.Object = local_170->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        local_110.A = param_2->A;
        local_110.B = param_2->B;
        local_110.C = param_2->C;
        local_110.D = param_2->D;
        local_100 = (FMovieSceneSequenceID)param_1->Value;
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        local_110.A = param_2->A;
        local_110.B = param_2->B;
        local_110.C = param_2->C;
        local_110.D = param_2->D;
        local_100 = (FMovieSceneSequenceID)param_1->Value;
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_130.SharedReferenceCount.ReferenceController = pTVar2;
      FMovieSceneEvaluationState::FindBoundObjects
                ((FMovieSceneEvaluationState *)this,&local_120,&local_110,&local_100,&local_130);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      puVar5 = (uint *)&(local_120.DataPtr)->WeakPtr;
      for (pFVar18 = (FGuid *)local_120.DataPtr; pTVar20 = local_170,
          pFVar18 != (FGuid *)(puVar5 + (longlong)local_120.ArrayNum * 2);
          pFVar18 = (FGuid *)&pFVar18->C) {
        local_168.ObjectIndex = pFVar18->A;
        local_168.ObjectSerialNumber = pFVar18->B;
        pUVar12 = FWeakObjectPtr::Get(&local_168);
        if (pUVar12 != (UObject *)0x0) {
          local_160 = FWeakObjectPtr::Get(&local_168);
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_160) &&
              ((FScriptContainerElement *)&local_160 <
               pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar13 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar13;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(UObject **)(pFVar3 + (longlong)iVar7 * 8) = local_160;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar20->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetDescendantMovieScenes @ 146217810

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
MovieSceneHelpers::GetDescendantMovieScenes
          (UMovieSceneSequence *param_1,TArray<UMovieScene_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UMovieSceneSubSection *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UMovieSceneSequence *pUVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  UMovieScene *local_38;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_30;
  
  local_38 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (local_38 != (UMovieScene *)0x0) {
    pFVar2 = (param_2->AllocatorInstance).Data;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)param_2->ArrayNum * 8; pFVar8 = pFVar8 + 8) {
      if (*(UMovieScene **)pFVar8 == local_38) {
        return;
      }
    }
    if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(UMovieScene **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_38;
    UMovieScene::GetAllSections(local_38,&local_30);
    iVar5 = local_30.ArrayNum;
    pFVar2 = local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8;
    FVar9.Data = local_30.AllocatorInstance.Data;
    while( true ) {
      if (local_30.ArrayNum != iVar5) {
        `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar9.Data == pFVar2) break;
      this = *(UMovieSceneSubSection **)FVar9.Data;
      if (this != (UMovieSceneSubSection *)0x0) {
        pUVar6 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if (((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar6->_padding_)) &&
           (pUVar7 = UMovieSceneSubSection::GetSequence(this), pUVar7 != (UMovieSceneSequence *)0x0)
           ) {
          GetDescendantMovieScenes(pUVar7,param_2);
        }
      }
      FVar9.Data = FVar9.Data + 8;
    }
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
  }
  return;
}

// GetDescendantSubSections @ 1462179d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
MovieSceneHelpers::GetDescendantSubSections
          (UMovieScene *param_1,TArray<UMovieSceneSubSection_*,TSizedDefaultAllocator<32>_> *param_2
          )

{
  FScriptContainerElement *pFVar1;
  UMovieSceneSubSection *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UMovieSceneSequence *pUVar9;
  UMovieScene *pUVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  UMovieSceneSubSection *local_38;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_30;
  
  if ((param_1 != (UMovieScene *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    UMovieScene::GetAllSections(param_1,&local_30);
    iVar5 = local_30.ArrayNum;
    pFVar1 = local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8;
    FVar11.Data = local_30.AllocatorInstance.Data;
    while( true ) {
      if (local_30.ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar11.Data == pFVar1) break;
      pUVar2 = *(UMovieSceneSubSection **)FVar11.Data;
      if (pUVar2 == (UMovieSceneSubSection *)0x0) {
LAB_146217b52:
        local_38 = (UMovieSceneSubSection *)0x0;
LAB_146217b57:
        FVar11.Data = FVar11.Data + 8;
      }
      else {
        pUVar8 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
        iVar7 = (int)pUVar8->_padding_;
        if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) goto LAB_146217b52;
        pFVar3 = (param_2->AllocatorInstance).Data;
        local_38 = pUVar2;
        if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(UMovieSceneSubSection **)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_38;
        pUVar9 = UMovieSceneSubSection::GetSequence(local_38);
        if (pUVar9 == (UMovieSceneSequence *)0x0) goto LAB_146217b57;
        pUVar10 = (UMovieScene *)(**(code **)(pUVar9->_padding_ + 0x2f8))(pUVar9);
        GetDescendantSubSections(pUVar10,param_2);
        FVar11.Data = FVar11.Data + 8;
      }
    }
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
  }
  return;
}

// GetDisplayPathName @ 146217ba0

FText * __cdecl
MovieSceneHelpers::GetDisplayPathName(FText *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  UObjectBaseUtility *this;
  UMovieScene *this_00;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  undefined8 *puVar8;
  FText *pFVar9;
  FText *pFVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FString local_138;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  FGuid local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  
  local_res8[0] = 0;
  FText::FText(__return_storage_ptr__);
  this = (UObjectBaseUtility *)param_1->_padding_;
  if (this != (UObjectBaseUtility *)0x0) {
    pUVar6 = UMovieSceneTrack::StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) {
      FText::FText(&local_f8);
      pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar7 = UObjectBaseUtility::GetTypedOuter(this,pUVar6);
      if (pUVar7 != (UObject *)0x0) {
        iVar2 = *(int *)(pUVar7 + 4);
        lVar11 = *(longlong *)&pUVar7[3].field_0x20;
        lVar12 = (longlong)iVar2 * 0x40 + lVar11;
        while( true ) {
          if (*(int *)(pUVar7 + 4) != iVar2) {
            local_res8[0] = local_res8[0] & 0xffffff00;
            `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res8);
          }
          if (lVar11 == lVar12) break;
          puVar8 = *(undefined8 **)(lVar11 + 0x30);
          puVar1 = puVar8 + *(int *)(lVar11 + 0x38);
          for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
            if ((UObjectBaseUtility *)*puVar8 == this) {
              local_108.A = *(uint *)(lVar11 + 0x10);
              local_108.B = *(uint *)(lVar11 + 0x14);
              local_108.C = *(uint *)(lVar11 + 0x18);
              local_108.D = *(uint *)(lVar11 + 0x1c);
              goto LAB_146217cf6;
            }
          }
          lVar11 = lVar11 + 0x40;
        }
      }
      local_108.A = 0;
      local_108.B = 0;
      local_108.C = 0;
      local_108.D = 0;
LAB_146217cf6:
      if ((((local_108.D != 0 || local_108.C != 0) || local_108.B != 0) || local_108.A != 0) &&
         (this_00 = *(UMovieScene **)&this->field_0x20, this_00 != (UMovieScene *)0x0)) {
        pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) {
          pFVar9 = UMovieScene::GetObjectDisplayName(this_00,&local_88,&local_108);
          FText::operator=(&local_f8,pFVar9);
          if (local_88.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
          }
        }
      }
      FText::operator=(__return_storage_ptr__,&local_f8);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
    }
  }
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  lVar11 = (**(code **)(param_1->_padding_ + 0x378))(param_1);
  if (lVar11 == 0) {
    local_res20 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res20,&local_138);
  }
  else {
    local_res18 = *(FName *)(lVar11 + 0x18);
    ::FName::ToString(&local_res18,&local_118);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_138.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    local_138.Data.ArrayNum = local_118.Data.ArrayNum;
    local_138.Data.ArrayMax = local_118.Data.ArrayMax;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  bVar5 = FText::IsEmpty(__return_storage_ptr__);
  if (bVar5) {
    pFVar9 = FText::FromString(&local_68,&local_138);
    FText::operator=(__return_storage_ptr__,pFVar9);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar9 = FText::FromString(&local_58,&local_138);
    local_e8.TextData.Reference = (__return_storage_ptr__->TextData).Reference;
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 8))
                (local_e8.TextData.Reference,local_res10);
    }
    local_e8.Flags = __return_storage_ptr__->Flags;
    pFVar10 = FText::FromString(&local_78,".");
    local_c8.Type = Text;
    FText::FText((FText *)&local_c8.TextValue,&local_e8);
    if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar4)();
      return pFVar9;
    }
    local_a8 = 4;
    FText::FText(&local_98,pFVar9);
    if ((local_98.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar4)();
      return pFVar9;
    }
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_128.AllocatorInstance,2,&local_128.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_128.AllocatorInstance.Data,&local_c8,2);
    FText::Join(&local_d8,pFVar10,&local_128);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
    if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    pIVar3 = (pFVar9->TextData).Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    FText::operator=(__return_storage_ptr__,&local_d8);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDisplayPathName @ 146218040

FText * __cdecl
MovieSceneHelpers::GetDisplayPathName
          (FText *__return_storage_ptr__,UMovieSceneSection *param_1,FMovieSceneChannel *param_2,
          FMovieSceneChannelMetaData *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  FText::FText(__return_storage_ptr__);
  pFVar1 = GetDisplayPathName(&local_18,param_1);
  FText::operator=(__return_storage_ptr__,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDisplayPathName @ 1462180a0

FText * __cdecl
MovieSceneHelpers::GetDisplayPathName(FText *__return_storage_ptr__,UMovieSceneTrack *param_1)

{
  int *piVar1;
  longlong *plVar2;
  UMovieScene *this;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  FText *pFVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  FGuid local_38;
  FText local_28;
  
  FText::FText(__return_storage_ptr__);
  pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
  if (pUVar6 != (UObject *)0x0) {
    iVar3 = *(int *)(pUVar6 + 4);
    lVar11 = *(longlong *)&pUVar6[3].field_0x20;
    lVar12 = (longlong)iVar3 * 0x40 + lVar11;
    while( true ) {
      if (*(int *)(pUVar6 + 4) != iVar3) {
        `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar11 == lVar12) break;
      plVar7 = *(longlong **)(lVar11 + 0x30);
      plVar2 = plVar7 + *(int *)(lVar11 + 0x38);
      for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
        if ((UMovieSceneTrack *)*plVar7 == param_1) {
          piVar1 = (int *)(lVar11 + 0x10);
          iVar3 = *piVar1;
          local_38.A = piVar1[0];
          local_38.B = piVar1[1];
          piVar1 = (int *)(lVar11 + 0x18);
          local_38.C = piVar1[0];
          local_38.D = piVar1[1];
          iVar10 = *(int *)(lVar11 + 0x14);
          iVar9 = *piVar1;
          iVar4 = *(int *)(lVar11 + 0x1c);
          goto LAB_14621817e;
        }
      }
      lVar11 = lVar11 + 0x40;
    }
  }
  iVar3 = 0;
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  iVar10 = iVar3;
  iVar9 = iVar3;
  iVar4 = iVar3;
LAB_14621817e:
  if ((((iVar4 != 0 || iVar9 != 0) || iVar10 != 0) || iVar3 != 0) &&
     (this = (UMovieScene *)param_1->_padding_, this != (UMovieScene *)0x0)) {
    pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar5->_padding_)) {
      pFVar8 = UMovieScene::GetObjectDisplayName(this,&local_28,&local_38);
      FText::operator=(__return_storage_ptr__,pFVar8);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
    }
  }
  return __return_storage_ptr__;
}

// GetLegacyConversionFrameRate @ 146218d50

FFrameRate __cdecl GetLegacyConversionFrameRate(void)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  FFrameRate FVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FFrameRate in_RCX;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            FVar4 = (FFrameRate)(*pcVar1)();
            return FVar4;
          }
        }
      }
      pIVar2 = IConsoleManager::Singleton;
      local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x60);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_48);
      local_30 = &local_70;
      puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_UFCachedLegacyConversionFrameRate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar5[4] = FCachedLegacyConversionFrameRate::OnChanged;
        puVar5[3] = &CachedRate;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      (*pcVar1)(pIVar2,local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
      FCachedLegacyConversionFrameRate::OnChanged(&CachedRate);
      _Init_thread_footer(&_TSS0);
    }
  }
  *(FFrameRate *)in_RCX = CachedRate.FrameRate;
  return in_RCX;
}

// GetMovieSceneFoldersRecursive @ 1462196c0

void __cdecl
GetMovieSceneFoldersRecursive
          (TArrayView<UMovieSceneFolder_*_const,int> *param_1,
          TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UMovieSceneFolder **ppUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneFolder **ppUVar6;
  UMovieSceneFolder *local_38 [2];
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UMovieSceneFolder_*_const,int> local_18;
  
  ppUVar6 = param_1->DataPtr;
  ppUVar1 = ppUVar6 + param_1->ArrayNum;
  do {
    if (ppUVar6 == ppUVar1) {
      return;
    }
    local_38[0] = *ppUVar6;
    if (local_38[0] != (UMovieSceneFolder *)0x0) {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      *(UMovieSceneFolder **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_38[0]
      ;
      local_28 = (local_38[0]->ChildFolders).AllocatorInstance.Data;
      iVar5 = (local_38[0]->ChildFolders).ArrayNum;
      if ((iVar5 < 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iVar5;
      local_18.DataPtr = (UMovieSceneFolder **)local_28;
      iStack_20 = iVar5;
      GetMovieSceneFoldersRecursive(&local_18,param_2);
    }
    ppUVar6 = ppUVar6 + 1;
  } while( true );
}

// GetObjectTemplate @ 146219df0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __cdecl
MovieSceneHelpers::GetObjectTemplate
          (UMovieSceneSequence *param_1,FGuid *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,int param_4)

{
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar1;
  FMovieSceneBindingReferences *this_00;
  UMovieSceneCustomBinding *this_01;
  UMovieSceneSpawnableBindingBase *pUVar2;
  UObject *pUVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  if ((param_1 != (UMovieSceneSequence *)0x0) &&
     (this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(), this != (UMovieScene *)0x0)
     ) {
    pFVar1 = UMovieScene::FindSpawnable(this,param_2);
    if (pFVar1 != (FMovieSceneSpawnable *)0x0) {
      pUVar3 = (pFVar1->ObjectTemplate).field0_0x0.DebugPtr;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return pUVar3;
    }
    this_00 = (FMovieSceneBindingReferences *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
    if ((this_00 != (FMovieSceneBindingReferences *)0x0) &&
       (this_01 = FMovieSceneBindingReferences::GetCustomBinding(this_00,param_2,param_4),
       this_01 != (UMovieSceneCustomBinding *)0x0)) {
      local_18.Object = param_3->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_3->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar2 = UMovieSceneCustomBinding::AsSpawnable(this_01,&local_18);
      if (pUVar2 != (UMovieSceneSpawnableBindingBase *)0x0) {
        pUVar3 = (UObject *)(**(code **)(pUVar2->_padding_ + 0x310))(pUVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return pUVar3;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return (UObject *)0x0;
}

// GetPrioritySortedCustomBindingTypes @ 14621b140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
MovieSceneHelpers::GetPrioritySortedCustomBindingTypes
          (TArray<TSubclassOf<UMovieSceneCustomBinding>_const_,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 local_res8 [2];
  FName local_res10;
  FName local_res18;
  UObject *local_68;
  FString local_60;
  FString local_50;
  TObjectIterator<UClass> local_40;
  
  bVar5 = false;
  piVar1 = &param_1->ArrayMax;
  uVar11 = 0;
  local_res8[0] = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  local_40.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar9,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UClass>::Advance(&local_40);
    lVar10 = (longlong)local_40.Index;
    if (local_40.Index < 0) break;
    if (local_40.ObjectArray.ArrayNum <= local_40.Index) break;
    uVar7 = uVar11;
    if (local_40.Index < local_40.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_40.Index >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar10 = *(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
    pUVar9 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister();
    if (pUVar9 != (UClass *)0x0) {
      iVar8 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar10 + 0x38) < iVar8) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar9->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar10 = (longlong)local_40.Index;
        uVar7 = uVar11;
        if (local_40.Index < local_40.ObjectArray.ArrayNum) {
          uVar7 = (uint)~local_40.Index >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if ((*(byte *)(*(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8) +
                      0xd4) & 1) == 0) {
          lVar10 = (longlong)local_40.Index;
          uVar7 = uVar11;
          if (local_40.Index < local_40.ObjectArray.ArrayNum) {
            uVar7 = (uint)~local_40.Index >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_res10 = *(FName *)(*(longlong *)
                                    (local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8) +
                                  0x18);
          ::FName::ToString(&local_res10,&local_50);
          bVar4 = ::FString::StartsWith(&local_50,L"SKEL_",5,IgnoreCase);
          if (bVar4) {
LAB_14621b3e6:
            bVar4 = true;
          }
          else {
            lVar10 = (longlong)local_40.Index;
            uVar7 = 0;
            if (local_40.Index < local_40.ObjectArray.ArrayNum) {
              uVar7 = (uint)~local_40.Index >> 0x1f;
            }
            if (uVar7 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            bVar5 = true;
            local_res18 = *(FName *)(*(longlong *)
                                      (local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8) +
                                    0x18);
            ::FName::ToString(&local_res18,&local_60);
            bVar4 = ::FString::StartsWith(&local_60,L"REINST_",7,IgnoreCase);
            if (bVar4) goto LAB_14621b3e6;
            bVar4 = false;
          }
          if (bVar5) {
            bVar5 = false;
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
          }
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          if (!bVar4) {
            lVar10 = (longlong)local_40.Index;
            uVar7 = 0;
            if (local_40.Index < local_40.ObjectArray.ArrayNum) {
              uVar7 = (uint)~local_40.Index >> 0x1f;
            }
            if (uVar7 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            local_68 = *(UObject **)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_68);
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
               ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)*piVar1 * 8)) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            iVar8 = param_1->ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_1->AllocatorInstance,piVar1);
            }
            param_1->ArrayNum = iVar8 + 1;
            *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_68;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_68);
            }
          }
        }
      }
    }
  }
  if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
  }
  AlgoImpl::
  IntroSortInternal<TSubclassOf<UMovieSceneCustomBinding>_const_,int,FIdentityFunctor,TDereferenceWrapper<TSubclassOf<UMovieSceneCustomBinding>_const_,_MovieSceneHelpers::GetPrioritySortedCustomBindingTypes_::__l2::<lambda_1>_>_>
            ((TSubclassOf<UMovieSceneCustomBinding> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum,local_res8[0]._0_1_,(<lambda_1> *)local_res8);
  return;
}

// GetResolutionContext @ 14621c3f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __cdecl
MovieSceneHelpers::GetResolutionContext
          (UMovieSceneSequence *param_1,FGuid *param_2,FMovieSceneSequenceID *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4)

{
  UObject *pUVar1;
  UMovieScene *this;
  FMovieScenePossessable *pFVar2;
  FMovieSceneEvaluationState *this_00;
  FWeakObjectPtr *pFVar3;
  FWeakObjectPtr local_res8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_28;
  
  if (param_1 != (UMovieSceneSequence *)0x0) {
    pUVar1 = FWeakObjectPtr::Get(&(param_4->Object->WeakPlaybackContext).WeakPtr);
    this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    pFVar2 = UMovieScene::FindPossessable(this,param_2);
    if ((((pFVar2 != (FMovieScenePossessable *)0x0) &&
         ((((pFVar2->ParentGuid).D != 0 || (pFVar2->ParentGuid).C != 0) ||
          (pFVar2->ParentGuid).B != 0) || (pFVar2->ParentGuid).A != 0)) &&
        (param_1->bParentContextsAreSignificant != false)) &&
       (this_00 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                            (param_4->Object), this_00 != (FMovieSceneEvaluationState *)0x0)) {
      local_38.Object = param_4->Object;
      local_38.SharedReferenceCount.ReferenceController =
           (param_4->SharedReferenceCount).ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FMovieSceneEvaluationState::FindBoundObjects
                (this_00,&local_28,&pFVar2->ParentGuid,param_3,&local_38);
      for (pFVar3 = &(local_28.DataPtr)->WeakPtr;
          pFVar3 != &local_28.DataPtr[local_28.ArrayNum].WeakPtr; pFVar3 = pFVar3 + 1) {
        local_res8 = *pFVar3;
        pUVar1 = FWeakObjectPtr::Get(&local_res8);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    return pUVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return (UObject *)0x0;
}

// GetSequenceCondition @ 14621c840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCondition * __cdecl
MovieSceneHelpers::GetSequenceCondition
          (UMovieSceneTrack *param_1,UMovieSceneSection *param_2,bool param_3)

{
  int *piVar1;
  TObjectPtr<UMovieSceneCondition>_u_0 *pTVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UMovieSceneCondition *pUVar9;
  TObjectPtr<UMovieSceneCondition>_u_0 TVar10;
  TObjectPtr<UMovieSceneCondition>_u_0 TVar11;
  UClass *pUVar12;
  TObjectPtr<UMovieSceneCondition>_u_0 TVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_158 [32];
  TObjectPtr<UMovieSceneCondition>_u_0 *local_138;
  TObjectPtr<UMovieSceneCondition>_u_0 local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108;
  char local_107;
  TObjectPtr<UMovieSceneCondition>_u_0 local_100;
  TObjectPtr<UMovieSceneCondition>_u_0 local_f8;
  TObjectPtr<UMovieSceneCondition>_u_0 local_f0;
  TObjectPtr<UMovieSceneCondition>_u_0 local_e8 [2];
  undefined1 local_d8 [128];
  undefined1 local_58 [8];
  TObjectPtr<UMovieSceneCondition>_u_0 local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_158;
  TVar13.DebugPtr = (UMovieSceneCondition *)0x0;
  local_50.DebugPtr = (UMovieSceneCondition *)0x0;
  local_48 = 0;
  local_44 = 1;
  local_107 = param_3;
  if (param_1 == (UMovieSceneTrack *)0x0) {
    if (param_2 != (UMovieSceneSection *)0x0) goto LAB_14621cae2;
  }
  else {
    TVar11 = (TObjectPtr<UMovieSceneCondition>_u_0)
             (param_1->ConditionContainer).Condition.field0_0x0.DebugPtr;
    if (TVar11.DebugPtr != (UMovieSceneCondition *)0x0) {
      uVar7 = 0;
      local_f8 = TVar11;
      if (((UMovieSceneCondition *)local_58 <= &local_f8) && (uVar7 = 0, &local_f8 < &local_50)) {
        local_118 = 8;
        local_120 = 0;
        local_128 = 1;
        local_138 = &local_f8;
        local_130.DebugPtr = (UMovieSceneCondition *)local_58;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pUVar9 = (UMovieSceneCondition *)(*pcVar5)();
          return pUVar9;
        }
        uVar7 = local_48;
        if (local_48 == local_44) {
          uVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UMovieSceneCondition_*>_>
                            (0x808,(ForElementType<UMovieSceneCondition_*> *)local_58,
                             (int *)&local_44);
        }
      }
      local_48 = uVar7 + 1;
      TVar11.DebugPtr = (UMovieSceneCondition *)local_58;
      if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
          (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
        TVar11 = local_50;
      }
      ((TObjectPtr<UMovieSceneCondition>_u_0 *)
      ((FObjectPtr_u_0 *)&(TVar11.DebugPtr)->_padding_ + (int)uVar7))->DebugPtr =
           (UMovieSceneCondition *)local_f8;
    }
    if (param_2 != (UMovieSceneSection *)0x0) {
      if (*(int *)&(param_1->TrackRowMetadata).field_0x8 !=
          *(int *)&(param_1->TrackRowMetadata).field_0x34) {
        puVar16 = *(undefined1 **)&(param_1->TrackRowMetadata).field_0x40;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = &(param_1->TrackRowMetadata).field_0x38;
        }
        iVar8 = *(int *)(puVar16 +
                        (ulonglong)
                        (*(int *)&(param_1->TrackRowMetadata).field_0x48 - 1U & param_2->RowIndex) *
                        4);
        if (iVar8 != -1) {
          do {
            lVar14 = *(longlong *)&param_1->TrackRowMetadata + (longlong)iVar8 * 0x18;
            if (*(uint *)(*(longlong *)&param_1->TrackRowMetadata + (longlong)iVar8 * 0x18) ==
                param_2->RowIndex) {
              TVar11.DebugPtr = (UMovieSceneCondition *)(lVar14 + 8);
              if (lVar14 == 0) {
                TVar11.DebugPtr = TVar13.DebugPtr;
              }
              if ((TVar11.DebugPtr != (UMovieSceneCondition *)0x0) &&
                 (TVar11 = (TObjectPtr<UMovieSceneCondition>_u_0)(TVar11.DebugPtr)->_padding_,
                 TVar11.DebugPtr != (UMovieSceneCondition *)0x0)) {
                TVar10.DebugPtr = (UMovieSceneCondition *)local_58;
                if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
                    (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
                  TVar10 = local_50;
                }
                local_f0 = TVar11;
                if (TVar10.DebugPtr <= &local_f0) {
                  TVar11.DebugPtr = (UMovieSceneCondition *)local_58;
                  if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
                      (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
                    TVar11 = local_50;
                  }
                  if (&local_f0 <
                      (TObjectPtr<UMovieSceneCondition>_u_0 *)
                      ((FObjectPtr_u_0 *)&(TVar11.DebugPtr)->_padding_ + (int)local_44)) {
                    local_118 = 8;
                    local_120 = (longlong)(int)local_48;
                    local_130.DebugPtr = (UMovieSceneCondition *)local_58;
                    if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
                        (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
                      local_130 = local_50;
                    }
                    local_138 = &local_f0;
                    local_128 = (longlong)(int)local_44;
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar6) {
                      pcVar5 = (code *)swi(3);
                      pUVar9 = (UMovieSceneCondition *)(*pcVar5)();
                      return pUVar9;
                    }
                  }
                }
                if (local_48 == local_44) {
                  local_48 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UMovieSceneCondition_*>_>
                                       (0x808,(ForElementType<UMovieSceneCondition_*> *)local_58,
                                        (int *)&local_44);
                }
                lVar14 = (longlong)(int)local_48;
                local_48 = local_48 + 1;
                TVar11.DebugPtr = (UMovieSceneCondition *)local_58;
                if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
                    (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
                  TVar11 = local_50;
                }
                ((TObjectPtr<UMovieSceneCondition>_u_0 *)
                ((FObjectPtr_u_0 *)&(TVar11.DebugPtr)->_padding_ + lVar14))->DebugPtr =
                     (UMovieSceneCondition *)local_f0;
              }
              break;
            }
            iVar8 = *(int *)(lVar14 + 0x10);
          } while (iVar8 != -1);
        }
      }
LAB_14621cae2:
      TVar11 = (TObjectPtr<UMovieSceneCondition>_u_0)
               (param_2->ConditionContainer).Condition.field0_0x0.DebugPtr;
      if (TVar11.DebugPtr != (UMovieSceneCondition *)0x0) {
        TVar10.DebugPtr = (UMovieSceneCondition *)local_58;
        if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
            (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
          TVar10 = local_50;
        }
        local_e8[0] = TVar11;
        if (TVar10.DebugPtr <= local_e8) {
          TVar11.DebugPtr = (UMovieSceneCondition *)local_58;
          if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
              (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
            TVar11 = local_50;
          }
          if (local_e8 <
              (TObjectPtr<UMovieSceneCondition>_u_0 *)
              ((FObjectPtr_u_0 *)&(TVar11.DebugPtr)->_padding_ + (int)local_44)) {
            local_118 = 8;
            local_120 = (longlong)(int)local_48;
            local_130.DebugPtr = (UMovieSceneCondition *)local_58;
            if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
                (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
              local_130 = local_50;
            }
            local_138 = local_e8;
            local_128 = (longlong)(int)local_44;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              pUVar9 = (UMovieSceneCondition *)(*pcVar5)();
              return pUVar9;
            }
          }
        }
        if (local_48 == local_44) {
          local_48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UMovieSceneCondition_*>_>
                               (0x808,(ForElementType<UMovieSceneCondition_*> *)local_58,
                                (int *)&local_44);
        }
        lVar14 = (longlong)(int)local_48;
        local_48 = local_48 + 1;
        TVar11.DebugPtr = (UMovieSceneCondition *)local_58;
        if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
            (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
          TVar11 = local_50;
        }
        ((TObjectPtr<UMovieSceneCondition>_u_0 *)
        ((FObjectPtr_u_0 *)&(TVar11.DebugPtr)->_padding_ + lVar14))->DebugPtr =
             (UMovieSceneCondition *)local_e8[0];
      }
    }
  }
  if (local_48 == 0) goto LAB_14621ce4a;
  if (local_48 == 1) {
    TVar13.DebugPtr = (UMovieSceneCondition *)local_58;
    if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
        (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
      TVar13 = local_50;
    }
    TVar13.ObjectPtr.field0_0x0 =
         (FObjectPtr)((FObjectPtr_u_0 *)&(TVar13.DebugPtr)->_padding_)->Handle;
    goto LAB_14621ce4a;
  }
  if ((param_2 == (UMovieSceneSection *)0x0) &&
     (param_2 = (UMovieSceneSection *)param_1, param_1 == (UMovieSceneTrack *)0x0)) {
LAB_14621cc30:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovieScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneCommonHelpers.cpp"
                       ,0x4d8,L"");
    TVar11 = TVar13;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (UMovieSceneCondition *)(*pcVar5)();
      return pUVar9;
    }
  }
  else {
    pUVar12 = Z_Construct_UClass_UMovieScene_NoRegister();
    TVar13.DebugPtr =
         (UMovieSceneCondition *)
         UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar12);
    TVar11.DebugPtr = TVar13.DebugPtr;
    if (TVar13.DebugPtr == (UMovieSceneCondition *)0x0) goto LAB_14621cc30;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)TVar11.DebugPtr,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UMovieSceneGroupCondition_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar12);
  local_d8._8_8_ = TVar11;
  TVar13.DebugPtr =
       (UMovieSceneCondition *)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar15 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  uVar7 = local_48;
  uVar17 = (ulonglong)(int)local_48;
  TVar10.DebugPtr = (UMovieSceneCondition *)local_58;
  if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
      (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
    TVar10 = local_50;
  }
  pTVar2 = (TObjectPtr<UMovieSceneCondition>_u_0 *)
           ((FObjectPtr_u_0 *)&(TVar10.DebugPtr)->_padding_ + uVar17);
  while( true ) {
    if ((uint)uVar17 != uVar7) {
      local_108 = 0;
      `TCheckedPointerIterator<UMovieSceneCondition_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_108);
    }
    if ((TObjectPtr<UMovieSceneCondition>_u_0 *)TVar10.DebugPtr == pTVar2) break;
    iVar8 = (int)TVar13.DebugPtr[1]._padding_;
    piVar1 = (int *)((longlong)&TVar13.DebugPtr[1]._padding_ + 4);
    pUVar4 = ((FObjectPtr_u_0 *)&(TVar10.DebugPtr)->_padding_)->Handle;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&TVar13.DebugPtr[1]._padding_,piVar1);
    }
    *(int *)&TVar13.DebugPtr[1]._padding_ = iVar8 + 1;
    puVar3 = (undefined8 *)(TVar13.DebugPtr[1]._padding_ + (longlong)iVar8 * 8);
    DefaultConstructItems<FMovieSceneConditionContainer,int>(puVar3,1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *puVar3 = pUVar4;
    TVar10.DebugPtr = (UMovieSceneCondition *)&(TVar10.DebugPtr)->_padding_;
    uVar17 = (ulonglong)local_48;
  }
  if (local_107 != '\0') {
    plVar15 = &TVar11.DebugPtr[3]._padding_;
    local_100.DebugPtr = TVar13.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar13.DebugPtr != (UMovieSceneCondition *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
    }
    TVar10.ObjectPtr.field0_0x0 = (FObjectPtr)*plVar15;
    if ((TVar10.DebugPtr <= &local_100) &&
       (lVar14 = (longlong)*(int *)((longlong)&TVar11.DebugPtr[3]._padding_ + 4),
       &local_100 <
       (TObjectPtr<UMovieSceneCondition>_u_0 *)
       ((FObjectPtr_u_0 *)&(TVar10.DebugPtr)->_padding_ + lVar14))) {
      local_120 = (longlong)(int)TVar11.DebugPtr[3]._padding_;
      local_118 = 8;
      local_138 = &local_100;
      local_130.ObjectPtr.field0_0x0 = TVar10.ObjectPtr.field0_0x0;
      local_128 = lVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UMovieSceneCondition *)(*pcVar5)();
        return pUVar9;
      }
    }
    iVar8 = (int)TVar11.DebugPtr[3]._padding_;
    piVar1 = (int *)((longlong)&TVar11.DebugPtr[3]._padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar15,piVar1);
    }
    *(int *)&TVar11.DebugPtr[3]._padding_ = iVar8 + 1;
    ((TObjectPtr<UMovieSceneCondition>_u_0 *)(*plVar15 + (longlong)iVar8 * 8))->DebugPtr =
         (UMovieSceneCondition *)local_100;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_100.DebugPtr != (UMovieSceneCondition *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_100.DebugPtr);
    }
  }
LAB_14621ce4a:
  if ((TObjectPtr<UMovieSceneCondition>_u_0 *)local_50.DebugPtr !=
      (TObjectPtr<UMovieSceneCondition>_u_0 *)0x0) {
    FMemory::Free(local_50.DebugPtr);
  }
  return TVar13.DebugPtr;
}

// GetSingleBoundObject @ 14621d0e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __cdecl
MovieSceneHelpers::GetSingleBoundObject
          (UMovieSceneSequence *param_1,FGuid *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,int param_4)

{
  longlong *plVar1;
  FMovieSceneEvaluationState *this;
  UObject *pUVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res18 [16];
  undefined1 local_48 [16];
  longlong local_38;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_30;
  
  this = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                   (param_3->Object);
  if (this == (FMovieSceneEvaluationState *)0x0) {
LAB_14621d1ba:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    pUVar2 = (UObject *)0x0;
  }
  else {
    FMovieSceneEvaluationState::FindSequenceId(this,(UMovieSceneSequence *)local_48);
    local_30.Object = param_3->Object;
    local_30.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_30.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_30.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetBoundObjects((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(local_48 + 8),
                    (FMovieSceneSequenceID *)local_48,param_2,&local_30,param_4);
    iVar3 = (int)local_38;
    plVar1 = (longlong *)(local_48._8_8_ + (longlong)iVar3 * 8);
    lVar4 = local_38;
    plVar5 = (longlong *)local_48._8_8_;
    while( true ) {
      if ((int)lVar4 != iVar3) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        lVar4 = local_38;
      }
      if (plVar5 == plVar1) {
        if ((longlong *)local_48._8_8_ != (longlong *)0x0) {
          FMemory::Free((void *)local_48._8_8_);
        }
        goto LAB_14621d1ba;
      }
      pUVar2 = (UObject *)*plVar5;
      if (pUVar2 != (UObject *)0x0) break;
      plVar5 = plVar5 + 1;
    }
    if ((longlong *)local_48._8_8_ != (longlong *)0x0) {
      FMemory::Free((void *)local_48._8_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
  }
  return pUVar2;
}

// GetSoundDuration @ 14621d370

float __cdecl MovieSceneHelpers::GetSoundDuration(USoundBase *param_1)

{
  char cVar1;
  float fVar2;
  
  if (param_1 == (USoundBase *)0x0) {
    return 0.0;
  }
  cVar1 = (**(code **)(param_1->_padding_ + 800))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
    if (cVar1 != '\0') {
      fVar2 = (float)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      return fVar2;
    }
  }
  return __real_461c4000;
}

// GetTypeHash @ 14621d8e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

uint __cdecl GetTypeHash(FMovieSceneBindingProxy *param_1)

{
  UMovieSceneSequence *pUVar1;
  ulong64 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr;
  uVar3 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar2 = CityHash64((char *)param_1,0x10);
  uVar6 = (int)uVar2 - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar3 ^ uVar6 << 8;
  uVar5 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar3 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar4 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar5 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  return (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14621d9a0

uint __cdecl GetTypeHash(FMovieSceneSpawnRegisterKey *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_1->BindingIndex;
  uVar3 = (param_1->TemplateID).Value;
  uVar1 = CityHash64((char *)param_1,0x10);
  uVar6 = (int)uVar1 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar6) - uVar3 ^ uVar6 << 8;
  uVar4 = (uVar3 - uVar2) - uVar6 ^ uVar2 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar3 = (uVar2 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar2 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar4 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar3 = ((uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar5 ^ uVar3 << 8;
  uVar2 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xc;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 << 0x10;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 5;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 10;
  return (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xf;
}

// IsBoundToAnySpawnable @ 146221fc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
MovieSceneHelpers::IsBoundToAnySpawnable
          (UMovieSceneSequence *param_1,FGuid *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  FMovieSceneBindingReference *pFVar11;
  TLess<void> local_res8;
  TArrayView<FMovieSceneBindingReference_const_,int> local_38;
  
  if (param_1 != (UMovieSceneSequence *)0x0) {
    this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
    if ((this != (UMovieScene *)0x0) &&
       (pFVar7 = UMovieScene::FindSpawnable(this,param_2), pFVar7 != (FMovieSceneSpawnable *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return true;
    }
    puVar8 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
    if (puVar8 != (undefined8 *)0x0) {
      pFVar11 = (FMovieSceneBindingReference *)*puVar8;
      iVar1 = *(int *)(puVar8 + 1);
      uVar5 = AlgoImpl::
              LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                        (pFVar11,iVar1,param_2,(pdm_2fa4d329)0x0,local_res8);
      local_38.ArrayNum = 0;
      if ((int)uVar5 < iVar1) {
        lVar10 = (longlong)(int)uVar5 * 0x30;
        uVar9 = uVar5;
        do {
          uVar6 = 0;
          if ((int)uVar9 < *(int *)(puVar8 + 1)) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pFVar11 = (FMovieSceneBindingReference *)*puVar8;
          if (((*(uint *)((longlong)&(pFVar11->ID).C + lVar10) != param_2->C ||
               *(uint *)((longlong)&(pFVar11->ID).B + lVar10) != param_2->B) ||
              *(uint *)((longlong)&(pFVar11->ID).D + lVar10) != param_2->D) ||
              param_2->A != *(uint *)((longlong)&(pFVar11->ID).A + lVar10)) break;
          local_38.ArrayNum = local_38.ArrayNum + 1;
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0x30;
        } while ((int)uVar9 < iVar1);
      }
      local_38.DataPtr = pFVar11 + (int)uVar5;
      if ((local_38.ArrayNum < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = Algo::
              NoneOf<TArrayView<FMovieSceneBindingReference_const_,int>,_MovieSceneHelpers::IsBoundToAnySpawnable_::__l14::<lambda_1>_>
                        (&local_38,(<lambda_1>)param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return !bVar3;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return false;
}

// IsBoundToSpawnable @ 1462221b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
MovieSceneHelpers::IsBoundToSpawnable
          (UMovieSceneSequence *param_1,FGuid *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  TLess<void> local_res8;
  FSharedPlaybackState *local_28;
  TReferenceControllerBase<1> *local_20;
  
  if (param_1 != (UMovieSceneSequence *)0x0) {
    this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
    if ((this != (UMovieScene *)0x0) &&
       (pFVar7 = UMovieScene::FindSpawnable(this,param_2), pFVar7 != (FMovieSceneSpawnable *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return true;
    }
    plVar8 = (longlong *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
    if (plVar8 != (longlong *)0x0) {
      lVar10 = plVar8[1];
      iVar5 = AlgoImpl::
              LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                        ((FMovieSceneBindingReference *)*plVar8,(int)lVar10,param_2,
                         (pdm_2fa4d329)0x0,local_res8);
      uVar11 = iVar5 + param_4;
      if ((-1 < (int)uVar11) && ((int)uVar11 < (int)lVar10)) {
        if (((int)uVar11 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        puVar9 = (uint *)(*plVar8 + (longlong)(int)uVar11 * 0x30);
        if (((puVar9[3] == param_2->D && puVar9[2] == param_2->C) && puVar9[1] == param_2->B) &&
            *puVar9 == param_2->A) {
          uVar6 = 0;
          if ((int)uVar11 < (int)plVar8[1]) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          lVar10 = *plVar8 + (longlong)(int)uVar11 * 0x30;
          if (lVar10 != 0) {
            plVar8 = *(longlong **)(lVar10 + 0x28);
            if (plVar8 != (longlong *)0x0) {
              pcVar1 = *(code **)(*plVar8 + 0x2b8);
              local_28 = param_3->Object;
              local_20 = (param_3->SharedReferenceCount).ReferenceController;
              if (local_20 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_20->SharedReferenceCount =
                     (atomic<int>)((int)local_20->SharedReferenceCount + 1);
                UNLOCK();
              }
              cVar4 = (*pcVar1)(plVar8,&local_28);
              if (cVar4 != '\0') {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((param_3->SharedReferenceCount).ReferenceController);
                return true;
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((param_3->SharedReferenceCount).ReferenceController);
            return false;
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return false;
}

// IsSectionKeyable @ 146222890

bool __cdecl MovieSceneHelpers::IsSectionKeyable(UMovieSceneSection *param_1)

{
  int *piVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  int *piVar4;
  
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar2 = UMovieSceneTrack::StaticClass();
    pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar2);
    if (pUVar3 != (UObject *)0x0) {
      piVar4 = *(int **)&pUVar3[3].field_0x18;
      piVar1 = piVar4 + *(int *)&pUVar3[3].field_0x20;
      for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
        if (*piVar4 == param_1->RowIndex) {
          return false;
        }
      }
      if ((pUVar3[3].field_0x11 == '\0') && (param_1->bIsActive != 0)) {
        return true;
      }
    }
  }
  return false;
}

// MakeSpawnableTemplateFromInstance @ 146222f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
MovieSceneHelpers::MakeSpawnableTemplateFromInstance
          (UObject *param_1,UMovieScene *param_2,FName param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  UObjectBase *this;
  longlong lVar6;
  code *pcVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  UClass *pUVar10;
  AActor *this_00;
  FCopyPropertiesForUnrelatedObjectsParams *pFVar11;
  UClass *pUVar12;
  AActor *pAVar13;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar14;
  UObject *pUVar15;
  FString *pFVar16;
  int iVar17;
  int *piVar18;
  wchar_t *pwVar19;
  uint uVar20;
  int iVar21;
  wchar_t *pwVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint uVar26;
  undefined1 auStack_1e8 [32];
  FDetachmentTransformRules local_1c8;
  undefined1 local_1c4 [4];
  undefined8 local_1c0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  int local_188;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_180;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FCopyPropertiesForUnrelatedObjectsParams local_148;
  FString local_120;
  FString local_110;
  FString local_100;
  FCopyPropertiesForUnrelatedObjectsParams local_f0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pUVar12 = *(UClass **)&param_1->field_0x10;
  iVar21 = 0;
  local_1c0 = 0;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar10 = Z_Construct_UClass_UObject_NoRegister();
  CheckIsClassChildOf_Internal(pUVar10,pUVar12);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar12);
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._8_8_ = param_2;
  local_c8._16_8_ = param_3;
  this_00 = (AActor *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar23 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar23 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
  UEngine::FCopyPropertiesForUnrelatedObjectsParams::FCopyPropertiesForUnrelatedObjectsParams
            (&local_148);
  local_148.bNotifyObjectReplacement = false;
  local_148.bPreserveRootComponent = false;
  local_148.bPerformDuplication = true;
  pFVar11 = UEngine::FCopyPropertiesForUnrelatedObjectsParams::
            FCopyPropertiesForUnrelatedObjectsParams(&local_f0,&local_148);
  UEngine::CopyPropertiesForUnrelatedObjects(param_1,(UObject *)this_00,pFVar11);
  if (this_00 == (AActor *)0x0) {
    pFVar16 = GetTypeName<AActor>(&local_120);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar22);
  }
  pUVar12 = Z_Construct_UClass_AActor_NoRegister();
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar12->_padding_)) {
    pFVar16 = GetTypeName<AActor>(&local_110);
    pwVar22 = L"";
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    pFVar16 = GetFullNameForCastLogError<UObject>(&local_100,(UObject *)this_00);
    if ((pFVar16->Data).ArrayNum != 0) {
      pwVar22 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar22,pwVar19);
  }
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&SequencerActorTag,L"SequencerActor");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar18 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&SequencerPreviewActorTag,L"SequencerPreviewActor");
    _Init_thread_footer(&::_TSS1);
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::Remove(&this_00->Tags,&SequencerActorTag);
  TArray<FName,TSizedDefaultAllocator<32>_>::Remove(&this_00->Tags,&SequencerPreviewActorTag);
  pAVar13 = AActor::GetAttachParentActor(this_00);
  if (pAVar13 != (AActor *)0x0) {
    local_1c8.LocationRule = KeepRelative;
    local_1c8.RotationRule = KeepRelative;
    local_1c8.ScaleRule = KeepRelative;
    local_1c8.bCallModify = false;
    AActor::DetachFromActor(this_00,&local_1c8);
  }
  pTVar14 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                      (&this_00->OwnedComponents);
  iVar3 = *(int *)&(pTVar14->Elements).field_0x28;
  uStack_1ac = 1;
  local_198 = 0;
  puVar1 = &(pTVar14->Elements).field_0x10;
  iStack_19c = iVar21;
  if (iVar3 != 0) {
    puVar25 = *(uint **)&(pTVar14->Elements).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar1;
    }
    uVar20 = *puVar25;
    iVar21 = 0;
    local_198 = 0;
    while (uVar20 == 0) {
      iVar21 = iVar21 + 1;
      local_198 = local_198 + 0x20;
      iStack_19c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14622315a;
      uVar20 = puVar25[iVar21];
    }
    uStack_1ac = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_1ac * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_188 = (int)lVar6;
    iStack_19c = local_188 + -1 + local_198;
    if (iVar3 < iStack_19c) {
      iStack_19c = iVar3;
    }
  }
LAB_14622315a:
  uVar20 = *(uint *)&(pTVar14->Elements).field_0x28;
  uVar26 = uVar20 & 0xffffffe0;
  iStack_190 = *(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar14->Elements).field_0x34;
  uStack_1a0 = 0xffffffff;
  TStack_170._padding_ = CONCAT44(uStack_1ac,iVar21);
  TStack_170.CurrentBitIndex = iStack_19c;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_170._28_4_ = iStack_19c;
  TStack_170.BaseBitIndex = local_198;
  uStack_150 = CONCAT44(uStack_18c,iStack_190);
  local_1b8 = pTVar14;
  iStack_1b0 = iVar21;
  local_1a8 = puVar1;
  iStack_194 = iStack_19c;
  local_180 = pTVar14;
  local_178 = pTVar14;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pUVar15 = (UObject *)(*pcVar7)();
    return pUVar15;
  }
  pTVar8 = local_180;
  uVar4 = *(uint *)&(pTVar14->Elements).field_0x28;
  if (uVar20 != uVar4) {
    puVar5 = *(undefined1 **)&(pTVar14->Elements).field_0x20;
    puVar24 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar24 = puVar5;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      iVar17 = iVar17 + 1;
      uVar26 = uVar26 + 0x20;
      uVar20 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17) goto LAB_146223270;
      uVar20 = *(uint *)(puVar24 + (longlong)iVar17 * 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar20 = (int)lVar6 + -1 + uVar26;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_146223270:
  while( true ) {
    pTVar14 = local_178;
    if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34 !=
        (int)uStack_150) {
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c4);
    }
    if (((TStack_170.CurrentBitIndex == uVar20) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar14 == pTVar8)
       ) break;
    this = *(UObjectBase **)
            (*(longlong *)&pTVar14->Elements + (longlong)TStack_170.CurrentBitIndex * 0x10);
    if (this != (UObjectBase *)0x0) {
      UObjectBase::AtomicallyClearFlags(this,RF_Transient);
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  return (UObject *)this_00;
}

// MakeUniqueBindingName @ 146223cc0

FString * __cdecl
MovieSceneHelpers::MakeUniqueBindingName
          (FString *__return_storage_ptr__,UMovieScene *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneSpawnable *pFVar4;
  FString *pFVar5;
  FMovieScenePossessable *pFVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int local_res8 [2];
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_48.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar7 = (longlong)local_48.Data.ArrayNum;
  iVar10 = 0;
  pFVar11 = (param_2->Data).AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,pFVar11,lVar7 * 2);
  }
  ::FString::FString(__return_storage_ptr__,param_2);
  local_res8[0] = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar3 = UMovieScene::GetSpawnableCount(param_1);
  iVar9 = iVar10;
  if (0 < iVar3) {
    do {
      pFVar4 = UMovieScene::GetSpawnable(param_1,iVar9);
      pFVar5 = &pFVar4->Name;
      if (((local_58.Data <= pFVar5) && (pFVar5 < local_58.Data + (longlong)local_50._4_4_ * 0x10))
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
      iVar3 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar3 + 1);
      ::FString::FString((FString *)(local_58.Data + (longlong)iVar3 * 0x10),pFVar5);
      iVar9 = iVar9 + 1;
      iVar3 = UMovieScene::GetSpawnableCount(param_1);
    } while (iVar9 < iVar3);
  }
  iVar9 = UMovieScene::GetPossessableCount(param_1);
  if (0 < iVar9) {
    do {
      pFVar6 = UMovieScene::GetPossessable(param_1,iVar10);
      pFVar5 = &pFVar6->Name;
      if (((local_58.Data <= pFVar5) && (pFVar5 < local_58.Data + (longlong)local_50._4_4_ * 0x10))
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
      iVar9 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar9 + 1);
      ::FString::FString((FString *)(local_58.Data + (longlong)iVar9 * 0x10),pFVar5);
      iVar10 = iVar10 + 1;
      iVar9 = UMovieScene::GetPossessableCount(param_1);
    } while (iVar10 < iVar9);
  }
  pFVar11 = local_58.Data + (longlong)(int)local_50 * 0x10;
  FVar8.Data = local_58.Data;
  if (local_58.Data != pFVar11) {
    do {
      iVar10 = *(int *)(FVar8.Data + 8);
      iVar9 = (__return_storage_ptr__->Data).ArrayNum;
      if (iVar10 == iVar9) {
        if (1 < iVar10) {
          iVar10 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)FVar8.Data,
                              (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data);
          bVar2 = iVar10 == 0;
          goto LAB_146223f37;
        }
LAB_146223f91:
        SplitBindingLabel(&local_48,local_res8);
        goto LAB_146223fb0;
      }
      bVar2 = iVar10 + iVar9 == 1;
LAB_146223f37:
      if (bVar2) goto LAB_146223f91;
      FVar8.Data = FVar8.Data + 0x10;
    } while (FVar8.Data != pFVar11);
LAB_146223f47:
  }
LAB_146223f4e:
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
LAB_146223fb0:
  pFVar11 = local_58.Data + (longlong)(int)local_50 * 0x10;
  FVar8.Data = local_58.Data;
  if (local_58.Data != pFVar11) {
    do {
      iVar10 = *(int *)(FVar8.Data + 8);
      iVar9 = (__return_storage_ptr__->Data).ArrayNum;
      if (iVar10 == iVar9) {
        if (iVar10 < 2) goto LAB_146224008;
        iVar10 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)FVar8.Data,
                            (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data);
        bVar2 = iVar10 == 0;
      }
      else {
        bVar2 = iVar10 + iVar9 == 1;
      }
      if (bVar2) goto LAB_146224008;
      FVar8.Data = FVar8.Data + 0x10;
      if (FVar8.Data == pFVar11) goto LAB_146223f47;
    } while( true );
  }
  goto LAB_146223f4e;
LAB_146224008:
  ::FString::PrintfImpl(&local_38,L"%s%d");
  if (__return_storage_ptr__ != &local_38) {
    pFVar11 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  goto LAB_146223fb0;
}

// MakeUniqueSpawnableName @ 146224220

FString * __cdecl
MovieSceneHelpers::MakeUniqueSpawnableName
          (FString *__return_storage_ptr__,UMovieScene *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneSpawnable *pFVar4;
  FString *pFVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int local_res8 [2];
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_48.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar6 = (longlong)local_48.Data.ArrayNum;
  iVar8 = 0;
  pFVar9 = (param_2->Data).AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,pFVar9,lVar6 * 2);
  }
  ::FString::FString(__return_storage_ptr__,param_2);
  local_res8[0] = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar3 = UMovieScene::GetSpawnableCount(param_1);
  if (0 < iVar3) {
    do {
      pFVar4 = UMovieScene::GetSpawnable(param_1,iVar8);
      pFVar5 = &pFVar4->Name;
      if (((local_58.Data <= pFVar5) && (pFVar5 < local_58.Data + (longlong)local_50._4_4_ * 0x10))
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
      iVar3 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar3 + 1);
      ::FString::FString((FString *)(local_58.Data + (longlong)iVar3 * 0x10),pFVar5);
      iVar8 = iVar8 + 1;
      iVar3 = UMovieScene::GetSpawnableCount(param_1);
    } while (iVar8 < iVar3);
  }
  pFVar9 = local_58.Data + (longlong)(int)local_50 * 0x10;
  FVar7.Data = local_58.Data;
  if (local_58.Data != pFVar9) {
    do {
      iVar8 = *(int *)(FVar7.Data + 8);
      iVar3 = (__return_storage_ptr__->Data).ArrayNum;
      if (iVar8 == iVar3) {
        if (1 < iVar8) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)FVar7.Data,
                             (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data);
          bVar2 = iVar8 == 0;
          goto LAB_1462243c3;
        }
LAB_14622441d:
        SplitBindingLabel(&local_48,local_res8);
        goto LAB_146224440;
      }
      bVar2 = iVar8 + iVar3 == 1;
LAB_1462243c3:
      if (bVar2) goto LAB_14622441d;
      FVar7.Data = FVar7.Data + 0x10;
    } while (FVar7.Data != pFVar9);
LAB_1462243d3:
  }
LAB_1462243da:
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
LAB_146224440:
  pFVar9 = local_58.Data + (longlong)(int)local_50 * 0x10;
  FVar7.Data = local_58.Data;
  if (local_58.Data != pFVar9) {
    do {
      iVar8 = *(int *)(FVar7.Data + 8);
      iVar3 = (__return_storage_ptr__->Data).ArrayNum;
      if (iVar8 == iVar3) {
        if (iVar8 < 2) goto LAB_146224498;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar7.Data,
                           (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data);
        bVar2 = iVar8 == 0;
      }
      else {
        bVar2 = iVar8 + iVar3 == 1;
      }
      if (bVar2) goto LAB_146224498;
      FVar7.Data = FVar7.Data + 0x10;
      if (FVar7.Data == pFVar9) goto LAB_1462243d3;
    } while( true );
  }
  goto LAB_1462243da;
LAB_146224498:
  ::FString::PrintfImpl(&local_38,L"%s%d");
  if (__return_storage_ptr__ != &local_38) {
    pFVar9 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  goto LAB_146224440;
}

// ResolveSceneComponentBoundObject @ 146232530

UObject * __cdecl MovieSceneHelpers::ResolveSceneComponentBoundObject(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      if (*(UObject **)(param_1 + 0xb) != (UObject *)0x0) {
        return *(UObject **)(param_1 + 0xb);
      }
      goto LAB_146232581;
    }
  }
  if (param_1 == (UObject *)0x0) {
    return (UObject *)0x0;
  }
LAB_146232581:
  pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return param_1;
  }
  return (UObject *)0x0;
}

// SceneComponentFromRuntimeObject @ 1462339e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __cdecl MovieSceneHelpers::SceneComponentFromRuntimeObject(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      if (*(USceneComponent **)(param_1 + 0xb) != (USceneComponent *)0x0) {
        return *(USceneComponent **)(param_1 + 0xb);
      }
      goto LAB_146233a31;
    }
  }
  if (param_1 == (UObject *)0x0) {
    return (USceneComponent *)0x0;
  }
LAB_146233a31:
  pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USceneComponent *)param_1;
  }
  return (USceneComponent *)0x0;
}

// SetObjectTemplate @ 146234fa0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
MovieSceneHelpers::SetObjectTemplate
          (UMovieSceneSequence *param_1,FGuid *param_2,UObject *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar4;
  FMovieSceneBindingReferences *this_00;
  UMovieSceneCustomBinding *this_01;
  UMovieSceneSpawnableBindingBase *pUVar5;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  if ((param_1 != (UMovieSceneSequence *)0x0) &&
     (this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(), this != (UMovieScene *)0x0)
     ) {
    pFVar4 = UMovieScene::FindSpawnable(this,param_2);
    if (pFVar4 != (FMovieSceneSpawnable *)0x0) {
      if (((param_3 != (UObject *)0x0) && ((*(uint *)&param_3->field_0x8 & 0x10) != 0)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObjectTemplate == nullptr || !InObjectTemplate->HasAnyFlags(RF_ClassDefaultObject)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSpawnable.h"
                             ,0x70,
                             L"Setting CDOs as object templates is not supported. Please use the class directly."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_3);
      }
      (pFVar4->ObjectTemplate).field0_0x0.DebugPtr = param_3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
      return true;
    }
    this_00 = (FMovieSceneBindingReferences *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
    if ((this_00 != (FMovieSceneBindingReferences *)0x0) &&
       (this_01 = FMovieSceneBindingReferences::GetCustomBinding(this_00,param_2,param_5),
       this_01 != (UMovieSceneCustomBinding *)0x0)) {
      local_18.Object = param_4->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_4->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar5 = UMovieSceneCustomBinding::AsSpawnable(this_01,&local_18);
      if (pUVar5 != (UMovieSceneSpawnableBindingBase *)0x0) {
        (**(code **)(pUVar5->_padding_ + 0x318))(pUVar5,param_3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_4->SharedReferenceCount).ReferenceController);
        return true;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// SortConsecutiveSections @ 146236af0

void __cdecl
MovieSceneHelpers::SortConsecutiveSections
          (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1)

{
  <lambda_1> local_res8;
  
  AlgoImpl::
  IntroSortInternal<UMovieSceneSection_*,int,_MovieSceneHelpers::SortConsecutiveSections_::__l2::<lambda_1>,bool_(__cdecl*)(TRangeBound<FFrameNumber>,TRangeBound<FFrameNumber>)>
            ((UMovieSceneSection **)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8,
             SortLowerBounds);
  return;
}

// SortOverlappingSections @ 146236b10

bool __cdecl
MovieSceneHelpers::SortOverlappingSections(UMovieSceneSection *param_1,UMovieSceneSection *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_2->RowIndex;
  iVar2 = param_1->RowIndex;
  bVar4 = SBORROW4(iVar2,iVar1);
  iVar3 = iVar2 - iVar1;
  if (iVar2 == iVar1) {
    bVar4 = SBORROW4(param_1->OverlapPriority,param_2->OverlapPriority);
    iVar3 = param_1->OverlapPriority - param_2->OverlapPriority;
  }
  return bVar4 != iVar3 < 0;
}

// SplitBindingLabel @ 1462371e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl SplitBindingLabel(FString *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType _Str;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FString local_28;
  
  iVar7 = (param_1->Data).ArrayNum;
  iVar8 = iVar7 + -1;
  lVar6 = (longlong)iVar8;
  if (-1 < iVar8) {
    iVar7 = iVar7 + -2;
    do {
      if (lVar6 == 0) {
LAB_146237281:
        FString::RightChop(param_1,&local_28,iVar8);
        iVar7 = local_28.Data.ArrayNum + -1;
        if (local_28.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        if (iVar7 < 1) {
          if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          return false;
        }
        iVar5 = (param_1->Data).ArrayNum;
        iVar7 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar7 = 0;
        }
        iVar5 = iVar7;
        if (iVar8 < iVar7) {
          iVar5 = iVar8;
        }
        iVar8 = 0;
        if (0 < iVar5) {
          iVar8 = iVar5;
        }
        FString::RemoveAt(param_1,iVar8,iVar7 - iVar8,Default);
        _Str.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          _Str.Data = local_28.Data.AllocatorInstance.Data;
        }
        iVar7 = _wtoi((wchar_t *)_Str.Data);
        *param_2 = iVar7;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        return true;
      }
      uVar4 = 0;
      if (iVar7 < (param_1->Data).ArrayNum) {
        uVar4 = (uint)-iVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar5 = iswdigit(*(wint_t *)((param_1->Data).AllocatorInstance.Data + lVar6 * 2 + -2));
      if (iVar5 == 0) goto LAB_146237281;
      iVar8 = iVar8 + -1;
      iVar7 = iVar7 + -1;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return false;
}

// SupportsObjectTemplate @ 1462385a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
MovieSceneHelpers::SupportsObjectTemplate
          (UMovieSceneSequence *param_1,FGuid *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar3;
  FMovieSceneBindingReferences *this_00;
  UMovieSceneCustomBinding *pUVar4;
  longlong *plVar5;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((param_1 != (UMovieSceneSequence *)0x0) &&
     (this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(), this != (UMovieScene *)0x0)
     ) {
    pFVar3 = UMovieScene::FindSpawnable(this,param_2);
    if (pFVar3 != (FMovieSceneSpawnable *)0x0) {
LAB_1462385eb:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return true;
    }
    this_00 = (FMovieSceneBindingReferences *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
    if ((this_00 != (FMovieSceneBindingReferences *)0x0) &&
       (pUVar4 = FMovieSceneBindingReferences::GetCustomBinding(this_00,param_2,param_4),
       pUVar4 != (UMovieSceneCustomBinding *)0x0)) {
      pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x2e0);
      local_18 = param_3->Object;
      local_10 = (param_3->SharedReferenceCount).ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)(*pcVar1)(pUVar4,&local_18);
      if ((plVar5 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar5 + 0x308))(plVar5), cVar2 != '\0')) goto LAB_1462385eb;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return false;
}

// TraverseFolder @ 146239940

void __cdecl
TraverseFolder(UMovieSceneFolder *param_1,
              TMap<UMovieSceneFolder_*,UMovieSceneFolder_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieSceneFolder_*,UMovieSceneFolder_*,0>_>
              *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  UMovieSceneFolder *local_res8 [2];
  TPairInitializer<UMovieSceneFolder_*_const_&,UMovieSceneFolder_*_const_&> local_res18;
  UMovieSceneFolder ***local_28;
  UMovieSceneFolder **local_20;
  
  iVar2 = (param_1->ChildFolders).ArrayNum;
  pFVar5 = (param_1->ChildFolders).AllocatorInstance.Data;
  local_res8[0] = param_1;
  if (iVar2 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  if (pFVar5 != pFVar1) {
    local_28 = &local_res18.Value;
    local_20 = local_res8;
    do {
      local_res18.Value = *(UMovieSceneFolder ***)pFVar5;
      TSet<TTuple<UMovieSceneFolder_*,UMovieSceneFolder_*>,TDefaultMapHashableKeyFuncs<UMovieSceneFolder_*,UMovieSceneFolder_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UMovieSceneFolder_*_const_&,UMovieSceneFolder_*_const_&>_>
                ((TSet<TTuple<UMovieSceneFolder_*,UMovieSceneFolder_*>,TDefaultMapHashableKeyFuncs<UMovieSceneFolder_*,UMovieSceneFolder_*,0>,FDefaultSetAllocator>
                  *)param_2,&local_res18,(bool *)&local_28);
      TraverseFolder((UMovieSceneFolder *)local_res18.Value,param_2);
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1);
  }
  return;
}

// TryCreateCustomSpawnableBinding @ 146239be0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __cdecl
MovieSceneHelpers::TryCreateCustomSpawnableBinding
          (FGuid *__return_storage_ptr__,UMovieSceneSequence *param_1,UObject *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *_Src;
  char cVar8;
  longlong lVar9;
  UClass *pUVar10;
  UMovieSceneCustomBinding *pUVar11;
  UMovieSceneCustomBinding *pUVar12;
  FString *pFVar13;
  UMovieScene *pUVar14;
  FGuid *pFVar15;
  FMovieSceneBindingReferences *this;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  FName local_res8;
  uint local_res10;
  FString local_88;
  FString local_78;
  void *local_68;
  int local_60;
  FString local_58;
  ForAnyElementType local_48;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  if ((param_1 == (UMovieSceneSequence *)0x0) ||
     (lVar9 = (**(code **)(param_1->_padding_ + 0x2b8))(param_1), lVar9 == 0)) {
    return __return_storage_ptr__;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`MovieSceneHelpers::TryCreateCustomSpawnableBinding'::__l2::
           _dynamic_atexit_destructor_for__CachedCustomBindingTypes__);
    _Init_thread_footer(&::_TSS0);
  }
  if (CustomBindingTypesCached == false) {
    CustomBindingTypesCached = true;
    GetPrioritySortedCustomBindingTypes(&CachedCustomBindingTypes);
  }
  pUVar12 = (UMovieSceneCustomBinding *)0x0;
  local_res10 = CachedCustomBindingTypes.ArrayNum;
  uVar16 = (ulonglong)(int)local_res10;
  pFVar1 = CachedCustomBindingTypes.AllocatorInstance.Data + uVar16 * 8;
  FVar17.Data = CachedCustomBindingTypes.AllocatorInstance.Data;
  while( true ) {
    if (CachedCustomBindingTypes.ArrayNum != (int)uVar16) {
      `TCheckedPointerIterator<TSubclassOf<UMovieSceneCustomBinding>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (FVar17.Data == pFVar1) break;
    lVar9 = *(longlong *)FVar17.Data;
    if ((lVar9 == 0) ||
       (pUVar10 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister(), pUVar10 == (UClass *)0x0
       )) {
LAB_146239d04:
      lVar9 = 0;
    }
    else {
      iVar2 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar9 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_146239d04;
      lVar9 = *(longlong *)FVar17.Data;
    }
    pUVar10 = Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister();
    if (pUVar10 != (UClass *)0x0) {
      iVar2 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar9 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (lVar9 = *(longlong *)FVar17.Data, lVar9 != 0)) &&
         (pUVar10 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister(),
         pUVar10 != (UClass *)0x0)) {
        iVar2 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar9 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar10->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (lVar9 = *(longlong *)FVar17.Data, lVar9 != 0)) {
          pUVar10 = Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister();
          if (pUVar10 == (UClass *)0x0) {
LAB_146239dbd:
            pUVar10 = (UClass *)0x0;
          }
          else {
            iVar2 = (int)pUVar10->_padding_;
            if ((*(int *)(lVar9 + 0x38) < iVar2) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar10->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_146239dbd;
            pUVar10 = *(UClass **)FVar17.Data;
          }
          pUVar11 = UClass::GetDefaultObject<UMovieSceneCustomBinding>(pUVar10);
          if (((pUVar11 != (UMovieSceneCustomBinding *)0x0) && (param_2 != (UObject *)0x0)) &&
             (cVar8 = (**(code **)(*(longlong *)pUVar11 + 0x2c8))(pUVar11,param_2), cVar8 != '\0'))
          {
            pcVar3 = *(code **)(*(longlong *)pUVar11 + 0x2d0);
            (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
            pUVar12 = (UMovieSceneCustomBinding *)(*pcVar3)(pUVar11,param_2);
            if (pUVar12 != (UMovieSceneCustomBinding *)0x0) goto LAB_146239e32;
          }
        }
      }
    }
    FVar17.Data = FVar17.Data + 8;
    uVar16 = (ulonglong)local_res10;
  }
  if (pUVar12 == (UMovieSceneCustomBinding *)0x0) {
    return __return_storage_ptr__;
  }
LAB_146239e32:
  (**(code **)(*(longlong *)pUVar12 + 0x2d8))(pUVar12,&local_68);
  _Src = local_68;
  bVar4 = 1 < local_60;
  if (bVar4) {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = local_60;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_60,0,(ForAnyElementType *)&local_78,local_60,&local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)local_60 * 2);
    pFVar13 = &local_78;
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_res8.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_res8,&local_58);
    pFVar13 = ::FName::NameToDisplayString((FString *)&local_48,&local_58,false);
  }
  local_88.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_88.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  if ((bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((!bVar4) && (local_48.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data);
  }
  if ((!bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pUVar14 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  pFVar13 = MakeUniqueBindingName((FString *)&local_48,pUVar14,&local_88);
  if (&local_88 != pFVar13) {
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_88.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = (pFVar13->Data).ArrayNum;
    local_88.Data.ArrayMax = (pFVar13->Data).ArrayMax;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  pUVar14 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  pUVar10 = (UClass *)(**(code **)(*(longlong *)pUVar12 + 0x2e8))(pUVar12);
  pFVar15 = UMovieScene::AddPossessable(pUVar14,(FGuid *)&local_48,&local_88,pUVar10);
  uVar5 = pFVar15->B;
  uVar6 = pFVar15->C;
  uVar7 = pFVar15->D;
  __return_storage_ptr__->A = pFVar15->A;
  __return_storage_ptr__->B = uVar5;
  __return_storage_ptr__->C = uVar6;
  __return_storage_ptr__->D = uVar7;
  this = (FMovieSceneBindingReferences *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
  FMovieSceneBindingReferences::AddOrReplaceBinding(this,__return_storage_ptr__,pUVar12,0);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return __return_storage_ptr__;
}

// UpdateMethodToStatus @ 14623d350

Type __cdecl UpdateMethodToStatus(EUpdatePositionMethod param_1)

{
  if (param_1 == Play) {
    return Playing;
  }
  if ((param_1 != Jump) && (param_1 == Scrub)) {
    return Scrubbing;
  }
  return Stopped;
}

// UpdatePlayPosition @ 14623e640

FMovieSceneEvaluationRange * __cdecl
UpdatePlayPosition(FMovieSceneEvaluationRange *__return_storage_ptr__,
                  FMovieScenePlaybackPosition *param_1,FFrameTime param_2,
                  EUpdatePositionMethod param_3,bool param_4)

{
  if (param_3 == Play) {
    FMovieScenePlaybackPosition::PlayTo(param_1,__return_storage_ptr__,param_2,(uint)param_4);
    return __return_storage_ptr__;
  }
  FMovieScenePlaybackPosition::JumpTo(param_1,__return_storage_ptr__,param_2,(uint)param_4);
  return __return_storage_ptr__;
}

// UpgradeLegacyMovieSceneTime @ 1462400d0

FFrameNumber __cdecl UpgradeLegacyMovieSceneTime(UObject *param_1,FFrameRate param_2,double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  FFrameRate in_R8;
  uint uVar4;
  uint uVar5;
  undefined8 in_XMM2_Qb;
  undefined1 auVar6 [16];
  uint in_XMM3_Da;
  uint in_XMM3_Db;
  double dVar7;
  uint uVar8;
  uint uVar9;
  FFrameRate local_res18 [2];
  
  auVar6._8_8_ = in_XMM2_Qb;
  auVar6._0_8_ = param_3;
  local_res18[0] = in_R8;
  dVar7 = FFrameRate::MaxSeconds(local_res18);
  dVar2 = FFrameRate::MaxSeconds(local_res18);
  uVar4 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar8 = SUB84(dVar7,0);
  uVar9 = (uint)((ulonglong)dVar7 >> 0x20);
  if ((double)CONCAT44(in_XMM3_Db,in_XMM3_Da) <= dVar7) {
    uVar8 = in_XMM3_Da;
    uVar9 = in_XMM3_Db;
  }
  if ((double)CONCAT44(uVar5,uVar4) <= (double)CONCAT44(uVar9,uVar8)) {
    uVar4 = uVar8;
    uVar5 = uVar9;
  }
  dVar7 = ((double)local_res18[0].Numerator * (double)CONCAT44(uVar5,uVar4)) /
          (double)local_res18[0].Denominator;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar7;
  auVar6 = roundpd(auVar6,auVar3,1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (double)(int)(dVar7 - auVar6._0_8_) + dVar7;
  auVar6 = roundpd(auVar6,auVar1,1);
  dVar7 = auVar6._0_8_;
  if (__real_41dfffffffc00000 <= auVar6._0_8_) {
    dVar7 = __real_41dfffffffc00000;
  }
  if (dVar7 <= __real_c1e0000000000000) {
    dVar7 = __real_c1e0000000000000;
  }
  *(int *)param_1 = (int)dVar7;
  return (FFrameNumber)(int)param_1;
}

// Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_NoRegister @ 146240e30

UClass * __cdecl Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"BuiltInDynamicBindingResolverLibrary",
               &Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.InnerSingleton,
               UBuiltInDynamicBindingResolverLibrary::
               StaticRegisterNativesUBuiltInDynamicBindingResolverLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBuiltInDynamicBindingResolverLibrary>,
               InternalVTableHelperCtorCaller<UBuiltInDynamicBindingResolverLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister @ 146240ef0

UClass * __cdecl Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingLifetimeSection",
               &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.InnerSingleton,
               UMovieSceneBindingLifetimeSection::
               StaticRegisterNativesUMovieSceneBindingLifetimeSection,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingLifetimeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister @ 146240fb0

UClass * __cdecl Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingOverrides.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingOverrides",
               &Z_Registration_Info_UClass_UMovieSceneBindingOverrides.InnerSingleton,
               UMovieSceneBindingOverrides::StaticRegisterNativesUMovieSceneBindingOverrides,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBindingOverrides>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingOverrides>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingOverrides.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneBoolSection_NoRegister @ 146241060

UClass * __cdecl Z_Construct_UClass_UMovieSceneBoolSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoolSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBoolSection",
               &Z_Registration_Info_UClass_UMovieSceneBoolSection.InnerSingleton,
               UMovieSceneBoolSection::StaticRegisterNativesUMovieSceneBoolSection,0x238,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBoolSection>,
               InternalVTableHelperCtorCaller<UMovieSceneBoolSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneClock_NoRegister @ 146241120

UClass * __cdecl Z_Construct_UClass_UMovieSceneClock_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneClock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneClock",
               &Z_Registration_Info_UClass_UMovieSceneClock.InnerSingleton,
               UMovieSceneClock::StaticRegisterNativesUMovieSceneClock,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneClock>,
               InternalVTableHelperCtorCaller<UMovieSceneClock>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneClock.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneExternalClock_NoRegister @ 1462411e0

UClass * __cdecl Z_Construct_UClass_UMovieSceneExternalClock_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneExternalClock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneExternalClock",
               &Z_Registration_Info_UClass_UMovieSceneExternalClock.InnerSingleton,
               UMovieSceneExternalClock::StaticRegisterNativesUMovieSceneExternalClock,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneExternalClock>,
               InternalVTableHelperCtorCaller<UMovieSceneExternalClock>,local_res8,
               UMovieSceneClock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneExternalClock.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneHookSection_NoRegister @ 1462412a0

UClass * __cdecl Z_Construct_UClass_UMovieSceneHookSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHookSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneHookSection",
               &Z_Registration_Info_UClass_UMovieSceneHookSection.InnerSingleton,
               UMovieSceneHookSection::StaticRegisterNativesUMovieSceneHookSection,0x128,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneHookSection>,
               InternalVTableHelperCtorCaller<UMovieSceneHookSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHookSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMetaData_NoRegister @ 146241360

UClass * __cdecl Z_Construct_UClass_UMovieSceneMetaData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneMetaData",
               &Z_Registration_Info_UClass_UMovieSceneMetaData.InnerSingleton,
               UMovieSceneMetaData::StaticRegisterNativesUMovieSceneMetaData,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"EditorSettings",InternalConstructor<UMovieSceneMetaData>,
               InternalVTableHelperCtorCaller<UMovieSceneMetaData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMetaData.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister @ 146241410

UClass * __cdecl Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNameableTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNameableTrack",
               &Z_Registration_Info_UClass_UMovieSceneNameableTrack.InnerSingleton,
               UMovieSceneNameableTrack::StaticRegisterNativesUMovieSceneNameableTrack,0x118,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneNameableTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNameableTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNameableTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister @ 1462414d0

UClass * __cdecl Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequencePlayer",
               &Z_Registration_Info_UClass_UMovieSceneSequencePlayer.InnerSingleton,
               UMovieSceneSequencePlayer::StaticRegisterNativesUMovieSceneSequencePlayer,0x4b0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequencePlayer>,
               InternalVTableHelperCtorCaller<UMovieSceneSequencePlayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequencePlayer.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSignedObject_NoRegister @ 146241580

UClass * __cdecl Z_Construct_UClass_UMovieSceneSignedObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSignedObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSignedObject",
               &Z_Registration_Info_UClass_UMovieSceneSignedObject.InnerSingleton,
               UMovieSceneSignedObject::StaticRegisterNativesUMovieSceneSignedObject,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSignedObject>
               ,InternalVTableHelperCtorCaller<UMovieSceneSignedObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSignedObject.InnerSingleton;
}

// Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace @ 146241630

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace(void)

{
  if (Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneBinding @ 146241670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBinding.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBinding.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneBindingProxy @ 1462416f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingProxy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneBindingProxy.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingProxy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneBindingProxy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneBindingReferences @ 146241770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingReferences(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingReferences.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneBindingReferences.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneBindingReferences_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingReferences.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneBindingReferences.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneBindingResolveParams @ 1462417f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneBindingResolveParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingResolveParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneBindingResolveParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneBindingResolveParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingResolveParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneBindingResolveParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer @ 146241870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable @ 1462418f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable.InnerSingleton
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

// Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams @ 146241970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveParams.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieScenePossessable @ 1462419f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieScenePossessable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieScenePossessable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieScenePossessable.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieScenePossessable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieScenePossessable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieScenePropertyBinding @ 146241a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieScenePropertyBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieScenePropertyBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieScenePropertyBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieScenePropertyBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieScenePropertyBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames @ 146241af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersFrames.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersFrames.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersFrames.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersFrames.InnerSingleton
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

// Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds @ 146241b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersSeconds.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersSeconds.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersSeconds.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSectionTimingParametersSeconds.
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

// Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData @ 146241bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr @ 146241c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceDataPtr.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceDataPtr.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceDataPtr.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceDataPtr.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval @ 146241cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTickInterval.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTickInterval.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTickInterval.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTickInterval.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneSpawnable @ 146241d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSpawnable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSpawnable.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSpawnable.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSpawnable.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSpawnable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions @ 146241df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackDisplayOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackDisplayOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackDisplayOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackDisplayOptions.InnerSingleton;
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

// IMPLEMENT_MODULE_MovieScene @ 146244960

void __cdecl IMPLEMENT_MODULE_MovieScene(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarLegacyConversionFrameRate'' @ 1503d9870

void __cdecl _dynamic_atexit_destructor_for__CVarLegacyConversionFrameRate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLegacyConversionFrameRate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMovieSceneMaxLatentActionLoops'' @ 1503d9890

void __cdecl
UE::MovieScene::_dynamic_atexit_destructor_for__CVarMovieSceneMaxLatentActionLoops__(void)

{
  CVarMovieSceneMaxLatentActionLoops._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMovieSceneMaxLatentActionLoops)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarMovieSceneRemoveMutedTracksOnCook'' @ 1503d98b0

void __cdecl _dynamic_atexit_destructor_for__CVarMovieSceneRemoveMutedTracksOnCook__(void)

{
  CVarMovieSceneRemoveMutedTracksOnCook._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMovieSceneRemoveMutedTracksOnCook);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMovieSceneSuppressSignatureChangeInCook'' @ 1503d98d0

void __cdecl _dynamic_atexit_destructor_for__CVarMovieSceneSuppressSignatureChangeInCook__(void)

{
  CVarMovieSceneSuppressSignatureChangeInCook._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMovieSceneSuppressSignatureChangeInCook);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMovieSceneTickIntervalResolutionMs'' @ 1503d98f0

void __cdecl
UE::MovieScene::_dynamic_atexit_destructor_for__CVarMovieSceneTickIntervalResolutionMs__(void)

{
  CVarMovieSceneTickIntervalResolutionMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMovieSceneTickIntervalResolutionMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerApplyDisplayRateToDynResFrameTimeBudget'' @ 1503d9910

void __cdecl
_dynamic_atexit_destructor_for__CVarSequencerApplyDisplayRateToDynResFrameTimeBudget__(void)

{
  CVarSequencerApplyDisplayRateToDynResFrameTimeBudget._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSequencerApplyDisplayRateToDynResFrameTimeBudget);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerMaxSmoothedNetSyncSampleAge'' @ 1503d9930

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerMaxSmoothedNetSyncSampleAge__(void)

{
  CVarSequencerMaxSmoothedNetSyncSampleAge._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSequencerMaxSmoothedNetSyncSampleAge);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerMaxSmoothedNetSyncSampleCount'' @ 1503d9950

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerMaxSmoothedNetSyncSampleCount__(void)

{
  CVarSequencerMaxSmoothedNetSyncSampleCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSequencerMaxSmoothedNetSyncSampleCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerNetSyncThresholdMS'' @ 1503d9970

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerNetSyncThresholdMS__(void)

{
  CVarSequencerNetSyncThresholdMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSequencerNetSyncThresholdMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerRelativeTimecodeSmoothing'' @ 1503d9990

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerRelativeTimecodeSmoothing__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSequencerRelativeTimecodeSmoothing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerSecondsPerFrame'' @ 1503d99b0

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerSecondsPerFrame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSequencerSecondsPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerSmoothedNetSyncDeviationThreshold'' @ 1503d99d0

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerSmoothedNetSyncDeviationThreshold__(void)

{
  CVarSequencerSmoothedNetSyncDeviationThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSequencerSmoothedNetSyncDeviationThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CachedCustomBindingTypes'' @ 1503d99f0

void __cdecl
`MovieSceneHelpers::TryCreateCustomSpawnableBinding'::__l2::
_dynamic_atexit_destructor_for__CachedCustomBindingTypes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CachedCustomBindingTypes.AllocatorInstance.Data;
  if (CachedCustomBindingTypes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CachedCustomBindingTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Empty'' @ 1503d9a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `UMovieSceneTrack::GetAllSections'::__l2::_dynamic_atexit_destructor_for__Empty__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Empty;
  if (_Empty == (void *)0x0) {
    return;
  }
  if (_Empty != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyBindings'' @ 1503d9a30

void __cdecl
`UMovieSceneSequence::FindBindingsByTag'::__l2::_dynamic_atexit_destructor_for__EmptyBindings__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyBindings.AllocatorInstance.Data;
  if (EmptyBindings.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyBindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GDeferredSignedObjectChangeHandler'' @ 1503d9a50

void __cdecl
UE::MovieScene::_dynamic_atexit_destructor_for__GDeferredSignedObjectChangeHandler__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController =
       GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController;
  if (GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(GDeferredSignedObjectChangeHandler.WeakReferenceCount.ReferenceController)->
              WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001503d9a73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'GDeferredSignedObjectFlushSignals'' @ 1503d9a80

void __cdecl
UE::MovieScene::_dynamic_atexit_destructor_for__GDeferredSignedObjectFlushSignals__(void)

{
  GDeferredSignedObjectFlushSignals.HashSize = 0;
  if (GDeferredSignedObjectFlushSignals.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GDeferredSignedObjectFlushSignals.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GDeferredSignedObjectFlushSignals.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'GGlobalPlayerRegistry'' @ 1503d9ac0

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__GGlobalPlayerRegistry__(void)

{
  GGlobalPlayerRegistry._8_4_ = 0;
  if (GGlobalPlayerRegistry._12_4_ != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&GGlobalPlayerRegistry,0,
               (int *)&GGlobalPlayerRegistry.field_0xc);
  }
  GGlobalPlayerRegistry._48_4_ = 0xffffffff;
  GGlobalPlayerRegistry._52_4_ = 0;
  GGlobalPlayerRegistry._40_4_ = 0;
  if (0x80 < (uint)GGlobalPlayerRegistry._44_4_) {
    GGlobalPlayerRegistry._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GGlobalPlayerRegistry.field_0x10,0);
  }
  if (GGlobalPlayerRegistry._32_8_ != 0) {
    FMemory::Free((void *)GGlobalPlayerRegistry._32_8_);
  }
  if (GGlobalPlayerRegistry._0_8_ != 0) {
    FMemory::Free((void *)GGlobalPlayerRegistry._0_8_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GGlobalPlayerRegistryLock'' @ 1503d9b70

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__GGlobalPlayerRegistryLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&GGlobalPlayerRegistryLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001503d9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&GGlobalPlayerRegistryLock);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GGlobalPlayerUpdateFlags'' @ 1503d9bd0

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__GGlobalPlayerUpdateFlags__(void)

{
  ForElementType<unsigned_int> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData;
  if (GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0)
  {
    return;
  }
  if (GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogMovieScene'' @ 1503d9bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMovieScene__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMovieScene);
  return;
}

// `dynamic_atexit_destructor_for_'LogMovieSceneECS'' @ 1503d9c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMovieSceneECS__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMovieSceneECS);
  return;
}

// `dynamic_atexit_destructor_for_'LogMovieSceneRepl'' @ 1503d9c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMovieSceneRepl__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMovieSceneRepl);
  return;
}

// `dynamic_atexit_destructor_for_'SpawnablesAnnotation'' @ 1503d9c50

void __cdecl _dynamic_atexit_destructor_for__SpawnablesAnnotation__(void)

{
  FUObjectAnnotationSparse<FIsSpawnable,1>::~FUObjectAnnotationSparse<FIsSpawnable,1>
            (&SpawnablesAnnotation);
  return;
}

// `dynamic_atexit_destructor_for_'SpawnedObjectAnnotation'' @ 1503d9c70

void __cdecl _dynamic_atexit_destructor_for__SpawnedObjectAnnotation__(void)

{
  FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::
  ~FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>(&SpawnedObjectAnnotation);
  return;
}

