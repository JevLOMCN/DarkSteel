// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 249

// `dynamic_initializer_for_'CVarRichComponentDebugging'' @ 141086620

void __cdecl UE::MovieScene::_dynamic_initializer_for__CVarRichComponentDebugging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRichComponentDebugging,L"Sequencer.RichComponentDebugging",
             &GRichComponentDebugging,
             L"(Default: false. Whether to enable rich component debugging within Sequencer.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRichComponentDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarThreadedEvaluationAllocationThreshold'' @ 141086670

void __cdecl
UE::MovieScene::_dynamic_initializer_for__CVarThreadedEvaluationAllocationThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarThreadedEvaluationAllocationThreshold,
             L"Sequencer.ThreadedEvaluation.AllocationThreshold",
             &GThreadedEvaluationAllocationThreshold,
             L"(Default: 32) Defines the entity allocation fragmentation threshold above which threaded evaluation will be used.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarThreadedEvaluationAllocationThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarThreadedEvaluationEntityThreshold'' @ 1410866c0

void __cdecl UE::MovieScene::_dynamic_initializer_for__CVarThreadedEvaluationEntityThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarThreadedEvaluationEntityThreshold,L"Sequencer.ThreadedEvaluation.EntityThreshold",
             &GThreadedEvaluationEntityThreshold,
             L"(Default: 256) Defines the number of entities that need to exist to justify threaded evaluation.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarThreadedEvaluationEntityThreshold__);
  return;
}

// `dynamic_initializer_for_'Everything'' @ 141086710

void __cdecl UE::MovieScene::FlushState::_dynamic_initializer_for__Everything__(void)

{
  Everything = LoopEval | Start;
  return;
}

// `dynamic_initializer_for_'GComponentRegistry'' @ 141086730

void __cdecl UE::MovieScene::_dynamic_initializer_for__GComponentRegistry__(void)

{
  atexit(_dynamic_atexit_destructor_for__GComponentRegistry__);
  return;
}

// `dynamic_initializer_for_'GInitialValueProcessors'' @ 141086750

void __cdecl UE::MovieScene::_dynamic_initializer_for__GInitialValueProcessors__(void)

{
  atexit(_dynamic_atexit_destructor_for__GInitialValueProcessors__);
  return;
}

// `dynamic_initializer_for_'GlobalDependencyGraph'' @ 141086770

void __cdecl UE::MovieScene::_dynamic_initializer_for__GlobalDependencyGraph__(void)

{
  atexit(_dynamic_atexit_destructor_for__GlobalDependencyGraph__);
  return;
}

// `dynamic_initializer_for_'SpawnableAnimTypeID'' @ 141086790

void __cdecl UE::MovieScene::_dynamic_initializer_for__SpawnableAnimTypeID__(void)

{
  FMovieSceneAnimTypeID::Unique();
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneECS_GenericHooks'' @ 1410867b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneECS_GenericHooks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneECS_GenericHooks ==
      (FThreadSafeStaticStat<FStat_MovieSceneECS_GenericHooks>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneECS_GenericHooks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneECS_GenericHooks,*pFVar1,
               L"Generic Hooks","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 141086840

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 1410868d0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AssignEvalTimes'' @ 141086960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_AssignEvalTimes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_AssignEvalTimes ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_AssignEvalTimes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AssignEvalTimes,*pFVar1,
               L"MovieScene: Assign evaluation times","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AsyncInstantiationTasks'' @ 1410869f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_AsyncInstantiationTasks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_AsyncInstantiationTasks ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_AsyncInstantiationTasks>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_AsyncInstantiationTasks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AsyncInstantiationTasks,*pFVar1,
               L"Instantiation Async Tasks","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_DestroySpawnables'' @ 141086a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_DestroySpawnables__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_DestroySpawnables ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_DestroySpawnables>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_DestroySpawnables");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_DestroySpawnables,*pFVar1,
               L"Spawnables: Destroy","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_EvaluationPhase'' @ 141086b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_EvaluationPhase__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_EvaluationPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluationPhase>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_EvaluationPhase");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluationPhase,*pFVar1,
               L"Evaluation Phase","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_FinalizationPhase'' @ 141086ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_FinalizationPhase__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_FinalizationPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_FinalizationPhase>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_FinalizationPhase");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_FinalizationPhase,*pFVar1,
               L"Finalization Phase","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_GatherEvalTimes'' @ 141086c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_GatherEvalTimes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_GatherEvalTimes ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_GatherEvalTimes>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_GatherEvalTimes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GatherEvalTimes,*pFVar1,
               L"MovieScene: Gather evaluation times","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_InstantiationPhase'' @ 141086cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_InstantiationPhase__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_InstantiationPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_InstantiationPhase>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_InstantiationPhase");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_InstantiationPhase,*pFVar1,
               L"Instantiation Phase","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_LinkRelevantSystems'' @ 141086d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_LinkRelevantSystems__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_LinkRelevantSystems ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_LinkRelevantSystems>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_LinkRelevantSystems");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_LinkRelevantSystems,*pFVar1,
               L"Link Relevant Systems","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 141086de0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PostEvaluationPhase'' @ 141086e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PostEvaluationPhase__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PostEvaluationPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PostEvaluationPhase>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PostEvaluationPhase");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PostEvaluationPhase,*pFVar1,
               L"Post Evaluation Phase","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PostInstantiation'' @ 141086f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PostInstantiation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PostInstantiation ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PostInstantiation>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PostInstantiation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PostInstantiation,*pFVar1,
               L"Post Instantiation","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PostSpawnEvent'' @ 141086f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PostSpawnEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PostSpawnEvent ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PostSpawnEvent>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PostSpawnEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PostSpawnEvent,*pFVar1,
               L"Post Spawn Event","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 141087020

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_RunnerFlush'' @ 1410870b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_RunnerFlush__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_RunnerFlush ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_RunnerFlush>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_RunnerFlush");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_RunnerFlush,*pFVar1,
               L"Runner Flush","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_SequenceInstancePostUpdate'' @ 141087140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_SequenceInstancePostUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_SequenceInstancePostUpdate ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstancePostUpdate>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_SequenceInstancePostUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SequenceInstancePostUpdate,
               *pFVar1,L"[External] Sequence Instance Post-Update","STATGROUP_MovieSceneEval",
               "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_SequenceInstanceUpdate'' @ 1410871d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_SequenceInstanceUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_SequenceInstanceUpdate ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SequenceInstanceUpdate>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_SequenceInstanceUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SequenceInstanceUpdate,*pFVar1,
               L"Sequence Instance Update","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_SpawnPhase'' @ 141087260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_SpawnPhase__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_SpawnPhase ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_SpawnPhase>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_SpawnPhase");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SpawnPhase,*pFVar1,
               L"Spawn Phase","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_SpawnSpawnables'' @ 1410872f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_SpawnSpawnables__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_SpawnSpawnables ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SpawnSpawnables>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_SpawnSpawnables");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SpawnSpawnables,*pFVar1,
               L"Spawnables: Spawn","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_SpawnablesSystem'' @ 141087380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_SpawnablesSystem__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_SpawnablesSystem ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SpawnablesSystem>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_SpawnablesSystem");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SpawnablesSystem,*pFVar1,
               L"Spawnables System","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_UnlinkStaleObjectBindings'' @ 141087410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_UnlinkStaleObjectBindings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_UnlinkStaleObjectBindings ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_UnlinkStaleObjectBindings>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_UnlinkStaleObjectBindings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_UnlinkStaleObjectBindings,
               *pFVar1,L"UnlinkStaleObjectBindings","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'SystemStats'' @ 1410874a0

void __cdecl UE::MovieScene::_dynamic_initializer_for__SystemStats__(void)

{
  atexit(_dynamic_atexit_destructor_for__SystemStats__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h__Script_MovieScene_2006603493'' @ 1410874c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h__Script_MovieScene_2006603493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityGroupingSystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h__Script_MovieScene_470966982'' @ 141087500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h__Script_MovieScene_470966982__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h__Script_MovieScene_2815039764'' @ 141087540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h__Script_MovieScene_2815039764__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h__Script_MovieScene_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h__Script_MovieScene_3454978055'' @ 141087580

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h__Script_MovieScene_3454978055__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystem_h__Script_MovieScene_3064427315'' @ 1410875c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystem_h__Script_MovieScene_3064427315__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h__Script_MovieScene_1888204718'' @ 141087600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h__Script_MovieScene_1888204718__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h__Script_MovieScene_4163261584'' @ 141087640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h__Script_MovieScene_4163261584__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h__Script_MovieScene_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h__Script_MovieScene_4156273050'' @ 141087690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h__Script_MovieScene_4156273050__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneInitialValueSystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h__Script_MovieScene_2496693864'' @ 1410876d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h__Script_MovieScene_2496693864__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h__Script_MovieScene_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h__Script_MovieScene_3126170652'' @ 141087710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h__Script_MovieScene_3126170652__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h__Script_MovieScene_2031406991'' @ 141087750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h__Script_MovieScene_2031406991__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneSpawnablesSystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister @ 146100b00

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMovieSceneEntitySystemLinker::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntitySystemLinker",
               &Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.InnerSingleton,
               UMovieSceneEntitySystemLinker::StaticRegisterNativesUMovieSceneEntitySystemLinker,
               0x798,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntitySystemLinker>,
               InternalVTableHelperCtorCaller<UMovieSceneEntitySystemLinker>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSpawnablesSystem @ 146100c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSpawnablesSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSpawnablesSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem @ 146100f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface @ 146100f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface(void)

{
  if (Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.OuterSingleton
               ,&Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem @ 146100fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneEvaluationHookSystem @ 146101050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEvaluationHookSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent @ 146101090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEvent.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEvent.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer @ 146101110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEventContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEventContainer.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEventContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookEventContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey @ 146101190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationInstanceKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationInstanceKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationInstanceKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationInstanceKey.InnerSingleton;
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

// NewStructOps @ 146101210

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationHookEvent,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationHookEvent>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationHookEvent>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationHookEvent>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationHookEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146101330

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationHookEventContainer,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationHookEventContainer>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationHookEventContainer>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationHookEventContainer>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationHookEventContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146101370

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationInstanceKey,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationInstanceKey>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationInstanceKey>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationInstanceKey>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationInstanceKey>,&UE::CoreUObject::Private::GetStructTypeHash<FMovieSceneEvaluationInstanceKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneEntitySystemLinker @ 1461013b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntitySystemLinker(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneEntityGroupingSystem @ 146101530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntityGroupingSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEntityGroupingSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneEntitySystem @ 146101570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntitySystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEntitySystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEntitySystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEntitySystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntitySystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneRootInstantiatorSystem @ 146101720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneRootInstantiatorSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneEvalTimeSystem @ 146101760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEvalTimeSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneInitialValueSystem @ 1461019f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneInitialValueSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem @ 146101af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph @ 146101b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraph.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraph.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraph.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraph.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes @ 146101c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNodes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNodes.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNodes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNodes.InnerSingleton;
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

// NewStructOps @ 146101cb0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEntitySystemGraphNode,&UE::CoreUObject::Private::Construct<FMovieSceneEntitySystemGraphNode>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEntitySystemGraphNode>,&UE::CoreUObject::Private::Destruct<FMovieSceneEntitySystemGraphNode>,&UE::CoreUObject::Private::Copy<FMovieSceneEntitySystemGraphNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146101cf0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEntitySystemGraphNodes,&UE::CoreUObject::Private::Construct<FMovieSceneEntitySystemGraphNodes>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEntitySystemGraphNodes>,&UE::CoreUObject::Private::Destruct<FMovieSceneEntitySystemGraphNodes>,&UE::CoreUObject::Private::Copy<FMovieSceneEntitySystemGraphNodes>,&UE::CoreUObject::Private::AddStructReferencedObjects<FMovieSceneEntitySystemGraphNodes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146101d30

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 400;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEntitySystemGraph,&UE::CoreUObject::Private::Construct<FMovieSceneEntitySystemGraph>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEntitySystemGraph>,&UE::CoreUObject::Private::Destruct<FMovieSceneEntitySystemGraph>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister @ 146101d70

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntitySystem",
               &Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton,
               UMovieSceneEntitySystem::StaticRegisterNativesUMovieSceneEntitySystem,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEntitySystem>
               ,InternalVTableHelperCtorCaller<UMovieSceneEntitySystem>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntitySystem.InnerSingleton;
}

// AddStructReferencedObjectsOrNot<FMovieSceneEntitySystemGraphNodes> @ 146102ec0

void __cdecl
AddStructReferencedObjectsOrNot<FMovieSceneEntitySystemGraphNodes>
          (void *param_1,FReferenceCollector *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  uint uVar11;
  undefined1 auStackX_8 [8];
  FReferenceCollector *pFStackX_10;
  int iStackX_18;
  int iStack_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  int iStack_40;
  
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x10);
  uStack_84 = 1;
  iStack_88 = 0;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar10 = pTVar1;
    }
    uVar9 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
    iStack_70 = 0;
    iStack_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar7 = (longlong)iStack_88;
      iStack_88 = iStack_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_1461237aa;
      uVar9 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar7 * 4 + 4);
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStackX_18 = (int)lVar7;
    iStack_74 = iStackX_18 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_1461237aa:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)((longlong)param_1 + 0x28);
  iStack_40 = *(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34);
  TStack_60._padding_ = CONCAT44(uStack_84,iStack_88);
  iVar8 = (int)uVar9 >> 5;
  TStack_60.CurrentBitIndex = iStack_74;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = uStack_6c;
  TStack_60.BaseBitIndex = iStack_70;
  uVar11 = uVar9 & 0xffffffe0;
  pFStackX_10 = param_2;
  TStack_60.Array = pTVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x28);
  if (uVar9 != uVar4) {
    pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar10 = pTVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) &
            *(uint *)((pTVar10->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar11 = uVar11 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_146123890;
      uVar9 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_146123890:
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34) != iStack_40) {
      `TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) && (TStack_60.Array == pTVar1)) break;
    (**(code **)(pFStackX_10->_padding_ + 0x88))
              (pFStackX_10,*(longlong *)param_1 + ((longlong)TStack_60.CurrentBitIndex * 5 + 4) * 8,
               0,0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// BinarySearch<TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_>,UE::MovieScene::FDirectedGraph::FDirectionalEdge,TLess<void>_> @ 1461035b0

int __cdecl
Algo::
BinarySearch<TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_>,UE::MovieScene::FDirectedGraph::FDirectionalEdge,TLess<void>_>
          (TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_>
           *param_1,FDirectionalEdge *param_2,TLess<void> param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar5 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      bVar7 = *(ushort *)(pFVar2 + (longlong)iVar4 * 4) < param_2->FromNode;
      if (*(ushort *)(pFVar2 + (longlong)iVar4 * 4) == param_2->FromNode) {
        bVar7 = *(ushort *)(pFVar2 + (longlong)iVar4 * 4 + 2) < param_2->ToNode;
      }
      if (bVar7) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
    if (iVar5 < (int)uVar1) {
      bVar7 = param_2->FromNode < *(ushort *)(pFVar2 + (longlong)iVar5 * 4);
      if (param_2->FromNode == *(ushort *)(pFVar2 + (longlong)iVar5 * 4)) {
        bVar7 = param_2->ToNode < *(ushort *)(pFVar2 + (longlong)iVar5 * 4 + 2);
      }
      iVar4 = -1;
      if (!bVar7) {
        iVar4 = iVar5;
      }
      return iVar4;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 146103670

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FMovieSceneSequenceID *param_2,FKeyForward param_3,
          TLess<FMovieSceneSequenceID_const_&> param_4)

{
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar1;
  uint uVar2;
  int iVar3;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar4;
  uint uVar5;
  int iVar6;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
           )param_1;
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    FVar4 = FVar1;
  }
  iVar6 = 0;
  if (0 < param_1->ArrayNum) {
    uVar5 = param_1->ArrayNum;
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      if (*(uint *)((longlong)FVar4 + (longlong)iVar3 * 0x18) < param_2->Value) {
        iVar6 = iVar3 + (uVar5 & 1);
      }
      uVar2 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar2 != 0);
  }
  if (param_1->ArrayNum <= iVar6) {
    return -1;
  }
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    param_1 = (TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)FVar1;
  }
  iVar3 = -1;
  if (*(uint *)((longlong)param_1 + (longlong)iVar6 * 0x18) <= param_2->Value) {
    iVar3 = iVar6;
  }
  return iVar3;
}

// BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,`TBitArray<TFixedAllocator<12>_>::BitwiseOR<TFixedAllocator<12>,TFixedAllocator<12>_>'::__l2::<lambda_1>_> @ 146103730

void __cdecl
UE::Core::Private::
BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseOR<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
          (TBitArray<TFixedAllocator<12>_> *param_1,TBitArray<TFixedAllocator<12>_> *param_2,
          TBitArray<TFixedAllocator<12>_> *param_3,EBitwiseOperatorFlags param_4,<lambda_1> *param_5
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TBitArray<TFixedAllocator<12>_> *pTVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  EBitwiseOperatorFlags EVar17;
  
  if ((((param_1 == param_2) || (param_1 == param_3)) || (param_2 == param_3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(const void*)&InA != (const void*)&InB && (const void*)&InA != (const void*)&OutResult && (const void*)&InB != (const void*)&OutResult"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x4c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_4 & MinSize) == 0) {
    if ((param_4 & MaxSize) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x83,L"Invalid size flag specified for binary bitwise AND");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      uVar10 = param_2->NumBits;
      if (param_2->NumBits < param_1->NumBits) {
        uVar10 = param_1->NumBits;
      }
      EVar17 = param_4 & OneFillMissingBits;
      uVar3 = -(uint)(EVar17 != 0);
      if (uVar10 != 0) {
        TBitArray<TFixedAllocator<12>_>::Reserve(param_3,uVar10);
        param_3->NumBits = uVar10;
        iVar4 = param_1->NumBits + 0x1f;
        iVar4 = (int)((iVar4 >> 0x1f & 0x1fU) + iVar4) >> 5;
        uVar12 = param_1->NumBits & 0x8000001f;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
        }
        uVar5 = 0xffffffff;
        uVar9 = 0xffffffff >> ((byte)(0x20 - uVar12) & 0x1f);
        if (0x1f < (int)(0x20 - uVar12)) {
          uVar9 = uVar5;
        }
        uVar12 = uVar5;
        if (iVar4 == 1) {
          uVar12 = uVar9;
        }
        iVar6 = param_2->NumBits + 0x1f;
        iVar6 = (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5;
        uVar13 = param_2->NumBits & 0x8000001f;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
        }
        uVar8 = 0xffffffff >> ((byte)(0x20 - uVar13) & 0x1f);
        if (0x1f < (int)(0x20 - uVar13)) {
          uVar8 = 0xffffffff;
        }
        if (iVar6 == 1) {
          uVar5 = uVar8;
        }
        uVar16 = 0;
        iVar7 = (int)(((int)(uVar10 + 0x1f) >> 0x1f & 0x1fU) + uVar10 + 0x1f) >> 5;
        uVar10 = uVar10 & 0x8000001f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
        }
        uVar13 = 0xffffffff >> ((byte)(0x20 - uVar10) & 0x1f);
        if (0x1f < (int)(0x20 - uVar10)) {
          uVar13 = 0xffffffff;
        }
        if (0 < iVar7) {
          pTVar11 = param_3;
          do {
            iVar15 = (int)uVar16;
            uVar10 = uVar3;
            if ((iVar15 < iVar4) &&
               (uVar10 = *(uint *)(param_1->AllocatorInstance).InlineData[uVar16].Pad,
               uVar12 != 0xffffffff)) {
              if (EVar17 == 0) {
                uVar10 = uVar10 & uVar12;
              }
              else {
                uVar10 = ~uVar12 & uVar3 | uVar10 & uVar12;
              }
            }
            uVar12 = uVar3;
            if ((iVar15 < iVar6) &&
               (uVar12 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar16].Pad,
               uVar5 != 0xffffffff)) {
              if (EVar17 == 0) {
                uVar12 = uVar12 & uVar5;
              }
              else {
                uVar12 = ~uVar5 & uVar3 | uVar12 & uVar5;
              }
            }
            uVar5 = uVar13 & (uVar12 | uVar10);
            if (iVar15 != iVar7 + -1) {
              uVar5 = uVar12 | uVar10;
            }
            uVar10 = iVar15 + 1;
            uVar16 = (ulonglong)uVar10;
            *(uint *)(pTVar11->AllocatorInstance).InlineData[0].Pad = uVar5;
            pTVar11 = (TBitArray<TFixedAllocator<12>_> *)
                      ((pTVar11->AllocatorInstance).InlineData + 1);
            uVar12 = 0xffffffff;
            if (uVar10 == iVar4 - 1U) {
              uVar12 = uVar9;
            }
            uVar5 = 0xffffffff;
            if (uVar10 == iVar6 - 1U) {
              uVar5 = uVar8;
            }
          } while ((int)uVar10 < iVar7);
        }
      }
    }
  }
  else {
    uVar10 = param_2->NumBits;
    if (param_1->NumBits < param_2->NumBits) {
      uVar10 = param_1->NumBits;
    }
    if (0 < (int)uVar10) {
      TBitArray<TFixedAllocator<12>_>::Reserve(param_3,uVar10);
      param_3->NumBits = uVar10;
      uVar3 = param_1->NumBits & 0x8000001f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
      }
      iVar4 = param_1->NumBits + 0x1f;
      uVar9 = 0xffffffff;
      uVar12 = 0xffffffff >> ((byte)(0x20 - uVar3) & 0x1f);
      if (0x1f < (int)(0x20 - uVar3)) {
        uVar12 = uVar9;
      }
      iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
      uVar3 = 0xffffffff;
      if (iVar4 == 1) {
        uVar3 = uVar12;
      }
      uVar5 = param_2->NumBits & 0x8000001f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
      }
      iVar6 = param_2->NumBits + 0x1f;
      uVar13 = 0xffffffff >> ((byte)(0x20 - uVar5) & 0x1f);
      if (0x1f < (int)(0x20 - uVar5)) {
        uVar13 = uVar9;
      }
      iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
      if (iVar6 == 1) {
        uVar9 = uVar13;
      }
      uVar16 = 0;
      iVar7 = (int)(uVar10 + 0x1f + ((int)(uVar10 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      uVar8 = 0xffffffff;
      uVar5 = 0xffffffff >> ((byte)(0x20 - uVar10) & 0x1f);
      if (0x1f < (int)(0x20 - uVar10)) {
        uVar5 = uVar8;
      }
      if (0 < iVar7) {
        pTVar11 = param_3;
        do {
          uVar10 = *(uint *)(param_1->AllocatorInstance).InlineData[uVar16].Pad;
          uVar14 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar16].Pad & uVar9;
          if (uVar9 == 0xffffffff) {
            uVar14 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar16].Pad;
          }
          uVar9 = uVar10 & uVar3;
          if (uVar3 == 0xffffffff) {
            uVar9 = uVar10;
          }
          uVar10 = (uVar9 | uVar14) & uVar5;
          if ((int)uVar16 != iVar7 + -1) {
            uVar10 = uVar9 | uVar14;
          }
          uVar14 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar14;
          *(uint *)(pTVar11->AllocatorInstance).InlineData[0].Pad = uVar10;
          uVar3 = uVar8;
          if (uVar14 == iVar4 - 1U) {
            uVar3 = uVar12;
          }
          uVar9 = uVar8;
          if (uVar14 == iVar6 - 1U) {
            uVar9 = uVar13;
          }
          pTVar11 = (TBitArray<TFixedAllocator<12>_> *)((pTVar11->AllocatorInstance).InlineData + 1)
          ;
        } while ((int)uVar14 < iVar7);
      }
    }
  }
  TBitArray<TFixedAllocator<12>_>::CheckInvariants(param_3);
  return;
}

// BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,`TBitArray<TFixedAllocator<12>_>::BitwiseXOR<TFixedAllocator<12>,TFixedAllocator<12>_>'::__l2::<lambda_1>_> @ 146103b30

void __cdecl
UE::Core::Private::
BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseXOR<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
          (TBitArray<TFixedAllocator<12>_> *param_1,TBitArray<TFixedAllocator<12>_> *param_2,
          TBitArray<TFixedAllocator<12>_> *param_3,EBitwiseOperatorFlags param_4,<lambda_1> *param_5
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TBitArray<TFixedAllocator<12>_> *pTVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  EBitwiseOperatorFlags EVar17;
  
  if ((((param_1 == param_2) || (param_1 == param_3)) || (param_2 == param_3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(const void*)&InA != (const void*)&InB && (const void*)&InA != (const void*)&OutResult && (const void*)&InB != (const void*)&OutResult"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x4c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_4 & MinSize) == 0) {
    if ((param_4 & MaxSize) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x83,L"Invalid size flag specified for binary bitwise AND");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      uVar10 = param_2->NumBits;
      if (param_2->NumBits < param_1->NumBits) {
        uVar10 = param_1->NumBits;
      }
      EVar17 = param_4 & OneFillMissingBits;
      uVar3 = -(uint)(EVar17 != 0);
      if (uVar10 != 0) {
        TBitArray<TFixedAllocator<12>_>::Reserve(param_3,uVar10);
        param_3->NumBits = uVar10;
        iVar4 = param_1->NumBits + 0x1f;
        iVar4 = (int)((iVar4 >> 0x1f & 0x1fU) + iVar4) >> 5;
        uVar12 = param_1->NumBits & 0x8000001f;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
        }
        uVar5 = 0xffffffff;
        uVar9 = 0xffffffff >> ((byte)(0x20 - uVar12) & 0x1f);
        if (0x1f < (int)(0x20 - uVar12)) {
          uVar9 = uVar5;
        }
        uVar12 = uVar5;
        if (iVar4 == 1) {
          uVar12 = uVar9;
        }
        iVar6 = param_2->NumBits + 0x1f;
        iVar6 = (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5;
        uVar13 = param_2->NumBits & 0x8000001f;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
        }
        uVar8 = 0xffffffff >> ((byte)(0x20 - uVar13) & 0x1f);
        if (0x1f < (int)(0x20 - uVar13)) {
          uVar8 = 0xffffffff;
        }
        if (iVar6 == 1) {
          uVar5 = uVar8;
        }
        uVar16 = 0;
        iVar7 = (int)(((int)(uVar10 + 0x1f) >> 0x1f & 0x1fU) + uVar10 + 0x1f) >> 5;
        uVar10 = uVar10 & 0x8000001f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
        }
        uVar13 = 0xffffffff >> ((byte)(0x20 - uVar10) & 0x1f);
        if (0x1f < (int)(0x20 - uVar10)) {
          uVar13 = 0xffffffff;
        }
        if (0 < iVar7) {
          pTVar11 = param_3;
          do {
            iVar15 = (int)uVar16;
            uVar10 = uVar3;
            if ((iVar15 < iVar4) &&
               (uVar10 = *(uint *)(param_1->AllocatorInstance).InlineData[uVar16].Pad,
               uVar12 != 0xffffffff)) {
              if (EVar17 == 0) {
                uVar10 = uVar10 & uVar12;
              }
              else {
                uVar10 = ~uVar12 & uVar3 | uVar10 & uVar12;
              }
            }
            uVar12 = uVar3;
            if ((iVar15 < iVar6) &&
               (uVar12 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar16].Pad,
               uVar5 != 0xffffffff)) {
              if (EVar17 == 0) {
                uVar12 = uVar12 & uVar5;
              }
              else {
                uVar12 = ~uVar5 & uVar3 | uVar12 & uVar5;
              }
            }
            uVar5 = uVar13 & (uVar12 ^ uVar10);
            if (iVar15 != iVar7 + -1) {
              uVar5 = uVar12 ^ uVar10;
            }
            uVar10 = iVar15 + 1;
            uVar16 = (ulonglong)uVar10;
            *(uint *)(pTVar11->AllocatorInstance).InlineData[0].Pad = uVar5;
            pTVar11 = (TBitArray<TFixedAllocator<12>_> *)
                      ((pTVar11->AllocatorInstance).InlineData + 1);
            uVar12 = 0xffffffff;
            if (uVar10 == iVar4 - 1U) {
              uVar12 = uVar9;
            }
            uVar5 = 0xffffffff;
            if (uVar10 == iVar6 - 1U) {
              uVar5 = uVar8;
            }
          } while ((int)uVar10 < iVar7);
        }
      }
    }
  }
  else {
    uVar10 = param_2->NumBits;
    if (param_1->NumBits < param_2->NumBits) {
      uVar10 = param_1->NumBits;
    }
    if (0 < (int)uVar10) {
      TBitArray<TFixedAllocator<12>_>::Reserve(param_3,uVar10);
      param_3->NumBits = uVar10;
      uVar3 = param_1->NumBits & 0x8000001f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
      }
      iVar4 = param_1->NumBits + 0x1f;
      uVar9 = 0xffffffff;
      uVar12 = 0xffffffff >> ((byte)(0x20 - uVar3) & 0x1f);
      if (0x1f < (int)(0x20 - uVar3)) {
        uVar12 = uVar9;
      }
      iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
      uVar3 = 0xffffffff;
      if (iVar4 == 1) {
        uVar3 = uVar12;
      }
      uVar5 = param_2->NumBits & 0x8000001f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
      }
      iVar6 = param_2->NumBits + 0x1f;
      uVar13 = 0xffffffff >> ((byte)(0x20 - uVar5) & 0x1f);
      if (0x1f < (int)(0x20 - uVar5)) {
        uVar13 = uVar9;
      }
      iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
      if (iVar6 == 1) {
        uVar9 = uVar13;
      }
      uVar16 = 0;
      iVar7 = (int)(uVar10 + 0x1f + ((int)(uVar10 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      uVar8 = 0xffffffff;
      uVar5 = 0xffffffff >> ((byte)(0x20 - uVar10) & 0x1f);
      if (0x1f < (int)(0x20 - uVar10)) {
        uVar5 = uVar8;
      }
      if (0 < iVar7) {
        pTVar11 = param_3;
        do {
          uVar10 = *(uint *)(param_1->AllocatorInstance).InlineData[uVar16].Pad;
          uVar14 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar16].Pad & uVar9;
          if (uVar9 == 0xffffffff) {
            uVar14 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar16].Pad;
          }
          uVar9 = uVar10 & uVar3;
          if (uVar3 == 0xffffffff) {
            uVar9 = uVar10;
          }
          uVar10 = (uVar9 ^ uVar14) & uVar5;
          if ((int)uVar16 != iVar7 + -1) {
            uVar10 = uVar9 ^ uVar14;
          }
          uVar14 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar14;
          *(uint *)(pTVar11->AllocatorInstance).InlineData[0].Pad = uVar10;
          uVar3 = uVar8;
          if (uVar14 == iVar4 - 1U) {
            uVar3 = uVar12;
          }
          uVar9 = uVar8;
          if (uVar14 == iVar6 - 1U) {
            uVar9 = uVar13;
          }
          pTVar11 = (TBitArray<TFixedAllocator<12>_> *)((pTVar11->AllocatorInstance).InlineData + 1)
          ;
        } while ((int)uVar14 < iVar7);
      }
    }
  }
  TBitArray<TFixedAllocator<12>_>::CheckInvariants(param_3);
  return;
}

// BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,`TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseAND<TFixedAllocator<12>_>'::__l2::<lambda_1>_> @ 146103f30

void __cdecl
UE::Core::Private::
BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseAND<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
          (TBitArray<TFixedAllocator<12>_> *param_1,TBitArray<TFixedAllocator<12>_> *param_2,
          EBitwiseOperatorFlags param_3,<lambda_1> *param_4)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  if ((param_1 == param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InOther != &OutResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x8f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_2->NumBits;
  iVar8 = iVar6;
  if ((param_3 & MinSize) == 0) {
    if ((param_3 & MaxSize) == 0) goto LAB_146103f90;
    bVar5 = SBORROW4(iVar6,param_1->NumBits);
    iVar2 = iVar6 - param_1->NumBits;
  }
  else {
    bVar5 = SBORROW4(param_1->NumBits,iVar6);
    iVar2 = param_1->NumBits - iVar6;
  }
  if (bVar5 != iVar2 < 0) {
    iVar8 = param_1->NumBits;
  }
LAB_146103f90:
  iVar6 = iVar8 - iVar6;
  if (iVar6 < 0) {
    param_2->NumBits = iVar8;
    uVar10 = iVar8 >> 0x1f & 0x1f;
    uVar7 = iVar8 + uVar10;
    iVar6 = (uVar7 & 0x1f) - uVar10;
    if (iVar6 != 0) {
      pTVar1 = (param_2->AllocatorInstance).InlineData + ((int)uVar7 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & 0xffffffffU >> (-(char)iVar6 & 0x1fU);
    }
  }
  else if (0 < iVar6) {
    TBitArray<TFixedAllocator<12>_>::Add(param_2,(bool)((byte)(param_3 >> 4) & 1),iVar6);
  }
  uVar7 = param_2->NumBits;
  uVar10 = -(uint)((param_3 & OneFillMissingBits) != 0);
  if (uVar7 != 0) {
    iVar6 = param_1->NumBits + 0x1f;
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
    uVar11 = param_1->NumBits & 0x8000001f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
    }
    uVar4 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
    if (0x1f < (int)(0x20 - uVar11)) {
      uVar4 = 0xffffffff;
    }
    uVar11 = 0xffffffff;
    if (iVar6 == 1) {
      uVar11 = uVar4;
    }
    uVar13 = 0;
    iVar8 = (int)(uVar7 + 0x1f + ((int)(uVar7 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    uVar7 = uVar7 & 0x8000001f;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
    }
    uVar14 = 0xffffffff >> ((byte)(0x20 - uVar7) & 0x1f);
    if (0x1f < (int)(0x20 - uVar7)) {
      uVar14 = 0xffffffff;
    }
    uVar7 = 0xffffffff;
    if (iVar8 == 1) {
      uVar7 = uVar14;
    }
    if (0 < iVar8) {
      do {
        uVar12 = (uint)uVar13;
        uVar9 = uVar10;
        if (((int)uVar12 < iVar6) &&
           (uVar9 = *(uint *)(param_1->AllocatorInstance).InlineData[uVar13].Pad,
           uVar11 != 0xffffffff)) {
          if ((param_3 & OneFillMissingBits) == 0) {
            uVar9 = uVar9 & uVar11;
          }
          else {
            uVar9 = ~uVar11 & uVar10 | uVar9 & uVar11;
          }
        }
        uVar11 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar13].Pad & uVar7;
        if (uVar7 == 0xffffffff) {
          uVar11 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar13].Pad;
        }
        uVar7 = uVar11 & uVar9 & uVar14;
        if (uVar12 != iVar8 - 1U) {
          uVar7 = uVar11 & uVar9;
        }
        *(uint *)(param_2->AllocatorInstance).InlineData[uVar13].Pad = uVar7;
        uVar12 = uVar12 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar7 = 0xffffffff;
        if (uVar12 == iVar8 - 1U) {
          uVar7 = uVar14;
        }
        uVar11 = 0xffffffff;
        if (uVar12 == iVar6 - 1U) {
          uVar11 = uVar4;
        }
      } while ((int)uVar12 < iVar8);
    }
  }
  TBitArray<TFixedAllocator<12>_>::CheckInvariants(param_2);
  return;
}

// BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,`TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>'::__l2::<lambda_1>_> @ 146104140

void __cdecl
UE::Core::Private::
BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
          (TBitArray<TFixedAllocator<12>_> *param_1,TBitArray<TFixedAllocator<12>_> *param_2,
          EBitwiseOperatorFlags param_3,<lambda_1> *param_4)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  if ((param_1 == param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InOther != &OutResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x8f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_2->NumBits;
  iVar8 = iVar6;
  if ((param_3 & MinSize) == 0) {
    if ((param_3 & MaxSize) == 0) goto LAB_1461041a0;
    bVar5 = SBORROW4(iVar6,param_1->NumBits);
    iVar2 = iVar6 - param_1->NumBits;
  }
  else {
    bVar5 = SBORROW4(param_1->NumBits,iVar6);
    iVar2 = param_1->NumBits - iVar6;
  }
  if (bVar5 != iVar2 < 0) {
    iVar8 = param_1->NumBits;
  }
LAB_1461041a0:
  iVar6 = iVar8 - iVar6;
  if (iVar6 < 0) {
    param_2->NumBits = iVar8;
    uVar10 = iVar8 >> 0x1f & 0x1f;
    uVar7 = iVar8 + uVar10;
    iVar6 = (uVar7 & 0x1f) - uVar10;
    if (iVar6 != 0) {
      pTVar1 = (param_2->AllocatorInstance).InlineData + ((int)uVar7 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & 0xffffffffU >> (-(char)iVar6 & 0x1fU);
    }
  }
  else if (0 < iVar6) {
    TBitArray<TFixedAllocator<12>_>::Add(param_2,(bool)((byte)(param_3 >> 4) & 1),iVar6);
  }
  uVar7 = param_2->NumBits;
  uVar10 = -(uint)((param_3 & OneFillMissingBits) != 0);
  if (uVar7 != 0) {
    iVar6 = param_1->NumBits + 0x1f;
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
    uVar11 = param_1->NumBits & 0x8000001f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
    }
    uVar4 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
    if (0x1f < (int)(0x20 - uVar11)) {
      uVar4 = 0xffffffff;
    }
    uVar11 = 0xffffffff;
    if (iVar6 == 1) {
      uVar11 = uVar4;
    }
    uVar13 = 0;
    iVar8 = (int)(uVar7 + 0x1f + ((int)(uVar7 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    uVar7 = uVar7 & 0x8000001f;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
    }
    uVar14 = 0xffffffff >> ((byte)(0x20 - uVar7) & 0x1f);
    if (0x1f < (int)(0x20 - uVar7)) {
      uVar14 = 0xffffffff;
    }
    uVar7 = 0xffffffff;
    if (iVar8 == 1) {
      uVar7 = uVar14;
    }
    if (0 < iVar8) {
      do {
        uVar12 = (uint)uVar13;
        uVar9 = uVar10;
        if (((int)uVar12 < iVar6) &&
           (uVar9 = *(uint *)(param_1->AllocatorInstance).InlineData[uVar13].Pad,
           uVar11 != 0xffffffff)) {
          if ((param_3 & OneFillMissingBits) == 0) {
            uVar9 = uVar9 & uVar11;
          }
          else {
            uVar9 = ~uVar11 & uVar10 | uVar9 & uVar11;
          }
        }
        uVar11 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar13].Pad & uVar7;
        if (uVar7 == 0xffffffff) {
          uVar11 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar13].Pad;
        }
        uVar7 = (uVar11 | uVar9) & uVar14;
        if (uVar12 != iVar8 - 1U) {
          uVar7 = uVar11 | uVar9;
        }
        *(uint *)(param_2->AllocatorInstance).InlineData[uVar13].Pad = uVar7;
        uVar12 = uVar12 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar7 = 0xffffffff;
        if (uVar12 == iVar8 - 1U) {
          uVar7 = uVar14;
        }
        uVar11 = 0xffffffff;
        if (uVar12 == iVar6 - 1U) {
          uVar11 = uVar4;
        }
      } while ((int)uVar12 < iVar8);
    }
  }
  TBitArray<TFixedAllocator<12>_>::CheckInvariants(param_2);
  return;
}

// BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,`TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseXOR<TFixedAllocator<12>_>'::__l2::<lambda_1>_> @ 146104350

void __cdecl
UE::Core::Private::
BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseXOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
          (TBitArray<TFixedAllocator<12>_> *param_1,TBitArray<TFixedAllocator<12>_> *param_2,
          EBitwiseOperatorFlags param_3,<lambda_1> *param_4)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  if ((param_1 == param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InOther != &OutResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x8f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_2->NumBits;
  iVar8 = iVar6;
  if ((param_3 & MinSize) == 0) {
    if ((param_3 & MaxSize) == 0) goto LAB_1461043b0;
    bVar5 = SBORROW4(iVar6,param_1->NumBits);
    iVar2 = iVar6 - param_1->NumBits;
  }
  else {
    bVar5 = SBORROW4(param_1->NumBits,iVar6);
    iVar2 = param_1->NumBits - iVar6;
  }
  if (bVar5 != iVar2 < 0) {
    iVar8 = param_1->NumBits;
  }
LAB_1461043b0:
  iVar6 = iVar8 - iVar6;
  if (iVar6 < 0) {
    param_2->NumBits = iVar8;
    uVar10 = iVar8 >> 0x1f & 0x1f;
    uVar7 = iVar8 + uVar10;
    iVar6 = (uVar7 & 0x1f) - uVar10;
    if (iVar6 != 0) {
      pTVar1 = (param_2->AllocatorInstance).InlineData + ((int)uVar7 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & 0xffffffffU >> (-(char)iVar6 & 0x1fU);
    }
  }
  else if (0 < iVar6) {
    TBitArray<TFixedAllocator<12>_>::Add(param_2,(bool)((byte)(param_3 >> 4) & 1),iVar6);
  }
  uVar7 = param_2->NumBits;
  uVar10 = -(uint)((param_3 & OneFillMissingBits) != 0);
  if (uVar7 != 0) {
    iVar6 = param_1->NumBits + 0x1f;
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
    uVar11 = param_1->NumBits & 0x8000001f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
    }
    uVar4 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
    if (0x1f < (int)(0x20 - uVar11)) {
      uVar4 = 0xffffffff;
    }
    uVar11 = 0xffffffff;
    if (iVar6 == 1) {
      uVar11 = uVar4;
    }
    uVar13 = 0;
    iVar8 = (int)(uVar7 + 0x1f + ((int)(uVar7 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    uVar7 = uVar7 & 0x8000001f;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
    }
    uVar14 = 0xffffffff >> ((byte)(0x20 - uVar7) & 0x1f);
    if (0x1f < (int)(0x20 - uVar7)) {
      uVar14 = 0xffffffff;
    }
    uVar7 = 0xffffffff;
    if (iVar8 == 1) {
      uVar7 = uVar14;
    }
    if (0 < iVar8) {
      do {
        uVar12 = (uint)uVar13;
        uVar9 = uVar10;
        if (((int)uVar12 < iVar6) &&
           (uVar9 = *(uint *)(param_1->AllocatorInstance).InlineData[uVar13].Pad,
           uVar11 != 0xffffffff)) {
          if ((param_3 & OneFillMissingBits) == 0) {
            uVar9 = uVar9 & uVar11;
          }
          else {
            uVar9 = ~uVar11 & uVar10 | uVar9 & uVar11;
          }
        }
        uVar11 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar13].Pad & uVar7;
        if (uVar7 == 0xffffffff) {
          uVar11 = *(uint *)(param_2->AllocatorInstance).InlineData[uVar13].Pad;
        }
        uVar7 = (uVar11 ^ uVar9) & uVar14;
        if (uVar12 != iVar8 - 1U) {
          uVar7 = uVar11 ^ uVar9;
        }
        *(uint *)(param_2->AllocatorInstance).InlineData[uVar13].Pad = uVar7;
        uVar12 = uVar12 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar7 = 0xffffffff;
        if (uVar12 == iVar8 - 1U) {
          uVar7 = uVar14;
        }
        uVar11 = 0xffffffff;
        if (uVar12 == iVar6 - 1U) {
          uVar11 = uVar4;
        }
      } while ((int)uVar12 < iVar8);
    }
  }
  TBitArray<TFixedAllocator<12>_>::CheckInvariants(param_2);
  return;
}

// CastChecked<UMovieSceneCachePreAnimatedStateSystem,UMovieSceneEntitySystem> @ 146104560

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCachePreAnimatedStateSystem * __cdecl
CastChecked<UMovieSceneCachePreAnimatedStateSystem,UMovieSceneEntitySystem>
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
    pFVar3 = GetTypeName<UMovieSceneCachePreAnimatedStateSystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneCachePreAnimatedStateSystem::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneCachePreAnimatedStateSystem *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneCachePreAnimatedStateSystem>(&local_28);
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

// CastChecked<UMovieSceneEntitySystemLinker,UObject> @ 146104620

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __cdecl
CastChecked<UMovieSceneEntitySystemLinker,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneEntitySystemLinker>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneEntitySystemLinker::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneEntitySystemLinker *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneEntitySystemLinker>(&local_28);
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

// ConstructItems<FMovieSceneEntitySystemRunner::FDissectedUpdate,FMovieSceneEntitySystemRunner::FDissectedUpdate,int> @ 1461047c0

void __cdecl
ConstructItems<FMovieSceneEntitySystemRunner::FDissectedUpdate,FMovieSceneEntitySystemRunner::FDissectedUpdate,int>
          (void *param_1,FDissectedUpdate *param_2,int param_3)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  FInstanceHandle *pFVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->InstanceHandle;
    puVar2 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      this = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)pFVar1 + (longlong)param_1 + (-0x98 - (longlong)param_2));
      *(undefined8 *)(puVar2 + -2) = 0;
      *(undefined8 *)this = 0;
      *puVar2 = 0;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (this,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar1 + -0x26));
      FMovieSceneContext::FMovieSceneContext
                ((FMovieSceneContext *)(puVar2 + 2),(FMovieSceneContext *)(pFVar1 + -0x20));
      *(FInstanceHandle *)(puVar2 + 0x22) = *pFVar1;
      *(FInstanceHandle *)(puVar2 + 0x23) = pFVar1[1];
      *(FInstanceHandle *)(puVar2 + 0x24) = pFVar1[2];
      param_3 = param_3 + -1;
      pFVar1 = pFVar1 + 0x2a;
      puVar2 = puVar2 + 0x2a;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneEvaluationHookEvent,FMovieSceneEvaluationHookEvent,int> @ 146104880

void __cdecl
ConstructItems<FMovieSceneEvaluationHookEvent,FMovieSceneEvaluationHookEvent,int>
          (void *param_1,FMovieSceneEvaluationHookEvent *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FGuid *pFVar5;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)((longlong)param_1 + 0x10);
    pFVar5 = &(param_2->Hook).ObjectBindingID;
    do {
      pUVar1 = *(UObject **)((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)puVar4);
      puVar4[-2] = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      puVar4[-1] = *(undefined8 *)
                    &(((FMovieSceneEvaluationHookComponent *)(pFVar5 + -1))->Interface).field_0x8;
      uVar2 = *(undefined8 *)&pFVar5->C;
      *puVar4 = *(undefined8 *)pFVar5;
      puVar4[1] = uVar2;
      *(undefined4 *)(puVar4 + 2) = pFVar5[1].A;
      *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)((longlong)(pFVar5 + 1) + 4);
      *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((longlong)(pFVar5 + 1) + 8);
      *(undefined8 *)((longlong)puVar4 + 0x1c) = *(undefined8 *)((longlong)(pFVar5 + 1) + 0xc);
      *(undefined4 *)((longlong)puVar4 + 0x24) = *(undefined4 *)((longlong)(pFVar5 + 2) + 4);
      puVar3 = (undefined8 *)(pFVar5 + 2);
      pFVar5 = pFVar5 + 4;
      *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar3 + 1);
      puVar4 = puVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,int> @ 146104930

void __cdecl
ConstructItems<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,int>
          (void *param_1,FUpdateParamsAndContext *param_2,int param_3)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  FQueuedUpdateParams FVar1;
  FQueuedUpdateParams *pFVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined4 *)((longlong)param_1 + 0x10);
    pFVar2 = &param_2->Params;
    do {
      this = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)pFVar2 + (longlong)param_1 + (-0x98 - (longlong)param_2));
      *(undefined8 *)(puVar3 + -2) = 0;
      *(undefined8 *)this = 0;
      *puVar3 = 0;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (this,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar2 + -0x13));
      FMovieSceneContext::FMovieSceneContext
                ((FMovieSceneContext *)(puVar3 + 2),(FMovieSceneContext *)(pFVar2 + -0x10));
      FVar1 = *pFVar2;
      pFVar2 = pFVar2 + 0x14;
      *(FQueuedUpdateParams *)(puVar3 + 0x22) = FVar1;
      puVar3 = puVar3 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TRelativePtr<void,unsigned_int>,int> @ 1461049e0

void __cdecl DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FEvaluatedTime,int> @ 146104a00

void __cdecl DefaultConstructItems<UE::MovieScene::FEvaluatedTime,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int> @ 146104a30

void __cdecl
DefaultConstructItems<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 0xc);
  }
  return;
}

// DestructItems<FMovieSceneEntitySystemRunner::FDissectedUpdate,int> @ 146104aa0

void __cdecl
DestructItems<FMovieSceneEntitySystemRunner::FDissectedUpdate,int>
          (FDissectedUpdate *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Context).RootToSequenceTransform.NestedTransforms;
    do {
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter((FMovieSceneWarpCounter *)(pTVar2 + 1));
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pTVar2 + -5));
      pTVar2 = (TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 10) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MovieScene::FInitialValueProcessorEntry,int> @ 146104b00

void __cdecl
DestructItems<UE::MovieScene::FInitialValueProcessorEntry,int>
          (FInitialValueProcessorEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Filter).ComplexMasks;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)(pTVar2 + 1) + 8));
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_>
                *)((longlong)(pTVar2 + 9) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int> @ 146104b50

void __cdecl
DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
          (FPrerequisite *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar3 = (param_1->GraphEvent).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,int> @ 146104ba0

void __cdecl
DestructItems<FMovieSceneEntitySystemRunner::FUpdateParamsAndContext,int>
          (FUpdateParamsAndContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Context).RootToSequenceTransform.NestedTransforms;
    do {
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter((FMovieSceneWarpCounter *)(pTVar2 + 1));
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pTVar2 + -5));
      pTVar2 = pTVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,int> @ 146104c00

void __cdecl
DestructItems<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,int>
          (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &param_1->field_0x40;
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
      pbVar3 = pbVar3 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int> @ 146104c70

void __cdecl
DestructItems<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int>
          (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &param_1->field_0x40;
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
      pbVar3 = pbVar3 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int> @ 146104ce0

void __cdecl
DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int>
          (TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
           *param_1,int param_2)

{
  IMutualComponentInitializer *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IMutualComponentInitializer *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Emplace<TPairInitializer<int_const_&,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState_&&>_> @ 146107030

FSetElementId __thiscall
TSet<TTuple<int,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState>,TDefaultMapHashableKeyFuncs<int,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<int_const_&,_UE::MovieScene::FEntityManager::MutateConditional_::__l2::FConditionalMutationState_&&>_>
          (void *this,
          TPairInitializer<int_const_&,_public:_int___cdecl_UE::MovieScene::FEntityManager::MutateConditional(UE::MovieScene::FEntityComponentFilter_const_&,UE::MovieScene::IMovieSceneConditionalEntityMutation_const_&,UE::MovieScene::EMutuallyInclusiveComponentType)_::_2_::FConditionalMutationState_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  FConditionalMutationState *pFVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x88,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar5 * 0x88 + 4 + *(longlong *)this);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x88 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<int,_public:_int___cdecl_UE::MovieScene::FEntityManager::MutateConditional(UE::MovieScene::FEntityComponentFilter_const_&,UE::MovieScene::IMovieSceneConditionalEntityMutation_const_&,UE::MovieScene::EMutuallyInclusiveComponentType)_::_2_::FConditionalMutationState>_>
       *)0x0) {
    pFVar3 = *(FConditionalMutationState **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    `UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState::
    FConditionalMutationState((undefined1 *)((longlong)local_38.Pointer + 8),pFVar3);
    *(undefined4 *)((longlong)local_38.Pointer + 0x80) = 0xffffffff;
  }
  uVar10 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,uVar10,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar10 = *(int *)((longlong)this + 0x48) - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x84) = uVar10;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 0x80) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// GetTypeName<UMovieSceneCachePreAnimatedStateSystem> @ 14610d070

FString * __cdecl
GetTypeName<UMovieSceneCachePreAnimatedStateSystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneCachePreAnimatedStateSystem::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneEntitySystemLinker> @ 14610d0b0

FString * __cdecl GetTypeName<UMovieSceneEntitySystemLinker>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneEntitySystemLinker::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TReversePredicate<TLess<void>_>_> @ 14610d0f0

void __cdecl
AlgoImpl::
HeapSiftDown<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TReversePredicate<TLess<void>_>_>
          (FDissectedUpdate *param_1,int param_2,int param_3,
          TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*> *param_4,
          TReversePredicate<TLess<void>_> *param_5)

{
  FDissectedUpdate *pFVar1;
  pdm_28ec58a4 pVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined8 uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FFrameNumber FVar21;
  int iVar22;
  Type TVar23;
  undefined4 uVar24;
  FInstanceHandle FVar25;
  float fVar26;
  FFrameNumber FVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  Type TVar32;
  FFrameNumber FVar33;
  int iVar34;
  undefined4 uVar35;
  FInstanceHandle FVar36;
  int iVar37;
  ERunnerUpdateFlags EVar38;
  undefined4 uVar39;
  int iVar40;
  FDissectedUpdate *pFVar41;
  
  if (param_2 * 2 + 1 < param_3) {
    pVar2 = param_4->DataMemberPtr;
    do {
      iVar3 = param_2 * 2;
      iVar40 = iVar3 + 1;
      if (iVar3 + 2 < param_3) {
        if (*(int *)(&param_1[(longlong)iVar3 + 2].OnFlushed.field_0x0 + (int)pVar2) <
            *(int *)(&param_1[iVar40].OnFlushed.field_0x0 + (int)pVar2)) {
          iVar40 = iVar3;
        }
        iVar40 = iVar40 + 1;
      }
      if (*(int *)(&param_1[iVar40].OnFlushed.field_0x0 + (int)pVar2) <=
          *(int *)(&param_1[param_2].OnFlushed.field_0x0 + (int)pVar2)) {
        return;
      }
      uVar4 = *(undefined8 *)&param_1[param_2].OnFlushed;
      uVar5 = *(undefined8 *)&param_1[param_2].OnFlushed.field_0x8;
      pFVar1 = param_1 + param_2;
      pFVar41 = param_1 + iVar40;
      uVar6 = *(undefined8 *)&(pFVar1->OnFlushed).field_0x10;
      lVar7 = (pFVar1->Context)._padding_;
      EVar38 = pFVar1->UpdateFlags;
      uVar39 = *(undefined4 *)&pFVar1->field_0xa4;
      lVar8 = (pFVar1->Context)._padding_;
      lVar9 = (pFVar1->Context)._padding_;
      lVar10 = (pFVar1->Context)._padding_;
      lVar11 = (pFVar1->Context)._padding_;
      fVar26 = (pFVar1->Context).RootToSequenceTransform.LinearTransform.TimeScale;
      FVar27.Value = (pFVar1->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber.
                     Value;
      uVar12 = *(undefined8 *)
                &(pFVar1->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
      pFVar13 = (pFVar1->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
      iVar28 = (pFVar1->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
      iVar29 = (pFVar1->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
      lVar14 = (pFVar1->Context).RootToSequenceWarpCounter._padding_;
      lVar15 = (pFVar1->Context).RootToSequenceWarpCounter._padding_;
      lVar16 = (pFVar1->Context).RootToSequenceWarpCounter._padding_;
      pFVar17 = (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
      iVar30 = (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
      iVar31 = (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
      TVar32 = (pFVar1->Context).Status;
      FVar33.Value = (pFVar1->Context).PrePostRollStartEndTime.Value;
      iVar34 = (pFVar1->Context).HierarchicalBias;
      uVar35 = *(undefined4 *)&(pFVar1->Context).field_0x7c;
      FVar36 = pFVar1->InstanceHandle;
      iVar37 = pFVar1->Order;
      uVar18 = *(undefined8 *)&(pFVar41->OnFlushed).field_0x8;
      *(undefined8 *)&pFVar1->OnFlushed = *(undefined8 *)&pFVar41->OnFlushed;
      *(undefined8 *)&(pFVar1->OnFlushed).field_0x8 = uVar18;
      lVar19 = (pFVar41->Context)._padding_;
      *(undefined8 *)&(pFVar1->OnFlushed).field_0x10 =
           *(undefined8 *)&(pFVar41->OnFlushed).field_0x10;
      (pFVar1->Context)._padding_ = lVar19;
      lVar19 = (pFVar41->Context)._padding_;
      (pFVar1->Context)._padding_ = (pFVar41->Context)._padding_;
      (pFVar1->Context)._padding_ = lVar19;
      lVar19 = (pFVar41->Context)._padding_;
      (pFVar1->Context)._padding_ = (pFVar41->Context)._padding_;
      (pFVar1->Context)._padding_ = lVar19;
      FVar21.Value = (pFVar41->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber.
                     Value;
      uVar18 = *(undefined8 *)
                &(pFVar41->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
      (pFVar1->Context).RootToSequenceTransform.LinearTransform.TimeScale =
           (pFVar41->Context).RootToSequenceTransform.LinearTransform.TimeScale;
      (pFVar1->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
           (FFrameNumber)FVar21.Value;
      *(undefined8 *)&(pFVar1->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame =
           uVar18;
      iVar3 = (pFVar41->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
      iVar22 = (pFVar41->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
      (pFVar1->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
           (pFVar41->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
      (pFVar1->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar3;
      (pFVar1->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = iVar22;
      lVar19 = (pFVar41->Context).RootToSequenceWarpCounter._padding_;
      (pFVar1->Context).RootToSequenceWarpCounter._padding_ =
           (pFVar41->Context).RootToSequenceWarpCounter._padding_;
      (pFVar1->Context).RootToSequenceWarpCounter._padding_ = lVar19;
      pFVar20 = (pFVar41->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
      (pFVar1->Context).RootToSequenceWarpCounter._padding_ =
           (pFVar41->Context).RootToSequenceWarpCounter._padding_;
      (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar20;
      iVar3 = (pFVar41->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
      TVar23 = (pFVar41->Context).Status;
      FVar21.Value = (pFVar41->Context).PrePostRollStartEndTime.Value;
      (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum =
           (pFVar41->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
      (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar3;
      (pFVar1->Context).Status = TVar23;
      (pFVar1->Context).PrePostRollStartEndTime = (FFrameNumber)FVar21.Value;
      uVar24 = *(undefined4 *)&(pFVar41->Context).field_0x7c;
      FVar25 = pFVar41->InstanceHandle;
      iVar3 = pFVar41->Order;
      (pFVar1->Context).HierarchicalBias = (pFVar41->Context).HierarchicalBias;
      *(undefined4 *)&(pFVar1->Context).field_0x7c = uVar24;
      pFVar1->InstanceHandle = FVar25;
      pFVar1->Order = iVar3;
      uVar24 = *(undefined4 *)&pFVar41->field_0xa4;
      pFVar1->UpdateFlags = pFVar41->UpdateFlags;
      *(undefined4 *)&pFVar1->field_0xa4 = uVar24;
      *(undefined8 *)&pFVar41->OnFlushed = uVar4;
      *(undefined8 *)&(pFVar41->OnFlushed).field_0x8 = uVar5;
      *(undefined8 *)&(pFVar41->OnFlushed).field_0x10 = uVar6;
      (pFVar41->Context)._padding_ = lVar7;
      (pFVar41->Context)._padding_ = lVar8;
      (pFVar41->Context)._padding_ = lVar9;
      (pFVar41->Context)._padding_ = lVar10;
      (pFVar41->Context)._padding_ = lVar11;
      (pFVar41->Context).RootToSequenceTransform.LinearTransform.TimeScale = fVar26;
      (pFVar41->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
           (FFrameNumber)FVar27.Value;
      *(undefined8 *)&(pFVar41->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame =
           uVar12;
      (pFVar41->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data = pFVar13;
      (pFVar41->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar28;
      (pFVar41->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = iVar29;
      (pFVar41->Context).RootToSequenceWarpCounter._padding_ = lVar14;
      (pFVar41->Context).RootToSequenceWarpCounter._padding_ = lVar15;
      (pFVar41->Context).RootToSequenceWarpCounter._padding_ = lVar16;
      (pFVar41->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar17;
      (pFVar41->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum = iVar30;
      (pFVar41->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar31;
      (pFVar41->Context).Status = TVar32;
      (pFVar41->Context).PrePostRollStartEndTime = (FFrameNumber)FVar33.Value;
      (pFVar41->Context).HierarchicalBias = iVar34;
      *(undefined4 *)&(pFVar41->Context).field_0x7c = uVar35;
      pFVar41->InstanceHandle = FVar36;
      pFVar41->Order = iVar37;
      pFVar41->UpdateFlags = EVar38;
      *(undefined4 *)&pFVar41->field_0xa4 = uVar39;
      param_2 = iVar40;
    } while (iVar40 * 2 + 1 < param_3);
  }
  return;
}

// HeapSortInternal<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TLess<void>_> @ 14610d320

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TLess<void>_>
          (FDissectedUpdate *param_1,int param_2,
          TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*> param_3,
          TLess<void> param_4)

{
  FDissectedUpdate *pFVar1;
  FDissectedUpdate *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  undefined8 uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  FFrameNumber FVar23;
  Type TVar24;
  undefined4 uVar25;
  FInstanceHandle FVar26;
  float fVar27;
  FFrameNumber FVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  Type TVar33;
  FFrameNumber FVar34;
  int iVar35;
  undefined4 uVar36;
  FInstanceHandle FVar37;
  int iVar38;
  ERunnerUpdateFlags EVar39;
  undefined4 uVar40;
  bool bVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  longlong lVar45;
  FDissectedUpdate *pFVar46;
  TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*> local_res10 [4];
  TLess<void> local_res20 [8];
  TReversePredicate<TLess<void>_> local_d8 [22];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar41 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar41) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_d8[0].Predicate = local_res20;
  local_res10[0].DataMemberPtr = param_3.DataMemberPtr;
  if ((param_2 < 0) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar41)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar42 = (param_2 + -2) / 2;
  HeapSiftDown<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TReversePredicate<TLess<void>_>_>
            (param_1,iVar42,param_2,local_res10,local_d8);
  while (iVar42 != 0) {
    iVar42 = iVar42 + -1;
    HeapSiftDown<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TReversePredicate<TLess<void>_>_>
              (param_1,iVar42,param_2,local_res10,local_d8);
  }
  iVar42 = param_2 + -1;
  lVar45 = (longlong)iVar42;
  if (0 < iVar42) {
    pFVar46 = param_1 + lVar45;
    do {
      uVar6 = *(undefined8 *)&param_1->OnFlushed;
      uVar7 = *(undefined8 *)&(param_1->OnFlushed).field_0x8;
      EVar39 = param_1->UpdateFlags;
      uVar40 = *(undefined4 *)&param_1->field_0xa4;
      uVar8 = *(undefined8 *)&(param_1->OnFlushed).field_0x10;
      lVar9 = (param_1->Context)._padding_;
      iVar44 = 0;
      lVar10 = (param_1->Context)._padding_;
      lVar11 = (param_1->Context)._padding_;
      lVar12 = (param_1->Context)._padding_;
      lVar13 = (param_1->Context)._padding_;
      fVar27 = (param_1->Context).RootToSequenceTransform.LinearTransform.TimeScale;
      FVar28.Value = (param_1->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber.
                     Value;
      uVar14 = *(undefined8 *)
                &(param_1->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
      pFVar15 = (param_1->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
      iVar29 = (param_1->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
      iVar30 = (param_1->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
      lVar16 = (param_1->Context).RootToSequenceWarpCounter._padding_;
      lVar17 = (param_1->Context).RootToSequenceWarpCounter._padding_;
      lVar18 = (param_1->Context).RootToSequenceWarpCounter._padding_;
      pFVar19 = (param_1->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
      iVar31 = (param_1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
      iVar32 = (param_1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
      TVar33 = (param_1->Context).Status;
      FVar34.Value = (param_1->Context).PrePostRollStartEndTime.Value;
      iVar35 = (param_1->Context).HierarchicalBias;
      uVar36 = *(undefined4 *)&(param_1->Context).field_0x7c;
      FVar37 = param_1->InstanceHandle;
      iVar38 = param_1->Order;
      uVar20 = *(undefined8 *)&(pFVar46->OnFlushed).field_0x8;
      *(undefined8 *)&param_1->OnFlushed = *(undefined8 *)&pFVar46->OnFlushed;
      *(undefined8 *)&(param_1->OnFlushed).field_0x8 = uVar20;
      lVar21 = (pFVar46->Context)._padding_;
      *(undefined8 *)&(param_1->OnFlushed).field_0x10 =
           *(undefined8 *)&(pFVar46->OnFlushed).field_0x10;
      (param_1->Context)._padding_ = lVar21;
      lVar21 = (pFVar46->Context)._padding_;
      (param_1->Context)._padding_ = (pFVar46->Context)._padding_;
      (param_1->Context)._padding_ = lVar21;
      lVar21 = (pFVar46->Context)._padding_;
      (param_1->Context)._padding_ = (pFVar46->Context)._padding_;
      (param_1->Context)._padding_ = lVar21;
      FVar23.Value = (pFVar46->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber.
                     Value;
      uVar20 = *(undefined8 *)
                &(pFVar46->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
      (param_1->Context).RootToSequenceTransform.LinearTransform.TimeScale =
           (pFVar46->Context).RootToSequenceTransform.LinearTransform.TimeScale;
      (param_1->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
           (FFrameNumber)FVar23.Value;
      *(undefined8 *)&(param_1->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame =
           uVar20;
      iVar43 = (pFVar46->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
      iVar5 = (pFVar46->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
      (param_1->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
           (pFVar46->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
      (param_1->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar43;
      (param_1->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = iVar5;
      lVar21 = (pFVar46->Context).RootToSequenceWarpCounter._padding_;
      (param_1->Context).RootToSequenceWarpCounter._padding_ =
           (pFVar46->Context).RootToSequenceWarpCounter._padding_;
      (param_1->Context).RootToSequenceWarpCounter._padding_ = lVar21;
      pFVar22 = (pFVar46->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
      (param_1->Context).RootToSequenceWarpCounter._padding_ =
           (pFVar46->Context).RootToSequenceWarpCounter._padding_;
      (param_1->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar22;
      iVar43 = (pFVar46->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
      TVar24 = (pFVar46->Context).Status;
      FVar23.Value = (pFVar46->Context).PrePostRollStartEndTime.Value;
      (param_1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum =
           (pFVar46->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
      (param_1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar43;
      (param_1->Context).Status = TVar24;
      (param_1->Context).PrePostRollStartEndTime = (FFrameNumber)FVar23.Value;
      uVar25 = *(undefined4 *)&(pFVar46->Context).field_0x7c;
      FVar26 = pFVar46->InstanceHandle;
      iVar43 = pFVar46->Order;
      (param_1->Context).HierarchicalBias = (pFVar46->Context).HierarchicalBias;
      *(undefined4 *)&(param_1->Context).field_0x7c = uVar25;
      param_1->InstanceHandle = FVar26;
      param_1->Order = iVar43;
      uVar25 = *(undefined4 *)&pFVar46->field_0xa4;
      param_1->UpdateFlags = pFVar46->UpdateFlags;
      *(undefined4 *)&param_1->field_0xa4 = uVar25;
      *(undefined8 *)&pFVar46->OnFlushed = uVar6;
      *(undefined8 *)&(pFVar46->OnFlushed).field_0x8 = uVar7;
      *(undefined8 *)&(pFVar46->OnFlushed).field_0x10 = uVar8;
      (pFVar46->Context)._padding_ = lVar9;
      (pFVar46->Context)._padding_ = lVar10;
      (pFVar46->Context)._padding_ = lVar11;
      (pFVar46->Context)._padding_ = lVar12;
      (pFVar46->Context)._padding_ = lVar13;
      (pFVar46->Context).RootToSequenceTransform.LinearTransform.TimeScale = fVar27;
      (pFVar46->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
           (FFrameNumber)FVar28.Value;
      *(undefined8 *)&(pFVar46->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame =
           uVar14;
      (pFVar46->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data = pFVar15;
      (pFVar46->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar29;
      (pFVar46->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = iVar30;
      (pFVar46->Context).RootToSequenceWarpCounter._padding_ = lVar16;
      (pFVar46->Context).RootToSequenceWarpCounter._padding_ = lVar17;
      (pFVar46->Context).RootToSequenceWarpCounter._padding_ = lVar18;
      (pFVar46->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar19;
      (pFVar46->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum = iVar31;
      (pFVar46->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar32;
      (pFVar46->Context).Status = TVar33;
      (pFVar46->Context).PrePostRollStartEndTime = (FFrameNumber)FVar34.Value;
      (pFVar46->Context).HierarchicalBias = iVar35;
      *(undefined4 *)&(pFVar46->Context).field_0x7c = uVar36;
      pFVar46->InstanceHandle = FVar37;
      pFVar46->Order = iVar38;
      pFVar46->UpdateFlags = EVar39;
      *(undefined4 *)&pFVar46->field_0xa4 = uVar40;
      if (1 < iVar42) {
        do {
          iVar5 = iVar44 * 2;
          iVar43 = iVar5 + 1;
          if (iVar5 + 2 < iVar42) {
            if (*(int *)(&param_1[(longlong)iVar5 + 2].OnFlushed.field_0x0 +
                        (int)param_3.DataMemberPtr) <
                *(int *)(&param_1[iVar43].OnFlushed.field_0x0 + (int)param_3.DataMemberPtr)) {
              iVar43 = iVar5;
            }
            iVar43 = iVar43 + 1;
          }
          if (*(int *)(&param_1[iVar43].OnFlushed.field_0x0 + (int)param_3.DataMemberPtr) <=
              *(int *)(&param_1[iVar44].OnFlushed.field_0x0 + (int)param_3.DataMemberPtr)) break;
          uVar6 = *(undefined8 *)&param_1[iVar44].OnFlushed;
          uVar7 = *(undefined8 *)&param_1[iVar44].OnFlushed.field_0x8;
          pFVar1 = param_1 + iVar43;
          puVar3 = &param_1[iVar44].OnFlushed.field_0x10;
          uVar8 = *(undefined8 *)puVar3;
          lVar9 = *(longlong *)(puVar3 + 8);
          pFVar2 = param_1 + iVar44;
          EVar39 = pFVar2->UpdateFlags;
          uVar40 = *(undefined4 *)&pFVar2->field_0xa4;
          lVar10 = (pFVar2->Context)._padding_;
          lVar11 = (pFVar2->Context)._padding_;
          lVar12 = (pFVar2->Context)._padding_;
          lVar13 = (pFVar2->Context)._padding_;
          fVar27 = (pFVar2->Context).RootToSequenceTransform.LinearTransform.TimeScale;
          FVar28.Value = (pFVar2->Context).RootToSequenceTransform.LinearTransform.Offset.
                         FrameNumber.Value;
          uVar14 = *(undefined8 *)
                    &(pFVar2->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
          pFVar15 = (pFVar2->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                    Data;
          iVar30 = (pFVar2->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
          iVar31 = (pFVar2->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
          lVar16 = (pFVar2->Context).RootToSequenceWarpCounter._padding_;
          lVar17 = (pFVar2->Context).RootToSequenceWarpCounter._padding_;
          lVar18 = (pFVar2->Context).RootToSequenceWarpCounter._padding_;
          pFVar19 = (pFVar2->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
          iVar32 = (pFVar2->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
          iVar35 = (pFVar2->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
          TVar33 = (pFVar2->Context).Status;
          FVar34.Value = (pFVar2->Context).PrePostRollStartEndTime.Value;
          iVar38 = (pFVar2->Context).HierarchicalBias;
          uVar36 = *(undefined4 *)&(pFVar2->Context).field_0x7c;
          FVar37 = pFVar2->InstanceHandle;
          iVar44 = pFVar2->Order;
          uVar20 = *(undefined8 *)&(pFVar1->OnFlushed).field_0x8;
          *(undefined8 *)&pFVar2->OnFlushed = *(undefined8 *)&pFVar1->OnFlushed;
          *(undefined8 *)&(pFVar2->OnFlushed).field_0x8 = uVar20;
          lVar21 = (pFVar1->Context)._padding_;
          *(undefined8 *)&(pFVar2->OnFlushed).field_0x10 =
               *(undefined8 *)&(pFVar1->OnFlushed).field_0x10;
          (pFVar2->Context)._padding_ = lVar21;
          lVar21 = (pFVar1->Context)._padding_;
          (pFVar2->Context)._padding_ = (pFVar1->Context)._padding_;
          (pFVar2->Context)._padding_ = lVar21;
          lVar21 = (pFVar1->Context)._padding_;
          (pFVar2->Context)._padding_ = (pFVar1->Context)._padding_;
          (pFVar2->Context)._padding_ = lVar21;
          FVar23.Value = (pFVar1->Context).RootToSequenceTransform.LinearTransform.Offset.
                         FrameNumber.Value;
          uVar20 = *(undefined8 *)
                    &(pFVar1->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
          (pFVar2->Context).RootToSequenceTransform.LinearTransform.TimeScale =
               (pFVar1->Context).RootToSequenceTransform.LinearTransform.TimeScale;
          (pFVar2->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
               (FFrameNumber)FVar23.Value;
          *(undefined8 *)&(pFVar2->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame
               = uVar20;
          iVar5 = (pFVar1->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
          iVar29 = (pFVar1->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
          (pFVar2->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               (pFVar1->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
          (pFVar2->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar5;
          (pFVar2->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = iVar29;
          lVar21 = (pFVar1->Context).RootToSequenceWarpCounter._padding_;
          (pFVar2->Context).RootToSequenceWarpCounter._padding_ =
               (pFVar1->Context).RootToSequenceWarpCounter._padding_;
          (pFVar2->Context).RootToSequenceWarpCounter._padding_ = lVar21;
          pFVar22 = (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
          (pFVar2->Context).RootToSequenceWarpCounter._padding_ =
               (pFVar1->Context).RootToSequenceWarpCounter._padding_;
          (pFVar2->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar22;
          iVar5 = (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
          TVar24 = (pFVar1->Context).Status;
          FVar23.Value = (pFVar1->Context).PrePostRollStartEndTime.Value;
          (pFVar2->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum =
               (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
          (pFVar2->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar5;
          (pFVar2->Context).Status = TVar24;
          (pFVar2->Context).PrePostRollStartEndTime = (FFrameNumber)FVar23.Value;
          uVar25 = *(undefined4 *)&(pFVar1->Context).field_0x7c;
          FVar26 = pFVar1->InstanceHandle;
          iVar5 = pFVar1->Order;
          (pFVar2->Context).HierarchicalBias = (pFVar1->Context).HierarchicalBias;
          *(undefined4 *)&(pFVar2->Context).field_0x7c = uVar25;
          pFVar2->InstanceHandle = FVar26;
          pFVar2->Order = iVar5;
          uVar25 = *(undefined4 *)&pFVar1->field_0xa4;
          pFVar2->UpdateFlags = pFVar1->UpdateFlags;
          *(undefined4 *)&pFVar2->field_0xa4 = uVar25;
          *(undefined8 *)&pFVar1->OnFlushed = uVar6;
          *(undefined8 *)&(pFVar1->OnFlushed).field_0x8 = uVar7;
          *(undefined8 *)&(pFVar1->OnFlushed).field_0x10 = uVar8;
          (pFVar1->Context)._padding_ = lVar9;
          (pFVar1->Context)._padding_ = lVar10;
          (pFVar1->Context)._padding_ = lVar11;
          (pFVar1->Context)._padding_ = lVar12;
          (pFVar1->Context)._padding_ = lVar13;
          (pFVar1->Context).RootToSequenceTransform.LinearTransform.TimeScale = fVar27;
          (pFVar1->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
               (FFrameNumber)FVar28.Value;
          *(undefined8 *)&(pFVar1->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame
               = uVar14;
          (pFVar1->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               pFVar15;
          (pFVar1->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar30;
          (pFVar1->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = iVar31;
          (pFVar1->Context).RootToSequenceWarpCounter._padding_ = lVar16;
          (pFVar1->Context).RootToSequenceWarpCounter._padding_ = lVar17;
          (pFVar1->Context).RootToSequenceWarpCounter._padding_ = lVar18;
          (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar19;
          (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum = iVar32;
          (pFVar1->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar35;
          (pFVar1->Context).Status = TVar33;
          (pFVar1->Context).PrePostRollStartEndTime = (FFrameNumber)FVar34.Value;
          (pFVar1->Context).HierarchicalBias = iVar38;
          *(undefined4 *)&(pFVar1->Context).field_0x7c = uVar36;
          pFVar1->InstanceHandle = FVar37;
          pFVar1->Order = iVar44;
          pFVar1->UpdateFlags = EVar39;
          *(undefined4 *)&pFVar1->field_0xa4 = uVar40;
          iVar44 = iVar43;
        } while (iVar43 * 2 + 1 < iVar42);
      }
      iVar42 = iVar42 + -1;
      lVar45 = lVar45 + -1;
      pFVar46 = pFVar46 + -1;
    } while (0 < lVar45);
  }
  return;
}

// HeapSortInternal<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,UE::Core::Private::TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>,TLess<void>_> @ 14610d7f0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,UE::Core::Private::TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>,TLess<void>_>
          (FMovieSceneDeterminismFenceWithSubframe *param_1,int param_2,
          TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>
          param_3,TLess<void> param_4)

{
  FFrameTime FVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FMovieSceneDeterminismFenceWithSubframe *pFVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  TLess<void> local_res20 [8];
  float fStack_24;
  float fStack_1c;
  
  lVar10 = (longlong)(int)param_3.DataMemberPtr;
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,UE::Core::Private::TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>,TReversePredicate<TLess<void>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar12 = param_2 + -1;
  lVar15 = (longlong)iVar12;
  if (0 < iVar12) {
    pFVar11 = param_1 + lVar15;
    do {
      iVar14 = 0;
      FVar1 = param_1->FrameTime;
      uVar2 = *(undefined4 *)&param_1->field_0x8;
      param_1->FrameTime = pFVar11->FrameTime;
      *(undefined4 *)&param_1->field_0x8 = *(undefined4 *)&pFVar11->field_0x8;
      pFVar11->FrameTime = FVar1;
      *(undefined4 *)&pFVar11->field_0x8 = uVar2;
      if (1 < iVar12) {
        do {
          iVar8 = iVar14 * 2;
          iVar9 = iVar8 + 1;
          if (iVar8 + 2 < iVar12) {
            uVar3 = *(undefined8 *)((longlong)&param_1[iVar9].FrameTime.FrameNumber.Value + lVar10);
            uVar4 = *(undefined8 *)
                     ((longlong)&param_1[(longlong)iVar8 + 2].FrameTime.FrameNumber.Value + lVar10);
            iVar13 = (int)uVar3;
            iVar7 = (int)uVar4;
            if (iVar7 < iVar13) {
LAB_14610d8f3:
              bVar6 = true;
            }
            else {
              if (iVar7 == iVar13) {
                fStack_24 = (float)((ulonglong)uVar4 >> 0x20);
                fStack_1c = (float)((ulonglong)uVar3 >> 0x20);
                if (fStack_24 < fStack_1c) goto LAB_14610d8f3;
              }
              bVar6 = false;
            }
            if (bVar6) {
              iVar9 = iVar8;
            }
            iVar9 = iVar9 + 1;
          }
          uVar3 = *(undefined8 *)((longlong)&param_1[iVar9].FrameTime.FrameNumber.Value + lVar10);
          uVar4 = *(undefined8 *)((longlong)&param_1[iVar14].FrameTime.FrameNumber.Value + lVar10);
          iVar8 = (int)uVar3;
          iVar7 = (int)uVar4;
          if (iVar8 <= iVar7) {
            if (iVar7 != iVar8) break;
            fStack_1c = (float)((ulonglong)uVar4 >> 0x20);
            fStack_24 = (float)((ulonglong)uVar3 >> 0x20);
            if (fStack_24 <= fStack_1c) break;
          }
          FVar1 = param_1[iVar14].FrameTime;
          uVar2 = *(undefined4 *)&param_1[iVar14].field_0x8;
          param_1[iVar14].FrameTime = param_1[iVar9].FrameTime;
          *(undefined4 *)&param_1[iVar14].field_0x8 = *(undefined4 *)&param_1[iVar9].field_0x8;
          param_1[iVar9].FrameTime = FVar1;
          *(undefined4 *)&param_1[iVar9].field_0x8 = uVar2;
          iVar14 = iVar9;
        } while (iVar9 * 2 + 1 < iVar12);
      }
      iVar12 = iVar12 + -1;
      lVar15 = lVar15 + -1;
      pFVar11 = pFVar11 + -1;
    } while (0 < lVar15);
  }
  return;
}

// HeapSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TGreater<void>_> @ 14610d9b0

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TGreater<void>_>
          (FMovieSceneEvaluationHookEvent *param_1,int param_2,
          TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*> param_3,
          TGreater<void> param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FMovieSceneEvaluationHookComponent *pFVar8;
  FMovieSceneEvaluationHookComponent *pFVar9;
  FMovieSceneEvaluationHookEvent *pFVar10;
  FMovieSceneEvaluationHookEvent *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FMovieSceneSequenceID FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FRootInstanceHandle FVar20;
  FMovieSceneSequenceID FVar21;
  FFrameNumber FVar22;
  undefined7 uVar23;
  FFrameNumber FVar24;
  bool bVar25;
  undefined7 uVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  FMovieSceneEvaluationHookEvent *pFVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  float fStack_14;
  float fStack_c;
  
  if (param_2 < 0) {
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar27) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar27) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar28 = (param_2 + -2) / 2;
  iVar29 = iVar28 * 2 + 1;
  iVar31 = iVar29;
  iVar35 = iVar28;
  do {
    while (param_2 <= iVar29) {
LAB_14610db4e:
      if (iVar35 == 0) {
        iVar29 = param_2 + -1;
        lVar36 = (longlong)iVar29;
        if (0 < iVar29) {
          pFVar32 = param_1 + lVar36;
          do {
            uVar1 = *(undefined8 *)&(pFVar32->Hook).Interface.field_0x8;
            iVar35 = 0;
            uVar2 = *(undefined8 *)&(param_1->Hook).Interface;
            uVar4 = *(undefined8 *)&(param_1->Hook).Interface.field_0x8;
            uVar16 = (param_1->Hook).ObjectBindingID.A;
            uVar17 = (param_1->Hook).ObjectBindingID.B;
            uVar18 = (param_1->Hook).ObjectBindingID.C;
            uVar19 = (param_1->Hook).ObjectBindingID.D;
            FVar20 = param_1->RootInstanceHandle;
            FVar21.Value = (param_1->SequenceID).Value;
            iVar28 = param_1->TriggerIndex;
            FVar24.Value = (param_1->RootTime).FrameNumber.Value;
            uVar5 = *(undefined8 *)&(param_1->RootTime).SubFrame;
            bVar25 = param_1->bRestoreState;
            uVar26 = *(undefined7 *)&param_1->field_0x39;
            *(undefined8 *)&(param_1->Hook).Interface = *(undefined8 *)&(pFVar32->Hook).Interface;
            *(undefined8 *)&(param_1->Hook).Interface.field_0x8 = uVar1;
            uVar12 = (pFVar32->Hook).ObjectBindingID.B;
            uVar13 = (pFVar32->Hook).ObjectBindingID.C;
            uVar14 = (pFVar32->Hook).ObjectBindingID.D;
            (param_1->Hook).ObjectBindingID.A = (pFVar32->Hook).ObjectBindingID.A;
            (param_1->Hook).ObjectBindingID.B = uVar12;
            (param_1->Hook).ObjectBindingID.C = uVar13;
            (param_1->Hook).ObjectBindingID.D = uVar14;
            FVar15.Value = (pFVar32->SequenceID).Value;
            iVar31 = pFVar32->TriggerIndex;
            FVar22.Value = (pFVar32->RootTime).FrameNumber.Value;
            param_1->RootInstanceHandle = pFVar32->RootInstanceHandle;
            param_1->SequenceID = (FMovieSceneSequenceID)FVar15.Value;
            param_1->TriggerIndex = iVar31;
            (param_1->RootTime).FrameNumber = (FFrameNumber)FVar22.Value;
            bVar27 = pFVar32->bRestoreState;
            uVar23 = *(undefined7 *)&pFVar32->field_0x39;
            *(undefined8 *)&(param_1->RootTime).SubFrame =
                 *(undefined8 *)&(pFVar32->RootTime).SubFrame;
            param_1->bRestoreState = bVar27;
            *(undefined7 *)&param_1->field_0x39 = uVar23;
            *(undefined8 *)&(pFVar32->Hook).Interface = uVar2;
            *(undefined8 *)&(pFVar32->Hook).Interface.field_0x8 = uVar4;
            (pFVar32->Hook).ObjectBindingID.A = uVar16;
            (pFVar32->Hook).ObjectBindingID.B = uVar17;
            (pFVar32->Hook).ObjectBindingID.C = uVar18;
            (pFVar32->Hook).ObjectBindingID.D = uVar19;
            pFVar32->RootInstanceHandle = FVar20;
            pFVar32->SequenceID = (FMovieSceneSequenceID)FVar21.Value;
            pFVar32->TriggerIndex = iVar28;
            (pFVar32->RootTime).FrameNumber = (FFrameNumber)FVar24.Value;
            *(undefined8 *)&(pFVar32->RootTime).SubFrame = uVar5;
            pFVar32->bRestoreState = bVar25;
            *(undefined7 *)&pFVar32->field_0x39 = uVar26;
            if (1 < iVar29) {
              do {
                iVar28 = iVar35 * 2;
                iVar31 = iVar28 + 1;
                if (iVar28 + 2 < iVar29) {
                  uVar1 = *(undefined8 *)
                           (&param_1[(longlong)iVar28 + 2].Hook.Interface.field_0x0 +
                           (int)param_3.DataMemberPtr);
                  uVar2 = *(undefined8 *)
                           (&param_1[iVar31].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
                  iVar30 = (int)uVar1;
                  iVar33 = (int)uVar2;
                  if (iVar33 < iVar30) {
LAB_14610dc20:
                    bVar27 = true;
                  }
                  else {
                    if (iVar33 == iVar30) {
                      fStack_c = (float)((ulonglong)uVar2 >> 0x20);
                      fStack_14 = (float)((ulonglong)uVar1 >> 0x20);
                      if (fStack_c < fStack_14) goto LAB_14610dc20;
                    }
                    bVar27 = false;
                  }
                  if (bVar27) {
                    iVar31 = iVar28;
                  }
                  iVar31 = iVar31 + 1;
                }
                uVar1 = *(undefined8 *)
                         (&param_1[iVar35].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
                uVar2 = *(undefined8 *)
                         (&param_1[iVar31].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
                iVar28 = (int)uVar1;
                iVar30 = (int)uVar2;
                if (iVar28 <= iVar30) {
                  if (iVar30 != iVar28) break;
                  fStack_c = (float)((ulonglong)uVar2 >> 0x20);
                  fStack_14 = (float)((ulonglong)uVar1 >> 0x20);
                  if (fStack_14 <= fStack_c) break;
                }
                uVar1 = *(undefined8 *)&param_1[iVar31].Hook.Interface.field_0x8;
                uVar2 = *(undefined8 *)&param_1[iVar35].Hook.Interface;
                uVar4 = *(undefined8 *)&param_1[iVar35].Hook.Interface.field_0x8;
                pFVar8 = &param_1[iVar35].Hook;
                uVar16 = (pFVar8->ObjectBindingID).A;
                uVar17 = (pFVar8->ObjectBindingID).B;
                uVar18 = (pFVar8->ObjectBindingID).C;
                uVar19 = (pFVar8->ObjectBindingID).D;
                pFVar10 = param_1 + iVar35;
                FVar20 = pFVar10->RootInstanceHandle;
                FVar21.Value = (pFVar10->SequenceID).Value;
                uVar5 = *(undefined8 *)(&pFVar10->RootInstanceHandle + 2);
                uVar6 = *(undefined8 *)&param_1[iVar35].RootTime.SubFrame;
                uVar7 = *(undefined8 *)((longlong)(&param_1[iVar35].RootTime + 1) + 4);
                *(undefined8 *)&param_1[iVar35].Hook.Interface =
                     *(undefined8 *)&param_1[iVar31].Hook.Interface;
                *(undefined8 *)&param_1[iVar35].Hook.Interface.field_0x8 = uVar1;
                pFVar8 = &param_1[iVar31].Hook;
                uVar12 = (pFVar8->ObjectBindingID).B;
                uVar13 = (pFVar8->ObjectBindingID).C;
                uVar14 = (pFVar8->ObjectBindingID).D;
                pFVar9 = &param_1[iVar35].Hook;
                (pFVar9->ObjectBindingID).A = (pFVar8->ObjectBindingID).A;
                (pFVar9->ObjectBindingID).B = uVar12;
                (pFVar9->ObjectBindingID).C = uVar13;
                (pFVar9->ObjectBindingID).D = uVar14;
                pFVar10 = param_1 + iVar31;
                FVar15.Value = (pFVar10->SequenceID).Value;
                uVar1 = *(undefined8 *)(&pFVar10->RootInstanceHandle + 2);
                pFVar11 = param_1 + iVar35;
                pFVar11->RootInstanceHandle = pFVar10->RootInstanceHandle;
                pFVar11->SequenceID = (FMovieSceneSequenceID)FVar15.Value;
                *(undefined8 *)(&pFVar11->RootInstanceHandle + 2) = uVar1;
                uVar1 = *(undefined8 *)((longlong)(&param_1[iVar31].RootTime + 1) + 4);
                *(undefined8 *)&param_1[iVar35].RootTime.SubFrame =
                     *(undefined8 *)&param_1[iVar31].RootTime.SubFrame;
                *(undefined8 *)((longlong)(&param_1[iVar35].RootTime + 1) + 4) = uVar1;
                *(undefined8 *)&param_1[iVar31].Hook.Interface = uVar2;
                *(undefined8 *)&param_1[iVar31].Hook.Interface.field_0x8 = uVar4;
                pFVar8 = &param_1[iVar31].Hook;
                (pFVar8->ObjectBindingID).A = uVar16;
                (pFVar8->ObjectBindingID).B = uVar17;
                (pFVar8->ObjectBindingID).C = uVar18;
                (pFVar8->ObjectBindingID).D = uVar19;
                pFVar10 = param_1 + iVar31;
                pFVar10->RootInstanceHandle = FVar20;
                pFVar10->SequenceID = (FMovieSceneSequenceID)FVar21.Value;
                *(undefined8 *)(&pFVar10->RootInstanceHandle + 2) = uVar5;
                *(undefined8 *)&param_1[iVar31].RootTime.SubFrame = uVar6;
                *(undefined8 *)((longlong)(&param_1[iVar31].RootTime + 1) + 4) = uVar7;
                iVar35 = iVar31;
              } while (iVar31 * 2 + 1 < iVar29);
            }
            iVar29 = iVar29 + -1;
            lVar36 = lVar36 + -1;
            pFVar32 = pFVar32 + -1;
          } while (0 < lVar36);
        }
        return;
      }
      iVar28 = iVar35 + -1;
      iVar29 = iVar31 + -2;
      iVar31 = iVar29;
      iVar35 = iVar28;
    }
    iVar29 = iVar28 * 2;
    iVar30 = iVar29 + 1;
    if (iVar29 + 2 < param_2) {
      uVar1 = *(undefined8 *)
               (&param_1[(longlong)iVar29 + 2].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr
               );
      uVar2 = *(undefined8 *)
               (&param_1[iVar30].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
      iVar33 = (int)uVar1;
      iVar34 = (int)uVar2;
      if (iVar34 < iVar33) {
LAB_14610daa0:
        bVar27 = true;
      }
      else {
        if (iVar34 == iVar33) {
          fStack_14 = (float)((ulonglong)uVar2 >> 0x20);
          fStack_c = (float)((ulonglong)uVar1 >> 0x20);
          if (fStack_14 < fStack_c) goto LAB_14610daa0;
        }
        bVar27 = false;
      }
      if (bVar27) {
        iVar30 = iVar29;
      }
      iVar30 = iVar30 + 1;
    }
    uVar1 = *(undefined8 *)(&param_1[iVar28].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
    uVar2 = *(undefined8 *)(&param_1[iVar30].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
    iVar29 = (int)uVar1;
    iVar33 = (int)uVar2;
    if (iVar29 <= iVar33) {
      if (iVar33 == iVar29) {
        fStack_c = (float)((ulonglong)uVar2 >> 0x20);
        fStack_14 = (float)((ulonglong)uVar1 >> 0x20);
        if (fStack_c < fStack_14) goto LAB_14610dae8;
      }
      goto LAB_14610db4e;
    }
LAB_14610dae8:
    uVar1 = *(undefined8 *)&param_1[iVar30].Hook.Interface.field_0x8;
    iVar29 = iVar30 * 2 + 1;
    uVar2 = *(undefined8 *)&param_1[iVar28].Hook.Interface;
    uVar4 = *(undefined8 *)&param_1[iVar28].Hook.Interface.field_0x8;
    pFVar8 = &param_1[iVar28].Hook;
    uVar16 = (pFVar8->ObjectBindingID).A;
    uVar17 = (pFVar8->ObjectBindingID).B;
    uVar18 = (pFVar8->ObjectBindingID).C;
    uVar19 = (pFVar8->ObjectBindingID).D;
    pFVar32 = param_1 + iVar28;
    FVar20 = pFVar32->RootInstanceHandle;
    FVar21.Value = (pFVar32->SequenceID).Value;
    uVar5 = *(undefined8 *)(&pFVar32->RootInstanceHandle + 2);
    uVar6 = *(undefined8 *)&param_1[iVar28].RootTime.SubFrame;
    uVar7 = *(undefined8 *)((longlong)(&param_1[iVar28].RootTime + 1) + 4);
    *(undefined8 *)&param_1[iVar28].Hook.Interface = *(undefined8 *)&param_1[iVar30].Hook.Interface;
    *(undefined8 *)&param_1[iVar28].Hook.Interface.field_0x8 = uVar1;
    pFVar8 = &param_1[iVar30].Hook;
    uVar12 = (pFVar8->ObjectBindingID).B;
    uVar13 = (pFVar8->ObjectBindingID).C;
    uVar14 = (pFVar8->ObjectBindingID).D;
    pFVar9 = &param_1[iVar28].Hook;
    (pFVar9->ObjectBindingID).A = (pFVar8->ObjectBindingID).A;
    (pFVar9->ObjectBindingID).B = uVar12;
    (pFVar9->ObjectBindingID).C = uVar13;
    (pFVar9->ObjectBindingID).D = uVar14;
    pFVar32 = param_1 + iVar30;
    FVar15.Value = (pFVar32->SequenceID).Value;
    uVar1 = *(undefined8 *)(&pFVar32->RootInstanceHandle + 2);
    pFVar10 = param_1 + iVar28;
    pFVar10->RootInstanceHandle = pFVar32->RootInstanceHandle;
    pFVar10->SequenceID = (FMovieSceneSequenceID)FVar15.Value;
    *(undefined8 *)(&pFVar10->RootInstanceHandle + 2) = uVar1;
    uVar1 = *(undefined8 *)((longlong)(&param_1[iVar30].RootTime + 1) + 4);
    *(undefined8 *)&param_1[iVar28].RootTime.SubFrame =
         *(undefined8 *)&param_1[iVar30].RootTime.SubFrame;
    *(undefined8 *)((longlong)(&param_1[iVar28].RootTime + 1) + 4) = uVar1;
    *(undefined8 *)&param_1[iVar30].Hook.Interface = uVar2;
    *(undefined8 *)&param_1[iVar30].Hook.Interface.field_0x8 = uVar4;
    pFVar8 = &param_1[iVar30].Hook;
    (pFVar8->ObjectBindingID).A = uVar16;
    (pFVar8->ObjectBindingID).B = uVar17;
    (pFVar8->ObjectBindingID).C = uVar18;
    (pFVar8->ObjectBindingID).D = uVar19;
    pFVar32 = param_1 + iVar30;
    pFVar32->RootInstanceHandle = FVar20;
    pFVar32->SequenceID = (FMovieSceneSequenceID)FVar21.Value;
    *(undefined8 *)(&pFVar32->RootInstanceHandle + 2) = uVar5;
    *(undefined8 *)&param_1[iVar30].RootTime.SubFrame = uVar6;
    *(undefined8 *)((longlong)(&param_1[iVar30].RootTime + 1) + 4) = uVar7;
    iVar28 = iVar30;
  } while( true );
}

// HeapSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TLess<void>_> @ 14610dd00

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TLess<void>_>
          (FMovieSceneEvaluationHookEvent *param_1,int param_2,
          TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*> param_3,
          TLess<void> param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FMovieSceneEvaluationHookComponent *pFVar8;
  FMovieSceneEvaluationHookComponent *pFVar9;
  FMovieSceneEvaluationHookEvent *pFVar10;
  FMovieSceneEvaluationHookEvent *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FMovieSceneSequenceID FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FRootInstanceHandle FVar20;
  FMovieSceneSequenceID FVar21;
  FFrameNumber FVar22;
  undefined7 uVar23;
  FFrameNumber FVar24;
  bool bVar25;
  undefined7 uVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  FMovieSceneEvaluationHookEvent *pFVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  float fStack_14;
  float fStack_c;
  
  if (param_2 < 0) {
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar27) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar27) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar28 = (param_2 + -2) / 2;
  iVar29 = iVar28 * 2 + 1;
  iVar31 = iVar29;
  iVar35 = iVar28;
  do {
    while (param_2 <= iVar29) {
LAB_14610de9e:
      if (iVar35 == 0) {
        iVar29 = param_2 + -1;
        lVar36 = (longlong)iVar29;
        if (0 < iVar29) {
          pFVar32 = param_1 + lVar36;
          do {
            uVar1 = *(undefined8 *)&(pFVar32->Hook).Interface.field_0x8;
            iVar35 = 0;
            uVar2 = *(undefined8 *)&(param_1->Hook).Interface;
            uVar4 = *(undefined8 *)&(param_1->Hook).Interface.field_0x8;
            uVar16 = (param_1->Hook).ObjectBindingID.A;
            uVar17 = (param_1->Hook).ObjectBindingID.B;
            uVar18 = (param_1->Hook).ObjectBindingID.C;
            uVar19 = (param_1->Hook).ObjectBindingID.D;
            FVar20 = param_1->RootInstanceHandle;
            FVar21.Value = (param_1->SequenceID).Value;
            iVar28 = param_1->TriggerIndex;
            FVar24.Value = (param_1->RootTime).FrameNumber.Value;
            uVar5 = *(undefined8 *)&(param_1->RootTime).SubFrame;
            bVar25 = param_1->bRestoreState;
            uVar26 = *(undefined7 *)&param_1->field_0x39;
            *(undefined8 *)&(param_1->Hook).Interface = *(undefined8 *)&(pFVar32->Hook).Interface;
            *(undefined8 *)&(param_1->Hook).Interface.field_0x8 = uVar1;
            uVar12 = (pFVar32->Hook).ObjectBindingID.B;
            uVar13 = (pFVar32->Hook).ObjectBindingID.C;
            uVar14 = (pFVar32->Hook).ObjectBindingID.D;
            (param_1->Hook).ObjectBindingID.A = (pFVar32->Hook).ObjectBindingID.A;
            (param_1->Hook).ObjectBindingID.B = uVar12;
            (param_1->Hook).ObjectBindingID.C = uVar13;
            (param_1->Hook).ObjectBindingID.D = uVar14;
            FVar15.Value = (pFVar32->SequenceID).Value;
            iVar31 = pFVar32->TriggerIndex;
            FVar22.Value = (pFVar32->RootTime).FrameNumber.Value;
            param_1->RootInstanceHandle = pFVar32->RootInstanceHandle;
            param_1->SequenceID = (FMovieSceneSequenceID)FVar15.Value;
            param_1->TriggerIndex = iVar31;
            (param_1->RootTime).FrameNumber = (FFrameNumber)FVar22.Value;
            bVar27 = pFVar32->bRestoreState;
            uVar23 = *(undefined7 *)&pFVar32->field_0x39;
            *(undefined8 *)&(param_1->RootTime).SubFrame =
                 *(undefined8 *)&(pFVar32->RootTime).SubFrame;
            param_1->bRestoreState = bVar27;
            *(undefined7 *)&param_1->field_0x39 = uVar23;
            *(undefined8 *)&(pFVar32->Hook).Interface = uVar2;
            *(undefined8 *)&(pFVar32->Hook).Interface.field_0x8 = uVar4;
            (pFVar32->Hook).ObjectBindingID.A = uVar16;
            (pFVar32->Hook).ObjectBindingID.B = uVar17;
            (pFVar32->Hook).ObjectBindingID.C = uVar18;
            (pFVar32->Hook).ObjectBindingID.D = uVar19;
            pFVar32->RootInstanceHandle = FVar20;
            pFVar32->SequenceID = (FMovieSceneSequenceID)FVar21.Value;
            pFVar32->TriggerIndex = iVar28;
            (pFVar32->RootTime).FrameNumber = (FFrameNumber)FVar24.Value;
            *(undefined8 *)&(pFVar32->RootTime).SubFrame = uVar5;
            pFVar32->bRestoreState = bVar25;
            *(undefined7 *)&pFVar32->field_0x39 = uVar26;
            if (1 < iVar29) {
              do {
                iVar28 = iVar35 * 2;
                iVar31 = iVar28 + 1;
                if (iVar28 + 2 < iVar29) {
                  uVar1 = *(undefined8 *)
                           (&param_1[iVar31].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
                  uVar2 = *(undefined8 *)
                           (&param_1[(longlong)iVar28 + 2].Hook.Interface.field_0x0 +
                           (int)param_3.DataMemberPtr);
                  iVar30 = (int)uVar1;
                  iVar33 = (int)uVar2;
                  if (iVar33 < iVar30) {
LAB_14610df70:
                    bVar27 = true;
                  }
                  else {
                    if (iVar33 == iVar30) {
                      fStack_c = (float)((ulonglong)uVar2 >> 0x20);
                      fStack_14 = (float)((ulonglong)uVar1 >> 0x20);
                      if (fStack_c < fStack_14) goto LAB_14610df70;
                    }
                    bVar27 = false;
                  }
                  if (bVar27) {
                    iVar31 = iVar28;
                  }
                  iVar31 = iVar31 + 1;
                }
                uVar1 = *(undefined8 *)
                         (&param_1[iVar31].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
                uVar2 = *(undefined8 *)
                         (&param_1[iVar35].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
                iVar28 = (int)uVar1;
                iVar30 = (int)uVar2;
                if (iVar28 <= iVar30) {
                  if (iVar30 != iVar28) break;
                  fStack_c = (float)((ulonglong)uVar2 >> 0x20);
                  fStack_14 = (float)((ulonglong)uVar1 >> 0x20);
                  if (fStack_14 <= fStack_c) break;
                }
                uVar1 = *(undefined8 *)&param_1[iVar31].Hook.Interface.field_0x8;
                uVar2 = *(undefined8 *)&param_1[iVar35].Hook.Interface;
                uVar4 = *(undefined8 *)&param_1[iVar35].Hook.Interface.field_0x8;
                pFVar8 = &param_1[iVar35].Hook;
                uVar16 = (pFVar8->ObjectBindingID).A;
                uVar17 = (pFVar8->ObjectBindingID).B;
                uVar18 = (pFVar8->ObjectBindingID).C;
                uVar19 = (pFVar8->ObjectBindingID).D;
                pFVar10 = param_1 + iVar35;
                FVar20 = pFVar10->RootInstanceHandle;
                FVar21.Value = (pFVar10->SequenceID).Value;
                uVar5 = *(undefined8 *)(&pFVar10->RootInstanceHandle + 2);
                uVar6 = *(undefined8 *)&param_1[iVar35].RootTime.SubFrame;
                uVar7 = *(undefined8 *)((longlong)(&param_1[iVar35].RootTime + 1) + 4);
                *(undefined8 *)&param_1[iVar35].Hook.Interface =
                     *(undefined8 *)&param_1[iVar31].Hook.Interface;
                *(undefined8 *)&param_1[iVar35].Hook.Interface.field_0x8 = uVar1;
                pFVar8 = &param_1[iVar31].Hook;
                uVar12 = (pFVar8->ObjectBindingID).B;
                uVar13 = (pFVar8->ObjectBindingID).C;
                uVar14 = (pFVar8->ObjectBindingID).D;
                pFVar9 = &param_1[iVar35].Hook;
                (pFVar9->ObjectBindingID).A = (pFVar8->ObjectBindingID).A;
                (pFVar9->ObjectBindingID).B = uVar12;
                (pFVar9->ObjectBindingID).C = uVar13;
                (pFVar9->ObjectBindingID).D = uVar14;
                pFVar10 = param_1 + iVar31;
                FVar15.Value = (pFVar10->SequenceID).Value;
                uVar1 = *(undefined8 *)(&pFVar10->RootInstanceHandle + 2);
                pFVar11 = param_1 + iVar35;
                pFVar11->RootInstanceHandle = pFVar10->RootInstanceHandle;
                pFVar11->SequenceID = (FMovieSceneSequenceID)FVar15.Value;
                *(undefined8 *)(&pFVar11->RootInstanceHandle + 2) = uVar1;
                uVar1 = *(undefined8 *)((longlong)(&param_1[iVar31].RootTime + 1) + 4);
                *(undefined8 *)&param_1[iVar35].RootTime.SubFrame =
                     *(undefined8 *)&param_1[iVar31].RootTime.SubFrame;
                *(undefined8 *)((longlong)(&param_1[iVar35].RootTime + 1) + 4) = uVar1;
                *(undefined8 *)&param_1[iVar31].Hook.Interface = uVar2;
                *(undefined8 *)&param_1[iVar31].Hook.Interface.field_0x8 = uVar4;
                pFVar8 = &param_1[iVar31].Hook;
                (pFVar8->ObjectBindingID).A = uVar16;
                (pFVar8->ObjectBindingID).B = uVar17;
                (pFVar8->ObjectBindingID).C = uVar18;
                (pFVar8->ObjectBindingID).D = uVar19;
                pFVar10 = param_1 + iVar31;
                pFVar10->RootInstanceHandle = FVar20;
                pFVar10->SequenceID = (FMovieSceneSequenceID)FVar21.Value;
                *(undefined8 *)(&pFVar10->RootInstanceHandle + 2) = uVar5;
                *(undefined8 *)&param_1[iVar31].RootTime.SubFrame = uVar6;
                *(undefined8 *)((longlong)(&param_1[iVar31].RootTime + 1) + 4) = uVar7;
                iVar35 = iVar31;
              } while (iVar31 * 2 + 1 < iVar29);
            }
            iVar29 = iVar29 + -1;
            lVar36 = lVar36 + -1;
            pFVar32 = pFVar32 + -1;
          } while (0 < lVar36);
        }
        return;
      }
      iVar28 = iVar35 + -1;
      iVar29 = iVar31 + -2;
      iVar31 = iVar29;
      iVar35 = iVar28;
    }
    iVar29 = iVar28 * 2;
    iVar30 = iVar29 + 1;
    if (iVar29 + 2 < param_2) {
      uVar1 = *(undefined8 *)
               (&param_1[iVar30].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
      uVar2 = *(undefined8 *)
               (&param_1[(longlong)iVar29 + 2].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr
               );
      iVar33 = (int)uVar1;
      iVar34 = (int)uVar2;
      if (iVar34 < iVar33) {
LAB_14610ddf0:
        bVar27 = true;
      }
      else {
        if (iVar34 == iVar33) {
          fStack_14 = (float)((ulonglong)uVar2 >> 0x20);
          fStack_c = (float)((ulonglong)uVar1 >> 0x20);
          if (fStack_14 < fStack_c) goto LAB_14610ddf0;
        }
        bVar27 = false;
      }
      if (bVar27) {
        iVar30 = iVar29;
      }
      iVar30 = iVar30 + 1;
    }
    uVar1 = *(undefined8 *)(&param_1[iVar30].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
    uVar2 = *(undefined8 *)(&param_1[iVar28].Hook.Interface.field_0x0 + (int)param_3.DataMemberPtr);
    iVar29 = (int)uVar1;
    iVar33 = (int)uVar2;
    if (iVar29 <= iVar33) {
      if (iVar33 == iVar29) {
        fStack_c = (float)((ulonglong)uVar2 >> 0x20);
        fStack_14 = (float)((ulonglong)uVar1 >> 0x20);
        if (fStack_c < fStack_14) goto LAB_14610de38;
      }
      goto LAB_14610de9e;
    }
LAB_14610de38:
    uVar1 = *(undefined8 *)&param_1[iVar30].Hook.Interface.field_0x8;
    iVar29 = iVar30 * 2 + 1;
    uVar2 = *(undefined8 *)&param_1[iVar28].Hook.Interface;
    uVar4 = *(undefined8 *)&param_1[iVar28].Hook.Interface.field_0x8;
    pFVar8 = &param_1[iVar28].Hook;
    uVar16 = (pFVar8->ObjectBindingID).A;
    uVar17 = (pFVar8->ObjectBindingID).B;
    uVar18 = (pFVar8->ObjectBindingID).C;
    uVar19 = (pFVar8->ObjectBindingID).D;
    pFVar32 = param_1 + iVar28;
    FVar20 = pFVar32->RootInstanceHandle;
    FVar21.Value = (pFVar32->SequenceID).Value;
    uVar5 = *(undefined8 *)(&pFVar32->RootInstanceHandle + 2);
    uVar6 = *(undefined8 *)&param_1[iVar28].RootTime.SubFrame;
    uVar7 = *(undefined8 *)((longlong)(&param_1[iVar28].RootTime + 1) + 4);
    *(undefined8 *)&param_1[iVar28].Hook.Interface = *(undefined8 *)&param_1[iVar30].Hook.Interface;
    *(undefined8 *)&param_1[iVar28].Hook.Interface.field_0x8 = uVar1;
    pFVar8 = &param_1[iVar30].Hook;
    uVar12 = (pFVar8->ObjectBindingID).B;
    uVar13 = (pFVar8->ObjectBindingID).C;
    uVar14 = (pFVar8->ObjectBindingID).D;
    pFVar9 = &param_1[iVar28].Hook;
    (pFVar9->ObjectBindingID).A = (pFVar8->ObjectBindingID).A;
    (pFVar9->ObjectBindingID).B = uVar12;
    (pFVar9->ObjectBindingID).C = uVar13;
    (pFVar9->ObjectBindingID).D = uVar14;
    pFVar32 = param_1 + iVar30;
    FVar15.Value = (pFVar32->SequenceID).Value;
    uVar1 = *(undefined8 *)(&pFVar32->RootInstanceHandle + 2);
    pFVar10 = param_1 + iVar28;
    pFVar10->RootInstanceHandle = pFVar32->RootInstanceHandle;
    pFVar10->SequenceID = (FMovieSceneSequenceID)FVar15.Value;
    *(undefined8 *)(&pFVar10->RootInstanceHandle + 2) = uVar1;
    uVar1 = *(undefined8 *)((longlong)(&param_1[iVar30].RootTime + 1) + 4);
    *(undefined8 *)&param_1[iVar28].RootTime.SubFrame =
         *(undefined8 *)&param_1[iVar30].RootTime.SubFrame;
    *(undefined8 *)((longlong)(&param_1[iVar28].RootTime + 1) + 4) = uVar1;
    *(undefined8 *)&param_1[iVar30].Hook.Interface = uVar2;
    *(undefined8 *)&param_1[iVar30].Hook.Interface.field_0x8 = uVar4;
    pFVar8 = &param_1[iVar30].Hook;
    (pFVar8->ObjectBindingID).A = uVar16;
    (pFVar8->ObjectBindingID).B = uVar17;
    (pFVar8->ObjectBindingID).C = uVar18;
    (pFVar8->ObjectBindingID).D = uVar19;
    pFVar32 = param_1 + iVar30;
    pFVar32->RootInstanceHandle = FVar20;
    pFVar32->SequenceID = (FMovieSceneSequenceID)FVar21.Value;
    *(undefined8 *)(&pFVar32->RootInstanceHandle + 2) = uVar5;
    *(undefined8 *)&param_1[iVar30].RootTime.SubFrame = uVar6;
    *(undefined8 *)((longlong)(&param_1[iVar30].RootTime + 1) + 4) = uVar7;
    iVar28 = iVar30;
  } while( true );
}

// HeapSortInternal<`UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder'::__l2::FSortableID,int,UE::Core::Private::TProjectionMemberData<unsigned_short_`UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder'::__l2::FSortableID::*>,TLess<void>_> @ 14610e050

void __cdecl
AlgoImpl::
HeapSortInternal<_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID,int,UE::Core::Private::TProjectionMemberData<unsigned_short__UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID::*>,TLess<void>_>
          (FSortableID *param_1,int param_2,
          TProjectionMemberData<unsigned_short__public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID::*>
          param_3,TLess<void> param_4)

{
  FSortableID FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  lVar7 = (longlong)(int)param_3.DataMemberPtr;
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
  iVar9 = iVar5;
  iVar10 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14610e152:
      if (iVar10 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            FVar1 = *param_1;
            iVar9 = 0;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = FVar1;
            if (1 < iVar5) {
              do {
                iVar10 = iVar9 * 2;
                iVar4 = iVar10 + 1;
                if (iVar10 + 2 < iVar5) {
                  if (*(ushort *)((longlong)&param_1[(longlong)iVar10 + 2].NodeID + lVar7) <
                      *(ushort *)((longlong)&param_1[iVar4].NodeID + lVar7)) {
                    iVar4 = iVar10;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (*(ushort *)((longlong)&param_1[iVar4].NodeID + lVar7) <=
                    *(ushort *)((longlong)&param_1[iVar9].NodeID + lVar7)) break;
                FVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar10 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar10 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (*(ushort *)((longlong)&param_1[(longlong)iVar5 + 2].NodeID + lVar7) <
          *(ushort *)((longlong)&param_1[iVar6].NodeID + lVar7)) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if (*(ushort *)((longlong)&param_1[iVar6].NodeID + lVar7) <=
        *(ushort *)((longlong)&param_1[iVar4].NodeID + lVar7)) goto LAB_14610e152;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = FVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapifyInternal<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,UE::Core::Private::TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>,TReversePredicate<TLess<void>_>_> @ 14610e240

void __cdecl
AlgoImpl::
HeapifyInternal<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,UE::Core::Private::TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>,TReversePredicate<TLess<void>_>_>
          (FMovieSceneDeterminismFenceWithSubframe *param_1,int param_2,
          TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>
          param_3,TReversePredicate<TLess<void>_> param_4)

{
  FFrameTime FVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float fStack_14;
  float fStack_c;
  
  lVar12 = (longlong)(int)param_3.DataMemberPtr;
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar10 = iVar8 * 2 + 1;
  iVar6 = iVar10;
  iVar13 = iVar8;
  do {
    while (param_2 <= iVar10) {
LAB_14610e39a:
      if (iVar13 == 0) {
        return;
      }
      iVar8 = iVar13 + -1;
      iVar10 = iVar6 + -2;
      iVar6 = iVar10;
      iVar13 = iVar8;
    }
    iVar10 = iVar8 * 2;
    iVar11 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      uVar3 = *(undefined8 *)((longlong)&param_1[iVar11].FrameTime.FrameNumber.Value + lVar12);
      uVar4 = *(undefined8 *)
               ((longlong)&param_1[(longlong)iVar10 + 2].FrameTime.FrameNumber.Value + lVar12);
      iVar14 = (int)uVar3;
      iVar9 = (int)uVar4;
      if (iVar9 < iVar14) {
LAB_14610e313:
        bVar7 = true;
      }
      else {
        if (iVar9 == iVar14) {
          fStack_14 = (float)((ulonglong)uVar4 >> 0x20);
          fStack_c = (float)((ulonglong)uVar3 >> 0x20);
          if (fStack_14 < fStack_c) goto LAB_14610e313;
        }
        bVar7 = false;
      }
      if (bVar7) {
        iVar11 = iVar10;
      }
      iVar11 = iVar11 + 1;
    }
    uVar3 = *(undefined8 *)((longlong)&param_1[iVar11].FrameTime.FrameNumber.Value + lVar12);
    uVar4 = *(undefined8 *)((longlong)&param_1[iVar8].FrameTime.FrameNumber.Value + lVar12);
    iVar10 = (int)uVar3;
    iVar9 = (int)uVar4;
    if (iVar10 <= iVar9) {
      if (iVar9 == iVar10) {
        fStack_c = (float)((ulonglong)uVar4 >> 0x20);
        fStack_14 = (float)((ulonglong)uVar3 >> 0x20);
        if (fStack_c < fStack_14) goto LAB_14610e35c;
      }
      goto LAB_14610e39a;
    }
LAB_14610e35c:
    FVar1 = param_1[iVar8].FrameTime;
    uVar2 = *(undefined4 *)&param_1[iVar8].field_0x8;
    param_1[iVar8].FrameTime = param_1[iVar11].FrameTime;
    *(undefined4 *)&param_1[iVar8].field_0x8 = *(undefined4 *)&param_1[iVar11].field_0x8;
    iVar10 = iVar11 * 2 + 1;
    param_1[iVar11].FrameTime = FVar1;
    *(undefined4 *)&param_1[iVar11].field_0x8 = uVar2;
    iVar8 = iVar11;
  } while( true );
}

// IndexOfBy<TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,unsigned_short,FIdentityFunctor> @ 14610e3d0

int __cdecl
AlgoImpl::
IndexOfBy<TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,unsigned_short,FIdentityFunctor>
          (TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1,
          ushort *param_2,FIdentityFunctor param_3)

{
  ForElementType<unsigned_short> FVar1;
  ulonglong uVar2;
  ForElementType<unsigned_short> FVar3;
  ulonglong uVar4;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<unsigned_short>)param_1;
  if (FVar1 != (ForElementType<unsigned_short>)0x0) {
    FVar3 = FVar1;
  }
  uVar2 = 0;
  if (0 < param_1->ArrayNum) {
    uVar4 = uVar2;
    do {
      if (*(ushort *)((longlong)FVar3 + uVar2 * 2) == *param_2) {
        return (int)uVar4;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// IndexOfBy<TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,unsigned_short,FIdentityFunctor> @ 14610e420

int __cdecl
AlgoImpl::
IndexOfBy<TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,unsigned_short,FIdentityFunctor>
          (TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1,
          ushort *param_2,FIdentityFunctor param_3)

{
  ForElementType<unsigned_short> FVar1;
  ulonglong uVar2;
  ForElementType<unsigned_short> FVar3;
  ulonglong uVar4;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<unsigned_short>)param_1;
  if (FVar1 != (ForElementType<unsigned_short>)0x0) {
    FVar3 = FVar1;
  }
  uVar2 = 0;
  if (0 < param_1->ArrayNum) {
    uVar4 = uVar2;
    do {
      if (*(ushort *)((longlong)FVar3 + uVar2 * 2) == *param_2) {
        return (int)uVar4;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// IndexOfBy<TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,unsigned_short,FIdentityFunctor> @ 14610e470

int __cdecl
AlgoImpl::
IndexOfBy<TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,unsigned_short,FIdentityFunctor>
          (TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_1,
          ushort *param_2,FIdentityFunctor param_3)

{
  ForElementType<unsigned_short> FVar1;
  ulonglong uVar2;
  ForElementType<unsigned_short> FVar3;
  ulonglong uVar4;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<unsigned_short>)param_1;
  if (FVar1 != (ForElementType<unsigned_short>)0x0) {
    FVar3 = FVar1;
  }
  uVar2 = 0;
  if (0 < param_1->ArrayNum) {
    uVar4 = uVar2;
    do {
      if (*(ushort *)((longlong)FVar3 + uVar2 * 2) == *param_2) {
        return (int)uVar4;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// IndexOfBy<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,unsigned_short,FIdentityFunctor> @ 14610e4c0

int __cdecl
AlgoImpl::
IndexOfBy<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,unsigned_short,FIdentityFunctor>
          (TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_1
          ,ushort *param_2,FIdentityFunctor param_3)

{
  ForElementType<unsigned_short> FVar1;
  ulonglong uVar2;
  ForElementType<unsigned_short> FVar3;
  ulonglong uVar4;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<unsigned_short>)param_1;
  if (FVar1 != (ForElementType<unsigned_short>)0x0) {
    FVar3 = FVar1;
  }
  uVar2 = 0;
  if (0 < param_1->ArrayNum) {
    uVar4 = uVar2;
    do {
      if (*(ushort *)((longlong)FVar3 + uVar2 * 2) == *param_2) {
        return (int)uVar4;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// InternalConstructor<UMovieSceneCachePreAnimatedStateSystem> @ 14610e510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
InternalConstructor<UMovieSceneCachePreAnimatedStateSystem>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->Phase = Instantiation;
    this->_padding_ = (longlong)&___7UMovieSceneCachePreAnimatedStateSystem__6B_;
    if ((this->_padding_ & 0x10) != 0) {
      pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = (pFVar2->SymbolicTags).CreatesEntities.Value;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneEntityGroupingSystem> @ 14610e590

void __cdecl InternalConstructor<UMovieSceneEntityGroupingSystem>(FObjectInitializer *param_1)

{
  if ((UMovieSceneEntityGroupingSystem *)param_1->Obj != (UMovieSceneEntityGroupingSystem *)0x0) {
    UMovieSceneEntityGroupingSystem::UMovieSceneEntityGroupingSystem
              ((UMovieSceneEntityGroupingSystem *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneEntityInstantiatorSystem> @ 14610e5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneEntityInstantiatorSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem *this;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->Phase = Instantiation;
    this->_padding_ = (longlong)&___7UMovieSceneEntityInstantiatorSystem__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneEntitySystem> @ 14610e5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneEntitySystem>(FObjectInitializer *param_1)

{
  if ((UMovieSceneEntitySystem *)param_1->Obj != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem
              ((UMovieSceneEntitySystem *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneEntitySystemLinker> @ 14610e610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneEntitySystemLinker>(FObjectInitializer *param_1)

{
  if ((UMovieSceneEntitySystemLinker *)param_1->Obj != (UMovieSceneEntitySystemLinker *)0x0) {
    UMovieSceneEntitySystemLinker::UMovieSceneEntitySystemLinker
              ((UMovieSceneEntitySystemLinker *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneEvalTimeSystem> @ 14610e630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneEvalTimeSystem>(FObjectInitializer *param_1)

{
  longlong *plVar1;
  FComponentTypeID FVar2;
  UMovieSceneEntitySystem *this;
  undefined4 uVar3;
  int iVar4;
  FBuiltInComponentTypes *pFVar5;
  FComponentMask *this_00;
  undefined8 local_res8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneEvalTimeSystem__6B_;
    plVar1 = &this[6]._padding_;
    this[4].Linker.field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
    this[4].RelevantComponent = 0;
    this[4].Phase = None;
    this[4].field_0x33 = 0;
    this[4].GraphID = 0x10;
    this[4].GlobalDependencyGraphID = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x180;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0x180;
    *plVar1 = 0;
    this[6]._padding_ = 0;
    pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
    this->SystemCategories = Core;
    uVar3._0_2_ = pFVar5->EvalTime;
    uVar3._2_2_ = pFVar5->EvalSeconds;
    iVar4 = (int)this[6]._padding_;
    local_res8 = (UObject *)CONCAT44(local_res8._4_4_,uVar3);
    if (iVar4 == *(int *)((longlong)&this[6]._padding_ + 4)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,(ForAnyElementType *)plVar1,(int *)((longlong)&this[6]._padding_ + 4)
                        );
    }
    *(int *)&this[6]._padding_ = iVar4 + 1;
    local_28._First = (FComponentTypeID *)&local_res8;
    this_00 = (FComponentMask *)(*plVar1 + (longlong)iVar4 * 0x3c);
    local_28._Last = (FComponentTypeID *)((longlong)&local_res8 + 4);
    (this_00->Bits).NumBits = 0;
    (this_00->Bits).MaxBits = 0x180;
    this_00[1].Bits.AllocatorInstance.InlineData[0].Pad[0] = '\x02';
    UE::MovieScene::FComponentMask::SetAll(this_00,&local_28);
    this->Phase = Scheduling;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      FVar2.Value = *(ushort *)&pFVar5->EvalTime;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar2);
      local_res8 = (UObject *)this->_padding_;
      FVar2.Value = *(ushort *)&pFVar5->EvalSeconds;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar2);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneEvaluationHookSystem> @ 14610e7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneEvaluationHookSystem>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneEvaluationHookSystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].Linker.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].Linker.field0_0x0 + 4) = 0x80;
    this[1].RelevantComponent = 0xffff;
    this[1].Phase = ~None;
    this[1].field_0x33 = 0xff;
    this[1].GraphID = 0;
    this[1].GlobalDependencyGraphID = 0;
    this[1].StatID.StatIdPtr = (TStatIdData *)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this->Phase = Finalization|Scheduling|Instantiation;
    if ((this->_padding_ & 0x10) != 0) {
      pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar2->EvalTime;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneInitialValueSystem> @ 14610e860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneInitialValueSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem *this;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->Phase = Instantiation;
    this->_padding_ = (longlong)&___7UMovieSceneInitialValueSystem__6B_;
    this->SystemCategories = Core;
  }
  return;
}

// InternalConstructor<UMovieScenePreAnimatedStateSystemInterface> @ 14610e8a0

void __cdecl
InternalConstructor<UMovieScenePreAnimatedStateSystemInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieScenePreAnimatedStateSystemInterface__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneRestorePreAnimatedStateSystem> @ 14610e8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
InternalConstructor<UMovieSceneRestorePreAnimatedStateSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem *this;
  UObject *local_res8;
  UClass *local_res10 [3];
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->Phase = Instantiation;
    this->_padding_ = (longlong)&___7UMovieSceneRestorePreAnimatedStateSystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10[0] = UMovieSceneCachePreAnimatedStateSystem::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res10[0]);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneRootInstantiatorSystem> @ 14610e960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneRootInstantiatorSystem>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->Phase = Instantiation;
    this->_padding_ = (longlong)&___7UMovieSceneRootInstantiatorSystem__6B_;
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    (this->RelevantComponent).Value = (pFVar2->Tags).Root.Value;
    if ((this->_padding_ & 0x10) != 0) {
      pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = (pFVar2->Tags).Root.Value;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneSpawnablesSystem> @ 14610e9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneSpawnablesSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar1;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->Phase = Spawn;
    this->_padding_ = (longlong)&___7UMovieSceneSpawnablesSystem__6B_;
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    (this->RelevantComponent).Value = (ushort)pFVar1->SpawnableBinding;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneCachePreAnimatedStateSystem> @ 14610ea30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCachePreAnimatedStateSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCachePreAnimatedStateSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined ***)pUVar1 = &___7UMovieSceneCachePreAnimatedStateSystem__6B_;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEntityGroupingSystem> @ 14610eaf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneEntityGroupingSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEntityGroupingSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined ***)pUVar1 = &___7UMovieSceneEntityGroupingSystem__6B_;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 3) = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x14 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0xc = 0x80;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined4 *)&pUVar1[8].field_0x10 = 0;
    *(undefined4 *)&pUVar1[8].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0x1c = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEntityInstantiatorSystem> @ 14610eca0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneEntityInstantiatorSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEntityInstantiatorSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined ***)pUVar1 = &___7UMovieSceneEntityInstantiatorSystem__6B_;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEntitySystem> @ 14610ed60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneEntitySystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEntitySystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneEntitySystem__6B_;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEntitySystemLinker> @ 14610ee20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneEntitySystemLinker>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEntitySystemLinker::GetPrivateStaticClass();
  pUVar3 = (UMovieSceneEntitySystemLinker *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMovieSceneEntitySystemLinker *)0x0) {
    pUVar3 = UMovieSceneEntitySystemLinker::UMovieSceneEntitySystemLinker(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEvalTimeSystem> @ 14610eec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneEvalTimeSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEvalTimeSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined ***)pUVar1 = &___7UMovieSceneEvalTimeSystem__6B_;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined4 *)&pUVar1[8].field_0x10 = 0;
    *(undefined4 *)&pUVar1[8].field_0x14 = 0x10;
    *(undefined4 *)&pUVar1[9].field_0x20 = 0;
    *(undefined4 *)&pUVar1[9].field_0x24 = 0x180;
    *(undefined4 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0xc = 0x180;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEvaluationHookSystem> @ 14610efd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneEvaluationHookSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEvaluationHookSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined ***)pUVar1 = &___7UMovieSceneEvaluationHookSystem__6B_;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 3) = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneInitialValueSystem> @ 14610f0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneInitialValueSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneInitialValueSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined ***)pUVar1 = &___7UMovieSceneInitialValueSystem__6B_;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScenePreAnimatedStateSystemInterface> @ 14610f180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScenePreAnimatedStateSystemInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScenePreAnimatedStateSystemInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieScenePreAnimatedStateSystemInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneRestorePreAnimatedStateSystem> @ 14610f230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneRestorePreAnimatedStateSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneRestorePreAnimatedStateSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined ***)pUVar1 = &___7UMovieSceneRestorePreAnimatedStateSystem__6B_;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneRootInstantiatorSystem> @ 14610f300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneRootInstantiatorSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneRootInstantiatorSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined ***)pUVar1 = &___7UMovieSceneRootInstantiatorSystem__6B_;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSpawnablesSystem> @ 14610f3c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneSpawnablesSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSpawnablesSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(TStatIdData **)&pUVar1[1].field_0x18 = &TStatId::TStatId_NAME_None;
    *(undefined ***)pUVar1 = &___7UMovieSceneSpawnablesSystem__6B_;
    *(undefined2 *)&pUVar1[1].field_0x8 = 0xffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TLess<void>_> @ 14610f480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TLess<void>_>
          (FDissectedUpdate *param_1,int param_2,
          TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*> param_3,
          TLess<void> param_4)

{
  FDissectedUpdate *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FFrameNumber FVar17;
  int iVar18;
  Type TVar19;
  undefined4 uVar20;
  FInstanceHandle FVar21;
  FFrameNumber FVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  Type TVar27;
  FFrameNumber FVar28;
  int iVar29;
  undefined4 uVar30;
  FInstanceHandle FVar31;
  int iVar32;
  ERunnerUpdateFlags EVar33;
  undefined4 uVar34;
  int iVar35;
  longlong lVar36;
  longlong lVar37;
  FDissectedUpdate *pFVar38;
  FDissectedUpdate *pFVar39;
  FDissectedUpdate *pFVar40;
  FDissectedUpdate *pFVar41;
  FDissectedUpdate *pFVar42;
  FDissectedUpdate *pFVar43;
  FDissectedUpdate **ppFVar44;
  float fVar45;
  undefined1 auStack_428 [48];
  FDissectedUpdate *local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  longlong lStack_3d8;
  longlong local_3d0;
  longlong lStack_3c8;
  longlong local_3c0;
  longlong lStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  FScriptContainerElement *local_3a0;
  undefined8 uStack_398;
  longlong local_390;
  longlong lStack_388;
  longlong local_380;
  FScriptContainerElement *pFStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  FDissectedUpdate *local_348;
  FDissectedUpdate *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_428;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar45 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar45;
    memset(local_330,0,0x2e8);
    ppFVar44 = &local_348;
    do {
      pFVar38 = ppFVar44[1];
      pFVar43 = *ppFVar44;
      pFVar1 = ppFVar44[2];
      local_3f8._0_4_ = (int)pFVar1;
      lVar36 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)pFVar38 - (longlong)pFVar43),
                      8) + ((longlong)pFVar38 - (longlong)pFVar43);
      iVar35 = ((int)(lVar36 >> 7) - (int)(lVar36 >> 0x3f)) + 1;
      pFVar42 = pFVar43;
      if ((int)local_3f8 != 0) {
LAB_14610f570:
        if (8 < iVar35) {
          pFVar40 = pFVar38 + 1;
          pFVar43 = pFVar42 + iVar35 / 2;
          uVar2 = *(undefined8 *)&pFVar43->OnFlushed;
          uVar3 = *(undefined8 *)&(pFVar43->OnFlushed).field_0x8;
          EVar33 = pFVar43->UpdateFlags;
          uVar34 = *(undefined4 *)&pFVar43->field_0xa4;
          uVar4 = *(undefined8 *)&(pFVar43->OnFlushed).field_0x10;
          lVar36 = (pFVar43->Context)._padding_;
          lVar37 = (pFVar43->Context)._padding_;
          lVar5 = (pFVar43->Context)._padding_;
          lVar6 = (pFVar43->Context)._padding_;
          lVar7 = (pFVar43->Context)._padding_;
          fVar45 = (pFVar43->Context).RootToSequenceTransform.LinearTransform.TimeScale;
          FVar22.Value = (pFVar43->Context).RootToSequenceTransform.LinearTransform.Offset.
                         FrameNumber.Value;
          uVar8 = *(undefined8 *)
                   &(pFVar43->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
          pFVar9 = (pFVar43->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                   Data;
          iVar23 = (pFVar43->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
          iVar24 = (pFVar43->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
          lVar10 = (pFVar43->Context).RootToSequenceWarpCounter._padding_;
          lVar11 = (pFVar43->Context).RootToSequenceWarpCounter._padding_;
          lVar12 = (pFVar43->Context).RootToSequenceWarpCounter._padding_;
          pFVar13 = (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
          iVar25 = (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
          iVar26 = (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
          TVar27 = (pFVar43->Context).Status;
          FVar28.Value = (pFVar43->Context).PrePostRollStartEndTime.Value;
          iVar29 = (pFVar43->Context).HierarchicalBias;
          uVar30 = *(undefined4 *)&(pFVar43->Context).field_0x7c;
          FVar31 = pFVar43->InstanceHandle;
          iVar32 = pFVar43->Order;
          uVar14 = *(undefined8 *)&(pFVar42->OnFlushed).field_0x8;
          *(undefined8 *)&pFVar43->OnFlushed = *(undefined8 *)&pFVar42->OnFlushed;
          *(undefined8 *)&(pFVar43->OnFlushed).field_0x8 = uVar14;
          lVar15 = (pFVar42->Context)._padding_;
          *(undefined8 *)&(pFVar43->OnFlushed).field_0x10 =
               *(undefined8 *)&(pFVar42->OnFlushed).field_0x10;
          (pFVar43->Context)._padding_ = lVar15;
          lVar15 = (pFVar42->Context)._padding_;
          (pFVar43->Context)._padding_ = (pFVar42->Context)._padding_;
          (pFVar43->Context)._padding_ = lVar15;
          lVar15 = (pFVar42->Context)._padding_;
          (pFVar43->Context)._padding_ = (pFVar42->Context)._padding_;
          (pFVar43->Context)._padding_ = lVar15;
          FVar17.Value = (pFVar42->Context).RootToSequenceTransform.LinearTransform.Offset.
                         FrameNumber.Value;
          uVar14 = *(undefined8 *)
                    &(pFVar42->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
          (pFVar43->Context).RootToSequenceTransform.LinearTransform.TimeScale =
               (pFVar42->Context).RootToSequenceTransform.LinearTransform.TimeScale;
          (pFVar43->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
               (FFrameNumber)FVar17.Value;
          *(undefined8 *)&(pFVar43->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame
               = uVar14;
          iVar35 = (pFVar42->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
          iVar18 = (pFVar42->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
          (pFVar43->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               (pFVar42->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
          (pFVar43->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar35;
          (pFVar43->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = iVar18;
          lVar15 = (pFVar42->Context).RootToSequenceWarpCounter._padding_;
          (pFVar43->Context).RootToSequenceWarpCounter._padding_ =
               (pFVar42->Context).RootToSequenceWarpCounter._padding_;
          (pFVar43->Context).RootToSequenceWarpCounter._padding_ = lVar15;
          pFVar16 = (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
          (pFVar43->Context).RootToSequenceWarpCounter._padding_ =
               (pFVar42->Context).RootToSequenceWarpCounter._padding_;
          (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar16;
          iVar35 = (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
          TVar19 = (pFVar42->Context).Status;
          FVar17.Value = (pFVar42->Context).PrePostRollStartEndTime.Value;
          (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum =
               (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
          (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar35;
          (pFVar43->Context).Status = TVar19;
          (pFVar43->Context).PrePostRollStartEndTime = (FFrameNumber)FVar17.Value;
          uVar20 = *(undefined4 *)&(pFVar42->Context).field_0x7c;
          FVar21 = pFVar42->InstanceHandle;
          iVar35 = pFVar42->Order;
          (pFVar43->Context).HierarchicalBias = (pFVar42->Context).HierarchicalBias;
          *(undefined4 *)&(pFVar43->Context).field_0x7c = uVar20;
          pFVar43->InstanceHandle = FVar21;
          pFVar43->Order = iVar35;
          uVar20 = *(undefined4 *)&pFVar42->field_0xa4;
          pFVar43->UpdateFlags = pFVar42->UpdateFlags;
          *(undefined4 *)&pFVar43->field_0xa4 = uVar20;
          *(undefined8 *)&pFVar42->OnFlushed = uVar2;
          *(undefined8 *)&(pFVar42->OnFlushed).field_0x8 = uVar3;
          *(undefined8 *)&(pFVar42->OnFlushed).field_0x10 = uVar4;
          (pFVar42->Context)._padding_ = lVar36;
          (pFVar42->Context)._padding_ = lVar37;
          (pFVar42->Context)._padding_ = lVar5;
          (pFVar42->Context)._padding_ = lVar6;
          (pFVar42->Context)._padding_ = lVar7;
          (pFVar42->Context).RootToSequenceTransform.LinearTransform.TimeScale = fVar45;
          (pFVar42->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
               (FFrameNumber)FVar22.Value;
          *(undefined8 *)&(pFVar42->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame
               = uVar8;
          (pFVar42->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               pFVar9;
          (pFVar42->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar23;
          (pFVar42->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = iVar24;
          (pFVar42->Context).RootToSequenceWarpCounter._padding_ = lVar10;
          (pFVar42->Context).RootToSequenceWarpCounter._padding_ = lVar11;
          (pFVar42->Context).RootToSequenceWarpCounter._padding_ = lVar12;
          (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar13;
          (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum = iVar25;
          (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar26;
          (pFVar42->Context).Status = TVar27;
          (pFVar42->Context).PrePostRollStartEndTime = (FFrameNumber)FVar28.Value;
          (pFVar42->Context).HierarchicalBias = iVar29;
          *(undefined4 *)&(pFVar42->Context).field_0x7c = uVar30;
          pFVar42->InstanceHandle = FVar31;
          pFVar42->Order = iVar32;
          pFVar42->UpdateFlags = EVar33;
          *(undefined4 *)&pFVar42->field_0xa4 = uVar34;
          pFVar43 = pFVar42;
LAB_14610f6f0:
          pFVar39 = pFVar43;
          pFVar43 = pFVar39 + 1;
          if (pFVar43 <= pFVar38) goto code_r0x00014610f6fc;
          goto LAB_14610f710;
        }
        for (; pFVar43 = pFVar42, pFVar1 = pFVar42, pFVar42 < pFVar38;
            pFVar38 = (FDissectedUpdate *)((longlong)pFVar38 + 0xffffffffffffff58)) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar38) {
            if (*(int *)(&(pFVar43->OnFlushed).field_0x0 + (int)param_3.DataMemberPtr) <
                *(int *)(&(pFVar1->OnFlushed).field_0x0 + (int)param_3.DataMemberPtr)) {
              pFVar43 = pFVar1;
            }
          }
          local_3f0 = *(undefined8 *)&pFVar43->OnFlushed;
          uStack_3e8 = *(undefined8 *)&(pFVar43->OnFlushed).field_0x8;
          local_350 = *(undefined8 *)&pFVar43->UpdateFlags;
          local_3e0 = *(undefined8 *)&(pFVar43->OnFlushed).field_0x10;
          lStack_3d8 = (pFVar43->Context)._padding_;
          local_3d0 = (pFVar43->Context)._padding_;
          lStack_3c8 = (pFVar43->Context)._padding_;
          local_3c0 = (pFVar43->Context)._padding_;
          lStack_3b8 = (pFVar43->Context)._padding_;
          local_3b0._0_4_ = (pFVar43->Context).RootToSequenceTransform.LinearTransform.TimeScale;
          local_3b0._4_4_ =
               (pFVar43->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber;
          uStack_3a8 = *(undefined8 *)
                        &(pFVar43->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
          local_3a0 = (pFVar43->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                      Data;
          uStack_398._0_4_ = (pFVar43->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
          uStack_398._4_4_ = (pFVar43->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
          local_390 = (pFVar43->Context).RootToSequenceWarpCounter._padding_;
          lStack_388 = (pFVar43->Context).RootToSequenceWarpCounter._padding_;
          local_380 = (pFVar43->Context).RootToSequenceWarpCounter._padding_;
          pFStack_378 = (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.
                        Data;
          local_370._0_4_ = (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
          local_370._4_4_ = (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
          uStack_368._0_4_ = (pFVar43->Context).Status;
          uStack_368._4_4_ = (pFVar43->Context).PrePostRollStartEndTime;
          local_360 = *(undefined8 *)&(pFVar43->Context).HierarchicalBias;
          uStack_358._0_2_ = (pFVar43->InstanceHandle).InstanceID;
          uStack_358._2_2_ = (pFVar43->InstanceHandle).InstanceSerial;
          uStack_358._4_4_ = pFVar43->Order;
          uVar2 = *(undefined8 *)((longlong)pFVar38 + 8);
          *(undefined8 *)&pFVar43->OnFlushed = *(undefined8 *)pFVar38;
          *(undefined8 *)&(pFVar43->OnFlushed).field_0x8 = uVar2;
          lVar36 = ((FMovieSceneContext *)((longlong)pFVar38 + 0x18))->_padding_;
          *(undefined8 *)&(pFVar43->OnFlushed).field_0x10 =
               *(undefined8 *)((longlong)pFVar38 + 0x10);
          (pFVar43->Context)._padding_ = lVar36;
          lVar36 = ((FMovieSceneContext *)((longlong)pFVar38 + 0x28))->_padding_;
          (pFVar43->Context)._padding_ =
               ((FMovieSceneContext *)((longlong)pFVar38 + 0x20))->_padding_;
          (pFVar43->Context)._padding_ = lVar36;
          lVar36 = ((FMovieSceneContext *)((longlong)pFVar38 + 0x38))->_padding_;
          (pFVar43->Context)._padding_ =
               ((FMovieSceneContext *)((longlong)pFVar38 + 0x30))->_padding_;
          (pFVar43->Context)._padding_ = lVar36;
          uVar2 = ((FMovieSceneContext *)((longlong)pFVar38 + 0x40))->_padding_;
          uVar3 = ((FMovieSceneContext *)((longlong)pFVar38 + 0x48))->_padding_;
          (pFVar43->Context).RootToSequenceTransform.LinearTransform.TimeScale = (float)(int)uVar2;
          (pFVar43->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
               (FFrameNumber)(int)((ulonglong)uVar2 >> 0x20);
          *(undefined8 *)&(pFVar43->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame
               = uVar3;
          uVar2 = ((FMovieSceneContext *)((longlong)pFVar38 + 0x58))->_padding_;
          (pFVar43->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               (FScriptContainerElement *)
               ((FMovieSceneContext *)((longlong)pFVar38 + 0x50))->_padding_;
          (pFVar43->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = (int)uVar2;
          (pFVar43->Context).RootToSequenceTransform.NestedTransforms.ArrayMax =
               (int)((ulonglong)uVar2 >> 0x20);
          lVar36 = ((FMovieSceneContext *)((longlong)pFVar38 + 0x68))->_padding_;
          (pFVar43->Context).RootToSequenceWarpCounter._padding_ =
               ((FMovieSceneContext *)((longlong)pFVar38 + 0x60))->_padding_;
          (pFVar43->Context).RootToSequenceWarpCounter._padding_ = lVar36;
          pFVar9 = (FScriptContainerElement *)
                   ((FMovieSceneContext *)((longlong)pFVar38 + 0x78))->_padding_;
          (pFVar43->Context).RootToSequenceWarpCounter._padding_ =
               ((FMovieSceneContext *)((longlong)pFVar38 + 0x70))->_padding_;
          (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar9;
          uVar2 = ((FMovieSceneContext *)((longlong)pFVar38 + 0x80))->_padding_;
          uVar3 = ((FMovieSceneContext *)((longlong)pFVar38 + 0x88))->_padding_;
          (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum = (int)uVar2;
          (pFVar43->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax =
               (int)((ulonglong)uVar2 >> 0x20);
          (pFVar43->Context).Status = (int)uVar3;
          (pFVar43->Context).PrePostRollStartEndTime = (FFrameNumber)(int)((ulonglong)uVar3 >> 0x20)
          ;
          uVar2 = *(undefined8 *)((longlong)pFVar38 + 0x98);
          *(longlong *)&(pFVar43->Context).HierarchicalBias =
               ((FMovieSceneContext *)((longlong)pFVar38 + 0x90))->_padding_;
          *(undefined8 *)&pFVar43->InstanceHandle = uVar2;
          *(undefined8 *)&pFVar43->UpdateFlags = *(undefined8 *)((longlong)pFVar38 + 0xa0);
          *(undefined8 *)pFVar38 = local_3f0;
          *(undefined8 *)((longlong)pFVar38 + 8) = uStack_3e8;
          *(undefined8 *)((longlong)pFVar38 + 0x10) = local_3e0;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x18))->_padding_ = lStack_3d8;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x20))->_padding_ = local_3d0;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x28))->_padding_ = lStack_3c8;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x30))->_padding_ = local_3c0;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x38))->_padding_ = lStack_3b8;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x40))->_padding_ = local_3b0;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x48))->_padding_ = uStack_3a8;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x50))->_padding_ = (longlong)local_3a0;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x58))->_padding_ = uStack_398;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x60))->_padding_ = local_390;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x68))->_padding_ = lStack_388;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x70))->_padding_ = local_380;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x78))->_padding_ = (longlong)pFStack_378;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x80))->_padding_ = local_370;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x88))->_padding_ = uStack_368;
          ((FMovieSceneContext *)((longlong)pFVar38 + 0x90))->_padding_ = local_360;
          *(undefined8 *)((longlong)pFVar38 + 0x98) = uStack_358;
          *(undefined8 *)((longlong)pFVar38 + 0xa0) = local_350;
        }
        goto LAB_14610fad7;
      }
LAB_14610fac8:
      local_3f8 = pFVar1;
      HeapSortInternal<FMovieSceneEntitySystemRunner::FDissectedUpdate,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneEntitySystemRunner::FDissectedUpdate::*>,TLess<void>_>
                (pFVar43,iVar35,param_3,param_4);
LAB_14610fad7:
      ppFVar44 = ppFVar44 + -3;
    } while (&local_348 <= ppFVar44);
  }
  return;
code_r0x00014610f6fc:
  if (*(int *)(&(pFVar43->OnFlushed).field_0x0 + (int)param_3.DataMemberPtr) <=
      *(int *)(&(pFVar42->OnFlushed).field_0x0 + (int)param_3.DataMemberPtr)) goto LAB_14610f6f0;
LAB_14610f710:
  do {
    pFVar41 = pFVar40;
    pFVar40 = pFVar41 + -1;
    if (pFVar40 <= pFVar42) break;
  } while (*(int *)(&(pFVar42->OnFlushed).field_0x0 + (int)param_3.DataMemberPtr) <=
           *(int *)(&(pFVar40->OnFlushed).field_0x0 + (int)param_3.DataMemberPtr));
  if (pFVar43 <= pFVar40) {
    uVar2 = *(undefined8 *)&pFVar43->OnFlushed;
    uVar3 = *(undefined8 *)&pFVar39[1].OnFlushed.field_0x8;
    EVar33 = pFVar39[1].UpdateFlags;
    uVar34 = *(undefined4 *)&pFVar39[1].field_0xa4;
    uVar4 = *(undefined8 *)&pFVar39[1].OnFlushed.field_0x10;
    lVar36 = pFVar39[1].Context._padding_;
    lVar37 = pFVar39[1].Context._padding_;
    lVar5 = pFVar39[1].Context._padding_;
    lVar6 = pFVar39[1].Context._padding_;
    lVar7 = pFVar39[1].Context._padding_;
    fVar45 = pFVar39[1].Context.RootToSequenceTransform.LinearTransform.TimeScale;
    FVar22.Value = pFVar39[1].Context.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.
                   Value;
    uVar8 = *(undefined8 *)
             &pFVar39[1].Context.RootToSequenceTransform.LinearTransform.Offset.SubFrame;
    pFVar9 = pFVar39[1].Context.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
    iVar23 = pFVar39[1].Context.RootToSequenceTransform.NestedTransforms.ArrayNum;
    iVar24 = pFVar39[1].Context.RootToSequenceTransform.NestedTransforms.ArrayMax;
    lVar10 = pFVar39[1].Context.RootToSequenceWarpCounter._padding_;
    lVar11 = pFVar39[1].Context.RootToSequenceWarpCounter._padding_;
    lVar12 = pFVar39[1].Context.RootToSequenceWarpCounter._padding_;
    pFVar13 = pFVar39[1].Context.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
    iVar25 = pFVar39[1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayNum;
    iVar26 = pFVar39[1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayMax;
    TVar27 = pFVar39[1].Context.Status;
    FVar28.Value = pFVar39[1].Context.PrePostRollStartEndTime.Value;
    iVar29 = pFVar39[1].Context.HierarchicalBias;
    uVar30 = *(undefined4 *)&pFVar39[1].Context.field_0x7c;
    FVar31 = pFVar39[1].InstanceHandle;
    iVar32 = pFVar39[1].Order;
    uVar14 = *(undefined8 *)&pFVar41[-1].OnFlushed.field_0x8;
    *(undefined8 *)&pFVar43->OnFlushed = *(undefined8 *)&pFVar40->OnFlushed;
    *(undefined8 *)&pFVar39[1].OnFlushed.field_0x8 = uVar14;
    lVar15 = pFVar41[-1].Context._padding_;
    *(undefined8 *)&pFVar39[1].OnFlushed.field_0x10 =
         *(undefined8 *)&pFVar41[-1].OnFlushed.field_0x10;
    pFVar39[1].Context._padding_ = lVar15;
    lVar15 = pFVar41[-1].Context._padding_;
    pFVar39[1].Context._padding_ = pFVar41[-1].Context._padding_;
    pFVar39[1].Context._padding_ = lVar15;
    lVar15 = pFVar41[-1].Context._padding_;
    pFVar39[1].Context._padding_ = pFVar41[-1].Context._padding_;
    pFVar39[1].Context._padding_ = lVar15;
    FVar17.Value = pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.
                   Value;
    uVar14 = *(undefined8 *)
              &pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.Offset.SubFrame;
    pFVar39[1].Context.RootToSequenceTransform.LinearTransform.TimeScale =
         pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.TimeScale;
    pFVar39[1].Context.RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
         (FFrameNumber)FVar17.Value;
    *(undefined8 *)&pFVar39[1].Context.RootToSequenceTransform.LinearTransform.Offset.SubFrame =
         uVar14;
    iVar35 = pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.ArrayNum;
    iVar18 = pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.ArrayMax;
    pFVar39[1].Context.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
    pFVar39[1].Context.RootToSequenceTransform.NestedTransforms.ArrayNum = iVar35;
    pFVar39[1].Context.RootToSequenceTransform.NestedTransforms.ArrayMax = iVar18;
    lVar15 = pFVar41[-1].Context.RootToSequenceWarpCounter._padding_;
    pFVar39[1].Context.RootToSequenceWarpCounter._padding_ =
         pFVar41[-1].Context.RootToSequenceWarpCounter._padding_;
    pFVar39[1].Context.RootToSequenceWarpCounter._padding_ = lVar15;
    pFVar16 = pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
    pFVar39[1].Context.RootToSequenceWarpCounter._padding_ =
         pFVar41[-1].Context.RootToSequenceWarpCounter._padding_;
    pFVar39[1].Context.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar16;
    iVar35 = pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayMax;
    TVar19 = pFVar41[-1].Context.Status;
    FVar17.Value = pFVar41[-1].Context.PrePostRollStartEndTime.Value;
    pFVar39[1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayNum =
         pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayNum;
    pFVar39[1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar35;
    pFVar39[1].Context.Status = TVar19;
    pFVar39[1].Context.PrePostRollStartEndTime = (FFrameNumber)FVar17.Value;
    uVar20 = *(undefined4 *)&pFVar41[-1].Context.field_0x7c;
    FVar21 = pFVar41[-1].InstanceHandle;
    iVar35 = pFVar41[-1].Order;
    pFVar39[1].Context.HierarchicalBias = pFVar41[-1].Context.HierarchicalBias;
    *(undefined4 *)&pFVar39[1].Context.field_0x7c = uVar20;
    pFVar39[1].InstanceHandle = FVar21;
    pFVar39[1].Order = iVar35;
    uVar20 = *(undefined4 *)&pFVar41[-1].field_0xa4;
    pFVar39[1].UpdateFlags = pFVar41[-1].UpdateFlags;
    *(undefined4 *)&pFVar39[1].field_0xa4 = uVar20;
    *(undefined8 *)&pFVar40->OnFlushed = uVar2;
    *(undefined8 *)&pFVar41[-1].OnFlushed.field_0x8 = uVar3;
    *(undefined8 *)&pFVar41[-1].OnFlushed.field_0x10 = uVar4;
    pFVar41[-1].Context._padding_ = lVar36;
    pFVar41[-1].Context._padding_ = lVar37;
    pFVar41[-1].Context._padding_ = lVar5;
    pFVar41[-1].Context._padding_ = lVar6;
    pFVar41[-1].Context._padding_ = lVar7;
    pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.TimeScale = fVar45;
    pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
         (FFrameNumber)FVar22.Value;
    *(undefined8 *)&pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.Offset.SubFrame =
         uVar8;
    pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data = pFVar9;
    pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.ArrayNum = iVar23;
    pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.ArrayMax = iVar24;
    pFVar41[-1].Context.RootToSequenceWarpCounter._padding_ = lVar10;
    pFVar41[-1].Context.RootToSequenceWarpCounter._padding_ = lVar11;
    pFVar41[-1].Context.RootToSequenceWarpCounter._padding_ = lVar12;
    pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar13;
    pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayNum = iVar25;
    pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar26;
    pFVar41[-1].Context.Status = TVar27;
    pFVar41[-1].Context.PrePostRollStartEndTime = (FFrameNumber)FVar28.Value;
    pFVar41[-1].Context.HierarchicalBias = iVar29;
    *(undefined4 *)&pFVar41[-1].Context.field_0x7c = uVar30;
    pFVar41[-1].InstanceHandle = FVar31;
    pFVar41[-1].Order = iVar32;
    pFVar41[-1].UpdateFlags = EVar33;
    *(undefined4 *)&pFVar41[-1].field_0xa4 = uVar34;
    goto LAB_14610f6f0;
  }
  local_3f0 = *(undefined8 *)&pFVar42->OnFlushed;
  uStack_3e8 = *(undefined8 *)&(pFVar42->OnFlushed).field_0x8;
  local_350 = *(undefined8 *)&pFVar42->UpdateFlags;
  local_3f8._0_4_ = (int)local_3f8 + -1;
  local_3e0 = *(undefined8 *)&(pFVar42->OnFlushed).field_0x10;
  lStack_3d8 = (pFVar42->Context)._padding_;
  local_3d0 = (pFVar42->Context)._padding_;
  lStack_3c8 = (pFVar42->Context)._padding_;
  local_3c0 = (pFVar42->Context)._padding_;
  lStack_3b8 = (pFVar42->Context)._padding_;
  local_3b0._0_4_ = (pFVar42->Context).RootToSequenceTransform.LinearTransform.TimeScale;
  local_3b0._4_4_ = (pFVar42->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber;
  uStack_3a8 = *(undefined8 *)
                &(pFVar42->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
  local_3a0 = (pFVar42->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
  uStack_398._0_4_ = (pFVar42->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
  uStack_398._4_4_ = (pFVar42->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
  local_390 = (pFVar42->Context).RootToSequenceWarpCounter._padding_;
  lStack_388 = (pFVar42->Context).RootToSequenceWarpCounter._padding_;
  local_380 = (pFVar42->Context).RootToSequenceWarpCounter._padding_;
  pFStack_378 = (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
  local_370._0_4_ = (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum;
  local_370._4_4_ = (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax;
  uStack_368._0_4_ = (pFVar42->Context).Status;
  uStack_368._4_4_ = (pFVar42->Context).PrePostRollStartEndTime;
  local_360 = *(undefined8 *)&(pFVar42->Context).HierarchicalBias;
  uStack_358._0_2_ = (pFVar42->InstanceHandle).InstanceID;
  uStack_358._2_2_ = (pFVar42->InstanceHandle).InstanceSerial;
  uStack_358._4_4_ = pFVar42->Order;
  uVar2 = *(undefined8 *)&pFVar41[-1].OnFlushed.field_0x8;
  *(undefined8 *)&pFVar42->OnFlushed = *(undefined8 *)&pFVar40->OnFlushed;
  *(undefined8 *)&(pFVar42->OnFlushed).field_0x8 = uVar2;
  lVar37 = pFVar41[-1].Context._padding_;
  lVar36 = (longlong)pFVar40 + (-0xa8 - (longlong)pFVar42);
  *(undefined8 *)&(pFVar42->OnFlushed).field_0x10 = *(undefined8 *)&pFVar41[-1].OnFlushed.field_0x10
  ;
  (pFVar42->Context)._padding_ = lVar37;
  lVar37 = pFVar41[-1].Context._padding_;
  (pFVar42->Context)._padding_ = pFVar41[-1].Context._padding_;
  (pFVar42->Context)._padding_ = lVar37;
  lVar37 = pFVar41[-1].Context._padding_;
  (pFVar42->Context)._padding_ = pFVar41[-1].Context._padding_;
  (pFVar42->Context)._padding_ = lVar37;
  FVar17.Value = pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.
                 Value;
  uVar2 = *(undefined8 *)
           &pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.Offset.SubFrame;
  (pFVar42->Context).RootToSequenceTransform.LinearTransform.TimeScale =
       pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.TimeScale;
  (pFVar42->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
       (FFrameNumber)FVar17.Value;
  *(undefined8 *)&(pFVar42->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame = uVar2
  ;
  iVar35 = pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.ArrayNum;
  iVar18 = pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.ArrayMax;
  (pFVar42->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
       pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
  (pFVar42->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar35;
  (pFVar42->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = iVar18;
  lVar37 = pFVar41[-1].Context.RootToSequenceWarpCounter._padding_;
  (pFVar42->Context).RootToSequenceWarpCounter._padding_ =
       pFVar41[-1].Context.RootToSequenceWarpCounter._padding_;
  (pFVar42->Context).RootToSequenceWarpCounter._padding_ = lVar37;
  pFVar9 = pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data;
  (pFVar42->Context).RootToSequenceWarpCounter._padding_ =
       pFVar41[-1].Context.RootToSequenceWarpCounter._padding_;
  (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFVar9;
  iVar35 = pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayMax;
  TVar19 = pFVar41[-1].Context.Status;
  FVar17.Value = pFVar41[-1].Context.PrePostRollStartEndTime.Value;
  (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.ArrayNum =
       pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayNum;
  (pFVar42->Context).RootToSequenceWarpCounter.WarpCounts.ArrayMax = iVar35;
  (pFVar42->Context).Status = TVar19;
  (pFVar42->Context).PrePostRollStartEndTime = (FFrameNumber)FVar17.Value;
  uVar20 = *(undefined4 *)&pFVar41[-1].Context.field_0x7c;
  FVar21 = pFVar41[-1].InstanceHandle;
  iVar35 = pFVar41[-1].Order;
  (pFVar42->Context).HierarchicalBias = pFVar41[-1].Context.HierarchicalBias;
  *(undefined4 *)&(pFVar42->Context).field_0x7c = uVar20;
  pFVar42->InstanceHandle = FVar21;
  pFVar42->Order = iVar35;
  uVar20 = *(undefined4 *)&pFVar41[-1].field_0xa4;
  pFVar42->UpdateFlags = pFVar41[-1].UpdateFlags;
  *(undefined4 *)&pFVar42->field_0xa4 = uVar20;
  *(undefined8 *)&pFVar40->OnFlushed = local_3f0;
  *(undefined8 *)&pFVar41[-1].OnFlushed.field_0x8 = uStack_3e8;
  *(undefined8 *)&pFVar41[-1].OnFlushed.field_0x10 = local_3e0;
  pFVar41[-1].Context._padding_ = lStack_3d8;
  pFVar41[-1].Context._padding_ = local_3d0;
  pFVar41[-1].Context._padding_ = lStack_3c8;
  pFVar41[-1].Context._padding_ = local_3c0;
  pFVar41[-1].Context._padding_ = lStack_3b8;
  pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.TimeScale =
       (float)(undefined4)local_3b0;
  pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
       (FFrameNumber)local_3b0._4_4_;
  *(undefined8 *)&pFVar41[-1].Context.RootToSequenceTransform.LinearTransform.Offset.SubFrame =
       uStack_3a8;
  pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data = local_3a0;
  pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.ArrayNum = (undefined4)uStack_398;
  pFVar41[-1].Context.RootToSequenceTransform.NestedTransforms.ArrayMax = uStack_398._4_4_;
  pFVar41[-1].Context.RootToSequenceWarpCounter._padding_ = local_390;
  pFVar41[-1].Context.RootToSequenceWarpCounter._padding_ = lStack_388;
  pFVar41[-1].Context.RootToSequenceWarpCounter._padding_ = local_380;
  pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data = pFStack_378;
  pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayNum = (undefined4)local_370;
  pFVar41[-1].Context.RootToSequenceWarpCounter.WarpCounts.ArrayMax = local_370._4_4_;
  pFVar41[-1].Context.Status = (undefined4)uStack_368;
  pFVar41[-1].Context.PrePostRollStartEndTime = (FFrameNumber)uStack_368._4_4_;
  *(undefined8 *)&pFVar41[-1].Context.HierarchicalBias = local_360;
  pFVar41[-1].InstanceHandle.InstanceID = (undefined2)uStack_358;
  pFVar41[-1].InstanceHandle.InstanceSerial = uStack_358._2_2_;
  pFVar41[-1].Order = uStack_358._4_4_;
  *(undefined8 *)&pFVar41[-1].UpdateFlags = local_350;
  lVar36 = lVar36 + SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar36),8);
  lVar37 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)pFVar38 - (longlong)pFVar43),8) +
           ((longlong)pFVar38 - (longlong)pFVar43);
  if ((lVar36 >> 7) - (lVar36 >> 0x3f) < (lVar37 >> 7) - (lVar37 >> 0x3f)) {
    if (pFVar43 < pFVar38) {
      *ppFVar44 = pFVar43;
      ppFVar44[1] = pFVar38;
      *(int *)(ppFVar44 + 2) = (int)local_3f8;
      ppFVar44 = ppFVar44 + 3;
    }
    if (pFVar40 <= pFVar42 + 1) goto LAB_14610fad7;
    pFVar38 = pFVar41 + -2;
    pFVar43 = pFVar42;
  }
  else {
    if (pFVar42 + 1 < pFVar40) {
      *ppFVar44 = pFVar42;
      ppFVar44[1] = pFVar41 + -2;
      *(int *)(ppFVar44 + 2) = (int)local_3f8;
      ppFVar44 = ppFVar44 + 3;
    }
    if (pFVar38 <= pFVar43) goto LAB_14610fad7;
  }
  lVar36 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)pFVar38 - (longlong)pFVar43),8) +
           ((longlong)pFVar38 - (longlong)pFVar43);
  iVar35 = ((int)(lVar36 >> 7) - (int)(lVar36 >> 0x3f)) + 1;
  pFVar42 = pFVar43;
  if ((int)local_3f8 == 0) goto LAB_14610fac8;
  goto LAB_14610f570;
}

// IntroSortInternal<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,UE::Core::Private::TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>,TLess<void>_> @ 14610fce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,UE::Core::Private::TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>,TLess<void>_>
          (FMovieSceneDeterminismFenceWithSubframe *param_1,int param_2,
          TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>
          param_3,TLess<void> param_4)

{
  FFrameTime FVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FMovieSceneDeterminismFenceWithSubframe *pFVar6;
  int iVar7;
  longlong lVar8;
  FMovieSceneDeterminismFenceWithSubframe *pFVar9;
  undefined8 *puVar10;
  longlong lVar11;
  FMovieSceneDeterminismFenceWithSubframe *pFVar12;
  FMovieSceneDeterminismFenceWithSubframe *pFVar13;
  FMovieSceneDeterminismFenceWithSubframe *pFVar14;
  FMovieSceneDeterminismFenceWithSubframe *pFVar15;
  FMovieSceneDeterminismFenceWithSubframe **ppFVar16;
  int iVar17;
  float fVar18;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined8 local_380;
  FMovieSceneDeterminismFenceWithSubframe *local_368;
  FMovieSceneDeterminismFenceWithSubframe *local_358;
  FMovieSceneDeterminismFenceWithSubframe *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    lVar11 = (longlong)(int)param_3.DataMemberPtr;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar18;
    memset(local_340,0,0x2e8);
    ppFVar16 = &local_358;
    do {
      pFVar12 = ppFVar16[1];
      local_368 = ppFVar16[2];
      iVar7 = (int)(((longlong)pFVar12 - (longlong)*ppFVar16) / 0xc);
      pFVar6 = *ppFVar16;
      iVar17 = (int)local_368;
      while (iVar7 = iVar7 + 1, iVar17 != 0) {
        if (iVar7 < 9) {
          if (pFVar6 < pFVar12) {
            pFVar14 = pFVar6 + 1;
            do {
              pFVar13 = pFVar6;
              if (pFVar14 <= pFVar12) {
                pFVar9 = pFVar14;
                if (0x2f < (ulonglong)((longlong)pFVar12 + (0xc - (longlong)pFVar14))) {
                  puVar10 = (undefined8 *)
                            ((longlong)&pFVar14[2].FrameTime.FrameNumber.Value + lVar11);
                  do {
                    uVar3 = *(undefined8 *)
                             ((longlong)&(pFVar13->FrameTime).FrameNumber.Value + lVar11);
                    iVar7 = (int)puVar10[-3];
                    iVar17 = (int)uVar3;
                    if (iVar17 < iVar7) {
LAB_146110046:
                      pFVar13 = pFVar9;
                    }
                    else if (iVar17 == iVar7) {
                      local_388._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                      local_380._4_4_ = (float)((ulonglong)puVar10[-3] >> 0x20);
                      if (local_388._4_4_ < local_380._4_4_) goto LAB_146110046;
                    }
                    uVar3 = *(undefined8 *)
                             ((longlong)&(pFVar13->FrameTime).FrameNumber.Value + lVar11);
                    iVar7 = (int)*(undefined8 *)((longlong)puVar10 + -0xc);
                    iVar17 = (int)uVar3;
                    if (iVar17 < iVar7) {
LAB_14611006f:
                      pFVar13 = (FMovieSceneDeterminismFenceWithSubframe *)
                                ((-0xc - lVar11) + (longlong)puVar10);
                    }
                    else if (iVar17 == iVar7) {
                      local_388._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                      local_380._4_4_ =
                           (float)((ulonglong)*(undefined8 *)((longlong)puVar10 + -0xc) >> 0x20);
                      if (local_388._4_4_ < local_380._4_4_) goto LAB_14611006f;
                    }
                    uVar3 = *(undefined8 *)
                             ((longlong)&(pFVar13->FrameTime).FrameNumber.Value + lVar11);
                    iVar7 = (int)*puVar10;
                    iVar17 = (int)uVar3;
                    if (iVar17 < iVar7) {
LAB_146110098:
                      pFVar13 = (FMovieSceneDeterminismFenceWithSubframe *)
                                ((longlong)puVar10 - lVar11);
                    }
                    else if (iVar17 == iVar7) {
                      local_388._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                      local_380._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
                      if (local_388._4_4_ < local_380._4_4_) goto LAB_146110098;
                    }
                    uVar3 = *(undefined8 *)((longlong)puVar10 + 0xc);
                    uVar4 = *(undefined8 *)
                             ((longlong)&(pFVar13->FrameTime).FrameNumber.Value + lVar11);
                    if ((int)uVar4 < (int)uVar3) {
LAB_1461100c4:
                      pFVar13 = (FMovieSceneDeterminismFenceWithSubframe *)
                                ((0xc - lVar11) + (longlong)puVar10);
                    }
                    else if ((int)uVar4 == (int)uVar3) {
                      local_388._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
                      local_380._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                      if (local_388._4_4_ < local_380._4_4_) goto LAB_1461100c4;
                    }
                    pFVar9 = pFVar9 + 4;
                    puVar10 = puVar10 + 6;
                    local_388 = uVar4;
                    local_380 = uVar3;
                  } while (pFVar9 <= pFVar12 + -3);
                }
                for (; pFVar9 <= pFVar12; pFVar9 = pFVar9 + 1) {
                  uVar3 = *(undefined8 *)((longlong)&(pFVar9->FrameTime).FrameNumber.Value + lVar11)
                  ;
                  uVar4 = *(undefined8 *)
                           ((longlong)&(pFVar13->FrameTime).FrameNumber.Value + lVar11);
                  if ((int)uVar4 < (int)uVar3) {
LAB_146110107:
                    pFVar13 = pFVar9;
                  }
                  else if ((int)uVar4 == (int)uVar3) {
                    local_388._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
                    local_380._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                    if (local_388._4_4_ < local_380._4_4_) goto LAB_146110107;
                  }
                  local_388 = uVar4;
                  local_380 = uVar3;
                }
              }
              FVar1 = pFVar13->FrameTime;
              uVar2 = *(undefined4 *)&pFVar13->field_0x8;
              pFVar9 = pFVar12 + -1;
              pFVar13->FrameTime = pFVar12->FrameTime;
              *(undefined4 *)&pFVar13->field_0x8 = *(undefined4 *)&pFVar12->field_0x8;
              pFVar12->FrameTime = FVar1;
              *(undefined4 *)&pFVar12->field_0x8 = uVar2;
              pFVar12 = pFVar9;
            } while (pFVar6 < pFVar9);
          }
          goto LAB_14610ff70;
        }
        pFVar14 = pFVar12 + 1;
        iVar7 = iVar7 / 2;
        FVar1 = pFVar6[iVar7].FrameTime;
        uVar2 = *(undefined4 *)&pFVar6[iVar7].field_0x8;
        pFVar6[iVar7].FrameTime = pFVar6->FrameTime;
        *(undefined4 *)&pFVar6[iVar7].field_0x8 = *(undefined4 *)&pFVar6->field_0x8;
        pFVar6->FrameTime = FVar1;
        *(undefined4 *)&pFVar6->field_0x8 = uVar2;
        pFVar13 = pFVar6;
LAB_14610fe06:
        do {
          do {
            pFVar9 = pFVar13;
            pFVar13 = pFVar9 + 1;
            if (pFVar12 < pFVar13) goto LAB_14610fe34;
            local_388 = *(undefined8 *)((longlong)&(pFVar13->FrameTime).FrameNumber.Value + lVar11);
            local_380 = *(undefined8 *)((longlong)&(pFVar6->FrameTime).FrameNumber.Value + lVar11);
            if ((int)local_380 < (int)local_388) goto LAB_14610fe34;
          } while ((int)local_380 != (int)local_388);
          local_380._4_4_ = (float)((ulonglong)local_380 >> 0x20);
          local_388._4_4_ = (float)((ulonglong)local_388 >> 0x20);
          bVar5 = local_388._4_4_ <= local_380._4_4_;
        } while (bVar5);
LAB_14610fe34:
        do {
          do {
            pFVar15 = pFVar14;
            pFVar14 = pFVar15 + -1;
            if (pFVar14 <= pFVar6) goto LAB_14610fe62;
            local_388 = *(undefined8 *)((longlong)&(pFVar6->FrameTime).FrameNumber.Value + lVar11);
            local_380 = *(undefined8 *)((longlong)&(pFVar14->FrameTime).FrameNumber.Value + lVar11);
            if ((int)local_380 < (int)local_388) goto LAB_14610fe62;
          } while ((int)local_380 != (int)local_388);
          local_380._4_4_ = (float)((ulonglong)local_380 >> 0x20);
          local_388._4_4_ = (float)((ulonglong)local_388 >> 0x20);
          bVar5 = local_388._4_4_ <= local_380._4_4_;
        } while (bVar5);
LAB_14610fe62:
        if (pFVar13 <= pFVar14) {
          FVar1 = pFVar13->FrameTime;
          uVar2 = *(undefined4 *)&pFVar9[1].field_0x8;
          pFVar13->FrameTime = pFVar14->FrameTime;
          *(undefined4 *)&pFVar9[1].field_0x8 = *(undefined4 *)&pFVar15[-1].field_0x8;
          pFVar14->FrameTime = FVar1;
          *(undefined4 *)&pFVar15[-1].field_0x8 = uVar2;
          goto LAB_14610fe06;
        }
        uVar2 = *(undefined4 *)&pFVar6->field_0x8;
        iVar17 = iVar17 + -1;
        FVar1 = pFVar6->FrameTime;
        pFVar6->FrameTime = pFVar14->FrameTime;
        *(undefined4 *)&pFVar6->field_0x8 = *(undefined4 *)&pFVar15[-1].field_0x8;
        pFVar14->FrameTime = FVar1;
        *(undefined4 *)&pFVar15[-1].field_0x8 = uVar2;
        lVar8 = (longlong)pFVar14 + (-0xc - (longlong)pFVar6);
        lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
        if ((lVar8 >> 1) - (lVar8 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar13) / 0xc) {
          if (pFVar13 < pFVar12) {
            *ppFVar16 = pFVar13;
            ppFVar16[1] = pFVar12;
            *(int *)(ppFVar16 + 2) = iVar17;
            ppFVar16 = ppFVar16 + 3;
          }
          if (pFVar14 <= pFVar6 + 1) goto LAB_14610ff70;
          pFVar12 = pFVar15 + -2;
          pFVar13 = pFVar6;
        }
        else {
          if (pFVar6 + 1 < pFVar14) {
            *ppFVar16 = pFVar6;
            ppFVar16[1] = pFVar15 + -2;
            *(int *)(ppFVar16 + 2) = iVar17;
            ppFVar16 = ppFVar16 + 3;
          }
          if (pFVar12 <= pFVar13) goto LAB_14610ff70;
        }
        iVar7 = (int)(((longlong)pFVar12 - (longlong)pFVar13) / 0xc);
        pFVar6 = pFVar13;
      }
      HeapSortInternal<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,UE::Core::Private::TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>,TLess<void>_>
                (pFVar6,iVar7,param_3,param_4);
LAB_14610ff70:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_358 <= ppFVar16);
  }
  return;
}

// IntroSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TGreater<void>_> @ 146110150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TGreater<void>_>
          (FMovieSceneEvaluationHookEvent *param_1,int param_2,
          TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*> param_3,
          TGreater<void> param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FMovieSceneEvaluationHookEvent *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FMovieSceneSequenceID FVar11;
  FFrameNumber FVar12;
  undefined7 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FRootInstanceHandle FVar18;
  FMovieSceneSequenceID FVar19;
  int iVar20;
  FFrameNumber FVar21;
  bool bVar22;
  undefined7 uVar23;
  int iVar24;
  FMovieSceneEvaluationHookEvent *pFVar25;
  FMovieSceneEvaluationHookEvent *pFVar26;
  FMovieSceneEvaluationHookEvent *pFVar27;
  FMovieSceneEvaluationHookEvent *pFVar28;
  longlong lVar29;
  undefined8 *puVar30;
  FMovieSceneEvaluationHookEvent *pFVar31;
  int iVar32;
  FMovieSceneEvaluationHookEvent **ppFVar33;
  float fVar34;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  undefined8 local_370;
  FMovieSceneEvaluationHookEvent *local_358;
  FMovieSceneEvaluationHookEvent *local_348;
  FMovieSceneEvaluationHookEvent *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    lVar29 = (longlong)(int)param_3.DataMemberPtr;
    local_348 = param_1;
    fVar34 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar34;
    memset(local_330,0,0x2e8);
    ppFVar33 = &local_348;
    do {
      pFVar31 = ppFVar33[1];
      local_358 = ppFVar33[2];
      iVar24 = (int)((longlong)pFVar31 - (longlong)*ppFVar33 >> 6);
      pFVar7 = *ppFVar33;
      iVar32 = (int)local_358;
      while (iVar24 = iVar24 + 1, iVar32 != 0) {
        if (iVar24 < 9) {
          if (pFVar7 < pFVar31) {
            pFVar26 = pFVar7 + 1;
            do {
              pFVar25 = pFVar7;
              if (pFVar26 <= pFVar31) {
                pFVar28 = pFVar26;
                if (0xff < ((longlong)pFVar31 + (0x40 - (longlong)pFVar26) & 0xffffffffffffffc0U)) {
                  puVar30 = (undefined8 *)(&pFVar26[2].Hook.Interface.field_0x0 + lVar29);
                  do {
                    uVar1 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                    iVar24 = (int)uVar1;
                    iVar32 = (int)puVar30[-0x10];
                    if (iVar32 < iVar24) {
LAB_1461104c6:
                      pFVar25 = pFVar28;
                    }
                    else if (iVar32 == iVar24) {
                      local_378._4_4_ = (float)((ulonglong)puVar30[-0x10] >> 0x20);
                      local_370._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      if (local_378._4_4_ < local_370._4_4_) goto LAB_1461104c6;
                    }
                    uVar1 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                    iVar24 = (int)uVar1;
                    iVar32 = (int)puVar30[-8];
                    if (iVar32 < iVar24) {
LAB_1461104ef:
                      pFVar25 = (FMovieSceneEvaluationHookEvent *)
                                ((-0x40 - lVar29) + (longlong)puVar30);
                    }
                    else if (iVar32 == iVar24) {
                      local_378._4_4_ = (float)((ulonglong)puVar30[-8] >> 0x20);
                      local_370._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      if (local_378._4_4_ < local_370._4_4_) goto LAB_1461104ef;
                    }
                    uVar1 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                    iVar24 = (int)uVar1;
                    iVar32 = (int)*puVar30;
                    if (iVar32 < iVar24) {
LAB_146110518:
                      pFVar25 = (FMovieSceneEvaluationHookEvent *)((longlong)puVar30 - lVar29);
                    }
                    else if (iVar32 == iVar24) {
                      local_378._4_4_ = (float)((ulonglong)*puVar30 >> 0x20);
                      local_370._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      if (local_378._4_4_ < local_370._4_4_) goto LAB_146110518;
                    }
                    uVar1 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                    uVar2 = puVar30[8];
                    if ((int)uVar2 < (int)uVar1) {
LAB_146110544:
                      pFVar25 = (FMovieSceneEvaluationHookEvent *)
                                ((0x40 - lVar29) + (longlong)puVar30);
                    }
                    else if ((int)uVar2 == (int)uVar1) {
                      local_378._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                      local_370._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      if (local_378._4_4_ < local_370._4_4_) goto LAB_146110544;
                    }
                    pFVar28 = pFVar28 + 4;
                    puVar30 = puVar30 + 0x20;
                    local_378 = uVar2;
                    local_370 = uVar1;
                  } while (pFVar28 <= pFVar31 + -3);
                }
                for (; pFVar28 <= pFVar31; pFVar28 = pFVar28 + 1) {
                  uVar1 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                  uVar2 = *(undefined8 *)(&(pFVar28->Hook).Interface.field_0x0 + lVar29);
                  if ((int)uVar2 < (int)uVar1) {
LAB_146110591:
                    pFVar25 = pFVar28;
                  }
                  else if ((int)uVar2 == (int)uVar1) {
                    local_378._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                    local_370._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                    if (local_378._4_4_ < local_370._4_4_) goto LAB_146110591;
                  }
                  local_378 = uVar2;
                  local_370 = uVar1;
                }
              }
              uVar1 = *(undefined8 *)&(pFVar25->Hook).Interface;
              uVar2 = *(undefined8 *)&(pFVar25->Hook).Interface.field_0x8;
              pFVar28 = pFVar31 + -1;
              uVar14 = (pFVar25->Hook).ObjectBindingID.A;
              uVar15 = (pFVar25->Hook).ObjectBindingID.B;
              uVar16 = (pFVar25->Hook).ObjectBindingID.C;
              uVar17 = (pFVar25->Hook).ObjectBindingID.D;
              FVar18 = pFVar25->RootInstanceHandle;
              FVar19.Value = (pFVar25->SequenceID).Value;
              iVar32 = pFVar25->TriggerIndex;
              FVar21.Value = (pFVar25->RootTime).FrameNumber.Value;
              uVar4 = *(undefined8 *)&(pFVar31->Hook).Interface.field_0x8;
              uVar5 = *(undefined8 *)&(pFVar25->RootTime).SubFrame;
              bVar22 = pFVar25->bRestoreState;
              uVar23 = *(undefined7 *)&pFVar25->field_0x39;
              *(undefined8 *)&(pFVar25->Hook).Interface = *(undefined8 *)&(pFVar31->Hook).Interface;
              *(undefined8 *)&(pFVar25->Hook).Interface.field_0x8 = uVar4;
              uVar8 = (pFVar31->Hook).ObjectBindingID.B;
              uVar9 = (pFVar31->Hook).ObjectBindingID.C;
              uVar10 = (pFVar31->Hook).ObjectBindingID.D;
              (pFVar25->Hook).ObjectBindingID.A = (pFVar31->Hook).ObjectBindingID.A;
              (pFVar25->Hook).ObjectBindingID.B = uVar8;
              (pFVar25->Hook).ObjectBindingID.C = uVar9;
              (pFVar25->Hook).ObjectBindingID.D = uVar10;
              FVar11.Value = (pFVar31->SequenceID).Value;
              iVar24 = pFVar31->TriggerIndex;
              FVar12.Value = (pFVar31->RootTime).FrameNumber.Value;
              pFVar25->RootInstanceHandle = pFVar31->RootInstanceHandle;
              pFVar25->SequenceID = (FMovieSceneSequenceID)FVar11.Value;
              pFVar25->TriggerIndex = iVar24;
              (pFVar25->RootTime).FrameNumber = (FFrameNumber)FVar12.Value;
              bVar3 = pFVar31->bRestoreState;
              uVar13 = *(undefined7 *)&pFVar31->field_0x39;
              *(undefined8 *)&(pFVar25->RootTime).SubFrame =
                   *(undefined8 *)&(pFVar31->RootTime).SubFrame;
              pFVar25->bRestoreState = bVar3;
              *(undefined7 *)&pFVar25->field_0x39 = uVar13;
              *(undefined8 *)&(pFVar31->Hook).Interface = uVar1;
              *(undefined8 *)&(pFVar31->Hook).Interface.field_0x8 = uVar2;
              (pFVar31->Hook).ObjectBindingID.A = uVar14;
              (pFVar31->Hook).ObjectBindingID.B = uVar15;
              (pFVar31->Hook).ObjectBindingID.C = uVar16;
              (pFVar31->Hook).ObjectBindingID.D = uVar17;
              pFVar31->RootInstanceHandle = FVar18;
              pFVar31->SequenceID = (FMovieSceneSequenceID)FVar19.Value;
              pFVar31->TriggerIndex = iVar32;
              (pFVar31->RootTime).FrameNumber = (FFrameNumber)FVar21.Value;
              *(undefined8 *)&(pFVar31->RootTime).SubFrame = uVar5;
              pFVar31->bRestoreState = bVar22;
              *(undefined7 *)&pFVar31->field_0x39 = uVar23;
              pFVar31 = pFVar28;
            } while (pFVar7 < pFVar28);
          }
          goto LAB_1461103f1;
        }
        uVar1 = *(undefined8 *)&(pFVar7->Hook).Interface.field_0x8;
        pFVar26 = pFVar31 + 1;
        pFVar25 = pFVar7 + iVar24 / 2;
        uVar2 = *(undefined8 *)&(pFVar25->Hook).Interface;
        uVar4 = *(undefined8 *)&(pFVar25->Hook).Interface.field_0x8;
        uVar14 = (pFVar25->Hook).ObjectBindingID.A;
        uVar15 = (pFVar25->Hook).ObjectBindingID.B;
        uVar16 = (pFVar25->Hook).ObjectBindingID.C;
        uVar17 = (pFVar25->Hook).ObjectBindingID.D;
        FVar18 = pFVar25->RootInstanceHandle;
        FVar19.Value = (pFVar25->SequenceID).Value;
        iVar20 = pFVar25->TriggerIndex;
        FVar21.Value = (pFVar25->RootTime).FrameNumber.Value;
        uVar5 = *(undefined8 *)&(pFVar25->RootTime).SubFrame;
        bVar22 = pFVar25->bRestoreState;
        uVar23 = *(undefined7 *)&pFVar25->field_0x39;
        *(undefined8 *)&(pFVar25->Hook).Interface = *(undefined8 *)&(pFVar7->Hook).Interface;
        *(undefined8 *)&(pFVar25->Hook).Interface.field_0x8 = uVar1;
        uVar8 = (pFVar7->Hook).ObjectBindingID.B;
        uVar9 = (pFVar7->Hook).ObjectBindingID.C;
        uVar10 = (pFVar7->Hook).ObjectBindingID.D;
        (pFVar25->Hook).ObjectBindingID.A = (pFVar7->Hook).ObjectBindingID.A;
        (pFVar25->Hook).ObjectBindingID.B = uVar8;
        (pFVar25->Hook).ObjectBindingID.C = uVar9;
        (pFVar25->Hook).ObjectBindingID.D = uVar10;
        FVar11.Value = (pFVar7->SequenceID).Value;
        iVar24 = pFVar7->TriggerIndex;
        FVar12.Value = (pFVar7->RootTime).FrameNumber.Value;
        pFVar25->RootInstanceHandle = pFVar7->RootInstanceHandle;
        pFVar25->SequenceID = (FMovieSceneSequenceID)FVar11.Value;
        pFVar25->TriggerIndex = iVar24;
        (pFVar25->RootTime).FrameNumber = (FFrameNumber)FVar12.Value;
        bVar3 = pFVar7->bRestoreState;
        uVar13 = *(undefined7 *)&pFVar7->field_0x39;
        *(undefined8 *)&(pFVar25->RootTime).SubFrame = *(undefined8 *)&(pFVar7->RootTime).SubFrame;
        pFVar25->bRestoreState = bVar3;
        *(undefined7 *)&pFVar25->field_0x39 = uVar13;
        *(undefined8 *)&(pFVar7->Hook).Interface = uVar2;
        *(undefined8 *)&(pFVar7->Hook).Interface.field_0x8 = uVar4;
        (pFVar7->Hook).ObjectBindingID.A = uVar14;
        (pFVar7->Hook).ObjectBindingID.B = uVar15;
        (pFVar7->Hook).ObjectBindingID.C = uVar16;
        (pFVar7->Hook).ObjectBindingID.D = uVar17;
        pFVar7->RootInstanceHandle = FVar18;
        pFVar7->SequenceID = (FMovieSceneSequenceID)FVar19.Value;
        pFVar7->TriggerIndex = iVar20;
        (pFVar7->RootTime).FrameNumber = (FFrameNumber)FVar21.Value;
        *(undefined8 *)&(pFVar7->RootTime).SubFrame = uVar5;
        pFVar7->bRestoreState = bVar22;
        *(undefined7 *)&pFVar7->field_0x39 = uVar23;
        pFVar25 = pFVar7;
LAB_146110273:
        do {
          do {
            pFVar28 = pFVar25;
            pFVar25 = pFVar28 + 1;
            if (pFVar31 < pFVar25) goto LAB_1461102a1;
            local_378 = *(undefined8 *)(&(pFVar7->Hook).Interface.field_0x0 + lVar29);
            local_370 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
            if ((int)local_370 < (int)local_378) goto LAB_1461102a1;
          } while ((int)local_370 != (int)local_378);
          local_370._4_4_ = (float)((ulonglong)local_370 >> 0x20);
          local_378._4_4_ = (float)((ulonglong)local_378 >> 0x20);
          bVar3 = local_378._4_4_ <= local_370._4_4_;
        } while (bVar3);
LAB_1461102a1:
        do {
          do {
            pFVar27 = pFVar26;
            pFVar26 = pFVar27 + -1;
            if (pFVar26 <= pFVar7) goto LAB_1461102cf;
            local_378 = *(undefined8 *)(&(pFVar26->Hook).Interface.field_0x0 + lVar29);
            local_370 = *(undefined8 *)(&(pFVar7->Hook).Interface.field_0x0 + lVar29);
            if ((int)local_370 < (int)local_378) goto LAB_1461102cf;
          } while ((int)local_370 != (int)local_378);
          local_370._4_4_ = (float)((ulonglong)local_370 >> 0x20);
          local_378._4_4_ = (float)((ulonglong)local_378 >> 0x20);
          bVar3 = local_378._4_4_ <= local_370._4_4_;
        } while (bVar3);
LAB_1461102cf:
        uVar1 = *(undefined8 *)&(pFVar26->Hook).Interface;
        uVar2 = *(undefined8 *)&pFVar27[-1].Hook.Interface.field_0x8;
        if (pFVar25 <= pFVar26) {
          uVar4 = *(undefined8 *)&(pFVar25->Hook).Interface;
          uVar5 = *(undefined8 *)&pFVar28[1].Hook.Interface.field_0x8;
          uVar14 = pFVar28[1].Hook.ObjectBindingID.A;
          uVar15 = pFVar28[1].Hook.ObjectBindingID.B;
          uVar16 = pFVar28[1].Hook.ObjectBindingID.C;
          uVar17 = pFVar28[1].Hook.ObjectBindingID.D;
          FVar18 = pFVar28[1].RootInstanceHandle;
          FVar19.Value = pFVar28[1].SequenceID.Value;
          iVar20 = pFVar28[1].TriggerIndex;
          FVar21.Value = pFVar28[1].RootTime.FrameNumber.Value;
          uVar6 = *(undefined8 *)&pFVar28[1].RootTime.SubFrame;
          bVar22 = pFVar28[1].bRestoreState;
          uVar23 = *(undefined7 *)&pFVar28[1].field_0x39;
          *(undefined8 *)&(pFVar25->Hook).Interface = uVar1;
          *(undefined8 *)&pFVar28[1].Hook.Interface.field_0x8 = uVar2;
          uVar8 = pFVar27[-1].Hook.ObjectBindingID.B;
          uVar9 = pFVar27[-1].Hook.ObjectBindingID.C;
          uVar10 = pFVar27[-1].Hook.ObjectBindingID.D;
          pFVar28[1].Hook.ObjectBindingID.A = pFVar27[-1].Hook.ObjectBindingID.A;
          pFVar28[1].Hook.ObjectBindingID.B = uVar8;
          pFVar28[1].Hook.ObjectBindingID.C = uVar9;
          pFVar28[1].Hook.ObjectBindingID.D = uVar10;
          FVar11.Value = pFVar27[-1].SequenceID.Value;
          iVar24 = pFVar27[-1].TriggerIndex;
          FVar12.Value = pFVar27[-1].RootTime.FrameNumber.Value;
          pFVar28[1].RootInstanceHandle = pFVar27[-1].RootInstanceHandle;
          pFVar28[1].SequenceID = (FMovieSceneSequenceID)FVar11.Value;
          pFVar28[1].TriggerIndex = iVar24;
          pFVar28[1].RootTime.FrameNumber = (FFrameNumber)FVar12.Value;
          bVar3 = pFVar27[-1].bRestoreState;
          uVar13 = *(undefined7 *)&pFVar27[-1].field_0x39;
          *(undefined8 *)&pFVar28[1].RootTime.SubFrame =
               *(undefined8 *)&pFVar27[-1].RootTime.SubFrame;
          pFVar28[1].bRestoreState = bVar3;
          *(undefined7 *)&pFVar28[1].field_0x39 = uVar13;
          *(undefined8 *)&(pFVar26->Hook).Interface = uVar4;
          *(undefined8 *)&pFVar27[-1].Hook.Interface.field_0x8 = uVar5;
          pFVar27[-1].Hook.ObjectBindingID.A = uVar14;
          pFVar27[-1].Hook.ObjectBindingID.B = uVar15;
          pFVar27[-1].Hook.ObjectBindingID.C = uVar16;
          pFVar27[-1].Hook.ObjectBindingID.D = uVar17;
          pFVar27[-1].RootInstanceHandle = FVar18;
          pFVar27[-1].SequenceID = (FMovieSceneSequenceID)FVar19.Value;
          pFVar27[-1].TriggerIndex = iVar20;
          pFVar27[-1].RootTime.FrameNumber = (FFrameNumber)FVar21.Value;
          *(undefined8 *)&pFVar27[-1].RootTime.SubFrame = uVar6;
          pFVar27[-1].bRestoreState = bVar22;
          *(undefined7 *)&pFVar27[-1].field_0x39 = uVar23;
          goto LAB_146110273;
        }
        uVar4 = *(undefined8 *)&(pFVar7->Hook).Interface;
        uVar5 = *(undefined8 *)&(pFVar7->Hook).Interface.field_0x8;
        uVar14 = (pFVar7->Hook).ObjectBindingID.A;
        uVar15 = (pFVar7->Hook).ObjectBindingID.B;
        uVar16 = (pFVar7->Hook).ObjectBindingID.C;
        uVar17 = (pFVar7->Hook).ObjectBindingID.D;
        FVar18 = pFVar7->RootInstanceHandle;
        FVar19.Value = (pFVar7->SequenceID).Value;
        iVar20 = pFVar7->TriggerIndex;
        FVar21.Value = (pFVar7->RootTime).FrameNumber.Value;
        iVar32 = iVar32 + -1;
        uVar6 = *(undefined8 *)&(pFVar7->RootTime).SubFrame;
        bVar22 = pFVar7->bRestoreState;
        uVar23 = *(undefined7 *)&pFVar7->field_0x39;
        *(undefined8 *)&(pFVar7->Hook).Interface = uVar1;
        *(undefined8 *)&(pFVar7->Hook).Interface.field_0x8 = uVar2;
        uVar8 = pFVar27[-1].Hook.ObjectBindingID.B;
        uVar9 = pFVar27[-1].Hook.ObjectBindingID.C;
        uVar10 = pFVar27[-1].Hook.ObjectBindingID.D;
        (pFVar7->Hook).ObjectBindingID.A = pFVar27[-1].Hook.ObjectBindingID.A;
        (pFVar7->Hook).ObjectBindingID.B = uVar8;
        (pFVar7->Hook).ObjectBindingID.C = uVar9;
        (pFVar7->Hook).ObjectBindingID.D = uVar10;
        FVar11.Value = pFVar27[-1].SequenceID.Value;
        iVar24 = pFVar27[-1].TriggerIndex;
        FVar12.Value = pFVar27[-1].RootTime.FrameNumber.Value;
        pFVar7->RootInstanceHandle = pFVar27[-1].RootInstanceHandle;
        pFVar7->SequenceID = (FMovieSceneSequenceID)FVar11.Value;
        pFVar7->TriggerIndex = iVar24;
        (pFVar7->RootTime).FrameNumber = (FFrameNumber)FVar12.Value;
        bVar3 = pFVar27[-1].bRestoreState;
        uVar13 = *(undefined7 *)&pFVar27[-1].field_0x39;
        *(undefined8 *)&(pFVar7->RootTime).SubFrame = *(undefined8 *)&pFVar27[-1].RootTime.SubFrame;
        pFVar7->bRestoreState = bVar3;
        *(undefined7 *)&pFVar7->field_0x39 = uVar13;
        *(undefined8 *)&(pFVar26->Hook).Interface = uVar4;
        *(undefined8 *)&pFVar27[-1].Hook.Interface.field_0x8 = uVar5;
        pFVar27[-1].Hook.ObjectBindingID.A = uVar14;
        pFVar27[-1].Hook.ObjectBindingID.B = uVar15;
        pFVar27[-1].Hook.ObjectBindingID.C = uVar16;
        pFVar27[-1].Hook.ObjectBindingID.D = uVar17;
        pFVar27[-1].RootInstanceHandle = FVar18;
        pFVar27[-1].SequenceID = (FMovieSceneSequenceID)FVar19.Value;
        pFVar27[-1].TriggerIndex = iVar20;
        pFVar27[-1].RootTime.FrameNumber = (FFrameNumber)FVar21.Value;
        *(undefined8 *)&pFVar27[-1].RootTime.SubFrame = uVar6;
        pFVar27[-1].bRestoreState = bVar22;
        *(undefined7 *)&pFVar27[-1].field_0x39 = uVar23;
        if ((longlong)((longlong)pFVar26 + (-0x40 - (longlong)pFVar7) & 0xffffffffffffffc0U) <
            (longlong)((longlong)pFVar31 - (longlong)pFVar25 & 0xffffffffffffffc0U)) {
          if (pFVar25 < pFVar31) {
            *ppFVar33 = pFVar25;
            ppFVar33[1] = pFVar31;
            *(int *)(ppFVar33 + 2) = iVar32;
            ppFVar33 = ppFVar33 + 3;
          }
          if (pFVar26 <= pFVar7 + 1) goto LAB_1461103f1;
          pFVar31 = pFVar27 + -2;
          pFVar25 = pFVar7;
        }
        else {
          if (pFVar7 + 1 < pFVar26) {
            *ppFVar33 = pFVar7;
            ppFVar33[1] = pFVar27 + -2;
            *(int *)(ppFVar33 + 2) = iVar32;
            ppFVar33 = ppFVar33 + 3;
          }
          if (pFVar31 <= pFVar25) goto LAB_1461103f1;
        }
        iVar24 = (int)((longlong)pFVar31 - (longlong)pFVar25 >> 6);
        pFVar7 = pFVar25;
      }
      HeapSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TGreater<void>_>
                (pFVar7,iVar24,param_3,param_4);
LAB_1461103f1:
      ppFVar33 = ppFVar33 + -3;
    } while (&local_348 <= ppFVar33);
  }
  return;
}

// IntroSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TLess<void>_> @ 146110600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TLess<void>_>
          (FMovieSceneEvaluationHookEvent *param_1,int param_2,
          TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*> param_3,
          TLess<void> param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FMovieSceneEvaluationHookEvent *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FMovieSceneSequenceID FVar11;
  FFrameNumber FVar12;
  undefined7 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FRootInstanceHandle FVar18;
  FMovieSceneSequenceID FVar19;
  int iVar20;
  FFrameNumber FVar21;
  bool bVar22;
  undefined7 uVar23;
  int iVar24;
  FMovieSceneEvaluationHookEvent *pFVar25;
  FMovieSceneEvaluationHookEvent *pFVar26;
  FMovieSceneEvaluationHookEvent *pFVar27;
  FMovieSceneEvaluationHookEvent *pFVar28;
  longlong lVar29;
  undefined8 *puVar30;
  FMovieSceneEvaluationHookEvent *pFVar31;
  int iVar32;
  FMovieSceneEvaluationHookEvent **ppFVar33;
  float fVar34;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  undefined8 local_370;
  FMovieSceneEvaluationHookEvent *local_358;
  FMovieSceneEvaluationHookEvent *local_348;
  FMovieSceneEvaluationHookEvent *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    lVar29 = (longlong)(int)param_3.DataMemberPtr;
    local_348 = param_1;
    fVar34 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar34;
    memset(local_330,0,0x2e8);
    ppFVar33 = &local_348;
    do {
      pFVar31 = ppFVar33[1];
      local_358 = ppFVar33[2];
      iVar24 = (int)((longlong)pFVar31 - (longlong)*ppFVar33 >> 6);
      pFVar7 = *ppFVar33;
      iVar32 = (int)local_358;
      while (iVar24 = iVar24 + 1, iVar32 != 0) {
        if (iVar24 < 9) {
          if (pFVar7 < pFVar31) {
            pFVar26 = pFVar7 + 1;
            do {
              pFVar25 = pFVar7;
              if (pFVar26 <= pFVar31) {
                pFVar28 = pFVar26;
                if (0xff < ((longlong)pFVar31 + (0x40 - (longlong)pFVar26) & 0xffffffffffffffc0U)) {
                  puVar30 = (undefined8 *)(&pFVar26[2].Hook.Interface.field_0x0 + lVar29);
                  do {
                    uVar1 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                    iVar24 = (int)puVar30[-0x10];
                    iVar32 = (int)uVar1;
                    if (iVar32 < iVar24) {
LAB_146110976:
                      pFVar25 = pFVar28;
                    }
                    else if (iVar32 == iVar24) {
                      local_378._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      local_370._4_4_ = (float)((ulonglong)puVar30[-0x10] >> 0x20);
                      if (local_378._4_4_ < local_370._4_4_) goto LAB_146110976;
                    }
                    uVar1 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                    iVar24 = (int)puVar30[-8];
                    iVar32 = (int)uVar1;
                    if (iVar32 < iVar24) {
LAB_14611099f:
                      pFVar25 = (FMovieSceneEvaluationHookEvent *)
                                ((-0x40 - lVar29) + (longlong)puVar30);
                    }
                    else if (iVar32 == iVar24) {
                      local_378._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      local_370._4_4_ = (float)((ulonglong)puVar30[-8] >> 0x20);
                      if (local_378._4_4_ < local_370._4_4_) goto LAB_14611099f;
                    }
                    uVar1 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                    iVar24 = (int)*puVar30;
                    iVar32 = (int)uVar1;
                    if (iVar32 < iVar24) {
LAB_1461109c8:
                      pFVar25 = (FMovieSceneEvaluationHookEvent *)((longlong)puVar30 - lVar29);
                    }
                    else if (iVar32 == iVar24) {
                      local_378._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      local_370._4_4_ = (float)((ulonglong)*puVar30 >> 0x20);
                      if (local_378._4_4_ < local_370._4_4_) goto LAB_1461109c8;
                    }
                    uVar1 = puVar30[8];
                    uVar2 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                    if ((int)uVar2 < (int)uVar1) {
LAB_1461109f4:
                      pFVar25 = (FMovieSceneEvaluationHookEvent *)
                                ((0x40 - lVar29) + (longlong)puVar30);
                    }
                    else if ((int)uVar2 == (int)uVar1) {
                      local_378._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                      local_370._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      if (local_378._4_4_ < local_370._4_4_) goto LAB_1461109f4;
                    }
                    pFVar28 = pFVar28 + 4;
                    puVar30 = puVar30 + 0x20;
                    local_378 = uVar2;
                    local_370 = uVar1;
                  } while (pFVar28 <= pFVar31 + -3);
                }
                for (; pFVar28 <= pFVar31; pFVar28 = pFVar28 + 1) {
                  uVar1 = *(undefined8 *)(&(pFVar28->Hook).Interface.field_0x0 + lVar29);
                  uVar2 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
                  if ((int)uVar2 < (int)uVar1) {
LAB_146110a41:
                    pFVar25 = pFVar28;
                  }
                  else if ((int)uVar2 == (int)uVar1) {
                    local_378._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                    local_370._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                    if (local_378._4_4_ < local_370._4_4_) goto LAB_146110a41;
                  }
                  local_378 = uVar2;
                  local_370 = uVar1;
                }
              }
              uVar1 = *(undefined8 *)&(pFVar25->Hook).Interface;
              uVar2 = *(undefined8 *)&(pFVar25->Hook).Interface.field_0x8;
              pFVar28 = pFVar31 + -1;
              uVar14 = (pFVar25->Hook).ObjectBindingID.A;
              uVar15 = (pFVar25->Hook).ObjectBindingID.B;
              uVar16 = (pFVar25->Hook).ObjectBindingID.C;
              uVar17 = (pFVar25->Hook).ObjectBindingID.D;
              FVar18 = pFVar25->RootInstanceHandle;
              FVar19.Value = (pFVar25->SequenceID).Value;
              iVar32 = pFVar25->TriggerIndex;
              FVar21.Value = (pFVar25->RootTime).FrameNumber.Value;
              uVar4 = *(undefined8 *)&(pFVar31->Hook).Interface.field_0x8;
              uVar5 = *(undefined8 *)&(pFVar25->RootTime).SubFrame;
              bVar22 = pFVar25->bRestoreState;
              uVar23 = *(undefined7 *)&pFVar25->field_0x39;
              *(undefined8 *)&(pFVar25->Hook).Interface = *(undefined8 *)&(pFVar31->Hook).Interface;
              *(undefined8 *)&(pFVar25->Hook).Interface.field_0x8 = uVar4;
              uVar8 = (pFVar31->Hook).ObjectBindingID.B;
              uVar9 = (pFVar31->Hook).ObjectBindingID.C;
              uVar10 = (pFVar31->Hook).ObjectBindingID.D;
              (pFVar25->Hook).ObjectBindingID.A = (pFVar31->Hook).ObjectBindingID.A;
              (pFVar25->Hook).ObjectBindingID.B = uVar8;
              (pFVar25->Hook).ObjectBindingID.C = uVar9;
              (pFVar25->Hook).ObjectBindingID.D = uVar10;
              FVar11.Value = (pFVar31->SequenceID).Value;
              iVar24 = pFVar31->TriggerIndex;
              FVar12.Value = (pFVar31->RootTime).FrameNumber.Value;
              pFVar25->RootInstanceHandle = pFVar31->RootInstanceHandle;
              pFVar25->SequenceID = (FMovieSceneSequenceID)FVar11.Value;
              pFVar25->TriggerIndex = iVar24;
              (pFVar25->RootTime).FrameNumber = (FFrameNumber)FVar12.Value;
              bVar3 = pFVar31->bRestoreState;
              uVar13 = *(undefined7 *)&pFVar31->field_0x39;
              *(undefined8 *)&(pFVar25->RootTime).SubFrame =
                   *(undefined8 *)&(pFVar31->RootTime).SubFrame;
              pFVar25->bRestoreState = bVar3;
              *(undefined7 *)&pFVar25->field_0x39 = uVar13;
              *(undefined8 *)&(pFVar31->Hook).Interface = uVar1;
              *(undefined8 *)&(pFVar31->Hook).Interface.field_0x8 = uVar2;
              (pFVar31->Hook).ObjectBindingID.A = uVar14;
              (pFVar31->Hook).ObjectBindingID.B = uVar15;
              (pFVar31->Hook).ObjectBindingID.C = uVar16;
              (pFVar31->Hook).ObjectBindingID.D = uVar17;
              pFVar31->RootInstanceHandle = FVar18;
              pFVar31->SequenceID = (FMovieSceneSequenceID)FVar19.Value;
              pFVar31->TriggerIndex = iVar32;
              (pFVar31->RootTime).FrameNumber = (FFrameNumber)FVar21.Value;
              *(undefined8 *)&(pFVar31->RootTime).SubFrame = uVar5;
              pFVar31->bRestoreState = bVar22;
              *(undefined7 *)&pFVar31->field_0x39 = uVar23;
              pFVar31 = pFVar28;
            } while (pFVar7 < pFVar28);
          }
          goto LAB_1461108a1;
        }
        uVar1 = *(undefined8 *)&(pFVar7->Hook).Interface.field_0x8;
        pFVar26 = pFVar31 + 1;
        pFVar25 = pFVar7 + iVar24 / 2;
        uVar2 = *(undefined8 *)&(pFVar25->Hook).Interface;
        uVar4 = *(undefined8 *)&(pFVar25->Hook).Interface.field_0x8;
        uVar14 = (pFVar25->Hook).ObjectBindingID.A;
        uVar15 = (pFVar25->Hook).ObjectBindingID.B;
        uVar16 = (pFVar25->Hook).ObjectBindingID.C;
        uVar17 = (pFVar25->Hook).ObjectBindingID.D;
        FVar18 = pFVar25->RootInstanceHandle;
        FVar19.Value = (pFVar25->SequenceID).Value;
        iVar20 = pFVar25->TriggerIndex;
        FVar21.Value = (pFVar25->RootTime).FrameNumber.Value;
        uVar5 = *(undefined8 *)&(pFVar25->RootTime).SubFrame;
        bVar22 = pFVar25->bRestoreState;
        uVar23 = *(undefined7 *)&pFVar25->field_0x39;
        *(undefined8 *)&(pFVar25->Hook).Interface = *(undefined8 *)&(pFVar7->Hook).Interface;
        *(undefined8 *)&(pFVar25->Hook).Interface.field_0x8 = uVar1;
        uVar8 = (pFVar7->Hook).ObjectBindingID.B;
        uVar9 = (pFVar7->Hook).ObjectBindingID.C;
        uVar10 = (pFVar7->Hook).ObjectBindingID.D;
        (pFVar25->Hook).ObjectBindingID.A = (pFVar7->Hook).ObjectBindingID.A;
        (pFVar25->Hook).ObjectBindingID.B = uVar8;
        (pFVar25->Hook).ObjectBindingID.C = uVar9;
        (pFVar25->Hook).ObjectBindingID.D = uVar10;
        FVar11.Value = (pFVar7->SequenceID).Value;
        iVar24 = pFVar7->TriggerIndex;
        FVar12.Value = (pFVar7->RootTime).FrameNumber.Value;
        pFVar25->RootInstanceHandle = pFVar7->RootInstanceHandle;
        pFVar25->SequenceID = (FMovieSceneSequenceID)FVar11.Value;
        pFVar25->TriggerIndex = iVar24;
        (pFVar25->RootTime).FrameNumber = (FFrameNumber)FVar12.Value;
        bVar3 = pFVar7->bRestoreState;
        uVar13 = *(undefined7 *)&pFVar7->field_0x39;
        *(undefined8 *)&(pFVar25->RootTime).SubFrame = *(undefined8 *)&(pFVar7->RootTime).SubFrame;
        pFVar25->bRestoreState = bVar3;
        *(undefined7 *)&pFVar25->field_0x39 = uVar13;
        *(undefined8 *)&(pFVar7->Hook).Interface = uVar2;
        *(undefined8 *)&(pFVar7->Hook).Interface.field_0x8 = uVar4;
        (pFVar7->Hook).ObjectBindingID.A = uVar14;
        (pFVar7->Hook).ObjectBindingID.B = uVar15;
        (pFVar7->Hook).ObjectBindingID.C = uVar16;
        (pFVar7->Hook).ObjectBindingID.D = uVar17;
        pFVar7->RootInstanceHandle = FVar18;
        pFVar7->SequenceID = (FMovieSceneSequenceID)FVar19.Value;
        pFVar7->TriggerIndex = iVar20;
        (pFVar7->RootTime).FrameNumber = (FFrameNumber)FVar21.Value;
        *(undefined8 *)&(pFVar7->RootTime).SubFrame = uVar5;
        pFVar7->bRestoreState = bVar22;
        *(undefined7 *)&pFVar7->field_0x39 = uVar23;
        pFVar25 = pFVar7;
LAB_146110723:
        do {
          do {
            pFVar28 = pFVar25;
            pFVar25 = pFVar28 + 1;
            if (pFVar31 < pFVar25) goto LAB_146110751;
            local_378 = *(undefined8 *)(&(pFVar25->Hook).Interface.field_0x0 + lVar29);
            local_370 = *(undefined8 *)(&(pFVar7->Hook).Interface.field_0x0 + lVar29);
            if ((int)local_370 < (int)local_378) goto LAB_146110751;
          } while ((int)local_370 != (int)local_378);
          local_370._4_4_ = (float)((ulonglong)local_370 >> 0x20);
          local_378._4_4_ = (float)((ulonglong)local_378 >> 0x20);
          bVar3 = local_378._4_4_ <= local_370._4_4_;
        } while (bVar3);
LAB_146110751:
        do {
          do {
            pFVar27 = pFVar26;
            pFVar26 = pFVar27 + -1;
            if (pFVar26 <= pFVar7) goto LAB_14611077f;
            local_378 = *(undefined8 *)(&(pFVar7->Hook).Interface.field_0x0 + lVar29);
            local_370 = *(undefined8 *)(&(pFVar26->Hook).Interface.field_0x0 + lVar29);
            if ((int)local_370 < (int)local_378) goto LAB_14611077f;
          } while ((int)local_370 != (int)local_378);
          local_370._4_4_ = (float)((ulonglong)local_370 >> 0x20);
          local_378._4_4_ = (float)((ulonglong)local_378 >> 0x20);
          bVar3 = local_378._4_4_ <= local_370._4_4_;
        } while (bVar3);
LAB_14611077f:
        uVar1 = *(undefined8 *)&(pFVar26->Hook).Interface;
        uVar2 = *(undefined8 *)&pFVar27[-1].Hook.Interface.field_0x8;
        if (pFVar25 <= pFVar26) {
          uVar4 = *(undefined8 *)&(pFVar25->Hook).Interface;
          uVar5 = *(undefined8 *)&pFVar28[1].Hook.Interface.field_0x8;
          uVar14 = pFVar28[1].Hook.ObjectBindingID.A;
          uVar15 = pFVar28[1].Hook.ObjectBindingID.B;
          uVar16 = pFVar28[1].Hook.ObjectBindingID.C;
          uVar17 = pFVar28[1].Hook.ObjectBindingID.D;
          FVar18 = pFVar28[1].RootInstanceHandle;
          FVar19.Value = pFVar28[1].SequenceID.Value;
          iVar20 = pFVar28[1].TriggerIndex;
          FVar21.Value = pFVar28[1].RootTime.FrameNumber.Value;
          uVar6 = *(undefined8 *)&pFVar28[1].RootTime.SubFrame;
          bVar22 = pFVar28[1].bRestoreState;
          uVar23 = *(undefined7 *)&pFVar28[1].field_0x39;
          *(undefined8 *)&(pFVar25->Hook).Interface = uVar1;
          *(undefined8 *)&pFVar28[1].Hook.Interface.field_0x8 = uVar2;
          uVar8 = pFVar27[-1].Hook.ObjectBindingID.B;
          uVar9 = pFVar27[-1].Hook.ObjectBindingID.C;
          uVar10 = pFVar27[-1].Hook.ObjectBindingID.D;
          pFVar28[1].Hook.ObjectBindingID.A = pFVar27[-1].Hook.ObjectBindingID.A;
          pFVar28[1].Hook.ObjectBindingID.B = uVar8;
          pFVar28[1].Hook.ObjectBindingID.C = uVar9;
          pFVar28[1].Hook.ObjectBindingID.D = uVar10;
          FVar11.Value = pFVar27[-1].SequenceID.Value;
          iVar24 = pFVar27[-1].TriggerIndex;
          FVar12.Value = pFVar27[-1].RootTime.FrameNumber.Value;
          pFVar28[1].RootInstanceHandle = pFVar27[-1].RootInstanceHandle;
          pFVar28[1].SequenceID = (FMovieSceneSequenceID)FVar11.Value;
          pFVar28[1].TriggerIndex = iVar24;
          pFVar28[1].RootTime.FrameNumber = (FFrameNumber)FVar12.Value;
          bVar3 = pFVar27[-1].bRestoreState;
          uVar13 = *(undefined7 *)&pFVar27[-1].field_0x39;
          *(undefined8 *)&pFVar28[1].RootTime.SubFrame =
               *(undefined8 *)&pFVar27[-1].RootTime.SubFrame;
          pFVar28[1].bRestoreState = bVar3;
          *(undefined7 *)&pFVar28[1].field_0x39 = uVar13;
          *(undefined8 *)&(pFVar26->Hook).Interface = uVar4;
          *(undefined8 *)&pFVar27[-1].Hook.Interface.field_0x8 = uVar5;
          pFVar27[-1].Hook.ObjectBindingID.A = uVar14;
          pFVar27[-1].Hook.ObjectBindingID.B = uVar15;
          pFVar27[-1].Hook.ObjectBindingID.C = uVar16;
          pFVar27[-1].Hook.ObjectBindingID.D = uVar17;
          pFVar27[-1].RootInstanceHandle = FVar18;
          pFVar27[-1].SequenceID = (FMovieSceneSequenceID)FVar19.Value;
          pFVar27[-1].TriggerIndex = iVar20;
          pFVar27[-1].RootTime.FrameNumber = (FFrameNumber)FVar21.Value;
          *(undefined8 *)&pFVar27[-1].RootTime.SubFrame = uVar6;
          pFVar27[-1].bRestoreState = bVar22;
          *(undefined7 *)&pFVar27[-1].field_0x39 = uVar23;
          goto LAB_146110723;
        }
        uVar4 = *(undefined8 *)&(pFVar7->Hook).Interface;
        uVar5 = *(undefined8 *)&(pFVar7->Hook).Interface.field_0x8;
        uVar14 = (pFVar7->Hook).ObjectBindingID.A;
        uVar15 = (pFVar7->Hook).ObjectBindingID.B;
        uVar16 = (pFVar7->Hook).ObjectBindingID.C;
        uVar17 = (pFVar7->Hook).ObjectBindingID.D;
        FVar18 = pFVar7->RootInstanceHandle;
        FVar19.Value = (pFVar7->SequenceID).Value;
        iVar20 = pFVar7->TriggerIndex;
        FVar21.Value = (pFVar7->RootTime).FrameNumber.Value;
        iVar32 = iVar32 + -1;
        uVar6 = *(undefined8 *)&(pFVar7->RootTime).SubFrame;
        bVar22 = pFVar7->bRestoreState;
        uVar23 = *(undefined7 *)&pFVar7->field_0x39;
        *(undefined8 *)&(pFVar7->Hook).Interface = uVar1;
        *(undefined8 *)&(pFVar7->Hook).Interface.field_0x8 = uVar2;
        uVar8 = pFVar27[-1].Hook.ObjectBindingID.B;
        uVar9 = pFVar27[-1].Hook.ObjectBindingID.C;
        uVar10 = pFVar27[-1].Hook.ObjectBindingID.D;
        (pFVar7->Hook).ObjectBindingID.A = pFVar27[-1].Hook.ObjectBindingID.A;
        (pFVar7->Hook).ObjectBindingID.B = uVar8;
        (pFVar7->Hook).ObjectBindingID.C = uVar9;
        (pFVar7->Hook).ObjectBindingID.D = uVar10;
        FVar11.Value = pFVar27[-1].SequenceID.Value;
        iVar24 = pFVar27[-1].TriggerIndex;
        FVar12.Value = pFVar27[-1].RootTime.FrameNumber.Value;
        pFVar7->RootInstanceHandle = pFVar27[-1].RootInstanceHandle;
        pFVar7->SequenceID = (FMovieSceneSequenceID)FVar11.Value;
        pFVar7->TriggerIndex = iVar24;
        (pFVar7->RootTime).FrameNumber = (FFrameNumber)FVar12.Value;
        bVar3 = pFVar27[-1].bRestoreState;
        uVar13 = *(undefined7 *)&pFVar27[-1].field_0x39;
        *(undefined8 *)&(pFVar7->RootTime).SubFrame = *(undefined8 *)&pFVar27[-1].RootTime.SubFrame;
        pFVar7->bRestoreState = bVar3;
        *(undefined7 *)&pFVar7->field_0x39 = uVar13;
        *(undefined8 *)&(pFVar26->Hook).Interface = uVar4;
        *(undefined8 *)&pFVar27[-1].Hook.Interface.field_0x8 = uVar5;
        pFVar27[-1].Hook.ObjectBindingID.A = uVar14;
        pFVar27[-1].Hook.ObjectBindingID.B = uVar15;
        pFVar27[-1].Hook.ObjectBindingID.C = uVar16;
        pFVar27[-1].Hook.ObjectBindingID.D = uVar17;
        pFVar27[-1].RootInstanceHandle = FVar18;
        pFVar27[-1].SequenceID = (FMovieSceneSequenceID)FVar19.Value;
        pFVar27[-1].TriggerIndex = iVar20;
        pFVar27[-1].RootTime.FrameNumber = (FFrameNumber)FVar21.Value;
        *(undefined8 *)&pFVar27[-1].RootTime.SubFrame = uVar6;
        pFVar27[-1].bRestoreState = bVar22;
        *(undefined7 *)&pFVar27[-1].field_0x39 = uVar23;
        if ((longlong)((longlong)pFVar26 + (-0x40 - (longlong)pFVar7) & 0xffffffffffffffc0U) <
            (longlong)((longlong)pFVar31 - (longlong)pFVar25 & 0xffffffffffffffc0U)) {
          if (pFVar25 < pFVar31) {
            *ppFVar33 = pFVar25;
            ppFVar33[1] = pFVar31;
            *(int *)(ppFVar33 + 2) = iVar32;
            ppFVar33 = ppFVar33 + 3;
          }
          if (pFVar26 <= pFVar7 + 1) goto LAB_1461108a1;
          pFVar31 = pFVar27 + -2;
          pFVar25 = pFVar7;
        }
        else {
          if (pFVar7 + 1 < pFVar26) {
            *ppFVar33 = pFVar7;
            ppFVar33[1] = pFVar27 + -2;
            *(int *)(ppFVar33 + 2) = iVar32;
            ppFVar33 = ppFVar33 + 3;
          }
          if (pFVar31 <= pFVar25) goto LAB_1461108a1;
        }
        iVar24 = (int)((longlong)pFVar31 - (longlong)pFVar25 >> 6);
        pFVar7 = pFVar25;
      }
      HeapSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TLess<void>_>
                (pFVar7,iVar24,param_3,param_4);
LAB_1461108a1:
      ppFVar33 = ppFVar33 + -3;
    } while (&local_348 <= ppFVar33);
  }
  return;
}

// IntroSortInternal<`UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder'::__l2::FSortableID,int,UE::Core::Private::TProjectionMemberData<unsigned_short_`UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder'::__l2::FSortableID::*>,TLess<void>_> @ 146110ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID,int,UE::Core::Private::TProjectionMemberData<unsigned_short__UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID::*>,TLess<void>_>
          (FSortableID *param_1,int param_2,
          TProjectionMemberData<unsigned_short__public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID::*>
          param_3,TLess<void> param_4)

{
  ushort *puVar1;
  FSortableID *pFVar2;
  FSortableID FVar3;
  int iVar4;
  FSortableID *pFVar5;
  longlong lVar6;
  FSortableID *pFVar7;
  FSortableID *pFVar8;
  FSortableID *pFVar9;
  FSortableID *pFVar10;
  FSortableID **ppFVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  FSortableID *local_348;
  FSortableID *local_338;
  FSortableID *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    lVar6 = (longlong)(int)param_3.DataMemberPtr;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    ppFVar11 = &local_338;
    do {
      pFVar9 = ppFVar11[1];
      pFVar5 = *ppFVar11;
      pFVar2 = ppFVar11[2];
      iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar5 >> 2) + 1;
      local_348._0_4_ = (int)pFVar2;
      pFVar10 = pFVar5;
      if ((int)local_348 != 0) {
LAB_146110b60:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          pFVar7 = pFVar9 + 1;
          puVar1 = (ushort *)((longlong)&pFVar10->NodeID + lVar6);
          FVar3 = pFVar10[iVar4 >> 1];
          pFVar10[iVar4 >> 1] = *pFVar10;
          *pFVar10 = FVar3;
          pFVar5 = pFVar10;
LAB_146110b90:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar9) goto code_r0x000146110b99;
          goto LAB_146110ba3;
        }
        for (; pFVar5 = pFVar10, pFVar2 = pFVar10, pFVar10 < pFVar9; pFVar9 = pFVar9 + -1) {
          while (pFVar2 = pFVar2 + 1, pFVar2 <= pFVar9) {
            if (*(ushort *)((longlong)&pFVar5->NodeID + lVar6) <
                *(ushort *)((longlong)&pFVar2->NodeID + lVar6)) {
              pFVar5 = pFVar2;
            }
          }
          FVar3 = *pFVar5;
          *pFVar5 = *pFVar9;
          *pFVar9 = FVar3;
        }
        goto LAB_146110c5c;
      }
LAB_146110c4b:
      local_348 = pFVar2;
      HeapSortInternal<_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID,int,UE::Core::Private::TProjectionMemberData<unsigned_short__UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID::*>,TLess<void>_>
                (pFVar5,iVar4,param_3,param_4);
LAB_146110c5c:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_338 <= ppFVar11);
  }
  return;
code_r0x000146110b99:
  if (*(ushort *)((longlong)&pFVar5->NodeID + lVar6) <= *puVar1) goto LAB_146110b90;
LAB_146110ba3:
  do {
    pFVar8 = pFVar7;
    pFVar7 = pFVar8 + -1;
    if (pFVar7 <= pFVar10) break;
  } while (*puVar1 <= *(ushort *)((longlong)&pFVar7->NodeID + lVar6));
  if (pFVar5 <= pFVar7) {
    FVar3 = *pFVar5;
    *pFVar5 = *pFVar7;
    *pFVar7 = FVar3;
    goto LAB_146110b90;
  }
  FVar3 = *pFVar10;
  local_348._0_4_ = (int)local_348 + -1;
  *pFVar10 = *pFVar7;
  *pFVar7 = FVar3;
  if ((longlong)((longlong)pFVar7 + (-4 - (longlong)pFVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar9 - (longlong)pFVar5 & 0xfffffffffffffffcU)) {
    if (pFVar5 < pFVar9) {
      *ppFVar11 = pFVar5;
      ppFVar11[1] = pFVar9;
      *(int *)(ppFVar11 + 2) = (int)local_348;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar7 <= pFVar10 + 1) goto LAB_146110c5c;
    pFVar9 = pFVar8 + -2;
    pFVar5 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar7) {
      *ppFVar11 = pFVar10;
      ppFVar11[1] = pFVar8 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_348;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar9 <= pFVar5) goto LAB_146110c5c;
  }
  iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar5 >> 2) + 1;
  pFVar10 = pFVar5;
  if ((int)local_348 == 0) goto LAB_146110c4b;
  goto LAB_146110b60;
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityLedger::Contains'::__l2::<lambda_1>_&> @ 146110d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityLedger::Contains_::__l2::<lambda_1>_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  int iVar2;
  uint uVar3;
  bool *pbVar4;
  bool bVar5;
  FComponentMask *pFVar6;
  undefined1 *puVar7;
  int local_58;
  int iStack_54;
  
  pTVar1 = &this->ParentToChild;
  local_58 = -1;
  iVar2 = *(int *)&(this->ParentToChild).field_0x48;
  if (iVar2 == 0) {
    iStack_54 = -1;
  }
  else {
    puVar7 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ParentToChild).field_0x38;
    }
    iStack_54 = *(int *)(puVar7 + ((longlong)iVar2 - 1U & (ulonglong)param_1.Value) * 4);
    local_58 = iStack_54;
    if (iStack_54 != -1) {
      do {
        iStack_54 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_58 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_58 * 0xc) == param_1.Value) break;
        local_58 = iStack_54;
      } while (iStack_54 != -1);
    }
  }
  do {
    if (local_58 == -1) {
      return;
    }
    uVar3 = *(uint *)(*(longlong *)&(param_2->Linker->EntityManager).EntityLocations +
                     (ulonglong)*(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_58 * 0xc) * 8)
    ;
    if ((short)uVar3 == -1) {
      pFVar6 = &GEntityManagerEmptyMask;
    }
    else {
      pFVar6 = (FComponentMask *)
               ((ulonglong)(uVar3 & 0xffff) * 0x38 +
               *(longlong *)&(param_2->Linker->EntityManager).EntityAllocationMasks);
    }
    pbVar4 = param_2->bResult;
    bVar5 = FEntityComponentFilter::Match(param_2->Filter,pFVar6);
    *pbVar4 = bVar5;
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityLedger::Contains_::__l2::<lambda_1>_&>
              (this,(FMovieSceneEntityID)
                    *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_58 * 0xc),param_2);
    if (iStack_54 == -1) {
      return;
    }
    local_58 = iStack_54;
    do {
      iStack_54 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_58 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_58 * 0xc) == param_1.Value) break;
      local_58 = iStack_54;
    } while (iStack_54 != -1);
  } while( true );
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityLedger::MutateAll'::__l2::<lambda_1>_&> @ 146110ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityLedger::MutateAll_::__l2::<lambda_1>_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  longlong lVar2;
  FMovieSceneEntityID FVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 *puVar10;
  int iVar11;
  FComponentMask *pFVar12;
  ushort local_res10 [8];
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined2 local_d4;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_d0;
  ushort *puStack_c8;
  int local_c0;
  int iStack_bc;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_b8;
  ushort *puStack_b0;
  undefined8 local_a8;
  FEntityManager *local_a0;
  undefined8 local_98;
  uint local_90;
  undefined4 local_8c;
  undefined2 local_84;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar1 = &this->ParentToChild;
  iVar4 = *(int *)&(this->ParentToChild).field_0x48;
  puStack_c8 = local_res10;
  local_c0 = -1;
  if (iVar4 == 0) {
    iStack_bc = -1;
  }
  else {
    puVar10 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ParentToChild).field_0x38;
    }
    iStack_bc = *(int *)(puVar10 + ((longlong)iVar4 - 1U & (ulonglong)param_1.Value) * 4);
    local_c0 = iStack_bc;
    if (iStack_bc != -1) {
      do {
        iStack_bc = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_c0 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_c0 * 0xc) == param_1.Value) break;
        local_c0 = iStack_bc;
      } while (iStack_bc != -1);
    }
  }
  local_a8 = CONCAT44(iStack_bc,local_c0);
  local_d0 = pTVar1;
  local_b8 = pTVar1;
  puStack_b0 = puStack_c8;
  local_a0 = this;
  local_res10[0] = param_1.Value;
  iVar11 = local_c0;
  iVar4 = iStack_bc;
  do {
    if (iVar11 == -1) {
      return;
    }
    FVar3.Value = *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)iVar11 * 0xc);
    lVar6 = *(longlong *)&(param_2->Linker->EntityManager).EntityLocations;
    lVar2 = (ulonglong)FVar3.Value * 8;
    uVar5 = *(uint *)(lVar6 + lVar2);
    local_84 = *(undefined2 *)(lVar6 + 4 + lVar2);
    if ((short)uVar5 == -1) {
      pFVar12 = &GEntityManagerEmptyMask;
    }
    else {
      pFVar12 = (FComponentMask *)
                ((ulonglong)(uVar5 & 0xffff) * 0x38 +
                *(longlong *)&(param_2->Linker->EntityManager).EntityAllocationMasks);
    }
    bVar9 = FEntityComponentFilter::Match(param_2->Filter,pFVar12);
    if (bVar9) {
      local_80.NumBits = 0;
      local_80.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_80,&pFVar12->Bits);
      (**(code **)((longlong)*param_2->Mutation + 8))
                (param_2->Mutation,&param_2->Linker->EntityManager);
      bVar9 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                        (&local_80,&pFVar12->Bits,false);
      if (!bVar9) {
        ChangeEntityType(&param_2->Linker->EntityManager,FVar3,(FComponentMask *)&local_80);
        pUVar7 = param_2->Linker;
        if ((int)(uint)FVar3.Value < *(int *)&(pUVar7->EntityManager).EntityLocations.field_0x28) {
          puVar10 = *(undefined1 **)&(pUVar7->EntityManager).EntityLocations.field_0x20;
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = &(pUVar7->EntityManager).EntityLocations.field_0x10;
          }
          if ((*(uint *)(puVar10 + (ulonglong)(FVar3.Value >> 5) * 4) >> (FVar3.Value & 0x1f) & 1)
              == 0) goto LAB_1461110cc;
        }
        else {
LAB_1461110cc:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntityLocations.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                             ,0x22b,L"");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        lVar6 = *(longlong *)&(pUVar7->EntityManager).EntityLocations;
        local_d8 = *(uint *)(lVar6 + lVar2);
        local_d4 = *(undefined2 *)(lVar6 + 4 + lVar2);
        if ((short)local_d8 == -1) {
          local_98 = 0;
          local_90 = 0xffffffff;
        }
        else {
          local_90 = local_d8 >> 0x10;
          local_98 = *(undefined8 *)
                      (*(longlong *)&(pUVar7->EntityManager).EntityAllocations +
                      (ulonglong)(local_d8 & 0xffff) * 8);
        }
        local_8c = 1;
        (**(code **)((longlong)*param_2->Mutation + 0x10))(param_2->Mutation,&local_98,&local_80);
      }
    }
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityLedger::MutateAll_::__l2::<lambda_1>_&>
              (local_a0,(FMovieSceneEntityID)
                        *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)iVar11 * 0xc),param_2);
    if (iVar4 == -1) {
      return;
    }
    iVar11 = iVar4;
    do {
      iVar4 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar11 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)iVar11 * 0xc) == *puStack_b0) break;
      iVar11 = iVar4;
    } while (iVar4 != -1);
    local_a8 = CONCAT44(iVar4,iVar11);
  } while( true );
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityManager::AddComponent'::__l8::<lambda_1>_&> @ 146111210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_38;
  
  pTVar1 = &this->ParentToChild;
  iVar2 = *(int *)&(this->ParentToChild).field_0x48;
  local_38 = -1;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    puVar3 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ParentToChild).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)iVar2 - 1U & (ulonglong)param_1.Value) * 4);
    local_38 = iVar2;
    if (iVar2 != -1) {
      do {
        iVar2 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_38 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_38 * 0xc) == param_1.Value) break;
        local_38 = iVar2;
      } while (iVar2 != -1);
    }
  }
  do {
    do {
      if (local_38 == -1) {
        return;
      }
      AddComponent(param_2->__this,
                   (FMovieSceneEntityID)
                   *(ushort *)((longlong)local_38 * 0xc + 2 + *(longlong *)pTVar1),
                   (FComponentTypeID)(param_2->ComponentTypeID).Value);
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_&>
                (this,(FMovieSceneEntityID)
                      *(ushort *)((longlong)local_38 * 0xc + 2 + *(longlong *)pTVar1),param_2);
      local_38 = iVar2;
    } while (iVar2 == -1);
    do {
      iVar2 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_38 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_38 * 0xc) == param_1.Value) break;
      local_38 = iVar2;
    } while (iVar2 != -1);
  } while( true );
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityManager::AddComponents'::__l8::<lambda_1>_&> @ 146111390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_38;
  
  pTVar1 = &this->ParentToChild;
  iVar2 = *(int *)&(this->ParentToChild).field_0x48;
  local_38 = -1;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    puVar3 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ParentToChild).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)iVar2 - 1U & (ulonglong)param_1.Value) * 4);
    local_38 = iVar2;
    if (iVar2 != -1) {
      do {
        iVar2 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_38 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_38 * 0xc) == param_1.Value) break;
        local_38 = iVar2;
      } while (iVar2 != -1);
    }
  }
  do {
    do {
      if (local_38 == -1) {
        return;
      }
      AddComponents(param_2->__this,
                    (FMovieSceneEntityID)
                    *(ushort *)((longlong)local_38 * 0xc + 2 + *(longlong *)pTVar1),
                    param_2->EntityComponentMask);
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_&>
                (this,(FMovieSceneEntityID)
                      *(ushort *)((longlong)local_38 * 0xc + 2 + *(longlong *)pTVar1),param_2);
      local_38 = iVar2;
    } while (iVar2 == -1);
    do {
      iVar2 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_38 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_38 * 0xc) == param_1.Value) break;
      local_38 = iVar2;
    } while (iVar2 != -1);
  } while( true );
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityManager::RemoveComponent'::__l8::<lambda_1>_&> @ 146111510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponent_::__l8::<lambda_1>_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_38;
  
  pTVar1 = &this->ParentToChild;
  iVar2 = *(int *)&(this->ParentToChild).field_0x48;
  local_38 = -1;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    puVar3 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ParentToChild).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)iVar2 - 1U & (ulonglong)param_1.Value) * 4);
    local_38 = iVar2;
    if (iVar2 != -1) {
      do {
        iVar2 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_38 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_38 * 0xc) == param_1.Value) break;
        local_38 = iVar2;
      } while (iVar2 != -1);
    }
  }
  do {
    do {
      if (local_38 == -1) {
        return;
      }
      RemoveComponent(param_2->__this,
                      (FMovieSceneEntityID)
                      *(ushort *)((longlong)local_38 * 0xc + 2 + *(longlong *)pTVar1),
                      (FComponentTypeID)(param_2->ComponentTypeID).Value);
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponent_::__l8::<lambda_1>_&>
                (this,(FMovieSceneEntityID)
                      *(ushort *)((longlong)local_38 * 0xc + 2 + *(longlong *)pTVar1),param_2);
      local_38 = iVar2;
    } while (iVar2 == -1);
    do {
      iVar2 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_38 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_38 * 0xc) == param_1.Value) break;
      local_38 = iVar2;
    } while (iVar2 != -1);
  } while( true );
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityManager::RemoveComponents'::__l8::<lambda_1>_&> @ 146111690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponents_::__l8::<lambda_1>_&>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_38;
  
  pTVar1 = &this->ParentToChild;
  iVar2 = *(int *)&(this->ParentToChild).field_0x48;
  local_38 = -1;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    puVar3 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ParentToChild).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)iVar2 - 1U & (ulonglong)param_1.Value) * 4);
    local_38 = iVar2;
    if (iVar2 != -1) {
      do {
        iVar2 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_38 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_38 * 0xc) == param_1.Value) break;
        local_38 = iVar2;
      } while (iVar2 != -1);
    }
  }
  do {
    do {
      if (local_38 == -1) {
        return;
      }
      RemoveComponents(param_2->__this,
                       (FMovieSceneEntityID)
                       *(ushort *)((longlong)local_38 * 0xc + 2 + *(longlong *)pTVar1),
                       param_2->EntitiesToRemove);
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponents_::__l8::<lambda_1>_&>
                (this,(FMovieSceneEntityID)
                      *(ushort *)((longlong)local_38 * 0xc + 2 + *(longlong *)pTVar1),param_2);
      local_38 = iVar2;
    } while (iVar2 == -1);
    do {
      iVar2 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_38 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_38 * 0xc) == param_1.Value) break;
      local_38 = iVar2;
    } while (iVar2 != -1);
  } while( true );
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityManager::AddComponent'::__l8::<lambda_1>_> @ 146111810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_78;
  int iStack_74;
  
  pTVar1 = &this->ParentToChild;
  iVar5 = *(int *)&(this->ParentToChild).field_0x48;
  local_78 = -1;
  if (iVar5 == 0) {
    iStack_74 = -1;
    iVar5 = local_78;
  }
  else {
    puVar4 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ParentToChild).field_0x38;
    }
    iStack_74 = *(int *)(puVar4 + ((longlong)iVar5 - 1U & (ulonglong)param_1.Value) * 4);
    iVar5 = iStack_74;
    if (iStack_74 != -1) {
      do {
        iStack_74 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar5 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)iVar5 * 0xc) == param_1.Value) break;
        iVar5 = iStack_74;
      } while (iStack_74 != -1);
    }
  }
  do {
    if (iVar5 == -1) {
      return;
    }
    AddComponent(param_2->__this,
                 (FMovieSceneEntityID)*(ushort *)((longlong)iVar5 * 0xc + 2 + *(longlong *)pTVar1),
                 (FComponentTypeID)(param_2->ComponentTypeID).Value);
    local_78 = -1;
    uVar2 = *(ushort *)((longlong)iVar5 * 0xc + 2 + *(longlong *)pTVar1);
    iVar5 = *(int *)&(this->ParentToChild).field_0x48;
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else {
      puVar4 = *(undefined1 **)&(this->ParentToChild).field_0x40;
      puVar3 = &(this->ParentToChild).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar3 = puVar4;
      }
      iVar5 = *(int *)(puVar3 + ((longlong)iVar5 - 1U & (ulonglong)(uint)uVar2) * 4);
      local_78 = iVar5;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_78 * 0xc);
          if ((uint)*(ushort *)(*(longlong *)pTVar1 + (longlong)local_78 * 0xc) == (uint)uVar2)
          break;
          local_78 = iVar5;
        } while (iVar5 != -1);
      }
    }
joined_r0x0001461119c1:
    if (local_78 != -1) {
      AddComponent(param_2->__this,
                   (FMovieSceneEntityID)
                   *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_78 * 0xc),
                   (FComponentTypeID)(param_2->ComponentTypeID).Value);
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_&>
                (this,(FMovieSceneEntityID)
                      *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_78 * 0xc),param_2);
      local_78 = iVar5;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_78 * 0xc);
          if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_78 * 0xc) == uVar2) break;
          local_78 = iVar5;
        } while (iVar5 != -1);
      }
      goto joined_r0x0001461119c1;
    }
    if (iStack_74 == -1) {
      return;
    }
    iVar5 = iStack_74;
    do {
      iStack_74 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar5 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)iVar5 * 0xc) == param_1.Value) break;
      iVar5 = iStack_74;
    } while (iStack_74 != -1);
  } while( true );
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityManager::AddComponents'::__l8::<lambda_1>_> @ 146111ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_78;
  int iStack_74;
  
  pTVar1 = &this->ParentToChild;
  iVar5 = *(int *)&(this->ParentToChild).field_0x48;
  local_78 = -1;
  if (iVar5 == 0) {
    iStack_74 = -1;
    iVar5 = local_78;
  }
  else {
    puVar4 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ParentToChild).field_0x38;
    }
    iStack_74 = *(int *)(puVar4 + ((longlong)iVar5 - 1U & (ulonglong)param_1.Value) * 4);
    iVar5 = iStack_74;
    if (iStack_74 != -1) {
      do {
        iStack_74 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar5 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)iVar5 * 0xc) == param_1.Value) break;
        iVar5 = iStack_74;
      } while (iStack_74 != -1);
    }
  }
  do {
    if (iVar5 == -1) {
      return;
    }
    AddComponents(param_2->__this,
                  (FMovieSceneEntityID)*(ushort *)((longlong)iVar5 * 0xc + 2 + *(longlong *)pTVar1),
                  param_2->EntityComponentMask);
    local_78 = -1;
    uVar2 = *(ushort *)((longlong)iVar5 * 0xc + 2 + *(longlong *)pTVar1);
    iVar5 = *(int *)&(this->ParentToChild).field_0x48;
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else {
      puVar4 = *(undefined1 **)&(this->ParentToChild).field_0x40;
      puVar3 = &(this->ParentToChild).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar3 = puVar4;
      }
      iVar5 = *(int *)(puVar3 + ((longlong)iVar5 - 1U & (ulonglong)(uint)uVar2) * 4);
      local_78 = iVar5;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_78 * 0xc);
          if ((uint)*(ushort *)(*(longlong *)pTVar1 + (longlong)local_78 * 0xc) == (uint)uVar2)
          break;
          local_78 = iVar5;
        } while (iVar5 != -1);
      }
    }
joined_r0x000146111c80:
    if (local_78 != -1) {
      AddComponents(param_2->__this,
                    (FMovieSceneEntityID)
                    *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_78 * 0xc),
                    param_2->EntityComponentMask);
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_&>
                (this,(FMovieSceneEntityID)
                      *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_78 * 0xc),param_2);
      local_78 = iVar5;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_78 * 0xc);
          if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_78 * 0xc) == uVar2) break;
          local_78 = iVar5;
        } while (iVar5 != -1);
      }
      goto joined_r0x000146111c80;
    }
    if (iStack_74 == -1) {
      return;
    }
    iVar5 = iStack_74;
    do {
      iStack_74 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar5 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)iVar5 * 0xc) == param_1.Value) break;
      iVar5 = iStack_74;
    } while (iStack_74 != -1);
  } while( true );
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityManager::RemoveComponent'::__l8::<lambda_1>_> @ 146111d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponent_::__l8::<lambda_1>_>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_78;
  int iStack_74;
  
  pTVar1 = &this->ParentToChild;
  iVar5 = *(int *)&(this->ParentToChild).field_0x48;
  local_78 = -1;
  if (iVar5 == 0) {
    iStack_74 = -1;
    iVar5 = local_78;
  }
  else {
    puVar4 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ParentToChild).field_0x38;
    }
    iStack_74 = *(int *)(puVar4 + ((longlong)iVar5 - 1U & (ulonglong)param_1.Value) * 4);
    iVar5 = iStack_74;
    if (iStack_74 != -1) {
      do {
        iStack_74 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar5 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)iVar5 * 0xc) == param_1.Value) break;
        iVar5 = iStack_74;
      } while (iStack_74 != -1);
    }
  }
  do {
    if (iVar5 == -1) {
      return;
    }
    RemoveComponent(param_2->__this,
                    (FMovieSceneEntityID)
                    *(ushort *)((longlong)iVar5 * 0xc + 2 + *(longlong *)pTVar1),
                    (FComponentTypeID)(param_2->ComponentTypeID).Value);
    local_78 = -1;
    uVar2 = *(ushort *)((longlong)iVar5 * 0xc + 2 + *(longlong *)pTVar1);
    iVar5 = *(int *)&(this->ParentToChild).field_0x48;
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else {
      puVar4 = *(undefined1 **)&(this->ParentToChild).field_0x40;
      puVar3 = &(this->ParentToChild).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar3 = puVar4;
      }
      iVar5 = *(int *)(puVar3 + ((longlong)iVar5 - 1U & (ulonglong)(uint)uVar2) * 4);
      local_78 = iVar5;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_78 * 0xc);
          if ((uint)*(ushort *)(*(longlong *)pTVar1 + (longlong)local_78 * 0xc) == (uint)uVar2)
          break;
          local_78 = iVar5;
        } while (iVar5 != -1);
      }
    }
joined_r0x000146111f31:
    if (local_78 != -1) {
      RemoveComponent(param_2->__this,
                      (FMovieSceneEntityID)
                      *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_78 * 0xc),
                      (FComponentTypeID)(param_2->ComponentTypeID).Value);
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponent_::__l8::<lambda_1>_&>
                (this,(FMovieSceneEntityID)
                      *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_78 * 0xc),param_2);
      local_78 = iVar5;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_78 * 0xc);
          if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_78 * 0xc) == uVar2) break;
          local_78 = iVar5;
        } while (iVar5 != -1);
      }
      goto joined_r0x000146111f31;
    }
    if (iStack_74 == -1) {
      return;
    }
    iVar5 = iStack_74;
    do {
      iStack_74 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar5 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)iVar5 * 0xc) == param_1.Value) break;
      iVar5 = iStack_74;
    } while (iStack_74 != -1);
  } while( true );
}

// IterateChildren_ParentFirst<`UE::MovieScene::FEntityManager::RemoveComponents'::__l8::<lambda_1>_> @ 146112040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::
IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponents_::__l8::<lambda_1>_>
          (FEntityManager *this,FMovieSceneEntityID param_1,<lambda_1> *param_2)

{
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_78;
  int iStack_74;
  
  pTVar1 = &this->ParentToChild;
  iVar5 = *(int *)&(this->ParentToChild).field_0x48;
  local_78 = -1;
  if (iVar5 == 0) {
    iStack_74 = -1;
    iVar5 = local_78;
  }
  else {
    puVar4 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ParentToChild).field_0x38;
    }
    iStack_74 = *(int *)(puVar4 + ((longlong)iVar5 - 1U & (ulonglong)param_1.Value) * 4);
    iVar5 = iStack_74;
    if (iStack_74 != -1) {
      do {
        iStack_74 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar5 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)iVar5 * 0xc) == param_1.Value) break;
        iVar5 = iStack_74;
      } while (iStack_74 != -1);
    }
  }
  do {
    if (iVar5 == -1) {
      return;
    }
    RemoveComponents(param_2->__this,
                     (FMovieSceneEntityID)
                     *(ushort *)((longlong)iVar5 * 0xc + 2 + *(longlong *)pTVar1),
                     param_2->EntitiesToRemove);
    local_78 = -1;
    uVar2 = *(ushort *)((longlong)iVar5 * 0xc + 2 + *(longlong *)pTVar1);
    iVar5 = *(int *)&(this->ParentToChild).field_0x48;
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else {
      puVar4 = *(undefined1 **)&(this->ParentToChild).field_0x40;
      puVar3 = &(this->ParentToChild).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar3 = puVar4;
      }
      iVar5 = *(int *)(puVar3 + ((longlong)iVar5 - 1U & (ulonglong)(uint)uVar2) * 4);
      local_78 = iVar5;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_78 * 0xc);
          if ((uint)*(ushort *)(*(longlong *)pTVar1 + (longlong)local_78 * 0xc) == (uint)uVar2)
          break;
          local_78 = iVar5;
        } while (iVar5 != -1);
      }
    }
joined_r0x0001461121f0:
    if (local_78 != -1) {
      RemoveComponents(param_2->__this,
                       (FMovieSceneEntityID)
                       *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_78 * 0xc),
                       param_2->EntitiesToRemove);
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponents_::__l8::<lambda_1>_&>
                (this,(FMovieSceneEntityID)
                      *(ushort *)(*(longlong *)pTVar1 + 2 + (longlong)local_78 * 0xc),param_2);
      local_78 = iVar5;
      if (iVar5 != -1) {
        do {
          iVar5 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)local_78 * 0xc);
          if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_78 * 0xc) == uVar2) break;
          local_78 = iVar5;
        } while (iVar5 != -1);
      }
      goto joined_r0x0001461121f0;
    }
    if (iStack_74 == -1) {
      return;
    }
    iVar5 = iStack_74;
    do {
      iStack_74 = *(int *)(*(longlong *)pTVar1 + 4 + (longlong)iVar5 * 0xc);
      if (*(ushort *)(*(longlong *)pTVar1 + (longlong)iVar5 * 0xc) == param_1.Value) break;
      iVar5 = iStack_74;
    } while (iStack_74 != -1);
  } while( true );
}

// Iterate_PerAllocationImpl<`UMovieSceneEvaluationHookSystem::UpdateHooks'::__l2::<lambda_1>_&> @ 1461122f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
::Iterate_PerAllocationImpl<_UMovieSceneEvaluationHookSystem::UpdateHooks_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  EEntityThreadingModel EVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  ulonglong uVar7;
  TOptional<FFrameTime> *pTVar8;
  longlong lVar9;
  TOptional<FFrameTime> *pTVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool local_148;
  FEntityAllocationProxy local_140;
  undefined8 *local_130;
  int local_128;
  int local_124;
  int local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined1 local_100 [8];
  longlong local_f8;
  FMovieSceneEvaluationHookEvent local_e8;
  longlong local_a0;
  FEntityAllocationIterator local_98;
  FEntityAllocationIterator local_80;
  FMovieSceneInverseSequenceTransform local_68;
  TOptional<FFrameTime> local_48;
  
  if (*(short *)&this->Accessors != -1 &&
      (*(short *)&(this->Accessors).field_0x4 != -1 && *(short *)&(this->Accessors).field_0x2 != -1)
     ) {
    EVar1 = param_1->ThreadingModel;
    if ((param_2 == (FEntityComponentFilter *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x405,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FEntityAllocationIterator::FEntityAllocationIterator(&local_98,param_1,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_80,param_1);
    bVar5 = FEntityAllocationIterator::operator!=(&local_98,&local_80);
    if (bVar5) {
      do {
        lVar14 = 0;
        FEntityAllocationIterator::operator*(&local_98,&local_140);
        local_f8 = *(longlong *)
                    (*(longlong *)&(local_140.Manager)->EntityAllocations +
                    (longlong)local_140.AllocationIndex * 8);
        if (EVar1 == NoThreading) {
          *(undefined4 *)(local_f8 + 0x14) = 0;
        }
        else {
          local_f8 = 0;
        }
        lVar13 = local_f8;
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_140.Manager)->EntityAllocations +
                 (longlong)local_140.AllocationIndex * 8);
        local_118 = *(longlong *)(lVar3 + 0x28);
        lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + local_118;
        for (; local_118 != lVar9; local_118 = local_118 + 0x38) {
          lVar11 = local_118;
          if (*(short *)(local_118 + 0x36) == *(short *)&(this->Accessors).field_0x4)
          goto LAB_146112472;
        }
        local_118 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        lVar11 = lVar14;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146112472:
        local_128 = *(int *)(lVar3 + 0x14);
        if (local_128 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
        }
        LOCK();
        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
        UNLOCK();
        local_130 = *(undefined8 **)(lVar11 + 0x18);
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_140.Manager)->EntityAllocations +
                 (longlong)local_140.AllocationIndex * 8);
        local_110 = *(longlong *)(lVar3 + 0x28);
        lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + local_110;
        for (; local_110 != lVar9; local_110 = local_110 + 0x38) {
          lVar16 = local_110;
          if (*(short *)(local_110 + 0x36) == *(short *)&(this->Accessors).field_0x2)
          goto LAB_146112508;
        }
        local_110 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        lVar16 = lVar14;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146112508:
        local_124 = *(int *)(lVar3 + 0x14);
        if (local_124 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
        }
        LOCK();
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
        UNLOCK();
        local_a0 = *(longlong *)(lVar16 + 0x18);
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_140.Manager)->EntityAllocations +
                 (longlong)local_140.AllocationIndex * 8);
        local_108 = *(longlong *)(lVar3 + 0x28);
        lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + local_108;
        for (; local_108 != lVar9; local_108 = local_108 + 0x38) {
          lVar17 = local_108;
          if (*(short *)(local_108 + 0x36) == *(short *)&this->Accessors) goto LAB_1461125a3;
        }
        local_108 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        lVar17 = lVar14;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1461125a3:
        local_120 = *(int *)(lVar3 + 0x14);
        if (local_120 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar17 + 0x20));
        }
        LOCK();
        *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
        UNLOCK();
        lVar14 = *(longlong *)(lVar17 + 0x18);
        lVar9 = (longlong)local_140.AllocationIndex * 0x38 +
                *(longlong *)&(local_140.Manager)->EntityAllocationMasks;
        uVar15 = (ulonglong)
                 *(ushort *)
                  (*(longlong *)
                    (*(longlong *)&(local_140.Manager)->EntityAllocations +
                    (longlong)local_140.AllocationIndex * 8) + 0xe);
        pFVar6 = FBuiltInComponentTypes::Get();
        lVar3 = local_a0;
        uVar2 = (pFVar6->Tags).RestoreState.Value;
        if (((uVar2 == 0xffff) || (*(int *)(lVar9 + 0x30) <= (int)(uint)uVar2)) ||
           (local_148 = true,
           (*(uint *)(lVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
          local_148 = false;
        }
        lVar9 = 0;
        if (uVar15 != 0) {
          local_100._0_4_ = 0;
          local_100._4_4_ = 0.0;
          puVar12 = local_130;
          do {
            uVar7 = (ulonglong)*(ushort *)(lVar14 + lVar9 * 4);
            local_130 = *(undefined8 **)&param_3->InstanceRegistry->Instances;
            FMovieSceneSequenceTransform::Inverse
                      ((FMovieSceneSequenceTransform *)(local_130 + uVar7 * 0x28 + 0x12),&local_68);
            local_e8.RootInstanceHandle = (FRootInstanceHandle)0xffff;
            local_e8.Hook.Interface._0_8_ = 0;
            local_e8.Hook.Interface._8_8_ = 0;
            local_e8.Hook.ObjectBindingID.A = 0;
            local_e8.Hook.ObjectBindingID.B = 0;
            local_e8.Hook.ObjectBindingID.C = 0;
            local_e8.Hook.ObjectBindingID.D = 0;
            local_e8.SequenceID.Value = 0xffffffff;
            local_e8.RootTime.FrameNumber.Value = 0;
            local_e8.RootTime.SubFrame = 0.0;
            local_e8.bRestoreState = false;
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)*puVar12 != (UObject *)0x0)) {
              GC::MarkAsReachable((UObject *)*puVar12);
            }
            local_e8.Hook.Interface._0_8_ = *puVar12;
            local_e8.Hook.ObjectBindingID._0_8_ = puVar12[2];
            local_e8.Hook.ObjectBindingID._8_8_ = puVar12[3];
            local_e8.Hook.Interface._8_8_ = puVar12[1];
            local_e8.Type = Begin;
            pTVar8 = FMovieSceneInverseSequenceTransform::TryTransformTime
                               (&local_68,&local_48,*(FFrameTime *)(lVar3 + lVar9 * 8),
                                (FMovieSceneTransformBreadcrumbs *)(local_130 + uVar7 * 0x28 + 0x16)
                               );
            pTVar10 = (TOptional<FFrameTime> *)local_100;
            if (pTVar8->bIsSet != false) {
              pTVar10 = pTVar8;
            }
            local_e8.RootTime = pTVar10->TypedValue;
            local_e8.RootInstanceHandle =
                 *(FRootInstanceHandle *)((longlong)local_130 + uVar7 * 0x140 + 0x13a);
            local_e8.SequenceID.Value = *(uint *)(local_130 + uVar7 * 0x28 + 0x25);
            local_e8.bRestoreState = local_148;
            UMovieSceneEvaluationHookSystem::AddEvent
                      (param_3->__this,
                       *(FInstanceHandle *)((longlong)local_130 + uVar7 * 0x140 + 0x13a),&local_e8);
            if (local_68.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_68.NestedTransforms.AllocatorInstance.Data);
            }
            lVar9 = lVar9 + 1;
            puVar12 = puVar12 + 4;
            lVar11 = local_118;
            lVar13 = local_f8;
            lVar16 = local_110;
            lVar17 = local_108;
          } while (lVar9 < (longlong)uVar15);
        }
        LOCK();
        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
        UNLOCK();
        if (local_128 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
        }
        LOCK();
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + -1;
        UNLOCK();
        if (local_124 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
        }
        LOCK();
        *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + -1;
        UNLOCK();
        if (local_120 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar17 + 0x20));
        }
        if (lVar13 != 0) {
          *(undefined4 *)(lVar13 + 0x14) = 1;
        }
        FEntityAllocationIterator::operator++(&local_98);
        bVar5 = FEntityAllocationIterator::operator!=(&local_98,&local_80);
      } while (bVar5);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_80);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_98);
  }
  return;
}

// Iterate_PerAllocationImpl<`UMovieSceneEvaluationHookSystem::UpdateHooks'::__l2::<lambda_2>_&> @ 146112830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
::Iterate_PerAllocationImpl<_UMovieSceneEvaluationHookSystem::UpdateHooks_::__l2::<lambda_2>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_2> *param_3)

{
  EEntityThreadingModel EVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  ulonglong uVar7;
  TOptional<FFrameTime> *pTVar8;
  longlong lVar9;
  TOptional<FFrameTime> *pTVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool local_148;
  FEntityAllocationProxy local_140;
  undefined8 *local_130;
  int local_128;
  int local_124;
  int local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined1 local_100 [8];
  longlong local_f8;
  FMovieSceneEvaluationHookEvent local_e8;
  longlong local_a0;
  FEntityAllocationIterator local_98;
  FEntityAllocationIterator local_80;
  FMovieSceneInverseSequenceTransform local_68;
  TOptional<FFrameTime> local_48;
  
  if (*(short *)&this->Accessors != -1 &&
      (*(short *)&(this->Accessors).field_0x4 != -1 && *(short *)&(this->Accessors).field_0x2 != -1)
     ) {
    EVar1 = param_1->ThreadingModel;
    if ((param_2 == (FEntityComponentFilter *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x405,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FEntityAllocationIterator::FEntityAllocationIterator(&local_98,param_1,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_80,param_1);
    bVar5 = FEntityAllocationIterator::operator!=(&local_98,&local_80);
    if (bVar5) {
      do {
        lVar14 = 0;
        FEntityAllocationIterator::operator*(&local_98,&local_140);
        local_f8 = *(longlong *)
                    (*(longlong *)&(local_140.Manager)->EntityAllocations +
                    (longlong)local_140.AllocationIndex * 8);
        if (EVar1 == NoThreading) {
          *(undefined4 *)(local_f8 + 0x14) = 0;
        }
        else {
          local_f8 = 0;
        }
        lVar13 = local_f8;
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_140.Manager)->EntityAllocations +
                 (longlong)local_140.AllocationIndex * 8);
        local_118 = *(longlong *)(lVar3 + 0x28);
        lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + local_118;
        for (; local_118 != lVar9; local_118 = local_118 + 0x38) {
          lVar11 = local_118;
          if (*(short *)(local_118 + 0x36) == *(short *)&(this->Accessors).field_0x4)
          goto LAB_1461129b2;
        }
        local_118 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        lVar11 = lVar14;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1461129b2:
        local_128 = *(int *)(lVar3 + 0x14);
        if (local_128 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
        }
        LOCK();
        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
        UNLOCK();
        local_130 = *(undefined8 **)(lVar11 + 0x18);
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_140.Manager)->EntityAllocations +
                 (longlong)local_140.AllocationIndex * 8);
        local_110 = *(longlong *)(lVar3 + 0x28);
        lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + local_110;
        for (; local_110 != lVar9; local_110 = local_110 + 0x38) {
          lVar16 = local_110;
          if (*(short *)(local_110 + 0x36) == *(short *)&(this->Accessors).field_0x2)
          goto LAB_146112a48;
        }
        local_110 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        lVar16 = lVar14;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146112a48:
        local_124 = *(int *)(lVar3 + 0x14);
        if (local_124 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
        }
        LOCK();
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
        UNLOCK();
        local_a0 = *(longlong *)(lVar16 + 0x18);
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_140.Manager)->EntityAllocations +
                 (longlong)local_140.AllocationIndex * 8);
        local_108 = *(longlong *)(lVar3 + 0x28);
        lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + local_108;
        for (; local_108 != lVar9; local_108 = local_108 + 0x38) {
          lVar17 = local_108;
          if (*(short *)(local_108 + 0x36) == *(short *)&this->Accessors) goto LAB_146112ae3;
        }
        local_108 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        lVar17 = lVar14;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146112ae3:
        local_120 = *(int *)(lVar3 + 0x14);
        if (local_120 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar17 + 0x20));
        }
        LOCK();
        *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
        UNLOCK();
        lVar14 = *(longlong *)(lVar17 + 0x18);
        lVar9 = (longlong)local_140.AllocationIndex * 0x38 +
                *(longlong *)&(local_140.Manager)->EntityAllocationMasks;
        uVar15 = (ulonglong)
                 *(ushort *)
                  (*(longlong *)
                    (*(longlong *)&(local_140.Manager)->EntityAllocations +
                    (longlong)local_140.AllocationIndex * 8) + 0xe);
        pFVar6 = FBuiltInComponentTypes::Get();
        lVar3 = local_a0;
        uVar2 = (pFVar6->Tags).RestoreState.Value;
        if (((uVar2 == 0xffff) || (*(int *)(lVar9 + 0x30) <= (int)(uint)uVar2)) ||
           (local_148 = true,
           (*(uint *)(lVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
          local_148 = false;
        }
        lVar9 = 0;
        if (uVar15 != 0) {
          local_100._0_4_ = 0;
          local_100._4_4_ = 0.0;
          puVar12 = local_130;
          do {
            uVar7 = (ulonglong)*(ushort *)(lVar14 + lVar9 * 4);
            local_130 = *(undefined8 **)&param_3->InstanceRegistry->Instances;
            FMovieSceneSequenceTransform::Inverse
                      ((FMovieSceneSequenceTransform *)(local_130 + uVar7 * 0x28 + 0x12),&local_68);
            local_e8.RootInstanceHandle = (FRootInstanceHandle)0xffff;
            local_e8.Hook.Interface._0_8_ = 0;
            local_e8.Hook.Interface._8_8_ = 0;
            local_e8.Hook.ObjectBindingID.A = 0;
            local_e8.Hook.ObjectBindingID.B = 0;
            local_e8.Hook.ObjectBindingID.C = 0;
            local_e8.Hook.ObjectBindingID.D = 0;
            local_e8.SequenceID.Value = 0xffffffff;
            local_e8.RootTime.FrameNumber.Value = 0;
            local_e8.RootTime.SubFrame = 0.0;
            local_e8.bRestoreState = false;
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)*puVar12 != (UObject *)0x0)) {
              GC::MarkAsReachable((UObject *)*puVar12);
            }
            local_e8.Hook.Interface._0_8_ = *puVar12;
            local_e8.Hook.ObjectBindingID._0_8_ = puVar12[2];
            local_e8.Hook.ObjectBindingID._8_8_ = puVar12[3];
            local_e8.Hook.Interface._8_8_ = puVar12[1];
            local_e8.Type = End;
            pTVar8 = FMovieSceneInverseSequenceTransform::TryTransformTime
                               (&local_68,&local_48,*(FFrameTime *)(lVar3 + lVar9 * 8),
                                (FMovieSceneTransformBreadcrumbs *)(local_130 + uVar7 * 0x28 + 0x16)
                               );
            pTVar10 = (TOptional<FFrameTime> *)local_100;
            if (pTVar8->bIsSet != false) {
              pTVar10 = pTVar8;
            }
            local_e8.RootTime = pTVar10->TypedValue;
            local_e8.RootInstanceHandle =
                 *(FRootInstanceHandle *)((longlong)local_130 + uVar7 * 0x140 + 0x13a);
            local_e8.SequenceID.Value = *(uint *)(local_130 + uVar7 * 0x28 + 0x25);
            local_e8.bRestoreState = local_148;
            UMovieSceneEvaluationHookSystem::AddEvent
                      (param_3->__this,
                       *(FInstanceHandle *)((longlong)local_130 + uVar7 * 0x140 + 0x13a),&local_e8);
            if (local_68.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_68.NestedTransforms.AllocatorInstance.Data);
            }
            lVar9 = lVar9 + 1;
            puVar12 = puVar12 + 4;
            lVar11 = local_118;
            lVar13 = local_f8;
            lVar16 = local_110;
            lVar17 = local_108;
          } while (lVar9 < (longlong)uVar15);
        }
        LOCK();
        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
        UNLOCK();
        if (local_128 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
        }
        LOCK();
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + -1;
        UNLOCK();
        if (local_124 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
        }
        LOCK();
        *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + -1;
        UNLOCK();
        if (local_120 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar17 + 0x20));
        }
        if (lVar13 != 0) {
          *(undefined4 *)(lVar13 + 0x14) = 1;
        }
        FEntityAllocationIterator::operator++(&local_98);
        bVar5 = FEntityAllocationIterator::operator!=(&local_98,&local_80);
      } while (bVar5);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_80);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_98);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneEntitySystemLinker::TagInvalidBoundObjects'::__l2::<lambda_1>_&> @ 146112d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FObjectKey>_>
::Iterate_PerEntityImpl<_UMovieSceneEntitySystemLinker::TagInvalidBoundObjects_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FObjectKey>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  FUObjectItem *pFVar10;
  longlong lVar11;
  longlong lVar12;
  EEntityThreadingModel EVar13;
  longlong lVar14;
  undefined2 local_98 [4];
  EEntityThreadingModel local_90;
  int local_8c;
  FEntityAllocationProxy local_88;
  FWeakObjectPtr local_78;
  longlong local_70;
  FEntityAllocationIterator local_68;
  FEntityAllocationIterator local_50;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1) {
    EVar13 = param_1->ThreadingModel;
    local_90 = EVar13;
    if ((param_2 == (FEntityComponentFilter *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x405,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FEntityAllocationIterator::FEntityAllocationIterator(&local_68,param_1,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_50,param_1);
    bVar7 = FEntityAllocationIterator::operator!=(&local_68,&local_50);
    if (bVar7) {
      do {
        FEntityAllocationIterator::operator*(&local_68,&local_88);
        lVar2 = *(longlong *)
                 (*(longlong *)&(local_88.Manager)->EntityAllocations +
                 (longlong)local_88.AllocationIndex * 8);
        if (EVar13 == NoThreading) {
          *(undefined4 *)(lVar2 + 0x14) = 0;
          lVar12 = lVar2;
        }
        else {
          lVar12 = 0;
        }
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_88.Manager)->EntityAllocations +
                 (longlong)local_88.AllocationIndex * 8);
        lVar14 = *(longlong *)(lVar3 + 0x28);
        lVar11 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + lVar14;
        for (; local_70 = lVar12, lVar14 != lVar11; lVar14 = lVar14 + 0x38) {
          if (*(short *)(lVar14 + 0x36) == *(short *)&(this->Accessors).field_0x2)
          goto LAB_146112ec7;
        }
        lVar14 = 0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_146112ec7:
        local_8c = *(int *)(lVar3 + 0x14);
        if (local_8c == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar14 + 0x20));
        }
        LOCK();
        *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
        UNLOCK();
        lVar11 = 0;
        uVar1 = *(ushort *)(lVar2 + 0xe);
        lVar2 = *(longlong *)(lVar14 + 0x18);
        lVar3 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)&(local_88.Manager)->EntityAllocations +
                   (longlong)local_88.AllocationIndex * 8) + 0x18);
        if ((ulonglong)uVar1 != 0) {
          do {
            local_98[0] = *(undefined2 *)(lVar3 + lVar11 * 2);
            local_78.ObjectIndex = *(int *)(lVar2 + lVar11 * 8);
            local_78.ObjectSerialNumber = *(int *)(lVar2 + 4 + lVar11 * 8);
            pUVar9 = FWeakObjectPtr::Get(&local_78);
            if (((pUVar9 == (UObject *)0x0) || ((*(uint *)&pUVar9->field_0x8 >> 0x1e & 1) != 0)) ||
               (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar9->field_0xc),
               ((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
              pTVar4 = param_3->ExpiredBoundObjects;
              pFVar5 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar5 <= (FScriptContainerElement *)local_98) &&
                  ((FScriptContainerElement *)local_98 < pFVar5 + (longlong)pTVar4->ArrayMax * 2))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar8 = pTVar4->ArrayNum;
              if (iVar8 == pTVar4->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x202,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
              }
              pTVar4->ArrayNum = iVar8 + 1;
              *(undefined2 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 2) = local_98[0];
            }
            lVar11 = lVar11 + 1;
            lVar12 = local_70;
          } while (lVar11 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + -1;
        UNLOCK();
        if (local_8c == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar14 + 0x20));
        }
        if (lVar12 != 0) {
          *(undefined4 *)(lVar12 + 0x14) = 1;
        }
        FEntityAllocationIterator::operator++(&local_68);
        bVar7 = FEntityAllocationIterator::operator!=(&local_68,&local_50);
        EVar13 = local_90;
      } while (bVar7);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_50);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_68);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings'::__l2::<lambda_1>_&> @ 1461130a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
::
Iterate_PerEntityImpl<_UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  EEntityThreadingModel EVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined2 local_c8 [4];
  EEntityThreadingModel local_c0;
  FEntityAllocationProxy local_b8;
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_78;
  FEntityAllocationIterator local_70;
  FEntityAllocationIterator local_58;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
  {
    EVar12 = param_1->ThreadingModel;
    local_c0 = EVar12;
    if ((param_2 == (FEntityComponentFilter *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x405,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FEntityAllocationIterator::FEntityAllocationIterator(&local_70,param_1,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,param_1);
    bVar7 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
    if (bVar7) {
      do {
        FEntityAllocationIterator::operator*(&local_70,&local_b8);
        lVar2 = *(longlong *)
                 (*(longlong *)&(local_b8.Manager)->EntityAllocations +
                 (longlong)local_b8.AllocationIndex * 8);
        if (EVar12 == NoThreading) {
          *(undefined4 *)(lVar2 + 0x14) = 0;
          lVar11 = lVar2;
        }
        else {
          lVar11 = 0;
        }
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_b8.Manager)->EntityAllocations +
                 (longlong)local_b8.AllocationIndex * 8);
        lVar13 = *(longlong *)(lVar3 + 0x28);
        lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + lVar13;
        for (; local_90 = lVar11, lVar13 != lVar9; lVar13 = lVar13 + 0x38) {
          local_a0 = lVar13;
          if (*(short *)(lVar13 + 0x36) == *(short *)&(this->Accessors).field_0x4)
          goto LAB_146113206;
        }
        lVar13 = 0;
        local_a0 = 0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_146113206:
        local_a4 = *(int *)(lVar3 + 0x14);
        if (local_a4 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x20));
        }
        LOCK();
        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
        UNLOCK();
        local_78 = *(longlong *)(lVar13 + 0x18);
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_b8.Manager)->EntityAllocations +
                 (longlong)local_b8.AllocationIndex * 8);
        lVar9 = *(longlong *)(lVar3 + 0x28);
        lVar10 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + lVar9;
        for (; lVar9 != lVar10; lVar9 = lVar9 + 0x38) {
          local_98 = lVar9;
          if (*(short *)(lVar9 + 0x36) == *(short *)&(this->Accessors).field_0x2)
          goto LAB_146113295;
        }
        lVar9 = 0;
        local_98 = 0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_146113295:
        iVar8 = *(int *)(lVar3 + 0x14);
        local_a8 = iVar8;
        if (iVar8 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar9 + 0x20));
        }
        lVar10 = local_78;
        LOCK();
        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
        UNLOCK();
        iVar14 = 0;
        lVar15 = 0;
        uVar1 = *(ushort *)(lVar2 + 0xe);
        lVar2 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)&(local_b8.Manager)->EntityAllocations +
                   (longlong)local_b8.AllocationIndex * 8) + 0x18);
        lVar3 = *(longlong *)(lVar9 + 0x18);
        if ((ulonglong)uVar1 != 0) {
          do {
            local_c8[0] = *(undefined2 *)(lVar2 + lVar15 * 2);
            bVar7 = FInstanceRegistry::IsBindingInvalidated
                              (param_3->InstanceRegistry,(FGuid *)((longlong)iVar14 * 0x10 + lVar10)
                               ,*(FInstanceHandle *)(lVar3 + lVar15 * 4));
            if (bVar7) {
              pTVar4 = param_3->StaleEntities;
              pFVar5 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar5 <= (FScriptContainerElement *)local_c8) &&
                  ((FScriptContainerElement *)local_c8 < pFVar5 + (longlong)pTVar4->ArrayMax * 2))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar8 = pTVar4->ArrayNum;
              if (iVar8 == pTVar4->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x202,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
              }
              pTVar4->ArrayNum = iVar8 + 1;
              *(undefined2 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 2) = local_c8[0];
            }
            iVar14 = iVar14 + 1;
            lVar15 = lVar15 + 1;
            lVar11 = local_90;
            lVar13 = local_a0;
            lVar9 = local_98;
            iVar8 = local_a8;
          } while (lVar15 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + -1;
        UNLOCK();
        if (local_a4 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 0x20));
        }
        LOCK();
        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
        UNLOCK();
        if (iVar8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar9 + 0x20));
        }
        if (lVar11 != 0) {
          *(undefined4 *)(lVar11 + 0x14) = 1;
        }
        FEntityAllocationIterator::operator++(&local_70);
        bVar7 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
        EVar12 = local_c0;
      } while (bVar7);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_70);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings'::__l2::<lambda_1>_&> @ 146113480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneObjectBindingID>_>
::
Iterate_PerEntityImpl<_UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneObjectBindingID>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FInstanceHandle *pFVar10;
  longlong lVar11;
  EEntityThreadingModel EVar12;
  longlong lVar13;
  FInstanceHandle FVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined2 local_118 [4];
  EEntityThreadingModel local_110;
  FInstanceHandle local_10e;
  FEntityAllocationProxy local_108;
  uint local_f8;
  int local_f4;
  int local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  TReferenceControllerBase<1> *local_c8;
  undefined1 local_c0 [16];
  undefined8 *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  FEntityAllocationIterator local_90;
  FMovieSceneObjectBindingID local_78;
  FEntityAllocationIterator local_58;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
  {
    EVar12 = param_1->ThreadingModel;
    local_110 = EVar12;
    if ((param_2 == (FEntityComponentFilter *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x405,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FEntityAllocationIterator::FEntityAllocationIterator(&local_90,param_1,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,param_1);
    bVar8 = FEntityAllocationIterator::operator!=(&local_90,&local_58);
    if (bVar8) {
      do {
        lVar17 = 0;
        FEntityAllocationIterator::operator*(&local_90,&local_108);
        lVar19 = *(longlong *)
                  (*(longlong *)&(local_108.Manager)->EntityAllocations +
                  (longlong)local_108.AllocationIndex * 8);
        lVar13 = lVar17;
        if (EVar12 == NoThreading) {
          *(undefined4 *)(lVar19 + 0x14) = 0;
          lVar13 = lVar19;
        }
        lVar2 = *(longlong *)
                 (*(longlong *)&(local_108.Manager)->EntityAllocations +
                 (longlong)local_108.AllocationIndex * 8);
        local_e8 = *(longlong *)(lVar2 + 0x28);
        lVar11 = (ulonglong)*(ushort *)(lVar2 + 0xc) * 0x38 + local_e8;
        for (; local_d8 = lVar13, local_e8 != lVar11; local_e8 = local_e8 + 0x38) {
          lVar18 = local_e8;
          if (*(short *)(local_e8 + 0x36) == *(short *)&(this->Accessors).field_0x4)
          goto LAB_1461135f7;
        }
        local_e8 = 0;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        lVar18 = lVar17;
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
LAB_1461135f7:
        local_f0 = *(int *)(lVar2 + 0x14);
        if (local_f0 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar18 + 0x20));
        }
        LOCK();
        *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
        UNLOCK();
        local_b0 = *(undefined8 **)(lVar18 + 0x18);
        lVar2 = *(longlong *)
                 (*(longlong *)&(local_108.Manager)->EntityAllocations +
                 (longlong)local_108.AllocationIndex * 8);
        local_e0 = *(longlong *)(lVar2 + 0x28);
        lVar11 = (ulonglong)*(ushort *)(lVar2 + 0xc) * 0x38 + local_e0;
        for (; local_e0 != lVar11; local_e0 = local_e0 + 0x38) {
          lVar16 = local_e0;
          if (*(short *)(local_e0 + 0x36) == *(short *)&(this->Accessors).field_0x2)
          goto LAB_146113692;
        }
        local_e0 = 0;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        lVar16 = lVar17;
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
LAB_146113692:
        iVar9 = *(int *)(lVar2 + 0x14);
        local_f4 = iVar9;
        if (iVar9 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
        }
        LOCK();
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
        UNLOCK();
        local_98 = *(longlong *)(lVar16 + 0x18);
        local_a0 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)&(local_108.Manager)->EntityAllocations +
                      (longlong)local_108.AllocationIndex * 8) + 0x18);
        local_a8 = (ulonglong)*(ushort *)(lVar19 + 0xe);
        puVar15 = local_b0;
        if (local_a8 != 0) {
          do {
            local_118[0] = *(undefined2 *)(local_a0 + lVar17 * 2);
            FVar14 = *(FInstanceHandle *)(local_98 + lVar17 * 4);
            local_78.Guid._0_8_ = *puVar15;
            local_78.Guid._8_8_ = puVar15[1];
            local_78._16_8_ = puVar15[2];
            lVar19 = (ulonglong)((uint)FVar14 & 0xffff) * 0x140 +
                     *(longlong *)&param_3->InstanceRegistry->Instances;
            pTVar3 = *(TReferenceControllerBase<1> **)(lVar19 + 0x120);
            uVar1 = *(uint *)(lVar19 + 0x128);
            local_d0 = *(undefined8 *)(lVar19 + 0x118);
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c8 = pTVar3;
            FMovieSceneObjectBindingID::ResolveSequenceID
                      (&local_78,(FMovieSceneSequenceID)(uint)&local_f8,
                       (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(ulonglong)uVar1
                      );
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            if (local_f8 == uVar1) {
LAB_1461137f2:
              bVar8 = FInstanceRegistry::IsBindingInvalidated
                                (param_3->InstanceRegistry,&local_78.Guid,FVar14);
              if (bVar8) goto LAB_146113806;
            }
            else {
              uVar1 = *(uint *)(lVar19 + 0x13a);
              if (((short)uVar1 != (short)*(undefined4 *)(lVar19 + 0x132)) ||
                 ((short)(uVar1 >> 0x10) != (short)((uint)*(undefined4 *)(lVar19 + 0x132) >> 0x10)))
              {
                lVar19 = (ulonglong)(uVar1 & 0xffff) * 0x140 +
                         *(longlong *)&param_3->InstanceRegistry->Instances;
              }
              plVar4 = *(longlong **)(lVar19 + 0x108);
              if (plVar4 == (longlong *)0x0) {
                local_10e.InstanceID = 0xffff;
                local_10e.InstanceSerial = 0;
                pFVar10 = &local_10e;
              }
              else {
                pFVar10 = (FInstanceHandle *)(**(code **)(*plVar4 + 0x58))(plVar4,local_c0);
              }
              FVar14 = *pFVar10;
              bVar8 = FInstanceRegistry::IsHandleValid(param_3->InstanceRegistry,FVar14);
              if (bVar8) goto LAB_1461137f2;
LAB_146113806:
              pTVar5 = param_3->StaleEntities;
              pFVar6 = (pTVar5->AllocatorInstance).Data;
              if (((pFVar6 <= (FScriptContainerElement *)local_118) &&
                  ((FScriptContainerElement *)local_118 < pFVar6 + (longlong)pTVar5->ArrayMax * 2))
                 && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar9 = pTVar5->ArrayNum;
              if (iVar9 == pTVar5->ArrayMax) {
                iVar9 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x202,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
              }
              pTVar5->ArrayNum = iVar9 + 1;
              *(undefined2 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 2) = local_118[0]
              ;
            }
            lVar17 = lVar17 + 1;
            lVar13 = local_d8;
            lVar16 = local_e0;
            puVar15 = puVar15 + 3;
            lVar18 = local_e8;
            iVar9 = local_f4;
          } while (lVar17 < (longlong)local_a8);
        }
        LOCK();
        *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + -1;
        UNLOCK();
        if (local_f0 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar18 + 0x20));
        }
        LOCK();
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + -1;
        UNLOCK();
        if (iVar9 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
        }
        if (lVar13 != 0) {
          *(undefined4 *)(lVar13 + 0x14) = 1;
        }
        FEntityAllocationIterator::operator++(&local_90);
        bVar8 = FEntityAllocationIterator::operator!=(&local_90,&local_58);
        EVar12 = local_110;
      } while (bVar8);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_90);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneSpawnablesSystem::OnRun'::__l5::<lambda_1>_&> @ 146113980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
::Iterate_PerEntityImpl<_UMovieSceneSpawnablesSystem::OnRun_::__l5::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  EEntityThreadingModel EVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined2 local_c8 [4];
  EEntityThreadingModel local_c0;
  FEntityAllocationProxy local_b8;
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_78;
  FEntityAllocationIterator local_70;
  FEntityAllocationIterator local_58;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
  {
    EVar12 = param_1->ThreadingModel;
    local_c0 = EVar12;
    if ((param_2 == (FEntityComponentFilter *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x405,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FEntityAllocationIterator::FEntityAllocationIterator(&local_70,param_1,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,param_1);
    bVar7 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
    if (bVar7) {
      do {
        FEntityAllocationIterator::operator*(&local_70,&local_b8);
        lVar2 = *(longlong *)
                 (*(longlong *)&(local_b8.Manager)->EntityAllocations +
                 (longlong)local_b8.AllocationIndex * 8);
        if (EVar12 == NoThreading) {
          *(undefined4 *)(lVar2 + 0x14) = 0;
          lVar11 = lVar2;
        }
        else {
          lVar11 = 0;
        }
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_b8.Manager)->EntityAllocations +
                 (longlong)local_b8.AllocationIndex * 8);
        lVar13 = *(longlong *)(lVar3 + 0x28);
        lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + lVar13;
        for (; local_90 = lVar11, lVar13 != lVar9; lVar13 = lVar13 + 0x38) {
          local_a0 = lVar13;
          if (*(short *)(lVar13 + 0x36) == *(short *)&(this->Accessors).field_0x4)
          goto LAB_146113ae6;
        }
        lVar13 = 0;
        local_a0 = 0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_146113ae6:
        local_a4 = *(int *)(lVar3 + 0x14);
        if (local_a4 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x20));
        }
        LOCK();
        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
        UNLOCK();
        local_78 = *(longlong *)(lVar13 + 0x18);
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_b8.Manager)->EntityAllocations +
                 (longlong)local_b8.AllocationIndex * 8);
        lVar9 = *(longlong *)(lVar3 + 0x28);
        lVar10 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + lVar9;
        for (; lVar9 != lVar10; lVar9 = lVar9 + 0x38) {
          local_98 = lVar9;
          if (*(short *)(lVar9 + 0x36) == *(short *)&(this->Accessors).field_0x2)
          goto LAB_146113b75;
        }
        lVar9 = 0;
        local_98 = 0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_146113b75:
        iVar8 = *(int *)(lVar3 + 0x14);
        local_a8 = iVar8;
        if (iVar8 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar9 + 0x20));
        }
        lVar10 = local_78;
        LOCK();
        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
        UNLOCK();
        iVar14 = 0;
        lVar15 = 0;
        uVar1 = *(ushort *)(lVar2 + 0xe);
        lVar2 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)&(local_b8.Manager)->EntityAllocations +
                   (longlong)local_b8.AllocationIndex * 8) + 0x18);
        lVar3 = *(longlong *)(lVar9 + 0x18);
        if ((ulonglong)uVar1 != 0) {
          do {
            local_c8[0] = *(undefined2 *)(lVar2 + lVar15 * 2);
            bVar7 = FInstanceRegistry::IsBindingInvalidated
                              (param_3->InstanceRegistry,(FGuid *)((longlong)iVar14 * 0x10 + lVar10)
                               ,*(FInstanceHandle *)(lVar3 + lVar15 * 4));
            if (bVar7) {
              pTVar4 = param_3->StaleSpawnables;
              pFVar5 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar5 <= (FScriptContainerElement *)local_c8) &&
                  ((FScriptContainerElement *)local_c8 < pFVar5 + (longlong)pTVar4->ArrayMax * 2))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar8 = pTVar4->ArrayNum;
              if (iVar8 == pTVar4->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x202,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
              }
              pTVar4->ArrayNum = iVar8 + 1;
              *(undefined2 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 2) = local_c8[0];
            }
            iVar14 = iVar14 + 1;
            lVar15 = lVar15 + 1;
            lVar11 = local_90;
            lVar13 = local_a0;
            lVar9 = local_98;
            iVar8 = local_a8;
          } while (lVar15 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + -1;
        UNLOCK();
        if (local_a4 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 0x20));
        }
        LOCK();
        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
        UNLOCK();
        if (iVar8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar9 + 0x20));
        }
        if (lVar11 != 0) {
          *(undefined4 *)(lVar11 + 0x14) = 1;
        }
        FEntityAllocationIterator::operator++(&local_70);
        bVar7 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
        EVar12 = local_c0;
      } while (bVar7);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_70);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_2>_&> @ 146113d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
::Iterate_PerEntityImpl<_UMovieSceneSpawnablesSystem::OnRun_::__l2::<lambda_2>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_2> *param_3)

{
  EEntityThreadingModel EVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  FEntityAllocationProxy local_a0;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_70;
  FEntityAllocationIterator local_68;
  FEntityAllocationIterator local_50;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
  {
    EVar1 = param_1->ThreadingModel;
    if ((param_2 == (FEntityComponentFilter *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x405,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FEntityAllocationIterator::FEntityAllocationIterator(&local_68,param_1,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_50,param_1);
    bVar6 = FEntityAllocationIterator::operator!=(&local_68,&local_50);
    if (bVar6) {
      do {
        FEntityAllocationIterator::operator*(&local_68,&local_a0);
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_a0.Manager)->EntityAllocations +
                 (longlong)local_a0.AllocationIndex * 8);
        if (EVar1 == NoThreading) {
          *(undefined4 *)(lVar3 + 0x14) = 0;
          lVar9 = lVar3;
        }
        else {
          lVar9 = 0;
        }
        lVar4 = *(longlong *)
                 (*(longlong *)&(local_a0.Manager)->EntityAllocations +
                 (longlong)local_a0.AllocationIndex * 8);
        lVar11 = *(longlong *)(lVar4 + 0x28);
        lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) * 0x38 + lVar11;
        for (; local_80 = lVar9, lVar11 != lVar7; lVar11 = lVar11 + 0x38) {
          local_88 = lVar11;
          if (*(short *)(lVar11 + 0x36) == *(short *)&(this->Accessors).field_0x4)
          goto LAB_146113ee1;
        }
        lVar11 = 0;
        local_88 = 0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_146113ee1:
        local_8c = *(int *)(lVar4 + 0x14);
        if (local_8c == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
        }
        LOCK();
        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
        UNLOCK();
        local_70 = *(longlong *)(lVar11 + 0x18);
        lVar4 = *(longlong *)
                 (*(longlong *)&(local_a0.Manager)->EntityAllocations +
                 (longlong)local_a0.AllocationIndex * 8);
        lVar7 = *(longlong *)(lVar4 + 0x28);
        lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) * 0x38 + lVar7;
        for (; lVar7 != lVar8; lVar7 = lVar7 + 0x38) {
          if (*(short *)(lVar7 + 0x36) == *(short *)&(this->Accessors).field_0x2)
          goto LAB_146113f68;
        }
        lVar7 = 0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_146113f68:
        iVar12 = *(int *)(lVar4 + 0x14);
        local_90 = iVar12;
        if (iVar12 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x20));
        }
        lVar8 = local_70;
        LOCK();
        *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
        UNLOCK();
        iVar13 = 0;
        lVar10 = 0;
        uVar2 = *(ushort *)(lVar3 + 0xe);
        lVar3 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)&(local_a0.Manager)->EntityAllocations +
                   (longlong)local_a0.AllocationIndex * 8) + 0x18);
        lVar4 = *(longlong *)(lVar7 + 0x18);
        if ((ulonglong)uVar2 != 0) {
          do {
            `UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_2>::operator()
                      (param_3,(FMovieSceneEntityID)*(ushort *)(lVar3 + lVar10 * 2),
                       *(FInstanceHandle *)(lVar4 + lVar10 * 4),
                       (FGuid *)((longlong)iVar13 * 0x10 + lVar8));
            iVar13 = iVar13 + 1;
            lVar10 = lVar10 + 1;
            lVar9 = local_80;
            lVar11 = local_88;
            iVar12 = local_90;
          } while (lVar10 < (longlong)(ulonglong)uVar2);
        }
        LOCK();
        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
        UNLOCK();
        if (local_8c == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
        }
        LOCK();
        *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
        UNLOCK();
        if (iVar12 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0x20));
        }
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0x14) = 1;
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

// Iterate_PerEntityImpl<`UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_4>_&> @ 1461140b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
::Iterate_PerEntityImpl<_UMovieSceneSpawnablesSystem::OnRun_::__l2::<lambda_4>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_4> *param_3)

{
  EEntityThreadingModel EVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  FEntityAllocationProxy local_a0;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_70;
  FEntityAllocationIterator local_68;
  FEntityAllocationIterator local_50;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
  {
    EVar1 = param_1->ThreadingModel;
    if ((param_2 == (FEntityComponentFilter *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x405,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FEntityAllocationIterator::FEntityAllocationIterator(&local_68,param_1,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_50,param_1);
    bVar6 = FEntityAllocationIterator::operator!=(&local_68,&local_50);
    if (bVar6) {
      do {
        FEntityAllocationIterator::operator*(&local_68,&local_a0);
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_a0.Manager)->EntityAllocations +
                 (longlong)local_a0.AllocationIndex * 8);
        if (EVar1 == NoThreading) {
          *(undefined4 *)(lVar3 + 0x14) = 0;
          lVar9 = lVar3;
        }
        else {
          lVar9 = 0;
        }
        lVar4 = *(longlong *)
                 (*(longlong *)&(local_a0.Manager)->EntityAllocations +
                 (longlong)local_a0.AllocationIndex * 8);
        lVar11 = *(longlong *)(lVar4 + 0x28);
        lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) * 0x38 + lVar11;
        for (; local_80 = lVar9, lVar11 != lVar7; lVar11 = lVar11 + 0x38) {
          local_88 = lVar11;
          if (*(short *)(lVar11 + 0x36) == *(short *)&(this->Accessors).field_0x4)
          goto LAB_146114231;
        }
        lVar11 = 0;
        local_88 = 0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_146114231:
        local_8c = *(int *)(lVar4 + 0x14);
        if (local_8c == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
        }
        LOCK();
        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
        UNLOCK();
        local_70 = *(longlong *)(lVar11 + 0x18);
        lVar4 = *(longlong *)
                 (*(longlong *)&(local_a0.Manager)->EntityAllocations +
                 (longlong)local_a0.AllocationIndex * 8);
        lVar7 = *(longlong *)(lVar4 + 0x28);
        lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) * 0x38 + lVar7;
        for (; lVar7 != lVar8; lVar7 = lVar7 + 0x38) {
          if (*(short *)(lVar7 + 0x36) == *(short *)&(this->Accessors).field_0x2)
          goto LAB_1461142b8;
        }
        lVar7 = 0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_1461142b8:
        iVar12 = *(int *)(lVar4 + 0x14);
        local_90 = iVar12;
        if (iVar12 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x20));
        }
        lVar8 = local_70;
        LOCK();
        *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
        UNLOCK();
        iVar13 = 0;
        lVar10 = 0;
        uVar2 = *(ushort *)(lVar3 + 0xe);
        lVar3 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)&(local_a0.Manager)->EntityAllocations +
                   (longlong)local_a0.AllocationIndex * 8) + 0x18);
        lVar4 = *(longlong *)(lVar7 + 0x18);
        if ((ulonglong)uVar2 != 0) {
          do {
            `UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_4>::operator()
                      (param_3,(FMovieSceneEntityID)*(ushort *)(lVar3 + lVar10 * 2),
                       *(FInstanceHandle *)(lVar4 + lVar10 * 4),
                       (FGuid *)((longlong)iVar13 * 0x10 + lVar8));
            iVar13 = iVar13 + 1;
            lVar10 = lVar10 + 1;
            lVar9 = local_80;
            lVar11 = local_88;
            iVar12 = local_90;
          } while (lVar10 < (longlong)(ulonglong)uVar2);
        }
        LOCK();
        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
        UNLOCK();
        if (local_8c == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
        }
        LOCK();
        *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
        UNLOCK();
        if (iVar12 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0x20));
        }
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0x14) = 1;
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

// Iterate_PerEntityImpl<`UMovieSceneEntitySystemLinker::CleanGarbage'::__l2::<lambda_2>_> @ 146114400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>_>
::Iterate_PerEntityImpl<_UMovieSceneEntitySystemLinker::CleanGarbage_::__l2::<lambda_2>_>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_2> *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  EEntityThreadingModel EVar12;
  longlong lVar13;
  undefined2 local_a8 [4];
  EEntityThreadingModel local_a0;
  int local_9c;
  int local_98;
  FEntityAllocationProxy local_90;
  longlong local_80;
  longlong local_78;
  FEntityAllocationIterator local_70;
  FEntityAllocationIterator local_58;
  
  if (*(short *)&this->Accessors != -1 && *(short *)&(this->Accessors).field_0x2 != -1) {
    EVar12 = param_1->ThreadingModel;
    local_a0 = EVar12;
    if ((param_2 == (FEntityComponentFilter *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x405,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FEntityAllocationIterator::FEntityAllocationIterator(&local_70,param_1,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,param_1);
    bVar7 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
    if (bVar7) {
      do {
        FEntityAllocationIterator::operator*(&local_70,&local_90);
        lVar2 = *(longlong *)
                 (*(longlong *)&(local_90.Manager)->EntityAllocations +
                 (longlong)local_90.AllocationIndex * 8);
        if (EVar12 == NoThreading) {
          *(undefined4 *)(lVar2 + 0x14) = 0;
          lVar11 = lVar2;
        }
        else {
          lVar11 = 0;
        }
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_90.Manager)->EntityAllocations +
                 (longlong)local_90.AllocationIndex * 8);
        lVar13 = *(longlong *)(lVar3 + 0x28);
        lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + lVar13;
        for (; local_80 = lVar11, lVar13 != lVar9; lVar13 = lVar13 + 0x38) {
          if (*(short *)(lVar13 + 0x36) == *(short *)&(this->Accessors).field_0x2)
          goto LAB_146114587;
        }
        lVar13 = 0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_146114587:
        local_98 = *(int *)(lVar3 + 0x14);
        if (local_98 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x20));
        }
        LOCK();
        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
        UNLOCK();
        local_78 = *(longlong *)(lVar13 + 0x18);
        lVar3 = *(longlong *)
                 (*(longlong *)&(local_90.Manager)->EntityAllocations +
                 (longlong)local_90.AllocationIndex * 8);
        lVar9 = *(longlong *)(lVar3 + 0x28);
        lVar10 = (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x38 + lVar9;
        for (; lVar9 != lVar10; lVar9 = lVar9 + 0x38) {
          if (*(short *)(lVar9 + 0x36) == *(short *)&this->Accessors) goto LAB_14611460e;
        }
        lVar9 = 0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_14611460e:
        iVar8 = *(int *)(lVar3 + 0x14);
        local_9c = iVar8;
        if (iVar8 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(lVar9 + 0x20));
        }
        lVar3 = local_78;
        LOCK();
        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
        UNLOCK();
        uVar1 = *(ushort *)(lVar2 + 0xe);
        lVar10 = 0;
        lVar2 = *(longlong *)(lVar9 + 0x18);
        if ((ulonglong)uVar1 != 0) {
          do {
            local_a8[0] = *(undefined2 *)(lVar3 + lVar10 * 2);
            if (*(longlong *)(lVar2 + lVar10 * 8) == 0) {
              pTVar4 = param_3->UnresolvedEntities;
              pFVar5 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar5 <= (FScriptContainerElement *)local_a8) &&
                  ((FScriptContainerElement *)local_a8 < pFVar5 + (longlong)pTVar4->ArrayMax * 2))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar8 = pTVar4->ArrayNum;
              if (iVar8 == pTVar4->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x202,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
              }
              pTVar4->ArrayNum = iVar8 + 1;
              *(undefined2 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 2) = local_a8[0];
            }
            lVar10 = lVar10 + 1;
            lVar11 = local_80;
            iVar8 = local_9c;
          } while (lVar10 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + -1;
        UNLOCK();
        if (local_98 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 0x20));
        }
        LOCK();
        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
        UNLOCK();
        if (iVar8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar9 + 0x20));
        }
        if (lVar11 != 0) {
          *(undefined4 *)(lVar11 + 0x14) = 1;
        }
        FEntityAllocationIterator::operator++(&local_70);
        bVar7 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
        EVar12 = local_a0;
      } while (bVar7);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_70);
  }
  return;
}

// LowerBoundInternal<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 1461147e0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>
           *param_1,int param_2,FMovieSceneSequenceID *param_3,FKeyForward param_4,
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

// LowerBoundInternal<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int,unsigned_short,unsigned_short_UE::MovieScene::FDirectedGraph::FDirectionalEdge::*,TLess<void>_> @ 146114830

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int,unsigned_short,unsigned_short_UE::MovieScene::FDirectedGraph::FDirectionalEdge::*,TLess<void>_>
          (FDirectionalEdge *param_1,int param_2,ushort *param_3,pdm_b0ea94c0 param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ushort *)((longlong)&param_1[iVar1].FromNode + (longlong)(int)param_4) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int,UE::MovieScene::FDirectedGraph::FDirectionalEdge,FIdentityFunctor,TLess<void>_> @ 146114890

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int,UE::MovieScene::FDirectedGraph::FDirectionalEdge,FIdentityFunctor,TLess<void>_>
          (FDirectionalEdge *param_1,int param_2,FDirectionalEdge *param_3,FIdentityFunctor param_4,
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
      bVar4 = param_1[iVar1].FromNode < param_3->FromNode;
      if (param_1[iVar1].FromNode == param_3->FromNode) {
        bVar4 = param_1[iVar1].ToNode < param_3->ToNode;
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

// LowerBoundInternal<FMovieSceneDeterminismFence_const_,int,FFrameNumber,FFrameNumber_FMovieSceneDeterminismFence::*,TLess<void>_> @ 146114900

int __cdecl
AlgoImpl::
LowerBoundInternal<FMovieSceneDeterminismFence_const_,int,FFrameNumber,FFrameNumber_FMovieSceneDeterminismFence::*,TLess<void>_>
          (FMovieSceneDeterminismFence *param_1,int param_2,FFrameNumber *param_3,
          pdm_4b2d305a param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)((longlong)&param_1[iVar1].FrameNumber.Value + (longlong)(int)param_4) <
          param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MakeShared<UE::MovieScene::FInitialValueCache,1> @ 146114950

TSharedRef<UE::MovieScene::FInitialValueCache,1> * __cdecl
MakeShared<UE::MovieScene::FInitialValueCache,1>
          (TSharedRef<UE::MovieScene::FInitialValueCache,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::MovieScene::FInitialValueCache,1> *pTVar4;
  
  pTVar3 = operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FInitialValueCache *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFInitialValueCache_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar3[4]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[4]._padding_ = 0xffffffff;
    pTVar3[5]._padding_ = 0;
    __return_storage_ptr__->Object = (FInitialValueCache *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::MovieScene::FInitialValueCache,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UMovieSceneEntitySystem> @ 146114cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEntitySystem * __cdecl
NewObject<UMovieSceneEntitySystem>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneEntitySystem *pUVar2;
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
  pUVar1 = UMovieSceneEntitySystem::StaticClass();
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
  pUVar2 = (UMovieSceneEntitySystem *)
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

// NewObject<UMovieSceneEntitySystemLinker> @ 146114df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __cdecl NewObject<UMovieSceneEntitySystemLinker>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneEntitySystemLinker::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneEntitySystemLinker *)
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

// NewObject<UMovieSceneEntitySystemLinker> @ 146114e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __cdecl
NewObject<UMovieSceneEntitySystemLinker>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
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
  pUVar1 = UMovieSceneEntitySystemLinker::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneEntitySystemLinker *)
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

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<`UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder'::__l2::FSortableID>_> @ 146115800

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID>_>
          (ushort param_1,
          ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder'::__l2::FSortableID>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// Reverse<unsigned_short> @ 146116790

void __cdecl AlgoImpl::Reverse<unsigned_short>(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    puVar2 = param_1 + (param_2 + -1);
    do {
      uVar1 = param_1[lVar3];
      param_1[lVar3] = *puVar2;
      lVar3 = lVar3 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// Reverse<TRange<FFrameTime>_> @ 1461167e0

void __cdecl AlgoImpl::Reverse<TRange<FFrameTime>_>(TRange<FFrameTime> *param_1,int param_2)

{
  FFrameTime FVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined3 uVar4;
  FFrameNumber FVar5;
  TEnumAsByte<ERangeBoundTypes::Type> TVar6;
  undefined3 uVar7;
  FFrameNumber FVar8;
  TRange<FFrameTime> *pTVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar9 = param_1 + (param_2 + -1);
    do {
      FVar1 = (param_1->UpperBound).Value;
      uVar4 = *(undefined3 *)&(pTVar9->LowerBound).field_0x1;
      FVar5.Value = (pTVar9->LowerBound).Value.FrameNumber.Value;
      uVar2 = *(undefined8 *)&(pTVar9->LowerBound).Value.SubFrame;
      TVar6.Value = (param_1->LowerBound).Type.Value;
      uVar7 = *(undefined3 *)&(param_1->LowerBound).field_0x1;
      FVar8.Value = (param_1->LowerBound).Value.FrameNumber.Value;
      uVar3 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
      (param_1->LowerBound).Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)(pTVar9->LowerBound).Type.Value;
      *(undefined3 *)&(param_1->LowerBound).field_0x1 = uVar4;
      (param_1->LowerBound).Value.FrameNumber = (FFrameNumber)FVar5.Value;
      *(undefined8 *)&(param_1->LowerBound).Value.SubFrame = uVar2;
      (param_1->UpperBound).Value = (pTVar9->UpperBound).Value;
      (pTVar9->LowerBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)TVar6.Value;
      *(undefined3 *)&(pTVar9->LowerBound).field_0x1 = uVar7;
      (pTVar9->LowerBound).Value.FrameNumber = (FFrameNumber)FVar8.Value;
      *(undefined8 *)&(pTVar9->LowerBound).Value.SubFrame = uVar3;
      (pTVar9->UpperBound).Value = FVar1;
      lVar10 = lVar10 + -1;
      param_1 = param_1 + 1;
      pTVar9 = pTVar9 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// Unique<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*,TEqualTo<void>_> @ 1461177e0

int __cdecl
AlgoImpl::
Unique<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*,TEqualTo<void>_>
          (FMovieSceneDeterminismFenceWithSubframe *param_1,int param_2,pdm_ae1cf425 param_3,
          TEqualTo<void> param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FMovieSceneDeterminismFenceWithSubframe *pFVar3;
  FMovieSceneDeterminismFenceWithSubframe *pFVar4;
  FMovieSceneDeterminismFenceWithSubframe *pFVar5;
  FMovieSceneDeterminismFenceWithSubframe *pFVar6;
  float fStack_14;
  float fStack_c;
  
  if (param_2 < 2) {
    return param_2;
  }
  pFVar6 = param_1;
  pFVar5 = param_1;
joined_r0x00014611780b:
  pFVar4 = pFVar5;
  pFVar3 = pFVar6;
  pFVar5 = pFVar4 + 1;
  if (pFVar5 == param_1 + param_2) {
    return (int)(((longlong)pFVar3 + (0xc - (longlong)param_1)) / 0xc);
  }
  uVar1 = *(undefined8 *)((longlong)&(pFVar5->FrameTime).FrameNumber.Value + (longlong)(int)param_3)
  ;
  uVar2 = *(undefined8 *)((longlong)&(pFVar3->FrameTime).FrameNumber.Value + (longlong)(int)param_3)
  ;
  if ((int)uVar2 == (int)uVar1) goto code_r0x000146117825;
  goto LAB_146117832;
code_r0x000146117825:
  fStack_14 = (float)((ulonglong)uVar2 >> 0x20);
  fStack_c = (float)((ulonglong)uVar1 >> 0x20);
  pFVar6 = pFVar3;
  if (fStack_14 != fStack_c) {
LAB_146117832:
    pFVar6 = pFVar3 + 1;
    if (pFVar6 != pFVar5) {
      pFVar6->FrameTime = pFVar5->FrameTime;
      *(undefined4 *)&pFVar3[1].field_0x8 = *(undefined4 *)&pFVar4[1].field_0x8;
    }
  }
  goto joined_r0x00014611780b;
}

// UniqueBy<TArray<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,TSizedDefaultAllocator<32>_>_&,FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*> @ 146117880

int __cdecl
Algo::
UniqueBy<TArray<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,TSizedDefaultAllocator<32>_>_&,FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>
          (TArray<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,TSizedDefaultAllocator<32>_>
           *param_1,pdm_ae1cf425 param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fStackX_c;
  float fStackX_1c;
  
  iVar5 = param_1->ArrayNum;
  if (1 < iVar5) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    pFVar6 = pFVar1;
    pFVar3 = pFVar1;
joined_r0x0001461178a1:
    pFVar4 = pFVar3;
    pFVar2 = pFVar6;
    pFVar3 = pFVar4 + 0xc;
    if (pFVar3 != pFVar1 + (longlong)iVar5 * 0xc) {
      if ((int)*(undefined8 *)(pFVar2 + (int)param_2) == (int)*(undefined8 *)(pFVar3 + (int)param_2)
         ) goto code_r0x0001461178b9;
      goto LAB_1461178c6;
    }
    iVar5 = (int)((longlong)(pFVar2 + (0xc - (longlong)pFVar1)) / 0xc);
  }
  return iVar5;
code_r0x0001461178b9:
  fStackX_c = (float)((ulonglong)*(undefined8 *)(pFVar2 + (int)param_2) >> 0x20);
  fStackX_1c = (float)((ulonglong)*(undefined8 *)(pFVar3 + (int)param_2) >> 0x20);
  pFVar6 = pFVar2;
  if (fStackX_c != fStackX_1c) {
LAB_1461178c6:
    pFVar6 = pFVar2 + 0xc;
    if (pFVar6 != pFVar3) {
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar3;
      *(undefined4 *)(pFVar2 + 0x14) = *(undefined4 *)(pFVar4 + 0x14);
    }
  }
  goto joined_r0x0001461178a1;
}

// UpperBoundInternal<FMovieSceneDeterminismFence_const_,int,FFrameNumber,FFrameNumber_FMovieSceneDeterminismFence::*,TLess<void>_> @ 146117910

int __cdecl
AlgoImpl::
UpperBoundInternal<FMovieSceneDeterminismFence_const_,int,FFrameNumber,FFrameNumber_FMovieSceneDeterminismFence::*,TLess<void>_>
          (FMovieSceneDeterminismFence *param_1,int param_2,FFrameNumber *param_3,
          pdm_4b2d305a param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)((longlong)&param_1[iVar1].FrameNumber.Value + (longlong)(int)param_4) <=
          param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// ~<unnamed-type-Events> @ 14611bcb0

void __thiscall
UMovieSceneEntitySystemLinker::<unnamed-type-Events>::~<unnamed_type_Events>
          (<unnamed_type_Events> *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AbandonLinker).field_0x8,*(int *)&(this->AbandonLinker).field_0x10);
  pvVar1 = *(void **)&(this->AbandonLinker).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AbandonLinker);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AddReferencedObjects).field_0x8,
             *(int *)&(this->AddReferencedObjects).field_0x10);
  pvVar1 = *(void **)&(this->AddReferencedObjects).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AddReferencedObjects);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CleanTaggedGarbage).field_0x8,*(int *)&(this->CleanTaggedGarbage).field_0x10);
  pvVar1 = *(void **)&(this->CleanTaggedGarbage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CleanTaggedGarbage);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->TagGarbage).field_0x8,
             *(int *)&(this->TagGarbage).field_0x10);
  pvVar1 = *(void **)&(this->TagGarbage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TagGarbage);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostSpawnEvent).field_0x8,*(int *)&(this->PostSpawnEvent).field_0x10);
  pvVar1 = *(void **)&(this->PostSpawnEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14611c810

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,_UE::MovieScene::FEntityManager::MutateConditional_::__l2::FConditionalMutationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator() @ 14611f890

UObject * __thiscall
``UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  UObject *pUVar6;
  IMovieScenePlayer *pIVar7;
  undefined8 local_58;
  longlong local_50;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  plVar1 = (longlong *)**(undefined8 **)this;
  pcVar2 = *(code **)(*plVar1 + 0x18);
  local_58 = **(undefined8 **)((longlong)this + 0x20);
  local_50 = (*(undefined8 **)((longlong)this + 0x20))[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)((longlong)this + 0x18);
  uVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x2f8))();
  pUVar6 = (UObject *)
           (*pcVar2)(plVar1,*(undefined8 *)((longlong)this + 8),uVar5,uVar3,&local_58,param_1);
  local_48.Object = (FSharedPlaybackState *)**(undefined8 **)((longlong)this + 0x20);
  local_48.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)((longlong)this + 0x20))[1];
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar7 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_48);
  if (pUVar6 != (UObject *)0x0) {
    puVar4 = *(undefined4 **)((longlong)this + 8);
    local_28 = *puVar4;
    uStack_24 = puVar4[1];
    uStack_20 = puVar4[2];
    uStack_1c = puVar4[3];
    local_18 = **(undefined4 **)((longlong)this + 0x18);
    if (pIVar7 != (IMovieScenePlayer *)0x0) {
      (**(code **)(pIVar7->_padding_ + 0x70))(pIVar7,pUVar6,&local_28);
    }
    local_48.Object =
         (FSharedPlaybackState *)&___7FSpawnTrackPreAnimatedTokenProducer_MovieScene_UE__6B_;
    local_48.SharedReferenceCount.ReferenceController._4_4_ = uStack_24;
    local_48.SharedReferenceCount.ReferenceController._0_4_ = local_28;
    uStack_38 = uStack_20;
    uStack_34 = uStack_1c;
    local_30 = local_18;
    local_2c = param_1;
    FMovieSceneInstancePreAnimatedState::SavePreAnimatedState
              ((FMovieSceneInstancePreAnimatedState *)
               (**(longlong **)((longlong)this + 0x20) + 0x60),pUVar6,
               UE::MovieScene::SpawnableAnimTypeID,(IMovieScenePreAnimatedTokenProducer *)&local_48)
    ;
  }
  return pUVar6;
}

// `scalar_deleting_destructor' @ 146121150

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FGatherTimes>::_scalar_deleting_destructor_
          (TAnonTaskWrapper<UE::MovieScene::FGatherTimes> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121190

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461211c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461211f0

void * __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121250

void * __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461212b0

void * __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121310

void * __thiscall
TGraphTask<UE::MovieScene::TUnstructuredTask<UE::MovieScene::FGatherTimes>_>::
_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TUnstructuredTask<UE::MovieScene::FGatherTimes>_> *this,
          uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121370

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FGatherTimes>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FGatherTimes>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461213b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461213f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121430

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121470

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MovieScene::FInitialValueCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FInitialValueCache,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461214b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MovieScene::FSharedPlaybackState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FSharedPlaybackState,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461214f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MovieScene::FSystemTaskPrerequisites,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FSystemTaskPrerequisites,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121530

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneEntitySystemRunner,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneEntitySystemRunner,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121570

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTrackInstancePropertyBindings,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTrackInstancePropertyBindings,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461215b0

void * __thiscall
UE::MovieScene::TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::FPlayerIndexPlaybackCapability>
::_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::FPlayerIndexPlaybackCapability>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461215f0

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121630

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121670

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461216b0

void * __thiscall
UE::MovieScene::FAddGroupMutation::_scalar_deleting_destructor_
          (FAddGroupMutation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461216f0

void * __thiscall
`UE::MovieScene::FEntityManager::AddMutualComponents'::__l2::FBenignMutation::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121730

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FEntityManager::_scalar_deleting_destructor_(FEntityManager *this,uint param_1)

{
  ~FEntityManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121770

void * __thiscall
UE::MovieScene::FInitialValueMutation::_scalar_deleting_destructor_
          (FInitialValueMutation *this,uint param_1)

{
  ~FInitialValueMutation(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461217b0

void * __thiscall
UE::MovieScene::FRemoveMultipleMutation::_scalar_deleting_destructor_
          (FRemoveMultipleMutation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461217f0

void * __thiscall
UE::MovieScene::FRemoveSingleMutation::_scalar_deleting_destructor_
          (FRemoveSingleMutation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121830

void * __thiscall
UE::MovieScene::FSequenceUpdater_Flat::_scalar_deleting_destructor_
          (FSequenceUpdater_Flat *this,uint param_1)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FSequenceUpdater_Flat_MovieScene_UE__6B_;
  *(undefined4 *)&(this->CachedConditionResults).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedConditionResults).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedConditionResults);
  (this->CachedPerTickConditionalEntities).HashSize = 0;
  FVar2 = (this->CachedPerTickConditionalEntities).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedPerTickConditionalEntities).Elements);
  if (((this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar3 = (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar3 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7ISequenceUpdater_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461218e0

void * __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::_scalar_deleting_destructor_
          (FSequenceUpdater_Hierarchical *this,uint param_1)

{
  void *pvVar1;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar2;
  
  this->_padding_ = (longlong)&___7FSequenceUpdater_Hierarchical_MovieScene_UE__6B_;
  *(undefined4 *)&(this->CachedConditionResults).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedConditionResults).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedConditionResults);
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedPerTickConditionalEntities).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedPerTickConditionalEntities);
  FVar2 = (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7ISequenceUpdater_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461219a0

void * __thiscall
UE::MovieScene::FSpawnTrackPreAnimatedTokenProducer::_scalar_deleting_destructor_
          (FSpawnTrackPreAnimatedTokenProducer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedTokenProducer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1461219e0

void * __thiscall
`UE::MovieScene::FSpawnTrackPreAnimatedTokenProducer::CacheExistingState'::__l2::FToken::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IMovieScenePreAnimatedToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121a20

void * __thiscall
IMovieScenePreAnimatedToken::_scalar_deleting_destructor_
          (IMovieScenePreAnimatedToken *this,uint param_1)

{
  *this = (IMovieScenePreAnimatedToken)&___7IMovieScenePreAnimatedToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121a60

void * __thiscall
IMovieScenePreAnimatedTokenProducer::_scalar_deleting_destructor_
          (IMovieScenePreAnimatedTokenProducer *this,uint param_1)

{
  *this = (IMovieScenePreAnimatedTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121aa0

void * __thiscall
UE::MovieScene::IPlaybackCapabilityDebuggingTypedPtr::_scalar_deleting_destructor_
          (IPlaybackCapabilityDebuggingTypedPtr *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121ae0

void * __thiscall
UE::MovieScene::ISequenceUpdater::_scalar_deleting_destructor_(ISequenceUpdater *this,uint param_1)

{
  *this = (ISequenceUpdater)&___7ISequenceUpdater_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121b20

void * __thiscall
UE::MovieScene::ITaskContext::_scalar_deleting_destructor_(ITaskContext *this,uint param_1)

{
  *this = (ITaskContext)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121b60

void * __thiscall
UMovieSceneCachePreAnimatedStateSystem::_scalar_deleting_destructor_
          (UMovieSceneCachePreAnimatedStateSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
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

// `scalar_deleting_destructor' @ 146121bc0

void * __thiscall
UMovieSceneEntityGroupingSystem::_scalar_deleting_destructor_
          (UMovieSceneEntityGroupingSystem *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneEntityGroupingSystem__6B_;
  TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
            (&this->GroupHandlers);
  FVar1 = (this->EmptyGroupIndices).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<UE::MovieScene::FEntityGroupID,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FEntityGroupID,FDefaultSparseArrayAllocator>(&this->EntityIDToGroup)
  ;
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Groups).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Groups);
  TSparseArray<UE::MovieScene::FEntityGroupingPolicyKey,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FEntityGroupingPolicyKey,FDefaultSparseArrayAllocator>
            (&this->AllocatedGroupIndices);
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121ca0

void * __thiscall
UMovieSceneEntityInstantiatorSystem::_scalar_deleting_destructor_
          (UMovieSceneEntityInstantiatorSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
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

// `scalar_deleting_destructor' @ 146121d00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneEntitySystem::_scalar_deleting_destructor_(UMovieSceneEntitySystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
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

// `scalar_deleting_destructor' @ 146121d60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneEntitySystemLinker::_scalar_deleting_destructor_
          (UMovieSceneEntitySystemLinker *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<unsigned_int> FVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  FInstanceRegistry *this_00;
  
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystemLinker__6B_;
  FVar3 = (this->SystemFilter).SystemsDisallowed.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar3 = (this->SystemFilter).SystemsAllowed.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pTVar4 = (this->GlobalStateCaptureToken).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  <unnamed-type-Events>::~<unnamed_type_Events>(&this->Events);
  TSparseArray<void_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<void_*,FDefaultSparseArrayAllocator>(&this->ExtensionsByID);
  FVar3 = (this->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Runner).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x48 = 0;
  pvVar5 = *(void **)&(this->EntitySystemsRecyclingPool).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntitySystemsRecyclingPool);
  TSparseArray<UMovieSceneEntitySystem_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UMovieSceneEntitySystem_*,FDefaultSparseArrayAllocator>
            (&this->EntitySystemsByGlobalGraphID);
  this_00 = (this->InstanceRegistry).Ptr;
  if (this_00 != (FInstanceRegistry *)0x0) {
    UE::MovieScene::FInstanceRegistry::~FInstanceRegistry(this_00);
    ::operator_delete(this_00,0x98);
  }
  UE::MovieScene::FPreAnimatedStateExtension::~FPreAnimatedStateExtension(&this->PreAnimatedState);
  FMovieSceneEntitySystemGraph::~FMovieSceneEntitySystemGraph(&this->SystemGraph);
  UE::MovieScene::FEntityManager::~FEntityManager(&this->EntityManager);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x798);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146121ed0

void * __thiscall
UMovieSceneEvalTimeSystem::_scalar_deleting_destructor_
          (UMovieSceneEvalTimeSystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::MovieScene::FEvaluatedTime> FVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneEvalTimeSystem__6B_;
  pFVar1 = (this->RelevantFilter).ComplexMasks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->EvaluatedTimes).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FEvaluatedTime>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
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

// `scalar_deleting_destructor' @ 146121f60

void * __thiscall
UMovieSceneEvaluationHookSystem::_scalar_deleting_destructor_
          (UMovieSceneEvaluationHookSystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneEvaluationHookSystem__6B_;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingEventsByRootInstance).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingEventsByRootInstance);
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
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

// `scalar_deleting_destructor' @ 146122000

void * __thiscall
UMovieSceneInitialValueSystem::_scalar_deleting_destructor_
          (UMovieSceneInitialValueSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
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

// `scalar_deleting_destructor' @ 146122060

void * __thiscall
UMovieScenePreAnimatedStateSystemInterface::_scalar_deleting_destructor_
          (UMovieScenePreAnimatedStateSystemInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1461220c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneRestorePreAnimatedStateSystem::_scalar_deleting_destructor_
          (UMovieSceneRestorePreAnimatedStateSystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneRestorePreAnimatedStateSystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedStateRef).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
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

// `scalar_deleting_destructor' @ 146122140

void * __thiscall
UMovieSceneRootInstantiatorSystem::_scalar_deleting_destructor_
          (UMovieSceneRootInstantiatorSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
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

// `scalar_deleting_destructor' @ 1461221a0

void * __thiscall
UMovieSceneSpawnablesSystem::_scalar_deleting_destructor_
          (UMovieSceneSpawnablesSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
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

// EmptyLinkFunctionForGeneratedCodeMovieSceneEntityGroupingSystem @ 14612f630

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEntityGroupingSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEntityInstantiatorSystem @ 14612f640

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEntityInstantiatorSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystem @ 14612f650

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystemGraphs @ 14612f660

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystemGraphs(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystemLinker @ 14612f670

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystemLinker(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTimeSystem @ 14612f680

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTimeSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationHookSystem @ 14612f690

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationHookSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneInitialValueSystem @ 14612f6a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneInitialValueSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScenePreAnimatedStateSystem @ 14612f6b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScenePreAnimatedStateSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneRootInstantiatorSystem @ 14612f6c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneRootInstantiatorSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnablesSystem @ 14612f6d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnablesSystem(void)

{
  return;
}

// LexToString @ 146141b20

/* WARNING: Removing unreachable block (ram,0x000146141cef) */
/* WARNING: Removing unreachable block (ram,0x000146141cfc) */

FString * __cdecl LexToString(FString *__return_storage_ptr__,TRange<FFrameTime> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  wchar_t *pwVar10;
  FString local_b8;
  uint local_a8;
  undefined4 uStack_a4;
  float local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar1._0_1_ = (param_1->LowerBound).Type;
  uVar1._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  uVar1._4_4_ = (param_1->LowerBound).Value.FrameNumber;
  local_a0 = (param_1->LowerBound).Value.SubFrame;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar3 = false;
  local_b8.Data.ArrayNum = (int)(param_1->UpperBound).Value.SubFrame;
  local_a8 = (uint)uVar1;
  uVar2._0_1_ = (param_1->UpperBound).Type;
  uVar2._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
  uVar2._4_4_ = (param_1->UpperBound).Value.FrameNumber;
  local_b8.Data.AllocatorInstance.Data._0_4_ = (undefined4)uVar2;
  local_b8.Data.AllocatorInstance.Data._4_4_ = uVar2._4_4_;
  uStack_a4 = uVar1._4_4_;
  if ((undefined1)uVar2 != '\x02') {
    if ((undefined1)uVar2 == '\x01') {
      FString::PrintfImpl(&local_28,L"%d.%f");
      FString::PrintfImpl(&local_38,L"%s]");
      bVar9 = true;
      bVar8 = false;
      bVar7 = false;
      bVar3 = true;
    }
    else {
      FString::PrintfImpl(&local_48,L"%d.%f");
      FString::PrintfImpl(&local_58,L"%s)");
      bVar9 = false;
      bVar8 = true;
      bVar7 = true;
      bVar3 = false;
    }
  }
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  if ((local_a8 & 0xff) != 2) {
    if ((local_a8 & 0xff) == 1) {
      FString::PrintfImpl(&local_68,L"%d.%f");
      FString::PrintfImpl(&local_78,L"[%s");
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
    else {
      FString::PrintfImpl(&local_88,L"%d.%f");
      FString::PrintfImpl(&local_98,L"(%s");
      bVar6 = false;
      bVar5 = false;
      bVar4 = true;
    }
  }
  FString::PrintfImpl(&local_b8,L"%s,%s");
  pwVar10 = L"";
  if ((float)local_b8.Data.ArrayNum != 0.0) {
    pwVar10 = (wchar_t *)
              CONCAT44(local_b8.Data.AllocatorInstance.Data._4_4_,
                       local_b8.Data.AllocatorInstance.Data._0_4_);
  }
  FString::FString(__return_storage_ptr__,pwVar10);
  if ((void *)CONCAT44(local_b8.Data.AllocatorInstance.Data._4_4_,
                       local_b8.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_b8.Data.AllocatorInstance.Data._4_4_,
                                   local_b8.Data.AllocatorInstance.Data._0_4_));
  }
  if ((bVar4) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar7) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar8) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar9) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister @ 146160e80

UClass * __cdecl Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCachePreAnimatedStateSystem",
               &Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.InnerSingleton,
               UMovieSceneCachePreAnimatedStateSystem::
               StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCachePreAnimatedStateSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCachePreAnimatedStateSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister @ 146160f40

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityGroupingSystem",
               &Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.InnerSingleton,
               UMovieSceneEntityGroupingSystem::StaticRegisterNativesUMovieSceneEntityGroupingSystem
               ,0x160,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntityGroupingSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityGroupingSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_NoRegister @ 146161000

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.InnerSingleton,
               UMovieSceneEntityInstantiatorSystem::
               StaticRegisterNativesUMovieSceneEntityInstantiatorSystem,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntityInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityInstantiatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister @ 1461610c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEvalTimeSystem",
               &Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.InnerSingleton,
               UMovieSceneEvalTimeSystem::StaticRegisterNativesUMovieSceneEvalTimeSystem,0x1d8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEvalTimeSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEvalTimeSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister @ 146161180

UClass * __cdecl Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEvaluationHookSystem",
               &Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.InnerSingleton,
               UMovieSceneEvaluationHookSystem::StaticRegisterNativesUMovieSceneEvaluationHookSystem
               ,0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEvaluationHookSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEvaluationHookSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister @ 146161240

UClass * __cdecl Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneInitialValueSystem",
               &Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.InnerSingleton,
               UMovieSceneInitialValueSystem::StaticRegisterNativesUMovieSceneInitialValueSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneInitialValueSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneInitialValueSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister @ 146161300

UClass * __cdecl Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScenePreAnimatedStateSystemInterface",
               &Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.InnerSingleton
               ,UMovieScenePreAnimatedStateSystemInterface::
                StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePreAnimatedStateSystemInterface>,
               InternalVTableHelperCtorCaller<UMovieScenePreAnimatedStateSystemInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister @ 1461613c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneRestorePreAnimatedStateSystem",
               &Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.InnerSingleton,
               UMovieSceneRestorePreAnimatedStateSystem::
               StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneRestorePreAnimatedStateSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneRestorePreAnimatedStateSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister @ 146161480

UClass * __cdecl Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneRootInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.InnerSingleton,
               UMovieSceneRootInstantiatorSystem::
               StaticRegisterNativesUMovieSceneRootInstantiatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneRootInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneRootInstantiatorSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister @ 146161540

UClass * __cdecl Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSpawnablesSystem",
               &Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.InnerSingleton,
               UMovieSceneSpawnablesSystem::StaticRegisterNativesUMovieSceneSpawnablesSystem,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSpawnablesSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnablesSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode @ 146161600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNode.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'CVarRichComponentDebugging'' @ 1503d9480

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__CVarRichComponentDebugging__(void)

{
  CVarRichComponentDebugging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRichComponentDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarThreadedEvaluationAllocationThreshold'' @ 1503d94a0

void __cdecl
UE::MovieScene::_dynamic_atexit_destructor_for__CVarThreadedEvaluationAllocationThreshold__(void)

{
  CVarThreadedEvaluationAllocationThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarThreadedEvaluationAllocationThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarThreadedEvaluationEntityThreshold'' @ 1503d94c0

void __cdecl
UE::MovieScene::_dynamic_atexit_destructor_for__CVarThreadedEvaluationEntityThreshold__(void)

{
  CVarThreadedEvaluationEntityThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarThreadedEvaluationEntityThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'GComponentRegistry'' @ 1503d94e0

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__GComponentRegistry__(void)

{
  TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>(&GComponentRegistry.ComponentStructs);
  TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>
            (&GComponentRegistry.ComponentTypes);
  FMutualInclusivityGraph::~FMutualInclusivityGraph
            (&GComponentRegistry.Factories.MutualInclusivityGraph);
  GComponentRegistry.Factories.ParentToChildComponentTypes._72_4_ = 0;
  if (GComponentRegistry.Factories.ParentToChildComponentTypes._64_8_ != 0) {
    FMemory::Free((void *)GComponentRegistry.Factories.ParentToChildComponentTypes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GComponentRegistry.Factories.ParentToChildComponentTypes);
  DestructItems<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,int>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
             GComponentRegistry.Factories.ChildInitializers.AllocatorInstance.Data,
             GComponentRegistry.Factories.ChildInitializers.ArrayNum);
  if (GComponentRegistry.Factories.ChildInitializers.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GComponentRegistry.Factories.ChildInitializers.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GInitialValueProcessors'' @ 1503d9570

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__GInitialValueProcessors__(void)

{
  DestructItems<UE::MovieScene::FInitialValueProcessorEntry,int>
            ((FInitialValueProcessorEntry *)GInitialValueProcessors.AllocatorInstance.Data,
             GInitialValueProcessors.ArrayNum);
  if (GInitialValueProcessors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GInitialValueProcessors.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSharedInitialValues'' @ 1503d95b0

void __cdecl
`UE::MovieScene::FInitialValueCache::GetGlobalInitialValues'::__l2::
_dynamic_atexit_destructor_for__GSharedInitialValues__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController = GSharedInitialValues.WeakReferenceCount.ReferenceController;
  if (GSharedInitialValues.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(GSharedInitialValues.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001503d95d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'GlobalDependencyGraph'' @ 1503d95e0

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__GlobalDependencyGraph__(void)

{
  if (GlobalDependencyGraph.ReverseLookupFlowOrderNodes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GlobalDependencyGraph.ReverseLookupFlowOrderNodes.AllocatorInstance.Data);
  }
  if (GlobalDependencyGraph.FlowOrderNodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(GlobalDependencyGraph.FlowOrderNodes.AllocatorInstance.Data);
  }
  if (GlobalDependencyGraph.FlowGraph.SortedEdges.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GlobalDependencyGraph.FlowGraph.SortedEdges.AllocatorInstance.Data);
  }
  if (GlobalDependencyGraph.FlowGraph.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)GlobalDependencyGraph.FlowGraph.Nodes.AllocatorInstance.SecondaryData);
  }
  if (GlobalDependencyGraph.ImplicitSubsequents.SortedEdges.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GlobalDependencyGraph.ImplicitSubsequents.SortedEdges.AllocatorInstance.Data);
  }
  if (GlobalDependencyGraph.ImplicitSubsequents.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)GlobalDependencyGraph.ImplicitSubsequents.Nodes.AllocatorInstance.
                          SecondaryData);
  }
  if (GlobalDependencyGraph.ImplicitPrerequisites.SortedEdges.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GlobalDependencyGraph.ImplicitPrerequisites.SortedEdges.AllocatorInstance.Data);
  }
  if (GlobalDependencyGraph.ImplicitPrerequisites.Nodes.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)GlobalDependencyGraph.ImplicitPrerequisites.Nodes.AllocatorInstance.
                          SecondaryData);
  }
  if (GlobalDependencyGraph.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GlobalDependencyGraph.Nodes.AllocatorInstance.Data);
  }
  GlobalDependencyGraph.GraphIDsByComponent._72_4_ = 0;
  if (GlobalDependencyGraph.GraphIDsByComponent._64_8_ != 0) {
    FMemory::Free((void *)GlobalDependencyGraph.GraphIDsByComponent._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GlobalDependencyGraph.GraphIDsByComponent);
  GlobalDependencyGraph.GraphIDsByClass._72_4_ = 0;
  if (GlobalDependencyGraph.GraphIDsByClass._64_8_ != 0) {
    FMemory::Free((void *)GlobalDependencyGraph.GraphIDsByClass._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GlobalDependencyGraph);
  return;
}

// `dynamic_atexit_destructor_for_'SystemStats'' @ 1503d96e0

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__SystemStats__(void)

{
  SystemStats._72_4_ = 0;
  if (SystemStats._64_8_ != 0) {
    FMemory::Free((void *)SystemStats._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TStatId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TStatId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TStatId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&SystemStats);
  return;
}

// operator() @ 1504e48c0

bool __thiscall
``UE::MovieScene::FFreeEntityOperation::Commit'::__l2::<lambda_1>::operator()'::__l13::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<9070122617276465487>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9070122617276465487>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

