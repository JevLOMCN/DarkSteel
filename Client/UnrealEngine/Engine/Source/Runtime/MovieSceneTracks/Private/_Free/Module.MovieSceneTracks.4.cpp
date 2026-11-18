// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 680

// StorageID'' @ 14109f370

void __cdecl `dynamic_initializer_for_'UE::MovieScene::FPreAnimatedCVarStorage::StorageID__(void)

{
  undefined4 local_res8;
  
  UE::MovieScene::FPreAnimatedStateExtension::RegisterStorageInternal();
  UE::MovieScene::FPreAnimatedCVarStorage::StorageID = local_res8;
  return;
}

// StorageID'' @ 14109f3a0

void __cdecl
`dynamic_initializer_for_'UE::MovieScene::FPreAnimatedCameraCutStorage::StorageID__(void)

{
  undefined4 local_res8;
  
  UE::MovieScene::FPreAnimatedStateExtension::RegisterStorageInternal();
  UE::MovieScene::FPreAnimatedCameraCutStorage::StorageID = local_res8;
  return;
}

// StorageID'' @ 14109f3d0

void __cdecl
`dynamic_initializer_for_'UE::MovieScene::FPreAnimatedVisibilityStorage::StorageID__(void)

{
  undefined4 local_res8;
  
  UE::MovieScene::FPreAnimatedStateExtension::RegisterStorageInternal();
  UE::MovieScene::FPreAnimatedVisibilityStorage::StorageID = local_res8;
  return;
}

// `dynamic_initializer_for_'CVarBooleanPropertyECS'' @ 14109f400

void __cdecl UE::MovieScene::_dynamic_initializer_for__CVarBooleanPropertyECS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBooleanPropertyECS,L"Sequencer.UseLegacyBooleanTemplate",
             &GBooleanPropertyLegacyTemplate,
             L"(Default: false) DEPRECATED Whether to use Sequencer\'s legacy template evauation for boolean properties or not."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBooleanPropertyECS__);
  return;
}

// `dynamic_initializer_for_'CVarCompileBooleanPropertyECS'' @ 14109f450

void __cdecl UE::MovieScene::_dynamic_initializer_for__CVarCompileBooleanPropertyECS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCompileBooleanPropertyECS,L"Sequencer.CanUseLegacyBooleanTemplate",
             &GCompileBooleanPropertyLegacyTemplate,
             L"(Default: true) DEPRECATED Whether to compile Sequencer\'s legacy template boolean properties at all. Disabling this cvar will completely disable the legacy template."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCompileBooleanPropertyECS__);
  return;
}

// `dynamic_initializer_for_'FMovieSceneCompiledDataManagerGCReferenceTestAutomationTestInstance'' @ 14109f4a0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneCompiledDataManagerGCReferenceTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneCompiledDataManagerGCReferenceTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneCompiledDataManagerGCReferenceTestAutomationTestInstance,&local_18,false);
  FMovieSceneCompiledDataManagerGCReferenceTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneCompiledDataManagerGCReferenceTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMovieSceneCompiledDataManagerGCReferenceTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerAbsoluteTestAutomationTestInstance'' @ 14109f500

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerAbsoluteTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerAbsoluteTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMovieSceneDecomposerAbsoluteTestAutomationTestInstance,
             &local_18,false);
  FMovieSceneDecomposerAbsoluteTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerAbsoluteTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMovieSceneDecomposerAbsoluteTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerAbsoluteWithEasingTestAutomationTestInstance'' @ 14109f560

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerAbsoluteWithEasingTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerAbsoluteWithEasingTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerAbsoluteWithEasingTestAutomationTestInstance,&local_18,false);
  FMovieSceneDecomposerAbsoluteWithEasingTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerAbsoluteWithEasingTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMovieSceneDecomposerAbsoluteWithEasingTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerAdditiveFromBaseTestAutomationTestInstance'' @ 14109f5c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerAdditiveFromBaseTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerAdditiveFromBaseTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMovieSceneDecomposerAdditiveFromBaseTestAutomationTestInstance
             ,&local_18,false);
  FMovieSceneDecomposerAdditiveFromBaseTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerAdditiveFromBaseTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveFromBaseTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerAdditiveFromBaseWithEasingTestAutomationTestInstance'' @ 14109f620

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerAdditiveFromBaseWithEasingTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerAdditiveFromBaseWithEasingTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerAdditiveFromBaseWithEasingTestAutomationTestInstance,&local_18,
             false);
  FMovieSceneDecomposerAdditiveFromBaseWithEasingTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerAdditiveFromBaseWithEasingTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveFromBaseWithEasingTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerAdditiveTestAutomationTestInstance'' @ 14109f680

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerAdditiveTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerAdditiveTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMovieSceneDecomposerAdditiveTestAutomationTestInstance,
             &local_18,false);
  FMovieSceneDecomposerAdditiveTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerAdditiveTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerAdditiveWithEasingTestAutomationTestInstance'' @ 14109f6e0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerAdditiveWithEasingTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerAdditiveWithEasingTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerAdditiveWithEasingTestAutomationTestInstance,&local_18,false);
  FMovieSceneDecomposerAdditiveWithEasingTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerAdditiveWithEasingTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveWithEasingTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerAdditiveWithMultipleEasingTestAutomationTestInstance'' @ 14109f740

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerAdditiveWithMultipleEasingTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerAdditiveWithMultipleEasingTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerAdditiveWithMultipleEasingTestAutomationTestInstance,&local_18,
             false);
  FMovieSceneDecomposerAdditiveWithMultipleEasingTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerAdditiveWithMultipleEasingTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveWithMultipleEasingTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerComplexTestAutomationTestInstance'' @ 14109f7a0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerComplexTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerComplexTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMovieSceneDecomposerComplexTestAutomationTestInstance,
             &local_18,false);
  FMovieSceneDecomposerComplexTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerComplexTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMovieSceneDecomposerComplexTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerMultipleAbsolutesTestAutomationTestInstance'' @ 14109f800

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerMultipleAbsolutesTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerMultipleAbsolutesTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerMultipleAbsolutesTestAutomationTestInstance,&local_18,false);
  FMovieSceneDecomposerMultipleAbsolutesTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerMultipleAbsolutesTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMovieSceneDecomposerMultipleAbsolutesTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMovieSceneDecomposerOverrideWithEasingTestAutomationTestInstance'' @ 14109f860

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieSceneDecomposerOverrideWithEasingTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieSceneDecomposerOverrideWithEasingTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerOverrideWithEasingTestAutomationTestInstance,&local_18,false);
  FMovieSceneDecomposerOverrideWithEasingTestAutomationTestInstance._0_8_ =
       &___7FMovieSceneDecomposerOverrideWithEasingTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FMovieSceneDecomposerOverrideWithEasingTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FMovieScenePartialEvaluationTestAutomationTestInstance'' @ 14109f8c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMovieScenePartialEvaluationTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMovieScenePartialEvaluationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMovieScenePartialEvaluationTestAutomationTestInstance,
             &local_18,false);
  FMovieScenePartialEvaluationTestAutomationTestInstance._0_8_ =
       &___7FMovieScenePartialEvaluationTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMovieScenePartialEvaluationTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AccumulateManualWeights'' @ 14109f920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_AccumulateManualWeights__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_AccumulateManualWeights ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_AccumulateManualWeights>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_AccumulateManualWeights");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AccumulateManualWeights,*pFVar1,
               L"Weights: Accumulate manual weights","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 14109f9b0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 14109fa40

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_CameraCutTrack_TokenExecute'' @ 14109fad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_CameraCutTrack_TokenExecute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_CameraCutTrack_TokenExecute ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_CameraCutTrack_TokenExecute>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_CameraCutTrack_TokenExecute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_CameraCutTrack_TokenExecute,
               *pFVar1,L"Camera Cut Track Token Execute","STATGROUP_MovieSceneEval",
               "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_EvaluateEasingTask'' @ 14109fb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_EvaluateEasingTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_EvaluateEasingTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_EvaluateEasingTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateEasingTask,*pFVar1,
               L"Weights: Evaluate easing","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_EvaluateObjectPathChannelTask'' @ 14109fbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_EvaluateObjectPathChannelTask__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_EvaluateObjectPathChannelTask ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_EvaluateObjectPathChannelTask>)0x0
     ) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_EvaluateObjectPathChannelTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateObjectPathChannelTask,
               *pFVar1,L"MovieScene: Evaluate object path channels","STATGROUP_MovieSceneECS",
               "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_EvaluateStringChannelTask'' @ 14109fc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_EvaluateStringChannelTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_EvaluateStringChannelTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_EvaluateStringChannelTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateStringChannelTask,
               *pFVar1,L"MovieScene: Evaluate string channels","STATGROUP_MovieSceneECS",
               "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_EvaluateTextChannelTask'' @ 14109fd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_EvaluateTextChannelTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_EvaluateTextChannelTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateTextChannelTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_EvaluateTextChannelTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateTextChannelTask,*pFVar1,
               L"MovieScene: Evaluate text channels","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_HarvestEasingTask'' @ 14109fda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_HarvestEasingTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_HarvestEasingTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_HarvestEasingTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_HarvestEasingTask,*pFVar1,
               L"Weights: Harvest hierarchical easing","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ParameterTrack_TokenExecute'' @ 14109fe30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_ParameterTrack_TokenExecute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ParameterTrack_TokenExecute ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_ParameterTrack_TokenExecute>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_ParameterTrack_TokenExecute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ParameterTrack_TokenExecute,
               *pFVar1,L"Parameter Track Token Execute","STATGROUP_MovieSceneEval",
               "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 14109fec0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PropagateEasing'' @ 14109ff50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PropagateEasing__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PropagateEasing ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PropagateEasing>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PropagateEasing");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PropagateEasing,*pFVar1,
               L"Weights: Propagate hierarchical easing","STATGROUP_MovieSceneECS",
               "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PropertyTrack_TokenExecute'' @ 14109ffe0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1410a0070

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ResetWeightsTask'' @ 1410a0100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_ResetWeightsTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ResetWeightsTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_ResetWeightsTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_ResetWeightsTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ResetWeightsTask,*pFVar1,
               L"Weights: Reset","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h__Script_MovieSceneTracks_4284379355'' @ 1410a0190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h__Script_MovieSceneTracks_4284379355__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieSceneDecomposerTests_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieScenePartialEvaluationTests_h__Script_MovieSceneTracks_923268947'' @ 1410a01d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieScenePartialEvaluationTests_h__Script_MovieSceneTracks_923268947__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Tests_MovieScenePartialEvaluationTests_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCVarTrackInstance_h__Script_MovieSceneTracks_3864126763'' @ 1410a0210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCVarTrackInstance_h__Script_MovieSceneTracks_3864126763__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCVarTrackInstance_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVectorPropertySystem_h__Script_MovieSceneTracks_4078834798'' @ 1410a0250

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVectorPropertySystem_h__Script_MovieSceneTracks_4078834798__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVectorPropertySystem_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h__Script_MovieSceneTracks_3329464493'' @ 1410a0290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h__Script_MovieSceneTracks_3329464493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ObjectPathChannelEvaluatorSystem_h__Script_MovieSceneTracks_397092376'' @ 1410a02d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ObjectPathChannelEvaluatorSystem_h__Script_MovieSceneTracks_397092376__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ObjectPathChannelEvaluatorSystem_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_StringChannelEvaluatorSystem_h__Script_MovieSceneTracks_12467059'' @ 1410a0310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_StringChannelEvaluatorSystem_h__Script_MovieSceneTracks_12467059__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_StringChannelEvaluatorSystem_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_TextChannelEvaluatorSystem_h__Script_MovieSceneTracks_813449985'' @ 1410a0350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_TextChannelEvaluatorSystem_h__Script_MovieSceneTracks_813449985__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_TextChannelEvaluatorSystem_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h__Script_MovieSceneTracks_178788019'' @ 1410a0390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h__Script_MovieSceneTracks_178788019__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h__Script_MovieSceneTracks_1565075654'' @ 1410a03d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h__Script_MovieSceneTracks_1565075654__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneFadeTrackTests_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h__Script_MovieSceneTracks_2826046892'' @ 1410a0410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h__Script_MovieSceneTracks_2826046892__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h__Script_MovieSceneTracks_243063201'' @ 1410a0450

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h__Script_MovieSceneTracks_243063201__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h__Script_MovieSceneTracks_151265824'' @ 1410a0490

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h__Script_MovieSceneTracks_151265824__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h__Script_MovieSceneTracks_2487122019'' @ 1410a04d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h__Script_MovieSceneTracks_2487122019__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h__Script_MovieSceneTracks_714071914'' @ 1410a0510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h__Script_MovieSceneTracks_714071914__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h__Script_MovieSceneTracks_3760973736'' @ 1410a0550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h__Script_MovieSceneTracks_3760973736__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h__Script_MovieSceneTracks_3353422085'' @ 1410a0590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h__Script_MovieSceneTracks_3353422085__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DTransformTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h__Script_MovieSceneTracks_1871378937'' @ 1410a05d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h__Script_MovieSceneTracks_1871378937__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h__Script_MovieSceneTracks_829053224'' @ 1410a0610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h__Script_MovieSceneTracks_829053224__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h__Script_MovieSceneTracks_3937058426'' @ 1410a0650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h__Script_MovieSceneTracks_3937058426__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h__Script_MovieSceneTracks_1340372722'' @ 1410a0690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h__Script_MovieSceneTracks_1340372722__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCVarTrack_h__Script_MovieSceneTracks_2646124442'' @ 1410a06d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCVarTrack_h__Script_MovieSceneTracks_2646124442__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCVarTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraCutTrack_h__Script_MovieSceneTracks_1317457582'' @ 1410a0710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraCutTrack_h__Script_MovieSceneTracks_1317457582__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraCutTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceShakeTrack_h__Script_MovieSceneTracks_115684507'' @ 1410a0750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceShakeTrack_h__Script_MovieSceneTracks_115684507__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceShakeTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceTriggerTrack_h__Script_MovieSceneTracks_2472258820'' @ 1410a0790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceTriggerTrack_h__Script_MovieSceneTracks_2472258820__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceTriggerTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeTrack_h__Script_MovieSceneTracks_1967312233'' @ 1410a07d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeTrack_h__Script_MovieSceneTracks_1967312233__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h__Script_MovieSceneTracks_616530475'' @ 1410a0810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h__Script_MovieSceneTracks_616530475__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h__Script_MovieSceneTracks_3480469038'' @ 1410a0850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h__Script_MovieSceneTracks_3480469038__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h__Script_MovieSceneTracks_92815896'' @ 1410a0890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h__Script_MovieSceneTracks_92815896__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCommonAnimationTrack_h__Script_MovieSceneTracks_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCustomPrimitiveDataTrack_h__Script_MovieSceneTracks_936232049'' @ 1410a08e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCustomPrimitiveDataTrack_h__Script_MovieSceneTracks_936232049__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCustomPrimitiveDataTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDataLayerTrack_h__Script_MovieSceneTracks_3330340102'' @ 1410a0920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDataLayerTrack_h__Script_MovieSceneTracks_3330340102__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDataLayerTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h__Script_MovieSceneTracks_1806114380'' @ 1410a0960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h__Script_MovieSceneTracks_1806114380__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h__Script_MovieSceneTracks_549723401'' @ 1410a09a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h__Script_MovieSceneTracks_549723401__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEnumTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h__Script_MovieSceneTracks_2693296223'' @ 1410a09e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h__Script_MovieSceneTracks_2693296223__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h__Script_MovieSceneTracks_3131959460'' @ 1410a0a20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h__Script_MovieSceneTracks_3131959460__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h__Script_MovieSceneTracks_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h__Script_MovieSceneTracks_3605785112'' @ 1410a0a70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h__Script_MovieSceneTracks_3605785112__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h__Script_MovieSceneTracks_2255002515'' @ 1410a0ab0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h__Script_MovieSceneTracks_2255002515__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h__Script_MovieSceneTracks_4124348832'' @ 1410a0af0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h__Script_MovieSceneTracks_4124348832__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h__Script_MovieSceneTracks_489437514'' @ 1410a0b30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h__Script_MovieSceneTracks_489437514__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneLevelVisibilityTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialParameterCollectionTrack_h__Script_MovieSceneTracks_4198365736'' @ 1410a0b70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialParameterCollectionTrack_h__Script_MovieSceneTracks_4198365736__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialParameterCollectionTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h__Script_MovieSceneTracks_4028808778'' @ 1410a0bb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h__Script_MovieSceneTracks_4028808778__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h__Script_MovieSceneTracks_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h__Script_MovieSceneTracks_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h__Script_MovieSceneTracks_1843207908'' @ 1410a0c00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h__Script_MovieSceneTracks_1843207908__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h__Script_MovieSceneTracks_729766946'' @ 1410a0c40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h__Script_MovieSceneTracks_729766946__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h__Script_MovieSceneTracks_3674824553'' @ 1410a0c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h__Script_MovieSceneTracks_3674824553__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h__Script_MovieSceneTracks_1892580949'' @ 1410a0cc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h__Script_MovieSceneTracks_1892580949__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h__Script_MovieSceneTracks_2241415281'' @ 1410a0d00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h__Script_MovieSceneTracks_2241415281__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h__Script_MovieSceneTracks_3501596289'' @ 1410a0d40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h__Script_MovieSceneTracks_3501596289__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h__Script_MovieSceneTracks_2169957412'' @ 1410a0d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h__Script_MovieSceneTracks_2169957412__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h__Script_MovieSceneTracks_3767908637'' @ 1410a0dc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h__Script_MovieSceneTracks_3767908637__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h__Script_MovieSceneTracks_3805027733'' @ 1410a0e00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h__Script_MovieSceneTracks_3805027733__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneStringTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h__Script_MovieSceneTracks_3173885725'' @ 1410a0e40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h__Script_MovieSceneTracks_3173885725__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTextTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h__Script_MovieSceneTracks_345175761'' @ 1410a0e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h__Script_MovieSceneTracks_345175761__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h__Script_MovieSceneTracks_81428711'' @ 1410a0ec0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h__Script_MovieSceneTracks_81428711__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h__Script_MovieSceneTracks_3483611985'' @ 1410a0f00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h__Script_MovieSceneTracks_3483611985__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieSceneTracks",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVisibilityTrack_h__Script_MovieSceneTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack @ 146875c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneIntegerTrack @ 146875c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneIntegerTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneIntegerTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneIntegerTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneIntegerTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneIntegerTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCameraCutTrack @ 146875d50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraCutTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.OuterSingleton;
}

// NewProp_bCanBlend_SetBit @ 146875e50

void __cdecl
Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bCanBlend_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  return;
}

// NewProp_bAutoArrangeSections_SetBit @ 146875e60

void __cdecl
Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bAutoArrangeSections_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x130) = 1;
  return;
}

// Z_Construct_UClass_UMovieSceneLevelVisibilityTrack @ 146875ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneLevelVisibilityTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneLevelVisibilityTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneLevelVisibilityTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneLevelVisibilityTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCameraCutTrackInstance @ 146876030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraCutTrackInstance(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneComponentMaterialTrack @ 146876230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneComponentMaterialTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.OuterSingleton;
}

// Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType @ 146876270

UEnum * __cdecl Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType(void)

{
  if (Z_Registration_Info_UEnum_EComponentMaterialType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EComponentMaterialType.InnerSingleton,
               &Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EComponentMaterialType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FComponentMaterialInfo @ 1468762b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComponentMaterialInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComponentMaterialInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComponentMaterialInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComponentMaterialInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComponentMaterialInfo.InnerSingleton;
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

// EComponentMaterialType_StaticEnum @ 146876330

UEnum * __cdecl EComponentMaterialType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComponentMaterialType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UEnum_EComponentMaterialType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType,(UObject *)pUVar1,
                       L"EComponentMaterialType");
  }
  return Z_Registration_Info_UEnum_EComponentMaterialType.OuterSingleton;
}

// NewStructOps @ 146876370

void * __cdecl Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComponentMaterialInfo,&UE::CoreUObject::Private::Construct<FComponentMaterialInfo>,&UE::CoreUObject::Private::ConstructForTests<FComponentMaterialInfo>,&UE::CoreUObject::Private::Destruct<FComponentMaterialInfo>,&UE::CoreUObject::Private::Copy<FComponentMaterialInfo>,&UE::CoreUObject::Private::GetStructTypeHash<FComponentMaterialInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTextChannelEvaluatorSystem @ 1468763b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextChannelEvaluatorSystem(void)

{
  if (Z_Registration_Info_UClass_UTextChannelEvaluatorSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextChannelEvaluatorSystem.OuterSingleton,
               &Z_Construct_UClass_UTextChannelEvaluatorSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextChannelEvaluatorSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneDoubleVectorTrack @ 146876570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneDoubleVectorTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneFloatVectorTrack @ 146876620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneFloatVectorTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146877450

void * __thiscall
FMovieSceneDecomposerMultipleAbsolutesTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerMultipleAbsolutesTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeTrack @ 146877490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146877eb0

void * __thiscall
FMovieSceneDecomposerAdditiveTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerAdditiveTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146878b20

void * __thiscall
FMovieSceneDecomposerAdditiveWithEasingTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerAdditiveWithEasingTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneDataLayerTrack @ 146879660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneDataLayerTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneDataLayerTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneDataLayerTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneDataLayerTrack.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1468796a0

void * __thiscall
FMovieSceneDecomposerOverrideWithEasingTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerOverrideWithEasingTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem @ 1468796e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem @ 146879720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14687a230

void * __thiscall
FMovieSceneDecomposerAdditiveWithMultipleEasingTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerAdditiveWithMultipleEasingTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14687aac0

void * __thiscall
FMovieSceneDecomposerAdditiveFromBaseTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerAdditiveFromBaseTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneVisibilityTrack @ 14687ab00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneVisibilityTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneVisibilityTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneDoubleTrack @ 14687ac00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneDoubleTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneDoubleTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneDoubleTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleTrack.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14687b770

void * __thiscall
FMovieSceneDecomposerAdditiveFromBaseWithEasingTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerAdditiveFromBaseWithEasingTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14687d350

void * __thiscall
FMovieSceneDecomposerComplexTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerComplexTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister @ 14687d390

UClass * __cdecl Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"WeightAndEasingEvaluatorSystem",
               &Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.InnerSingleton,
               UWeightAndEasingEvaluatorSystem::StaticRegisterNativesUWeightAndEasingEvaluatorSystem
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWeightAndEasingEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UWeightAndEasingEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneObjectPropertyTrack @ 14687d450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneObjectPropertyTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem @ 14687d490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.
                OuterSingleton,
               &Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem @ 14687d4d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.
                OuterSingleton,
               &Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.OuterSingleton;
}

// Z_Construct_UClass_UWeightAndEasingEvaluatorSystem @ 14687d510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWeightAndEasingEvaluatorSystem(void)

{
  if (Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.OuterSingleton,
               &Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneEnumTrack @ 14687d550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEnumTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEnumTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEnumTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEnumTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEnumTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary @ 14687d890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneFadeTrackTestLibrary_GetManualFadeAmount @ 14687d8d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFadeTrackTestLibrary_GetManualFadeAmount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFadeTrackTestLibrary_GetManualFadeAmount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack @ 14687d910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneEulerTransformTrack @ 14687d950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEulerTransformTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCameraShakeTrack @ 14687dbd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraShakeTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCommonAnimationTrack @ 14687dd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCommonAnimationTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCommonAnimationTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams @ 14687ddd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams.
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

// NewStructOps @ 14687de50

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneSkeletalAnimRootMotionTrackParams,&UE::CoreUObject::Private::Construct<FMovieSceneSkeletalAnimRootMotionTrackParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneSkeletalAnimRootMotionTrackParams>,&UE::CoreUObject::Private::Destruct<FMovieSceneSkeletalAnimRootMotionTrackParams>,&UE::CoreUObject::Private::Copy<FMovieSceneSkeletalAnimRootMotionTrackParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneCinematicShotTrack @ 14687df40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCinematicShotTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieScenePartialEvaluationTestObject @ 14687e040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScenePartialEvaluationTestObject(void)

{
  if (Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.OuterSingleton,
               &Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.OuterSingleton;
}

// NewProp_bBlendFirstChildOfRoot_SetBit @ 14687e080

void __cdecl
Z_Construct_UClass_UMovieSceneCommonAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b0) = 1;
  return;
}

// Z_Construct_UClass_UMovieSceneSectionsToKey @ 14687e090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSectionsToKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSectionsToKey.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSectionsToKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSectionsToKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionsToKey.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14687f420

void * __thiscall
FMovieScenePartialEvaluationTest::_scalar_deleting_destructor_
          (FMovieScenePartialEvaluationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneAudioTrack @ 14687f760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneAudioTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneAudioTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneAudioTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneAudioTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieScene3DAttachTrack @ 14687f7a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScene3DAttachTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieScene3DAttachTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScene3DAttachTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScene3DAttachTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieScene3DConstraintTrack @ 14687f7e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScene3DConstraintTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneRotatorTrack @ 14687f8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneRotatorTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneRotatorTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneRotatorTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneRotatorTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneRotatorTrack.OuterSingleton;
}

// Z_Construct_UClass_UObjectPathChannelEvaluatorSystem @ 14687f9e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectPathChannelEvaluatorSystem(void)

{
  if (Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem.OuterSingleton,
               &Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieScene3DPathTrack @ 14687fbc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScene3DPathTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieScene3DPathTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScene3DPathTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieScene3DPathTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScene3DPathTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack @ 14687fd80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone @ 14687fe80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneCVarTrackInstance @ 14687fec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCVarTrackInstance(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCVarTrackInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone @ 14687fff0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146881010

void * __thiscall
FMovieSceneCompiledDataManagerGCReferenceTest::_scalar_deleting_destructor_
          (FMovieSceneCompiledDataManagerGCReferenceTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewProp_bUseLegacySectionIndexBlend_SetBit @ 146881050

void __cdecl
Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::
NewProp_bUseLegacySectionIndexBlend_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b8) = 1;
  return;
}

// Z_Construct_UClass_UMovieSceneTestSequence @ 1468811e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTestSequence(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTestSequence.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTestSequence.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTestSequence_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTestSequence.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneDecomposerTestObject @ 146881220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneDecomposerTestObject(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneDecomposerTestObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneColorTrack @ 146881260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneColorTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneColorTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneColorTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneColorTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneColorTrack.OuterSingleton;
}

// NewProp_bIsSlateColor_SetBit @ 1468812a0

void __cdecl
Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x148) = 1;
  return;
}

// `scalar_deleting_destructor' @ 146881930

void * __thiscall
FMovieSceneDecomposerAbsoluteTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerAbsoluteTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneBoolTrack @ 146881b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneBoolTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneBoolTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneBoolTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneBoolTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCustomPrimitiveDataTrack @ 146881c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCustomPrimitiveDataTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCustomPrimitiveDataTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneParticleParameterTrack @ 146881de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneParticleParameterTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneParticleParameterTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneSlomoTrack @ 146881ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSlomoTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSlomoTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSlomoTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSlomoTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack @ 1468820a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.
                OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneMaterialTrack @ 1468820e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMaterialTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMaterialTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMaterialTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneVisibilitySystem @ 146882120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneVisibilitySystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneVisibilitySystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneStringTrack @ 146882220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneStringTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneStringTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneStringTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneStringTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneStringTrack.OuterSingleton;
}

// Z_Construct_UClass_UStringChannelEvaluatorSystem @ 146882260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStringChannelEvaluatorSystem(void)

{
  if (Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.OuterSingleton,
               &Z_Construct_UClass_UStringChannelEvaluatorSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneEventTrack @ 146882ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEventTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEventTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEventTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEventTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTrack.OuterSingleton;
}

// Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition @ 146882b00

UEnum * __cdecl Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition(void)

{
  if (Z_Registration_Info_UEnum_EFireEventsAtPosition.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFireEventsAtPosition.InnerSingleton,
               &Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFireEventsAtPosition.InnerSingleton;
}

// `scalar_deleting_destructor' @ 146882b40

void * __thiscall
FMovieSceneDecomposerAbsoluteWithEasingTest::_scalar_deleting_destructor_
          (FMovieSceneDecomposerAbsoluteWithEasingTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// EFireEventsAtPosition_StaticEnum @ 146882b80

UEnum * __cdecl EFireEventsAtPosition_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFireEventsAtPosition.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UEnum_EFireEventsAtPosition.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition,(UObject *)pUVar1,
                       L"EFireEventsAtPosition");
  }
  return Z_Registration_Info_UEnum_EFireEventsAtPosition.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneActorReferenceTrack @ 146882bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneActorReferenceTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.OuterSingleton;
}

// NewProp_bFireEventsWhenForwards_SetBit @ 146882c00

void __cdecl
Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x128) = *(uint *)((longlong)param_1 + 0x128) | 1;
  return;
}

// NewProp_bFireEventsWhenBackwards_SetBit @ 146882c10

void __cdecl
Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x128) = *(uint *)((longlong)param_1 + 0x128) | 2;
  return;
}

// Z_Construct_UClass_UMovieSceneParticleTrack @ 146882ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneParticleTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneParticleTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneParticleTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneParticleTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneParticleTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTextTrack @ 146882d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTextTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTextTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTextTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTextTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTextTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieScene3DTransformTrack @ 146882e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScene3DTransformTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieScene3DTransformTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScene3DTransformTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieScene3DTransformTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScene3DTransformTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieScenePropertyTrack @ 146882e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScenePropertyTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieScenePropertyTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScenePropertyTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieScenePropertyTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCVarTrack @ 146882ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCVarTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCVarTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCVarTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCVarTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneFadeTrack @ 146882ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneFadeTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneFadeTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneFadeTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneFadeTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneFloatTrack @ 146882f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneFloatTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneFloatTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneFloatTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneFloatTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTransformTrack @ 146883190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTransformTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTransformTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTransformTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTransformTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneByteTrack @ 146883350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneByteTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneByteTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneByteTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneByteTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneByteTrack.OuterSingleton;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 146885af0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>,TSizedDefaultAllocator<32>_>
           *param_1,FPreAnimatedStorageIndex *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>
                      *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4)
  ;
  if (param_1->ArrayNum <= iVar5) {
    return -1;
  }
  pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x24;
  if (param_2->Value == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar2 = param_2->Value;
  if (*(int *)pFVar1 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar6 = -1;
  if (*(int *)pFVar1 <= iVar2) {
    iVar6 = iVar5;
  }
  return iVar6;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 146885bc0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>,TSizedDefaultAllocator<32>_>
           *param_1,FPreAnimatedStorageIndex *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
                      *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4)
  ;
  if (param_1->ArrayNum <= iVar5) {
    return -1;
  }
  pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 8;
  if (param_2->Value == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar2 = param_2->Value;
  if (*(int *)pFVar1 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar6 = -1;
  if (*(int *)pFVar1 <= iVar2) {
    iVar6 = iVar5;
  }
  return iVar6;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 146885c90

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,TSizedDefaultAllocator<32>_>
           *param_1,FPreAnimatedStorageIndex *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString> *)
                     (param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4);
  if (param_1->ArrayNum <= iVar5) {
    return -1;
  }
  pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x18;
  if (param_2->Value == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar2 = param_2->Value;
  if (*(int *)pFVar1 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar6 = -1;
  if (*(int *)pFVar1 <= iVar2) {
    iVar6 = iVar5;
  }
  return iVar6;
}

// BinarySearchBy<TArray<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,UE::MovieScene::FRootInstanceHandle,TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>::FKeyForward,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_> @ 146885d60

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,UE::MovieScene::FRootInstanceHandle,TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>::FKeyForward,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
          (TArray<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FRootInstanceHandle *param_2,FKeyForward param_3,
          TLess<UE::MovieScene::FRootInstanceHandle_const_&> param_4)

{
  ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
  FVar1;
  uint uVar2;
  int iVar3;
  ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
  FVar4;
  uint uVar5;
  int iVar6;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
           )param_1;
  if (FVar1 != (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                )0x0) {
    FVar4 = FVar1;
  }
  iVar6 = 0;
  if (0 < param_1->ArrayNum) {
    uVar5 = param_1->ArrayNum;
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      if (*(ushort *)((longlong)iVar3 * 0x1b0 + (longlong)FVar4) < *(ushort *)param_2) {
        iVar6 = iVar3 + (uVar5 & 1);
      }
      uVar2 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar2 != 0);
  }
  if (param_1->ArrayNum <= iVar6) {
    return -1;
  }
  if (FVar1 != (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                )0x0) {
    param_1 = (TArray<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)FVar1;
  }
  iVar3 = -1;
  if (*(ushort *)((longlong)iVar6 * 0x1b0 + (longlong)param_1) <= *(ushort *)param_2) {
    iVar3 = iVar6;
  }
  return iVar3;
}

// CachePreAnimatedValue<`UE::MovieScene::FCameraCutGameHandler::CachePreAnimatedValue'::__l2::<lambda_1>_> @ 146885e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::
CachePreAnimatedValue<_UE::MovieScene::FCameraCutGameHandler::CachePreAnimatedValue_::__l2::<lambda_1>_>
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits> *this,
          FPreAnimatedStorageGroupHandle param_1,uchar *param_2,<lambda_1> *param_3,
          EPreAnimatedCaptureSourceTracking param_4)

{
  FPreAnimatedStateExtension **ppFVar1;
  longlong lVar2;
  FPreAnimatedStateExtension *this_00;
  code *pcVar3;
  EPreAnimatedCaptureSourceTracking EVar4;
  FPreAnimatedStorageIndex FVar5;
  EPreAnimatedStorageRequirement EVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  FPreAnimatedCameraCutState *pFVar10;
  undefined1 *puVar11;
  undefined1 local_res10 [8];
  undefined1 local_88;
  undefined1 local_87 [7];
  FPreAnimatedStorageIndex local_80 [2];
  FPreAnimatedStorageIndex local_78 [2];
  int local_70 [2];
  FPreAnimatedStateEntry local_68;
  FPreAnimatedStateEntry local_58;
  FPreAnimatedCameraCutState local_48;
  
  EVar4 = param_4;
  if (param_4 == CacheIfTracked) {
    if (this->ParentExtension->NumRequestsForGlobalState == 0) {
      if (*(int *)&(this->KeyToStorageIndex).field_0x8 ==
          *(int *)&(this->KeyToStorageIndex).field_0x34) {
        return;
      }
      puVar11 = *(undefined1 **)&(this->KeyToStorageIndex).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->KeyToStorageIndex).field_0x38;
      }
      iVar8 = *(int *)(puVar11 +
                      ((ulonglong)(*(int *)&(this->KeyToStorageIndex).field_0x48 - 1) &
                      (ulonglong)*param_2) * 4);
      if (iVar8 == -1) {
        return;
      }
      while (pbVar9 = (byte *)((longlong)iVar8 * 0x10 + *(longlong *)&this->KeyToStorageIndex),
            *pbVar9 != *param_2) {
        iVar8 = *(int *)(pbVar9 + 8);
        if (iVar8 == -1) {
          return;
        }
      }
      if (pbVar9 == (byte *)0x0) {
        return;
      }
      local_58.ValueHandle.StorageIndex.Value = *(int *)(pbVar9 + 4);
      local_58.ValueHandle.TypeID.TypeID = (this->StorageID).TypeID;
      local_58.GroupHandle.Value = -1;
      if (local_58.ValueHandle.StorageIndex.Value == -1) {
        return;
      }
      bVar7 = FPreAnimatedStateExtension::MetaDataExists(this->ParentExtension,&local_58);
      if (!bVar7) {
        param_4 = param_4 & 0xffffff00;
        bVar7 = `UE::MovieScene::
                TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::
                ShouldTrackCaptureSource<unsigned_char_const_&>'::__l11::<lambda_1>::operator()
                          (&param_4);
        if (!bVar7) {
          return;
        }
      }
    }
  }
  else if (param_4 != AlwaysCache) {
    `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::
    ShouldTrackCaptureSource<unsigned_char_const_&>'::__l4::<lambda_2>::operator()(local_87);
    return;
  }
  ppFVar1 = &this->ParentExtension;
  GetOrCreateStorageIndex(this,(uchar *)local_70);
  local_68.ValueHandle.TypeID.TypeID = (this->StorageID).TypeID;
  local_68.ValueHandle.StorageIndex.Value = local_70[0];
  local_68.GroupHandle.Value = param_1.Value;
  if (EVar4 == CacheIfTracked) {
    this_00 = *ppFVar1;
    if (this_00->NumRequestsForGlobalState == 0) {
      if ((local_70[0] == -1) ||
         (bVar7 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_68), !bVar7)) {
        local_88 = 0;
        `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::
        TrackCaptureSource'::__l5::<lambda_1>::operator()(&local_88);
      }
    }
    else {
      FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_68);
    }
  }
  else if (EVar4 == AlwaysCache) {
    FPreAnimatedStateExtension::AddSourceMetaData(*ppFVar1,&local_68);
  }
  else {
    local_res10[0] = 0;
    `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::
    TrackCaptureSource'::__l4::<lambda_2>::operator()(local_res10);
  }
  EVar6 = FPreAnimatedStateExtension::GetStorageRequirement(*ppFVar1,&local_68);
  FVar5.Value = local_68.ValueHandle.StorageIndex.Value;
  local_78[0].Value = local_68.ValueHandle.StorageIndex.Value;
  if ((local_68.ValueHandle.StorageIndex.Value == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x1b6,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&this->PreAnimatedStorage + (longlong)FVar5.Value * 0x28;
  if (EVar6 == Persistent) {
    if ((*(byte *)(lVar2 + 0x24) & 1) != 0) {
      return;
    }
  }
  else {
    if (EVar6 != Transient) {
      return;
    }
    if ((*(byte *)(lVar2 + 0x24) & 3) == 1) {
      return;
    }
    pFVar10 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
              ::Find(&this->TransientPreAnimatedStorage,local_78);
    if (pFVar10 != (FPreAnimatedCameraCutState *)0x0) {
      return;
    }
  }
  FPreAnimatedCameraCutTraits::CachePreAnimatedValue(&local_48,param_3->PlaybackContext,*param_2);
  local_80[0].Value = local_70[0];
  if ((local_70[0] == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x195,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&this->PreAnimatedStorage + (longlong)local_80[0].Value * 0x28;
  if (EVar6 == Persistent) {
    if (((*(byte *)(lVar2 + 0x24) & 1) != 0) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352219>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x19b,"!CachedData.bInitialized"), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(FObjectKey *)(lVar2 + 4) = local_48.LastWorld;
    *(FObjectKey *)(lVar2 + 0xc) = local_48.LastLocalPlayer;
    *(FObjectKey *)(lVar2 + 0x14) = local_48.LastViewTarget;
    if (&local_48.LastAspectRatioAxisConstraint !=
        (TOptional<EAspectRatioAxisConstraint> *)(lVar2 + 0x1c)) {
      if (local_48.LastAspectRatioAxisConstraint.bIsSet == false) {
        if (*(char *)(lVar2 + 0x20) != '\0') {
          *(undefined1 *)(lVar2 + 0x20) = 0;
        }
      }
      else {
        *(EAspectRatioAxisConstraint *)(lVar2 + 0x1c) =
             local_48.LastAspectRatioAxisConstraint.TypedValue;
        *(undefined1 *)(lVar2 + 0x20) = 1;
      }
    }
    *(byte *)(lVar2 + 0x24) = *(byte *)(lVar2 + 0x24) | 3;
  }
  else if (EVar6 == Transient) {
    if ((*(byte *)(lVar2 + 0x24) & 1) != 0) {
      pFVar10 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                ::Find(&this->TransientPreAnimatedStorage,local_80);
      if ((pFVar10 != (FPreAnimatedCameraCutState *)0x0) &&
         (bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3111672766223352226>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                             ,0x1a2,
                             "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(byte *)(lVar2 + 0x24) & 1) != 0) {
        TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
        ::
        Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedCameraCutState>
                  (&this->TransientPreAnimatedStorage,local_80,&local_48);
        return;
      }
    }
    *(FObjectKey *)(lVar2 + 4) = local_48.LastWorld;
    *(FObjectKey *)(lVar2 + 0xc) = local_48.LastLocalPlayer;
    *(FObjectKey *)(lVar2 + 0x14) = local_48.LastViewTarget;
    if (&local_48.LastAspectRatioAxisConstraint !=
        (TOptional<EAspectRatioAxisConstraint> *)(lVar2 + 0x1c)) {
      if (local_48.LastAspectRatioAxisConstraint.bIsSet != false) {
        *(EAspectRatioAxisConstraint *)(lVar2 + 0x1c) =
             local_48.LastAspectRatioAxisConstraint.TypedValue;
        *(undefined1 *)(lVar2 + 0x20) = 1;
        *(byte *)(lVar2 + 0x24) = *(byte *)(lVar2 + 0x24) | 1;
        return;
      }
      if (*(char *)(lVar2 + 0x20) != '\0') {
        *(undefined1 *)(lVar2 + 0x20) = 0;
      }
    }
    *(byte *)(lVar2 + 0x24) = *(byte *)(lVar2 + 0x24) | 1;
  }
  return;
}

// CastChecked<UMovieSceneBoolSection_const_,UMovieSceneSection_const_> @ 146886200

UMovieSceneBoolSection * __cdecl
CastChecked<UMovieSceneBoolSection_const_,UMovieSceneSection_const_>(UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneBoolSection_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneBoolSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneBoolSection_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMovieSceneParticleSection_const_,UMovieSceneSection_const_> @ 1468862c0

UMovieSceneParticleSection * __cdecl
CastChecked<UMovieSceneParticleSection_const_,UMovieSceneSection_const_>
          (UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneParticleSection_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneParticleSection_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneParticleSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneParticleSection_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMovieScene3DPathSection,UMovieSceneSection_const_> @ 146886380

UMovieScene3DPathSection * __cdecl
CastChecked<UMovieScene3DPathSection,UMovieSceneSection_const_>(UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieScene3DPathSection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieScene3DPathSection_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieScene3DPathSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieScene3DPathSection>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMovieSceneActorReferenceSection,UMovieSceneSection_const_> @ 146886440

UMovieSceneActorReferenceSection * __cdecl
CastChecked<UMovieSceneActorReferenceSection,UMovieSceneSection_const_>(UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneActorReferenceSection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneActorReferenceSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneActorReferenceSection>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMovieSceneCVarSection,UMovieSceneSection> @ 146886500

UMovieSceneCVarSection * __cdecl
CastChecked<UMovieSceneCVarSection,UMovieSceneSection>
          (TObjectPtr<UMovieSceneSection> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UMovieSceneCVarSection *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UMovieSceneSection *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UMovieSceneCVarSection>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UMovieSceneCVarSection *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UMovieSceneCVarSection_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UMovieSceneCVarSection *)(param_1->field0_0x0).DebugPtr,
       pUVar4 == (UMovieSceneCVarSection *)0x0)) {
      pFVar3 = GetTypeName<UMovieSceneCVarSection>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UMovieSceneSection>
                         (&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CastChecked<UMovieSceneCameraCutSection,UMovieSceneSection> @ 1468865c0

UMovieSceneCameraCutSection * __cdecl
CastChecked<UMovieSceneCameraCutSection,UMovieSceneSection>(UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneCameraCutSection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneCameraCutSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneCameraCutSection>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneSection>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMovieSceneInterrogatedPropertyInstantiatorSystem,UMovieSceneEntitySystem> @ 146886680

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneInterrogatedPropertyInstantiatorSystem * __cdecl
CastChecked<UMovieSceneInterrogatedPropertyInstantiatorSystem,UMovieSceneEntitySystem>
          (UMovieSceneEntitySystem *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneEntitySystem *)0x0) {
    if (param_2 != NullChecked) {
      return (UMovieSceneInterrogatedPropertyInstantiatorSystem *)0x0;
    }
    pFVar3 = GetTypeName<UMovieSceneInterrogatedPropertyInstantiatorSystem>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneInterrogatedPropertyInstantiatorSystem *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneInterrogatedPropertyInstantiatorSystem>(&local_28);
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

// CastChecked<UMovieSceneParameterSection,UMovieSceneSection_const_> @ 146886760

UMovieSceneParameterSection * __cdecl
CastChecked<UMovieSceneParameterSection,UMovieSceneSection_const_>(UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneParameterSection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneParameterSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneParameterSection>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UWeightAndEasingEvaluatorSystem,UMovieSceneEntitySystem> @ 146886820

/* WARNING: Enum "Type": Some values do not have unique names */

UWeightAndEasingEvaluatorSystem * __cdecl
CastChecked<UWeightAndEasingEvaluatorSystem,UMovieSceneEntitySystem>
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
    pFVar3 = GetTypeName<UWeightAndEasingEvaluatorSystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWeightAndEasingEvaluatorSystem::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UWeightAndEasingEvaluatorSystem *)param_1;
  }
  pFVar3 = GetTypeName<UWeightAndEasingEvaluatorSystem>(&local_28);
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

// DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,int> @ 146886940

void __cdecl
DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,int>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString> *param_1,int param_2)

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

// DestructItems<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,int> @ 146886980

void __cdecl
DestructItems<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,int>
          (TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x198;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 0x36;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MovieScene::FIntermediatePropertyValue,int> @ 1468869d0

void __cdecl
DestructItems<UE::MovieScene::FIntermediatePropertyValue,int>
          (FIntermediatePropertyValue *param_1,int param_2)

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

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_&> @ 1468886f0

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x8)
  ;
  MovieScene::FComponentMask::Set
            (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x20);
  MovieScene::FComponentMask::Set
            (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x38);
  if (param_2->field_0x56 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x54);
  }
  if (param_2->field_0x6e != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x6c);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>::Initialize'::__l5::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_&> @ 146888770

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
          *param_2)

{
  MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>::Apply
            ((TAdd<UE::MovieScene::FSourceBoolChannel> *)&param_2->field_0x8,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
            ((TAdd<TSubclassOf<UMovieSceneBlenderSystem>_> *)&param_2->field_0x20,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAdd<FMovieScenePropertyBinding>::Apply
            ((TAdd<FMovieScenePropertyBinding> *)&param_2->field_0x38,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<FGuid>::Apply
            ((TAddConditional<FGuid> *)&param_2->field_0x54,(param_1->Entity).Data.Allocation,
             (param_1->Entity).Data.ComponentOffset);
  MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>::Apply
            ((TAddConditional<UE::MovieScene::FPropertyNotifyComponentData> *)&param_2->field_0x6c,
             (param_1->Entity).Data.Allocation,(param_1->Entity).Data.ComponentOffset);
  return;
}

// Emplace<TPairInitializer<FString_const_&,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo_&&>_> @ 1468895d0

FSetElementId __thiscall
TSet<TTuple<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo>,TDefaultMapHashableKeyFuncs<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,_UMovieSceneCVarTrackInstance::OnEndUpdateInputs_::__l2::FCVarInfo_&&>_>
          (void *this,
          TPairInitializer<FString_const_&,_private:_virtual_void___cdecl_UMovieSceneCVarTrackInstance::OnEndUpdateInputs(void)_::_2_::FCVarInfo_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int iVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar11 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x30);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar5);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<FString,_private:_virtual_void___cdecl_UMovieSceneCVarTrackInstance::OnEndUpdateInputs(void)_::_2_::FCVarInfo>_>
       *)0x0) {
    local_38.Pointer =
         (TSparseSetElement<TTuple<FString,_private:_virtual_void___cdecl_UMovieSceneCVarTrackInstance::OnEndUpdateInputs(void)_::_2_::FCVarInfo>_>
          *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0x1c) = *(undefined4 *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = *(undefined4 *)(puVar3 + 2);
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
  }
  iVar5 = 0;
  local_res8[0] = local_38.Index;
  if (*(int *)&((TSparseSetElement<TTuple<FString,_private:_virtual_void___cdecl_UMovieSceneCVarTrackInstance::OnEndUpdateInputs(void)_::_2_::FCVarInfo>_>
                 *)local_38.Pointer)->field_0x8 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)local_38.Pointer;
    iVar5 = *(int *)&((TSparseSetElement<TTuple<FString,_private:_virtual_void___cdecl_UMovieSceneCVarTrackInstance::OnEndUpdateInputs(void)_::_2_::FCVarInfo>_>
                       *)local_38.Pointer)->field_0x8 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
  bVar4 = TryReplaceExisting(this,uVar6,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar8 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= *(int *)((longlong)this + 0x48))) {
      uVar6 = *(int *)((longlong)this + 0x48) - 1U & uVar6;
      *(uint *)&((TSparseSetElement<TTuple<FString,_private:_virtual_void___cdecl_UMovieSceneCVarTrackInstance::OnEndUpdateInputs(void)_::_2_::FCVarInfo>_>
                  *)local_38.Pointer)->field_0x2c = uVar6;
      lVar10 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar10 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar6;
      *(undefined4 *)
       &((TSparseSetElement<TTuple<FString,_private:_virtual_void___cdecl_UMovieSceneCVarTrackInstance::OnEndUpdateInputs(void)_::_2_::FCVarInfo>_>
          *)local_38.Pointer)->field_0x28 = *(undefined4 *)(lVar10 + uVar7 * 4);
      *(int *)(lVar10 + uVar7 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// FindByPredicate<`UMovieSceneEventTrack::CustomCompile'::__l2::<lambda_1>_> @ 1468899b0

TObjectPtr<UMovieSceneSection> * __thiscall
TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UMovieSceneEventTrack::CustomCompile_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar1;
  int iVar2;
  TObjectPtr<UMovieSceneSection> TVar3;
  longlong lVar4;
  UClass *pUVar5;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar6;
  
  pTVar6 = (TObjectPtr<UMovieSceneSection>_u_0 *)(this->AllocatorInstance).Data;
  pTVar1 = pTVar6 + this->ArrayNum;
  do {
    if (pTVar6 == pTVar1) {
      return (TObjectPtr<UMovieSceneSection> *)0x0;
    }
    TVar3.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)pTVar6->DebugPtr;
    if (TVar3.field0_0x0 != (UMovieSceneSection *)0x0) {
      pUVar5 = Z_Construct_UClass_UMovieSceneEventSection_NoRegister();
      lVar4 = *(longlong *)((longlong)TVar3.field0_0x0 + 0x10);
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        return (TObjectPtr<UMovieSceneSection> *)pTVar6;
      }
    }
    pTVar6 = pTVar6 + 1;
  } while( true );
}

// GetFullNameForCastLogError<UMovieSceneSection_const_> @ 14688bce0

FString * __cdecl
GetFullNameForCastLogError<UMovieSceneSection_const_>
          (FString *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneBoolSection_const_> @ 14688c830

FString * __cdecl GetTypeName<UMovieSceneBoolSection_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneParticleSection_const_> @ 14688c870

FString * __cdecl GetTypeName<UMovieSceneParticleSection_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneParticleSection_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieScene3DPathSection> @ 14688c8b0

FString * __cdecl GetTypeName<UMovieScene3DPathSection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieScene3DPathSection_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneActorReferenceSection> @ 14688c8f0

FString * __cdecl GetTypeName<UMovieSceneActorReferenceSection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneBoolSection> @ 14688c930

FString * __cdecl GetTypeName<UMovieSceneBoolSection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneCVarSection> @ 14688c970

FString * __cdecl GetTypeName<UMovieSceneCVarSection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneCVarSection_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneCameraCutSection> @ 14688c9b0

FString * __cdecl GetTypeName<UMovieSceneCameraCutSection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneParameterSection> @ 14688c9f0

FString * __cdecl GetTypeName<UMovieSceneParameterSection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWeightAndEasingEvaluatorSystem> @ 14688ca30

FString * __cdecl GetTypeName<UWeightAndEasingEvaluatorSystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWeightAndEasingEvaluatorSystem::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,`UMovieSceneCommonAnimationTrack::SortSections'::__l2::<lambda_1>_>_> @ 14688ca70

void __cdecl
AlgoImpl::
HeapSortInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_UMovieSceneCommonAnimationTrack::SortSections_::__l2::<lambda_1>_>_>
          (TObjectPtr<UMovieSceneSection> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_private:_void___cdecl_UMovieSceneCommonAnimationTrack::SortSections(void)_::_2_::<lambda_1>_>
          param_4)

{
  FObjectPtr_u_0 FVar1;
  TObjectPtr<UMovieSceneSection>_u_0 TVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  <lambda_1> *local_res20;
  int iStack_24;
  int iStack_c;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_UMovieSceneCommonAnimationTrack::SortSections_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_private:_void___cdecl_UMovieSceneCommonAnimationTrack::SortSections(void)_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar11 = param_2 + -1;
  lVar9 = (longlong)iVar11;
  if (0 < iVar11) {
    do {
      iVar10 = 0;
      FVar1 = *(FObjectPtr_u_0 *)&param_1->field0_0x0;
      param_1->field0_0x0 = param_1[lVar9].field0_0x0;
      param_1[lVar9].field0_0x0.ObjectPtr.field0_0x0 = FVar1;
      if (1 < iVar11) {
        do {
          iVar4 = iVar10 * 2;
          iVar8 = iVar4 + 1;
          if (iVar4 + 2 < iVar11) {
            uVar7 = *(undefined8 *)
                     ((longlong)param_1[(longlong)iVar4 + 2].field0_0x0.DebugPtr + 0xb0);
            if ((char)uVar7 == '\0') {
              uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + 1,1);
            }
            uVar6 = *(undefined8 *)((longlong)param_1[iVar8].field0_0x0.DebugPtr + 0xb0);
            if ((char)uVar6 == '\0') {
              uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) + 1,1);
            }
            if ((char)uVar7 == '\x02') {
              bVar5 = true;
            }
            else if ((char)uVar6 == '\x02') {
              bVar5 = false;
            }
            else {
              iStack_24 = (int)((ulonglong)uVar7 >> 0x20);
              bVar5 = iStack_24 < (int)((ulonglong)uVar6 >> 0x20);
            }
            if (bVar5) {
              iVar8 = iVar4;
            }
            iVar8 = iVar8 + 1;
          }
          uVar7 = *(undefined8 *)((longlong)param_1[iVar10].field0_0x0.DebugPtr + 0xb0);
          if ((char)uVar7 == '\0') {
            uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + 1,1);
          }
          uVar6 = *(undefined8 *)((longlong)param_1[iVar8].field0_0x0.DebugPtr + 0xb0);
          if ((char)uVar6 == '\0') {
            uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) + 1,1);
          }
          if (((char)uVar7 != '\x02') &&
             (((char)uVar6 == '\x02' ||
              (iStack_c = (int)((ulonglong)uVar7 >> 0x20),
              (int)((ulonglong)uVar6 >> 0x20) <= iStack_c)))) break;
          TVar2 = param_1[iVar10].field0_0x0;
          param_1[iVar10].field0_0x0 = param_1[iVar8].field0_0x0;
          param_1[iVar8].field0_0x0 = TVar2;
          iVar10 = iVar8;
        } while (iVar8 * 2 + 1 < iVar11);
      }
      iVar11 = iVar11 + -1;
      lVar9 = lVar9 + -1;
    } while (0 < lVar9);
  }
  return;
}

// HeapSortInternal<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,FIdentityFunctor,`UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs'::__l2::<lambda_1>_> @ 14688cc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,FIdentityFunctor,_UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs_::__l2::<lambda_1>_>
          (FCameraCutInputInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FCameraCutInputInfo *pFVar1;
  FCameraCutInputInfo *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  TObjectPtr<UMovieSceneSection>_u_0 TVar8;
  FInstanceHandle FVar9;
  undefined3 uVar10;
  undefined4 uVar11;
  FInstanceHandle FVar12;
  bool bVar13;
  undefined3 uVar14;
  float fVar15;
  undefined4 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  FCameraCutInputInfo *pFVar20;
  longlong lVar21;
  int iVar22;
  FInstanceRegistry *local_res20;
  
  local_res20 = param_4.InstanceRegistry;
  if (param_2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,FIdentityFunctor,TReversePredicate<_UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs_::__l2::<lambda_1>_>_>
            (param_1,param_2,param_3,(<lambda_1> *)&local_res20);
  iVar18 = param_2 + -1;
  lVar21 = (longlong)iVar18;
  if (0 < iVar18) {
    pFVar20 = param_1 + lVar21;
    do {
      FVar9 = (pFVar20->Input).InstanceHandle;
      bVar17 = (pFVar20->Input).bInputHasBeenProcessed;
      uVar10 = *(undefined3 *)&(pFVar20->Input).field_0xd;
      fVar15 = param_1->GlobalStartTime;
      uVar16 = *(undefined4 *)&param_1->field_0x14;
      TVar8 = (param_1->Input).Section.field0_0x0;
      FVar12 = (param_1->Input).InstanceHandle;
      bVar13 = (param_1->Input).bInputHasBeenProcessed;
      uVar14 = *(undefined3 *)&(param_1->Input).field_0xd;
      (param_1->Input).Section.field0_0x0 = (pFVar20->Input).Section.field0_0x0;
      (param_1->Input).InstanceHandle = FVar9;
      (param_1->Input).bInputHasBeenProcessed = bVar17;
      *(undefined3 *)&(param_1->Input).field_0xd = uVar10;
      uVar11 = *(undefined4 *)&pFVar20->field_0x14;
      param_1->GlobalStartTime = pFVar20->GlobalStartTime;
      *(undefined4 *)&param_1->field_0x14 = uVar11;
      (pFVar20->Input).Section.field0_0x0 = TVar8;
      (pFVar20->Input).InstanceHandle = FVar12;
      (pFVar20->Input).bInputHasBeenProcessed = bVar13;
      *(undefined3 *)&(pFVar20->Input).field_0xd = uVar14;
      pFVar20->GlobalStartTime = fVar15;
      *(undefined4 *)&pFVar20->field_0x14 = uVar16;
      if (1 < iVar18) {
        iVar22 = 0;
        do {
          iVar4 = iVar22 * 2;
          iVar19 = iVar4 + 1;
          if (iVar4 + 2 < iVar18) {
            lVar6 = *(longlong *)&local_res20->Instances;
            iVar5 = *(int *)((ulonglong)param_1[(longlong)iVar4 + 2].Input.InstanceHandle.InstanceID
                             * 0x140 + 0xe0 + lVar6);
            iVar3 = *(int *)((ulonglong)param_1[(longlong)iVar4 + 1].Input.InstanceHandle.InstanceID
                             * 0x140 + 0xe0 + lVar6);
            if (iVar3 < iVar5) {
              bVar17 = true;
            }
            else if (iVar5 < iVar3) {
              bVar17 = false;
            }
            else {
              bVar17 = param_1[(longlong)iVar4 + 1].GlobalStartTime <
                       param_1[(longlong)iVar4 + 2].GlobalStartTime;
            }
            if (bVar17) {
              iVar19 = iVar4;
            }
            iVar19 = iVar19 + 1;
          }
          lVar6 = *(longlong *)&local_res20->Instances;
          iVar3 = *(int *)((ulonglong)param_1[iVar22].Input.InstanceHandle.InstanceID * 0x140 + 0xe0
                          + lVar6);
          iVar4 = *(int *)((ulonglong)param_1[iVar19].Input.InstanceHandle.InstanceID * 0x140 + 0xe0
                          + lVar6);
          if ((iVar3 <= iVar4) &&
             ((iVar3 < iVar4 || (param_1[iVar22].GlobalStartTime <= param_1[iVar19].GlobalStartTime)
              ))) break;
          pFVar1 = param_1 + iVar19;
          FVar9 = (pFVar1->Input).InstanceHandle;
          bVar17 = (pFVar1->Input).bInputHasBeenProcessed;
          uVar10 = *(undefined3 *)&(pFVar1->Input).field_0xd;
          fVar15 = param_1[iVar22].GlobalStartTime;
          uVar16 = *(undefined4 *)&param_1[iVar22].field_0x14;
          pFVar2 = param_1 + iVar22;
          TVar8 = (pFVar2->Input).Section.field0_0x0;
          FVar12 = (pFVar2->Input).InstanceHandle;
          bVar13 = (pFVar2->Input).bInputHasBeenProcessed;
          uVar14 = *(undefined3 *)&(pFVar2->Input).field_0xd;
          pFVar2 = param_1 + iVar22;
          (pFVar2->Input).Section.field0_0x0 = (pFVar1->Input).Section.field0_0x0;
          (pFVar2->Input).InstanceHandle = FVar9;
          (pFVar2->Input).bInputHasBeenProcessed = bVar17;
          *(undefined3 *)&(pFVar2->Input).field_0xd = uVar10;
          uVar11 = *(undefined4 *)&param_1[iVar19].field_0x14;
          param_1[iVar22].GlobalStartTime = param_1[iVar19].GlobalStartTime;
          *(undefined4 *)&param_1[iVar22].field_0x14 = uVar11;
          pFVar1 = param_1 + iVar19;
          (pFVar1->Input).Section.field0_0x0 = TVar8;
          (pFVar1->Input).InstanceHandle = FVar12;
          (pFVar1->Input).bInputHasBeenProcessed = bVar13;
          *(undefined3 *)&(pFVar1->Input).field_0xd = uVar14;
          param_1[iVar19].GlobalStartTime = fVar15;
          *(undefined4 *)&param_1[iVar19].field_0x14 = uVar16;
          iVar22 = iVar19;
        } while (iVar19 * 2 + 1 < iVar18);
      }
      iVar18 = iVar18 + -1;
      lVar21 = lVar21 + -1;
      pFVar20 = pFVar20 + -1;
    } while (0 < lVar21);
  }
  return;
}

// HeapSortInternal<UE::MovieScene::FCinematicShotSectionSortData,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_> @ 14688cea0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::MovieScene::FCinematicShotSectionSortData,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_>
          (FCinematicShotSectionSortData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_> param_4)

{
  longlong lVar1;
  longlong lVar2;
  FCinematicShotSectionSortData *pFVar3;
  FCinematicShotSectionSortData *pFVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FCinematicShotSectionSortData *pFVar12;
  int iVar13;
  longlong lVar14;
  TLess<void> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UE::MovieScene::FCinematicShotSectionSortData,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_> *)
             &local_res20);
  iVar13 = param_2 + -1;
  lVar14 = (longlong)iVar13;
  if (0 < iVar13) {
    pFVar12 = param_1 + lVar14;
    do {
      iVar10 = pFVar12->OverlapPriority;
      iVar6 = param_1->Row;
      iVar7 = param_1->OverlapPriority;
      iVar11 = param_1->SectionIndex;
      param_1->Row = pFVar12->Row;
      param_1->OverlapPriority = iVar10;
      param_1->SectionIndex = pFVar12->SectionIndex;
      pFVar12->Row = iVar6;
      pFVar12->OverlapPriority = iVar7;
      pFVar12->SectionIndex = iVar11;
      iVar11 = 0;
      if (1 < iVar13) {
        do {
          iVar6 = iVar11 * 2;
          iVar10 = iVar6 + 1;
          if (iVar6 + 2 < iVar13) {
            lVar1 = (longlong)iVar6 + 2;
            lVar2 = (longlong)iVar6 + 1;
            if (param_1[lVar1].Row == param_1[lVar2].Row) {
              bVar9 = param_1[lVar2].OverlapPriority < param_1[lVar1].OverlapPriority;
            }
            else {
              bVar9 = param_1[lVar1].Row < param_1[lVar2].Row;
            }
            if (bVar9) {
              iVar10 = iVar6;
            }
            iVar10 = iVar10 + 1;
          }
          pFVar3 = param_1 + iVar10;
          pFVar4 = param_1 + iVar11;
          if (param_1[iVar11].Row == param_1[iVar10].Row) {
            bVar9 = pFVar3->OverlapPriority < pFVar4->OverlapPriority;
          }
          else {
            bVar9 = param_1[iVar11].Row < param_1[iVar10].Row;
          }
          if (!bVar9) break;
          iVar6 = pFVar3->OverlapPriority;
          iVar7 = pFVar4->Row;
          iVar8 = pFVar4->OverlapPriority;
          iVar11 = pFVar4->SectionIndex;
          pFVar4->Row = pFVar3->Row;
          pFVar4->OverlapPriority = iVar6;
          pFVar4->SectionIndex = pFVar3->SectionIndex;
          pFVar3->Row = iVar7;
          pFVar3->OverlapPriority = iVar8;
          pFVar3->SectionIndex = iVar11;
          iVar11 = iVar10;
        } while (iVar10 * 2 + 1 < iVar13);
      }
      iVar13 = iVar13 + -1;
      lVar14 = lVar14 + -1;
      pFVar12 = pFVar12 + -1;
    } while (0 < lVar14);
  }
  return;
}

// HeapifyInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,`UMovieSceneCommonAnimationTrack::SortSections'::__l2::<lambda_1>_>_>_> @ 14688d040

void __cdecl
AlgoImpl::
HeapifyInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_UMovieSceneCommonAnimationTrack::SortSections_::__l2::<lambda_1>_>_>_>
          (TObjectPtr<UMovieSceneSection> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_private:_void___cdecl_UMovieSceneCommonAnimationTrack::SortSections(void)_::_2_::<lambda_1>_>_>
          param_4)

{
  TObjectPtr<UMovieSceneSection>_u_0 TVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_24;
  int iStack_c;
  
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
  iVar9 = iVar5 * 2 + 1;
  iVar3 = iVar9;
  iVar10 = iVar5;
  do {
    while (param_2 <= iVar9) {
LAB_14688d1ea:
      if (iVar10 == 0) {
        return;
      }
      iVar5 = iVar10 + -1;
      iVar9 = iVar3 + -2;
      iVar3 = iVar9;
      iVar10 = iVar5;
    }
    iVar9 = iVar5 * 2;
    iVar8 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      uVar7 = *(undefined8 *)((longlong)param_1[(longlong)iVar9 + 2].field0_0x0.DebugPtr + 0xb0);
      if ((char)uVar7 == '\0') {
        uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + 1,1);
      }
      uVar6 = *(undefined8 *)((longlong)param_1[iVar8].field0_0x0.DebugPtr + 0xb0);
      if ((char)uVar6 == '\0') {
        uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) + 1,1);
      }
      if ((char)uVar7 == '\x02') {
        bVar4 = true;
      }
      else if ((char)uVar6 == '\x02') {
        bVar4 = false;
      }
      else {
        iStack_24 = (int)((ulonglong)uVar7 >> 0x20);
        bVar4 = iStack_24 < (int)((ulonglong)uVar6 >> 0x20);
      }
      if (bVar4) {
        iVar8 = iVar9;
      }
      iVar8 = iVar8 + 1;
    }
    uVar7 = *(undefined8 *)((longlong)param_1[iVar5].field0_0x0.DebugPtr + 0xb0);
    if ((char)uVar7 == '\0') {
      uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + 1,1);
    }
    uVar6 = *(undefined8 *)((longlong)param_1[iVar8].field0_0x0.DebugPtr + 0xb0);
    if ((char)uVar6 == '\0') {
      uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) + 1,1);
    }
    if (((char)uVar7 != '\x02') &&
       (((char)uVar6 == '\x02' ||
        (iStack_c = (int)((ulonglong)uVar7 >> 0x20), (int)((ulonglong)uVar6 >> 0x20) <= iStack_c))))
    goto LAB_14688d1ea;
    TVar1 = param_1[iVar5].field0_0x0;
    param_1[iVar5].field0_0x0 = param_1[iVar8].field0_0x0;
    iVar9 = iVar8 * 2 + 1;
    param_1[iVar8].field0_0x0 = TVar1;
    iVar5 = iVar8;
  } while( true );
}

// HeapifyInternal<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,FIdentityFunctor,TReversePredicate<`UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs'::__l2::<lambda_1>_>_> @ 14688d210

/* WARNING: Removing unreachable block (ram,0x00014688d2e6) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapifyInternal<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,FIdentityFunctor,TReversePredicate<_UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs_::__l2::<lambda_1>_>_>
          (FCameraCutInputInfo *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_private:_virtual_void___cdecl_UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs(void)_::_2_::<lambda_1>_>
          param_4)

{
  FCameraCutInputInfo *pFVar1;
  FCameraCutInputInfo *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  TObjectPtr<UMovieSceneSection>_u_0 TVar8;
  FInstanceHandle FVar9;
  undefined3 uVar10;
  undefined4 uVar11;
  FInstanceHandle FVar12;
  bool bVar13;
  undefined3 uVar14;
  float fVar15;
  undefined4 uVar16;
  bool bVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  if (param_2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar18 = (param_2 + -2) / 2;
  iVar21 = iVar18 * 2;
  iVar7 = iVar21;
  iVar22 = iVar18;
  do {
    while (param_2 <= iVar21 + 1) {
LAB_14688d3a9:
      if (iVar22 == 0) {
        return;
      }
      iVar18 = iVar22 + -1;
      iVar21 = iVar7 + -2;
      iVar7 = iVar21;
      iVar22 = iVar18;
    }
    iVar20 = iVar21;
    if (iVar21 + 2 < param_2) {
      lVar5 = *(longlong *)&(param_4.Predicate)->InstanceRegistry->Instances;
      iVar4 = *(int *)((ulonglong)param_1[(longlong)iVar21 + 2].Input.InstanceHandle.InstanceID *
                       0x140 + 0xe0 + lVar5);
      iVar3 = *(int *)((ulonglong)param_1[(longlong)iVar21 + 1].Input.InstanceHandle.InstanceID *
                       0x140 + 0xe0 + lVar5);
      if (iVar4 <= iVar3) {
        if (iVar4 < iVar3) {
          iVar20 = iVar21 + 1;
        }
        else {
          iVar20 = iVar21 + 1;
          if (param_1[(longlong)iVar21 + 1].GlobalStartTime <
              param_1[(longlong)iVar21 + 2].GlobalStartTime) {
            iVar20 = iVar21;
          }
        }
      }
    }
    lVar19 = (longlong)iVar20 + 1;
    lVar5 = *(longlong *)&(param_4.Predicate)->InstanceRegistry->Instances;
    iVar3 = *(int *)((ulonglong)param_1[iVar18].Input.InstanceHandle.InstanceID * 0x140 + 0xe0 +
                    lVar5);
    iVar21 = *(int *)((ulonglong)param_1[lVar19].Input.InstanceHandle.InstanceID * 0x140 + 0xe0 +
                     lVar5);
    if ((iVar3 <= iVar21) &&
       ((iVar3 < iVar21 || (param_1[iVar18].GlobalStartTime <= param_1[lVar19].GlobalStartTime))))
    goto LAB_14688d3a9;
    pFVar1 = param_1 + iVar18;
    TVar8 = (pFVar1->Input).Section.field0_0x0;
    FVar12 = (pFVar1->Input).InstanceHandle;
    bVar13 = (pFVar1->Input).bInputHasBeenProcessed;
    uVar14 = *(undefined3 *)&(pFVar1->Input).field_0xd;
    fVar15 = param_1[iVar18].GlobalStartTime;
    uVar16 = *(undefined4 *)&param_1[iVar18].field_0x14;
    pFVar1 = param_1 + lVar19;
    FVar9 = (pFVar1->Input).InstanceHandle;
    bVar17 = (pFVar1->Input).bInputHasBeenProcessed;
    uVar10 = *(undefined3 *)&(pFVar1->Input).field_0xd;
    pFVar2 = param_1 + iVar18;
    (pFVar2->Input).Section.field0_0x0 = (pFVar1->Input).Section.field0_0x0;
    (pFVar2->Input).InstanceHandle = FVar9;
    (pFVar2->Input).bInputHasBeenProcessed = bVar17;
    *(undefined3 *)&(pFVar2->Input).field_0xd = uVar10;
    uVar11 = *(undefined4 *)&param_1[lVar19].field_0x14;
    param_1[iVar18].GlobalStartTime = param_1[lVar19].GlobalStartTime;
    *(undefined4 *)&param_1[iVar18].field_0x14 = uVar11;
    iVar21 = (iVar20 + 1) * 2;
    pFVar1 = param_1 + lVar19;
    (pFVar1->Input).Section.field0_0x0 = TVar8;
    (pFVar1->Input).InstanceHandle = FVar12;
    (pFVar1->Input).bInputHasBeenProcessed = bVar13;
    *(undefined3 *)&(pFVar1->Input).field_0xd = uVar14;
    param_1[lVar19].GlobalStartTime = fVar15;
    *(undefined4 *)&param_1[lVar19].field_0x14 = uVar16;
    iVar18 = iVar20 + 1;
  } while( true );
}

// HeapifyInternal<UE::MovieScene::FCinematicShotSectionSortData,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_>_> @ 14688d3e0

void __cdecl
AlgoImpl::
HeapifyInternal<UE::MovieScene::FCinematicShotSectionSortData,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_>_>
          (FCinematicShotSectionSortData *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  FCinematicShotSectionSortData *pFVar3;
  FCinematicShotSectionSortData *pFVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar13 = iVar11 * 2 + 1;
  iVar6 = iVar13;
  iVar14 = iVar11;
  do {
    while (param_2 <= iVar13) {
LAB_14688d50a:
      if (iVar14 == 0) {
        return;
      }
      iVar11 = iVar14 + -1;
      iVar13 = iVar6 + -2;
      iVar6 = iVar13;
      iVar14 = iVar11;
    }
    iVar13 = iVar11 * 2;
    iVar12 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      lVar1 = (longlong)iVar13 + 2;
      lVar2 = (longlong)iVar13 + 1;
      if (param_1[lVar1].Row == param_1[lVar2].Row) {
        bVar10 = param_1[lVar2].OverlapPriority < param_1[lVar1].OverlapPriority;
      }
      else {
        bVar10 = param_1[lVar1].Row < param_1[lVar2].Row;
      }
      if (bVar10) {
        iVar12 = iVar13;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar3 = param_1 + iVar12;
    pFVar4 = param_1 + iVar11;
    if (param_1[iVar11].Row == param_1[iVar12].Row) {
      bVar10 = pFVar3->OverlapPriority < pFVar4->OverlapPriority;
    }
    else {
      bVar10 = param_1[iVar11].Row < param_1[iVar12].Row;
    }
    if (!bVar10) goto LAB_14688d50a;
    iVar7 = pFVar3->OverlapPriority;
    iVar8 = pFVar4->Row;
    iVar9 = pFVar4->OverlapPriority;
    iVar13 = iVar12 * 2 + 1;
    iVar11 = pFVar4->SectionIndex;
    pFVar4->Row = pFVar3->Row;
    pFVar4->OverlapPriority = iVar7;
    pFVar4->SectionIndex = pFVar3->SectionIndex;
    pFVar3->Row = iVar8;
    pFVar3->OverlapPriority = iVar9;
    pFVar3->SectionIndex = iVar11;
    iVar11 = iVar12;
  } while( true );
}

// IndexOfBy<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>,TObjectPtr<UMovieSceneSection>,FIdentityFunctor> @ 14688d540

int __cdecl
AlgoImpl::
IndexOfBy<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>,TObjectPtr<UMovieSceneSection>,FIdentityFunctor>
          (TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *param_1,
          TObjectPtr<UMovieSceneSection> *param_2,FIdentityFunctor param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (0 < param_1->ArrayNum) {
    uVar2 = uVar1;
    do {
      if (*(UMovieSceneSection **)((param_1->AllocatorInstance).Data + uVar1 * 8) ==
          (param_2->field0_0x0).DebugPtr) {
        return (int)uVar2;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// InternalConstructor<UMovieScene3DAttachTrack> @ 14688e640

void __cdecl InternalConstructor<UMovieScene3DAttachTrack>(FObjectInitializer *param_1)

{
  UMovieSceneTrack *this;
  
  this = (UMovieSceneTrack *)param_1->Obj;
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UMovieScene3DAttachTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieScene3DAttachTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  }
  return;
}

// InternalConstructor<UMovieScene3DConstraintTrack> @ 14688e690

void __cdecl InternalConstructor<UMovieScene3DConstraintTrack>(FObjectInitializer *param_1)

{
  UMovieSceneTrack *this;
  
  this = (UMovieSceneTrack *)param_1->Obj;
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this->_padding_ =
         (longlong)
         &UMovieScene3DConstraintTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieScene3DConstraintTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieScene3DPathTrack> @ 14688e6e0

void __cdecl InternalConstructor<UMovieScene3DPathTrack>(FObjectInitializer *param_1)

{
  UMovieSceneTrack *this;
  
  this = (UMovieSceneTrack *)param_1->Obj;
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UMovieScene3DPathTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ = (longlong)&UMovieScene3DPathTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
    ;
    this[1]._padding_ = (longlong)&___7UMovieScene3DPathTrack__6B_;
  }
  return;
}

// InternalConstructor<UMovieScene3DTransformTrack> @ 14688e740

void __cdecl InternalConstructor<UMovieScene3DTransformTrack>(FObjectInitializer *param_1)

{
  undefined1 uVar1;
  UMovieScenePropertyTrack *this;
  void *pvVar2;
  FMovieSceneBlendTypeField FVar3;
  FString *pFVar4;
  undefined7 extraout_var;
  FString local_18;
  
  this = (UMovieScenePropertyTrack *)param_1->Obj;
  if (this != (UMovieScenePropertyTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
    (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
    this->_padding_ =
         (longlong)
         &UMovieScene3DTransformTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieScene3DTransformTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    (this->PropertyBinding).PropertyName.ComparisonIndex = 0;
    (this->PropertyBinding).PropertyName.Number = 0;
    (this->PropertyBinding).PropertyPath.ComparisonIndex = 0;
    (this->PropertyBinding).PropertyPath.Number = 0;
    (this->PropertyBinding).bCanUseClassLookup = false;
    (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Sections).ArrayNum = 0;
    (this->Sections).ArrayMax = 0;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
    this[1]._padding_ = (longlong)&___7UMovieScene3DTransformTrack__6B_;
    pvVar2 = ThreadLocalStoragePointer;
    this[1]._padding_ = 0;
    if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FName::FName(&Transform,"Transform");
        _Init_thread_footer(&_TSS0);
      }
    }
    pFVar4 = FName::ToString(&Transform,&local_18);
    UMovieScenePropertyTrack::SetPropertyNameAndPath(this,Transform,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar3 = FMovieSceneBlendTypeField::All();
    uVar1 = *(undefined1 *)CONCAT71(extraout_var,FVar3.BlendTypeField);
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
    *(undefined1 *)&this->_padding_ = uVar1;
  }
  return;
}

// InternalConstructor<UMovieSceneActorReferenceTrack> @ 14688e870

void __cdecl InternalConstructor<UMovieSceneActorReferenceTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this =
         &UMovieSceneActorReferenceTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneActorReferenceTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)&this[1].field_0x30 = &___7UMovieSceneActorReferenceTrack__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneAudioTrack> @ 14688e8f0

void __cdecl InternalConstructor<UMovieSceneAudioTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneAudioTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneAudioTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Absolute);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneBoolTrack> @ 14688e950

void __cdecl InternalConstructor<UMovieSceneBoolTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this =
         &UMovieSceneBoolTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneBoolTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)&this[1].field_0x30 =
         &UMovieSceneBoolTrack::_vftable__for__IMovieSceneTrackTemplateProducer__;
    *(undefined ***)&this[1].field_0x38 =
         &UMovieSceneBoolTrack::_vftable__for__IMovieSceneEntityProvider__;
  }
  return;
}

// InternalConstructor<UMovieSceneByteTrack> @ 14688e9e0

void __cdecl InternalConstructor<UMovieSceneByteTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined ***)this =
         &UMovieSceneByteTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneByteTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCVarTrack> @ 14688ea50

void __cdecl InternalConstructor<UMovieSceneCVarTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneCVarTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCVarTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 & 0xfffffff3;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCVarTrackInstance> @ 14688eaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneCVarTrackInstance>(FObjectInitializer *param_1)

{
  UMovieSceneTrackInstance *this;
  
  this = (UMovieSceneTrackInstance *)param_1->Obj;
  if (this != (UMovieSceneTrackInstance *)0x0) {
    UMovieSceneTrackInstance::UMovieSceneTrackInstance(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneCVarTrackInstance__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].WeakAnimatedObject.WeakPtr.ObjectIndex = 0;
    this[1].WeakAnimatedObject.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this[1].bIsRootTrackInstance = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    this[1].Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Inputs.ArrayNum = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCameraCutTrack> @ 14688eb10

void __cdecl InternalConstructor<UMovieSceneCameraCutTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 & 0xfffffff3;
    *(undefined ***)this =
         &UMovieSceneCameraCutTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCameraCutTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1].field_0x18 = 1;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Absolute);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneCameraCutTrackInstance> @ 14688eb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneCameraCutTrackInstance>(FObjectInitializer *param_1)

{
  UMovieSceneTrackInstance *this;
  
  this = (UMovieSceneTrackInstance *)param_1->Obj;
  if (this != (UMovieSceneTrackInstance *)0x0) {
    UMovieSceneTrackInstance::UMovieSceneTrackInstance(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneCameraCutTrackInstance__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffff;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCameraShakeSourceShakeTrack> @ 14688ebd0

void __cdecl
InternalConstructor<UMovieSceneCameraShakeSourceShakeTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneCameraShakeSourceShakeTrack::
          _vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCameraShakeSourceShakeTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCameraShakeSourceTriggerTrack> @ 14688ec20

void __cdecl
InternalConstructor<UMovieSceneCameraShakeSourceTriggerTrack>(FObjectInitializer *param_1)

{
  UMovieSceneTrack *this;
  
  this = (UMovieSceneTrack *)param_1->Obj;
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this->_padding_ =
         (longlong)
         &UMovieSceneCameraShakeSourceTriggerTrack::
          _vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)
         &UMovieSceneCameraShakeSourceTriggerTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCameraShakeTrack> @ 14688ec70

void __cdecl InternalConstructor<UMovieSceneCameraShakeTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneCameraShakeTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCameraShakeTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCinematicShotTrack> @ 14688ecc0

void __cdecl InternalConstructor<UMovieSceneCinematicShotTrack>(FObjectInitializer *param_1)

{
  UMovieSceneSubTrack *this;
  
  this = (UMovieSceneSubTrack *)param_1->Obj;
  if (this != (UMovieSceneSubTrack *)0x0) {
    UMovieSceneSubTrack::UMovieSceneSubTrack(this,param_1);
    this->_padding_ =
         (longlong)
         &UMovieSceneCinematicShotTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieSceneCinematicShotTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  }
  return;
}

// InternalConstructor<UMovieSceneColorTrack> @ 14688ed00

void __cdecl InternalConstructor<UMovieSceneColorTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this =
         &UMovieSceneColorTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneColorTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FVar1 = FMovieSceneBlendTypeField::All();
    this->field_0x88 = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  return;
}

// InternalConstructor<UMovieSceneCommonAnimationTrack> @ 14688ed80

void __cdecl InternalConstructor<UMovieSceneCommonAnimationTrack>(FObjectInitializer *param_1)

{
  if ((UMovieSceneCommonAnimationTrack *)param_1->Obj != (UMovieSceneCommonAnimationTrack *)0x0) {
    UMovieSceneCommonAnimationTrack::UMovieSceneCommonAnimationTrack
              ((UMovieSceneCommonAnimationTrack *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneComponentMaterialTrack> @ 14688eda0

void __cdecl InternalConstructor<UMovieSceneComponentMaterialTrack>(FObjectInitializer *param_1)

{
  UMovieSceneMaterialTrack *this;
  
  this = (UMovieSceneMaterialTrack *)param_1->Obj;
  if (this != (UMovieSceneMaterialTrack *)0x0) {
    UMovieSceneMaterialTrack::UMovieSceneMaterialTrack(this,param_1);
    *(undefined1 *)&this->_padding_ = 1;
    this->_padding_ =
         (longlong)
         &UMovieSceneComponentMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieSceneComponentMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ =
         (longlong)&UMovieSceneComponentMaterialTrack::_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ =
         (longlong)
         &UMovieSceneComponentMaterialTrack::_vftable__for__IMovieSceneParameterSectionExtender__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCustomPrimitiveDataTrack> @ 14688ee20

void __cdecl InternalConstructor<UMovieSceneCustomPrimitiveDataTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  undefined1 *this_00;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    this->field_0xa0 = 1;
    *(undefined ***)this =
         &UMovieSceneCustomPrimitiveDataTrack::_vftable__for__UMovieSceneDecorationContainerObject__
    ;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCustomPrimitiveDataTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) =
         &UMovieSceneCustomPrimitiveDataTrack::_vftable__for__IMovieSceneEntityProvider__;
    *(undefined ***)&this[1].field_0x8 =
         &UMovieSceneCustomPrimitiveDataTrack::_vftable__for__IMovieSceneParameterSectionExtender__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this_00 = &this->field_0x88;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)this_00,Absolute);
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)this_00,Additive);
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)this_00,AdditiveFromBase);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneDataLayerTrack> @ 14688eed0

void __cdecl InternalConstructor<UMovieSceneDataLayerTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneDataLayerTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneDataLayerTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0xc;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneDecomposerTestObject> @ 14688ef20

void __cdecl InternalConstructor<UMovieSceneDecomposerTestObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UMovieSceneDecomposerTestObject__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneDoubleTrack> @ 14688ef60

void __cdecl InternalConstructor<UMovieSceneDoubleTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this =
         &UMovieSceneDoubleTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneDoubleTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FVar1 = FMovieSceneBlendTypeField::All();
    this->field_0x88 = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  return;
}

// InternalConstructor<UMovieSceneDoubleVectorPropertySystem> @ 14688efe0

void __cdecl InternalConstructor<UMovieSceneDoubleVectorPropertySystem>(FObjectInitializer *param_1)

{
  UMovieScenePropertySystem *this;
  code *pcVar1;
  bool bVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  UObject *local_res8;
  UClass *local_res10;
  UObject *local_res18;
  UClass *local_res20;
  
  this = (UMovieScenePropertySystem *)param_1->Obj;
  if (this != (UMovieScenePropertySystem *)0x0) {
    UMovieScenePropertySystem::UMovieScenePropertySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneDoubleVectorPropertySystem::_vftable__for__UMovieSceneEntitySystem__;
    this->_padding_ =
         (longlong)
         &UMovieSceneDoubleVectorPropertySystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    if ((((short)this->_padding_ != -1) || ((this->CompositePropertyID).TypeIndex != -1)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!RelevantComponent && !CompositePropertyID",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieScenePropertySystem.h"
                           ,0x1f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(ushort *)&this->_padding_ = (pFVar3->DoubleVector).PropertyTag.Value;
    (this->CompositePropertyID).TypeIndex = (int)(pFVar3->DoubleVector).CompositeID;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10 = Z_Construct_UClass_UDoubleChannelEvaluatorSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
      local_res18 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res18);
      }
      local_res20 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res20,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res18);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneDoubleVectorTrack> @ 14688f140

void __cdecl InternalConstructor<UMovieSceneDoubleVectorTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined ***)this =
         &UMovieSceneDoubleVectorTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x30 = 0;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneDoubleVectorTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FVar1 = FMovieSceneBlendTypeField::All();
    this->field_0x88 = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  return;
}

// InternalConstructor<UMovieSceneEnumTrack> @ 14688f1d0

void __cdecl InternalConstructor<UMovieSceneEnumTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined ***)this =
         &UMovieSceneEnumTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneEnumTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneEulerTransformTrack> @ 14688f240

void __cdecl InternalConstructor<UMovieSceneEulerTransformTrack>(FObjectInitializer *param_1)

{
  undefined1 uVar1;
  UMovieSceneNameableTrack *this;
  FMovieSceneBlendTypeField FVar2;
  undefined7 extraout_var;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined ***)this =
         &UMovieSceneEulerTransformTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneEulerTransformTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FVar2 = FMovieSceneBlendTypeField::All();
    uVar1 = *(undefined1 *)CONCAT71(extraout_var,FVar2.BlendTypeField);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    this->field_0x88 = uVar1;
  }
  return;
}

// InternalConstructor<UMovieSceneEventTrack> @ 14688f2c0

void __cdecl InternalConstructor<UMovieSceneEventTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  FObjectInitializer *pFVar1;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,pFVar1);
    *(uint *)&this[1].field_0x10 = *(uint *)&this[1].field_0x10 | 3;
    *(undefined ***)this =
         &UMovieSceneEventTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneEventTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) =
         &UMovieSceneEventTrack::_vftable__for__IMovieSceneTrackTemplateProducer__;
    *(undefined ***)&this[1].field_0x8 =
         &UMovieSceneEventTrack::_vftable__for__IMovieSceneDeterminismSource__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[1].field_0x14 = 1;
  }
  return;
}

// InternalConstructor<UMovieSceneFadeTrack> @ 14688f340

void __cdecl InternalConstructor<UMovieSceneFadeTrack>(FObjectInitializer *param_1)

{
  UMovieSceneFloatTrack *this;
  
  this = (UMovieSceneFloatTrack *)param_1->Obj;
  if (this != (UMovieSceneFloatTrack *)0x0) {
    UMovieSceneFloatTrack::UMovieSceneFloatTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined ***)this =
         &UMovieSceneFadeTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneFadeTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  }
  return;
}

// InternalConstructor<UMovieSceneFadeTrackTestLibrary> @ 14688f380

void __cdecl InternalConstructor<UMovieSceneFadeTrackTestLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneFadeTrackTestLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneFloatTrack> @ 14688f3b0

void __cdecl InternalConstructor<UMovieSceneFloatTrack>(FObjectInitializer *param_1)

{
  if ((UMovieSceneFloatTrack *)param_1->Obj != (UMovieSceneFloatTrack *)0x0) {
    UMovieSceneFloatTrack::UMovieSceneFloatTrack((UMovieSceneFloatTrack *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneFloatVectorPropertySystem> @ 14688f3d0

void __cdecl InternalConstructor<UMovieSceneFloatVectorPropertySystem>(FObjectInitializer *param_1)

{
  UMovieScenePropertySystem *this;
  code *pcVar1;
  bool bVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  UObject *local_res8;
  UClass *local_res10;
  UObject *local_res18;
  UClass *local_res20;
  
  this = (UMovieScenePropertySystem *)param_1->Obj;
  if (this != (UMovieScenePropertySystem *)0x0) {
    UMovieScenePropertySystem::UMovieScenePropertySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneFloatVectorPropertySystem::_vftable__for__UMovieSceneEntitySystem__;
    this->_padding_ =
         (longlong)
         &UMovieSceneFloatVectorPropertySystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    if ((((short)this->_padding_ != -1) || ((this->CompositePropertyID).TypeIndex != -1)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!RelevantComponent && !CompositePropertyID",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieScenePropertySystem.h"
                           ,0x1f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(ushort *)&this->_padding_ = (pFVar3->FloatVector).PropertyTag.Value;
    (this->CompositePropertyID).TypeIndex = (int)(pFVar3->FloatVector).CompositeID;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10 = Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
      local_res18 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res18);
      }
      local_res20 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res20,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res18);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneFloatVectorTrack> @ 14688f530

void __cdecl InternalConstructor<UMovieSceneFloatVectorTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined ***)this =
         &UMovieSceneFloatVectorTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x30 = 0;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneFloatVectorTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FVar1 = FMovieSceneBlendTypeField::All();
    this->field_0x88 = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  return;
}

// InternalConstructor<UMovieSceneHierarchicalEasingFinalizationSystem> @ 14688f5c0

void __cdecl
InternalConstructor<UMovieSceneHierarchicalEasingFinalizationSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntityInstantiatorSystem *this;
  
  this = (UMovieSceneEntityInstantiatorSystem *)param_1->Obj;
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneHierarchicalEasingFinalizationSystem__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneHierarchicalEasingInstantiatorSystem> @ 14688f5f0

void __cdecl
InternalConstructor<UMovieSceneHierarchicalEasingInstantiatorSystem>(FObjectInitializer *param_1)

{
  if ((UMovieSceneHierarchicalEasingInstantiatorSystem *)param_1->Obj !=
      (UMovieSceneHierarchicalEasingInstantiatorSystem *)0x0) {
    UMovieSceneHierarchicalEasingInstantiatorSystem::UMovieSceneHierarchicalEasingInstantiatorSystem
              ((UMovieSceneHierarchicalEasingInstantiatorSystem *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneIntegerTrack> @ 14688f610

void __cdecl InternalConstructor<UMovieSceneIntegerTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this =
         &UMovieSceneIntegerTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneIntegerTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FVar1 = FMovieSceneBlendTypeField::All();
    this->field_0x88 = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  return;
}

// InternalConstructor<UMovieSceneLevelVisibilityTrack> @ 14688f690

void __cdecl InternalConstructor<UMovieSceneLevelVisibilityTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneLevelVisibilityTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneLevelVisibilityTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneMaterialParameterCollectionTrack> @ 14688f6e0

void __cdecl
InternalConstructor<UMovieSceneMaterialParameterCollectionTrack>(FObjectInitializer *param_1)

{
  UMovieSceneMaterialTrack *this;
  
  this = (UMovieSceneMaterialTrack *)param_1->Obj;
  if (this != (UMovieSceneMaterialTrack *)0x0) {
    UMovieSceneMaterialTrack::UMovieSceneMaterialTrack(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)
         &UMovieSceneMaterialParameterCollectionTrack::
          _vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)
         &UMovieSceneMaterialParameterCollectionTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ =
         (longlong)
         &UMovieSceneMaterialParameterCollectionTrack::_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ =
         (longlong)
         &UMovieSceneMaterialParameterCollectionTrack::
          _vftable__for__IMovieSceneParameterSectionExtender__;
  }
  return;
}

// InternalConstructor<UMovieSceneMaterialTrack> @ 14688f750

void __cdecl InternalConstructor<UMovieSceneMaterialTrack>(FObjectInitializer *param_1)

{
  if ((UMovieSceneMaterialTrack *)param_1->Obj != (UMovieSceneMaterialTrack *)0x0) {
    UMovieSceneMaterialTrack::UMovieSceneMaterialTrack
              ((UMovieSceneMaterialTrack *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneObjectPropertyTrack> @ 14688f770

void __cdecl InternalConstructor<UMovieSceneObjectPropertyTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined ***)this =
         &UMovieSceneObjectPropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneObjectPropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
  }
  return;
}

// InternalConstructor<UMovieScenePartialEvaluationTestObject> @ 14688f7e0

void __cdecl
InternalConstructor<UMovieScenePartialEvaluationTestObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UMovieScenePartialEvaluationTestObject__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneParticleParameterTrack> @ 14688f820

void __cdecl InternalConstructor<UMovieSceneParticleParameterTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneParticleParameterTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneParticleParameterTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneParticleParameterTrack__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneParticleTrack> @ 14688f880

void __cdecl InternalConstructor<UMovieSceneParticleTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneParticleTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneParticleTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneParticleTrack__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieScenePrimitiveMaterialTrack> @ 14688f8e0

void __cdecl InternalConstructor<UMovieScenePrimitiveMaterialTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined ***)this =
         &UMovieScenePrimitiveMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x38 = 0;
    this[1].field_0x3c = 0;
    *(undefined ***)&this->field_0x70 =
         &UMovieScenePrimitiveMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Absolute);
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Additive);
    return;
  }
  return;
}

// InternalConstructor<UMovieScenePropertyTrack> @ 14688f990

void __cdecl InternalConstructor<UMovieScenePropertyTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneRotatorTrack> @ 14688fa00

void __cdecl InternalConstructor<UMovieSceneRotatorTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this =
         &UMovieSceneRotatorTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneRotatorTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FVar1 = FMovieSceneBlendTypeField::All();
    this->field_0x88 = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  return;
}

// InternalConstructor<UMovieSceneSectionsToKey> @ 14688fa80

void __cdecl InternalConstructor<UMovieSceneSectionsToKey>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieSceneSectionsToKey__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneSkeletalAnimationTrack> @ 14688fab0

void __cdecl InternalConstructor<UMovieSceneSkeletalAnimationTrack>(FObjectInitializer *param_1)

{
  UMovieSceneCommonAnimationTrack *this;
  
  this = (UMovieSceneCommonAnimationTrack *)param_1->Obj;
  if (this != (UMovieSceneCommonAnimationTrack *)0x0) {
    UMovieSceneCommonAnimationTrack::UMovieSceneCommonAnimationTrack(this,param_1);
    this->field_0x1b8 = 0;
    *(undefined ***)this =
         &UMovieSceneSkeletalAnimationTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneSkeletalAnimationTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Absolute);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    this->field_0x1b9 = 2;
  }
  return;
}

// InternalConstructor<UMovieSceneSlomoTrack> @ 14688fb10

void __cdecl InternalConstructor<UMovieSceneSlomoTrack>(FObjectInitializer *param_1)

{
  UMovieSceneFloatTrack *this;
  
  this = (UMovieSceneFloatTrack *)param_1->Obj;
  if (this != (UMovieSceneFloatTrack *)0x0) {
    UMovieSceneFloatTrack::UMovieSceneFloatTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 1;
    *(undefined ***)this =
         &UMovieSceneSlomoTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneSlomoTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  }
  return;
}

// InternalConstructor<UMovieSceneStringTrack> @ 14688fb50

void __cdecl InternalConstructor<UMovieSceneStringTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  FObjectInitializer *pFVar1;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,pFVar1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this =
         &UMovieSceneStringTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneStringTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  }
  return;
}

// InternalConstructor<UMovieSceneTestSequence> @ 14688fbc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneTestSequence>(FObjectInitializer *param_1)

{
  UMovieSceneSequence *this;
  
  this = (UMovieSceneSequence *)param_1->Obj;
  if (this != (UMovieSceneSequence *)0x0) {
    UMovieSceneSequence::UMovieSceneSequence(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneTestSequence__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneTextTrack> @ 14688fc10

void __cdecl InternalConstructor<UMovieSceneTextTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  FObjectInitializer *pFVar1;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,pFVar1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this =
         &UMovieSceneTextTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneTextTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  }
  return;
}

// InternalConstructor<UMovieSceneTransformTrack> @ 14688fc80

void __cdecl InternalConstructor<UMovieSceneTransformTrack>(FObjectInitializer *param_1)

{
  undefined1 uVar1;
  UMovieSceneNameableTrack *this;
  FMovieSceneBlendTypeField FVar2;
  undefined7 extraout_var;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined ***)this =
         &UMovieSceneTransformTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneTransformTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    FVar2 = FMovieSceneBlendTypeField::All();
    uVar1 = *(undefined1 *)CONCAT71(extraout_var,FVar2.BlendTypeField);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    this->field_0x88 = uVar1;
  }
  return;
}

// InternalConstructor<UMovieSceneVisibilitySystem> @ 14688fd00

void __cdecl InternalConstructor<UMovieSceneVisibilitySystem>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntityInstantiatorSystem *this;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  UObject *local_res8;
  UClass *local_res10;
  
  this = (UMovieSceneEntityInstantiatorSystem *)param_1->Obj;
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined4 *)&this->field_0x38 = 2;
    *(undefined ***)this = &___7UMovieSceneVisibilitySystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    *(ushort *)&this->field_0x30 = (pFVar2->Tags).Visibility.Value;
    if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
      pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_res8 = *(UObject **)&this->field_0x10;
      FVar1.Value = *(ushort *)&pFVar3->BoundObject;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_res8 = *(UObject **)&this->field_0x10;
      FVar1.Value = (pFVar3->Tags).Ignored.Value;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
    local_res8 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res10 = Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res10,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return;
}

// InternalConstructor<UMovieSceneVisibilityTrack> @ 14688fe20

void __cdecl InternalConstructor<UMovieSceneVisibilityTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this =
         &UMovieSceneVisibilityTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneVisibilityTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  }
  return;
}

// InternalConstructor<UObjectPathChannelEvaluatorSystem> @ 14688fe90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UObjectPathChannelEvaluatorSystem>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UObjectPathChannelEvaluatorSystem__6B_;
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    (this->RelevantComponent).Value = (ushort)pFVar2->ObjectPathChannel;
    this->Phase = Scheduling;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar2->EvalTime;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar2->ObjectResult;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
  }
  return;
}

// InternalConstructor<UStringChannelEvaluatorSystem> @ 14688ff60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UStringChannelEvaluatorSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar1;
  UObject *local_res8;
  UClass *local_res10 [3];
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->SystemCategories = ChannelEvaluators;
    this->_padding_ = (longlong)&___7UStringChannelEvaluatorSystem__6B_;
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    (this->RelevantComponent).Value = (ushort)pFVar1->StringChannel;
    this->Phase = Scheduling;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10[0] = Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
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

// InternalConstructor<UTextChannelEvaluatorSystem> @ 146890000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UTextChannelEvaluatorSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar1;
  UObject *local_res8;
  UClass *local_res10 [3];
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->SystemCategories = ChannelEvaluators;
    this->_padding_ = (longlong)&___7UTextChannelEvaluatorSystem__6B_;
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    (this->RelevantComponent).Value = (ushort)pFVar1->TextChannel;
    this->Phase = Scheduling;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10[0] = Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
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

// InternalConstructor<UWeightAndEasingEvaluatorSystem> @ 1468900a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UWeightAndEasingEvaluatorSystem>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  UClass *local_res10;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->SystemCategories = ChannelEvaluators;
    this->_padding_ = (longlong)&___7UWeightAndEasingEvaluatorSystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->Phase = Scheduling;
    if ((this->_padding_ & 0x10) != 0) {
      pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar2->WeightResult;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      local_res8 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      local_res10 = Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar2->EasingResult;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar2->WeightAndEasingResult;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieScene3DAttachTrack> @ 146890200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieScene3DAttachTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScene3DAttachTrack::GetPrivateStaticClass();
  this = (UMovieSceneTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UMovieScene3DAttachTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieScene3DAttachTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScene3DConstraintTrack> @ 1468902d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScene3DConstraintTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScene3DConstraintTrack::GetPrivateStaticClass();
  this = (UMovieSceneTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this->_padding_ =
         (longlong)
         &UMovieScene3DConstraintTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieScene3DConstraintTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScene3DPathTrack> @ 1468903a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieScene3DPathTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScene3DPathTrack::GetPrivateStaticClass();
  this = (UMovieSceneTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UMovieScene3DPathTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ = (longlong)&UMovieScene3DPathTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
    ;
    this[1]._padding_ = (longlong)&___7UMovieScene3DPathTrack__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScene3DTransformTrack> @ 146890480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScene3DTransformTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScene3DTransformTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieScene3DTransformTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieScene3DTransformTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)&this[1].field_0x30 = &___7UMovieScene3DTransformTrack__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneActorReferenceTrack> @ 146890580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneActorReferenceTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneActorReferenceTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneActorReferenceTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneActorReferenceTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)&this[1].field_0x30 = &___7UMovieSceneActorReferenceTrack__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneAudioTrack> @ 146890670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneAudioTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneAudioTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneAudioTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneAudioTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneBoolTrack> @ 146890740

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneBoolTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneBoolTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneBoolTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneBoolTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)&this[1].field_0x30 =
         &UMovieSceneBoolTrack::_vftable__for__IMovieSceneTrackTemplateProducer__;
    *(undefined ***)&this[1].field_0x38 =
         &UMovieSceneBoolTrack::_vftable__for__IMovieSceneEntityProvider__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneByteTrack> @ 146890840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneByteTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneByteTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneByteTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneByteTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCVarTrack> @ 146890930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneCVarTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCVarTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneCVarTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCVarTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCVarTrackInstance> @ 146890a00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCVarTrackInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneTrackInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCVarTrackInstance::GetPrivateStaticClass();
  this = (UMovieSceneTrackInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneTrackInstance *)0x0) {
    UMovieSceneTrackInstance::UMovieSceneTrackInstance(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneCVarTrackInstance__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].WeakAnimatedObject.WeakPtr.ObjectIndex = 0;
    this[1].WeakAnimatedObject.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this[1].bIsRootTrackInstance = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    this[1].Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Inputs.ArrayNum = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrack> @ 146890ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCameraCutTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneCameraCutTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCameraCutTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrackInstance> @ 146890bb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrackInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneTrackInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCameraCutTrackInstance::GetPrivateStaticClass();
  this = (UMovieSceneTrackInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneTrackInstance *)0x0) {
    UMovieSceneTrackInstance::UMovieSceneTrackInstance(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneCameraCutTrackInstance__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffff;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceShakeTrack> @ 146890c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceShakeTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCameraShakeSourceShakeTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneCameraShakeSourceShakeTrack::
          _vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCameraShakeSourceShakeTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceTriggerTrack> @ 146890d50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceTriggerTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCameraShakeSourceTriggerTrack::GetPrivateStaticClass();
  this = (UMovieSceneTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneTrack *)0x0) {
    UMovieSceneTrack::UMovieSceneTrack(this,param_1);
    this->_padding_ =
         (longlong)
         &UMovieSceneCameraShakeSourceTriggerTrack::
          _vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)
         &UMovieSceneCameraShakeSourceTriggerTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCameraShakeTrack> @ 146890e20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCameraShakeTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCameraShakeTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneCameraShakeTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCameraShakeTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCinematicShotTrack> @ 146890ef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCinematicShotTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSubTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCinematicShotTrack::GetPrivateStaticClass();
  this = (UMovieSceneSubTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSubTrack *)0x0) {
    UMovieSceneSubTrack::UMovieSceneSubTrack(this,param_1);
    this->_padding_ =
         (longlong)
         &UMovieSceneCinematicShotTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieSceneCinematicShotTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneColorTrack> @ 146890fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneColorTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneColorTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneColorTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneColorTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCommonAnimationTrack> @ 146891090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCommonAnimationTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneCommonAnimationTrack *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCommonAnimationTrack::GetPrivateStaticClass();
  pUVar3 = (UMovieSceneCommonAnimationTrack *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMovieSceneCommonAnimationTrack *)0x0) {
    pUVar3 = UMovieSceneCommonAnimationTrack::UMovieSceneCommonAnimationTrack(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneComponentMaterialTrack> @ 146891130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneComponentMaterialTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneComponentMaterialTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneComponentMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneComponentMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)&this[1].field_0x18 =
         &UMovieSceneComponentMaterialTrack::_vftable__for__IMovieSceneEntityProvider__;
    *(undefined ***)&this[1].field_0x20 =
         &UMovieSceneComponentMaterialTrack::_vftable__for__IMovieSceneParameterSectionExtender__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x30 = 0;
    this[1].field_0x34 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCustomPrimitiveDataTrack> @ 146891230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCustomPrimitiveDataTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCustomPrimitiveDataTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)this =
         &UMovieSceneCustomPrimitiveDataTrack::_vftable__for__UMovieSceneDecorationContainerObject__
    ;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneCustomPrimitiveDataTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) =
         &UMovieSceneCustomPrimitiveDataTrack::_vftable__for__IMovieSceneEntityProvider__;
    *(undefined ***)&this[1].field_0x8 =
         &UMovieSceneCustomPrimitiveDataTrack::_vftable__for__IMovieSceneParameterSectionExtender__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneDataLayerTrack> @ 146891320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneDataLayerTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneDataLayerTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneDataLayerTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneDataLayerTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneDecomposerTestObject> @ 1468913f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneDecomposerTestObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneDecomposerTestObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMovieSceneDecomposerTestObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneDoubleTrack> @ 1468914a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneDoubleTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneDoubleTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneDoubleTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneDoubleTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorPropertySystem> @ 146891580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorPropertySystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieScenePropertySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneDoubleVectorPropertySystem::GetPrivateStaticClass();
  this = (UMovieScenePropertySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieScenePropertySystem *)0x0) {
    UMovieScenePropertySystem::UMovieScenePropertySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneDoubleVectorPropertySystem::_vftable__for__UMovieSceneEntitySystem__;
    this->_padding_ =
         (longlong)
         &UMovieSceneDoubleVectorPropertySystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrack> @ 146891640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneDoubleVectorTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneDoubleVectorTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneDoubleVectorTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEnumTrack> @ 146891720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneEnumTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEnumTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneEnumTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneEnumTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEulerTransformTrack> @ 146891810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneEulerTransformTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEulerTransformTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneEulerTransformTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneEulerTransformTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEventTrack> @ 1468918f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneEventTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEventTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this =
         &UMovieSceneEventTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneEventTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) =
         &UMovieSceneEventTrack::_vftable__for__IMovieSceneTrackTemplateProducer__;
    *(undefined ***)&this[1].field_0x8 =
         &UMovieSceneEventTrack::_vftable__for__IMovieSceneDeterminismSource__;
    *(undefined8 *)&this[1].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneFadeTrack> @ 1468919d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneFadeTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneFadeTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneFadeTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneFadeTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneFadeTrackTestLibrary> @ 146891ab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneFadeTrackTestLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneFadeTrackTestLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneFadeTrackTestLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneFloatTrack> @ 146891b60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneFloatTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneFloatTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneFloatTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneFloatTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneFloatVectorPropertySystem> @ 146891c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneFloatVectorPropertySystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieScenePropertySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneFloatVectorPropertySystem::GetPrivateStaticClass();
  this = (UMovieScenePropertySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieScenePropertySystem *)0x0) {
    UMovieScenePropertySystem::UMovieScenePropertySystem(this,param_1);
    this->_padding_ =
         (longlong)&UMovieSceneFloatVectorPropertySystem::_vftable__for__UMovieSceneEntitySystem__;
    this->_padding_ =
         (longlong)
         &UMovieSceneFloatVectorPropertySystem::
          _vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneFloatVectorTrack> @ 146891d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneFloatVectorTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneFloatVectorTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneFloatVectorTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneFloatVectorTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingFinalizationSystem> @ 146891de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingFinalizationSystem>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntityInstantiatorSystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneHierarchicalEasingFinalizationSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntityInstantiatorSystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneHierarchicalEasingFinalizationSystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingInstantiatorSystem> @ 146891e90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingInstantiatorSystem>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntityInstantiatorSystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneHierarchicalEasingInstantiatorSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntityInstantiatorSystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneHierarchicalEasingInstantiatorSystem__6B_;
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
    *(undefined8 *)&this[2].field_0x40 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneIntegerTrack> @ 146891fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneIntegerTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneIntegerTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneIntegerTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneIntegerTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneLevelVisibilityTrack> @ 146892090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneLevelVisibilityTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneLevelVisibilityTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneLevelVisibilityTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneLevelVisibilityTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterCollectionTrack> @ 146892160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterCollectionTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMaterialParameterCollectionTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneMaterialParameterCollectionTrack::
          _vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneMaterialParameterCollectionTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)&this[1].field_0x18 =
         &UMovieSceneMaterialParameterCollectionTrack::_vftable__for__IMovieSceneEntityProvider__;
    *(undefined ***)&this[1].field_0x20 =
         &UMovieSceneMaterialParameterCollectionTrack::
          _vftable__for__IMovieSceneParameterSectionExtender__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMaterialTrack> @ 146892250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneMaterialTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMaterialTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneObjectPropertyTrack> @ 146892320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneObjectPropertyTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneObjectPropertyTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneObjectPropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneObjectPropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScenePartialEvaluationTestObject> @ 146892410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScenePartialEvaluationTestObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScenePartialEvaluationTestObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMovieScenePartialEvaluationTestObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneParticleParameterTrack> @ 1468924c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneParticleParameterTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneParticleParameterTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this =
         &UMovieSceneParticleParameterTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneParticleParameterTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneParticleParameterTrack__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneParticleTrack> @ 1468925a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneParticleTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneParticleTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this =
         &UMovieSceneParticleTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneParticleTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneParticleTrack__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrack> @ 146892680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScenePrimitiveMaterialTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieScenePrimitiveMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieScenePrimitiveMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x38 = 0;
    this[1].field_0x3c = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScenePropertyTrack> @ 146892780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieScenePropertyTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScenePropertyTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneRotatorTrack> @ 146892860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneRotatorTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneRotatorTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneRotatorTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneRotatorTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSectionsToKey> @ 146892940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneSectionsToKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSectionsToKey::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneSectionsToKey__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSkeletalAnimationTrack> @ 1468929f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneSkeletalAnimationTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneCommonAnimationTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSkeletalAnimationTrack::GetPrivateStaticClass();
  this = (UMovieSceneCommonAnimationTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneCommonAnimationTrack *)0x0) {
    UMovieSceneCommonAnimationTrack::UMovieSceneCommonAnimationTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneSkeletalAnimationTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneSkeletalAnimationTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSlomoTrack> @ 146892ab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneSlomoTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSlomoTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneSlomoTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneSlomoTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneStringTrack> @ 146892b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneStringTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneStringTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneStringTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneStringTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTestSequence> @ 146892c70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTestSequence>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSequence *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTestSequence::GetPrivateStaticClass();
  this = (UMovieSceneSequence *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSequence *)0x0) {
    UMovieSceneSequence::UMovieSceneSequence(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneTestSequence__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTextTrack> @ 146892d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTextTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTextTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneTextTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneTextTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTransformTrack> @ 146892e20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTransformTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTransformTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneTransformTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneTransformTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneVisibilitySystem> @ 146892f00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneVisibilitySystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntityInstantiatorSystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneVisibilitySystem::GetPrivateStaticClass();
  this = (UMovieSceneEntityInstantiatorSystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneVisibilitySystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneVisibilityTrack> @ 146892fc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneVisibilityTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneVisibilityTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this =
         &UMovieSceneVisibilityTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneVisibilityTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectPathChannelEvaluatorSystem> @ 1468930a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UObjectPathChannelEvaluatorSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectPathChannelEvaluatorSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UObjectPathChannelEvaluatorSystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStringChannelEvaluatorSystem> @ 146893150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UStringChannelEvaluatorSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStringChannelEvaluatorSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UStringChannelEvaluatorSystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextChannelEvaluatorSystem> @ 146893200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTextChannelEvaluatorSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextChannelEvaluatorSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UTextChannelEvaluatorSystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWeightAndEasingEvaluatorSystem> @ 1468932b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWeightAndEasingEvaluatorSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWeightAndEasingEvaluatorSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UWeightAndEasingEvaluatorSystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,`UMovieSceneCommonAnimationTrack::SortSections'::__l2::<lambda_1>_>_> @ 146893370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_UMovieSceneCommonAnimationTrack::SortSections_::__l2::<lambda_1>_>_>
          (TObjectPtr<UMovieSceneSection> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_private:_void___cdecl_UMovieSceneCommonAnimationTrack::SortSections(void)_::_2_::<lambda_1>_>
          param_4)

{
  TObjectPtr<UMovieSceneSection> *pTVar1;
  TObjectPtr<UMovieSceneSection>_u_0 TVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar9;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar10;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar11;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar12;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar13;
  TObjectPtr<UMovieSceneSection> **ppTVar14;
  float fVar15;
  undefined1 auStack_398 [32];
  TRangeBound<FFrameNumber> local_378;
  undefined4 local_370;
  int iStack_36c;
  undefined4 local_368;
  int iStack_364;
  undefined4 local_360;
  int iStack_35c;
  undefined4 local_358;
  int iStack_354;
  undefined4 local_350;
  int iStack_34c;
  undefined4 local_348;
  int iStack_344;
  TObjectPtr<UMovieSceneSection> *local_330;
  TObjectPtr<UMovieSceneSection> *local_328;
  TObjectPtr<UMovieSceneSection> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar14 = &local_328;
    do {
      pTVar9 = &ppTVar14[1]->field0_0x0;
      pTVar12 = &(*ppTVar14)->field0_0x0;
      pTVar1 = ppTVar14[2];
      iVar5 = (int)((longlong)pTVar9 - (longlong)pTVar12 >> 3) + 1;
      local_330._0_4_ = (int)pTVar1;
      pTVar13 = pTVar12;
      if ((int)local_330 != 0) {
LAB_146893430:
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          pTVar10 = pTVar9 + 1;
          TVar2 = pTVar13[iVar5 >> 1];
          pTVar13[iVar5 >> 1].DebugPtr = (UMovieSceneSection *)*(UMovieSceneSection **)pTVar13;
          *pTVar13 = TVar2;
          pTVar12 = pTVar13;
LAB_146893460:
          pTVar12 = pTVar12 + 1;
          if (pTVar12 <= pTVar9) goto code_r0x000146893469;
          goto LAB_1468934d5;
        }
        for (; pTVar10 = pTVar13, pTVar12 = pTVar13, pTVar13 < pTVar9; pTVar9 = pTVar9 + -1) {
          while (pTVar11 = pTVar10, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar9) {
            local_378 = (pTVar11->DebugPtr->SectionRange).Value.LowerBound;
            if (local_378.Type.Value.Value == '\0') {
              iStack_34c = local_378.Value.Value.Value + 1;
              uVar4 = (uint)local_350 >> 8;
              local_350 = CONCAT31((int3)uVar4,1);
              local_378.Value.Value = iStack_34c;
              local_378._0_4_ = local_350;
            }
            TVar8 = (pTVar12->DebugPtr->SectionRange).Value.LowerBound;
            if (TVar8.Type.Value.Value == '\0') {
              iStack_344 = TVar8.Value.Value.Value + 1;
              uVar4 = (uint)local_348 >> 8;
              local_348 = CONCAT31((int3)uVar4,1);
              TVar8.Value.Value = iStack_344;
              TVar8._0_4_ = local_348;
            }
            if (local_378.Type.Value.Value == '\x02') {
              bVar3 = true;
            }
            else if (TVar8.Type.Value.Value == '\x02') {
              bVar3 = false;
            }
            else {
              bVar3 = local_378.Value.Value < TVar8.Value.Value.Value;
            }
            pTVar10 = pTVar12;
            if (!bVar3) {
              pTVar10 = pTVar11;
            }
          }
          TVar2.DebugPtr = *(UMovieSceneSection **)pTVar11;
          *pTVar11 = *(UMovieSceneSection **)pTVar9;
          pTVar9->DebugPtr = (UMovieSceneSection *)TVar2;
        }
        goto LAB_1468935f6;
      }
LAB_1468935e5:
      local_330 = pTVar1;
      HeapSortInternal<TObjectPtr<UMovieSceneSection>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMovieSceneSection>,_UMovieSceneCommonAnimationTrack::SortSections_::__l2::<lambda_1>_>_>
                ((TObjectPtr<UMovieSceneSection> *)&pTVar12->ObjectPtr,iVar5,param_3,param_4);
LAB_1468935f6:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_328 <= ppTVar14);
  }
  return;
code_r0x000146893469:
  local_378 = (pTVar13->DebugPtr->SectionRange).Value.LowerBound;
  if (local_378.Type.Value.Value == '\0') {
    iStack_36c = local_378.Value.Value.Value + 1;
    local_370 = CONCAT31(local_370._1_3_,1);
    local_378.Value.Value = iStack_36c;
    local_378._0_4_ = local_370;
  }
  TVar6 = (pTVar12->DebugPtr->SectionRange).Value.LowerBound;
  if (TVar6.Type.Value.Value == '\0') {
    iStack_364 = TVar6.Value.Value.Value + 1;
    local_368 = CONCAT31(local_368._1_3_,1);
    TVar6.Value.Value = iStack_364;
    TVar6._0_4_ = local_368;
  }
  if ((local_378.Type.Value.Value != '\x02') &&
     ((TVar6.Type.Value.Value == '\x02' || (TVar6.Value.Value.Value <= local_378.Value.Value))))
  goto LAB_146893460;
LAB_1468934d5:
  while (pTVar11 = pTVar10, pTVar10 = pTVar11 + -1, pTVar13 < pTVar10) {
    local_378 = (pTVar10->DebugPtr->SectionRange).Value.LowerBound;
    if (local_378.Type.Value.Value == '\0') {
      iStack_35c = local_378.Value.Value.Value + 1;
      local_360 = CONCAT31(local_360._1_3_,1);
      local_378.Value.Value = iStack_35c;
      local_378._0_4_ = local_360;
    }
    TVar7 = (pTVar13->DebugPtr->SectionRange).Value.LowerBound;
    if (TVar7.Type.Value.Value == '\0') {
      iStack_354 = TVar7.Value.Value.Value + 1;
      local_358 = CONCAT31(local_358._1_3_,1);
      TVar7.Value.Value = iStack_354;
      TVar7._0_4_ = local_358;
    }
    if ((local_378.Type.Value.Value == '\x02') ||
       ((TVar7.Type.Value.Value != '\x02' && (local_378.Value.Value < TVar7.Value.Value.Value))))
    break;
  }
  if (pTVar12 <= pTVar10) {
    TVar2.DebugPtr = *(UMovieSceneSection **)pTVar12;
    pTVar12->DebugPtr = (UMovieSceneSection *)*(UMovieSceneSection **)pTVar10;
    pTVar10->DebugPtr = (UMovieSceneSection *)TVar2;
    goto LAB_146893460;
  }
  TVar2.DebugPtr = *(UMovieSceneSection **)pTVar13;
  local_330._0_4_ = (int)local_330 + -1;
  pTVar13->DebugPtr = (UMovieSceneSection *)*(UMovieSceneSection **)pTVar10;
  pTVar10->DebugPtr = (UMovieSceneSection *)TVar2;
  if ((longlong)((longlong)pTVar10 + (-8 - (longlong)pTVar13) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar9 - (longlong)pTVar12 & 0xfffffffffffffff8U)) {
    if (pTVar12 < pTVar9) {
      *ppTVar14 = (TObjectPtr<UMovieSceneSection> *)pTVar12;
      ppTVar14[1] = (TObjectPtr<UMovieSceneSection> *)pTVar9;
      *(int *)(ppTVar14 + 2) = (int)local_330;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar13 + 1) goto LAB_1468935f6;
    pTVar9 = pTVar11 + -2;
    pTVar12 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar10) {
      *ppTVar14 = (TObjectPtr<UMovieSceneSection> *)pTVar13;
      ppTVar14[1] = (TObjectPtr<UMovieSceneSection> *)(pTVar11 + -2);
      *(int *)(ppTVar14 + 2) = (int)local_330;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar9 <= pTVar12) goto LAB_1468935f6;
  }
  iVar5 = (int)((longlong)pTVar9 - (longlong)pTVar12 >> 3) + 1;
  pTVar13 = pTVar12;
  if ((int)local_330 == 0) goto LAB_1468935e5;
  goto LAB_146893430;
}

// IntroSortInternal<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,FIdentityFunctor,`UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs'::__l2::<lambda_1>_> @ 146893710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,FIdentityFunctor,_UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs_::__l2::<lambda_1>_>
          (FCameraCutInputInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FCameraCutInputInfo *pFVar1;
  int iVar2;
  TObjectPtr<UMovieSceneSection>_u_0 TVar3;
  undefined4 uVar4;
  FInstanceHandle FVar5;
  bool bVar6;
  undefined3 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  FCameraCutInputInfo *pFVar11;
  FCameraCutInputInfo *pFVar12;
  FCameraCutInputInfo *pFVar13;
  FCameraCutInputInfo *pFVar14;
  FCameraCutInputInfo *pFVar15;
  FCameraCutInputInfo *pFVar16;
  FCameraCutInputInfo **ppFVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  FCameraCutInputInfo *local_358;
  FCameraCutInputInfo *local_348;
  FCameraCutInputInfo *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (param_2 < 2) {
    return;
  }
  local_340 = param_1 + (longlong)param_2 + -1;
  local_348 = param_1;
  fVar18 = logf((float)param_2 * (float)param_2);
  local_338 = (undefined4)(longlong)fVar18;
  memset(local_330,0,0x2e8);
  ppFVar17 = &local_348;
LAB_1468937b0:
  pFVar12 = ppFVar17[1];
  pFVar13 = *ppFVar17;
  pFVar1 = ppFVar17[2];
  local_358._0_4_ = (int)pFVar1;
  iVar10 = (int)(((longlong)pFVar12 - (longlong)pFVar13) / 0x18) + 1;
  pFVar16 = pFVar13;
  if ((int)local_358 != 0) {
LAB_1468937f0:
    if (8 < iVar10) {
      pFVar11 = pFVar12 + 1;
      iVar10 = iVar10 / 2;
      pFVar13 = pFVar16 + iVar10;
      TVar3 = (pFVar13->Input).Section.field0_0x0;
      FVar5 = (pFVar13->Input).InstanceHandle;
      bVar6 = (pFVar13->Input).bInputHasBeenProcessed;
      uVar7 = *(undefined3 *)&(pFVar13->Input).field_0xd;
      fVar18 = pFVar16[iVar10].GlobalStartTime;
      uVar8 = *(undefined4 *)&pFVar16[iVar10].field_0x14;
      pFVar16[iVar10].Input = pFVar16->Input;
      uVar4 = *(undefined4 *)&pFVar16->field_0x14;
      pFVar16[iVar10].GlobalStartTime = pFVar16->GlobalStartTime;
      *(undefined4 *)&pFVar16[iVar10].field_0x14 = uVar4;
      (pFVar16->Input).Section.field0_0x0 = TVar3;
      (pFVar16->Input).InstanceHandle = FVar5;
      (pFVar16->Input).bInputHasBeenProcessed = bVar6;
      *(undefined3 *)&(pFVar16->Input).field_0xd = uVar7;
      pFVar16->GlobalStartTime = fVar18;
      *(undefined4 *)&pFVar16->field_0x14 = uVar8;
      pFVar13 = pFVar16;
LAB_146893840:
      pFVar14 = pFVar13;
      pFVar13 = pFVar14 + 1;
      if (pFVar13 <= pFVar12) goto code_r0x00014689384c;
      goto LAB_146893890;
    }
    if (pFVar12 <= pFVar16) goto LAB_1468939ed;
    pFVar1 = pFVar16 + 1;
    goto LAB_146893a50;
  }
LAB_1468939de:
  local_358 = pFVar1;
  HeapSortInternal<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,int,FIdentityFunctor,_UMovieSceneCameraCutTrackInstance::OnEndUpdateInputs_::__l2::<lambda_1>_>
            (pFVar13,iVar10,param_3,param_4);
  goto LAB_1468939ed;
code_r0x00014689384c:
  iVar2 = *(int *)((ulonglong)(pFVar16->Input).InstanceHandle.InstanceID * 0x140 + 0xe0 +
                  *(longlong *)&(param_4.InstanceRegistry)->Instances);
  iVar10 = *(int *)((ulonglong)pFVar14[1].Input.InstanceHandle.InstanceID * 0x140 + 0xe0 +
                   *(longlong *)&(param_4.InstanceRegistry)->Instances);
  if ((iVar2 <= iVar10) &&
     ((iVar2 < iVar10 || (pFVar16->GlobalStartTime <= pFVar14[1].GlobalStartTime))))
  goto LAB_146893840;
LAB_146893890:
  while (pFVar15 = pFVar11, pFVar11 = pFVar15 + -1, pFVar16 < pFVar11) {
    iVar2 = *(int *)((ulonglong)pFVar15[-1].Input.InstanceHandle.InstanceID * 0x140 + 0xe0 +
                    *(longlong *)&(param_4.InstanceRegistry)->Instances);
    iVar10 = *(int *)((ulonglong)(pFVar16->Input).InstanceHandle.InstanceID * 0x140 + 0xe0 +
                     *(longlong *)&(param_4.InstanceRegistry)->Instances);
    if ((iVar10 < iVar2) ||
       ((iVar10 <= iVar2 && (pFVar16->GlobalStartTime < pFVar15[-1].GlobalStartTime)))) break;
  }
  if (pFVar13 <= pFVar11) {
    TVar3 = (pFVar13->Input).Section.field0_0x0;
    FVar5 = pFVar14[1].Input.InstanceHandle;
    bVar6 = pFVar14[1].Input.bInputHasBeenProcessed;
    uVar7 = *(undefined3 *)&pFVar14[1].Input.field_0xd;
    fVar18 = pFVar14[1].GlobalStartTime;
    uVar8 = *(undefined4 *)&pFVar14[1].field_0x14;
    pFVar13->Input = pFVar11->Input;
    uVar4 = *(undefined4 *)&pFVar15[-1].field_0x14;
    pFVar14[1].GlobalStartTime = pFVar15[-1].GlobalStartTime;
    *(undefined4 *)&pFVar14[1].field_0x14 = uVar4;
    (pFVar11->Input).Section.field0_0x0 = TVar3;
    pFVar15[-1].Input.InstanceHandle = FVar5;
    pFVar15[-1].Input.bInputHasBeenProcessed = bVar6;
    *(undefined3 *)&pFVar15[-1].Input.field_0xd = uVar7;
    pFVar15[-1].GlobalStartTime = fVar18;
    *(undefined4 *)&pFVar15[-1].field_0x14 = uVar8;
    goto LAB_146893840;
  }
  TVar3 = (pFVar16->Input).Section.field0_0x0;
  FVar5 = (pFVar16->Input).InstanceHandle;
  bVar6 = (pFVar16->Input).bInputHasBeenProcessed;
  uVar7 = *(undefined3 *)&(pFVar16->Input).field_0xd;
  fVar18 = pFVar16->GlobalStartTime;
  uVar8 = *(undefined4 *)&pFVar16->field_0x14;
  lVar9 = (longlong)pFVar11 + (-0x18 - (longlong)pFVar16);
  local_358._0_4_ = (int)local_358 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  pFVar16->Input = pFVar11->Input;
  uVar4 = *(undefined4 *)&pFVar15[-1].field_0x14;
  pFVar16->GlobalStartTime = pFVar15[-1].GlobalStartTime;
  *(undefined4 *)&pFVar16->field_0x14 = uVar4;
  (pFVar11->Input).Section.field0_0x0 = TVar3;
  pFVar15[-1].Input.InstanceHandle = FVar5;
  pFVar15[-1].Input.bInputHasBeenProcessed = bVar6;
  *(undefined3 *)&pFVar15[-1].Input.field_0xd = uVar7;
  pFVar15[-1].GlobalStartTime = fVar18;
  *(undefined4 *)&pFVar15[-1].field_0x14 = uVar8;
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar13) / 0x18) {
    if (pFVar13 < pFVar12) {
      *ppFVar17 = pFVar13;
      ppFVar17[1] = pFVar12;
      *(int *)(ppFVar17 + 2) = (int)local_358;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar11 <= pFVar16 + 1) goto LAB_1468939ed;
    pFVar12 = pFVar15 + -2;
    pFVar13 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar11) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar15 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_358;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar12 <= pFVar13) goto LAB_1468939ed;
  }
  iVar10 = (int)(((longlong)pFVar12 - (longlong)pFVar13) / 0x18) + 1;
  pFVar16 = pFVar13;
  if ((int)local_358 == 0) goto LAB_1468939de;
  goto LAB_1468937f0;
LAB_146893a50:
  do {
    pFVar13 = pFVar16;
    if (pFVar1 <= pFVar12) {
      lVar9 = *(longlong *)&(param_4.InstanceRegistry)->Instances;
      pFVar11 = pFVar1;
      if (0x5f < (ulonglong)((longlong)pFVar12 + (0x18 - (longlong)pFVar1))) {
        do {
          iVar2 = *(int *)((ulonglong)(pFVar13->Input).InstanceHandle.InstanceID * 0x140 + 0xe0 +
                          lVar9);
          iVar10 = *(int *)((ulonglong)(pFVar11->Input).InstanceHandle.InstanceID * 0x140 + 0xe0 +
                           lVar9);
          if ((iVar10 < iVar2) ||
             ((iVar10 <= iVar2 && (pFVar11->GlobalStartTime < pFVar13->GlobalStartTime)))) {
            pFVar13 = pFVar11;
          }
          iVar2 = *(int *)((ulonglong)(pFVar13->Input).InstanceHandle.InstanceID * 0x140 + 0xe0 +
                          lVar9);
          iVar10 = *(int *)((ulonglong)pFVar11[1].Input.InstanceHandle.InstanceID * 0x140 + 0xe0 +
                           lVar9);
          if ((iVar10 < iVar2) ||
             ((iVar10 <= iVar2 && (pFVar11[1].GlobalStartTime < pFVar13->GlobalStartTime)))) {
            pFVar13 = pFVar11 + 1;
          }
          iVar2 = *(int *)((ulonglong)(pFVar13->Input).InstanceHandle.InstanceID * 0x140 + 0xe0 +
                          lVar9);
          iVar10 = *(int *)((ulonglong)pFVar11[2].Input.InstanceHandle.InstanceID * 0x140 + 0xe0 +
                           lVar9);
          if ((iVar10 < iVar2) ||
             ((iVar10 <= iVar2 && (pFVar11[2].GlobalStartTime < pFVar13->GlobalStartTime)))) {
            pFVar13 = pFVar11 + 2;
          }
          iVar2 = *(int *)((ulonglong)(pFVar13->Input).InstanceHandle.InstanceID * 0x140 + 0xe0 +
                          lVar9);
          iVar10 = *(int *)((ulonglong)pFVar11[3].Input.InstanceHandle.InstanceID * 0x140 + 0xe0 +
                           lVar9);
          if ((iVar10 < iVar2) ||
             ((iVar10 <= iVar2 && (pFVar11[3].GlobalStartTime < pFVar13->GlobalStartTime)))) {
            pFVar13 = pFVar11 + 3;
          }
          pFVar11 = pFVar11 + 4;
        } while (pFVar11 <= pFVar12 + -3);
        if (pFVar12 < pFVar11) goto LAB_146893bce;
      }
      do {
        iVar2 = *(int *)((ulonglong)(pFVar13->Input).InstanceHandle.InstanceID * 0x140 + 0xe0 +
                        lVar9);
        iVar10 = *(int *)((ulonglong)(pFVar11->Input).InstanceHandle.InstanceID * 0x140 + 0xe0 +
                         lVar9);
        if ((iVar10 < iVar2) ||
           ((iVar10 <= iVar2 && (pFVar11->GlobalStartTime < pFVar13->GlobalStartTime)))) {
          pFVar13 = pFVar11;
        }
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 <= pFVar12);
    }
LAB_146893bce:
    TVar3 = (pFVar13->Input).Section.field0_0x0;
    FVar5 = (pFVar13->Input).InstanceHandle;
    bVar6 = (pFVar13->Input).bInputHasBeenProcessed;
    uVar7 = *(undefined3 *)&(pFVar13->Input).field_0xd;
    pFVar11 = pFVar12 + -1;
    fVar18 = pFVar13->GlobalStartTime;
    uVar8 = *(undefined4 *)&pFVar13->field_0x14;
    pFVar13->Input = pFVar12->Input;
    uVar4 = *(undefined4 *)&pFVar12->field_0x14;
    pFVar13->GlobalStartTime = pFVar12->GlobalStartTime;
    *(undefined4 *)&pFVar13->field_0x14 = uVar4;
    (pFVar12->Input).Section.field0_0x0 = TVar3;
    (pFVar12->Input).InstanceHandle = FVar5;
    (pFVar12->Input).bInputHasBeenProcessed = bVar6;
    *(undefined3 *)&(pFVar12->Input).field_0xd = uVar7;
    pFVar12->GlobalStartTime = fVar18;
    *(undefined4 *)&pFVar12->field_0x14 = uVar8;
    pFVar12 = pFVar11;
  } while (pFVar16 < pFVar11);
LAB_1468939ed:
  ppFVar17 = ppFVar17 + -3;
  if (ppFVar17 < &local_348) {
    return;
  }
  goto LAB_1468937b0;
}

// IntroSortInternal<UE::MovieScene::FCinematicShotSectionSortData,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_> @ 146893c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::MovieScene::FCinematicShotSectionSortData,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_>
          (FCinematicShotSectionSortData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_> param_4)

{
  undefined4 uVar1;
  FCinematicShotSectionSortData *pFVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FCinematicShotSectionSortData *pFVar11;
  FCinematicShotSectionSortData *pFVar12;
  FCinematicShotSectionSortData *pFVar13;
  FCinematicShotSectionSortData *pFVar14;
  FCinematicShotSectionSortData *pFVar15;
  FCinematicShotSectionSortData *pFVar16;
  FCinematicShotSectionSortData **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FCinematicShotSectionSortData *local_348;
  FCinematicShotSectionSortData *local_338;
  FCinematicShotSectionSortData *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar11 = ppFVar17[1];
      pFVar16 = *ppFVar17;
      pFVar2 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar2;
      iVar10 = (int)(((longlong)pFVar11 - (longlong)pFVar16) / 0xc) + 1;
      pFVar15 = pFVar16;
      if ((int)local_348 != 0) {
LAB_146893ce0:
        if (8 < iVar10) {
          iVar6 = pFVar15->OverlapPriority;
          pFVar13 = pFVar11 + 1;
          iVar10 = iVar10 / 2;
          iVar7 = pFVar15[iVar10].Row;
          iVar8 = pFVar15[iVar10].OverlapPriority;
          iVar4 = pFVar15[iVar10].SectionIndex;
          pFVar15[iVar10].Row = pFVar15->Row;
          pFVar15[iVar10].OverlapPriority = iVar6;
          pFVar15[iVar10].SectionIndex = pFVar15->SectionIndex;
          pFVar15->Row = iVar7;
          pFVar15->OverlapPriority = iVar8;
          pFVar15->SectionIndex = iVar4;
          pFVar16 = pFVar15;
LAB_146893d26:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar11) goto code_r0x000146893d2f;
          goto LAB_146893d50;
        }
        for (; pFVar16 = pFVar15, pFVar2 = pFVar15, pFVar15 < pFVar11; pFVar11 = pFVar11 + -1) {
          while (pFVar2 = pFVar2 + 1, pFVar2 <= pFVar11) {
            if (pFVar16->Row == pFVar2->Row) {
              bVar5 = pFVar2->OverlapPriority < pFVar16->OverlapPriority;
            }
            else {
              bVar5 = pFVar16->Row < pFVar2->Row;
            }
            if (bVar5) {
              pFVar16 = pFVar2;
            }
          }
          iVar6 = pFVar16->Row;
          iVar7 = pFVar16->OverlapPriority;
          iVar10 = pFVar16->SectionIndex;
          iVar4 = pFVar11->OverlapPriority;
          pFVar16->Row = pFVar11->Row;
          pFVar16->OverlapPriority = iVar4;
          pFVar16->SectionIndex = pFVar11->SectionIndex;
          pFVar11->Row = iVar6;
          pFVar11->OverlapPriority = iVar7;
          pFVar11->SectionIndex = iVar10;
        }
        goto LAB_146893e78;
      }
LAB_146893e69:
      local_348 = pFVar2;
      HeapSortInternal<UE::MovieScene::FCinematicShotSectionSortData,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FCinematicShotSectionSortData,TLess<void>_>_>
                (pFVar16,iVar10,param_3,param_4);
LAB_146893e78:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x000146893d2f:
  if (pFVar15->Row == pFVar16->Row) {
    bVar5 = pFVar12[1].OverlapPriority < pFVar15->OverlapPriority;
  }
  else {
    bVar5 = pFVar15->Row < pFVar16->Row;
  }
  if (!bVar5) goto LAB_146893d26;
LAB_146893d50:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar15) break;
    if (pFVar13->Row == pFVar15->Row) {
      bVar5 = pFVar15->OverlapPriority < pFVar14[-1].OverlapPriority;
    }
    else {
      bVar5 = pFVar13->Row < pFVar15->Row;
    }
  } while (!bVar5);
  uVar1 = pFVar13->Row;
  uVar3 = pFVar13->OverlapPriority;
  if (pFVar16 <= pFVar13) {
    iVar4 = pFVar16->Row;
    iVar6 = pFVar16->OverlapPriority;
    iVar10 = pFVar12[1].SectionIndex;
    pFVar16->Row = uVar1;
    pFVar16->OverlapPriority = uVar3;
    pFVar12[1].SectionIndex = pFVar14[-1].SectionIndex;
    pFVar13->Row = iVar4;
    pFVar13->OverlapPriority = iVar6;
    pFVar14[-1].SectionIndex = iVar10;
    goto LAB_146893d26;
  }
  iVar10 = pFVar15->SectionIndex;
  local_348._0_4_ = (int)local_348 + -1;
  iVar4 = pFVar15->Row;
  iVar6 = pFVar15->OverlapPriority;
  pFVar15->Row = uVar1;
  pFVar15->OverlapPriority = uVar3;
  pFVar15->SectionIndex = pFVar14[-1].SectionIndex;
  pFVar13->Row = iVar4;
  pFVar13->OverlapPriority = iVar6;
  pFVar14[-1].SectionIndex = iVar10;
  lVar9 = (longlong)pFVar13 + (-0xc - (longlong)pFVar15);
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 1) - (lVar9 >> 0x3f) < ((longlong)pFVar11 - (longlong)pFVar16) / 0xc) {
    if (pFVar16 < pFVar11) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar11;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar15 + 1) goto LAB_146893e78;
    pFVar11 = pFVar14 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar13) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar14 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar11 <= pFVar16) goto LAB_146893e78;
  }
  iVar10 = (int)(((longlong)pFVar11 - (longlong)pFVar16) / 0xc) + 1;
  pFVar15 = pFVar16;
  if ((int)local_348 == 0) goto LAB_146893e69;
  goto LAB_146893ce0;
}

// IsObjectPtrEqual<UMovieSceneSection,UMovieSceneSection_*,0> @ 146893f40

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieSceneSection,UMovieSceneSection_*,0>
          (TObjectPtr<UMovieSceneSection> *param_1,UMovieSceneSection **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieSceneSection *)0x0) {
    return *param_2 == (UMovieSceneSection *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// Iterate_PerEntityImpl<``FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_4>::operator()'::__l5::<lambda_1>_&> @ 146893f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
::
Iterate_PerEntityImpl<__FMovieScenePartialEvaluationTest::RunTest_::__l2::<lambda_4>::operator()_::__l5::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  uchar *puVar3;
  FAutomationTestBase *this_00;
  code *pcVar4;
  EEntityThreadingModel EVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  wchar_t *pwVar10;
  FEntityAllocation *pFVar11;
  longlong lVar12;
  FComponentHeader *pFVar13;
  FEntityAllocationWriteContext local_80;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationIterator local_58;
  FEntityAllocationIterator local_40;
  
  if (this->Accessors !=
      (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)0xffff) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_80,param_1);
    EVar5 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_78,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_78.Manager,local_78.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_40,local_78.Manager);
    bVar6 = FEntityAllocationIterator::operator!=(&local_58,&local_40);
    if (bVar6) {
      do {
        FEntityAllocationIterator::operator*(&local_58,&local_68);
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_68);
        if (EVar5 == NoThreading) {
          pFVar7->LockMode = LockFree;
          pFVar11 = pFVar7;
        }
        else {
          pFVar11 = (FEntityAllocation *)0x0;
        }
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_68);
        pFVar13 = pFVar8->ComponentHeaders;
        pFVar9 = pFVar13 + pFVar8->NumComponents;
        for (; pFVar13 != pFVar9; pFVar13 = pFVar13 + 1) {
          if ((TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)
              (pFVar13->ComponentType).Value == this->Accessors) goto LAB_14689409c;
        }
        pFVar13 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_14689409c:
        EVar2 = pFVar8->LockMode;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
        UNLOCK();
        uVar1 = pFVar7->Size;
        lVar12 = 0;
        puVar3 = pFVar13->Components;
        if ((ulonglong)uVar1 != 0) {
          do {
            this_00 = (FAutomationTestBase *)param_3->__this;
            bVar6 = FInstanceRegistry::IsHandleValid
                              (param_3->InstanceRegistry,*(FInstanceHandle *)(puVar3 + lVar12 * 4));
            if ((param_3->BeforeString->Data).ArrayNum == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)(param_3->BeforeString->Data).AllocatorInstance.Data;
            }
            FAutomationTestBase::TestTrue(this_00,pwVar10,bVar6);
            lVar12 = lVar12 + 1;
          } while (lVar12 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar2 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        if (pFVar11 != (FEntityAllocation *)0x0) {
          pFVar11->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_58);
        bVar6 = FEntityAllocationIterator::operator!=(&local_58,&local_40);
      } while (bVar6);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_40);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneHierarchicalEasingInstantiatorSystem::OnRun'::__l5::<lambda_1>_&> @ 1468941a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
::
Iterate_PerEntityImpl<_UMovieSceneHierarchicalEasingInstantiatorSystem::OnRun_::__l5::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  ushort uVar1;
  FMovieSceneSequenceID FVar2;
  code *pcVar3;
  <lambda_1> *p<Var4;
  EEntityThreadingModel EVar5;
  bool bVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  FEntityAllocation *pFVar9;
  FRootSequenceData *this_00;
  TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *pTVar10;
  FComponentHeader *pFVar11;
  EComponentHeaderLockMode EVar12;
  FComponentHeader *pFVar13;
  FEntityAllocation *pFVar14;
  FInstanceHandle *pFVar15;
  longlong lVar16;
  FComponentHeader *pFVar17;
  longlong lVar18;
  undefined1 auStack_2c8 [32];
  EEntityThreadingModel local_2a8;
  FInstanceHandle local_2a0 [2];
  EComponentHeaderLockMode local_298;
  EComponentHeaderLockMode local_294;
  FComponentHeader *local_290;
  FComponentHeader *local_288;
  FEntityAllocation *local_280;
  FEntityAllocationProxy local_278;
  uchar *local_268;
  <lambda_1> *local_258;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
  *local_250;
  FEntityAllocationIteratorProxy local_248;
  FEntityAllocationIterator local_238;
  FEntityAllocationIterator local_220;
  FEntityAllocationWriteContext local_208 [2];
  FRootSequenceData local_1f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  if (*(short *)&(this->Accessors).field_0x2 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
  {
    local_258 = param_3;
    local_250 = this;
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_208,param_1);
    EVar5 = FEntityManager::GetThreadingModel(param_1);
    local_2a8 = EVar5;
    FEntityManager::Iterate(param_1,&local_248,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator
              (&local_238,local_248.Manager,local_248.Filter);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_220,local_248.Manager);
    bVar6 = FEntityAllocationIterator::operator!=(&local_238,&local_220);
    if (bVar6) {
      do {
        FEntityAllocationIterator::operator*(&local_238,&local_278);
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_278);
        if (EVar5 == NoThreading) {
          pFVar8->LockMode = LockFree;
          pFVar14 = pFVar8;
        }
        else {
          pFVar14 = (FEntityAllocation *)0x0;
        }
        local_280 = pFVar14;
        pFVar9 = FEntityAllocationProxy::GetAllocation(&local_278);
        pFVar13 = pFVar9->ComponentHeaders;
        pFVar17 = pFVar13 + pFVar9->NumComponents;
        for (; pFVar13 != pFVar17; pFVar13 = pFVar13 + 1) {
          local_290 = pFVar13;
          if ((pFVar13->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4)
          goto LAB_146894312;
        }
        pFVar13 = (FComponentHeader *)0x0;
        local_290 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_146894312:
        local_294 = pFVar9->LockMode;
        if (local_294 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
        UNLOCK();
        local_268 = pFVar13->Components;
        pFVar9 = FEntityAllocationProxy::GetAllocation(&local_278);
        pFVar17 = pFVar9->ComponentHeaders;
        pFVar11 = pFVar17 + pFVar9->NumComponents;
        for (; pFVar17 != pFVar11; pFVar17 = pFVar17 + 1) {
          local_288 = pFVar17;
          if ((pFVar17->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_1468943a3;
        }
        pFVar17 = (FComponentHeader *)0x0;
        local_288 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_1468943a3:
        EVar12 = pFVar9->LockMode;
        local_298 = EVar12;
        if (EVar12 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar17->ReadWriteLock);
        }
        LOCK();
        pFVar17->ScheduledAccessCount = (atomic<int>)((int)pFVar17->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar15 = (FInstanceHandle *)pFVar17->Components;
        FEntityAllocationProxy::GetAllocation(&local_278);
        p<Var4 = local_258;
        uVar1 = pFVar8->Size;
        lVar16 = 0;
        if (uVar1 != 0) {
          lVar18 = (longlong)local_268 - (longlong)pFVar15;
          do {
            local_2a0[0] = *pFVar15;
            FVar2.Value = *(uint *)(lVar18 + (longlong)pFVar15);
            bVar6 = FInstanceRegistry::IsHandleValid(p<Var4->InstanceRegistry,local_2a0[0]);
            if (bVar6) {
              this_00 = TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
                        ::Find(p<Var4->SequenceDataMap,(FRootInstanceHandle *)local_2a0);
              if (this_00 == (FRootSequenceData *)0x0) {
                local_1f8.InstanceRegistry = p<Var4->InstanceRegistry;
                local_1f8.RootHierarchy = (FMovieSceneSequenceHierarchy *)0x0;
                local_1f8.SequenceIDs.AllocatorInstance.SecondaryData =
                     (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0;
                local_1f8.SequenceIDs.ArrayNum = 0;
                local_1f8.RootInstanceHandle = (FRootInstanceHandle)local_2a0[0];
                local_1f8.SequenceIDs.ArrayMax = 0x20;
                pTVar10 = TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
                          ::AllocateMemoryForEmplace<UE::MovieScene::FRootInstanceHandle_&>
                                    (p<Var4->SequenceDataMap,(FRootInstanceHandle *)local_2a0);
                this_00 = (FRootSequenceData *)&pTVar10->field_0x8;
                *(ushort *)&pTVar10->field_0x0 = local_2a0[0].InstanceID;
                *(ushort *)&pTVar10->field_0x2 = local_2a0[0].InstanceSerial;
                FRootSequenceData::FRootSequenceData(this_00,&local_1f8);
                if (local_1f8.SequenceIDs.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0) {
                  FMemory::Free((void *)local_1f8.SequenceIDs.AllocatorInstance.SecondaryData);
                }
              }
              iVar7 = FRootSequenceData::IndexOf(this_00,FVar2);
              if (iVar7 == -1) {
                FRootSequenceData::Add(this_00,FVar2,None);
              }
            }
            lVar16 = lVar16 + 1;
            pFVar15 = pFVar15 + 1;
            pFVar13 = local_290;
            pFVar14 = local_280;
            pFVar17 = local_288;
            EVar12 = local_298;
          } while (lVar16 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
        UNLOCK();
        if (local_294 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar17->ScheduledAccessCount = (atomic<int>)((int)pFVar17->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar12 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar17->ReadWriteLock);
        }
        if (pFVar14 != (FEntityAllocation *)0x0) {
          pFVar14->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_238);
        bVar6 = FEntityAllocationIterator::operator!=(&local_238,&local_220);
        this = local_250;
        EVar5 = local_2a8;
      } while (bVar6);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_220);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_238);
  }
  return;
}

// Iterate_PerEntityImpl<``FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_4>::operator()'::__l5::<lambda_2>_&> @ 146894580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
::
Iterate_PerEntityImpl<__FMovieScenePartialEvaluationTest::RunTest_::__l2::<lambda_4>::operator()_::__l5::<lambda_2>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_2> *param_3)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  uchar *puVar3;
  FAutomationTestBase *this_00;
  code *pcVar4;
  EEntityThreadingModel EVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  wchar_t *pwVar10;
  FEntityAllocation *pFVar11;
  longlong lVar12;
  FComponentHeader *pFVar13;
  FEntityAllocationWriteContext local_80;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationIterator local_58;
  FEntityAllocationIterator local_40;
  
  if (this->Accessors !=
      (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)0xffff) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_80,param_1);
    EVar5 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_78,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_78.Manager,local_78.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_40,local_78.Manager);
    bVar6 = FEntityAllocationIterator::operator!=(&local_58,&local_40);
    if (bVar6) {
      do {
        FEntityAllocationIterator::operator*(&local_58,&local_68);
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_68);
        if (EVar5 == NoThreading) {
          pFVar7->LockMode = LockFree;
          pFVar11 = pFVar7;
        }
        else {
          pFVar11 = (FEntityAllocation *)0x0;
        }
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_68);
        pFVar13 = pFVar8->ComponentHeaders;
        pFVar9 = pFVar13 + pFVar8->NumComponents;
        for (; pFVar13 != pFVar9; pFVar13 = pFVar13 + 1) {
          if ((TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)
              (pFVar13->ComponentType).Value == this->Accessors) goto LAB_1468946bc;
        }
        pFVar13 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1468946bc:
        EVar2 = pFVar8->LockMode;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
        UNLOCK();
        uVar1 = pFVar7->Size;
        lVar12 = 0;
        puVar3 = pFVar13->Components;
        if ((ulonglong)uVar1 != 0) {
          do {
            this_00 = (FAutomationTestBase *)param_3->__this;
            bVar6 = FInstanceRegistry::IsHandleValid
                              (param_3->InstanceRegistry,*(FInstanceHandle *)(puVar3 + lVar12 * 4));
            if ((param_3->AfterString->Data).ArrayNum == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)(param_3->AfterString->Data).AllocatorInstance.Data;
            }
            FAutomationTestBase::TestTrue(this_00,pwVar10,bVar6);
            lVar12 = lVar12 + 1;
          } while (lVar12 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar2 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        if (pFVar11 != (FEntityAllocation *)0x0) {
          pFVar11->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_58);
        bVar6 = FEntityAllocationIterator::operator!=(&local_58,&local_40);
      } while (bVar6);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_40);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneHierarchicalEasingInstantiatorSystem::OnRun'::__l5::<lambda_2>_&> @ 1468947c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
::
Iterate_PerEntityImpl<_UMovieSceneHierarchicalEasingInstantiatorSystem::OnRun_::__l5::<lambda_2>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_2> *param_3)

{
  ushort uVar1;
  FMovieSceneSequenceID FVar2;
  uchar *puVar3;
  code *pcVar4;
  EEntityThreadingModel EVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  FEntityAllocation *pFVar8;
  longlong lVar9;
  FRootSequenceData *this_00;
  FComponentHeader *pFVar10;
  EComponentHeaderLockMode EVar11;
  FComponentHeader *pFVar12;
  FComponentHeader *pFVar13;
  FEntityAllocation *pFVar14;
  FInstanceHandle *pFVar15;
  longlong lVar16;
  FInstanceHandle local_a8 [2];
  EComponentHeaderLockMode local_a0;
  EComponentHeaderLockMode local_9c;
  FEntityAllocation *local_98;
  FEntityAllocationProxy local_90;
  FEntityAllocationIteratorProxy local_80;
  FEntityAllocationIterator local_70;
  FEntityAllocationIterator local_58;
  FEntityAllocationWriteContext local_40;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
  {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_40,param_1);
    EVar5 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_80,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_70,local_80.Manager,local_80.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_80.Manager);
    bVar6 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
    if (bVar6) {
      do {
        FEntityAllocationIterator::operator*(&local_70,&local_90);
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_90);
        if (EVar5 == NoThreading) {
          pFVar7->LockMode = LockFree;
          pFVar14 = pFVar7;
        }
        else {
          pFVar14 = (FEntityAllocation *)0x0;
        }
        local_98 = pFVar14;
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_90);
        pFVar13 = pFVar8->ComponentHeaders;
        pFVar12 = pFVar13 + pFVar8->NumComponents;
        for (; pFVar13 != pFVar12; pFVar13 = pFVar13 + 1) {
          if ((pFVar13->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4)
          goto LAB_146894928;
        }
        pFVar13 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146894928:
        local_9c = pFVar8->LockMode;
        if (local_9c == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
        UNLOCK();
        puVar3 = pFVar13->Components;
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_90);
        pFVar12 = pFVar8->ComponentHeaders;
        pFVar10 = pFVar12 + pFVar8->NumComponents;
        for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 1) {
          if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_1468949a9;
        }
        pFVar12 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1468949a9:
        EVar11 = pFVar8->LockMode;
        local_a0 = EVar11;
        if (EVar11 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        LOCK();
        pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar15 = (FInstanceHandle *)pFVar12->Components;
        FEntityAllocationProxy::GetAllocation(&local_90);
        uVar1 = pFVar7->Size;
        lVar16 = 0;
        if ((ulonglong)uVar1 != 0) {
          lVar9 = (longlong)puVar3 - (longlong)pFVar15;
          do {
            FVar2.Value = *(uint *)(lVar9 + (longlong)pFVar15);
            local_a8[0] = *pFVar15;
            if (((FVar2.Value != 0) &&
                (bVar6 = FInstanceRegistry::IsHandleValid(param_3->InstanceRegistry,local_a8[0]),
                bVar6)) &&
               (this_00 = TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
                          ::Find(param_3->SequenceDataMap,(FRootInstanceHandle *)local_a8),
               this_00 != (FRootSequenceData *)0x0)) {
              FRootSequenceData::AddImplicitChild(this_00,FVar2);
            }
            lVar16 = lVar16 + 1;
            pFVar15 = pFVar15 + 1;
            pFVar14 = local_98;
            EVar11 = local_a0;
          } while (lVar16 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
        UNLOCK();
        if (local_9c == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar11 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        if (pFVar14 != (FEntityAllocation *)0x0) {
          pFVar14->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_70);
        bVar6 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
      } while (bVar6);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_70);
  }
  return;
}

// Iterate_PerEntityImpl<`FMovieScenePartialEvaluationTest::RunTest'::__l4::<lambda_5>_&> @ 146894b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
::Iterate_PerEntityImpl<_FMovieScenePartialEvaluationTest::RunTest_::__l4::<lambda_5>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_5> *param_3)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  uchar *puVar3;
  FAutomationTestBase *this_00;
  code *pcVar4;
  EEntityThreadingModel EVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  wchar_t *pwVar10;
  FEntityAllocation *pFVar11;
  longlong lVar12;
  FComponentHeader *pFVar13;
  FEntityAllocationWriteContext local_80;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationIterator local_58;
  FEntityAllocationIterator local_40;
  
  if (this->Accessors !=
      (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)0xffff) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_80,param_1);
    EVar5 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_78,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_78.Manager,local_78.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_40,local_78.Manager);
    bVar6 = FEntityAllocationIterator::operator!=(&local_58,&local_40);
    if (bVar6) {
      do {
        FEntityAllocationIterator::operator*(&local_58,&local_68);
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_68);
        if (EVar5 == NoThreading) {
          pFVar7->LockMode = LockFree;
          pFVar11 = pFVar7;
        }
        else {
          pFVar11 = (FEntityAllocation *)0x0;
        }
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_68);
        pFVar13 = pFVar8->ComponentHeaders;
        pFVar9 = pFVar13 + pFVar8->NumComponents;
        for (; pFVar13 != pFVar9; pFVar13 = pFVar13 + 1) {
          if ((TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)
              (pFVar13->ComponentType).Value == this->Accessors) goto LAB_146894c4c;
        }
        pFVar13 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146894c4c:
        EVar2 = pFVar8->LockMode;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
        UNLOCK();
        uVar1 = pFVar7->Size;
        lVar12 = 0;
        puVar3 = pFVar13->Components;
        if ((ulonglong)uVar1 != 0) {
          do {
            this_00 = (FAutomationTestBase *)param_3->__this;
            bVar6 = FInstanceRegistry::IsHandleValid
                              (param_3->InstanceRegistry,*(FInstanceHandle *)(puVar3 + lVar12 * 4));
            if ((param_3->BeforeString->Data).ArrayNum == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)(param_3->BeforeString->Data).AllocatorInstance.Data;
            }
            FAutomationTestBase::TestTrue(this_00,pwVar10,bVar6);
            lVar12 = lVar12 + 1;
          } while (lVar12 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar2 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        if (pFVar11 != (FEntityAllocation *)0x0) {
          pFVar11->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_58);
        bVar6 = FEntityAllocationIterator::operator!=(&local_58,&local_40);
      } while (bVar6);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_40);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
  }
  return;
}

// Iterate_PerEntityImpl<`FMovieScenePartialEvaluationTest::RunTest'::__l4::<lambda_6>_&> @ 146894d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
::Iterate_PerEntityImpl<_FMovieScenePartialEvaluationTest::RunTest_::__l4::<lambda_6>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_6> *param_3)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  uchar *puVar3;
  FAutomationTestBase *this_00;
  code *pcVar4;
  EEntityThreadingModel EVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  wchar_t *pwVar10;
  FEntityAllocation *pFVar11;
  longlong lVar12;
  FComponentHeader *pFVar13;
  FEntityAllocationWriteContext local_80;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationIterator local_58;
  FEntityAllocationIterator local_40;
  
  if (this->Accessors !=
      (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)0xffff) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_80,param_1);
    EVar5 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_78,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_78.Manager,local_78.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_40,local_78.Manager);
    bVar6 = FEntityAllocationIterator::operator!=(&local_58,&local_40);
    if (bVar6) {
      do {
        FEntityAllocationIterator::operator*(&local_58,&local_68);
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_68);
        if (EVar5 == NoThreading) {
          pFVar7->LockMode = LockFree;
          pFVar11 = pFVar7;
        }
        else {
          pFVar11 = (FEntityAllocation *)0x0;
        }
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_68);
        pFVar13 = pFVar8->ComponentHeaders;
        pFVar9 = pFVar13 + pFVar8->NumComponents;
        for (; pFVar13 != pFVar9; pFVar13 = pFVar13 + 1) {
          if ((TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)
              (pFVar13->ComponentType).Value == this->Accessors) goto LAB_146894e8c;
        }
        pFVar13 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_146894e8c:
        EVar2 = pFVar8->LockMode;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
        UNLOCK();
        uVar1 = pFVar7->Size;
        lVar12 = 0;
        puVar3 = pFVar13->Components;
        if ((ulonglong)uVar1 != 0) {
          do {
            this_00 = (FAutomationTestBase *)param_3->__this;
            bVar6 = FInstanceRegistry::IsHandleValid
                              (param_3->InstanceRegistry,*(FInstanceHandle *)(puVar3 + lVar12 * 4));
            if ((param_3->AfterString->Data).ArrayNum == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)(param_3->AfterString->Data).AllocatorInstance.Data;
            }
            FAutomationTestBase::TestTrue(this_00,pwVar10,bVar6);
            lVar12 = lVar12 + 1;
          } while (lVar12 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar2 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        if (pFVar11 != (FEntityAllocation *)0x0) {
          pFVar11->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_58);
        bVar6 = FEntityAllocationIterator::operator!=(&local_58,&local_40);
      } while (bVar6);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_40);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets'::__l9::<lambda_1>_> @ 146894f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FHierarchicalBlendTarget>_>
::
Iterate_PerEntityImpl<_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets_::__l9::<lambda_1>_>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FHierarchicalBlendTarget>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  code *pcVar3;
  EEntityThreadingModel EVar4;
  bool bVar5;
  FComponentHeader *pFVar6;
  FEntityAllocation *pFVar7;
  FComponentHeader *pFVar8;
  FComponentHeader *pFVar9;
  ulonglong uVar10;
  FMovieSceneEntityID *pFVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationWriteContext local_88;
  FEntityAllocationIteratorProxy local_80;
  FEntityAllocationProxy local_70;
  FEntityAllocationIterator local_60;
  FEntityAllocationIterator local_48;
  
  if (this->Accessors !=
      (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FHierarchicalBlendTarget>_>)0xffff) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_88,param_1);
    EVar4 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_80,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_60,local_80.Manager,local_80.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_80.Manager);
    bVar5 = FEntityAllocationIterator::operator!=(&local_60,&local_48);
    if (bVar5) {
      do {
        FEntityAllocationIterator::operator*(&local_60,&local_70);
        pFVar6 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_70);
        pFVar9 = (FComponentHeader *)0x0;
        if (EVar4 == NoThreading) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar6->Size + 4) = LockFree;
          pFVar9 = pFVar6;
        }
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_70);
        pFVar12 = pFVar7->ComponentHeaders;
        pFVar8 = pFVar12 + pFVar7->NumComponents;
        for (; pFVar12 != pFVar8; pFVar12 = pFVar12 + 1) {
          if ((TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FHierarchicalBlendTarget>_>)
              (pFVar12->ComponentType).Value == this->Accessors) goto LAB_1468950cb;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        pFVar12 = (FComponentHeader *)0x0;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_1468950cb:
        EVar2 = pFVar7->LockMode;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar12->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar12->ScheduledAccessCount).field_0x0 + 1;
        UNLOCK();
        uVar1 = *(ushort *)((longlong)&pFVar6->DebugComponents + 6);
        pFVar11 = (FMovieSceneEntityID *)pFVar12->Components;
        if (uVar1 != 0) {
          uVar10 = (ulonglong)uVar1;
          do {
            TSet<UE::MovieScene::FHierarchicalBlendTarget,DefaultKeyFuncs<UE::MovieScene::FHierarchicalBlendTarget,0>,TInlineSetAllocator<16,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::Emplace<UE::MovieScene::FHierarchicalBlendTarget_const_&>
                      (param_3->BlendTargetChannelData,(FHierarchicalBlendTarget *)&stack0x00000008,
                       (bool *)pFVar11);
            pFVar11 = pFVar11 + 8;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        LOCK();
        *(int *)&(pFVar12->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar12->ScheduledAccessCount).field_0x0 + -1;
        UNLOCK();
        if (EVar2 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        if (pFVar9 != (FComponentHeader *)0x0) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar9->Size + 4) = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_60);
        bVar5 = FEntityAllocationIterator::operator!=(&local_60,&local_48);
      } while (bVar5);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_60);
  }
  return;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 1468951b0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>
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

// LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 146895290

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
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

// LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_> @ 146895370

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
          (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString> *param_1,int param_2,
          FPreAnimatedStorageIndex *param_3,FKeyForward param_4,
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

// LowerBoundInternal<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_const_,int,UE::MovieScene::FRootInstanceHandle,TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>::FKeyForward,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_> @ 146895450

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_const_,int,UE::MovieScene::FRootInstanceHandle,TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>::FKeyForward,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
          (TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *param_1,
          int param_2,FRootInstanceHandle *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FRootInstanceHandle_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ushort *)(param_1 + iVar1) < *(ushort *)param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel_const_,int,FMovieSceneSequenceID,FMovieSceneSequenceID_UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel::*,TLess<void>_> @ 1468954b0

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel_const_,int,FMovieSceneSequenceID,FMovieSceneSequenceID_UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel::*,TLess<void>_>
          (FSequenceIDAndChannel *param_1,int param_2,FMovieSceneSequenceID *param_3,
          pdm_de43273a param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)((longlong)&param_1[iVar1].SequenceID.Value + (longlong)(int)param_4) <
          param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MutableView<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_> @ 146895510

TMutableView<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_> __cdecl
MutableView<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *in_RDX;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)in_RDX;
  iVar2 = *(int *)(in_RDX + 8);
  lVar1 = lVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)(in_RDX + 8) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar3 == lVar1) break;
    lVar3 = lVar3 + 8;
  }
  (param_1->AllocatorInstance).Data = in_RDX;
  return (TMutableView<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_>)
         (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// NewObject<UMovieScene3DAttachSection> @ 146895570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScene3DAttachSection * __cdecl
NewObject<UMovieScene3DAttachSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieScene3DAttachSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieScene3DAttachSection *)
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

// NewObject<UMovieScene3DConstraintSection> @ 146895660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScene3DConstraintSection * __cdecl
NewObject<UMovieScene3DConstraintSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieScene3DConstraintSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieScene3DConstraintSection *)
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

// NewObject<UMovieScene3DPathSection> @ 146895750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScene3DPathSection * __cdecl
NewObject<UMovieScene3DPathSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieScene3DPathSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieScene3DPathSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieScene3DPathSection *)
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

// NewObject<UMovieScene3DTransformSection> @ 146895840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScene3DTransformSection * __cdecl
NewObject<UMovieScene3DTransformSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieScene3DTransformSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieScene3DTransformSection *)
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

// NewObject<UMovieScene> @ 146895930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScene * __cdecl NewObject<UMovieScene>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieScene *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieScene *)
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

// NewObject<UMovieSceneActorReferenceSection> @ 1468959d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneActorReferenceSection * __cdecl
NewObject<UMovieSceneActorReferenceSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneActorReferenceSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneActorReferenceSection *)
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

// NewObject<UMovieSceneAudioSection> @ 146895ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneAudioSection * __cdecl
NewObject<UMovieSceneAudioSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneAudioSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneAudioSection *)
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

// NewObject<UMovieSceneBoolSection> @ 146895bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneBoolSection * __cdecl
NewObject<UMovieSceneBoolSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneBoolSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneBoolSection *)
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

// NewObject<UMovieSceneByteSection> @ 146895ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneByteSection * __cdecl
NewObject<UMovieSceneByteSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneByteSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneByteSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneByteSection *)
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

// NewObject<UMovieSceneCVarSection> @ 146895d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCVarSection * __cdecl
NewObject<UMovieSceneCVarSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneCVarSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneCVarSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneCVarSection *)
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

// NewObject<UMovieSceneCameraCutSection> @ 146895e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCameraCutSection * __cdecl
NewObject<UMovieSceneCameraCutSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneCameraCutSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneCameraCutSection *)
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

// NewObject<UMovieSceneCameraShakeSection> @ 146895f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCameraShakeSection * __cdecl
NewObject<UMovieSceneCameraShakeSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneCameraShakeSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneCameraShakeSection *)
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

// NewObject<UMovieSceneCameraShakeSourceShakeSection> @ 146896060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCameraShakeSourceShakeSection * __cdecl
NewObject<UMovieSceneCameraShakeSourceShakeSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneCameraShakeSourceShakeSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneCameraShakeSourceShakeSection *)
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

// NewObject<UMovieSceneCameraShakeSourceTriggerSection> @ 146896150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCameraShakeSourceTriggerSection * __cdecl
NewObject<UMovieSceneCameraShakeSourceTriggerSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneCameraShakeSourceTriggerSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneCameraShakeSourceTriggerSection *)
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

// NewObject<UMovieSceneCinematicShotSection> @ 146896240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCinematicShotSection * __cdecl
NewObject<UMovieSceneCinematicShotSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneCinematicShotSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneCinematicShotSection *)
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

// NewObject<UMovieSceneColorSection> @ 146896330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneColorSection * __cdecl
NewObject<UMovieSceneColorSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneColorSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneColorSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneColorSection *)
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

// NewObject<UMovieSceneComponentMaterialParameterSection> @ 146896420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneComponentMaterialParameterSection * __cdecl
NewObject<UMovieSceneComponentMaterialParameterSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneComponentMaterialParameterSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneComponentMaterialParameterSection *)
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

// NewObject<UMovieSceneCustomPrimitiveDataSection> @ 146896510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCustomPrimitiveDataSection * __cdecl
NewObject<UMovieSceneCustomPrimitiveDataSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneCustomPrimitiveDataSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneCustomPrimitiveDataSection *)
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

// NewObject<UMovieSceneDataLayerSection> @ 146896600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneDataLayerSection * __cdecl
NewObject<UMovieSceneDataLayerSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneDataLayerSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneDataLayerSection *)
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

// NewObject<UMovieSceneDecomposerTestObject> @ 1468966f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneDecomposerTestObject * __cdecl
NewObject<UMovieSceneDecomposerTestObject>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneDecomposerTestObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneDecomposerTestObject::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneDecomposerTestObject *)
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

// NewObject<UMovieSceneDoubleSection> @ 146896790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneDoubleSection * __cdecl
NewObject<UMovieSceneDoubleSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneDoubleSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneDoubleSection *)
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

// NewObject<UMovieSceneDoubleVectorSection> @ 146896880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneDoubleVectorSection * __cdecl
NewObject<UMovieSceneDoubleVectorSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneDoubleVectorSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneDoubleVectorSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneDoubleVectorSection *)
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

// NewObject<UMovieSceneEnumSection> @ 146896970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEnumSection * __cdecl
NewObject<UMovieSceneEnumSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneEnumSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneEnumSection *)
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

// NewObject<UMovieSceneEventTriggerSection> @ 146896a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEventTriggerSection * __cdecl
NewObject<UMovieSceneEventTriggerSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneEventTriggerSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneEventTriggerSection *)
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

// NewObject<UMovieSceneFadeSection> @ 146896b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneFadeSection * __cdecl
NewObject<UMovieSceneFadeSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneFadeSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneFadeSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneFadeSection *)
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

// NewObject<UMovieSceneFloatSection> @ 146896c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneFloatSection * __cdecl
NewObject<UMovieSceneFloatSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneFloatSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneFloatSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneFloatSection *)
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

// NewObject<UMovieSceneFloatVectorSection> @ 146896d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneFloatVectorSection * __cdecl
NewObject<UMovieSceneFloatVectorSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneFloatVectorSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneFloatVectorSection *)
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

// NewObject<UMovieSceneIntegerSection> @ 146896e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneIntegerSection * __cdecl
NewObject<UMovieSceneIntegerSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneIntegerSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneIntegerSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneIntegerSection *)
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

// NewObject<UMovieSceneLevelVisibilitySection> @ 146896f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneLevelVisibilitySection * __cdecl
NewObject<UMovieSceneLevelVisibilitySection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneLevelVisibilitySection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneLevelVisibilitySection *)
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

// NewObject<UMovieSceneObjectPropertySection> @ 146897000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneObjectPropertySection * __cdecl
NewObject<UMovieSceneObjectPropertySection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneObjectPropertySection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneObjectPropertySection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneObjectPropertySection *)
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

// NewObject<UMovieSceneParameterSection> @ 1468970f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneParameterSection * __cdecl
NewObject<UMovieSceneParameterSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneParameterSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneParameterSection *)
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

// NewObject<UMovieScenePartialEvaluationTestObject> @ 1468971e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScenePartialEvaluationTestObject * __cdecl
NewObject<UMovieScenePartialEvaluationTestObject>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieScenePartialEvaluationTestObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieScenePartialEvaluationTestObject::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieScenePartialEvaluationTestObject *)
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

// NewObject<UMovieSceneParticleSection> @ 146897280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneParticleSection * __cdecl
NewObject<UMovieSceneParticleSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneParticleSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneParticleSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneParticleSection *)
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

// NewObject<UMovieScenePlatformCondition> @ 146897370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScenePlatformCondition * __cdecl NewObject<UMovieScenePlatformCondition>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieScenePlatformCondition *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieScenePlatformCondition_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieScenePlatformCondition *)
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

// NewObject<UMovieScenePrimitiveMaterialSection> @ 146897410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScenePrimitiveMaterialSection * __cdecl
NewObject<UMovieScenePrimitiveMaterialSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieScenePrimitiveMaterialSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieScenePrimitiveMaterialSection *)
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

// NewObject<UMovieSceneRotatorSection> @ 146897500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneRotatorSection * __cdecl
NewObject<UMovieSceneRotatorSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneRotatorSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneRotatorSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneRotatorSection *)
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

// NewObject<UMovieSceneSkeletalAnimationSection> @ 1468975f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSkeletalAnimationSection * __cdecl
NewObject<UMovieSceneSkeletalAnimationSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneSkeletalAnimationSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneSkeletalAnimationSection *)
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

// NewObject<UMovieSceneSlomoSection> @ 1468976e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSlomoSection * __cdecl
NewObject<UMovieSceneSlomoSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneSlomoSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneSlomoSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneSlomoSection *)
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

// NewObject<UMovieSceneStringSection> @ 1468977d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneStringSection * __cdecl
NewObject<UMovieSceneStringSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneStringSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneStringSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneStringSection *)
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

// NewObject<UMovieSceneTestSequence> @ 1468978c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneTestSequence * __cdecl NewObject<UMovieSceneTestSequence>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneTestSequence *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneTestSequence::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneTestSequence *)
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

// NewObject<UMovieSceneTextSection> @ 146897960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneTextSection * __cdecl
NewObject<UMovieSceneTextSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneTextSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneTextSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneTextSection *)
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

// NewObject<UMovieSceneVisibilitySection> @ 146897a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneVisibilitySection * __cdecl
NewObject<UMovieSceneVisibilitySection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneVisibilitySection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneVisibilitySection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneVisibilitySection *)
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

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<short,`UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets'::__l5::FHBiasChannelData>_>_> @ 146897f90

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<short,_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets_::__l5::FHBiasChannelData>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>_>
          *param_4,int *param_5,int *param_6)

{
  ForElementType<TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>_>
  *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>_>
  _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 0x11) {
    _Src = param_4->SecondaryData;
    uVar8 = 0x10;
LAB_146898046:
    uVar6 = uVar8;
    if (_Src == (ForElementType<TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>_>
                 )0x0) goto LAB_14689809a;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 2);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 0x11) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 0x11) goto LAB_146898046;
    iVar5 = iVar1;
    if (_Src == (ForElementType<TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>_>
                 )0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 << 2);
      goto LAB_14689809a;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_14689809a:
  *param_6 = uVar6;
  return iVar1;
}

// StaticEnum<enum_EComponentMaterialType> @ 14689b380

UEnum * __cdecl StaticEnum<enum_EComponentMaterialType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComponentMaterialType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UEnum_EComponentMaterialType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType,(UObject *)pUVar1,
                       L"EComponentMaterialType");
  }
  return Z_Registration_Info_UEnum_EComponentMaterialType.OuterSingleton;
}

// StaticEnum<enum_EFireEventsAtPosition> @ 14689b3c0

UEnum * __cdecl StaticEnum<enum_EFireEventsAtPosition>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFireEventsAtPosition.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UEnum_EFireEventsAtPosition.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition,(UObject *)pUVar1,
                       L"EFireEventsAtPosition");
  }
  return Z_Registration_Info_UEnum_EFireEventsAtPosition.OuterSingleton;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14689ff20

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,_UMovieSceneCVarTrackInstance::OnEndUpdateInputs_::__l2::FCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,this,0,(int *)((longlong)this + 0xc));
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

// `vector_deleting_destructor'`adjustor{296}' @ 1468a1ddc

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieScene3DPathTrack::`vector deleting
   destructor'`adjustor{296}' (unsigned int) __ptr64 */

void * __thiscall
UMovieScene3DPathTrack::_vector_deleting_destructor__adjustor_296__
          (UMovieScene3DPathTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieScene3DPathTrack *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{328}' @ 1468a1df0

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieScene3DTransformTrack::`vector deleting
   destructor'`adjustor{328}' (unsigned int) __ptr64 */

void * __thiscall
UMovieScene3DTransformTrack::_vector_deleting_destructor__adjustor_328__
          (UMovieScene3DTransformTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieScene3DTransformTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{328}' @ 1468a1e04

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneActorReferenceTrack::`vector deleting
   destructor'`adjustor{328}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneActorReferenceTrack::_vector_deleting_destructor__adjustor_328__
          (UMovieSceneActorReferenceTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneActorReferenceTrack *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{328}' @ 1468a1e18

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneBoolTrack::`vector deleting
   destructor'`adjustor{328}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneBoolTrack::_vector_deleting_destructor__adjustor_328__
          (UMovieSceneBoolTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneBoolTrack *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{336}' @ 1468a1e2c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneBoolTrack::`vector deleting
   destructor'`adjustor{336}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneBoolTrack::_vector_deleting_destructor__adjustor_336__
          (UMovieSceneBoolTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneBoolTrack *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{304}' @ 1468a1e40

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneComponentMaterialTrack::`vector
   deleting destructor'`adjustor{304}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneComponentMaterialTrack::_vector_deleting_destructor__adjustor_304__
          (UMovieSceneComponentMaterialTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneComponentMaterialTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{312}' @ 1468a1e54

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneComponentMaterialTrack::`vector
   deleting destructor'`adjustor{312}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneComponentMaterialTrack::_vector_deleting_destructor__adjustor_312__
          (UMovieSceneComponentMaterialTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneComponentMaterialTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{280}' @ 1468a1e68

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneCustomPrimitiveDataTrack::`vector
   deleting destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneCustomPrimitiveDataTrack::_vector_deleting_destructor__adjustor_280__
          (UMovieSceneCustomPrimitiveDataTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneCustomPrimitiveDataTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{288}' @ 1468a1e7c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneCustomPrimitiveDataTrack::`vector
   deleting destructor'`adjustor{288}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneCustomPrimitiveDataTrack::_vector_deleting_destructor__adjustor_288__
          (UMovieSceneCustomPrimitiveDataTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneCustomPrimitiveDataTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 1468a1e90

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneDoubleVectorPropertySystem::`vector
   deleting destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneDoubleVectorPropertySystem::_vector_deleting_destructor__adjustor_72__
          (UMovieSceneDoubleVectorPropertySystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneDoubleVectorPropertySystem *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{280}' @ 1468a1ea0

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneEventTrack::`vector deleting
   destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneEventTrack::_vector_deleting_destructor__adjustor_280__
          (UMovieSceneEventTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneEventTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{288}' @ 1468a1eb4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneEventTrack::`vector deleting
   destructor'`adjustor{288}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneEventTrack::_vector_deleting_destructor__adjustor_288__
          (UMovieSceneEventTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneEventTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 1468a1ec8

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneFloatVectorPropertySystem::`vector
   deleting destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneFloatVectorPropertySystem::_vector_deleting_destructor__adjustor_72__
          (UMovieSceneFloatVectorPropertySystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneFloatVectorPropertySystem *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{304}' @ 1468a1ed8

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UMovieSceneMaterialParameterCollectionTrack::`vector deleting destructor'`adjustor{304}'
   (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneMaterialParameterCollectionTrack::_vector_deleting_destructor__adjustor_304__
          (UMovieSceneMaterialParameterCollectionTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneMaterialParameterCollectionTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{312}' @ 1468a1eec

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UMovieSceneMaterialParameterCollectionTrack::`vector deleting destructor'`adjustor{312}'
   (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneMaterialParameterCollectionTrack::_vector_deleting_destructor__adjustor_312__
          (UMovieSceneMaterialParameterCollectionTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneMaterialParameterCollectionTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{280}' @ 1468a1f00

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneParticleParameterTrack::`vector
   deleting destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneParticleParameterTrack::_vector_deleting_destructor__adjustor_280__
          (UMovieSceneParticleParameterTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneParticleParameterTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{280}' @ 1468a1f14

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneParticleTrack::`vector deleting
   destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneParticleTrack::_vector_deleting_destructor__adjustor_280__
          (UMovieSceneParticleTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneParticleTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1468a1f30

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a1f70

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a1fb0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a1ff0

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FComponentMaterialInfo>_>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FComponentMaterialInfo>_> *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2030

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2070

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>_>::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<bool>_> *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a20b0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a20f0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2130

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2170

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a21b0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a21f0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2230

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2270

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a22b0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a22f0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2330

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAddConditional> *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2370

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a23b0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a23f0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2430

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2470

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a24b0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a24f0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2530

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2570

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a25b0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a25f0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FComponentMaterialInfo>,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2630

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2670

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a26b0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>::
_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a26f0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2730

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>::
_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<FComponentMaterialInfo>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2770

void * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<bool>_>::
_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<bool>_> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a27b0

void * __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>_>
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

// `scalar_deleting_destructor' @ 1468a2810

void * __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>_>
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

// `scalar_deleting_destructor' @ 1468a2870

void * __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>_>
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

// `scalar_deleting_destructor' @ 1468a28d0

void * __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>_>
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

// `scalar_deleting_destructor' @ 1468a2930

void * __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>_>
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

// `scalar_deleting_destructor' @ 1468a2990

void * __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>_>
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

// `scalar_deleting_destructor' @ 1468a29f0

void * __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>_>
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

// `scalar_deleting_destructor' @ 1468a2a50

void * __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>_>
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

// `scalar_deleting_destructor' @ 1468a2ab0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2af0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2b30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2b70

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2bb0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2bf0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2c30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2c70

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2cb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedCVarStorage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedCVarStorage,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2cf0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedCameraCutStorage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedCameraCutStorage,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2d30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedVisibilityStorage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedVisibilityStorage,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2d70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::
_scalar_deleting_destructor_
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits> *this,uint param_1)

{
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2db0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::
_scalar_deleting_destructor_
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits> *this,uint param_1)

{
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2df0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::
_scalar_deleting_destructor_
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits> *this,uint param_1
          )

{
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2e30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits>
::_scalar_deleting_destructor_
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits> *this
          ,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2e70

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2eb0

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2ef0

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2f30

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2f70

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2fb0

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a2ff0

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3030

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3070

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyPtrImpl<double_const_>::_scalar_deleting_destructor_
          (TTypeErasedPropertyPtrImpl<double_const_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a30b0

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyPtrImpl<double>::_scalar_deleting_destructor_
          (TTypeErasedPropertyPtrImpl<double> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a30f0

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double_const_>::_scalar_deleting_destructor_
          (TTypeErasedPropertyValueImpl<double_const_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3130

void * __thiscall
UE::MovieScene::FConsumerEasingChannelMutation::_scalar_deleting_destructor_
          (FConsumerEasingChannelMutation *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3180

void * __thiscall
UE::MovieScene::FEasingChannelMutationBase::_scalar_deleting_destructor_
          (FEasingChannelMutationBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->StaleEntities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a31d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
`FMovieScenePartialEvaluationTest::RunTest'::__l2::FLocalPlayer::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
            ((FMovieSceneRootEvaluationTemplateInstance *)((longlong)this + 0x1f0));
  IMovieScenePlayer::~IMovieScenePlayer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3220

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FPreAnimatedCVarStorage::_scalar_deleting_destructor_
          (FPreAnimatedCVarStorage *this,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3260

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FPreAnimatedCameraCutStorage::_scalar_deleting_destructor_
          (FPreAnimatedCameraCutStorage *this,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraCutTraits> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a32a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FPreAnimatedVisibilityStorage::_scalar_deleting_destructor_
          (FPreAnimatedVisibilityStorage *this,uint param_1)

{
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a32e0

void * __thiscall
UE::MovieScene::FProviderEasingChannelMutation::_scalar_deleting_destructor_
          (FProviderEasingChannelMutation *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3330

void * __thiscall
IMovieSceneBlenderSystemSupport::_scalar_deleting_destructor_
          (IMovieSceneBlenderSystemSupport *this,uint param_1)

{
  *this = (IMovieSceneBlenderSystemSupport)&___7IMovieSceneBlenderSystemSupport__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3370

void * __thiscall
IMovieSceneDeterminismSource::_scalar_deleting_destructor_
          (IMovieSceneDeterminismSource *this,uint param_1)

{
  *this = (IMovieSceneDeterminismSource)&___7IMovieSceneDeterminismSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a33b0

void * __thiscall
IMovieSceneParameterSectionExtender::_scalar_deleting_destructor_
          (IMovieSceneParameterSectionExtender *this,uint param_1)

{
  *this = (IMovieSceneParameterSectionExtender)&___7IMovieSceneParameterSectionExtender__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a33f0

void * __thiscall
IMovieSceneSectionsToKey::_scalar_deleting_destructor_(IMovieSceneSectionsToKey *this,uint param_1)

{
  *this = (IMovieSceneSectionsToKey)&___7IMovieSceneSectionsToKey__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3430

void * __thiscall
UMovieScene3DAttachTrack::_scalar_deleting_destructor_(UMovieScene3DAttachTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScene3DConstraintTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScene3DConstraintTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x118 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x118);
  }
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a34b0

void * __thiscall
UMovieScene3DConstraintTrack::_scalar_deleting_destructor_
          (UMovieScene3DConstraintTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->ConstraintSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3530

void * __thiscall
UMovieScene3DPathTrack::_scalar_deleting_destructor_(UMovieScene3DPathTrack *this,uint param_1)

{
  *(undefined ***)&this->field_0x128 = &___7IMovieSceneTrackTemplateProducer__6B_;
  *(undefined ***)this =
       &UMovieScene3DConstraintTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScene3DConstraintTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x118 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x118);
  }
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a35c0

void * __thiscall
UMovieScene3DTransformTrack::_scalar_deleting_destructor_
          (UMovieScene3DTransformTrack *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneBlenderSystemSupport__6B_;
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3650

void * __thiscall
UMovieSceneActorReferenceTrack::_scalar_deleting_destructor_
          (UMovieSceneActorReferenceTrack *this,uint param_1)

{
  *(undefined ***)&this->field_0x148 = &___7IMovieSceneTrackTemplateProducer__6B_;
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a36e0

void * __thiscall
UMovieSceneAudioTrack::_scalar_deleting_destructor_(UMovieSceneAudioTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->AudioSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3760

void * __thiscall
UMovieSceneBoolTrack::_scalar_deleting_destructor_(UMovieSceneBoolTrack *this,uint param_1)

{
  *(undefined ***)&this->field_0x150 = &___7IMovieSceneEntityProvider__6B_;
  *(undefined ***)&this->field_0x148 = &___7IMovieSceneTrackTemplateProducer__6B_;
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3800

void * __thiscall
UMovieSceneByteTrack::_scalar_deleting_destructor_(UMovieSceneByteTrack *this,uint param_1)

{
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3880

void * __thiscall
UMovieSceneCVarTrack::_scalar_deleting_destructor_(UMovieSceneCVarTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3900

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneCVarTrackInstance::_scalar_deleting_destructor_
          (UMovieSceneCVarTrackInstance *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneCVarTrackInstance__6B_;
  (this->CVarsNeedingUpdate).HashSize = 0;
  FVar1 = (this->CVarsNeedingUpdate).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CVarsNeedingUpdate).Elements);
  UMovieSceneTrackInstance::~UMovieSceneTrackInstance((UMovieSceneTrackInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a39a0

void * __thiscall
UMovieSceneCameraCutTrack::_scalar_deleting_destructor_
          (UMovieSceneCameraCutTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3a20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneCameraCutTrackInstance::_scalar_deleting_destructor_
          (UMovieSceneCameraCutTrackInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneCameraCutTrackInstance__6B_;
  pFVar1 = (this->SortedInputInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneTrackInstance::~UMovieSceneTrackInstance((UMovieSceneTrackInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3a90

void * __thiscall
UMovieSceneCameraShakeSourceShakeTrack::_scalar_deleting_destructor_
          (UMovieSceneCameraShakeSourceShakeTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->CameraShakeSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3b10

void * __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::_scalar_deleting_destructor_
          (UMovieSceneCameraShakeSourceTriggerTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3b90

void * __thiscall
UMovieSceneCameraShakeTrack::_scalar_deleting_destructor_
          (UMovieSceneCameraShakeTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->CameraShakeSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3c10

void * __thiscall
UMovieSceneCinematicShotTrack::_scalar_deleting_destructor_
          (UMovieSceneCinematicShotTrack *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieSceneSubTrack::~UMovieSceneSubTrack((UMovieSceneSubTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3c80

void * __thiscall
UMovieSceneColorTrack::_scalar_deleting_destructor_(UMovieSceneColorTrack *this,uint param_1)

{
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3d00

void * __thiscall
UMovieSceneCommonAnimationTrack::_scalar_deleting_destructor_
          (UMovieSceneCommonAnimationTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->AnimationSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3d80

void * __thiscall
UMovieSceneComponentMaterialTrack::_scalar_deleting_destructor_
          (UMovieSceneComponentMaterialTrack *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneParameterSectionExtender__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  this->_padding_ =
       (longlong)&UMovieSceneMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieSceneMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3e20

void * __thiscall
UMovieSceneCustomPrimitiveDataTrack::_scalar_deleting_destructor_
          (UMovieSceneCustomPrimitiveDataTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneParameterSectionExtender__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3ee0

void * __thiscall
UMovieSceneDataLayerTrack::_scalar_deleting_destructor_
          (UMovieSceneDataLayerTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a3f60

void * __thiscall
UMovieSceneDecomposerTestObject::_scalar_deleting_destructor_
          (UMovieSceneDecomposerTestObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneDecomposerTestObject__6B_;
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

// `scalar_deleting_destructor' @ 1468a3fc0

void * __thiscall
UMovieSceneDoubleTrack::_scalar_deleting_destructor_(UMovieSceneDoubleTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4040

void * __thiscall
UMovieSceneDoubleVectorPropertySystem::_scalar_deleting_destructor_
          (UMovieSceneDoubleVectorPropertySystem *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UMovieScenePropertySystem::~UMovieScenePropertySystem((UMovieScenePropertySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a40b0

void * __thiscall
UMovieSceneDoubleVectorTrack::_scalar_deleting_destructor_
          (UMovieSceneDoubleVectorTrack *this,uint param_1)

{
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4130

void * __thiscall
UMovieSceneEnumTrack::_scalar_deleting_destructor_(UMovieSceneEnumTrack *this,uint param_1)

{
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a41b0

void * __thiscall
UMovieSceneEulerTransformTrack::_scalar_deleting_destructor_
          (UMovieSceneEulerTransformTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4230

void * __thiscall
UMovieSceneEventTrack::_scalar_deleting_destructor_(UMovieSceneEventTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDeterminismSource__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneDeterminismSource__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a42f0

void * __thiscall
UMovieSceneFadeTrack::_scalar_deleting_destructor_(UMovieSceneFadeTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4370

void * __thiscall
UMovieSceneFadeTrackTestLibrary::_scalar_deleting_destructor_
          (UMovieSceneFadeTrackTestLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneFadeTrackTestLibrary__6B_;
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

// `scalar_deleting_destructor' @ 1468a43d0

void * __thiscall
UMovieSceneFloatTrack::_scalar_deleting_destructor_(UMovieSceneFloatTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4450

void * __thiscall
UMovieSceneFloatVectorPropertySystem::_scalar_deleting_destructor_
          (UMovieSceneFloatVectorPropertySystem *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UMovieScenePropertySystem::~UMovieScenePropertySystem((UMovieScenePropertySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a44c0

void * __thiscall
UMovieSceneFloatVectorTrack::_scalar_deleting_destructor_
          (UMovieSceneFloatVectorTrack *this,uint param_1)

{
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4540

void * __thiscall
UMovieSceneHierarchicalEasingFinalizationSystem::_scalar_deleting_destructor_
          (UMovieSceneHierarchicalEasingFinalizationSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneHierarchicalEasingFinalizationSystem__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a45a0

void * __thiscall
UMovieSceneHierarchicalEasingInstantiatorSystem::_scalar_deleting_destructor_
          (UMovieSceneHierarchicalEasingInstantiatorSystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneHierarchicalEasingInstantiatorSystem__6B_;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedHierarchicalBlendTargetChannels).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedHierarchicalBlendTargetChannels);
  TSparseArray<unsigned_short,FDefaultSparseArrayAllocator>::
  ~TSparseArray<unsigned_short,FDefaultSparseArrayAllocator>(&this->CachedInstanceIDToChannel);
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4640

void * __thiscall
UMovieSceneIntegerTrack::_scalar_deleting_destructor_(UMovieSceneIntegerTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a46c0

void * __thiscall
UMovieSceneLevelVisibilityTrack::_scalar_deleting_destructor_
          (UMovieSceneLevelVisibilityTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4740

void * __thiscall
UMovieSceneMaterialParameterCollectionTrack::_scalar_deleting_destructor_
          (UMovieSceneMaterialParameterCollectionTrack *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneParameterSectionExtender__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  this->_padding_ =
       (longlong)&UMovieSceneMaterialTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieSceneMaterialTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a47e0

void * __thiscall
UMovieSceneMaterialTrack::_scalar_deleting_destructor_(UMovieSceneMaterialTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4860

void * __thiscall
UMovieSceneObjectPropertyTrack::_scalar_deleting_destructor_
          (UMovieSceneObjectPropertyTrack *this,uint param_1)

{
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a48e0

void * __thiscall
UMovieScenePartialEvaluationTestObject::_scalar_deleting_destructor_
          (UMovieScenePartialEvaluationTestObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieScenePartialEvaluationTestObject__6B_;
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

// `scalar_deleting_destructor' @ 1468a4940

void * __thiscall
UMovieSceneParticleParameterTrack::_scalar_deleting_destructor_
          (UMovieSceneParticleParameterTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneParticleParameterTrack__6B_;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a49e0

void * __thiscall
UMovieSceneParticleTrack::_scalar_deleting_destructor_(UMovieSceneParticleTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneParticleTrack__6B_;
  pFVar1 = (this->ParticleSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4a80

void * __thiscall
UMovieScenePrimitiveMaterialTrack::_scalar_deleting_destructor_
          (UMovieScenePrimitiveMaterialTrack *this,uint param_1)

{
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4b00

void * __thiscall
UMovieScenePropertyTrack::_scalar_deleting_destructor_(UMovieScenePropertyTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4b80

void * __thiscall
UMovieSceneRotatorTrack::_scalar_deleting_destructor_(UMovieSceneRotatorTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4c00

void * __thiscall
UMovieSceneSectionsToKey::_scalar_deleting_destructor_(UMovieSceneSectionsToKey *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1468a4c60

void * __thiscall
UMovieSceneSkeletalAnimationTrack::_scalar_deleting_destructor_
          (UMovieSceneSkeletalAnimationTrack *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &UMovieSceneCommonAnimationTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ =
       (longlong)&UMovieSceneCommonAnimationTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4ce0

void * __thiscall
UMovieSceneSlomoTrack::_scalar_deleting_destructor_(UMovieSceneSlomoTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4d60

void * __thiscall
UMovieSceneStringTrack::_scalar_deleting_destructor_(UMovieSceneStringTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4de0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UMovieSceneTestSequence::_scalar_deleting_destructor_(UMovieSceneTestSequence *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneTestSequence__6B_;
  pFVar1 = (this->BindingGuids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4e60

void * __thiscall
UMovieSceneTextTrack::_scalar_deleting_destructor_(UMovieSceneTextTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4ee0

void * __thiscall
UMovieSceneTransformTrack::_scalar_deleting_destructor_
          (UMovieSceneTransformTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4f60

void * __thiscall
UMovieSceneVisibilitySystem::_scalar_deleting_destructor_
          (UMovieSceneVisibilitySystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneVisibilitySystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedStorage).SharedReferenceCount.ReferenceController);
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a4fd0

void * __thiscall
UMovieSceneVisibilityTrack::_scalar_deleting_destructor_
          (UMovieSceneVisibilityTrack *this,uint param_1)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a5050

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UObjectPathChannelEvaluatorSystem::_scalar_deleting_destructor_
          (UObjectPathChannelEvaluatorSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UObjectPathChannelEvaluatorSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a50b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UStringChannelEvaluatorSystem::_scalar_deleting_destructor_
          (UStringChannelEvaluatorSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UStringChannelEvaluatorSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a5110

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UTextChannelEvaluatorSystem::_scalar_deleting_destructor_
          (UTextChannelEvaluatorSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UTextChannelEvaluatorSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1468a5170

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UWeightAndEasingEvaluatorSystem::_scalar_deleting_destructor_
          (UWeightAndEasingEvaluatorSystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWeightAndEasingEvaluatorSystem__6B_;
  pFVar1 = (this->PreAllocatedComputationData).Channels.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// BlendTheseTransformsByWeight @ 1468ab7e0

void __cdecl
BlendTheseTransformsByWeight
          (TTransform<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
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
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  double local_res10;
  double local_res18;
  
  iVar24 = param_3->ArrayNum;
  uVar21 = 0;
  if (0 < iVar24) {
    fVar38 = 0.0;
    uVar26 = uVar21;
    uVar23 = uVar21;
    do {
      uVar20 = (uint)uVar26;
      uVar37 = 0;
      if ((int)uVar20 < iVar24) {
        uVar37 = ~uVar20 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar19 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar26 = (ulonglong)(uVar20 + 1);
      iVar24 = param_3->ArrayNum;
      fVar38 = fVar38 + *(float *)((param_3->AllocatorInstance).Data + uVar23);
      uVar23 = uVar23 + 4;
    } while ((int)(uVar20 + 1) < iVar24);
    if ((__real_322bcc77 <
         (float)((uint)(fVar38 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
       (0 < iVar24)) {
      fVar38 = __real_3f800000 / fVar38;
      uVar26 = uVar21;
      uVar23 = uVar21;
      do {
        uVar20 = (uint)uVar26;
        uVar37 = 0;
        if ((int)uVar20 < iVar24) {
          uVar37 = ~uVar20 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (param_3->AllocatorInstance).Data;
        uVar26 = (ulonglong)(uVar20 + 1);
        *(float *)(pFVar2 + uVar23) = fVar38 * *(float *)(pFVar2 + uVar23);
        uVar23 = uVar23 + 4;
        iVar24 = param_3->ArrayNum;
      } while ((int)(uVar20 + 1) < iVar24);
    }
  }
  iVar1 = param_2->ArrayNum;
  if ((iVar1 != iVar24) &&
     (bVar19 = FDebug::CheckVerifyFailedImpl2
                         ("Transforms.Num() == Weights.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneCommonAnimationTrack.cpp"
                          ,0xbb,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar1 == 0) {
    *&(param_1->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_1->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_1->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_1->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_1->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_1->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else if (iVar1 == 1) {
    if ((param_2->ArrayNum < 1) &&
       (bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    dVar6 = *(double *)(pFVar2 + 8);
    (param_1->Rotation).XY.m128d_f64[0] = *(double *)pFVar2;
    (param_1->Rotation).XY.m128d_f64[1] = dVar6;
    dVar6 = *(double *)(pFVar2 + 0x18);
    (param_1->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar2 + 0x10);
    (param_1->Rotation).ZW.m128d_f64[1] = dVar6;
    dVar6 = *(double *)(pFVar2 + 0x28);
    (param_1->Translation).XY.m128d_f64[0] = *(double *)(pFVar2 + 0x20);
    (param_1->Translation).XY.m128d_f64[1] = dVar6;
    dVar6 = *(double *)(pFVar2 + 0x38);
    (param_1->Translation).ZW.m128d_f64[0] = *(double *)(pFVar2 + 0x30);
    (param_1->Translation).ZW.m128d_f64[1] = dVar6;
    dVar6 = *(double *)(pFVar2 + 0x48);
    (param_1->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar2 + 0x40);
    (param_1->Scale3D).XY.m128d_f64[1] = dVar6;
    dVar6 = *(double *)(pFVar2 + 0x58);
    (param_1->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar2 + 0x50);
    (param_1->Scale3D).ZW.m128d_f64[1] = dVar6;
  }
  else {
    dVar34 = 0.0;
    dVar7 = 0.0;
    uVar39 = 0;
    dVar6 = 0.0;
    dVar29 = 0.0;
    uVar40 = 0;
    local_res10 = 0.0;
    local_res18 = 0.0;
    if ((param_2->ArrayNum < 1) &&
       (bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    dVar15 = *(double *)pFVar2;
    dVar16 = *(double *)(pFVar2 + 8);
    dVar17 = *(double *)(pFVar2 + 0x10);
    dVar18 = *(double *)(pFVar2 + 0x18);
    if ((param_3->ArrayNum < 1) &&
       (bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar10 = (double)*(float *)(param_3->AllocatorInstance).Data * dVar18;
    if ((param_3->ArrayNum < 1) &&
       (bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar9 = (double)*(float *)(param_3->AllocatorInstance).Data * dVar17;
    if ((param_3->ArrayNum < 1) &&
       (bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar8 = (double)*(float *)(param_3->AllocatorInstance).Data * dVar16;
    if ((param_3->ArrayNum < 1) &&
       (bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar5 = (double)*(float *)(param_3->AllocatorInstance).Data * dVar15;
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar14 = 0.0;
    if (0 < iVar1) {
      uVar41 = (undefined4)__real_3ff0000000000000;
      uVar26 = (ulonglong)__real_3ff0000000000000 >> 0x20;
      uVar23 = uVar21;
      uVar25 = uVar21;
      do {
        uVar20 = (uint)uVar21;
        uVar22 = ~uVar20 >> 0x1f;
        uVar37 = 0;
        if ((int)uVar20 < param_2->ArrayNum) {
          uVar37 = uVar22;
        }
        if ((uVar37 == 0) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        pFVar2 = pFVar3 + uVar23 + 0x20;
        dVar12 = *(double *)pFVar2;
        dVar13 = *(double *)(pFVar2 + 8);
        dVar11 = *(double *)(pFVar3 + uVar23 + 0x30);
        uVar37 = 0;
        if ((int)uVar20 < param_3->ArrayNum) {
          uVar37 = uVar22;
        }
        if ((uVar37 == 0) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar38 = *(float *)((param_3->AllocatorInstance).Data + uVar25 * 4);
        uVar37 = 0;
        if ((int)uVar20 < param_2->ArrayNum) {
          uVar37 = uVar22;
        }
        local_res10 = local_res10 + (double)fVar38 * dVar11;
        dVar34 = dVar34 + (double)fVar38 * dVar12;
        dVar7 = dVar7 + (double)fVar38 * dVar13;
        uVar39 = SUB84(dVar7,0);
        if ((uVar37 == 0) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        pFVar2 = pFVar3 + uVar23 + 0x40;
        dVar12 = *(double *)pFVar2;
        dVar13 = *(double *)(pFVar2 + 8);
        dVar11 = *(double *)(pFVar3 + uVar23 + 0x50);
        uVar37 = 0;
        if ((int)uVar20 < param_3->ArrayNum) {
          uVar37 = uVar22;
        }
        if ((uVar37 == 0) &&
           (bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar38 = *(float *)((param_3->AllocatorInstance).Data + uVar25 * 4);
        in_XMM2._4_4_ = fVar38;
        in_XMM2._0_4_ = fVar38;
        in_XMM2._8_8_ = 0.0;
        local_res18 = local_res18 + (double)fVar38 * dVar11;
        dVar6 = dVar6 + (double)fVar38 * dVar12;
        dVar29 = dVar29 + (double)fVar38 * dVar13;
        uVar40 = SUB84(dVar29,0);
        if (uVar20 != 0) {
          uVar37 = 0;
          if ((int)uVar20 < param_2->ArrayNum) {
            uVar37 = uVar22;
          }
          if ((uVar37 == 0) &&
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
          pFVar3 = (param_2->AllocatorInstance).Data;
          pFVar2 = pFVar3 + uVar23;
          dVar11 = *(double *)pFVar2;
          dVar12 = *(double *)(pFVar2 + 8);
          pFVar3 = pFVar3 + uVar23 + 0x10;
          dVar13 = *(double *)pFVar3;
          dVar14 = *(double *)(pFVar3 + 8);
          uVar27 = uVar41;
          uVar28 = (int)uVar26;
          if (dVar11 * dVar15 + dVar12 * dVar16 + dVar13 * dVar17 + dVar14 * dVar18 < 0.0) {
            uVar27 = (int)__real_bff0000000000000;
            uVar28 = (int)((ulonglong)__real_bff0000000000000 >> 0x20);
          }
          uVar37 = 0;
          if ((int)uVar20 < param_3->ArrayNum) {
            uVar37 = uVar22;
          }
          if ((uVar37 == 0) &&
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
          fVar38 = *(float *)((param_3->AllocatorInstance).Data + uVar25 * 4);
          in_XMM2._0_8_ = (double)fVar38 * dVar11 * (double)CONCAT44(uVar28,uVar27);
          in_XMM2._8_8_ = (double)fVar38 * dVar12 * (double)CONCAT44(uVar28,uVar27);
          dVar5 = dVar5 + in_XMM2._0_8_;
          dVar8 = dVar8 + in_XMM2._8_8_;
          dVar9 = dVar9 + (double)fVar38 * dVar13 * (double)CONCAT44(uVar28,uVar27);
          dVar10 = dVar10 + (double)fVar38 * dVar14 * (double)CONCAT44(uVar28,uVar27);
        }
        uVar21 = (ulonglong)(uVar20 + 1);
        uVar25 = uVar25 + 1;
        uVar23 = uVar23 + 0x60;
        dVar11 = dVar34;
        dVar12 = dVar7;
        dVar13 = dVar6;
        dVar14 = dVar29;
      } while ((longlong)uVar25 < (longlong)iVar1);
    }
    auVar30._8_4_ = SUB84(dVar8,0);
    auVar30._0_8_ = dVar5;
    auVar30._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dVar29 = dVar5 * dVar5 + dVar9 * dVar9;
    dVar34 = auVar30._8_8_ * dVar8 + dVar10 * dVar10;
    dVar6 = dVar34 + dVar29;
    dVar29 = dVar29 + dVar34;
    auVar31._8_4_ = SUB84(dVar29,0);
    auVar31._0_8_ = dVar6;
    auVar31._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    auVar35 = sqrtpd(in_XMM2,auVar31);
    uVar26 = -(ulonglong)(__real_3e45798ee0000000 <= dVar6);
    uVar23 = -(ulonglong)(__real_3e45798ee0000000 <= dVar29);
    uVar37 = (uint)(uVar26 >> 0x20);
    uVar20 = (uint)(uVar23 >> 0x20);
    auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
    auVar32._0_8_ = uVar26 & (ulonglong)(auVar31._0_8_ * dVar9);
    uVar21 = uVar23 & (ulonglong)(auVar31._8_8_ * dVar10);
    auVar32._8_4_ = (undefined4)uVar21;
    auVar32._12_4_ = (undefined4)(uVar21 >> 0x20);
    auVar36._0_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar36._4_4_ =
         ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar36._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar36._12_4_ =
         ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar35);
    auVar33._0_8_ = (ulonglong)(auVar31._0_8_ * dVar5) & uVar26;
    uVar21 = (ulonglong)(auVar31._8_8_ * dVar8) & uVar23;
    auVar33._8_4_ = (undefined4)uVar21;
    auVar33._12_4_ = (undefined4)(uVar21 >> 0x20);
    auVar35._4_4_ =
         ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar35._0_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar35._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar35._12_4_ =
         ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar33 | auVar35;
    *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar36 | auVar32;
    (param_1->Translation).XY.m128d_f64[0] = dVar11;
    (param_1->Translation).XY.m128d_f64[1] =
         (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),uVar39);
    (param_1->Translation).ZW.m128d_f64[0] = local_res10;
    (param_1->Translation).ZW.m128d_f64[1] = 0.0;
    (param_1->Scale3D).XY.m128d_f64[0] = dVar13;
    (param_1->Scale3D).XY.m128d_f64[1] = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar40);
    (param_1->Scale3D).ZW.m128d_f64[0] = local_res18;
    (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeIMovieSceneSectionsToKey @ 1468b09c0

void __cdecl EmptyLinkFunctionForGeneratedCodeIMovieSceneSectionsToKey(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachTrack @ 1468b09d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScene3DConstraintTrack @ 1468b09e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScene3DConstraintTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScene3DPathTrack @ 1468b09f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScene3DPathTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformTrack @ 1468b0a00

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceTrack @ 1468b0a10

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneAudioTrack @ 1468b0a20

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneAudioTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBoolTrack @ 1468b0a30

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBoolTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneByteTrack @ 1468b0a40

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneByteTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCVarTrack @ 1468b0a50

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCVarTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCVarTrackInstance @ 1468b0a60

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCVarTrackInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTrack @ 1468b0a70

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTrackInstance @ 1468b0a80

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTrackInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceShakeTrack @ 1468b0a90

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceShakeTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceTriggerTrack @ 1468b0aa0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceTriggerTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeTrack @ 1468b0ab0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCinematicShotTrack @ 1468b0ac0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCinematicShotTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneColorTrack @ 1468b0ad0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneColorTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCommonAnimationTrack @ 1468b0ae0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCommonAnimationTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCustomPrimitiveDataTrack @ 1468b0af0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCustomPrimitiveDataTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneDataLayerTrack @ 1468b0b00

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneDataLayerTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneDecomposerTests @ 1468b0b10

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneDecomposerTests(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneDoubleTrack @ 1468b0b20

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneDoubleTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEnumTrack @ 1468b0b30

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEnumTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEulerTransformTrack @ 1468b0b40

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEulerTransformTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEventTrack @ 1468b0b50

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEventTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneFadeTrack @ 1468b0b60

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneFadeTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneFadeTrackTests @ 1468b0b70

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneFadeTrackTests(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneFloatTrack @ 1468b0b80

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneFloatTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerTrack @ 1468b0b90

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilityTrack @ 1468b0ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilityTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterCollectionTrack @ 1468b0bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterCollectionTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialTrack @ 1468b0bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPropertyTrack @ 1468b0bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPropertyTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScenePartialEvaluationTests @ 1468b0be0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScenePartialEvaluationTests(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneParticleParameterTrack @ 1468b0bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneParticleParameterTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneParticleTrack @ 1468b0c00

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneParticleTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTrack @ 1468b0c10

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTrack @ 1468b0c20

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneRotatorTrack @ 1468b0c30

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneRotatorTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationTrack @ 1468b0c40

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSlomoTrack @ 1468b0c50

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSlomoTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneStringTrack @ 1468b0c60

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneStringTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTestDataBuilders @ 1468b0c70

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTestDataBuilders(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTextTrack @ 1468b0c80

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTextTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTransformTrack @ 1468b0c90

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTransformTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneVectorPropertySystem @ 1468b0ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneVectorPropertySystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneVectorTrack @ 1468b0cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneVectorTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilitySystem @ 1468b0cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilitySystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilityTrack @ 1468b0cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilityTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectPathChannelEvaluatorSystem @ 1468b0ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectPathChannelEvaluatorSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStringChannelEvaluatorSystem @ 1468b0cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeStringChannelEvaluatorSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextChannelEvaluatorSystem @ 1468b0d00

void __cdecl EmptyLinkFunctionForGeneratedCodeTextChannelEvaluatorSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWeightAndEasingEvaluatorSystem @ 1468b0d10

void __cdecl EmptyLinkFunctionForGeneratedCodeWeightAndEasingEvaluatorSystem(void)

{
  return;
}

// EulerFromQuat @ 1468b0d20

TVector<double> * __cdecl
EulerFromQuat(TVector<double> *__return_storage_ptr__,TQuat<double> *param_1,
             ESkelAnimRotationOrder param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  fVar10 = (float)param_1->X;
  fVar13 = (float)param_1->Y;
  fVar22 = fVar13 + fVar13;
  fVar14 = (float)param_1->Z;
  fVar23 = (fVar10 + fVar10) * fVar10;
  fVar17 = fVar14 + fVar14;
  fVar15 = (float)param_1->W;
  fVar24 = (fVar10 + fVar10) * fVar15;
  dVar1 = (double)(__real_3f800000 - (fVar17 * fVar14 + fVar22 * fVar13));
  fVar11 = fVar17 * fVar15 + fVar22 * fVar10;
  fVar16 = fVar22 * fVar10 - fVar17 * fVar15;
  dVar9 = (double)fVar11;
  fVar12 = fVar17 * fVar10 - fVar22 * fVar15;
  fVar10 = fVar22 * fVar15 + fVar17 * fVar10;
  uVar27 = SUB84((double)fVar16,0);
  uVar28 = (uint)((ulonglong)(double)fVar16 >> 0x20);
  uVar25 = SUB84((double)fVar12,0);
  uVar26 = (uint)((ulonglong)(double)fVar12 >> 0x20);
  dVar2 = (double)(__real_3f800000 - (fVar17 * fVar14 + fVar23));
  fVar14 = fVar24 + fVar17 * fVar13;
  fVar24 = fVar17 * fVar13 - fVar24;
  dVar7 = (double)fVar14;
  dVar3 = (double)fVar10;
  uVar20 = SUB84((double)fVar24,0);
  uVar21 = (uint)((ulonglong)(double)fVar24 >> 0x20);
  dVar8 = (double)(__real_3f800000 - (fVar22 * fVar13 + fVar23));
  if (param_2 == XYZ) {
    if (__real_3f800000 <= fVar12) {
      fVar12 = __real_3f800000;
    }
    if (fVar12 <= __real_bf800000) {
      fVar12 = __real_bf800000;
    }
    fVar12 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
    fVar10 = __real_bf800000;
    if ((__real_bf800000 <= fVar12) && (fVar10 = fVar12, __real_3f800000 <= fVar12)) {
      fVar10 = __real_3f800000;
    }
    fVar10 = asinf(fVar10);
    if (__real_3feffffffaa19c48 <=
        (double)CONCAT44(uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         uVar25 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar9 = (double)CONCAT44(uVar28 ^ __xmm_80000000000000008000000000000000._4_4_,
                               uVar27 ^ (uint)__xmm_80000000000000008000000000000000);
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      dVar2 = FGenericPlatformMath::Atan2(dVar7,dVar8);
      uVar18 = SUB84(dVar2,0);
      uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar2 = dVar1;
    }
    uVar4 = FGenericPlatformMath::Atan2(dVar9,dVar2);
    uVar5 = (double)fVar10;
    uVar6 = CONCAT44(uVar19,uVar18);
  }
  else if (param_2 == XZY) {
    if (__real_3f800000 <= fVar11) {
      fVar11 = __real_3f800000;
    }
    if (fVar11 <= __real_bf800000) {
      fVar11 = __real_bf800000;
    }
    fVar10 = __real_bf800000;
    if ((__real_bf800000 <= fVar11) && (fVar10 = fVar11, __real_3f800000 <= fVar11)) {
      fVar10 = __real_3f800000;
    }
    fVar10 = asinf(fVar10);
    if (__real_3feffffffaa19c48 <=
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      dVar2 = FGenericPlatformMath::Atan2
                        ((double)CONCAT44(uVar21 ^ __xmm_80000000000000008000000000000000._4_4_,
                                          uVar20 ^ (uint)__xmm_80000000000000008000000000000000),
                         dVar2);
      uVar18 = SUB84(dVar2,0);
      uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar3 = (double)CONCAT44(uVar26 ^ __xmm_80000000000000008000000000000000._4_4_,
                               uVar25 ^ (uint)__xmm_80000000000000008000000000000000);
      dVar8 = dVar1;
    }
    uVar5 = FGenericPlatformMath::Atan2(dVar3,dVar8);
    uVar4 = (double)fVar10;
    uVar6 = CONCAT44(uVar19,uVar18);
  }
  else if (param_2 == YXZ) {
    if (__real_3f800000 <= fVar14) {
      fVar14 = __real_3f800000;
    }
    if (fVar14 <= __real_bf800000) {
      fVar14 = __real_bf800000;
    }
    fVar10 = __real_bf800000;
    if ((__real_bf800000 <= fVar14) && (fVar10 = fVar14, __real_3f800000 <= fVar14)) {
      fVar10 = __real_3f800000;
    }
    fVar10 = asinf(fVar10);
    if (__real_3feffffffaa19c48 <=
        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      dVar1 = FGenericPlatformMath::Atan2
                        ((double)CONCAT44(uVar26 ^ __xmm_80000000000000008000000000000000._4_4_,
                                          uVar25 ^ (uint)__xmm_80000000000000008000000000000000),
                         dVar8);
      uVar18 = SUB84(dVar1,0);
      uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar9 = (double)CONCAT44(uVar28 ^ __xmm_80000000000000008000000000000000._4_4_,
                               uVar27 ^ (uint)__xmm_80000000000000008000000000000000);
      dVar1 = dVar2;
    }
    uVar4 = FGenericPlatformMath::Atan2(dVar9,dVar1);
    uVar5 = CONCAT44(uVar19,uVar18);
    uVar6 = (double)fVar10;
  }
  else {
    if (param_2 == YZX) {
      if (__real_3f800000 <= fVar16) {
        fVar16 = __real_3f800000;
      }
      if (fVar16 <= __real_bf800000) {
        fVar16 = __real_bf800000;
      }
      fVar16 = (float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
      fVar10 = __real_bf800000;
      if ((__real_bf800000 <= fVar16) && (fVar10 = fVar16, __real_3f800000 <= fVar16)) {
        fVar10 = __real_3f800000;
      }
      fVar10 = asinf(fVar10);
      uVar4 = (undefined8)fVar10;
      if ((double)CONCAT44(uVar28 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar27 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
          __real_3feffffffaa19c48) {
        uVar6 = FGenericPlatformMath::Atan2(dVar7,dVar2);
        uVar5 = FGenericPlatformMath::Atan2(dVar3,dVar1);
        goto LAB_1468b1250;
      }
      dVar1 = FGenericPlatformMath::Atan2
                        ((double)CONCAT44(uVar21 ^ __xmm_80000000000000008000000000000000._4_4_,
                                          uVar20 ^ (uint)__xmm_80000000000000008000000000000000),
                         dVar8);
      uVar18 = SUB84(dVar1,0);
      uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
      uVar5 = 0.0;
    }
    else {
      if (param_2 == ZXY) {
        if (__real_3f800000 <= fVar24) {
          fVar24 = __real_3f800000;
        }
        if (fVar24 <= __real_bf800000) {
          fVar24 = __real_bf800000;
        }
        fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000);
        fVar10 = __real_bf800000;
        if ((__real_bf800000 <= fVar24) && (fVar10 = fVar24, __real_3f800000 <= fVar24)) {
          fVar10 = __real_3f800000;
        }
        fVar10 = asinf(fVar10);
        uVar6 = (double)fVar10;
        if (__real_3feffffffaa19c48 <=
            (double)CONCAT44(uVar21 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             uVar20 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          uVar5 = FGenericPlatformMath::Atan2
                            ((double)CONCAT44(uVar26 ^ __xmm_80000000000000008000000000000000._4_4_,
                                              uVar25 ^ (uint)__xmm_80000000000000008000000000000000)
                             ,dVar1);
          uVar4 = 0.0;
        }
        else {
          uVar5 = FGenericPlatformMath::Atan2(dVar3,dVar8);
          uVar4 = FGenericPlatformMath::Atan2(dVar9,dVar2);
        }
        goto LAB_1468b1250;
      }
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if (param_2 != ZYX) goto LAB_1468b1250;
      if (__real_3f800000 <= fVar10) {
        fVar10 = __real_3f800000;
      }
      if (fVar10 <= __real_bf800000) {
        fVar10 = __real_bf800000;
      }
      fVar24 = __real_bf800000;
      if ((__real_bf800000 <= fVar10) && (fVar24 = fVar10, __real_3f800000 <= fVar10)) {
        fVar24 = __real_3f800000;
      }
      fVar10 = asinf(fVar24);
      uVar5 = (undefined8)fVar10;
      if ((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
          __real_3feffffffaa19c48) {
        uVar6 = FGenericPlatformMath::Atan2
                          ((double)CONCAT44(uVar21 ^ __xmm_80000000000000008000000000000000._4_4_,
                                            uVar20 ^ (uint)__xmm_80000000000000008000000000000000),
                           dVar8);
        uVar4 = FGenericPlatformMath::Atan2
                          ((double)CONCAT44(uVar28 ^ __xmm_80000000000000008000000000000000._4_4_,
                                            uVar27 ^ (uint)__xmm_80000000000000008000000000000000),
                           dVar1);
        goto LAB_1468b1250;
      }
      dVar1 = FGenericPlatformMath::Atan2(dVar7,dVar2);
      uVar18 = SUB84(dVar1,0);
      uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
      uVar4 = 0.0;
    }
    uVar6 = CONCAT44(uVar19,uVar18);
  }
LAB_1468b1250:
  dVar1 = (double)uVar5 * __real_404ca5dc0d03cf25;
  dVar2 = (double)uVar4 * __real_404ca5dc0d03cf25;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar6 * __real_404ca5dc0d03cf25;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetTransformForBoneRelativeToIndex @ 1468b9ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
GetTransformForBoneRelativeToIndex
          (TTransform<double> *__return_storage_ptr__,UAnimSequence *param_1,
          USkeletalMeshComponent *param_2,FName *param_3,FCompactPoseBoneIndex *param_4,
          double param_5)

{
  UObject *pUVar1;
  ushort *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FCompactPoseBoneIndex FVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  TTransform<double> *pTVar10;
  FCompactPose *pFVar11;
  undefined4 extraout_var;
  longlong lVar12;
  ushort *puVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStackY_3a8 [32];
  FCompactPoseBoneIndex local_378;
  undefined1 local_374 [4];
  ForAnyElementType local_370;
  int local_368 [2];
  FMemMark local_360;
  undefined8 local_338;
  undefined4 local_330;
  TArray<int,TSizedDefaultAllocator<32>_> *local_328;
  undefined8 local_320;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_318;
  undefined8 local_310;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_308
  ;
  undefined8 local_300;
  void *local_2f8;
  undefined8 local_2f0;
  FCompactPoseBoneIndex local_2e8 [2];
  FCurveFilterSettings local_2e0;
  FBaseCompactPose<TMemStackAllocator<0>_> local_2d0;
  FAnimationPoseData local_2b8;
  FBlendedCurve local_2a0;
  double local_278;
  undefined1 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined1 local_260;
  void *local_258;
  undefined8 local_250;
  void *local_248;
  undefined8 local_240;
  undefined1 local_237;
  code *local_228;
  undefined1 *local_220;
  TArrayView<unsigned_short_const_,int> local_218;
  TTransform<double> local_208;
  FBoneContainer local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  puVar8 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_220 = local_374;
  local_228 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar9 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_228,puVar8);
  uVar14 = 0;
  local_360.Mem = (FMemStackBase *)(pFVar9 + 2);
  local_360.Top = (local_360.Mem)->Top;
  local_360.SavedChunk = *(FTaggedMemory **)(pFVar9 + 4);
  local_360.bPopped = false;
  local_360.NextTopmostMark = *(FMemMark **)(pFVar9 + 5);
  pFVar9[5] = (FTlsAutoCleanup)&local_360;
  *(int *)(pFVar9 + 6) = *(int *)(pFVar9 + 6) + 1;
  local_2d0._padding_ = 0;
  local_2d0._padding_ = 0;
  local_2d0.BoneContainer = (FBoneContainer *)0x0;
  local_370.Data = (FScriptContainerElement *)0x0;
  local_368[0] = 0;
  local_368[1] = 0;
  local_2e0.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  local_2e0.FilterMode = DisallowFiltered;
  local_2e0.LODIndex = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,*(int *)(param_1->_padding_ + 0x70),&local_370,local_368,local_368 + 1);
  iVar15 = local_368[0];
  if (0 < local_368[0]) {
    do {
      uVar6 = 0;
      if ((int)uVar14 < local_368[0]) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TTransform<double> *)(*pcVar4)();
        return pTVar10;
      }
      *(short *)(local_370.Data + (longlong)(int)uVar14 * 2) = (short)uVar14;
      uVar14 = uVar14 + 1;
      iVar15 = local_368[0];
    } while ((int)uVar14 < local_368[0]);
  }
  pUVar1 = (UObject *)param_1->_padding_;
  local_218.DataPtr = (ushort *)local_370.Data;
  if ((iVar15 < 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TTransform<double> *)(*pcVar4)();
    return pTVar10;
  }
  local_218.ArrayNum = iVar15;
  FBoneContainer::FBoneContainer(&local_1a8,&local_218,&local_2e0,pUVar1);
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(&local_2d0,&local_1a8);
  local_2a0._0_8_ = 0;
  local_2a0._8_8_ = 0;
  local_2a0._16_1_ = 0;
  local_2a0._24_8_ = 0;
  FBlendedCurve::InitFrom(&local_2a0,&local_1a8);
  local_328 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_320 = 0;
  local_318 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_310 = 0;
  local_308 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
               *)0x0;
  local_300 = 0;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  FAnimationPoseData::FAnimationPoseData
            (&local_2b8,(FCompactPose *)&local_2d0,&local_2a0,(FStackAttributeContainer *)&local_328
            );
  local_278 = param_5;
  local_330 = 0;
  local_270 = 0;
  local_264 = 0;
  local_338 = 0;
  local_26c = 0;
  local_260 = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  local_237 = 0;
  (**(code **)(param_1->_padding_ + 0x330))(param_1,&local_2b8,&local_278);
  pFVar11 = FAnimationPoseData::GetPose(&local_2b8);
  uVar14 = FBoneContainer::GetPoseBoneIndexForBoneName
                     (*(FBoneContainer **)&pFVar11->field_0x10,param_3);
  if (uVar14 != 0xffffffff) {
    pFVar11 = FAnimationPoseData::GetPose(&local_2b8);
    puVar2 = (ushort *)**(undefined8 **)&pFVar11->field_0x10;
    for (puVar13 = puVar2; puVar13 != puVar2 + *(int *)(*(undefined8 **)&pFVar11->field_0x10 + 1);
        puVar13 = puVar13 + 1) {
      if (*puVar13 == uVar14) {
        local_378 = SUB84((longlong)puVar13 - (longlong)puVar2 >> 1,0);
        goto LAB_1468b9dd9;
      }
    }
    local_378 = (FCompactPoseBoneIndex)0xffffffff;
LAB_1468b9dd9:
    if (local_378 != (FCompactPoseBoneIndex)0xffffffff) {
      local_208.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_208.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_208.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_208.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_208.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_208.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      UE::Math::TTransform<double>::Multiply
                (__return_storage_ptr__,__return_storage_ptr__,&local_208);
      do {
        pFVar11 = FAnimationPoseData::GetPose(&local_2b8);
        uVar14 = 0;
        if ((int)local_378 < *(int *)&pFVar11->field_0x8) {
          uVar14 = ~(uint)local_378 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TTransform<double> *)(*pcVar4)();
          return pTVar10;
        }
        lVar3 = *(longlong *)pFVar11;
        lVar12 = (longlong)(int)local_378 * 0x60;
        local_208.Rotation.XY.m128d_f64 = *(double (*) [2])(lVar12 + lVar3);
        local_208.Rotation.ZW.m128d_f64 = *(double (*) [2])(lVar12 + 0x10 + lVar3);
        local_208.Translation.XY.m128d_f64 = *(double (*) [2])(lVar12 + 0x20 + lVar3);
        local_208.Translation.ZW.m128d_f64 = *(double (*) [2])(lVar12 + 0x30 + lVar3);
        local_208.Scale3D.XY.m128d_f64 = *(double (*) [2])(lVar12 + 0x40 + lVar3);
        local_208.Scale3D.ZW.m128d_f64 = *(double (*) [2])(lVar12 + 0x50 + lVar3);
        UE::Math::TTransform<double>::Multiply
                  (__return_storage_ptr__,__return_storage_ptr__,&local_208);
        if (local_378 == *param_4) break;
        pFVar11 = FAnimationPoseData::GetPose(&local_2b8);
        FVar7 = FBoneContainer::GetParentBoneIndex
                          (*(FBoneContainer **)&pFVar11->field_0x10,local_2e8);
        local_378 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar7);
      } while (local_378 != (FCompactPoseBoneIndex)0xffffffff);
    }
  }
  if (local_248 != (void *)0x0) {
    FMemory::Free(local_248);
  }
  if (local_258 != (void *)0x0) {
    FMemory::Free(local_258);
  }
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_308,(int)local_300);
  if (local_308 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_308);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_318,(int)local_310);
  if (local_318 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_318);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_328,(int)local_320);
  if (local_328 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_328);
  }
  FBoneContainer::~FBoneContainer(&local_1a8);
  if (local_370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data);
  }
  if (local_360.bPopped == false) {
    if (((local_360.Mem)->TopMark != &local_360) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TTransform<double> *)(*pcVar4)();
      return pTVar10;
    }
    local_360.bPopped = true;
    (local_360.Mem)->NumMarks = (local_360.Mem)->NumMarks + -1;
    if (local_360.SavedChunk != (local_360.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_360.Mem,local_360.SavedChunk);
    }
    (local_360.Mem)->Top = local_360.Top;
    (local_360.Mem)->TopMark = local_360.NextTopmostMark;
  }
  return __return_storage_ptr__;
}

// QuatFromEuler @ 1468c74f0

TQuat<double> * __cdecl
QuatFromEuler(TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,
             ESkelAnimRotationOrder param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar4;
  float fVar5;
  
  __libm_sse2_sincosf4_();
  __libm_sse2_sincosf_();
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  dVar2 = UE::Math::TQuat<double>::Identity.Z;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  if (param_2 == XYZ) {
    fVar4 = extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Db_00 +
            extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Da_00;
    __return_storage_ptr__->X =
         (double)(extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Db_00 -
                 extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Da_00);
LAB_1468c75f0:
    __return_storage_ptr__->Y = (double)fVar4;
    fVar4 = extraout_XMM0_Dd * extraout_XMM0_Db * extraout_XMM0_Da_00 -
            extraout_XMM0_Da * extraout_XMM0_Dc * extraout_XMM0_Db_00;
LAB_1468c7613:
    fVar5 = extraout_XMM0_Dd * extraout_XMM0_Db * extraout_XMM0_Db_00 +
            extraout_XMM0_Da * extraout_XMM0_Dc * extraout_XMM0_Da_00;
LAB_1468c7622:
    __return_storage_ptr__->Z = (double)fVar4;
    __return_storage_ptr__->W = (double)fVar5;
  }
  else {
    if (param_2 == XZY) {
      __return_storage_ptr__->X =
           (double)(extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Db_00 +
                   extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Da_00);
      __return_storage_ptr__->Y =
           (double)(extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Db_00 +
                   extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Da_00);
      fVar4 = extraout_XMM0_Dd * extraout_XMM0_Db * extraout_XMM0_Da_00 -
              extraout_XMM0_Da * extraout_XMM0_Dc * extraout_XMM0_Db_00;
    }
    else {
      if (param_2 != YXZ) {
        if (param_2 == YZX) {
          __return_storage_ptr__->X =
               (double)(extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Db_00 -
                       extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Da_00);
          __return_storage_ptr__->Y =
               (double)(extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Db_00 -
                       extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Da_00);
          fVar4 = extraout_XMM0_Da * extraout_XMM0_Dc * extraout_XMM0_Db_00 +
                  extraout_XMM0_Dd * extraout_XMM0_Db * extraout_XMM0_Da_00;
          goto LAB_1468c7613;
        }
        if (param_2 == ZXY) {
          fVar4 = extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Db_00 -
                  extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Da_00;
          __return_storage_ptr__->X =
               (double)(extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Db_00 +
                       extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Da_00);
          goto LAB_1468c75f0;
        }
        if (param_2 != ZYX) {
          __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
          __return_storage_ptr__->Y = dVar1;
          __return_storage_ptr__->Z = dVar2;
          __return_storage_ptr__->W = dVar3;
          return __return_storage_ptr__;
        }
        __return_storage_ptr__->X =
             (double)(extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Db_00 +
                     extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Da_00);
        __return_storage_ptr__->Y =
             (double)(extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Db_00 -
                     extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Da_00);
        fVar4 = extraout_XMM0_Da * extraout_XMM0_Dc * extraout_XMM0_Db_00 +
                extraout_XMM0_Dd * extraout_XMM0_Db * extraout_XMM0_Da_00;
        fVar5 = extraout_XMM0_Dd * extraout_XMM0_Db * extraout_XMM0_Db_00 -
                extraout_XMM0_Da * extraout_XMM0_Dc * extraout_XMM0_Da_00;
        goto LAB_1468c7622;
      }
      __return_storage_ptr__->X =
           (double)(extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Db_00 -
                   extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Da_00);
      __return_storage_ptr__->Y =
           (double)(extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Db_00 +
                   extraout_XMM0_Dd * extraout_XMM0_Da * extraout_XMM0_Da_00);
      fVar4 = extraout_XMM0_Da * extraout_XMM0_Dc * extraout_XMM0_Db_00 +
              extraout_XMM0_Dd * extraout_XMM0_Db * extraout_XMM0_Da_00;
    }
    __return_storage_ptr__->Z = (double)fVar4;
    __return_storage_ptr__->W =
         (double)(extraout_XMM0_Dd * extraout_XMM0_Db * extraout_XMM0_Db_00 -
                 extraout_XMM0_Da * extraout_XMM0_Dc * extraout_XMM0_Da_00);
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UMovieScene3DAttachTrack_NoRegister @ 1468d2980

UClass * __cdecl Z_Construct_UClass_UMovieScene3DAttachTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DAttachTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DAttachTrack",
               &Z_Registration_Info_UClass_UMovieScene3DAttachTrack.InnerSingleton,
               UMovieScene3DAttachTrack::StaticRegisterNativesUMovieScene3DAttachTrack,0x128,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScene3DAttachTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DAttachTrack>,local_res8,
               UMovieScene3DConstraintTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DAttachTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieScene3DConstraintTrack_NoRegister @ 1468d2a40

UClass * __cdecl Z_Construct_UClass_UMovieScene3DConstraintTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DConstraintTrack",
               &Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.InnerSingleton,
               UMovieScene3DConstraintTrack::StaticRegisterNativesUMovieScene3DConstraintTrack,0x128
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScene3DConstraintTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DConstraintTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister @ 1468d2b00

UClass * __cdecl Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DPathTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DPathTrack",
               &Z_Registration_Info_UClass_UMovieScene3DPathTrack.InnerSingleton,
               UMovieScene3DPathTrack::StaticRegisterNativesUMovieScene3DPathTrack,0x130,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DPathTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DPathTrack>,local_res8,
               UMovieScene3DConstraintTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DPathTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister @ 1468d2bc0

UClass * __cdecl Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DTransformTrack",
               &Z_Registration_Info_UClass_UMovieScene3DTransformTrack.InnerSingleton,
               UMovieScene3DTransformTrack::StaticRegisterNativesUMovieScene3DTransformTrack,0x158,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScene3DTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DTransformTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneActorReferenceTrack_NoRegister @ 1468d2c80

UClass * __cdecl Z_Construct_UClass_UMovieSceneActorReferenceTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneActorReferenceTrack",
               &Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.InnerSingleton,
               UMovieSceneActorReferenceTrack::StaticRegisterNativesUMovieSceneActorReferenceTrack,
               0x150,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneActorReferenceTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneActorReferenceTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister @ 1468d2d40

UClass * __cdecl Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneAudioTrack",
               &Z_Registration_Info_UClass_UMovieSceneAudioTrack.InnerSingleton,
               UMovieSceneAudioTrack::StaticRegisterNativesUMovieSceneAudioTrack,0x128,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneAudioTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneBoolTrack_NoRegister @ 1468d2e00

UClass * __cdecl Z_Construct_UClass_UMovieSceneBoolTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoolTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneBoolTrack",
               &Z_Registration_Info_UClass_UMovieSceneBoolTrack.InnerSingleton,
               UMovieSceneBoolTrack::StaticRegisterNativesUMovieSceneBoolTrack,0x158,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBoolTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneBoolTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneByteTrack_NoRegister @ 1468d2ec0

UClass * __cdecl Z_Construct_UClass_UMovieSceneByteTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneByteTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneByteTrack",
               &Z_Registration_Info_UClass_UMovieSceneByteTrack.InnerSingleton,
               UMovieSceneByteTrack::StaticRegisterNativesUMovieSceneByteTrack,0x150,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneByteTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneByteTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneByteTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCVarTrackInstance_NoRegister @ 1468d2f80

UClass * __cdecl Z_Construct_UClass_UMovieSceneCVarTrackInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCVarTrackInstance",
               &Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.InnerSingleton,
               UMovieSceneCVarTrackInstance::StaticRegisterNativesUMovieSceneCVarTrackInstance,0xa0,
               8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCVarTrackInstance>,
               InternalVTableHelperCtorCaller<UMovieSceneCVarTrackInstance>,local_res8,
               UMovieSceneTrackInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCVarTrack_NoRegister @ 1468d3040

UClass * __cdecl Z_Construct_UClass_UMovieSceneCVarTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCVarTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCVarTrack",
               &Z_Registration_Info_UClass_UMovieSceneCVarTrack.InnerSingleton,
               UMovieSceneCVarTrack::StaticRegisterNativesUMovieSceneCVarTrack,0x128,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCVarTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCVarTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_NoRegister @ 1468d3100

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraCutTrackInstance",
               &Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.InnerSingleton,
               UMovieSceneCameraCutTrackInstance::
               StaticRegisterNativesUMovieSceneCameraCutTrackInstance,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraCutTrackInstance>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrackInstance>,local_res8,
               UMovieSceneTrackInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister @ 1468d31c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraCutTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.InnerSingleton,
               UMovieSceneCameraCutTrack::StaticRegisterNativesUMovieSceneCameraCutTrack,0x138,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraCutTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeTrack_NoRegister @ 1468d3280

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceShakeTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.InnerSingleton,
               UMovieSceneCameraShakeSourceShakeTrack::
               StaticRegisterNativesUMovieSceneCameraShakeSourceShakeTrack,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraShakeSourceShakeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceShakeTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_NoRegister @ 1468d3340

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceTriggerTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.InnerSingleton,
               UMovieSceneCameraShakeSourceTriggerTrack::
               StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerTrack,0x128,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeSourceTriggerTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceTriggerTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCameraShakeTrack_NoRegister @ 1468d3400

UClass * __cdecl Z_Construct_UClass_UMovieSceneCameraShakeTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.InnerSingleton,
               UMovieSceneCameraShakeTrack::StaticRegisterNativesUMovieSceneCameraShakeTrack,0x128,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister @ 1468d34c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCinematicShotTrack",
               &Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.InnerSingleton,
               UMovieSceneCinematicShotTrack::StaticRegisterNativesUMovieSceneCinematicShotTrack,
               0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCinematicShotTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCinematicShotTrack>,local_res8,
               UMovieSceneSubTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneColorTrack_NoRegister @ 1468d3580

UClass * __cdecl Z_Construct_UClass_UMovieSceneColorTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneColorTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneColorTrack",
               &Z_Registration_Info_UClass_UMovieSceneColorTrack.InnerSingleton,
               UMovieSceneColorTrack::StaticRegisterNativesUMovieSceneColorTrack,0x150,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneColorTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneColorTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneColorTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister @ 1468d3640

UClass * __cdecl Z_Construct_UClass_UMovieSceneCommonAnimationTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCommonAnimationTrack",
               &Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.InnerSingleton,
               UMovieSceneCommonAnimationTrack::StaticRegisterNativesUMovieSceneCommonAnimationTrack
               ,0x1c0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCommonAnimationTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCommonAnimationTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCommonAnimationTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister @ 1468d3700

UClass * __cdecl Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentMaterialTrack",
               &Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.InnerSingleton,
               UMovieSceneComponentMaterialTrack::
               StaticRegisterNativesUMovieSceneComponentMaterialTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentMaterialTrack>,local_res8,
               UMovieSceneMaterialTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCustomPrimitiveDataTrack_NoRegister @ 1468d37c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneCustomPrimitiveDataTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCustomPrimitiveDataTrack",
               &Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.InnerSingleton,
               UMovieSceneCustomPrimitiveDataTrack::
               StaticRegisterNativesUMovieSceneCustomPrimitiveDataTrack,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCustomPrimitiveDataTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomPrimitiveDataTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneDataLayerTrack_NoRegister @ 1468d3880

UClass * __cdecl Z_Construct_UClass_UMovieSceneDataLayerTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDataLayerTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDataLayerTrack",
               &Z_Registration_Info_UClass_UMovieSceneDataLayerTrack.InnerSingleton,
               UMovieSceneDataLayerTrack::StaticRegisterNativesUMovieSceneDataLayerTrack,0x128,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDataLayerTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneDataLayerTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDataLayerTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneDecomposerTestObject_NoRegister @ 1468d3940

UClass * __cdecl Z_Construct_UClass_UMovieSceneDecomposerTestObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDecomposerTestObject",
               &Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.InnerSingleton,
               UMovieSceneDecomposerTestObject::StaticRegisterNativesUMovieSceneDecomposerTestObject
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDecomposerTestObject>,
               InternalVTableHelperCtorCaller<UMovieSceneDecomposerTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecomposerTestObject.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneDoubleTrack_NoRegister @ 1468d39f0

UClass * __cdecl Z_Construct_UClass_UMovieSceneDoubleTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleTrack",
               &Z_Registration_Info_UClass_UMovieSceneDoubleTrack.InnerSingleton,
               UMovieSceneDoubleTrack::StaticRegisterNativesUMovieSceneDoubleTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDoubleTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_NoRegister @ 1468d3ab0

UClass * __cdecl Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleVectorPropertySystem",
               &Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem.InnerSingleton,
               UMovieSceneDoubleVectorPropertySystem::
               StaticRegisterNativesUMovieSceneDoubleVectorPropertySystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDoubleVectorPropertySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorPropertySystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister @ 1468d3b70

UClass * __cdecl Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleVectorTrack",
               &Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.InnerSingleton,
               UMovieSceneDoubleVectorTrack::StaticRegisterNativesUMovieSceneDoubleVectorTrack,0x150
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDoubleVectorTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEnumTrack_NoRegister @ 1468d3c30

UClass * __cdecl Z_Construct_UClass_UMovieSceneEnumTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEnumTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEnumTrack",
               &Z_Registration_Info_UClass_UMovieSceneEnumTrack.InnerSingleton,
               UMovieSceneEnumTrack::StaticRegisterNativesUMovieSceneEnumTrack,0x150,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEnumTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneEnumTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEnumTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEulerTransformTrack_NoRegister @ 1468d3cf0

UClass * __cdecl Z_Construct_UClass_UMovieSceneEulerTransformTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEulerTransformTrack",
               &Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.InnerSingleton,
               UMovieSceneEulerTransformTrack::StaticRegisterNativesUMovieSceneEulerTransformTrack,
               0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEulerTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneEulerTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEventTrack_NoRegister @ 1468d3db0

UClass * __cdecl Z_Construct_UClass_UMovieSceneEventTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventTrack",
               &Z_Registration_Info_UClass_UMovieSceneEventTrack.InnerSingleton,
               UMovieSceneEventTrack::StaticRegisterNativesUMovieSceneEventTrack,0x140,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEventTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneEventTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary_NoRegister @ 1468d3e70

UClass * __cdecl Z_Construct_UClass_UMovieSceneFadeTrackTestLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFadeTrackTestLibrary",
               &Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.InnerSingleton,
               UMovieSceneFadeTrackTestLibrary::StaticRegisterNativesUMovieSceneFadeTrackTestLibrary
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneFadeTrackTestLibrary>,
               InternalVTableHelperCtorCaller<UMovieSceneFadeTrackTestLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeTrackTestLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneFadeTrack_NoRegister @ 1468d3f30

UClass * __cdecl Z_Construct_UClass_UMovieSceneFadeTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFadeTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFadeTrack",
               &Z_Registration_Info_UClass_UMovieSceneFadeTrack.InnerSingleton,
               UMovieSceneFadeTrack::StaticRegisterNativesUMovieSceneFadeTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFadeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneFadeTrack>,local_res8,
               UMovieSceneFloatTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFadeTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneFloatTrack_NoRegister @ 1468d3ff0

UClass * __cdecl Z_Construct_UClass_UMovieSceneFloatTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFloatTrack",
               &Z_Registration_Info_UClass_UMovieSceneFloatTrack.InnerSingleton,
               UMovieSceneFloatTrack::StaticRegisterNativesUMovieSceneFloatTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFloatTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_NoRegister @ 1468d40b0

UClass * __cdecl Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFloatVectorPropertySystem",
               &Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem.InnerSingleton,
               UMovieSceneFloatVectorPropertySystem::
               StaticRegisterNativesUMovieSceneFloatVectorPropertySystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFloatVectorPropertySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatVectorPropertySystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister @ 1468d4170

UClass * __cdecl Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFloatVectorTrack",
               &Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.InnerSingleton,
               UMovieSceneFloatVectorTrack::StaticRegisterNativesUMovieSceneFloatVectorTrack,0x150,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneFloatVectorTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatVectorTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_NoRegister @ 1468d4230

UClass * __cdecl Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneHierarchicalEasingFinalizationSystem",
               &Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.
                InnerSingleton,
               UMovieSceneHierarchicalEasingFinalizationSystem::
               StaticRegisterNativesUMovieSceneHierarchicalEasingFinalizationSystem,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneHierarchicalEasingFinalizationSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingFinalizationSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister @ 1468d42f0

UClass * __cdecl Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneHierarchicalEasingInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.
                InnerSingleton,
               UMovieSceneHierarchicalEasingInstantiatorSystem::
               StaticRegisterNativesUMovieSceneHierarchicalEasingInstantiatorSystem,0xe0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneHierarchicalEasingInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingInstantiatorSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneIntegerTrack_NoRegister @ 1468d43b0

UClass * __cdecl Z_Construct_UClass_UMovieSceneIntegerTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneIntegerTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneIntegerTrack",
               &Z_Registration_Info_UClass_UMovieSceneIntegerTrack.InnerSingleton,
               UMovieSceneIntegerTrack::StaticRegisterNativesUMovieSceneIntegerTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneIntegerTrack>
               ,InternalVTableHelperCtorCaller<UMovieSceneIntegerTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneIntegerTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_NoRegister @ 1468d4470

UClass * __cdecl Z_Construct_UClass_UMovieSceneLevelVisibilityTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLevelVisibilityTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneLevelVisibilityTrack",
               &Z_Registration_Info_UClass_UMovieSceneLevelVisibilityTrack.InnerSingleton,
               UMovieSceneLevelVisibilityTrack::StaticRegisterNativesUMovieSceneLevelVisibilityTrack
               ,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneLevelVisibilityTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneLevelVisibilityTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLevelVisibilityTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_NoRegister @ 1468d4530

UClass * __cdecl Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialParameterCollectionTrack",
               &Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.
                InnerSingleton,
               UMovieSceneMaterialParameterCollectionTrack::
               StaticRegisterNativesUMovieSceneMaterialParameterCollectionTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialParameterCollectionTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterCollectionTrack>,
               local_res8,UMovieSceneMaterialTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMaterialTrack_NoRegister @ 1468d45f0

UClass * __cdecl Z_Construct_UClass_UMovieSceneMaterialTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialTrack",
               &Z_Registration_Info_UClass_UMovieSceneMaterialTrack.InnerSingleton,
               UMovieSceneMaterialTrack::StaticRegisterNativesUMovieSceneMaterialTrack,0x130,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister @ 1468d46b0

UClass * __cdecl Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneObjectPropertyTrack",
               &Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.InnerSingleton,
               UMovieSceneObjectPropertyTrack::StaticRegisterNativesUMovieSceneObjectPropertyTrack,
               0x150,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneObjectPropertyTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneObjectPropertyTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_NoRegister @ 1468d4770

UClass * __cdecl Z_Construct_UClass_UMovieScenePartialEvaluationTestObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePartialEvaluationTestObject",
               &Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.InnerSingleton,
               UMovieScenePartialEvaluationTestObject::
               StaticRegisterNativesUMovieScenePartialEvaluationTestObject,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePartialEvaluationTestObject>,
               InternalVTableHelperCtorCaller<UMovieScenePartialEvaluationTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePartialEvaluationTestObject.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneParticleParameterTrack_NoRegister @ 1468d4820

UClass * __cdecl Z_Construct_UClass_UMovieSceneParticleParameterTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParticleParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.InnerSingleton,
               UMovieSceneParticleParameterTrack::
               StaticRegisterNativesUMovieSceneParticleParameterTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneParticleParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneParticleParameterTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneParticleTrack_NoRegister @ 1468d48e0

UClass * __cdecl Z_Construct_UClass_UMovieSceneParticleTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParticleTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParticleTrack",
               &Z_Registration_Info_UClass_UMovieSceneParticleTrack.InnerSingleton,
               UMovieSceneParticleTrack::StaticRegisterNativesUMovieSceneParticleTrack,0x130,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneParticleTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneParticleTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParticleTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister @ 1468d49a0

UClass * __cdecl Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePrimitiveMaterialTrack",
               &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.InnerSingleton,
               UMovieScenePrimitiveMaterialTrack::
               StaticRegisterNativesUMovieScenePrimitiveMaterialTrack,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePrimitiveMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister @ 1468d4a60

UClass * __cdecl Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePropertyTrack",
               &Z_Registration_Info_UClass_UMovieScenePropertyTrack.InnerSingleton,
               UMovieScenePropertyTrack::StaticRegisterNativesUMovieScenePropertyTrack,0x148,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePropertyTrack>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneRotatorTrack_NoRegister @ 1468d4b20

UClass * __cdecl Z_Construct_UClass_UMovieSceneRotatorTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneRotatorTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneRotatorTrack",
               &Z_Registration_Info_UClass_UMovieSceneRotatorTrack.InnerSingleton,
               UMovieSceneRotatorTrack::StaticRegisterNativesUMovieSceneRotatorTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneRotatorTrack>
               ,InternalVTableHelperCtorCaller<UMovieSceneRotatorTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneRotatorTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSectionsToKey_NoRegister @ 1468d4be0

UClass * __cdecl Z_Construct_UClass_UMovieSceneSectionsToKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionsToKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSectionsToKey",
               &Z_Registration_Info_UClass_UMovieSceneSectionsToKey.InnerSingleton,
               UMovieSceneSectionsToKey::StaticRegisterNativesUMovieSceneSectionsToKey,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSectionsToKey>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionsToKey>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionsToKey.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister @ 1468d4ca0

UClass * __cdecl Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationTrack",
               &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.InnerSingleton,
               UMovieSceneSkeletalAnimationTrack::
               StaticRegisterNativesUMovieSceneSkeletalAnimationTrack,0x1c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSkeletalAnimationTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneSkeletalAnimationTrack>,local_res8,
               UMovieSceneCommonAnimationTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSlomoTrack_NoRegister @ 1468d4d60

UClass * __cdecl Z_Construct_UClass_UMovieSceneSlomoTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSlomoTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSlomoTrack",
               &Z_Registration_Info_UClass_UMovieSceneSlomoTrack.InnerSingleton,
               UMovieSceneSlomoTrack::StaticRegisterNativesUMovieSceneSlomoTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSlomoTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneSlomoTrack>,local_res8,
               UMovieSceneFloatTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSlomoTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneStringTrack_NoRegister @ 1468d4e20

UClass * __cdecl Z_Construct_UClass_UMovieSceneStringTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneStringTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneStringTrack",
               &Z_Registration_Info_UClass_UMovieSceneStringTrack.InnerSingleton,
               UMovieSceneStringTrack::StaticRegisterNativesUMovieSceneStringTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneStringTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneStringTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneStringTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTestSequence_NoRegister @ 1468d4ee0

UClass * __cdecl Z_Construct_UClass_UMovieSceneTestSequence_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTestSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTestSequence",
               &Z_Registration_Info_UClass_UMovieSceneTestSequence.InnerSingleton,
               UMovieSceneTestSequence::StaticRegisterNativesUMovieSceneTestSequence,0x98,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTestSequence>,
               InternalVTableHelperCtorCaller<UMovieSceneTestSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTestSequence.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTextTrack_NoRegister @ 1468d4fa0

UClass * __cdecl Z_Construct_UClass_UMovieSceneTextTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTextTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTextTrack",
               &Z_Registration_Info_UClass_UMovieSceneTextTrack.InnerSingleton,
               UMovieSceneTextTrack::StaticRegisterNativesUMovieSceneTextTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTextTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTextTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTextTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTransformTrack_NoRegister @ 1468d5060

UClass * __cdecl Z_Construct_UClass_UMovieSceneTransformTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTransformTrack",
               &Z_Registration_Info_UClass_UMovieSceneTransformTrack.InnerSingleton,
               UMovieSceneTransformTrack::StaticRegisterNativesUMovieSceneTransformTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneVisibilitySystem_NoRegister @ 1468d5120

UClass * __cdecl Z_Construct_UClass_UMovieSceneVisibilitySystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneVisibilitySystem",
               &Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.InnerSingleton,
               UMovieSceneVisibilitySystem::StaticRegisterNativesUMovieSceneVisibilitySystem,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneVisibilitySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneVisibilitySystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilitySystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneVisibilityTrack_NoRegister @ 1468d51e0

UClass * __cdecl Z_Construct_UClass_UMovieSceneVisibilityTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneVisibilityTrack",
               &Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.InnerSingleton,
               UMovieSceneVisibilityTrack::StaticRegisterNativesUMovieSceneVisibilityTrack,0x148,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneVisibilityTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneVisibilityTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.InnerSingleton;
}

// Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_NoRegister @ 1468d52a0

UClass * __cdecl Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"ObjectPathChannelEvaluatorSystem",
               &Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem.InnerSingleton,
               UObjectPathChannelEvaluatorSystem::
               StaticRegisterNativesUObjectPathChannelEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectPathChannelEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UObjectPathChannelEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem.InnerSingleton;
}

// Z_Construct_UClass_UStringChannelEvaluatorSystem_NoRegister @ 1468d5360

UClass * __cdecl Z_Construct_UClass_UStringChannelEvaluatorSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"StringChannelEvaluatorSystem",
               &Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.InnerSingleton,
               UStringChannelEvaluatorSystem::StaticRegisterNativesUStringChannelEvaluatorSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStringChannelEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UStringChannelEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.InnerSingleton;
}

// Z_Construct_UClass_UTextChannelEvaluatorSystem_NoRegister @ 1468d5420

UClass * __cdecl Z_Construct_UClass_UTextChannelEvaluatorSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextChannelEvaluatorSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"TextChannelEvaluatorSystem",
               &Z_Registration_Info_UClass_UTextChannelEvaluatorSystem.InnerSingleton,
               UTextChannelEvaluatorSystem::StaticRegisterNativesUTextChannelEvaluatorSystem,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextChannelEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UTextChannelEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextChannelEvaluatorSystem.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'CVarBooleanPropertyECS'' @ 1503dd070

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__CVarBooleanPropertyECS__(void)

{
  CVarBooleanPropertyECS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBooleanPropertyECS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompileBooleanPropertyECS'' @ 1503dd090

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__CVarCompileBooleanPropertyECS__(void)

{
  CVarCompileBooleanPropertyECS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCompileBooleanPropertyECS);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneCompiledDataManagerGCReferenceTestAutomationTestInstance'' @ 1503dd0b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneCompiledDataManagerGCReferenceTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneCompiledDataManagerGCReferenceTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerAbsoluteTestAutomationTestInstance'' @ 1503dd0d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerAbsoluteTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMovieSceneDecomposerAbsoluteTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerAbsoluteWithEasingTestAutomationTestInstance'' @ 1503dd0f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerAbsoluteWithEasingTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerAbsoluteWithEasingTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerAdditiveFromBaseTestAutomationTestInstance'' @ 1503dd110

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveFromBaseTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMovieSceneDecomposerAdditiveFromBaseTestAutomationTestInstance
            );
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerAdditiveFromBaseWithEasingTestAutomationTestInstance'' @ 1503dd130

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveFromBaseWithEasingTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerAdditiveFromBaseWithEasingTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerAdditiveTestAutomationTestInstance'' @ 1503dd150

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMovieSceneDecomposerAdditiveTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerAdditiveWithEasingTestAutomationTestInstance'' @ 1503dd170

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveWithEasingTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerAdditiveWithEasingTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerAdditiveWithMultipleEasingTestAutomationTestInstance'' @ 1503dd190

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerAdditiveWithMultipleEasingTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerAdditiveWithMultipleEasingTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerComplexTestAutomationTestInstance'' @ 1503dd1b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerComplexTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMovieSceneDecomposerComplexTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerMultipleAbsolutesTestAutomationTestInstance'' @ 1503dd1d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerMultipleAbsolutesTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerMultipleAbsolutesTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieSceneDecomposerOverrideWithEasingTestAutomationTestInstance'' @ 1503dd1f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieSceneDecomposerOverrideWithEasingTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FMovieSceneDecomposerOverrideWithEasingTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMovieScenePartialEvaluationTestAutomationTestInstance'' @ 1503dd210

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMovieScenePartialEvaluationTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMovieScenePartialEvaluationTestAutomationTestInstance);
  return;
}

