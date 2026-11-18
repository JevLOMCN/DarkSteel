// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 352

// `dynamic_initializer_for_'CVarDefaultClockSource'' @ 1410ab940

void __cdecl _dynamic_initializer_for__CVarDefaultClockSource__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDefaultClockSource,L"LevelSequence.DefaultClockSource",local_res8,
             L"Specifies the default clock source for newly created level sequences. 0: Tick, 1: Platform, 2: Audio, 3: RelativeTimecode, 4: Timecode, 5: Custom"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultClockSource__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultDisplayRate'' @ 1410ab990

void __cdecl _dynamic_initializer_for__CVarDefaultDisplayRate__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"30fps");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarDefaultDisplayRate,L"LevelSequence.DefaultDisplayRate",&local_18,
             L"Specifies the default display frame rate for newly created level sequences; also defines frame locked frame rate where sequences are set to be frame locked. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarDefaultDisplayRate__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultLockEngineToDisplayRate'' @ 1410aba00

void __cdecl _dynamic_initializer_for__CVarDefaultLockEngineToDisplayRate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDefaultLockEngineToDisplayRate,L"LevelSequence.DefaultLockEngineToDisplayRate",
             local_res8,
             L"0: Playback locked to playback frames\n1: Unlocked playback with sub frame interpolation"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultLockEngineToDisplayRate__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultTickResolution'' @ 1410aba50

void __cdecl _dynamic_initializer_for__CVarDefaultTickResolution__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"24000fps");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarDefaultTickResolution,L"LevelSequence.DefaultTickResolution",&local_18,
             L"Specifies the default tick resolution for newly created level sequences. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarDefaultTickResolution__);
  return;
}

// `dynamic_initializer_for_'CVarInvalidBindingTagWarnings'' @ 1410abac0

void __cdecl
LevelSequenceActorCVars::_dynamic_initializer_for__CVarInvalidBindingTagWarnings__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInvalidBindingTagWarnings,L"LevelSequence.InvalidBindingTagWarnings",
             &bInvalidBindingTagWarnings,
             L"Whether to emit a warning when invalid object binding tags are used to override bindings or not.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarInvalidBindingTagWarnings__);
  return;
}

// `dynamic_initializer_for_'CVarMarkSequencePlayerAsGarbageOnDestroy'' @ 1410abb10

void __cdecl
LevelSequenceActorCVars::_dynamic_initializer_for__CVarMarkSequencePlayerAsGarbageOnDestroy__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMarkSequencePlayerAsGarbageOnDestroy,
             L"LevelSequence.MarkSequencePlayerAsGarbageOnDestroy",
             &bMarkSequencePlayerAsGarbageOnDestroy,
             L"Whether to flag the sequence player object as garbage when the actor is being destroyed"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMarkSequencePlayerAsGarbageOnDestroy__);
  return;
}

// `dynamic_initializer_for_'LogLevelSequence'' @ 1410abb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLevelSequence__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLevelSequence,L"LogLevelSequence",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLevelSequence__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLevelSequence'' @ 1410abba0

void __cdecl _dynamic_initializer_for__ModuleRegistrantLevelSequence__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LevelSequence";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LevelSequence",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FLevelSequenceModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_ULevelSequenceBurnIn_GetSettingsClass'' @ 1410abbf0

void __cdecl _dynamic_initializer_for__NAME_ULevelSequenceBurnIn_GetSettingsClass__(void)

{
  FName::FName(&NAME_ULevelSequenceBurnIn_GetSettingsClass,L"GetSettingsClass");
  return;
}

// `dynamic_initializer_for_'NAME_ULevelSequenceBurnIn_SetSettings'' @ 1410abc10

void __cdecl _dynamic_initializer_for__NAME_ULevelSequenceBurnIn_SetSettings__(void)

{
  FName::FName(&NAME_ULevelSequenceBurnIn_SetSettings,L"SetSettings");
  return;
}

// `dynamic_initializer_for_'NAME_ULevelSequenceDirector_OnCreated'' @ 1410abc30

void __cdecl _dynamic_initializer_for__NAME_ULevelSequenceDirector_OnCreated__(void)

{
  FName::FName(&NAME_ULevelSequenceDirector_OnCreated,L"OnCreated");
  return;
}

// `dynamic_initializer_for_'SequencerActorTag'' @ 1410abc50

void __cdecl _dynamic_initializer_for__SequencerActorTag__(void)

{
  FName::FName(&SequencerActorTag,L"SequencerActor");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 1410abc70

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 1410abd00

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1410abd90

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1410abe20

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

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1410abeb0

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LegacyLazyObjectPtrFragment_h__Script_LevelSequence_593336252'' @ 1410abf40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LegacyLazyObjectPtrFragment_h__Script_LevelSequence_593336252__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LegacyLazyObjectPtrFragment_h__Script_LevelSequence_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h__Script_LevelSequence_4203513879'' @ 1410abf80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h__Script_LevelSequence_4203513879__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h__Script_LevelSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h__Script_LevelSequence_3098770736'' @ 1410abfc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h__Script_LevelSequence_3098770736__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h__Script_LevelSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h__Script_LevelSequence_1695960163'' @ 1410ac000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h__Script_LevelSequence_1695960163__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h__Script_LevelSequence_Statics
             ::ClassInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h__Script_LevelSequence_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h__Script_LevelSequence_215025091'' @ 1410ac050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h__Script_LevelSequence_215025091__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h__Script_LevelSequence_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h__Script_LevelSequence_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h__Script_LevelSequence_3810913185'' @ 1410ac0a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h__Script_LevelSequence_3810913185__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h__Script_LevelSequence_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h__Script_LevelSequence_3979455048'' @ 1410ac0e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h__Script_LevelSequence_3979455048__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h__Script_LevelSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h__Script_LevelSequence_2401574225'' @ 1410ac120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h__Script_LevelSequence_2401574225__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h__Script_LevelSequence_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h__Script_LevelSequence_258169768'' @ 1410ac160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h__Script_LevelSequence_258169768__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h__Script_LevelSequence_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h__Script_LevelSequence_2053068070'' @ 1410ac1a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h__Script_LevelSequence_2053068070__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h__Script_LevelSequence_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h__Script_LevelSequence_164896719'' @ 1410ac1e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h__Script_LevelSequence_164896719__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h__Script_LevelSequence_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h__Script_LevelSequence_3674325134'' @ 1410ac220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h__Script_LevelSequence_3674325134__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h__Script_LevelSequence_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h__Script_LevelSequence_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h__Script_LevelSequence_1446689461'' @ 1410ac270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h__Script_LevelSequence_1446689461__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h__Script_LevelSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h__Script_LevelSequence_87466879'' @ 1410ac2b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h__Script_LevelSequence_87466879__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h__Script_LevelSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h__Script_LevelSequence_2283520868'' @ 1410ac2f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h__Script_LevelSequence_2283520868__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h__Script_LevelSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h__Script_LevelSequence_3168017875'' @ 1410ac330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h__Script_LevelSequence_3168017875__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LevelSequence",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h__Script_LevelSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LevelSequence'' @ 1410ac370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LevelSequence__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe733bc56;
  local_res8[0].DeclarationsHash = 0x51901f59;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LevelSequence,L"/Script/LevelSequence",
             &Z_Registration_Info_UPackage__Script_LevelSequence,local_res8);
  return;
}

// Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject @ 146c438c0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects @ 146c43900

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULevelSequencePlayer @ 146c43a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelSequencePlayer(void)

{
  if (Z_Registration_Info_UClass_ULevelSequencePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelSequencePlayer.OuterSingleton,
               &Z_Construct_UClass_ULevelSequencePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelSequencePlayer.OuterSingleton;
}

// Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime @ 146c43a40

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULevelSequence_NoRegister @ 146c43a80

UClass * __cdecl Z_Construct_UClass_ULevelSequence_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequence",
               &Z_Registration_Info_UClass_ULevelSequence.InnerSingleton,
               ULevelSequence::StaticRegisterNativesULevelSequence,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelSequence>,InternalVTableHelperCtorCaller<ULevelSequence>,
               local_res8,UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequence.InnerSingleton;
}

// Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceCustomClock @ 146c43c00

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceCustomClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceCustomClock_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146c43d90

void * __cdecl Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSequencePlayerSnapshot,&UE::CoreUObject::Private::Construct<FLevelSequencePlayerSnapshot>,&UE::CoreUObject::Private::ConstructForTests<FLevelSequencePlayerSnapshot>,&UE::CoreUObject::Private::Destruct<FLevelSequencePlayerSnapshot>,&UE::CoreUObject::Private::Copy<FLevelSequencePlayerSnapshot>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime @ 146c43ee0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceDirector_GetSequence @ 146c43f20

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_GetSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceDirector_GetSequenceCustomClock @ 146c43f60

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_GetSequenceCustomClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_GetSequenceCustomClock_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer @ 146c43fa0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ALevelSequenceMediaController @ 146c43fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALevelSequenceMediaController(void)

{
  if (Z_Registration_Info_UClass_ALevelSequenceMediaController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALevelSequenceMediaController.OuterSingleton,
               &Z_Construct_UClass_ALevelSequenceMediaController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALevelSequenceMediaController.OuterSingleton;
}

// Z_Construct_UFunction_ULevelSequenceDirector_OnCreated @ 146c44020

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_OnCreated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimSequenceLevelSequenceLink @ 146c44060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimSequenceLevelSequenceLink(void)

{
  if (Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.OuterSingleton,
               &Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.OuterSingleton;
}

// Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent @ 146c440a0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence @ 146c440e0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds @ 146c44120

UFunction * __cdecl
Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent @ 146c44160

UFunction * __cdecl Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceMediaController_Play @ 146c441a0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceMediaController_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer @ 146c441e0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146c44280

void * __cdecl Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLegacyLazyObjectPtrFragment,&UE::CoreUObject::Private::Construct<FLegacyLazyObjectPtrFragment>,&UE::CoreUObject::Private::ConstructForTests<FLegacyLazyObjectPtrFragment>,&UE::CoreUObject::Private::Destruct<FLegacyLazyObjectPtrFragment>,&UE::CoreUObject::Private::Copy<FLegacyLazyObjectPtrFragment>,&UE::CoreUObject::Private::Identical<FLegacyLazyObjectPtrFragment>,&UE::CoreUObject::Private::GetStructTypeHash<FLegacyLazyObjectPtrFragment>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDefaultLevelSequenceInstanceData @ 146c44370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDefaultLevelSequenceInstanceData(void)

{
  if (Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.OuterSingleton,
               &Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.OuterSingleton;
}

// Z_Construct_UPackage__Script_LevelSequence @ 146c443b0

UPackage * __cdecl Z_Construct_UPackage__Script_LevelSequence(void)

{
  if (Z_Registration_Info_UPackage__Script_LevelSequence.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LevelSequence.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LevelSequence.OuterSingleton;
}

// Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature @ 146c44550

UFunction * __cdecl
Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULevelSequenceProjectSettings @ 146c44590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelSequenceProjectSettings(void)

{
  if (Z_Registration_Info_UClass_ULevelSequenceProjectSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelSequenceProjectSettings.OuterSingleton,
               &Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelSequenceProjectSettings.OuterSingleton;
}

// Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature @ 146c445d0

UFunction * __cdecl
Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDefaultLockEngineToDisplayRate_SetBit @ 146c44610

void __cdecl
Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::
NewProp_bDefaultLockEngineToDisplayRate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UScriptStruct_FLevelSequenceCameraSettings @ 146c44660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSequenceCameraSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceCameraSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSequenceCameraSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceCameraSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLevelSequenceCameraSettings.InnerSingleton;
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

// NewProp_bOverrideAspectRatioAxisConstraint_SetBit @ 146c446e0

void __cdecl
Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::
NewProp_bOverrideAspectRatioAxisConstraint_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 146c446f0

void * __cdecl Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSequenceCameraSettings,&UE::CoreUObject::Private::Construct<FLevelSequenceCameraSettings>,&UE::CoreUObject::Private::ConstructForTests<FLevelSequenceCameraSettings>,&UE::CoreUObject::Private::Destruct<FLevelSequenceCameraSettings>,&UE::CoreUObject::Private::Copy<FLevelSequenceCameraSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary @ 146c44870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary(void)

{
  if (Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.OuterSingleton,
               &Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.OuterSingleton;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearFavoriteRating @ 146c448b0

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearFavoriteRating(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearFavoriteRating_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsFlagged @ 146c448f0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsFlagged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsFlagged_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsNoGood @ 146c44930

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsNoGood(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsNoGood_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsRecorded @ 146c449b0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsRecorded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsRecorded_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsSubSequence @ 146c449f0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsSubSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_ClearIsSubSequence_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c44a30

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRating_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRating @ 146c44a40

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRating(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRating_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRatingAssetTag @ 146c44a80

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRatingAssetTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRatingAssetTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c44ac0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRatingByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRatingByAssetData @ 146c44ad0

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRatingByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetFavoriteRatingByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOutIsFlagged_SetBit @ 146c44b10

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlagged_Statics::
NewProp_bOutIsFlagged_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c44b20

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlagged_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlagged @ 146c44b30

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlagged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlagged_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlaggedAssetTag @ 146c44b70

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlaggedAssetTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlaggedAssetTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOutIsFlagged_SetBit @ 146c44bb0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlaggedByAssetData_Statics::
NewProp_bOutIsFlagged_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c44bc0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlaggedByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlaggedByAssetData @ 146c44bd0

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlaggedByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsFlaggedByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOutNoGood_SetBit @ 146c44c10

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGood_Statics::
NewProp_bOutNoGood_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c44c20

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGood_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGood @ 146c44c30

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGood(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGood_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGoodAssetTag @ 146c44c70

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGoodAssetTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGoodAssetTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOutNoGood_SetBit @ 146c44cb0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGoodByAssetData_Statics::
NewProp_bOutNoGood_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c44cc0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGoodByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGoodByAssetData @ 146c44cd0

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGoodByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsNoGoodByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOutIsRecorded_SetBit @ 146c44d10

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecorded_Statics::
NewProp_bOutIsRecorded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c44d20

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecorded_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecorded @ 146c44d30

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecorded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecorded_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecordedAssetTag @ 146c44d70

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecordedAssetTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecordedAssetTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOutIsRecorded_SetBit @ 146c44db0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecordedByAssetData_Statics::
NewProp_bOutIsRecorded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c44dc0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecordedByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecordedByAssetData @ 146c44dd0

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecordedByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsRecordedByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister @ 146c44e10

UClass * __cdecl Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceBurnInInitSettings",
               &Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.InnerSingleton,
               ULevelSequenceBurnInInitSettings::
               StaticRegisterNativesULevelSequenceBurnInInitSettings,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceBurnInInitSettings>,
               InternalVTableHelperCtorCaller<ULevelSequenceBurnInInitSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.InnerSingleton;
}

// Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister @ 146c44ec0

UClass * __cdecl Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceBurnInOptions",
               &Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.InnerSingleton,
               ULevelSequenceBurnInOptions::StaticRegisterNativesULevelSequenceBurnInOptions,0x58,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULevelSequenceBurnInOptions>,
               InternalVTableHelperCtorCaller<ULevelSequenceBurnInOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.InnerSingleton;
}

// Z_Construct_UClass_ALevelSequenceActor_NoRegister @ 146c44f70

UClass * __cdecl Z_Construct_UClass_ALevelSequenceActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelSequenceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceActor",
               &Z_Registration_Info_UClass_ALevelSequenceActor.InnerSingleton,
               ALevelSequenceActor::StaticRegisterNativesALevelSequenceActor,0x368,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelSequenceActor>,
               InternalVTableHelperCtorCaller<ALevelSequenceActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelSequenceActor.InnerSingleton;
}

// NewProp_bOutIsSubSequence_SetBit @ 146c450e0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequence_Statics::
NewProp_bOutIsSubSequence_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c450f0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequence_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequence @ 146c45100

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequence_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequenceAssetTag @ 146c451f0

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequenceAssetTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequenceAssetTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ALevelSequenceActor @ 146c45230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALevelSequenceActor(void)

{
  if (Z_Registration_Info_UClass_ALevelSequenceActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALevelSequenceActor.OuterSingleton,
               &Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALevelSequenceActor.OuterSingleton;
}

// Z_Construct_UClass_AReplicatedLevelSequenceActor @ 146c45270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AReplicatedLevelSequenceActor(void)

{
  if (Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.OuterSingleton,
               &Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.OuterSingleton;
}

// Z_Construct_UClass_ULevelSequenceBurnInInitSettings @ 146c452b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelSequenceBurnInInitSettings(void)

{
  if (Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.OuterSingleton,
               &Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.OuterSingleton;
}

// Z_Construct_UClass_ULevelSequenceBurnInOptions @ 146c452f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelSequenceBurnInOptions(void)

{
  if (Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.OuterSingleton,
               &Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.OuterSingleton;
}

// NewProp_bOutIsSubSequence_SetBit @ 146c45330

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequenceByAssetData_Statics::
NewProp_bOutIsSubSequence_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c45340

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequenceByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequenceByAssetData @ 146c45350

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequenceByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_GetIsSubSequenceByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c45390

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasFavoriteRating_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasFavoriteRating @ 146c453a0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasFavoriteRating(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasFavoriteRating_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn @ 146c453e0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c45420

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasFavoriteRatingByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_bUseBurnIn_SetBit @ 146c45430

void __cdecl
Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasFavoriteRatingByAssetData @ 146c45440

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasFavoriteRatingByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasFavoriteRatingByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c45480

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsFlagged_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsFlagged @ 146c45550

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsFlagged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsFlagged_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c45590

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsFlaggedByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsFlaggedByAssetData @ 146c455a0

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsFlaggedByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsFlaggedByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c455e0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsNoGood_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsNoGood @ 146c455f0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsNoGood(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsNoGood_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c45630

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsNoGoodByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsNoGoodByAssetData @ 146c45640

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsNoGoodByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsNoGoodByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c45680

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsRecorded_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 146c45690

void * __cdecl
Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSequenceLegacyObjectReference,&UE::CoreUObject::Private::Construct<FLevelSequenceLegacyObjectReference>,&UE::CoreUObject::Private::ConstructForTests<FLevelSequenceLegacyObjectReference>,&UE::CoreUObject::Private::Destruct<FLevelSequenceLegacyObjectReference>,&UE::CoreUObject::Private::Copy<FLevelSequenceLegacyObjectReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsRecorded @ 146c456d0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsRecorded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsRecorded_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowBindingsFromAsset_SetBit @ 146c45710

void __cdecl
Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c45720

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsRecordedByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_ALevelSequenceActor_AddBinding @ 146c45730

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_AddBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsRecordedByAssetData @ 146c45770

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsRecordedByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsRecordedByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowBindingsFromAsset_SetBit @ 146c457f0

void __cdecl
Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::
NewProp_bAllowBindingsFromAsset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146c45860

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsSubSequence_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 146c45870

void * __cdecl
Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSequenceObjectReferenceMap,&UE::CoreUObject::Private::Construct<FLevelSequenceObjectReferenceMap>,&UE::CoreUObject::Private::ConstructForTests<FLevelSequenceObjectReferenceMap>,&UE::CoreUObject::Private::Destruct<FLevelSequenceObjectReferenceMap>,&UE::CoreUObject::Private::SerializeArchive<FLevelSequenceObjectReferenceMap>,&UE::CoreUObject::Private::Copy<FLevelSequenceObjectReferenceMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag @ 146c459b0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsSubSequence @ 146c459f0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsSubSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsSubSequence_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146c45a30

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsSubSequenceByAssetData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding @ 146c45a40

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsSubSequenceByAssetData @ 146c45a80

UFunction * __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsSubSequenceByAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_HasIsSubSequenceByAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings @ 146c45bc0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetFavoriteRating @ 146c45c00

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetFavoriteRating(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetFavoriteRating_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146c45dd0

void * __cdecl Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSequenceObject,&UE::CoreUObject::Private::Construct<FLevelSequenceObject>,&UE::CoreUObject::Private::ConstructForTests<FLevelSequenceObject>,&UE::CoreUObject::Private::Destruct<FLevelSequenceObject>,&UE::CoreUObject::Private::Copy<FLevelSequenceObject>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInIsFlagged_SetBit @ 146c45e10

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsFlagged_Statics::
NewProp_bInIsFlagged_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsFlagged @ 146c45e70

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsFlagged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsFlagged_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceActor_GetSequence @ 146c45ef0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_GetSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsNoGood_SetBit @ 146c45f30

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsNoGood_Statics::
NewProp_bInIsNoGood_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister @ 146c45f40

UClass * __cdecl Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceBurnIn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceBurnIn",
               &Z_Registration_Info_UClass_ULevelSequenceBurnIn.InnerSingleton,
               ULevelSequenceBurnIn::StaticRegisterNativesULevelSequenceBurnIn,0x458,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceBurnIn>,
               InternalVTableHelperCtorCaller<ULevelSequenceBurnIn>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnIn.InnerSingleton;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsNoGood @ 146c460c0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsNoGood(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsNoGood_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer @ 146c46100

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsRecorded_SetBit @ 146c46140

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsRecorded_Statics::
NewProp_bInIsRecorded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_ALevelSequenceActor_HideBurnin @ 146c46150

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_HideBurnin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146c46250

void * __thiscall
ILevelSequenceModule::_scalar_deleting_destructor_(ILevelSequenceModule *this,uint param_1)

{
  *this = (ILevelSequenceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsRecorded @ 146c46290

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsRecorded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsRecorded_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsSubSequence_SetBit @ 146c46dd0

void __cdecl
Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsSubSequence_Statics::
NewProp_bInIsSubSequence_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding @ 146c46de0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsSubSequence @ 146c46e20

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsSubSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceShotMetaDataLibrary_SetIsSubSequence_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag @ 146c46e60

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceActor_ResetBinding @ 146c46ea0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_ResetBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceActor_ResetBindings @ 146c46ee0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_ResetBindings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowBindingsFromAsset_SetBit @ 146c46f20

void __cdecl
Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_ALevelSequenceActor_SetBinding @ 146c46f30

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_SetBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowBindingsFromAsset_SetBit @ 146c46f70

void __cdecl
Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::
NewProp_bAllowBindingsFromAsset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag @ 146c46f80

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReplicatePlayback_SetBit @ 146c46fc0

void __cdecl
Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::
NewProp_ReplicatePlayback_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback @ 146c46fd0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceActor_SetSequence @ 146c47010

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_SetSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin @ 146c470f0

UFunction * __cdecl Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoPlay_SetBit @ 146c471d0

void __cdecl Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x328) = *(byte *)((longlong)param_1 + 0x328) | 1;
  return;
}

// NewProp_bOverrideInstanceData_SetBit @ 146c471e0

void __cdecl
Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x328) = *(byte *)((longlong)param_1 + 0x328) | 2;
  return;
}

// NewProp_bReplicatePlayback_SetBit @ 146c471f0

void __cdecl
Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x328) = *(byte *)((longlong)param_1 + 0x328) | 4;
  return;
}

// NewProp_bShowBurnin_SetBit @ 146c47200

void __cdecl
Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x340) = 1;
  return;
}

// Z_Construct_UClass_ULevelSequenceAnimSequenceLink @ 146c47270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelSequenceAnimSequenceLink(void)

{
  if (Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton,
               &Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton;
}

// Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem @ 146c472b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceAnimSequenceLinkItem.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSequenceAnimSequenceLinkItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceAnimSequenceLinkItem.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLevelSequenceAnimSequenceLinkItem.InnerSingleton;
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

// NewProp_bExportTransforms_SetBit @ 146c47330

void __cdecl
Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::
NewProp_bExportTransforms_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bExportMorphTargets_SetBit @ 146c473a0

void __cdecl
Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::
NewProp_bExportMorphTargets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bExportAttributeCurves_SetBit @ 146c473b0

void __cdecl
Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::
NewProp_bExportAttributeCurves_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// NewProp_bExportMaterialCurves_SetBit @ 146c473c0

void __cdecl
Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::
NewProp_bExportMaterialCurves_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  return;
}

// NewProp_bRecordInWorldSpace_SetBit @ 146c473d0

void __cdecl
Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::
NewProp_bRecordInWorldSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return;
}

// NewProp_bEvaluateAllSkeletalMeshComponents_SetBit @ 146c473e0

void __cdecl
Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::
NewProp_bEvaluateAllSkeletalMeshComponents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  return;
}

// NewProp_bUseCustomTimeRange_SetBit @ 146c473f0

void __cdecl
Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::
NewProp_bUseCustomTimeRange_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bUseCustomFrameRate_SetBit @ 146c47400

void __cdecl
Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::
NewProp_bUseCustomFrameRate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  return;
}

// NewStructOps @ 146c47410

void * __cdecl
Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSequenceAnimSequenceLinkItem,&UE::CoreUObject::Private::Construct<FLevelSequenceAnimSequenceLinkItem>,&UE::CoreUObject::Private::ConstructForTests<FLevelSequenceAnimSequenceLinkItem>,&UE::CoreUObject::Private::Destruct<FLevelSequenceAnimSequenceLinkItem>,&UE::CoreUObject::Private::Copy<FLevelSequenceAnimSequenceLinkItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULevelSequence @ 146c47450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelSequence(void)

{
  if (Z_Registration_Info_UClass_ULevelSequence.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelSequence.OuterSingleton,
               &Z_Construct_UClass_ULevelSequence_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelSequence.OuterSingleton;
}

// Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences @ 146c47490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUpgradedLevelSequenceBindingReferences.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUpgradedLevelSequenceBindingReferences.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUpgradedLevelSequenceBindingReferences.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUpgradedLevelSequenceBindingReferences.InnerSingleton;
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

// Z_Construct_UFunction_ULevelSequence_CopyMetaData @ 146c47510

UFunction * __cdecl Z_Construct_UFunction_ULevelSequence_CopyMetaData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146c47550

void * __thiscall
FLevelSequenceModule::_scalar_deleting_destructor_(FLevelSequenceModule *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NewActorTrackAdded).field_0x8,*(int *)&(this->NewActorTrackAdded).field_0x10);
  pvVar1 = *(void **)&(this->NewActorTrackAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NewActorTrackAdded);
  DestructItems<TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)(this->OnCreateMovieSceneObjectSpawnerDelegates).AllocatorInstance.Data,
             (this->OnCreateMovieSceneObjectSpawnerDelegates).ArrayNum);
  pFVar2 = (this->OnCreateMovieSceneObjectSpawnerDelegates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass @ 146c47620

UFunction * __cdecl Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass @ 146c47660

UFunction * __cdecl Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass @ 146c47710

UFunction * __cdecl Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146c47840

void * __cdecl Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBoundActorProxy,&UE::CoreUObject::Private::Construct<FBoundActorProxy>,&UE::CoreUObject::Private::ConstructForTests<FBoundActorProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FLevelSequenceBindingReference @ 146c479e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSequenceBindingReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray @ 146c47a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferenceArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferenceArray.InnerSingleton
               ,&Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferenceArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferenceArray.InnerSingleton;
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

// NewStructOps @ 146c47b60

void * __cdecl Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSequenceBindingReference,&UE::CoreUObject::Private::Construct<FLevelSequenceBindingReference>,&UE::CoreUObject::Private::ConstructForTests<FLevelSequenceBindingReference>,&UE::CoreUObject::Private::Destruct<FLevelSequenceBindingReference>,&UE::CoreUObject::Private::PostSerialize<FLevelSequenceBindingReference>,&UE::CoreUObject::Private::Copy<FLevelSequenceBindingReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146c47cb0

void * __cdecl
Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSequenceBindingReferenceArray,&UE::CoreUObject::Private::Construct<FLevelSequenceBindingReferenceArray>,&UE::CoreUObject::Private::ConstructForTests<FLevelSequenceBindingReferenceArray>,&UE::CoreUObject::Private::Destruct<FLevelSequenceBindingReferenceArray>,&UE::CoreUObject::Private::Copy<FLevelSequenceBindingReferenceArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146c47cf0

void * __cdecl
Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUpgradedLevelSequenceBindingReferences,&UE::CoreUObject::Private::Construct<FUpgradedLevelSequenceBindingReferences>,&UE::CoreUObject::Private::ConstructForTests<FUpgradedLevelSequenceBindingReferences>,&UE::CoreUObject::Private::Destruct<FUpgradedLevelSequenceBindingReferences>,&UE::CoreUObject::Private::Copy<FUpgradedLevelSequenceBindingReferences>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FUpgradedLevelSequenceBindingReferences>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146c47d30

void * __cdecl Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelSequenceBindingReferences,&UE::CoreUObject::Private::Construct<FLevelSequenceBindingReferences>,&UE::CoreUObject::Private::ConstructForTests<FLevelSequenceBindingReferences>,&UE::CoreUObject::Private::Destruct<FLevelSequenceBindingReferences>,&UE::CoreUObject::Private::Copy<FLevelSequenceBindingReferences>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULevelSequenceBurnIn @ 146c47f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelSequenceBurnIn(void)

{
  if (Z_Registration_Info_UClass_ULevelSequenceBurnIn.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelSequenceBurnIn.OuterSingleton,
               &Z_Construct_UClass_ULevelSequenceBurnIn_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnIn.OuterSingleton;
}

// Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot @ 146c47fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequencePlayerSnapshot.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSequencePlayerSnapshot.InnerSingleton,
               &Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSequencePlayerSnapshot.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLevelSequencePlayerSnapshot.InnerSingleton;
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

// `vector_deleting_destructor'`adjustor{8}' @ 146c48028

/* [thunk]:public: virtual void * __ptr64 __cdecl FLevelSequenceModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FLevelSequenceModule::_vector_deleting_destructor__adjustor_8__
          (FLevelSequenceModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FLevelSequenceModule *)&this[-1].NewActorTrackAdded.field_0x18,param_1);
  return pvVar1;
}

// Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass @ 146c481b0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings @ 146c48330

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULevelSequencePlayer_NoRegister @ 146c48370

UClass * __cdecl Z_Construct_UClass_ULevelSequencePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequencePlayer",
               &Z_Registration_Info_UClass_ULevelSequencePlayer.InnerSingleton,
               ULevelSequencePlayer::StaticRegisterNativesULevelSequencePlayer,0x5d0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequencePlayer>,
               InternalVTableHelperCtorCaller<ULevelSequencePlayer>,local_res8,
               UMovieSceneSequencePlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequencePlayer.InnerSingleton;
}

// Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint @ 146c48430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint(void)

{
  if (Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.OuterSingleton,
               &Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.OuterSingleton;
}

// Z_Construct_UClass_ULevelSequenceDirector @ 146c48470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelSequenceDirector(void)

{
  if (Z_Registration_Info_UClass_ULevelSequenceDirector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelSequenceDirector.OuterSingleton,
               &Z_Construct_UClass_ULevelSequenceDirector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelSequenceDirector.OuterSingleton;
}

// Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor @ 146c484f0

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors @ 146c48530

UFunction * __cdecl Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// CastChecked<ALevelSequenceActor,AActor> @ 146c4a3b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelSequenceActor * __cdecl CastChecked<ALevelSequenceActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (ALevelSequenceActor *)0x0;
    }
    pFVar3 = GetTypeName<ALevelSequenceActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ALevelSequenceActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ALevelSequenceActor *)param_1;
  }
  pFVar3 = GetTypeName<ALevelSequenceActor>(&local_28);
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

// ConstructItems<UObject_*,AActor_*,int> @ 146c4a490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ConstructItems<UObject_*,AActor_*,int>(void *param_1,AActor **param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(AActor **)(lVar1 + (longlong)param_2) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FLevelSequenceBindingReference,FLevelSequenceBindingReference,int> @ 146c4a4c0

void __cdecl
ConstructItems<FLevelSequenceBindingReference,FLevelSequenceBindingReference,int>
          (void *param_1,FLevelSequenceBindingReference *param_2,int param_3)

{
  FString *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->ObjectPath;
    this = (FString *)((longlong)param_1 + 0x30);
    do {
      FString::FString(this + -3,
                       (FString *)((longlong)param_2 + (-0x30 - (longlong)param_1) + (longlong)this)
                      );
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(this + -2),(FSoftObjectPath *)(pFVar1 + -2));
      FString::FString(this,pFVar1);
      pFVar1 = pFVar1 + 4;
      this = this + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<IMovieSceneObjectSpawner,1>,TSharedRef<IMovieSceneObjectSpawner,1>,int> @ 146c4a540

void __cdecl
ConstructItems<TSharedRef<IMovieSceneObjectSpawner,1>,TSharedRef<IMovieSceneObjectSpawner,1>,int>
          (void *param_1,TSharedRef<IMovieSceneObjectSpawner,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IMovieSceneObjectSpawner **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// CreateWidget<ULevelSequenceBurnIn,UWorld_*> @ 146c4a580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ULevelSequenceBurnIn * __cdecl
CreateWidget<ULevelSequenceBurnIn,UWorld_*>
          (UWorld *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CreateWidget> FVar9;
  TStatId TVar10;
  UClass *pUVar11;
  ULevelSequenceBurnIn *pUVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  UObjectBaseUtility *pUVar13;
  undefined4 uVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_68;
  byte local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  uVar14 = 0;
  FVar9 = StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName(&local_res10,"STAT_CreateWidget");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                       L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar9;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  bVar5 = false;
  bVar7 = false;
  if ((LVar15.s.LowPart == 0) && (LVar15.s.HighPart == 0)) {
LAB_146c4a6d8:
    bVar6 = false;
    LVar15 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidget.h"
                   ,0x728);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c4a6d8;
    local_res8 = LVar15;
    local_58 = LVar15;
    FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
    bVar6 = true;
    uVar14 = local_58._0_4_;
  }
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName((FName *)&local_res8.s,"STAT_CreateWidget");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                    L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar3 == 0) {
LAB_146c4a791:
    pUVar13 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_146c4a791;
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146c4a791;
    pUVar13 = *(UObjectBaseUtility **)param_2.Class.field0_0x0;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,pUVar13,TVar10);
  if (param_1 != (UWorld *)0x0) {
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar12 = (ULevelSequenceBurnIn *)
              UUserWidget::CreateWidgetInstance
                        (param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
    if (pUVar12 != (ULevelSequenceBurnIn *)0x0) {
      pUVar11 = ULevelSequenceBurnIn::StaticClass();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) goto LAB_146c4a803;
    }
  }
  pUVar12 = (ULevelSequenceBurnIn *)0x0;
LAB_146c4a803:
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  local_60 = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar15.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = uVar14;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
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
  return pUVar12;
}

// DestructItems<FLevelSequenceAnimSequenceLinkItem,int> @ 146c4a980

void __cdecl
DestructItems<FLevelSequenceAnimSequenceLinkItem,int>
          (FLevelSequenceAnimSequenceLinkItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ExcludeAnimationNames;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>((FString *)pTVar2[-1].AllocatorInstance.Data,pTVar2[-1].ArrayNum);
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((FName *)(pTVar2 + -3) + 1) != (void *)0x0) {
        FMemory::Free(*(void **)((FName *)(pTVar2 + -3) + 1));
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLevelSequenceBindingReference,int> @ 146c4a9f0

void __cdecl
DestructItems<FLevelSequenceBindingReference,int>
          (FLevelSequenceBindingReference *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->ExternalObjectPath).SubPathString;
    do {
      if (*(void **)(pFVar2 + 1) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 1));
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)(pFVar2 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + -2));
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>,int> @ 146c4aa50

void __cdecl
DestructItems<TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>,int>
          (TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedRef<IMovieSceneObjectSpawner,1>,int> @ 146c4aa90

void __cdecl
DestructItems<TSharedRef<IMovieSceneObjectSpawner,1>,int>
          (TSharedRef<IMovieSceneObjectSpawner,1> *param_1,int param_2)

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

// GetTypeName<ALevelSequenceActor> @ 146c4ac70

FString * __cdecl GetTypeName<ALevelSequenceActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ALevelSequenceActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSharedRef<IMovieSceneObjectSpawner,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,`FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>_>_> @ 146c4acb0

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedRef<IMovieSceneObjectSpawner,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_FLevelSequenceModule::GenerateObjectSpawners_::__l2::<lambda_1>_>_>
          (TSharedRef<IMovieSceneObjectSpawner,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_public:_virtual_void___cdecl_FLevelSequenceModule::GenerateObjectSpawners(TArray<TSharedRef<IMovieSceneObjectSpawner,1>,TSizedDefaultAllocator<32>_>_&)const_::_2_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  IMovieSceneObjectSpawner *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar11;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar12;
  longlong lVar13;
  int iVar14;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar15;
  <lambda_1> *local_res20;
  TSharedRef<IMovieSceneObjectSpawner,1> local_68;
  TSharedRef<IMovieSceneObjectSpawner,1> local_58;
  TSharedRef<IMovieSceneObjectSpawner,1> local_48;
  TSharedRef<IMovieSceneObjectSpawner,1> local_38;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSharedRef<IMovieSceneObjectSpawner,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_FLevelSequenceModule::GenerateObjectSpawners_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_public:_virtual_void___cdecl_FLevelSequenceModule::GenerateObjectSpawners(TArray<TSharedRef<IMovieSceneObjectSpawner,1>,TSizedDefaultAllocator<32>_>_&)const_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar14 = param_2 + -1;
  lVar13 = (longlong)iVar14;
  if (0 < iVar14) {
    pTVar15 = param_1 + lVar13;
    do {
      pTVar5 = (pTVar15->SharedReferenceCount).ReferenceController;
      pIVar6 = param_1->Object;
      pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar15->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar5;
      pTVar15->Object = pIVar6;
      (pTVar15->SharedReferenceCount).ReferenceController = pTVar7;
      iVar10 = 0;
      if (1 < iVar14) {
        do {
          iVar4 = iVar10 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < iVar14) {
            lVar1 = (longlong)iVar4 + 1;
            lVar2 = (longlong)iVar4 + 2;
            local_68.Object = param_1[lVar1].Object;
            local_68.SharedReferenceCount.ReferenceController =
                 param_1[lVar1].SharedReferenceCount.ReferenceController;
            if (local_68.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            local_58.Object = param_1[lVar2].Object;
            local_58.SharedReferenceCount.ReferenceController =
                 param_1[lVar2].SharedReferenceCount.ReferenceController;
            if (local_58.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            bVar8 = `FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>::operator()
                              (local_res20,&local_58,&local_68);
            if (bVar8) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          pTVar12 = param_1 + iVar10;
          pTVar11 = param_1 + iVar9;
          local_48.Object = pTVar11->Object;
          local_48.SharedReferenceCount.ReferenceController =
               (pTVar11->SharedReferenceCount).ReferenceController;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_38.Object = pTVar12->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar12->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          bVar8 = `FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>::operator()
                            (local_res20,&local_38,&local_48);
          if (!bVar8) break;
          pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
          pIVar6 = pTVar12->Object;
          pTVar7 = (pTVar12->SharedReferenceCount).ReferenceController;
          pTVar12->Object = pTVar11->Object;
          (pTVar12->SharedReferenceCount).ReferenceController = pTVar5;
          pTVar11->Object = pIVar6;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar7;
          iVar10 = iVar9;
        } while (iVar9 * 2 + 1 < iVar14);
      }
      iVar14 = iVar14 + -1;
      lVar13 = lVar13 + -1;
      pTVar15 = pTVar15 + -1;
    } while (0 < lVar13);
  }
  return;
}

// HeapifyInternal<TSharedRef<IMovieSceneObjectSpawner,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,`FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>_>_>_> @ 146c4aeb0

void __cdecl
AlgoImpl::
HeapifyInternal<TSharedRef<IMovieSceneObjectSpawner,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_FLevelSequenceModule::GenerateObjectSpawners_::__l2::<lambda_1>_>_>_>
          (TSharedRef<IMovieSceneObjectSpawner,1> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_public:_virtual_void___cdecl_FLevelSequenceModule::GenerateObjectSpawners(TArray<TSharedRef<IMovieSceneObjectSpawner,1>,TSizedDefaultAllocator<32>_>_&)const_::_2_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  <lambda_1> *p<Var3;
  code *pcVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  IMovieSceneObjectSpawner *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar12;
  int iVar13;
  int iVar14;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar15;
  TSharedRef<IMovieSceneObjectSpawner,1> local_68;
  TSharedRef<IMovieSceneObjectSpawner,1> local_58;
  TSharedRef<IMovieSceneObjectSpawner,1> local_48;
  TSharedRef<IMovieSceneObjectSpawner,1> local_38;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar5 = iVar11;
  iVar14 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_146c4b035:
      if (iVar14 == 0) {
        return;
      }
      iVar10 = iVar14 + -1;
      iVar11 = iVar5 + -2;
      iVar5 = iVar11;
      iVar14 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      p<Var3 = (param_4.Predicate)->Predicate;
      lVar1 = (longlong)iVar11 + 1;
      lVar2 = (longlong)iVar11 + 2;
      local_68.Object = param_1[lVar1].Object;
      local_68.SharedReferenceCount.ReferenceController =
           param_1[lVar1].SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = param_1[lVar2].Object;
      local_58.SharedReferenceCount.ReferenceController =
           param_1[lVar2].SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = `FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>::operator()
                        (p<Var3,&local_58,&local_68);
      if (bVar9) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    p<Var3 = (param_4.Predicate)->Predicate;
    pTVar12 = param_1 + iVar10;
    pTVar15 = param_1 + iVar13;
    local_48.Object = pTVar15->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (pTVar15->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pTVar12->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = `FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>::operator()
                      (p<Var3,&local_38,&local_48);
    if (!bVar9) goto LAB_146c4b035;
    pTVar6 = (pTVar15->SharedReferenceCount).ReferenceController;
    iVar11 = iVar13 * 2 + 1;
    pIVar7 = pTVar12->Object;
    pTVar8 = (pTVar12->SharedReferenceCount).ReferenceController;
    pTVar12->Object = pTVar15->Object;
    (pTVar12->SharedReferenceCount).ReferenceController = pTVar6;
    pTVar15->Object = pIVar7;
    (pTVar15->SharedReferenceCount).ReferenceController = pTVar8;
    iVar10 = iVar13;
  } while( true );
}

// InternalConstructor<ALevelSequenceActor> @ 146c4b080

void __cdecl InternalConstructor<ALevelSequenceActor>(FObjectInitializer *param_1)

{
  if ((ALevelSequenceActor *)param_1->Obj != (ALevelSequenceActor *)0x0) {
    ALevelSequenceActor::ALevelSequenceActor((ALevelSequenceActor *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ALevelSequenceMediaController> @ 146c4b0a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALevelSequenceMediaController>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UActorComponent *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->bReplicates = '\x01';
    this->_padding_ = (longlong)&ALevelSequenceMediaController::_vftable__for__AActor__;
    *(undefined4 *)&this[1]._padding_ = 0x80800000;
    this[1]._padding_ =
         (longlong)&ALevelSequenceMediaController::_vftable__for__IMovieSceneCustomClockSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,"MediaComponent");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UMediaComponent_NoRegister();
    pUVar4 = (UActorComponent *)
             FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UActorComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    AActor::AddOwnedComponent(this,pUVar4);
  }
  return;
}

// InternalConstructor<AReplicatedLevelSequenceActor> @ 146c4b180

void __cdecl InternalConstructor<AReplicatedLevelSequenceActor>(FObjectInitializer *param_1)

{
  ALevelSequenceActor *this;
  
  this = (ALevelSequenceActor *)param_1->Obj;
  if (this != (ALevelSequenceActor *)0x0) {
    ALevelSequenceActor::ALevelSequenceActor(this,param_1);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
    this->_padding_ = (longlong)&AReplicatedLevelSequenceActor::_vftable__for__AActor__;
    this->_padding_ =
         (longlong)&AReplicatedLevelSequenceActor::_vftable__for__IMovieScenePlaybackClient__;
    this->_padding_ =
         (longlong)&AReplicatedLevelSequenceActor::_vftable__for__IMovieSceneBindingOwnerInterface__
    ;
    this->_padding_ =
         (longlong)&AReplicatedLevelSequenceActor::_vftable__for__IWorldPartitionObjectResolver__;
  }
  return;
}

// InternalConstructor<UAnimSequenceLevelSequenceLink> @ 146c4b1e0

void __cdecl InternalConstructor<UAnimSequenceLevelSequenceLink>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7UAnimSequenceLevelSequenceLink__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UDefaultLevelSequenceInstanceData> @ 146c4b230

void __cdecl InternalConstructor<UDefaultLevelSequenceInstanceData>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UDefaultLevelSequenceInstanceData::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UDefaultLevelSequenceInstanceData::_vftable__for__IMovieSceneTransformOrigin__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[1].field_0x18 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this + 2) = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[2].field_0x10 = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[2].field_0x20 = auVar6;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[3].field_0x8 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[3].field_0x18 = auVar8;
    *(undefined8 *)&this[1].field_0x8 = 0;
    dVar9 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    *(double *)&this[1].field_0x18 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]
    ;
    *(double *)&this[1].field_0x20 = dVar9;
    dVar9 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    *(double *)&this[2].field_0x0 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    *(double *)&this[2].field_0x8 = dVar9;
    dVar9 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    *(double *)&this[2].field_0x10 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    *(double *)&this[2].field_0x18 = dVar9;
    *(double (*) [2])&this[2].field_0x20 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    dVar9 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    *(double *)&this[3].field_0x8 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    *(double *)&this[3].field_0x10 = dVar9;
    dVar9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    *(double *)&this[3].field_0x18 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    *(double *)&this[3].field_0x20 = dVar9;
  }
  return;
}

// InternalConstructor<ULegacyLevelSequenceDirectorBlueprint> @ 146c4b310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ULegacyLevelSequenceDirectorBlueprint>(FObjectInitializer *param_1)

{
  UBlueprint *this;
  UClass *pUVar1;
  
  this = (UBlueprint *)param_1->Obj;
  if (this != (UBlueprint *)0x0) {
    UBlueprint::UBlueprint(this,param_1);
    this->_padding_ =
         (longlong)&ULegacyLevelSequenceDirectorBlueprint::_vftable__for__UBlueprintCore__;
    this->_padding_ =
         (longlong)
         &ULegacyLevelSequenceDirectorBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
    pUVar1 = ULevelSequenceDirector::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ParentClass).Class.field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// InternalConstructor<ULevelSequence> @ 146c4b380

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl InternalConstructor<ULevelSequence>(FObjectInitializer *param_1)

{
  UMovieSceneSequence *this;
  
  this = (UMovieSceneSequence *)param_1->Obj;
  if (this != (UMovieSceneSequence *)0x0) {
    UMovieSceneSequence::UMovieSceneSequence(this,param_1);
    this->bParentContextsAreSignificant = true;
    this->_padding_ = (longlong)&ULevelSequence::_vftable__for__UMovieSceneSequence__;
    this[1]._padding_ = (longlong)&ULevelSequence::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<ULevelSequenceAnimSequenceLink> @ 146c4b3f0

void __cdecl InternalConstructor<ULevelSequenceAnimSequenceLink>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7ULevelSequenceAnimSequenceLink__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<ULevelSequenceBurnIn> @ 146c4b430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl InternalConstructor<ULevelSequenceBurnIn>(FObjectInitializer *param_1)

{
  UUserWidget *this;
  
  this = (UUserWidget *)param_1->Obj;
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&ULevelSequenceBurnIn::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&ULevelSequenceBurnIn::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7ULevelSequenceBurnIn__6B_;
    FLevelSequencePlayerSnapshot::FLevelSequencePlayerSnapshot
              ((FLevelSequencePlayerSnapshot *)(this + 1));
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<ULevelSequenceBurnInInitSettings> @ 146c4b490

void __cdecl InternalConstructor<ULevelSequenceBurnInInitSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULevelSequenceBurnInInitSettings__6B_;
  }
  return;
}

// InternalConstructor<ULevelSequenceBurnInOptions> @ 146c4b4c0

void __cdecl InternalConstructor<ULevelSequenceBurnInOptions>(FObjectInitializer *param_1)

{
  UObject *this;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7ULevelSequenceBurnInOptions__6B_;
    FString::FString(&local_28,L"/Engine/Sequencer/DefaultBurnIn.DefaultBurnIn_C");
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    local_18.Size = local_28.Data.ArrayNum + -1;
    *(undefined8 *)&this[1].field_0x20 = 0;
    if (local_28.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath((FSoftObjectPath *)&this[1].field_0x8,&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<ULevelSequenceDirector> @ 146c4b580

void __cdecl InternalConstructor<ULevelSequenceDirector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0xc = 0xffff;
    *(undefined ***)this = &___7ULevelSequenceDirector__6B_;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<ULevelSequencePlayer> @ 146c4b5c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<ULevelSequencePlayer>(FObjectInitializer *param_1)

{
  UMovieSceneSequencePlayer *this;
  
  this = (UMovieSceneSequencePlayer *)param_1->Obj;
  if (this != (UMovieSceneSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::UMovieSceneSequencePlayer(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&ULevelSequencePlayer::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULevelSequencePlayer::_vftable__for__IMovieScenePlayer__;
    this->_padding_ =
         (longlong)&ULevelSequencePlayer::_vftable__for__IMovieSceneSequenceTickManagerClient__;
    this[1]._padding_ = (longlong)&___7ULevelSequencePlayer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<ULevelSequenceProjectSettings> @ 146c4b680

void __cdecl InternalConstructor<ULevelSequenceProjectSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UDeveloperSettings::UDeveloperSettings(this,pFVar1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7ULevelSequenceProjectSettings__6B_;
    FString::FString((FString *)&this[1]._padding_,"30fps");
    FString::FString((FString *)&this[1]._padding_,"24000fps");
    *(undefined1 *)&this[1].CategoryName.ComparisonIndex.Value = 0;
  }
  return;
}

// InternalConstructor<ULevelSequenceShotMetaDataLibrary> @ 146c4b6e0

void __cdecl InternalConstructor<ULevelSequenceShotMetaDataLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7ULevelSequenceShotMetaDataLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<ALevelSequenceActor> @ 146c4b710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALevelSequenceActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ALevelSequenceActor *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALevelSequenceActor::GetPrivateStaticClass();
  pAVar3 = (ALevelSequenceActor *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (ALevelSequenceActor *)0x0) {
    pAVar3 = ALevelSequenceActor::ALevelSequenceActor(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALevelSequenceMediaController> @ 146c4b7b0

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
InternalVTableHelperCtorCaller<ALevelSequenceMediaController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALevelSequenceMediaController::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ALevelSequenceMediaController::_vftable__for__AActor__;
    this[1]._padding_ =
         (longlong)&ALevelSequenceMediaController::_vftable__for__IMovieSceneCustomClockSource__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AReplicatedLevelSequenceActor> @ 146c4b880

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AReplicatedLevelSequenceActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ALevelSequenceActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AReplicatedLevelSequenceActor::GetPrivateStaticClass();
  this = (ALevelSequenceActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ALevelSequenceActor *)0x0) {
    ALevelSequenceActor::ALevelSequenceActor(this,param_1);
    this->_padding_ = (longlong)&AReplicatedLevelSequenceActor::_vftable__for__AActor__;
    this->_padding_ =
         (longlong)&AReplicatedLevelSequenceActor::_vftable__for__IMovieScenePlaybackClient__;
    this->_padding_ =
         (longlong)&AReplicatedLevelSequenceActor::_vftable__for__IMovieSceneBindingOwnerInterface__
    ;
    this->_padding_ =
         (longlong)&AReplicatedLevelSequenceActor::_vftable__for__IWorldPartitionObjectResolver__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimSequenceLevelSequenceLink> @ 146c4b960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimSequenceLevelSequenceLink>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimSequenceLevelSequenceLink::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimSequenceLevelSequenceLink__6B_;
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

// InternalVTableHelperCtorCaller<UDefaultLevelSequenceInstanceData> @ 146c4ba30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDefaultLevelSequenceInstanceData>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UDefaultLevelSequenceInstanceData::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &UDefaultLevelSequenceInstanceData::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UDefaultLevelSequenceInstanceData::_vftable__for__IMovieSceneTransformOrigin__;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[1].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 2) = (double)fVar2;
    *(double *)&pUVar4[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[2].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[3].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x20 = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULegacyLevelSequenceDirectorBlueprint> @ 146c4bb40

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
InternalVTableHelperCtorCaller<ULegacyLevelSequenceDirectorBlueprint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprint *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULegacyLevelSequenceDirectorBlueprint::GetPrivateStaticClass();
  this = (UBlueprint *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprint *)0x0) {
    UBlueprint::UBlueprint(this,param_1);
    this->_padding_ =
         (longlong)&ULegacyLevelSequenceDirectorBlueprint::_vftable__for__UBlueprintCore__;
    this->_padding_ =
         (longlong)
         &ULegacyLevelSequenceDirectorBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelSequence> @ 146c4bc00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelSequence>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSequence *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelSequence::GetPrivateStaticClass();
  this = (UMovieSceneSequence *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSequence *)0x0) {
    UMovieSceneSequence::UMovieSceneSequence(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ULevelSequence::_vftable__for__UMovieSceneSequence__;
    this[1]._padding_ = (longlong)&ULevelSequence::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelSequenceAnimSequenceLink> @ 146c4bce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelSequenceAnimSequenceLink>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelSequenceAnimSequenceLink::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelSequenceAnimSequenceLink__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelSequenceBurnIn> @ 146c4bda0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelSequenceBurnIn>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUserWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelSequenceBurnIn::GetPrivateStaticClass();
  this = (UUserWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&ULevelSequenceBurnIn::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&ULevelSequenceBurnIn::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7ULevelSequenceBurnIn__6B_;
    FLevelSequencePlayerSnapshot::FLevelSequencePlayerSnapshot
              ((FLevelSequencePlayerSnapshot *)(this + 1));
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelSequenceBurnInInitSettings> @ 146c4be80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelSequenceBurnInInitSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelSequenceBurnInInitSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelSequenceBurnInInitSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelSequenceBurnInOptions> @ 146c4bf30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelSequenceBurnInOptions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelSequenceBurnInOptions__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelSequenceDirector> @ 146c4bff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelSequenceDirector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelSequenceDirector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0xc = 0xffff;
    *(undefined ***)pUVar1 = &___7ULevelSequenceDirector__6B_;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelSequencePlayer> @ 146c4c0b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelSequencePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSequencePlayer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelSequencePlayer::GetPrivateStaticClass();
  this = (UMovieSceneSequencePlayer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::UMovieSceneSequencePlayer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ULevelSequencePlayer::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULevelSequencePlayer::_vftable__for__IMovieScenePlayer__;
    this->_padding_ =
         (longlong)&ULevelSequencePlayer::_vftable__for__IMovieSceneSequenceTickManagerClient__;
    this[1]._padding_ = (longlong)&___7ULevelSequencePlayer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelSequenceProjectSettings> @ 146c4c1f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelSequenceProjectSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelSequenceProjectSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7ULevelSequenceProjectSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelSequenceShotMetaDataLibrary> @ 146c4c2b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelSequenceShotMetaDataLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelSequenceShotMetaDataLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelSequenceShotMetaDataLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSharedRef<IMovieSceneObjectSpawner,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,`FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>_>_> @ 146c4c360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedRef<IMovieSceneObjectSpawner,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_FLevelSequenceModule::GenerateObjectSpawners_::__l2::<lambda_1>_>_>
          (TSharedRef<IMovieSceneObjectSpawner,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_public:_virtual_void___cdecl_FLevelSequenceModule::GenerateObjectSpawners(TArray<TSharedRef<IMovieSceneObjectSpawner,1>,TSizedDefaultAllocator<32>_>_&)const_::_2_::<lambda_1>_>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IMovieSceneObjectSpawner *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar6;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar7;
  TSharedRef<IMovieSceneObjectSpawner,1> **ppTVar8;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar9;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar10;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar11;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar12;
  float fVar13;
  undefined1 auStack_3f8 [32];
  int local_3d8;
  TSharedRef<IMovieSceneObjectSpawner,1> **local_3d0;
  TSharedRef<IMovieSceneObjectSpawner,1> local_3c8;
  TSharedRef<IMovieSceneObjectSpawner,1> local_3b8;
  TSharedRef<IMovieSceneObjectSpawner,1> local_3a8;
  TSharedRef<IMovieSceneObjectSpawner,1> local_398;
  TSharedRef<IMovieSceneObjectSpawner,1> local_388;
  TSharedRef<IMovieSceneObjectSpawner,1> local_378 [2];
  TSharedRef<IMovieSceneObjectSpawner,1> *local_358;
  TSharedRef<IMovieSceneObjectSpawner,1> *local_348;
  TSharedRef<IMovieSceneObjectSpawner,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3f8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar13;
    memset(local_330,0,0x2e8);
    ppTVar8 = &local_348;
    do {
      pTVar9 = ppTVar8[1];
      pTVar12 = *ppTVar8;
      local_358 = ppTVar8[2];
      iVar5 = (int)((longlong)pTVar9 - (longlong)pTVar12 >> 4) + 1;
      local_3d8 = (int)local_358;
      pTVar11 = pTVar12;
      local_3d0 = ppTVar8;
      if ((int)local_358 != 0) {
LAB_146c4c421:
        if (8 < iVar5) {
          pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar6 = pTVar9 + 1;
          pIVar2 = pTVar11[iVar5 / 2].Object;
          pTVar3 = pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController;
          pTVar11[iVar5 / 2].Object = pTVar11->Object;
          pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController = pTVar1;
          pTVar11->Object = pIVar2;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar12 = pTVar11;
LAB_146c4c450:
          pTVar10 = pTVar12;
          pTVar12 = pTVar10 + 1;
          if (pTVar12 <= pTVar9) goto code_r0x000146c4c459;
          goto LAB_146c4c4a3;
        }
        for (; pTVar6 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar9; pTVar9 = pTVar9 + -1) {
          while (pTVar10 = pTVar6, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar9) {
            local_388.Object = pTVar12->Object;
            local_388.SharedReferenceCount.ReferenceController =
                 (pTVar12->SharedReferenceCount).ReferenceController;
            if (local_388.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_378[0].Object = pTVar10->Object;
            local_378[0].SharedReferenceCount.ReferenceController =
                 (pTVar10->SharedReferenceCount).ReferenceController;
            if (local_378[0].SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_378[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_378[0].SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            bVar4 = `FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,local_378,&local_388);
            pTVar6 = pTVar12;
            if (!bVar4) {
              pTVar6 = pTVar10;
            }
          }
          pIVar2 = pTVar10->Object;
          pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
          pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
          pTVar10->Object = pTVar9->Object;
          (pTVar10->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar9->Object = pIVar2;
          (pTVar9->SharedReferenceCount).ReferenceController = pTVar1;
          ppTVar8 = local_3d0;
        }
        goto LAB_146c4c5bc;
      }
LAB_146c4c5ab:
      HeapSortInternal<TSharedRef<IMovieSceneObjectSpawner,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_FLevelSequenceModule::GenerateObjectSpawners_::__l2::<lambda_1>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_146c4c5bc:
      ppTVar8 = ppTVar8 + -3;
    } while (&local_348 <= ppTVar8);
  }
  return;
code_r0x000146c4c459:
  local_3c8.Object = pTVar12->Object;
  local_3c8.SharedReferenceCount.ReferenceController =
       pTVar10[1].SharedReferenceCount.ReferenceController;
  if (local_3c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b8.Object = pTVar11->Object;
  local_3b8.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar4 = `FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,&local_3b8,&local_3c8);
  if (!bVar4) goto LAB_146c4c450;
LAB_146c4c4a3:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    local_3a8.Object = pTVar11->Object;
    local_3a8.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_3a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_398.Object = pTVar6->Object;
    local_398.SharedReferenceCount.ReferenceController =
         pTVar7[-1].SharedReferenceCount.ReferenceController;
    if (local_398.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = `FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,&local_398,&local_3a8);
  } while (!bVar4);
  pTVar1 = pTVar7[-1].SharedReferenceCount.ReferenceController;
  if (pTVar12 <= pTVar6) {
    pIVar2 = pTVar12->Object;
    pTVar3 = pTVar10[1].SharedReferenceCount.ReferenceController;
    pTVar12->Object = pTVar6->Object;
    pTVar10[1].SharedReferenceCount.ReferenceController = pTVar1;
    pTVar6->Object = pIVar2;
    pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
    goto LAB_146c4c450;
  }
  pIVar2 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_3d8 = local_3d8 + -1;
  pTVar11->Object = pTVar6->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar1;
  pTVar6->Object = pIVar2;
  pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar9 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar9) {
      *ppTVar8 = pTVar12;
      ppTVar8[1] = pTVar9;
      *(int *)(ppTVar8 + 2) = local_3d8;
      ppTVar8 = ppTVar8 + 3;
      local_3d0 = ppTVar8;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_146c4c5bc;
    pTVar9 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar8 = pTVar11;
      ppTVar8[1] = pTVar7 + -2;
      *(int *)(ppTVar8 + 2) = local_3d8;
      ppTVar8 = ppTVar8 + 3;
      local_3d0 = ppTVar8;
    }
    if (pTVar9 <= pTVar12) goto LAB_146c4c5bc;
  }
  iVar5 = (int)((longlong)pTVar9 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (local_3d8 == 0) goto LAB_146c4c5ab;
  goto LAB_146c4c421;
}

// IsObjectPtrEqual<ULevelSequence,UMovieSceneSequence_*,0> @ 146c4c6c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<ULevelSequence,UMovieSceneSequence_*,0>
          (TObjectPtr<ULevelSequence> *param_1,UMovieSceneSequence **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ULevelSequence *)0x0) {
    return (ULevelSequence *)*param_2 == (ULevelSequence *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (ULevelSequence *)*param_2;
}

// MutableView<TObjectPtr<ALevelSequenceActor>_> @ 146c4c6e0

TMutableView<TObjectPtr<ALevelSequenceActor>_> __cdecl
MutableView<TObjectPtr<ALevelSequenceActor>_>(TObjectPtr<ALevelSequenceActor> *param_1)

{
  TObjectPtr<ALevelSequenceActor>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<ALevelSequenceActor>_>)(ALevelSequenceActor **)param_1;
}

// NewObject<ULevelSequenceBurnInInitSettings> @ 146c4c6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelSequenceBurnInInitSettings * __cdecl
NewObject<ULevelSequenceBurnInInitSettings>
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
  pUVar1 = ULevelSequenceBurnInInitSettings::StaticClass();
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
  return (ULevelSequenceBurnInInitSettings *)pUVar2;
}

// NewObject<ULevelSequenceDirector> @ 146c4c7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelSequenceDirector * __cdecl
NewObject<ULevelSequenceDirector>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  ULevelSequenceDirector *pUVar2;
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
  pUVar1 = ULevelSequenceDirector::StaticClass();
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
  pUVar2 = (ULevelSequenceDirector *)
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

// NewObject<UMovieScene> @ 146c4c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScene * __cdecl
NewObject<UMovieScene>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieScene *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieScene *)
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

// ObjectPtrWrap<ALevelSequenceActor_*,TObjectPtr<ALevelSequenceActor>_> @ 146c4c9e0

TObjectPtr<ALevelSequenceActor> * __cdecl
ObjectPtrWrap<ALevelSequenceActor_*,TObjectPtr<ALevelSequenceActor>_>(ALevelSequenceActor **param_1)

{
  return (TObjectPtr<ALevelSequenceActor> *)param_1;
}

// RemoveAll<`FLevelSequenceModule::UnregisterObjectSpawner'::__l2::<lambda_1>_> @ 146c4d0a0

int __thiscall
TArray<TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
::RemoveAll<_FLevelSequenceModule::UnregisterObjectSpawner_::__l2::<lambda_1>_>
          (TArray<TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  atomic<unsigned___int64> aVar2;
  longlong *plVar3;
  byte bVar4;
  ulong64 *puVar5;
  ulong64 uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  byte local_res18 [8];
  int local_res20;
  undefined1 local_68 [8];
  FReadAccessScope local_60;
  
  iVar1 = this->ArrayNum;
  lVar12 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar8 = 0;
  iVar11 = 0;
  this_00 = (this->AllocatorInstance).Data;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_60);
  if ((*(int *)&((FMRSWRecursiveAccessDetector *)&this_00[0x10].field_0x0)->State == 0) ||
     (aVar2 = ((FMRSWRecursiveAccessDetector *)&this_00[8].field_0x0)->State,
     aVar2 == (atomic<unsigned___int64>)0x0)) {
    uVar6 = 0;
  }
  else {
    puVar5 = (ulong64 *)(**(code **)(*(longlong *)aVar2 + 0x40))(aVar2,local_res18);
    uVar6 = *puVar5;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  local_res18[0] = uVar6 != (param_1->InHandle).ID;
  lVar10 = 0;
  do {
    bVar4 = local_res18[0];
    iVar9 = iVar8 + 1;
    lVar10 = lVar10 + 1;
    local_res20 = iVar8;
    if (lVar10 < lVar12) {
      pFVar7 = this_00 + (lVar10 * 3 + 1) * 8;
      do {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar7 + -8),&local_60
                  );
        if ((*(int *)&pFVar7[8].field_0x0 == 0) ||
           (plVar3 = *(longlong **)&pFVar7->field_0x0, plVar3 == (longlong *)0x0)) {
          uVar6 = 0;
        }
        else {
          puVar5 = (ulong64 *)(**(code **)(*plVar3 + 0x40))(plVar3,local_68);
          uVar6 = *puVar5;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
        if ((bool)bVar4 != (uVar6 != (param_1->InHandle).ID)) break;
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 1;
        pFVar7 = pFVar7 + 0x18;
      } while (lVar10 < lVar12);
    }
    iVar8 = iVar9;
    bVar4 = local_res18[0];
    iVar9 = iVar8 - local_res20;
    if (local_res18[0] == 0) {
      DestructItems<TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>,int>
                ((TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *)(this_00 + (longlong)local_res20 * 0x18),iVar9);
    }
    else {
      if (iVar11 != local_res20) {
        memmove(this_00 + (longlong)iVar11 * 0x18,this_00 + (longlong)local_res20 * 0x18,
                (longlong)iVar9 * 0x18);
      }
      iVar11 = iVar11 + iVar9;
    }
    local_res18[0] = bVar4 ^ 1;
    if (lVar12 <= lVar10) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// `vector_deleting_destructor'`adjustor{704}' @ 146c4f848

/* [thunk]:public: virtual void * __ptr64 __cdecl ALevelSequenceActor::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ALevelSequenceActor::_vector_deleting_destructor__adjustor_704__
          (ALevelSequenceActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ALevelSequenceActor *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{712}' @ 146c4f85c

/* [thunk]:public: virtual void * __ptr64 __cdecl ALevelSequenceActor::`vector deleting
   destructor'`adjustor{712}' (unsigned int) __ptr64 */

void * __thiscall
ALevelSequenceActor::_vector_deleting_destructor__adjustor_712__
          (ALevelSequenceActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ALevelSequenceActor *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{720}' @ 146c4f870

/* [thunk]:public: virtual void * __ptr64 __cdecl ALevelSequenceActor::`vector deleting
   destructor'`adjustor{720}' (unsigned int) __ptr64 */

void * __thiscall
ALevelSequenceActor::_vector_deleting_destructor__adjustor_720__
          (ALevelSequenceActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ALevelSequenceActor *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146c4f884

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ALevelSequenceMediaController::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ALevelSequenceMediaController::_vector_deleting_destructor__adjustor_704__
          (ALevelSequenceMediaController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ALevelSequenceMediaController *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146c4f898

/* [thunk]:public: virtual void * __ptr64 __cdecl AReplicatedLevelSequenceActor::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AReplicatedLevelSequenceActor::_vector_deleting_destructor__adjustor_704__
          (AReplicatedLevelSequenceActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AReplicatedLevelSequenceActor *)&this[-1].field_0xa8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{712}' @ 146c4f8ac

/* [thunk]:public: virtual void * __ptr64 __cdecl AReplicatedLevelSequenceActor::`vector deleting
   destructor'`adjustor{712}' (unsigned int) __ptr64 */

void * __thiscall
AReplicatedLevelSequenceActor::_vector_deleting_destructor__adjustor_712__
          (AReplicatedLevelSequenceActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AReplicatedLevelSequenceActor *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{720}' @ 146c4f8c0

/* [thunk]:public: virtual void * __ptr64 __cdecl AReplicatedLevelSequenceActor::`vector deleting
   destructor'`adjustor{720}' (unsigned int) __ptr64 */

void * __thiscall
AReplicatedLevelSequenceActor::_vector_deleting_destructor__adjustor_720__
          (AReplicatedLevelSequenceActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AReplicatedLevelSequenceActor *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146c4f8d4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UDefaultLevelSequenceInstanceData::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDefaultLevelSequenceInstanceData::_vector_deleting_destructor__adjustor_40__
          (UDefaultLevelSequenceInstanceData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDefaultLevelSequenceInstanceData *)
                      (this[-1].TransformOrigin.Translation.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 146c4f8e4

/* [thunk]:public: virtual void * __ptr64 __cdecl ULegacyLevelSequenceDirectorBlueprint::`vector
   deleting destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
ULegacyLevelSequenceDirectorBlueprint::_vector_deleting_destructor__adjustor_80__
          (ULegacyLevelSequenceDirectorBlueprint *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULegacyLevelSequenceDirectorBlueprint *)&this[-1].field_0x58,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{112}' @ 146c4f8f4

/* [thunk]:public: virtual void * __ptr64 __cdecl ULevelSequence::`vector deleting
   destructor'`adjustor{112}' (unsigned int) __ptr64 */

void * __thiscall
ULevelSequence::_vector_deleting_destructor__adjustor_112__(ULevelSequence *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULevelSequence *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{432}' @ 146c4f904

/* [thunk]:public: virtual void * __ptr64 __cdecl ULevelSequenceBurnIn::`vector deleting
   destructor'`adjustor{432}' (unsigned int) __ptr64 */

void * __thiscall
ULevelSequenceBurnIn::_vector_deleting_destructor__adjustor_432__
          (ULevelSequenceBurnIn *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULevelSequenceBurnIn *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146c4f918

/* [thunk]:public: virtual void * __ptr64 __cdecl ULevelSequenceBurnIn::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULevelSequenceBurnIn::_vector_deleting_destructor__adjustor_40__
          (ULevelSequenceBurnIn *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULevelSequenceBurnIn *)
                      &this[-1].FrameInformation.CameraComponent.SoftObjectPtr.field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{536}' @ 146c4f928

/* [thunk]:public: virtual void * __ptr64 __cdecl ULevelSequencePlayer::`vector deleting
   destructor'`adjustor{536}' (unsigned int) __ptr64 */

void * __thiscall
ULevelSequencePlayer::_vector_deleting_destructor__adjustor_536__
          (ULevelSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULevelSequencePlayer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146c4f93c

/* [thunk]:public: virtual void * __ptr64 __cdecl ULevelSequencePlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULevelSequencePlayer::_vector_deleting_destructor__adjustor_40__
          (ULevelSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULevelSequencePlayer *)&this[-1].WeakStreamingWorld,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146c4f950

void * __thiscall
IBaseDelegateInstance<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4f980

void * __thiscall
IBaseDelegateInstance<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4f9b0

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4f9e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULevelSequenceBurnIn,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULevelSequenceBurnIn,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fa10

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fa40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fa70

void * __thiscall
UE::UniversalObjectLocator::TFragmentPayload<FActorLocatorFragment>::_scalar_deleting_destructor_
          (TFragmentPayload<FActorLocatorFragment> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IFragmentPayload_UniversalObjectLocator_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fab0

void * __thiscall
UE::UniversalObjectLocator::TFragmentPayload<FAnimInstanceLocatorFragment>::
_scalar_deleting_destructor_(TFragmentPayload<FAnimInstanceLocatorFragment> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IFragmentPayload_UniversalObjectLocator_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4faf0

void * __thiscall
UE::UniversalObjectLocator::TFragmentPayload<FLegacyLazyObjectPtrFragment>::
_scalar_deleting_destructor_(TFragmentPayload<FLegacyLazyObjectPtrFragment> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IFragmentPayload_UniversalObjectLocator_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fb30

void * __thiscall
UE::MovieScene::TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::FCameraCutPlaybackCapability_*>
::_scalar_deleting_destructor_
          (TPlaybackCapabilityDebuggingTypedPtr<UE::MovieScene::FCameraCutPlaybackCapability_*>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IPlaybackCapabilityDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fb70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLevelSequenceActorSpawner,SharedPointerInternals::DefaultDeleter<FLevelSequenceActorSpawner>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLevelSequenceActorSpawner,SharedPointerInternals::DefaultDeleter<FLevelSequenceActorSpawner>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fbb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLevelSequenceSpawnRegister,SharedPointerInternals::DefaultDeleter<FLevelSequenceSpawnRegister>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLevelSequenceSpawnRegister,SharedPointerInternals::DefaultDeleter<FLevelSequenceSpawnRegister>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fbf0

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
ALevelSequenceActor::_scalar_deleting_destructor_(ALevelSequenceActor *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7IWorldPartitionObjectResolver__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneBindingOwnerInterface__6B_;
  this->_padding_ = (longlong)&___7IMovieScenePlaybackClient__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x368);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fc80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
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
ALevelSequenceMediaController::_scalar_deleting_destructor_
          (ALevelSequenceMediaController *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7IMovieSceneCustomClockSource__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fcf0

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
AReplicatedLevelSequenceActor::_scalar_deleting_destructor_
          (AReplicatedLevelSequenceActor *this,uint param_1)

{
  *(undefined ***)this = &ALevelSequenceActor::_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2d0 = &___7IWorldPartitionObjectResolver__6B_;
  *(undefined ***)&this->field_0x2c8 = &___7IMovieSceneBindingOwnerInterface__6B_;
  *(undefined ***)&this->field_0x2c0 = &___7IMovieScenePlaybackClient__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x368);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fd80

void * __thiscall
FLevelSequenceActorSpawner::_scalar_deleting_destructor_
          (FLevelSequenceActorSpawner *this,uint param_1)

{
  *this = (FLevelSequenceActorSpawner)&___7IMovieSceneObjectSpawner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fdc0

void * __thiscall
FLevelSequenceSpawnRegister::_scalar_deleting_destructor_
          (FLevelSequenceSpawnRegister *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLevelSequenceSpawnRegister__6B_;
  DestructItems<TSharedRef<IMovieSceneObjectSpawner,1>,int>
            ((TSharedRef<IMovieSceneObjectSpawner,1> *)
             (this->MovieSceneObjectSpawners).AllocatorInstance.Data,
             (this->MovieSceneObjectSpawners).ArrayNum);
  pFVar1 = (this->MovieSceneObjectSpawners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMovieSceneSpawnRegister::~FMovieSceneSpawnRegister((FMovieSceneSpawnRegister *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fe30

void * __thiscall
IMovieSceneBindingOwnerInterface::_scalar_deleting_destructor_
          (IMovieSceneBindingOwnerInterface *this,uint param_1)

{
  *this = (IMovieSceneBindingOwnerInterface)&___7IMovieSceneBindingOwnerInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fe70

void * __thiscall
IMovieSceneCustomClockSource::_scalar_deleting_destructor_
          (IMovieSceneCustomClockSource *this,uint param_1)

{
  *this = (IMovieSceneCustomClockSource)&___7IMovieSceneCustomClockSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4feb0

void * __thiscall
IMovieSceneObjectSpawner::_scalar_deleting_destructor_(IMovieSceneObjectSpawner *this,uint param_1)

{
  *this = (IMovieSceneObjectSpawner)&___7IMovieSceneObjectSpawner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4fef0

void * __thiscall
IMovieScenePlaybackClient::_scalar_deleting_destructor_
          (IMovieScenePlaybackClient *this,uint param_1)

{
  *this = (IMovieScenePlaybackClient)&___7IMovieScenePlaybackClient__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4ff30

void * __thiscall
IMovieSceneTransformOrigin::_scalar_deleting_destructor_
          (IMovieSceneTransformOrigin *this,uint param_1)

{
  *this = (IMovieSceneTransformOrigin)&___7IMovieSceneTransformOrigin__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4ff70

void * __thiscall
IWorldPartitionObjectResolver::_scalar_deleting_destructor_
          (IWorldPartitionObjectResolver *this,uint param_1)

{
  *this = (IWorldPartitionObjectResolver)&___7IWorldPartitionObjectResolver__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c4ffb0

void * __thiscall
UAnimSequenceLevelSequenceLink::_scalar_deleting_destructor_
          (UAnimSequenceLevelSequenceLink *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimSequenceLevelSequenceLink__6B_;
  pFVar1 = (this->PathToLevelSequence).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c50020

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
UDefaultLevelSequenceInstanceData::_scalar_deleting_destructor_
          (UDefaultLevelSequenceInstanceData *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneTransformOrigin__6B_;
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

// `scalar_deleting_destructor' @ 146c50090

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
ULegacyLevelSequenceDirectorBlueprint::_scalar_deleting_destructor_
          (ULegacyLevelSequenceDirectorBlueprint *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  UBlueprint::~UBlueprint((UBlueprint *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c50100

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall ULevelSequence::_scalar_deleting_destructor_(ULevelSequence *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSequence__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneBindingReference,int>
            (*(FMovieSceneBindingReference **)&this->BindingReferences,
             *(int *)&(this->BindingReferences).field_0x8);
  if (*(void **)&this->BindingReferences != (void *)0x0) {
    FMemory::Free(*(void **)&this->BindingReferences);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c501b0

void * __thiscall
ULevelSequenceAnimSequenceLink::_scalar_deleting_destructor_
          (ULevelSequenceAnimSequenceLink *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULevelSequenceAnimSequenceLink__6B_;
  DestructItems<FLevelSequenceAnimSequenceLinkItem,int>
            ((FLevelSequenceAnimSequenceLinkItem *)(this->AnimSequenceLinks).AllocatorInstance.Data,
             (this->AnimSequenceLinks).ArrayNum);
  pFVar1 = (this->AnimSequenceLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c50230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
ULevelSequenceBurnIn::_scalar_deleting_destructor_(ULevelSequenceBurnIn *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7ULevelSequenceBurnIn__6B_;
  pvVar1 = *(void **)&(this->FrameInformation).CameraComponent.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->FrameInformation).SourceTimecode.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FrameInformation).CurrentShotName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FrameInformation).RootName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UUserWidget::~UUserWidget((UUserWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c502f0

void * __thiscall
ULevelSequenceBurnInInitSettings::_scalar_deleting_destructor_
          (ULevelSequenceBurnInInitSettings *this,uint param_1)

{
  *(undefined ***)this = &___7ULevelSequenceBurnInInitSettings__6B_;
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

// `scalar_deleting_destructor' @ 146c50350

void * __thiscall
ULevelSequenceBurnInOptions::_scalar_deleting_destructor_
          (ULevelSequenceBurnInOptions *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULevelSequenceBurnInOptions__6B_;
  pvVar1 = *(void **)&(this->BurnInClass).field_0x10;
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

// `scalar_deleting_destructor' @ 146c503c0

void * __thiscall
ULevelSequenceDirector::_scalar_deleting_destructor_(ULevelSequenceDirector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULevelSequenceDirector__6B_;
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

// `scalar_deleting_destructor' @ 146c50420

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
ULevelSequencePlayer::_scalar_deleting_destructor_(ULevelSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  this->_padding_ = (longlong)&___7ULevelSequencePlayer__6B_;
  if ((this->PreviousSnapshot).bIsSet != false) {
    pvVar1 = *(void **)&(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.field_0x18
    ;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pFVar2 = (this->PreviousSnapshot).TypedValue.SourceTimecode.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this->PreviousSnapshot).TypedValue.CurrentShotName.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this->PreviousSnapshot).TypedValue.RootName.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  pvVar1 = *(void **)&(this->OnCameraCut).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCameraCut);
  UMovieSceneSequencePlayer::~UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c50530

void * __thiscall
ULevelSequenceProjectSettings::_scalar_deleting_destructor_
          (ULevelSequenceProjectSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULevelSequenceProjectSettings__6B_;
  pFVar1 = (this->DefaultTickResolution).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultDisplayRate).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c505b0

void * __thiscall
ULevelSequenceShotMetaDataLibrary::_scalar_deleting_destructor_
          (ULevelSequenceShotMetaDataLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7ULevelSequenceShotMetaDataLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeAnimSequenceLevelSequenceLink @ 146c52660

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSequenceLevelSequenceLink(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDefaultLevelSequenceInstanceData @ 146c52670

void __cdecl EmptyLinkFunctionForGeneratedCodeDefaultLevelSequenceInstanceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLegacyLazyObjectPtrFragment @ 146c52680

void __cdecl EmptyLinkFunctionForGeneratedCodeLegacyLazyObjectPtrFragment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequence @ 146c52690

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequence(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceActor @ 146c526a0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceAnimSequenceLink @ 146c526b0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceAnimSequenceLink(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceBindingReference @ 146c526c0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceBindingReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceBurnIn @ 146c526d0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceBurnIn(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceCameraSettings @ 146c526e0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceCameraSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceDirector @ 146c526f0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceDirector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceLegacyObjectReference @ 146c52700

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceLegacyObjectReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceObject @ 146c52710

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequencePlayer @ 146c52720

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequencePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceProjectSettings @ 146c52730

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceProjectSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequenceShotMetaDataLibrary @ 146c52740

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequenceShotMetaDataLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelSequence_init @ 146c52750

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelSequence_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSequenceMediaController @ 146c52760

void __cdecl EmptyLinkFunctionForGeneratedCodeSequenceMediaController(void)

{
  return;
}

// FOnLevelSequencePlayerCameraCutEvent_DelegateWrapper @ 146c52d00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
FOnLevelSequencePlayerCameraCutEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UCameraComponent *param_2)

{
  UCameraComponent *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FindActorBySequenceName @ 146c52d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __cdecl `anonymous_namespace'::FindActorBySequenceName(FString *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  AActor *pAVar5;
  longlong lVar6;
  int iVar7;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  FName local_res18;
  uint local_res20;
  FString local_48;
  
  bVar11 = false;
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
  pTVar8 = UWorld::GetLevels(param_2);
  local_res20 = pTVar8->ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  pFVar13 = (pTVar8->AllocatorInstance).Data;
  pFVar1 = pFVar13 + uVar10 * 8;
  do {
    if (pTVar8->ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (pFVar13 == pFVar1) {
      return (AActor *)0x0;
    }
    lVar4 = *(longlong *)pFVar13;
    if (lVar4 != 0) {
      plVar12 = *(longlong **)(lVar4 + 0xa0);
      iVar3 = *(int *)(lVar4 + 0xa8);
      plVar2 = plVar12 + iVar3;
      while( true ) {
        if (*(int *)(lVar4 + 0xa8) != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res18);
        }
        if (plVar12 == plVar2) break;
        pAVar5 = (AActor *)*plVar12;
        if (pAVar5 != (AActor *)0x0) {
          pUVar9 = ALevelSequenceActor::StaticClass();
          iVar7 = (int)pUVar9->_padding_;
          if ((iVar7 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
              &pUVar9->_padding_)) {
            lVar6 = pAVar5[1].PrimaryActorTick._padding_;
            if (lVar6 == 0) {
LAB_146c52e64:
              bVar14 = false;
            }
            else {
              local_res18 = *(FName *)(lVar6 + 0x18);
              bVar11 = true;
              ::FName::ToString(&local_res18,&local_48);
              iVar7 = (param_1->Data).ArrayNum;
              if (local_48.Data.ArrayNum == iVar7) {
                if (1 < local_48.Data.ArrayNum) {
                  iVar7 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                                     (wchar_t *)(param_1->Data).AllocatorInstance.Data);
                  bVar14 = iVar7 == 0;
                  goto LAB_146c52e59;
                }
              }
              else {
                bVar14 = local_48.Data.ArrayNum + iVar7 == 1;
LAB_146c52e59:
                if (!bVar14) goto LAB_146c52e64;
              }
              bVar14 = true;
            }
            if ((bVar11) &&
               (bVar11 = false,
               local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (bVar14) {
              return pAVar5;
            }
          }
        }
        plVar12 = plVar12 + 1;
      }
    }
    pFVar13 = pFVar13 + 8;
    uVar10 = (ulonglong)local_res20;
  } while( true );
}

// GetLevelSequencePlayers @ 146c54780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__cdecl `anonymous_namespace'::GetLevelSequencePlayers
                  (TArray<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,UWorld *param_1,wchar_t **param_2,FOutputDevice *param_3)

{
  void *_Src;
  ULevelSequencePlayer *pUVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  ALevelSequenceActor *this;
  UClass *pUVar7;
  TArray<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  FWeakObjectPtr local_78;
  ULevelSequencePlayer *local_70;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  FParse::Token(&local_48,param_2,false);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_48,&local_68,L",",true);
  iVar4 = local_68.ArrayNum;
  pFVar10 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x10;
  FVar11.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if (local_68.ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar11.Data == pFVar10) break;
    local_58.Data.ArrayNum = *(int *)(FVar11.Data + 8);
    lVar9 = (longlong)local_58.Data.ArrayNum;
    _Src = *(void **)FVar11.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
    }
    this = (ALevelSequenceActor *)FindActorBySequenceName(&local_58,local_res10);
    if (this != (ALevelSequenceActor *)0x0) {
      pUVar7 = ALevelSequenceActor::StaticClass();
      iVar6 = (int)pUVar7->_padding_;
      if ((iVar6 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8)
          == &pUVar7->_padding_)) {
        pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
        if (pUVar1 == (ULevelSequencePlayer *)0x0) {
          ALevelSequenceActor::InitializePlayer(this);
        }
        else {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar1);
          }
          local_78.ObjectIndex = 0;
          local_78.ObjectSerialNumber = 0;
          local_70 = pUVar1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar1);
          }
          FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_70);
          pFVar2 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar2 <= &local_78) && (&local_78 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TArray<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar3)();
              return pTVar8;
            }
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == __return_storage_ptr__->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          *(FWeakObjectPtr *)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
        }
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar11.Data = FVar11.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLevelStreaming @ 146c54a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULevelStreaming * __cdecl GetLevelStreaming(FName *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString *this;
  FScriptContainerElement *pFVar5;
  ULevelStreaming *this_00;
  ULevelStreaming *pUVar6;
  int iVar7;
  undefined4 local_res8 [2];
  FString local_48;
  FString local_38;
  
  local_res8[0] = 0;
  if (*param_1 == (FName)0x0) {
    return (ULevelStreaming *)0x0;
  }
  FName::ToString(param_1,&local_48);
  bVar4 = FPackageName::IsShortPackageName(&local_48);
  if (bVar4) {
    FString::InsertAt(&local_48,0,L'/');
  }
  pFVar5 = (param_2->StreamingLevels).AllocatorInstance.Data;
  iVar2 = (param_2->StreamingLevels).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  pUVar6 = (ULevelStreaming *)0x0;
  while( true ) {
    if ((param_2->StreamingLevels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    this_00 = (ULevelStreaming *)0x0;
    if (pFVar5 == pFVar1) break;
    this_00 = *(ULevelStreaming **)pFVar5;
    if (this_00 == (ULevelStreaming *)0x0) {
LAB_146c54b27:
      bVar4 = false;
    }
    else {
      pUVar6 = (ULevelStreaming *)&DAT_00000001;
      this = ULevelStreaming::GetWorldAssetPackageName(this_00,&local_38);
      iVar7 = local_48.Data.ArrayNum + -1;
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.ArrayNum == 0) {
        iVar7 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      bVar4 = FString::EndsWith(this,(wchar_t *)FVar3.Data,iVar7,IgnoreCase);
      if (!bVar4) goto LAB_146c54b27;
      bVar4 = true;
    }
    if ((pUVar6 != (ULevelStreaming *)0x0) &&
       (pUVar6 = (ULevelStreaming *)0x0,
       local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) break;
    pFVar5 = pFVar5 + 8;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// HandleLevelSequenceSetClockSource @ 146c565b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
`anonymous_namespace'::HandleLevelSequenceSetClockSource
          (UWorld *param_1,wchar_t **param_2,FOutputDevice *param_3)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UObject *pUVar6;
  UMovieSceneSequencePlayer *this;
  ForAnyElementType FVar7;
  FSharedReferencer<1> FVar8;
  ForAnyElementType FVar9;
  FSharedReferencer<1> FVar10;
  undefined1 local_res20 [8];
  FMovieSceneTimeController *local_138;
  FSharedReferencer<1> FStack_130;
  FString local_128;
  FWeakObjectPtr local_118;
  TArray<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_110;
  undefined8 local_100;
  FSharedReferencer<1> local_f8;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8;
  undefined8 local_e0;
  FSharedReferencer<1> local_d8;
  undefined8 local_d0;
  FSharedReferencer<1> local_c8;
  undefined8 local_c0;
  FSharedReferencer<1> local_b8;
  undefined8 local_b0;
  FSharedReferencer<1> local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  TSharedPtr<FMovieSceneTimeController,1> local_38 [2];
  
  GetLevelSequencePlayers(&local_110,param_1,param_2,param_3);
  if (local_110.ArrayNum == 0) {
    FOutputDevice::Log(param_3,L"No level sequences found.");
    bVar3 = false;
    goto LAB_146c56d85;
  }
  FParse::Token(&local_128,param_2,false);
  FStack_130.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_a0,"Tick");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar9.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar7.Data = local_128.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,(wchar_t *)FVar9.Data);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (iVar5 == 0) {
    local_f8.ReferenceController = ::operator_new(0x40);
    if (local_f8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_f8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_138 = (FMovieSceneTimeController *)&DAT_00000010;
    }
    else {
      (local_f8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      local_138 = (FMovieSceneTimeController *)(local_f8.ReferenceController + 1);
      (local_f8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_f8.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_Tick___00_SharedPointerInternals__6B_
      ;
      local_f8.ReferenceController[1]._padding_ = (longlong)&___7FMovieSceneTimeController_Tick__6B_
      ;
      *(undefined1 *)&local_f8.ReferenceController[2].SharedReferenceCount = 0;
      local_f8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
      *(undefined4 *)&local_f8.ReferenceController[3]._padding_ = 1;
      local_f8.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      local_f8.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      if (local_138 == (FMovieSceneTimeController *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      LOCK();
      (local_f8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar10.ReferenceController = local_f8.ReferenceController;
    local_100 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_130,&local_f8);
    FVar8.ReferenceController = local_f8.ReferenceController;
LAB_146c56cb3:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    iVar5 = local_110.ArrayNum;
    FVar10.ReferenceController = FStack_130.ReferenceController;
    pFVar1 = (FWeakObjectPtr *)(local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 8)
    ;
    FVar9.Data = local_110.AllocatorInstance.Data;
    while( true ) {
      if (local_110.ArrayNum != iVar5) {
        `TCheckedPointerIterator<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((FWeakObjectPtr *)FVar9.Data == pFVar1) break;
      local_118 = *(FWeakObjectPtr *)FVar9.Data;
      pUVar6 = FWeakObjectPtr::Get(&local_118);
      if (pUVar6 != (UObject *)0x0) {
        this = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&local_118);
        local_38[0].Object = local_138;
        local_38[0].SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
        if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UMovieSceneSequencePlayer::SetTimeController(this,local_38);
      }
      FVar9.Data = FVar9.Data + 8;
    }
    bVar3 = true;
  }
  else {
    ::FString::FString(&local_90,"Audio");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar9.Data = local_90.Data.AllocatorInstance.Data;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar7.Data = local_128.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,(wchar_t *)FVar9.Data);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (iVar5 == 0) {
      local_e8.ReferenceController = ::operator_new(0x60);
      if (local_e8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_138 = (FMovieSceneTimeController *)&DAT_00000010;
      }
      else {
        (local_e8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        local_138 = (FMovieSceneTimeController *)(local_e8.ReferenceController + 1);
        (local_e8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_e8.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_AudioClock___00_SharedPointerInternals__6B_
        ;
        local_e8.ReferenceController[1]._padding_ = 0;
        local_e8.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[2]._padding_ = 0;
        local_e8.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[3]._padding_ = 0;
        local_e8.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[4]._padding_ = 0;
        local_e8.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[5]._padding_ = 0;
        local_e8.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
        *(undefined4 *)&local_e8.ReferenceController[3]._padding_ = 1;
        local_e8.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        local_e8.ReferenceController[1]._padding_ =
             (longlong)&___7FMovieSceneTimeController_AudioClock__6B_;
        if (local_138 == (FMovieSceneTimeController *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        LOCK();
        (local_e8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar10.ReferenceController = local_e8.ReferenceController;
      local_f0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_130,&local_e8);
      FVar8.ReferenceController = local_e8.ReferenceController;
      goto LAB_146c56cb3;
    }
    ::FString::FString(&local_80,"Platform");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar9.Data = local_80.Data.AllocatorInstance.Data;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar7.Data = local_128.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,(wchar_t *)FVar9.Data);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (iVar5 == 0) {
      local_d8.ReferenceController = ::operator_new(0x60);
      if (local_d8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_138 = (FMovieSceneTimeController *)&DAT_00000010;
      }
      else {
        (local_d8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        local_138 = (FMovieSceneTimeController *)(local_d8.ReferenceController + 1);
        (local_d8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_d8.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_PlatformClock___00_SharedPointerInternals__6B_
        ;
        local_d8.ReferenceController[1]._padding_ = 0;
        local_d8.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[2]._padding_ = 0;
        local_d8.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[3]._padding_ = 0;
        local_d8.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[4]._padding_ = 0;
        local_d8.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[5]._padding_ = 0;
        local_d8.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
        *(undefined4 *)&local_d8.ReferenceController[3]._padding_ = 1;
        local_d8.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        local_d8.ReferenceController[1]._padding_ =
             (longlong)&___7FMovieSceneTimeController_PlatformClock__6B_;
        if (local_138 == (FMovieSceneTimeController *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        LOCK();
        (local_d8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_d8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar10.ReferenceController = local_d8.ReferenceController;
      local_e0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_130,&local_d8);
      FVar8.ReferenceController = local_d8.ReferenceController;
      goto LAB_146c56cb3;
    }
    ::FString::FString(&local_70,"RelativeTimecode");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar9.Data = local_70.Data.AllocatorInstance.Data;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar7.Data = local_128.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,(wchar_t *)FVar9.Data);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (iVar5 == 0) {
      local_c8.ReferenceController = ::operator_new(0x88);
      if (local_c8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_138 = (FMovieSceneTimeController *)&DAT_00000010;
      }
      else {
        (local_c8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        local_138 = (FMovieSceneTimeController *)(local_c8.ReferenceController + 1);
        (local_c8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_c8.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_RelativeTimecodeClock___00_SharedPointerInternals__6B_
        ;
        local_c8.ReferenceController[1]._padding_ = 0;
        local_c8.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[2]._padding_ = 0;
        local_c8.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[3]._padding_ = 0;
        local_c8.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[4]._padding_ = 0;
        local_c8.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[5]._padding_ = 0;
        local_c8.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[6]._padding_ = 0;
        local_c8.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[7]._padding_ = 0;
        local_c8.ReferenceController[7].SharedReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[7].WeakReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
        *(undefined4 *)&local_c8.ReferenceController[3]._padding_ = 1;
        local_c8.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        local_c8.ReferenceController[1]._padding_ =
             (longlong)&___7FMovieSceneTimeController_RelativeTimecodeClock__6B_;
        *(undefined1 *)&local_c8.ReferenceController[6].SharedReferenceCount = 0;
        *(undefined1 *)&local_c8.ReferenceController[7].SharedReferenceCount = 0;
        local_c8.ReferenceController[8]._padding_ = 0;
        if (local_138 == (FMovieSceneTimeController *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        LOCK();
        (local_c8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar10.ReferenceController = local_c8.ReferenceController;
      local_d0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_130,&local_c8);
      FVar8.ReferenceController = local_c8.ReferenceController;
      goto LAB_146c56cb3;
    }
    ::FString::FString(&local_60,"Timecode");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar9.Data = local_60.Data.AllocatorInstance.Data;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar7.Data = local_128.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,(wchar_t *)FVar9.Data);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (iVar5 == 0) {
      local_b8.ReferenceController = ::operator_new(0x38);
      if (local_b8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_138 = (FMovieSceneTimeController *)&DAT_00000010;
      }
      else {
        (local_b8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        local_138 = (FMovieSceneTimeController *)(local_b8.ReferenceController + 1);
        (local_b8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_b8.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_TimecodeClock___00_SharedPointerInternals__6B_
        ;
        local_b8.ReferenceController[1]._padding_ = 0;
        local_b8.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
        local_b8.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
        local_b8.ReferenceController[2]._padding_ = 0;
        local_b8.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
        local_b8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
        local_b8.ReferenceController[3]._padding_ = 0;
        local_b8.ReferenceController[1]._padding_ =
             (longlong)&___7FMovieSceneTimeController_TimecodeClock__6B_;
        local_b8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
        *(undefined4 *)&local_b8.ReferenceController[3]._padding_ = 1;
        if (local_138 == (FMovieSceneTimeController *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        LOCK();
        (local_b8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_b8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar10.ReferenceController = local_b8.ReferenceController;
      local_c0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_130,&local_b8);
      FVar8.ReferenceController = local_b8.ReferenceController;
      goto LAB_146c56cb3;
    }
    ::FString::FString(&local_50,"PlayEveryFrame");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar9.Data = local_50.Data.AllocatorInstance.Data;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar7.Data = local_128.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,(wchar_t *)FVar9.Data);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (iVar5 == 0) {
      local_a8.ReferenceController = ::operator_new(0x48);
      if (local_a8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_138 = (FMovieSceneTimeController *)&DAT_00000010;
      }
      else {
        (local_a8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        local_138 = (FMovieSceneTimeController *)(local_a8.ReferenceController + 1);
        (local_a8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (local_a8.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_PlayEveryFrame___00_SharedPointerInternals__6B_
        ;
        local_a8.ReferenceController[1]._padding_ =
             (longlong)&___7FMovieSceneTimeController_PlayEveryFrame__6B_;
        *(undefined1 *)&local_a8.ReferenceController[2].SharedReferenceCount = 0;
        local_a8.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
        *(undefined4 *)&local_a8.ReferenceController[3]._padding_ = 1;
        local_a8.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        local_a8.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        local_a8.ReferenceController[4]._padding_ = 0;
        if (local_138 == (FMovieSceneTimeController *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        LOCK();
        (local_a8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_a8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar10.ReferenceController = local_a8.ReferenceController;
      local_b0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_130,&local_a8);
      FVar8.ReferenceController = local_a8.ReferenceController;
      goto LAB_146c56cb3;
    }
    FOutputDevice::Log(param_3,
                       L"Unknown clock source. Valid clock sources are: Tick, Audio, Platform, RelativeTimecode, Timecode, PlayEveryFrame"
                      );
    bVar3 = false;
    FVar10.ReferenceController = FStack_130.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
LAB_146c56d85:
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return bVar3;
}

// ResolveByPath @ 146c59d90

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl ResolveByPath(UObject *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  TStringView<wchar_t> local_18;
  
  bVar1 = UE::IsSavingPackage((UObject *)0x0);
  if (bVar1) {
    return (UObject *)0x0;
  }
  if (GIsGarbageCollecting != false) {
    return (UObject *)0x0;
  }
  if ((param_2->Data).ArrayNum < 2) {
    return (UObject *)0x0;
  }
  local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  local_18.Size = 0;
  if ((FScriptContainerElement *)local_18.DataPtr != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(local_18.DataPtr);
    local_18.Size = (int)sVar3;
  }
  pUVar4 = Z_Construct_UClass_UObject_NoRegister();
  pUVar5 = StaticFindObject(pUVar4,param_1,&local_18,None);
  if (pUVar5 != (UObject *)0x0) {
    return pUVar5;
  }
  if ((param_2->Data).ArrayNum == 0) {
    local_18.DataPtr = L"";
  }
  else {
    local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar2 = 0;
    if ((FScriptContainerElement *)local_18.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_146c59e2a;
  }
  sVar3 = wcslen(local_18.DataPtr);
  iVar2 = (int)sVar3;
LAB_146c59e2a:
  local_18.Size = iVar2;
  pUVar4 = Z_Construct_UClass_UObject_NoRegister();
  pUVar5 = StaticFindFirstObject(pUVar4,&local_18,NativeFirst,NoLogging,(wchar_t *)0x0);
  if (pUVar5 == (UObject *)0x0) {
    return (UObject *)0x0;
  }
  return pUVar5;
}

// Z_Construct_UClass_ALevelSequenceMediaController_NoRegister @ 146c5da10

UClass * __cdecl Z_Construct_UClass_ALevelSequenceMediaController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelSequenceMediaController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceMediaController",
               &Z_Registration_Info_UClass_ALevelSequenceMediaController.InnerSingleton,
               ALevelSequenceMediaController::StaticRegisterNativesALevelSequenceMediaController,
               0x2e8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelSequenceMediaController>,
               InternalVTableHelperCtorCaller<ALevelSequenceMediaController>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelSequenceMediaController.InnerSingleton;
}

// Z_Construct_UClass_AReplicatedLevelSequenceActor_NoRegister @ 146c5dad0

UClass * __cdecl Z_Construct_UClass_AReplicatedLevelSequenceActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"ReplicatedLevelSequenceActor",
               &Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.InnerSingleton,
               AReplicatedLevelSequenceActor::StaticRegisterNativesAReplicatedLevelSequenceActor,
               0x368,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AReplicatedLevelSequenceActor>,
               InternalVTableHelperCtorCaller<AReplicatedLevelSequenceActor>,local_res8,
               ALevelSequenceActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.InnerSingleton;
}

// Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister @ 146c5db90

UClass * __cdecl Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"AnimSequenceLevelSequenceLink",
               &Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.InnerSingleton,
               UAnimSequenceLevelSequenceLink::StaticRegisterNativesUAnimSequenceLevelSequenceLink,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSequenceLevelSequenceLink>,
               InternalVTableHelperCtorCaller<UAnimSequenceLevelSequenceLink>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.InnerSingleton;
}

// Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister @ 146c5dc50

UClass * __cdecl Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"DefaultLevelSequenceInstanceData",
               &Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.InnerSingleton,
               UDefaultLevelSequenceInstanceData::
               StaticRegisterNativesUDefaultLevelSequenceInstanceData,0xa0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDefaultLevelSequenceInstanceData>,
               InternalVTableHelperCtorCaller<UDefaultLevelSequenceInstanceData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.InnerSingleton;
}

// Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister @ 146c5dd00

UClass * __cdecl Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LegacyLevelSequenceDirectorBlueprint",
               &Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.InnerSingleton,
               ULegacyLevelSequenceDirectorBlueprint::
               StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULegacyLevelSequenceDirectorBlueprint>,
               InternalVTableHelperCtorCaller<ULegacyLevelSequenceDirectorBlueprint>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.InnerSingleton;
}

// Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister @ 146c5ddc0

UClass * __cdecl Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceAnimSequenceLink",
               &Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.InnerSingleton,
               ULevelSequenceAnimSequenceLink::StaticRegisterNativesULevelSequenceAnimSequenceLink,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelSequenceAnimSequenceLink>,
               InternalVTableHelperCtorCaller<ULevelSequenceAnimSequenceLink>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.InnerSingleton;
}

// Z_Construct_UClass_ULevelSequenceDirector_NoRegister @ 146c5de80

UClass * __cdecl Z_Construct_UClass_ULevelSequenceDirector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceDirector",
               &Z_Registration_Info_UClass_ULevelSequenceDirector.InnerSingleton,
               ULevelSequenceDirector::StaticRegisterNativesULevelSequenceDirector,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceDirector>,
               InternalVTableHelperCtorCaller<ULevelSequenceDirector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceDirector.InnerSingleton;
}

// Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister @ 146c5df30

UClass * __cdecl Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceProjectSettings",
               &Z_Registration_Info_UClass_ULevelSequenceProjectSettings.InnerSingleton,
               ULevelSequenceProjectSettings::StaticRegisterNativesULevelSequenceProjectSettings,
               0x68,8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelSequenceProjectSettings>,
               InternalVTableHelperCtorCaller<ULevelSequenceProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceProjectSettings.InnerSingleton;
}

// Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary_NoRegister @ 146c5dff0

UClass * __cdecl Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceShotMetaDataLibrary",
               &Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.InnerSingleton,
               ULevelSequenceShotMetaDataLibrary::
               StaticRegisterNativesULevelSequenceShotMetaDataLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceShotMetaDataLibrary>,
               InternalVTableHelperCtorCaller<ULevelSequenceShotMetaDataLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBoundActorProxy @ 146c5e0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoundActorProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBoundActorProxy.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBoundActorProxy.InnerSingleton,
               &Z_Construct_UScriptStruct_FBoundActorProxy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBoundActorProxy.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBoundActorProxy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment @ 146c5e130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.InnerSingleton,
               &Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLevelSequenceBindingReferences @ 146c5e1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSequenceBindingReferences(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.InnerSingleton,
               &Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference @ 146c5e230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceLegacyObjectReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSequenceLegacyObjectReference.InnerSingleton
               ,&Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceLegacyObjectReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLevelSequenceLegacyObjectReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLevelSequenceObject @ 146c5e2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSequenceObject(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceObject.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSequenceObject.InnerSingleton,
               &Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceObject.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLevelSequenceObject.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap @ 146c5e330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceObjectReferenceMap.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelSequenceObjectReferenceMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceObjectReferenceMap.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLevelSequenceObjectReferenceMap.InnerSingleton;
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

// IMPLEMENT_MODULE_LevelSequence @ 146c61f90

void __cdecl IMPLEMENT_MODULE_LevelSequence(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultClockSource'' @ 1503dfb70

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultClockSource__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultClockSource);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultDisplayRate'' @ 1503dfb90

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultDisplayRate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultDisplayRate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultLockEngineToDisplayRate'' @ 1503dfbb0

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultLockEngineToDisplayRate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultLockEngineToDisplayRate)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultTickResolution'' @ 1503dfbd0

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultTickResolution__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultTickResolution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInvalidBindingTagWarnings'' @ 1503dfbf0

void __cdecl
LevelSequenceActorCVars::_dynamic_atexit_destructor_for__CVarInvalidBindingTagWarnings__(void)

{
  CVarInvalidBindingTagWarnings._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarInvalidBindingTagWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMarkSequencePlayerAsGarbageOnDestroy'' @ 1503dfc10

void __cdecl
LevelSequenceActorCVars::_dynamic_atexit_destructor_for__CVarMarkSequencePlayerAsGarbageOnDestroy__
          (void)

{
  CVarMarkSequencePlayerAsGarbageOnDestroy._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMarkSequencePlayerAsGarbageOnDestroy);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyBindings'' @ 1503dfc30

void __cdecl
`ALevelSequenceActor::FindNamedBindings'::__l2::_dynamic_atexit_destructor_for__EmptyBindings__
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

// `dynamic_atexit_destructor_for_'LogLevelSequence'' @ 1503dfc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLevelSequence__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLevelSequence);
  return;
}

