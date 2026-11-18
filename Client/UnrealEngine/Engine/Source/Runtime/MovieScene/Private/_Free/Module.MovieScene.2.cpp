// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 862

// ActiveManagers'' @ 1410858e0

void __cdecl `dynamic_initializer_for_'UMovieSceneCompiledDataManager::ActiveManagers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UMovieSceneCompiledDataManager::ActiveManagers__);
  return;
}

// `dynamic_initializer_for_'CVarAddKeepStateDeterminismFences'' @ 141085900

void __cdecl _dynamic_initializer_for__CVarAddKeepStateDeterminismFences__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAddKeepStateDeterminismFences,L"Sequencer.AddKeepStateDeterminismFences",
             local_res8,
             L"Whether the Sequencer compiler should auto-add determinism fences for the last frame of KeepState sections. This ensures that the last possible value of the section is consistently evaluated regardless of framerate, at the cost of an extra evaluation on frames that cross over KeepState sections\' end time.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAddKeepStateDeterminismFences__);
  return;
}

// `dynamic_initializer_for_'CVarMovieSceneCompilerVersion'' @ 141085950

void __cdecl _dynamic_initializer_for__CVarMovieSceneCompilerVersion__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMovieSceneCompilerVersion,L"Sequencer.CompilerVersion",&GMovieSceneCompilerVersion
             ,L"Defines a global identifer for moviescene compiler logic.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarMovieSceneCompilerVersion__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerAutoTangentInterpolation'' @ 1410859a0

void __cdecl _dynamic_initializer_for__CVarSequencerAutoTangentInterpolation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSequencerAutoTangentInterpolation,L"Sequencer.AutoTangentNew",
             &GCachedSequencerAutoTangentInterpolation,
             L"If 2 Sequencer will flatten tangents with no overshoot, if 1 Auto Tangent will use new algorithm to gradually flatten maximum/minimum keys, if 0 Auto Tangent will average all keys (pre 4.23 behavior)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerAutoTangentInterpolation__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerLinearCubicInterpolation'' @ 1410859f0

void __cdecl _dynamic_initializer_for__CVarSequencerLinearCubicInterpolation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSequencerLinearCubicInterpolation,L"Sequencer.LinearCubicInterpolation",
             &GSequencerLinearCubicInterpolation,
             L"If 1 Linear Keys Act As Cubic Interpolation with Linear Tangents, if 0 Linear Key Forces Linear Interpolation to Next Key."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerLinearCubicInterpolation__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerSmartAutoBlendLocationPercentage'' @ 141085a40

void __cdecl _dynamic_initializer_for__CVarSequencerSmartAutoBlendLocationPercentage__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.8;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSequencerSmartAutoBlendLocationPercentage,
             L"Sequencer.SmartAutoBlendLocationPercentage",local_res8,
             L"Percentage near the next value that the tangent will blend to the adjacent tangent, if over 1.0 we won\'t blend. Default to 0.8"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerSmartAutoBlendLocationPercentage__);
  return;
}

// `dynamic_initializer_for_'GBlenderSystemRegistry'' @ 141085a90

void __cdecl UE::MovieScene::_dynamic_initializer_for__GBlenderSystemRegistry__(void)

{
  atexit(_dynamic_atexit_destructor_for__GBlenderSystemRegistry__);
  return;
}

// `dynamic_initializer_for_'GChannelTypeNamesToClassTypes'' @ 141085ab0

void __cdecl UE::MovieScene::_dynamic_initializer_for__GChannelTypeNamesToClassTypes__(void)

{
  atexit(_dynamic_atexit_destructor_for__GChannelTypeNamesToClassTypes__);
  return;
}

// `dynamic_initializer_for_'GMovieSceneBuiltInComponentTypes'' @ 141085ad0

void __cdecl UE::MovieScene::_dynamic_initializer_for__GMovieSceneBuiltInComponentTypes__(void)

{
  atexit(_dynamic_atexit_destructor_for__GMovieSceneBuiltInComponentTypes__);
  return;
}

// `dynamic_initializer_for_'GMovieSceneCompilerVersion'' @ 141085af0

void __cdecl _dynamic_initializer_for__GMovieSceneCompilerVersion__(void)

{
  FString::FString(&GMovieSceneCompilerVersion,L"7D4B98092FAC4A6B964ECF72D8279EF8");
  atexit(_dynamic_atexit_destructor_for__GMovieSceneCompilerVersion__);
  return;
}

// `dynamic_initializer_for_'NAME_UMovieSceneCondition_BP_EvaluateCondition'' @ 141085b20

void __cdecl _dynamic_initializer_for__NAME_UMovieSceneCondition_BP_EvaluateCondition__(void)

{
  FName::FName(&NAME_UMovieSceneCondition_BP_EvaluateCondition,L"BP_EvaluateCondition");
  return;
}

// `dynamic_initializer_for_'NAME_UMovieSceneCondition_BP_GetCheckFrequency'' @ 141085b40

void __cdecl _dynamic_initializer_for__NAME_UMovieSceneCondition_BP_GetCheckFrequency__(void)

{
  FName::FName(&NAME_UMovieSceneCondition_BP_GetCheckFrequency,L"BP_GetCheckFrequency");
  return;
}

// `dynamic_initializer_for_'NAME_UMovieSceneCondition_BP_GetScope'' @ 141085b60

void __cdecl _dynamic_initializer_for__NAME_UMovieSceneCondition_BP_GetScope__(void)

{
  FName::FName(&NAME_UMovieSceneCondition_BP_GetScope,L"BP_GetScope");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 141085b80

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 141085c10

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 141085ca0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 141085d30

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneAudioTriggerChannel_h__Script_MovieScene_3182456846'' @ 141085dc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneAudioTriggerChannel_h__Script_MovieScene_3182456846__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneAudioTriggerChannel_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneBoolChannel_h__Script_MovieScene_3374725957'' @ 141085e00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneBoolChannel_h__Script_MovieScene_3374725957__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneBoolChannel_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneByteChannel_h__Script_MovieScene_4009445266'' @ 141085e40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneByteChannel_h__Script_MovieScene_4009445266__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneByteChannel_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h__Script_MovieScene_4216101848'' @ 141085e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h__Script_MovieScene_4216101848__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h__Script_MovieScene_4127624573'' @ 141085ec0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h__Script_MovieScene_4127624573__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelOverrideContainer_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannel_h__Script_MovieScene_803498306'' @ 141085f00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannel_h__Script_MovieScene_803498306__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannel_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneCurveChannelCommon_h__Script_MovieScene_2805602040'' @ 141085f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneCurveChannelCommon_h__Script_MovieScene_2805602040__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneCurveChannelCommon_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneDoubleChannel_h__Script_MovieScene_386527563'' @ 141085f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneDoubleChannel_h__Script_MovieScene_386527563__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneDoubleChannel_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneFloatChannel_h__Script_MovieScene_3871709832'' @ 141085fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneFloatChannel_h__Script_MovieScene_3871709832__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneFloatChannel_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneIntegerChannel_h__Script_MovieScene_2960524865'' @ 141086000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneIntegerChannel_h__Script_MovieScene_2960524865__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneIntegerChannel_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h__Script_MovieScene_1340516533'' @ 141086040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h__Script_MovieScene_1340516533__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneSectionChannelOverrideRegistry_h__Script_MovieScene_2464871367'' @ 141086080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneSectionChannelOverrideRegistry_h__Script_MovieScene_2464871367__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneSectionChannelOverrideRegistry_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneTimeWarpChannel_h__Script_MovieScene_1349458506'' @ 1410860c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneTimeWarpChannel_h__Script_MovieScene_1349458506__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneTimeWarpChannel_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h__Script_MovieScene_2230238992'' @ 141086100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h__Script_MovieScene_2230238992__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h__Script_MovieScene_989103805'' @ 141086140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h__Script_MovieScene_989103805__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h__Script_MovieScene_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h__Script_MovieScene_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h__Script_MovieScene_3978313542'' @ 141086190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h__Script_MovieScene_3978313542__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h__Script_MovieScene_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h__Script_MovieScene_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h__Script_MovieScene_3487336739'' @ 1410861e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h__Script_MovieScene_3487336739__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h__Script_MovieScene_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h__Script_MovieScene_1081843766'' @ 141086230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h__Script_MovieScene_1081843766__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h__Script_MovieScene_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneDecorationContainer_h__Script_MovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneLanguagePreviewDecoration_h__Script_MovieScene_3699153315'' @ 141086280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneLanguagePreviewDecoration_h__Script_MovieScene_3699153315__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneLanguagePreviewDecoration_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h__Script_MovieScene_1772837294'' @ 1410862c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h__Script_MovieScene_1772837294__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneMuteSoloDecoration_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h__Script_MovieScene_3331027098'' @ 141086300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h__Script_MovieScene_3331027098__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h__Script_MovieScene_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneScalingAnchors_h__Script_MovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h__Script_MovieScene_2427803390'' @ 141086350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h__Script_MovieScene_2427803390__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneSectionAnchorsDecoration_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h__Script_MovieScene_1864345371'' @ 141086390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h__Script_MovieScene_1864345371__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTimeWarpDecoration_h__Script_MovieScene_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h__Script_MovieScene_1664038355'' @ 1410863d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h__Script_MovieScene_1664038355__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Decorations_MovieSceneTrackRowDecoration_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h__Script_MovieScene_2958997760'' @ 141086410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h__Script_MovieScene_2958997760__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h__Script_MovieScene_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h__Script_MovieScene_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_BuiltInComponentTypes_h__Script_MovieScene_2691418295'' @ 141086460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_BuiltInComponentTypes_h__Script_MovieScene_2691418295__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_BuiltInComponentTypes_h__Script_MovieScene_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h__Script_MovieScene_36507098'' @ 1410864a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h__Script_MovieScene_36507098__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h__Script_MovieScene_2499184873'' @ 1410864e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h__Script_MovieScene_2499184873__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h__Script_MovieScene_4266548127'' @ 141086520

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h__Script_MovieScene_4266548127__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h__Script_MovieScene_3236999777'' @ 141086560

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h__Script_MovieScene_3236999777__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h__Script_MovieScene_1682407290'' @ 1410865a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h__Script_MovieScene_1682407290__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h__Script_MovieScene_4285303036'' @ 1410865e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h__Script_MovieScene_4285303036__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieScene",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h__Script_MovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// NewStructOps @ 14605efd0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneDoubleValue,&UE::CoreUObject::Private::Construct<FMovieSceneDoubleValue>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneDoubleValue>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneDoubleValue>,&UE::CoreUObject::Private::Identical<FMovieSceneDoubleValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasDefaultValue_SetBit @ 14605f010

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_bHasDefaultValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewStructOps @ 14605f020

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneDoubleChannel,&UE::CoreUObject::Private::Construct<FMovieSceneDoubleChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneDoubleChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneDoubleChannel>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneDoubleChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneDoubleChannel>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneDoubleChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FMovieSceneChannel @ 14605f060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneChannel.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneChannel.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap @ 14605f0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneKeyHandleMap.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneKeyHandleMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneKeyHandleMap.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneKeyHandleMap.InnerSingleton;
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

// NewStructOps @ 14605f160

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneAudioTriggerChannel,&UE::CoreUObject::Private::Construct<FMovieSceneAudioTriggerChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneAudioTriggerChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneAudioTriggerChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneAudioTriggerChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FMovieSceneTangentData @ 14605f1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTangentData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTangentData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTangentData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTangentData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTangentData.InnerSingleton;
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

// NewStructOps @ 14605f260

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTangentData,&UE::CoreUObject::Private::Construct<FMovieSceneTangentData>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTangentData>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneTangentData>,&UE::CoreUObject::Private::Identical<FMovieSceneTangentData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneScalingDriver_NoRegister @ 14605f440

UClass * __cdecl Z_Construct_UClass_UMovieSceneScalingDriver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScalingDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneScalingDriver",
               &Z_Registration_Info_UClass_UMovieSceneScalingDriver.InnerSingleton,
               UMovieSceneScalingDriver::StaticRegisterNativesUMovieSceneScalingDriver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScalingDriver>,
               InternalVTableHelperCtorCaller<UMovieSceneScalingDriver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalingDriver.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration @ 1460600e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTrackTemplateProducer @ 146060160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackTemplateProducer(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146060ca0

void * __thiscall
FMovieSceneBoolChannel::_scalar_deleting_destructor_(FMovieSceneBoolChannel *this,uint param_1)

{
  ~FMovieSceneBoolChannel(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator @ 146060d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTimeWarpDecoration @ 146060db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTimeWarpDecoration(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTimeWarpDecoration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTimeWarpSource @ 146060df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTimeWarpSource(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTimeWarpSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146060e30

void * __thiscall
FMovieSceneDoubleChannel::_scalar_deleting_destructor_(FMovieSceneDoubleChannel *this,uint param_1)

{
  ~FMovieSceneDoubleChannel(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// Z_Construct_UScriptStruct_FMovieSceneFloatValue @ 1460610f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneFloatValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatValue.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneFloatValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatValue.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneFloatValue.InnerSingleton;
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

// NewStructOps @ 1460612b0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneFloatValue,&UE::CoreUObject::Private::Construct<FMovieSceneFloatValue>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneFloatValue>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneFloatValue>,&UE::CoreUObject::Private::Identical<FMovieSceneFloatValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_DefaultValue_SetBit @ 1460612f0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneBoolChannel_Statics::NewProp_DefaultValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bHasDefaultValue_SetBit @ 146061300

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneBoolChannel_Statics::NewProp_bHasDefaultValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewStructOps @ 146061310

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneBoolChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneBoolChannel,&UE::CoreUObject::Private::Construct<FMovieSceneBoolChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneBoolChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneBoolChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneBoolChannel>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneBoolChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasDefaultValue_SetBit @ 146061350

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  return;
}

// NewStructOps @ 146061360

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneFloatChannel,&UE::CoreUObject::Private::Construct<FMovieSceneFloatChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneFloatChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneFloatChannel>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneFloatChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneFloatChannel>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneFloatChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneEntityProvider @ 146061470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntityProvider(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEntityProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEntityProvider.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEntityProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityProvider.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146061f60

void * __thiscall
FMovieSceneByteChannel::_scalar_deleting_destructor_(FMovieSceneByteChannel *this,uint param_1)

{
  ~FMovieSceneByteChannel(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry @ 1460621e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneTimeWarpSource_NoRegister @ 146062220

UClass * __cdecl Z_Construct_UClass_UMovieSceneTimeWarpSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpSource",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.InnerSingleton,
               UMovieSceneTimeWarpSource::StaticRegisterNativesUMovieSceneTimeWarpSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTimeWarpSource>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpSource.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneBindingLifetimeSystem @ 1460622f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneBindingLifetimeSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.OuterSingleton;
}

// NewProp_bHasDefaultValue_SetBit @ 146062330

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_bHasDefaultValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewStructOps @ 1460623c0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneByteChannel,&UE::CoreUObject::Private::Construct<FMovieSceneByteChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneByteChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneByteChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneByteChannel>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneByteChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146063030

void * __thiscall
FMovieSceneIntegerChannel::_scalar_deleting_destructor_
          (FMovieSceneIntegerChannel *this,uint param_1)

{
  ~FMovieSceneIntegerChannel(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator @ 146063070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.OuterSingleton
               ,&Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.OuterSingleton;
}

// NewStructOps @ 1460630f0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneChannel,&UE::CoreUObject::Private::Construct<FMovieSceneChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneCondition_NoRegister @ 146063130

UClass * __cdecl Z_Construct_UClass_UMovieSceneCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCondition",
               &Z_Registration_Info_UClass_UMovieSceneCondition.InnerSingleton,
               UMovieSceneCondition::StaticRegisterNativesUMovieSceneCondition,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneCondition>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCondition.InnerSingleton;
}

// NewProp_bInterpolateLinearKeys_SetBit @ 146063270

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_bInterpolateLinearKeys_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  return;
}

// NewProp_bHasDefaultValue_SetBit @ 146063280

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_bHasDefaultValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  return;
}

// NewStructOps @ 146063290

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneIntegerChannel,&UE::CoreUObject::Private::Construct<FMovieSceneIntegerChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneIntegerChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneIntegerChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneIntegerChannel>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneIntegerChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneCondition @ 1460633a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCondition(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCondition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCondition.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCondition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCondition.OuterSingleton;
}

// Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency @ 1460633f0

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency(void)

{
  if (Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.InnerSingleton;
}

// Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope @ 146063430

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope(void)

{
  if (Z_Registration_Info_UEnum_EMovieSceneConditionScope.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieSceneConditionScope.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieSceneConditionScope.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneConditionContainer @ 146063470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneConditionContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneConditionContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneConditionContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneConditionContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneConditionContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneConditionContext @ 1460634f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneConditionContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneConditionContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneConditionContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneConditionContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneConditionContext.InnerSingleton;
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

// EMovieSceneConditionScope_StaticEnum @ 146063580

UEnum * __cdecl EMovieSceneConditionScope_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneConditionScope.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneConditionScope.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope,(UObject *)pUVar1,
                       L"EMovieSceneConditionScope");
  }
  return Z_Registration_Info_UEnum_EMovieSceneConditionScope.OuterSingleton;
}

// EMovieSceneConditionCheckFrequency_StaticEnum @ 1460637b0

UEnum * __cdecl EMovieSceneConditionCheckFrequency_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency,
                       (UObject *)pUVar1,L"EMovieSceneConditionCheckFrequency");
  }
  return Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCompiledData @ 146063820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCompiledData(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCompiledData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCompiledData.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCompiledData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCompiledData.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneCompiledDataManager @ 146063860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneCompiledDataManager(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.OuterSingleton;
}

// Z_Construct_UEnum_MovieScene_EMovieSceneSequenceCompilerMask @ 1460638a0

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EMovieSceneSequenceCompilerMask(void)

{
  if (Z_Registration_Info_UEnum_EMovieSceneSequenceCompilerMask.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieSceneSequenceCompilerMask.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EMovieSceneSequenceCompilerMask_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieSceneSequenceCompilerMask.InnerSingleton;
}

// NewStructOps @ 1460638e0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneConditionContext,&UE::CoreUObject::Private::Construct<FMovieSceneConditionContext>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneConditionContext>,&UE::CoreUObject::Private::Destruct<FMovieSceneConditionContext>,&UE::CoreUObject::Private::Copy<FMovieSceneConditionContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EMovieSceneSequenceCompilerMask_StaticEnum @ 146063950

UEnum * __cdecl EMovieSceneSequenceCompilerMask_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneSequenceCompilerMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneSequenceCompilerMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneSequenceCompilerMask,
                       (UObject *)pUVar1,L"EMovieSceneSequenceCompilerMask");
  }
  return Z_Registration_Info_UEnum_EMovieSceneSequenceCompilerMask.OuterSingleton;
}

// NewStructOps @ 1460639b0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneKeyHandleMap,&UE::CoreUObject::Private::Construct<FMovieSceneKeyHandleMap>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneKeyHandleMap>,&UE::CoreUObject::Private::Destruct<FMovieSceneKeyHandleMap>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneKeyHandleMap>,&UE::CoreUObject::Private::Copy<FMovieSceneKeyHandleMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bParentSequenceRequiresLowerFence_SetBit @ 146063b20

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::
NewProp_bParentSequenceRequiresLowerFence_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return;
}

// NewProp_bParentSequenceRequiresUpperFence_SetBit @ 146063b30

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::
NewProp_bParentSequenceRequiresUpperFence_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 2;
  return;
}

// NewStructOps @ 146063b40

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneCompiledSequenceFlagStruct,&UE::CoreUObject::Private::Construct<FMovieSceneCompiledSequenceFlagStruct>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneCompiledSequenceFlagStruct>,&UE::CoreUObject::Private::Destruct<FMovieSceneCompiledSequenceFlagStruct>,&UE::CoreUObject::Private::Copy<FMovieSceneCompiledSequenceFlagStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneTrackRowDecoration @ 146063b80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackRowDecoration(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTrackRowDecoration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.OuterSingleton;
}

// NewStructOps @ 146063bc0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneConditionContainer,&UE::CoreUObject::Private::Construct<FMovieSceneConditionContainer>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneConditionContainer>,&UE::CoreUObject::Private::Destruct<FMovieSceneConditionContainer>,&UE::CoreUObject::Private::Copy<FMovieSceneConditionContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 146063d80

void __cdecl
Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition @ 146063e10

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency @ 146063ff0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_MovieScene_ENavigationToolItemFlags @ 146064050

UEnum * __cdecl Z_Construct_UEnum_MovieScene_ENavigationToolItemFlags(void)

{
  if (Z_Registration_Info_UEnum_ENavigationToolItemFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENavigationToolItemFlags.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_ENavigationToolItemFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENavigationToolItemFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNavigationToolSerializedItem @ 146064090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationToolSerializedItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSerializedItem.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationToolSerializedItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationToolSerializedItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSerializedItem.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationToolSerializedItem.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavigationToolSerializedTree @ 146064110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationToolSerializedTree(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTree.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTree.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationToolSerializedTree_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTree.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTree.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavigationToolSerializedTreeNode @ 146064190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationToolSerializedTreeNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTreeNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTreeNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationToolSerializedTreeNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTreeNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTreeNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavigationToolViewColumnSaveState @ 146064210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationToolViewColumnSaveState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolViewColumnSaveState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationToolViewColumnSaveState.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationToolViewColumnSaveState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationToolViewColumnSaveState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationToolViewColumnSaveState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavigationToolViewSaveState @ 146064290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationToolViewSaveState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolViewSaveState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationToolViewSaveState.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationToolViewSaveState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationToolViewSaveState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationToolViewSaveState.InnerSingleton;
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

// ENavigationToolItemFlags_StaticEnum @ 146064310

UEnum * __cdecl ENavigationToolItemFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationToolItemFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_ENavigationToolItemFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_ENavigationToolItemFlags,(UObject *)pUVar1,
                       L"ENavigationToolItemFlags");
  }
  return Z_Registration_Info_UEnum_ENavigationToolItemFlags.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope @ 1460644c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146064520

void * __cdecl Z_Construct_UScriptStruct_FNavigationToolSerializedItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationToolSerializedItem,&UE::CoreUObject::Private::Construct<FNavigationToolSerializedItem>,&UE::CoreUObject::Private::ConstructForTests<FNavigationToolSerializedItem>,&UE::CoreUObject::Private::Destruct<FNavigationToolSerializedItem>,&UE::CoreUObject::Private::Copy<FNavigationToolSerializedItem>,&UE::CoreUObject::Private::GetStructTypeHash<FNavigationToolSerializedItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bInvert_SetBit @ 146064560

void __cdecl Z_Construct_UClass_UMovieSceneCondition_Statics::NewProp_bInvert_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewStructOps @ 1460646c0

void * __cdecl
Z_Construct_UScriptStruct_FNavigationToolSerializedTreeNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationToolSerializedTreeNode,&UE::CoreUObject::Private::Construct<FNavigationToolSerializedTreeNode>,&UE::CoreUObject::Private::ConstructForTests<FNavigationToolSerializedTreeNode>,&UE::CoreUObject::Private::Destruct<FNavigationToolSerializedTreeNode>,&UE::CoreUObject::Private::Copy<FNavigationToolSerializedTreeNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146064740

void * __thiscall
FMovieSceneTimeWarpChannel::_scalar_deleting_destructor_
          (FMovieSceneTimeWarpChannel *this,uint param_1)

{
  FMovieSceneDoubleChannel::~FMovieSceneDoubleChannel((FMovieSceneDoubleChannel *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// NewStructOps @ 146064780

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTimeWarpChannel,&UE::CoreUObject::Private::Construct<FMovieSceneTimeWarpChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTimeWarpChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneTimeWarpChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneTimeWarpChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1460647c0

void * __cdecl Z_Construct_UScriptStruct_FNavigationToolSerializedTree_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationToolSerializedTree,&UE::CoreUObject::Private::Construct<FNavigationToolSerializedTree>,&UE::CoreUObject::Private::ConstructForTests<FNavigationToolSerializedTree>,&UE::CoreUObject::Private::Destruct<FNavigationToolSerializedTree>,&UE::CoreUObject::Private::PostSerialize<FNavigationToolSerializedTree>,&UE::CoreUObject::Private::Copy<FNavigationToolSerializedTree>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bVisible_SetBit @ 146064800

void __cdecl
Z_Construct_UScriptStruct_FNavigationToolViewColumnSaveState_Statics::NewProp_bVisible_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 146064810

void * __cdecl
Z_Construct_UScriptStruct_FNavigationToolViewColumnSaveState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationToolViewColumnSaveState,&UE::CoreUObject::Private::Construct<FNavigationToolViewColumnSaveState>,&UE::CoreUObject::Private::ConstructForTests<FNavigationToolViewColumnSaveState>,&UE::CoreUObject::Private::Destruct<FNavigationToolViewColumnSaveState>,&UE::CoreUObject::Private::Copy<FNavigationToolViewColumnSaveState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1460648d0

void * __cdecl Z_Construct_UScriptStruct_FNavigationToolViewSaveState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationToolViewSaveState,&UE::CoreUObject::Private::Construct<FNavigationToolViewSaveState>,&UE::CoreUObject::Private::ConstructForTests<FNavigationToolViewSaveState>,&UE::CoreUObject::Private::Destruct<FNavigationToolViewSaveState>,&UE::CoreUObject::Private::Copy<FNavigationToolViewSaveState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146064b60

void * __cdecl Z_Construct_UScriptStruct_FNavigationToolSaveState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationToolSaveState,&UE::CoreUObject::Private::Construct<FNavigationToolSaveState>,&UE::CoreUObject::Private::ConstructForTests<FNavigationToolSaveState>,&UE::CoreUObject::Private::Destruct<FNavigationToolSaveState>,&UE::CoreUObject::Private::Copy<FNavigationToolSaveState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146065850

void * __thiscall
FMovieSceneAudioTriggerChannel::_scalar_deleting_destructor_
          (FMovieSceneAudioTriggerChannel *this,uint param_1)

{
  ~FMovieSceneAudioTriggerChannel(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneGroupCondition @ 146065890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneGroupCondition(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneGroupCondition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneGroupCondition.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneGroupCondition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroupCondition.OuterSingleton;
}

// Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator @ 1460658d0

UEnum * __cdecl Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator(void)

{
  if (Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.InnerSingleton,
               &Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.InnerSingleton;
}

// EMovieSceneGroupConditionOperator_StaticEnum @ 146065910

UEnum * __cdecl EMovieSceneGroupConditionOperator_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator,
                       (UObject *)pUVar1,L"EMovieSceneGroupConditionOperator");
  }
  return Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneDecorationContainerObject @ 146065e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneDecorationContainerObject(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneDecorationContainerObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneDecorationContainer @ 146065e80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneDecorationContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDecorationContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneDecorationContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneDecorationContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDecorationContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneDecorationContainer.InnerSingleton;
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

// NewStructOps @ 146065f00

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneDecorationContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneDecorationContainer,&UE::CoreUObject::Private::Construct<FMovieSceneDecorationContainer>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneDecorationContainer>,&UE::CoreUObject::Private::Destruct<FMovieSceneDecorationContainer>,&UE::CoreUObject::Private::Copy<FMovieSceneDecorationContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneValueDecomposer @ 146066db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneValueDecomposer(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneValueDecomposer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneValueDecomposer.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneValueDecomposer.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScalingAnchors @ 146066e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScalingAnchors(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScalingAnchors.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScalingAnchors.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScalingAnchors_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalingAnchors.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScalingDriver @ 146066e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScalingDriver(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScalingDriver.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScalingDriver.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScalingDriver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalingDriver.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneAnchorsScalingGroup @ 146066ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneAnchorsScalingGroup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneAnchorsScalingGroup.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneAnchorsScalingGroup.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneAnchorsScalingGroup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneAnchorsScalingGroup.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneAnchorsScalingGroup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneScalingAnchor @ 146066f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneScalingAnchor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneScalingAnchor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneScalingAnchor.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneScalingAnchor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneScalingAnchor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneScalingAnchor.InnerSingleton;
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

// NewStructOps @ 146066fa0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneScalingAnchor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneScalingAnchor,&UE::CoreUObject::Private::Construct<FMovieSceneScalingAnchor>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneScalingAnchor>,&UE::CoreUObject::Private::Destruct<FMovieSceneScalingAnchor>,&UE::CoreUObject::Private::Copy<FMovieSceneScalingAnchor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneBlenderSystem @ 1460670b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneBlenderSystem(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneBlenderSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneBlenderSystem.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneBlenderSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneBlenderSystem.OuterSingleton;
}

// NewStructOps @ 146067120

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneAnchorsScalingGroup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneAnchorsScalingGroup,&UE::CoreUObject::Private::Construct<FMovieSceneAnchorsScalingGroup>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneAnchorsScalingGroup>,&UE::CoreUObject::Private::Destruct<FMovieSceneAnchorsScalingGroup>,&UE::CoreUObject::Private::Copy<FMovieSceneAnchorsScalingGroup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneChannelOverrideContainer_NoRegister @ 146067280

UClass * __cdecl Z_Construct_UClass_UMovieSceneChannelOverrideContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneChannelOverrideContainer",
               &Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton,
               UMovieSceneChannelOverrideContainer::
               StaticRegisterNativesUMovieSceneChannelOverrideContainer,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneChannelOverrideContainer>,
               InternalVTableHelperCtorCaller<UMovieSceneChannelOverrideContainer>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.InnerSingleton;
}

// NewStructOps @ 146067400

void * __cdecl Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEasingComponentData,&UE::CoreUObject::Private::Construct<FEasingComponentData>,&UE::CoreUObject::Private::ConstructForTests<FEasingComponentData>,&UE::CoreUObject::Private::Destruct<FEasingComponentData>,&UE::CoreUObject::Private::Copy<FEasingComponentData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1460674c0

void * __thiscall
FMovieSceneObjectPathChannel::_scalar_deleting_destructor_
          (FMovieSceneObjectPathChannel *this,uint param_1)

{
  ~FMovieSceneObjectPathChannel(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneChannelOverrideContainer @ 146067620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneChannelOverrideContainer(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneChannelOverrideContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelOverrideContainer.OuterSingleton;
}

// NewStructOps @ 146067660

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneTrackInstanceComponent,&UE::CoreUObject::Private::Construct<FMovieSceneTrackInstanceComponent>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneTrackInstanceComponent>,&UE::CoreUObject::Private::Destruct<FMovieSceneTrackInstanceComponent>,&UE::CoreUObject::Private::Copy<FMovieSceneTrackInstanceComponent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146067750

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneEvaluationHookComponent,&UE::CoreUObject::Private::Construct<FMovieSceneEvaluationHookComponent>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvaluationHookComponent>,&UE::CoreUObject::Private::Destruct<FMovieSceneEvaluationHookComponent>,&UE::CoreUObject::Private::Copy<FMovieSceneEvaluationHookComponent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneLanguagePreviewDecoration @ 146067790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneLanguagePreviewDecoration(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneLanguagePreviewDecoration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.OuterSingleton;
}

// NewStructOps @ 146067810

void * __cdecl Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTrackInstanceInputComponent,&UE::CoreUObject::Private::Construct<FTrackInstanceInputComponent>,&UE::CoreUObject::Private::ConstructForTests<FTrackInstanceInputComponent>,&UE::CoreUObject::Private::Destruct<FTrackInstanceInputComponent>,&UE::CoreUObject::Private::Copy<FTrackInstanceInputComponent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue @ 146067850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannelKeyValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannelKeyValue.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannelKeyValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannelKeyValue.InnerSingleton;
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

// NewStructOps @ 146067950

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneObjectPathChannelKeyValue,&UE::CoreUObject::Private::Construct<FMovieSceneObjectPathChannelKeyValue>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneObjectPathChannelKeyValue>,&UE::CoreUObject::Private::Destruct<FMovieSceneObjectPathChannelKeyValue>,&UE::CoreUObject::Private::Copy<FMovieSceneObjectPathChannelKeyValue>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneObjectPathChannelKeyValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146067b70

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x148;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneObjectPathChannel,&UE::CoreUObject::Private::Construct<FMovieSceneObjectPathChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneObjectPathChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneObjectPathChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneObjectPathChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneMuteSoloDecoration @ 146067c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMuteSoloDecoration(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMuteSoloDecoration_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneDoubleChannel @ 146067f00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneDoubleChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoubleChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneDoubleChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoubleChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneDoubleChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneDoubleValue @ 146067f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneDoubleValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoubleValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneDoubleValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoubleValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneDoubleValue.InnerSingleton;
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

// operator<<<FFrameNumber,TSizedDefaultAllocator<32>_> @ 1460699a0

FArchive * __cdecl
operator<<<FFrameNumber,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
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
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
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
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<(param_1,(FFrameNumber *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 4;
              DefaultConstructItems<FFrameNumber,int>(pFVar2,1);
              operator<<(param_1,(FFrameNumber *)pFVar2);
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

// operator<<<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> @ 1460699b0

FArchive * __cdecl
operator<<<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *param_2)

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
  FMovieSceneDoubleValue *pFVar10;
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
                (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
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
              TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeChannelValue
                        ((FMovieSceneDoubleValue *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FMovieSceneDoubleValue *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
              DefaultConstructItems<FMovieSceneDoubleValue,int>(pFVar10,1);
              TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeChannelValue
                        (pFVar10,param_1);
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

// operator<<<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> @ 1460699c0

FArchive * __cdecl
operator<<<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *param_2)

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
  FMovieSceneFloatValue *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x1c);
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
                (0x1c,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x92493)) {
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
              TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeChannelValue
                        ((FMovieSceneFloatValue *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x1c),param_1);
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x41c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FMovieSceneFloatValue *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x1c);
              DefaultConstructItems<FMovieSceneFloatValue,int>(pFVar10,1);
              TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeChannelValue
                        (pFVar10,param_1);
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

// AddWeakLambda<UMovieSceneCompiledDataManager,`UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager'::__l2::<lambda_2>_&> @ 14606acb0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy>
::
AddWeakLambda<UMovieSceneCompiledDataManager,_UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager_::__l2::<lambda_2>_&>
          (void *this,UMovieSceneCompiledDataManager *param_1,<lambda_2> *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  <lambda_2> *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  lVar6 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EPackageReloadPhase__PEAVFPackageReloadedEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy,`UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager'::`2'::<lambda_2>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (<lambda_2> *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = *in_R9;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_48);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  if (((local_70.DelegateSize == 0) ||
      (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      lVar6 = *plVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)((longlong)this + 0x10);
    param_1->_padding_ = lVar6;
    if (iVar2 == *(int *)((longlong)this + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar2 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar2 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_70.DelegateSize;
    local_70.DelegateSize = 0;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,FGuid>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 14606b650

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,FGuid>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TArray<TTuple<FMovieSceneSequenceID,FGuid>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FMovieSceneSequenceID *param_2,FKeyForward param_3,
          TLess<FMovieSceneSequenceID_const_&> param_4)

{
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar1;
  uint uVar2;
  int iVar3;
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar4;
  uint uVar5;
  int iVar6;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)param_1;
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
    FVar4 = FVar1;
  }
  iVar6 = 0;
  if (0 < param_1->ArrayNum) {
    uVar5 = param_1->ArrayNum;
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      if (*(uint *)((longlong)FVar4 + (longlong)iVar3 * 0x14) < param_2->Value) {
        iVar6 = iVar3 + (uVar5 & 1);
      }
      uVar2 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar2 != 0);
  }
  if (param_1->ArrayNum <= iVar6) {
    return -1;
  }
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
    param_1 = (TArray<TTuple<FMovieSceneSequenceID,FGuid>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
               *)FVar1;
  }
  iVar3 = -1;
  if (*(uint *)((longlong)param_1 + (longlong)iVar6 * 0x14) <= param_2->Value) {
    iVar3 = iVar6;
  }
  return iVar3;
}

// BinarySearchBy<TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FName,FName_FMovieSceneChannelEntry::*,FNameLexicalLess> @ 14606b710

int __cdecl
Algo::
BinarySearchBy<TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FName,FName_FMovieSceneChannelEntry::*,FNameLexicalLess>
          (TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FName *param_2,pdm_a8d22ab7 param_3,FNameLexicalLess param_4)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<FMovieSceneChannelEntry> FVar5;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<FMovieSceneChannelEntry>)param_1;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar5 = FVar1;
  }
  iVar2 = AlgoImpl::
          LowerBoundInternal<FMovieSceneChannelEntry_const_,int,FName,FName_FMovieSceneChannelEntry::*,FNameLexicalLess>
                    ((FMovieSceneChannelEntry *)FVar5,param_1->ArrayNum,param_2,param_3,param_4);
  if (iVar2 < param_1->ArrayNum) {
    FVar1 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      param_1 = (TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar1;
    }
    iVar3 = ::FName::Compare(param_2,(FName *)((longlong)param_1 + (longlong)(int)param_3 +
                                              (longlong)iVar2 * 0x18));
    iVar4 = -1;
    if (-1 < iVar3) {
      iVar4 = iVar2;
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

// BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,`TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>'::__l2::<lambda_1>_> @ 14606b7b0

void __cdecl
UE::Core::Private::
BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
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
            uVar5 = uVar13 & uVar12 & uVar10;
            if (iVar15 != iVar7 + -1) {
              uVar5 = uVar12 & uVar10;
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
          uVar10 = uVar9 & uVar14 & uVar5;
          if ((int)uVar16 != iVar7 + -1) {
            uVar10 = uVar9 & uVar14;
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

// CastChecked<UMovieSceneBlenderSystem,UMovieSceneEntitySystem> @ 14606bbb0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneBlenderSystem * __cdecl
CastChecked<UMovieSceneBlenderSystem,UMovieSceneEntitySystem>(UMovieSceneEntitySystem *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneEntitySystem *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneBlenderSystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneBlenderSystem::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneBlenderSystem *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneBlenderSystem>(&local_28);
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

// CastChecked<UMovieSceneScalingAnchors,UObject> @ 14606bc70

UMovieSceneScalingAnchors * __cdecl CastChecked<UMovieSceneScalingAnchors,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneScalingAnchors>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneScalingAnchors::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneScalingAnchors *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneScalingAnchors>(&local_28);
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

// CastChecked<UMovieSceneScalingAnchors,UObject> @ 14606bd30

UMovieSceneScalingAnchors * __cdecl
CastChecked<UMovieSceneScalingAnchors,UObject>(UObject *param_1,Type param_2)

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
      return (UMovieSceneScalingAnchors *)0x0;
    }
    pFVar3 = GetTypeName<UMovieSceneScalingAnchors>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneScalingAnchors::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneScalingAnchors *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneScalingAnchors>(&local_28);
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

// CastChecked<UMovieSceneSequence,UObject> @ 14606be10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __cdecl
CastChecked<UMovieSceneSequence,UObject>(UObject *param_1,Type param_2)

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
      return (UMovieSceneSequence *)0x0;
    }
    pFVar3 = GetTypeName<UMovieSceneSequence>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneSequence *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneSequence>(&local_28);
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

// CastChecked<UMovieSceneTimeWarpDecoration,UObject> @ 14606bef0

UMovieSceneTimeWarpDecoration * __cdecl
CastChecked<UMovieSceneTimeWarpDecoration,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneTimeWarpDecoration>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneTimeWarpDecoration::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneTimeWarpDecoration *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneTimeWarpDecoration>(&local_28);
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

// CastChecked<UMovieSceneTimeWarpDecoration,UObject> @ 14606bfb0

UMovieSceneTimeWarpDecoration * __cdecl
CastChecked<UMovieSceneTimeWarpDecoration,UObject>(UObject *param_1,Type param_2)

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
      return (UMovieSceneTimeWarpDecoration *)0x0;
    }
    pFVar3 = GetTypeName<UMovieSceneTimeWarpDecoration>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneTimeWarpDecoration::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieSceneTimeWarpDecoration *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneTimeWarpDecoration>(&local_28);
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

// ClampTangent<double> @ 14606c090

double __cdecl ClampTangent<double>(double param_1,double param_2,double param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0.0 < param_3) {
    iVar2 = -1;
  }
  iVar1 = 1;
  if (0.0 < param_2) {
    iVar1 = -1;
  }
  if (iVar1 == iVar2) {
    iVar1 = 1;
    if (0.0 < param_1) {
      iVar1 = -1;
    }
    if (iVar1 == iVar2) {
      if (0.0 <= param_3) {
        if (param_3 <= param_1) {
          param_1 = param_3;
        }
        if (param_2 <= param_1) {
          param_1 = param_2;
        }
        return param_1;
      }
      if (param_1 <= param_3) {
        param_1 = param_3;
      }
      if (param_1 <= param_2) {
        param_1 = param_2;
      }
      return param_1;
    }
  }
  return 0.0;
}

// ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int> @ 14606f740

void __cdecl
ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
          (void *param_1,FComplexMask *param_2,int param_3)

{
  EComplexFilterMode *pEVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 + 0x34;
    do {
      *(undefined8 *)(lVar2 + -4) = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                ((TBitArray<TFixedAllocator<12>_> *)(lVar2 + -0x34),
                 (TBitArray<TFixedAllocator<12>_> *)param_2);
      pEVar1 = &param_2->Mode;
      param_2 = param_2 + 1;
      *(EComplexFilterMode *)(lVar2 + 4) = *pEVar1;
      lVar2 = lVar2 + 0x3c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneEvalTemplatePtr,FMovieSceneEvalTemplatePtr,int> @ 14606f7b0

void __cdecl
ConstructItems<FMovieSceneEvalTemplatePtr,FMovieSceneEvalTemplatePtr,int>
          (void *param_1,FMovieSceneEvalTemplatePtr *param_2,int param_3)

{
  byte *pbVar1;
  
  if (param_3 != 0) {
    pbVar1 = (byte *)((longlong)param_1 + 0x80);
    do {
      *pbVar1 = *pbVar1 & 0xfe;
      *pbVar1 = *pbVar1 | 2;
      FMovieSceneEvalTemplatePtr::operator=((FMovieSceneEvalTemplatePtr *)(pbVar1 + -0x80),param_2);
      param_2 = param_2 + 1;
      pbVar1 = pbVar1 + 0x88;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneEvaluationFieldEntityMetaData,FMovieSceneEvaluationFieldEntityMetaData,int> @ 14606f810

void __cdecl
ConstructItems<FMovieSceneEvaluationFieldEntityMetaData,FMovieSceneEvaluationFieldEntityMetaData,int>
          (void *param_1,FMovieSceneEvaluationFieldEntityMetaData *param_2,int param_3)

{
  FName *pFVar1;
  byte bVar2;
  FString *pFVar3;
  int *this;
  
  if (param_3 != 0) {
    pFVar3 = &param_2->OverrideBoundPropertyPath;
    this = (int *)((longlong)param_1 + 0x28);
    do {
      *(undefined8 *)((longlong)param_1 + (-0x28 - (longlong)param_2) + (longlong)pFVar3) =
           *(undefined8 *)((longlong)(pFVar3 + -3) + 8);
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(this + -8),(FSoftObjectPath *)(pFVar3 + -2));
      FString::FString((FString *)this,pFVar3);
      *(FName *)(this + 4) = *(FName *)(pFVar3 + 1);
      this[6] = ((FFrameNumber *)((FName *)(pFVar3 + 1) + 1))->Value;
      *(ESectionEvaluationFlags *)(this + 7) =
           *(ESectionEvaluationFlags *)((FFrameNumber *)((FName *)(pFVar3 + 1) + 1) + 1);
      bVar2 = (*(byte *)((longlong)this + 0x1d) ^
              ZPULL(*(undefined1 *)((longlong)((FFrameNumber *)((FName *)(pFVar3 + 1) + 1) + 1) + 1)
                    ,0,1)) & 1 ^ *(byte *)((longlong)this + 0x1d);
      *(byte *)((longlong)this + 0x1d) = bVar2;
      pFVar1 = (FName *)(pFVar3 + 1);
      pFVar3 = (FString *)((longlong)(pFVar3 + 4) + 8);
      *(byte *)((longlong)this + 0x1d) =
           (bVar2 ^ *(undefined1 *)((longlong)((FFrameNumber *)(pFVar1 + 1) + 1) + 1)) & 2 ^ bVar2;
      this = this + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneEvaluationGroup,FMovieSceneEvaluationGroup,int> @ 14606f8c0

void __cdecl
ConstructItems<FMovieSceneEvaluationGroup,FMovieSceneEvaluationGroup,int>
          (void *param_1,FMovieSceneEvaluationGroup *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x28);
    piVar5 = &(param_2->SectionLUT).ArrayNum;
    lVar6 = (longlong)param_1 + (-0x28 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar5 + lVar6) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)piVar5 + lVar6);
      iVar2 = piVar5[-8];
      pvVar3 = *(void **)(piVar5 + -10);
      piVar4[-8] = iVar2;
      if (iVar2 == 0) {
        piVar4[-7] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar1,iVar2,piVar4 + -7);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 3);
      }
      piVar4[-6] = 0;
      piVar4[-5] = 0;
      iVar2 = piVar5[-4];
      pvVar3 = *(void **)(piVar5 + -6);
      piVar4[-4] = iVar2;
      if (iVar2 == 0) {
        piVar4[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,(ForAnyElementType *)(piVar4 + -6),iVar2,piVar4 + -3);
        memcpy(((ForAnyElementType *)(piVar4 + -6))->Data,pvVar3,(longlong)iVar2 * 0xc);
      }
      piVar4[-2] = 0;
      piVar4[-1] = 0;
      iVar2 = *piVar5;
      _Src = (((TArray<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_> *)
              (piVar5 + -2))->AllocatorInstance).Data;
      *piVar4 = iVar2;
      if (iVar2 == 0) {
        piVar4[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,(ForAnyElementType *)(piVar4 + -2),iVar2,piVar4 + 1);
        memcpy(((ForAnyElementType *)(piVar4 + -2))->Data,_Src,(longlong)iVar2 << 3);
      }
      piVar5 = piVar5 + 0xc;
      piVar4 = piVar4 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneEvaluationMetaData,FMovieSceneEvaluationMetaData,int> @ 14606fa50

void __cdecl
ConstructItems<FMovieSceneEvaluationMetaData,FMovieSceneEvaluationMetaData,int>
          (void *param_1,FMovieSceneEvaluationMetaData *param_2,int param_3)

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
    piVar4 = &(param_2->ActiveSequences).ArrayNum;
    lVar5 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar4 + lVar5) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)piVar4 + lVar5);
      iVar2 = *piVar4;
      _Src = (((TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->
             AllocatorInstance).Data;
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
                  (0x10,4,iVar2,0,(ForAnyElementType *)(piVar3 + 1),iVar2,piVar3 + 4);
        memcpy(((ForAnyElementType *)(piVar3 + 1))->Data,_Src_00,(longlong)iVar2 << 4);
      }
      piVar3 = piVar3 + 8;
      piVar4 = piVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int> @ 14606fb90

void __cdecl
ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
          (void *param_1,FMovieSceneNestedSequenceTransform *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
                ((FMovieSceneNestedSequenceTransform *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneObjectPathChannelKeyValue,FMovieSceneObjectPathChannelKeyValue,int> @ 14606fbe0

void __cdecl
ConstructItems<FMovieSceneObjectPathChannelKeyValue,FMovieSceneObjectPathChannelKeyValue,int>
          (void *param_1,FMovieSceneObjectPathChannelKeyValue *param_2,int param_3)

{
  TObjectPtr<UObject> TVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  TObjectPtr<UObject>_u_0 *pTVar3;
  
  if (param_3 != 0) {
    pTVar2 = (TObjectPtr<UObject>_u_0 *)((longlong)param_1 + 0x28);
    pTVar3 = &(param_2->HardPtr).field0_0x0;
    do {
      pTVar2[-5] = *(TObjectPtr<UObject>_u_0 *)
                    ((longlong)pTVar2 + (longlong)param_2 + (-0x28 - (longlong)param_1));
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)&pTVar2[-4].ObjectPtr,(FSoftObjectPath *)&pTVar3[-4].ObjectPtr);
      TVar1.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar3->DebugPtr;
      pTVar2->DebugPtr = (UObject *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      pTVar3 = pTVar3 + 6;
      pTVar2 = pTVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneSubSequenceTreeEntry,FMovieSceneSubSequenceTreeEntry,int> @ 14606fc70

void __cdecl
ConstructItems<FMovieSceneSubSequenceTreeEntry,FMovieSceneSubSequenceTreeEntry,int>
          (void *param_1,FMovieSceneSubSequenceTreeEntry *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FMovieSceneSubSequenceTreeEntry::FMovieSceneSubSequenceTreeEntry
                ((FMovieSceneSubSequenceTreeEntry *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNavigationToolSerializedItem,FNavigationToolSerializedItem,int> @ 14606fcc0

void __cdecl
ConstructItems<FNavigationToolSerializedItem,FNavigationToolSerializedItem,int>
          (void *param_1,FNavigationToolSerializedItem *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->Id);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNavigationToolViewSaveState,FNavigationToolViewSaveState,int> @ 14606fd10

void __cdecl
ConstructItems<FNavigationToolViewSaveState,FNavigationToolViewSaveState,int>
          (void *param_1,FNavigationToolViewSaveState *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 + (-0xa0 - (longlong)param_2);
    lVar1 = (longlong)param_1 + 0xc;
    pTVar3 = &param_2->ActiveItemFilters;
    do {
      *(undefined8 *)((longlong)pTVar3 + lVar2) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      TSet<TTuple<FString,enum_ENavigationToolItemFlags>,TDefaultMapHashableKeyFuncs<FString,enum_ENavigationToolItemFlags,0>,FDefaultSetAllocator>
      ::operator=((void *)((longlong)pTVar3 + lVar2),
                  (TSet<TTuple<FString,ENavigationToolItemFlags>,TDefaultMapHashableKeyFuncs<FString,ENavigationToolItemFlags,0>,FDefaultSetAllocator>
                   *)(pTVar3 + -2));
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined4 *)(lVar1 + 0x6c) = 0;
      *(undefined4 *)(lVar1 + 0x70) = 0x80;
      *(undefined4 *)(lVar1 + 0x74) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined4 *)(lVar1 + 0x8c) = 0;
      TSet<TTuple<FName,FNavigationToolViewColumnSaveState>,TDefaultMapHashableKeyFuncs<FName,FNavigationToolViewColumnSaveState,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FNavigationToolViewColumnSaveState>,TDefaultMapHashableKeyFuncs<FName,FNavigationToolViewColumnSaveState,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x44),
                  (TSet<TTuple<FName,FNavigationToolViewColumnSaveState>,TDefaultMapHashableKeyFuncs<FName,FNavigationToolViewColumnSaveState,0>,FDefaultSetAllocator>
                   *)(pTVar3 + -1));
      *(undefined8 *)(lVar1 + 0x9c) = 0;
      *(undefined8 *)
       &((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar1 + 0x94))->Elements = 0;
      *(undefined8 *)(lVar1 + 0xb4) = 0;
      *(undefined4 *)(lVar1 + 0xbc) = 0;
      *(undefined4 *)(lVar1 + 0xc0) = 0x80;
      *(undefined4 *)(lVar1 + 0xc4) = 0xffffffff;
      *(undefined4 *)(lVar1 + 200) = 0;
      *(undefined8 *)(lVar1 + 0xd4) = 0;
      *(undefined4 *)(lVar1 + 0xdc) = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar1 + 0x94),pTVar3)
      ;
      pTVar3 = pTVar3 + 3;
      lVar1 = lVar1 + 0xf0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConvertInsertAndSort<FMovieSceneDoubleValue> @ 14606fe50

void __cdecl
ConvertInsertAndSort<FMovieSceneDoubleValue>
          (int param_1,FFrameNumber param_2,FMovieSceneDoubleValue *param_3,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FFrameNumber local_res10 [2];
  
  iVar7 = param_4->ArrayNum;
  local_res10[0].Value = param_2.Value;
  if (param_1 < 1) {
    if (iVar7 == param_4->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar7 + 1;
    *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_res10[0].Value;
    iVar7 = param_5->ArrayNum;
    if (iVar7 == param_5->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_5->AllocatorInstance,&param_5->ArrayMax);
      param_5->ArrayNum = iVar7 + 1;
      dVar4 = *(double *)&param_3->Tangent;
      pFVar2 = (param_5->AllocatorInstance).Data;
      pFVar1 = pFVar2 + (longlong)iVar7 * 0x20;
      *(double *)pFVar1 = param_3->Value;
      *(double *)(pFVar1 + 8) = dVar4;
      uVar5 = *(undefined8 *)&(param_3->Tangent).TangentWeightMode;
      pFVar2 = pFVar2 + (longlong)iVar7 * 0x20 + 0x10;
      *(undefined8 *)pFVar2 = *(undefined8 *)&(param_3->Tangent).ArriveTangentWeight;
      *(undefined8 *)(pFVar2 + 8) = uVar5;
      return;
    }
  }
  else {
    uVar9 = 0;
    if ((int)(param_1 - 1U) < iVar7) {
      uVar9 = ~(param_1 - 1U) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_res10[0].Value <
        *(int *)((param_4->AllocatorInstance).Data + (longlong)param_1 * 4 + -4)) {
      uVar9 = param_1 - 2;
      if (-1 < (int)uVar9) {
        lVar10 = (longlong)(int)uVar9 * 4;
        do {
          uVar8 = 0;
          if ((int)uVar9 < param_4->ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (*(int *)((param_4->AllocatorInstance).Data + lVar10) <= local_res10[0].Value) {
            TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(param_4,local_res10,uVar9 + 1);
            iVar7 = uVar9 + 1;
            goto LAB_14606ffd0;
          }
          lVar10 = lVar10 + -4;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(param_4,local_res10,0);
      iVar7 = 0;
LAB_14606ffd0:
      TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::Insert(param_5,param_3,iVar7);
      return;
    }
    iVar7 = param_4->ArrayNum;
    if (iVar7 == param_4->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar7 + 1;
    *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_res10[0].Value;
    iVar7 = param_5->ArrayNum;
    if (iVar7 == param_5->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
  }
  param_5->ArrayNum = iVar7 + 1;
  dVar4 = *(double *)&param_3->Tangent;
  pFVar2 = (param_5->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)iVar7 * 0x20;
  *(double *)pFVar1 = param_3->Value;
  *(double *)(pFVar1 + 8) = dVar4;
  uVar5 = *(undefined8 *)&(param_3->Tangent).TangentWeightMode;
  pFVar2 = pFVar2 + (longlong)iVar7 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)&(param_3->Tangent).ArriveTangentWeight;
  *(undefined8 *)(pFVar2 + 8) = uVar5;
  return;
}

// ConvertInsertAndSort<FMovieSceneFloatValue> @ 146070090

void __cdecl
ConvertInsertAndSort<FMovieSceneFloatValue>
          (int param_1,FFrameNumber param_2,FMovieSceneFloatValue *param_3,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  FFrameNumber local_res10 [2];
  
  iVar4 = param_4->ArrayNum;
  local_res10[0].Value = param_2.Value;
  if (param_1 < 1) {
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar4 + 1;
    *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_res10[0].Value;
    iVar4 = param_5->ArrayNum;
    if (iVar4 == param_5->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x41c,&param_5->AllocatorInstance,&param_5->ArrayMax);
      param_5->ArrayNum = iVar4 + 1;
      uVar2 = *(undefined8 *)&(param_3->Tangent).LeaveTangent;
      pFVar6 = (param_5->AllocatorInstance).Data + (longlong)iVar4 * 0x1c;
      *(undefined8 *)pFVar6 = *(undefined8 *)param_3;
      *(undefined8 *)(pFVar6 + 8) = uVar2;
      *(undefined8 *)(pFVar6 + 0x10) = *(undefined8 *)&(param_3->Tangent).LeaveTangentWeight;
      *(undefined4 *)(pFVar6 + 0x18) = *(undefined4 *)&param_3->InterpMode;
      return;
    }
  }
  else {
    uVar7 = 0;
    if ((int)(param_1 - 1U) < iVar4) {
      uVar7 = ~(param_1 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_res10[0].Value <
        *(int *)((param_4->AllocatorInstance).Data + (longlong)param_1 * 4 + -4)) {
      uVar7 = param_1 - 2;
      if (-1 < (int)uVar7) {
        lVar8 = (longlong)(int)uVar7 * 4;
        do {
          uVar5 = 0;
          if ((int)uVar7 < param_4->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (*(int *)((param_4->AllocatorInstance).Data + lVar8) <= local_res10[0].Value) {
            TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(param_4,local_res10,uVar7 + 1);
            iVar4 = uVar7 + 1;
            goto LAB_146070220;
          }
          lVar8 = lVar8 + -4;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(param_4,local_res10,0);
      iVar4 = 0;
LAB_146070220:
      TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::Insert(param_5,param_3,iVar4);
      return;
    }
    iVar4 = param_4->ArrayNum;
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar4 + 1;
    *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_res10[0].Value;
    iVar4 = param_5->ArrayNum;
    if (iVar4 == param_5->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x41c,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
  }
  param_5->ArrayNum = iVar4 + 1;
  uVar2 = *(undefined8 *)&(param_3->Tangent).LeaveTangent;
  pFVar6 = (param_5->AllocatorInstance).Data + (longlong)iVar4 * 0x1c;
  *(undefined8 *)pFVar6 = *(undefined8 *)param_3;
  *(undefined8 *)(pFVar6 + 8) = uVar2;
  *(undefined8 *)(pFVar6 + 0x10) = *(undefined8 *)&(param_3->Tangent).LeaveTangentWeight;
  *(undefined4 *)(pFVar6 + 0x18) = *(undefined4 *)&param_3->InterpMode;
  return;
}

// DefaultConstructItems<UE::MovieScene::Interpolation::FCachedInterpolation,int> @ 146070ee0

void __cdecl
DefaultConstructItems<UE::MovieScene::Interpolation::FCachedInterpolation,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x58);
    do {
      *(undefined1 *)(puVar1 + -1) = 0;
      *puVar1 = 0xffffffff00000000;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FCompileOnTheFlyData,int> @ 146070f20

void __cdecl DefaultConstructItems<FCompileOnTheFlyData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
      *(undefined2 *)(lVar1 + 0x10) = 0xffff;
      *(undefined1 *)(lVar1 + 0x12) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0x80000000;
      lVar1 = lVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FCustomPropertyIndex,int> @ 146070f60

void __cdecl
DefaultConstructItems<UE::MovieScene::FCustomPropertyIndex,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FEasingComponentData,int> @ 146070f70

void __cdecl DefaultConstructItems<FEasingComponentData,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FEntityGroupID,int> @ 146070f90

void __cdecl DefaultConstructItems<UE::MovieScene::FEntityGroupID,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -8) = 0xffffffffffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FEvaluationHookFlags,int> @ 146070fc0

void __cdecl
DefaultConstructItems<UE::MovieScene::FEvaluationHookFlags,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2);
    return;
  }
  return;
}

// DefaultConstructItems<FFrameNumber,int> @ 146070fe0

void __cdecl DefaultConstructItems<FFrameNumber,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<FFrameTime,int> @ 146071000

void __cdecl DefaultConstructItems<FFrameTime,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FHierarchicalBlendTarget,int> @ 146071030

void __cdecl
DefaultConstructItems<UE::MovieScene::FHierarchicalBlendTarget,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(short *)((longlong)param_1 + 0xe) = 7;
    *(undefined8 *)param_1 = UE::MovieScene::GInitialBlendTargets._0_8_;
    *(undefined4 *)((longlong)param_1 + 8) = UE::MovieScene::GInitialBlendTargets._8_4_;
    *(short *)((longlong)param_1 + 0xc) = UE::MovieScene::GInitialBlendTargets[6];
    param_1 = (short *)((longlong)param_1 + 0x10);
  }
  UE::MovieScene::GInitialBlendTargets[0] = (short)UE::MovieScene::GInitialBlendTargets._0_8_;
  UE::MovieScene::GInitialBlendTargets[1] = SUB82(UE::MovieScene::GInitialBlendTargets._0_8_,2);
  UE::MovieScene::GInitialBlendTargets[2] = SUB82(UE::MovieScene::GInitialBlendTargets._0_8_,4);
  UE::MovieScene::GInitialBlendTargets[3] = SUB82(UE::MovieScene::GInitialBlendTargets._0_8_,6);
  UE::MovieScene::GInitialBlendTargets[4] = (short)UE::MovieScene::GInitialBlendTargets._8_4_;
  UE::MovieScene::GInitialBlendTargets[5] = SUB42(UE::MovieScene::GInitialBlendTargets._8_4_,2);
  return;
}

// DefaultConstructItems<UE::MovieScene::FInitialValueIndex,int> @ 146071070

void __cdecl
DefaultConstructItems<UE::MovieScene::FInitialValueIndex,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::MovieScene::FInstanceHandle,int> @ 146071080

void __cdecl DefaultConstructItems<UE::MovieScene::FInstanceHandle,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffff;
    param_1 = (void *)((longlong)param_1 + 4);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FInterrogationInstance,int> @ 1460710b0

void __cdecl
DefaultConstructItems<UE::MovieScene::FInterrogationInstance,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FInterrogationKey,int> @ 1460710d0

void __cdecl DefaultConstructItems<UE::MovieScene::FInterrogationKey,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0xffffffffffffffff;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FKeyHandle,int> @ 146071100

void __cdecl DefaultConstructItems<FKeyHandle,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FKeyHandle::FKeyHandle(param_1);
    param_1 = (void *)((longlong)param_1 + 4);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FMovieSceneBindingLifetimeComponentData,int> @ 146071140

void __cdecl
DefaultConstructItems<UE::MovieScene::FMovieSceneBindingLifetimeComponentData,int>
          (void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2);
    return;
  }
  return;
}

// DefaultConstructItems<FMovieSceneBlendChannelID,int> @ 146071160

void __cdecl DefaultConstructItems<FMovieSceneBlendChannelID,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined1 *)param_1 = 0xff;
    *(undefined2 *)((longlong)param_1 + 2) = 0xffff;
    param_1 = (void *)((longlong)param_1 + 4);
  }
  return;
}

// DefaultConstructItems<FMovieSceneDeterminismFence,int> @ 146071190

void __cdecl DefaultConstructItems<FMovieSceneDeterminismFence,int>(void *param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((longlong)param_1 + 4);
    do {
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1[-4] = 0;
      pbVar1[-3] = 0;
      pbVar1[-2] = 0;
      pbVar1[-1] = 0;
      pbVar1 = pbVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneDoubleValue,int> @ 1460711c0

void __cdecl DefaultConstructItems<FMovieSceneDoubleValue,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined1 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0xd) = 0x2000000;
      *(undefined2 *)(lVar1 + 0x11) = 0;
      *(undefined1 *)(lVar1 + 0x13) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FMovieSceneEntityID,int> @ 146071210

void __cdecl
DefaultConstructItems<UE::MovieScene::FMovieSceneEntityID,int>(void *param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    for (uVar1 = (ulonglong)(uint)param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)param_1 = 0xffff;
      param_1 = (undefined2 *)((longlong)param_1 + 2);
    }
  }
  return;
}

// DefaultConstructItems<FMovieSceneEvaluationHookComponent,int> @ 146071240

void __cdecl
DefaultConstructItems<FMovieSceneEvaluationHookComponent,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneFloatValue,int> @ 146071270

void __cdecl DefaultConstructItems<FMovieSceneFloatValue,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xd) = 0x2000000;
      *(undefined2 *)((longlong)puVar1 + 0x11) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x13) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x1c);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieScenePropertyBinding,int> @ 1460712b0

void __cdecl DefaultConstructItems<FMovieScenePropertyBinding,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneSequenceID,int> @ 1460712e0

void __cdecl DefaultConstructItems<FMovieSceneSequenceID,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<FMovieSceneTrackEvaluationData,int> @ 146071300

void __cdecl DefaultConstructItems<FMovieSceneTrackEvaluationData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0x80000000;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
      *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneTrackInstanceComponent,int> @ 146071340

void __cdecl DefaultConstructItems<FMovieSceneTrackInstanceComponent,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FObjectComponent,int> @ 146071370

void __cdecl DefaultConstructItems<UE::MovieScene::FObjectComponent,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FObjectKey,int> @ 1460713a0

void __cdecl DefaultConstructItems<FObjectKey,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FRootInstanceHandle,int> @ 1460713d0

void __cdecl
DefaultConstructItems<UE::MovieScene::FRootInstanceHandle,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffff;
    param_1 = (void *)((longlong)param_1 + 4);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FSourceBoolChannel,int> @ 146071400

void __cdecl
DefaultConstructItems<UE::MovieScene::FSourceBoolChannel,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FSourceByteChannel,int> @ 146071420

void __cdecl
DefaultConstructItems<UE::MovieScene::FSourceByteChannel,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FSourceDoubleChannel,int> @ 146071440

void __cdecl
DefaultConstructItems<UE::MovieScene::FSourceDoubleChannel,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FSourceFloatChannel,int> @ 146071460

void __cdecl
DefaultConstructItems<UE::MovieScene::FSourceFloatChannel,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FSourceIntegerChannel,int> @ 146071480

void __cdecl
DefaultConstructItems<UE::MovieScene::FSourceIntegerChannel,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FSourceObjectPathChannel,int> @ 1460714a0

void __cdecl
DefaultConstructItems<UE::MovieScene::FSourceObjectPathChannel,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FSourceStringChannel,int> @ 1460714c0

void __cdecl
DefaultConstructItems<UE::MovieScene::FSourceStringChannel,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FSourceTextChannel,int> @ 1460714e0

void __cdecl
DefaultConstructItems<UE::MovieScene::FSourceTextChannel,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<FTrackInstanceInputComponent,int> @ 146071500

void __cdecl DefaultConstructItems<FTrackInstanceInputComponent,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FVariantPropertyTypeIndex,int> @ 146071530

void __cdecl
DefaultConstructItems<UE::MovieScene::FVariantPropertyTypeIndex,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xff),(ulonglong)(uint)param_2);
    return;
  }
  return;
}

// DefaultConstructItems<TSubclassOf<UMovieSceneBlenderSystem>,int> @ 146071550

void __cdecl
DefaultConstructItems<TSubclassOf<UMovieSceneBlenderSystem>,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<FText,int> @ 146071570

void __cdecl DefaultConstructItems<FText,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FText::FText(param_1);
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefineChildComponent<FMovieSceneTrackInstanceComponent,FTrackInstanceInputComponent,`UE::MovieScene::FBuiltInComponentTypes::FBuiltInComponentTypes'::__l25::<lambda_1>_&> @ 1460715b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001460717cd) */
/* WARNING: Removing unreachable block (ram,0x0001460717d3) */
/* WARNING: Removing unreachable block (ram,0x0001460717d8) */
/* WARNING: Removing unreachable block (ram,0x0001460717ea) */

void __thiscall
UE::MovieScene::FEntityFactories::
DefineChildComponent<FMovieSceneTrackInstanceComponent,FTrackInstanceInputComponent,_UE::MovieScene::FBuiltInComponentTypes::FBuiltInComponentTypes_::__l25::<lambda_1>_&>
          (FEntityFactories *this,TComponentTypeID<FMovieSceneTrackInstanceComponent> param_1,
          TComponentTypeID<FTrackInstanceInputComponent> param_2,<lambda_1> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FComponentTypeID *pFVar7;
  undefined ******ppppppuVar8;
  byte bVar9;
  undefined ******ppppppuVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined *****local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  FComponentTypeID local_78 [4];
  FComponentTypeID local_70 [4];
  undefined *****local_68;
  TComponentTypeID<FMovieSceneTrackInstanceComponent> TStack_60;
  TComponentTypeID<FTrackInstanceInputComponent> TStack_5e;
  undefined4 uStack_5c;
  <lambda_1> *local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_78[0].Value = (ushort)param_2;
  local_70[0].Value = (ushort)param_1;
  pFVar7 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
           ::FindPair(&this->ParentToChildComponentTypes,local_70,local_78);
  if (pFVar7 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&this->ParentToChildComponentTypes,local_70,local_78);
  }
  local_28 = local_28 | 3;
  TStack_60 = param_1;
  TStack_5e = param_2;
  local_68 = (undefined *****)
             &TStaticChildEntityInitializer<FMovieSceneTrackInstanceComponent,FTrackInstanceInputComponent,`UE::MovieScene::FBuiltInComponentTypes::FBuiltInComponentTypes'::`25'::<lambda_1>_&>
              ::_vftable_;
  local_58 = param_3;
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    ppppppuVar10 = (undefined ******)local_68;
  }
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar8 = &local_68;
  if ((local_28 & 2) == 0) {
    ppppppuVar8 = (undefined ******)local_68;
  }
  if ((ppppppuVar10 != ppppppuVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->ChildInitializers).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
     (lVar11 = (longlong)(this->ChildInitializers).ArrayMax,
     (FScriptContainerElement *)&local_68 < pFVar2 + lVar11 * 0x48)) {
    local_90 = (longlong)(this->ChildInitializers).ArrayNum;
    local_88 = 0x48;
    local_a8 = (undefined *****)&local_68;
    local_a0 = pFVar2;
    local_98 = lVar11;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ChildInitializers).ArrayNum;
  piVar1 = &(this->ChildInitializers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)this,piVar1);
  }
  (this->ChildInitializers).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ChildInitializers).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x48;
  bVar9 = (byte)pFVar3[(longlong)iVar6 * 0x48 + 0x40] & 0xfe;
  pFVar2[0x40] = (FScriptContainerElement)(bVar9 | 2);
  if ((local_28 & 1) != 0) {
    pFVar2[0x40] = (FScriptContainerElement)(bVar9 | 3);
    pFVar2[0x40] = (FScriptContainerElement)
                   ((byte)pFVar2[0x40] ^ ((byte)pFVar2[0x40] ^ local_28 & 0xfe) & 2);
    *(undefined ******)pFVar2 = local_68;
    *(longlong *)(pFVar2 + 8) = CONCAT44(uStack_5c,CONCAT22(TStack_5e,TStack_60));
    *(<lambda_1> **)(pFVar2 + 0x10) = local_58;
    *(longlong *)(pFVar2 + 0x18) = lStack_50;
    *(undefined4 *)(pFVar2 + 0x20) = local_48;
    *(undefined4 *)(pFVar2 + 0x24) = uStack_44;
    *(undefined4 *)(pFVar2 + 0x28) = uStack_40;
    *(undefined4 *)(pFVar2 + 0x2c) = uStack_3c;
    *(undefined4 *)(pFVar2 + 0x30) = local_38;
    *(undefined4 *)(pFVar2 + 0x34) = uStack_34;
    *(undefined4 *)(pFVar2 + 0x38) = uStack_30;
    *(undefined4 *)(pFVar2 + 0x3c) = uStack_2c;
  }
  return;
}

// DestructItems<UE::MovieScene::FHierarchicalBlendTarget,int> @ 146071850

void __cdecl
DestructItems<UE::MovieScene::FHierarchicalBlendTarget,int>
          (FHierarchicalBlendTarget *param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = &param_1->Capacity;
    do {
      if (*puVar1 != 7) {
        operator_delete__(*(void **)((FHierarchicalBlendTarget *)(puVar1 + -7))->Data);
        *puVar1 = 7;
      }
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneEvalTemplatePtr,int> @ 1460718b0

void __cdecl
DestructItems<FMovieSceneEvalTemplatePtr,int>(FMovieSceneEvalTemplatePtr *param_1,int param_2)

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

// DestructItems<FMovieSceneEvaluationFieldEntityMetaData,int> @ 146071920

void __cdecl
DestructItems<FMovieSceneEvaluationFieldEntityMetaData,int>
          (FMovieSceneEvaluationFieldEntityMetaData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Condition).SoftObjectPtr.field_0x18;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneEvaluationGroup,int> @ 146071970

void __cdecl
DestructItems<FMovieSceneEvaluationGroup,int>(FMovieSceneEvaluationGroup *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->TrackLUT;
    do {
      pFVar1 = (((TArray<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FMovieSceneEvaluationGroup *)(pTVar2 + -1))->LUTIndices).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneEvaluationMetaData,int> @ 1460719d0

void __cdecl
DestructItems<FMovieSceneEvaluationMetaData,int>(FMovieSceneEvaluationMetaData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ActiveEntities).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ActiveSequences).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMovieSceneNestedSequenceTransform,int> @ 146071a20

void __cdecl
DestructItems<FMovieSceneNestedSequenceTransform,int>
          (FMovieSceneNestedSequenceTransform *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMovieSceneObjectPathChannelKeyValue,int> @ 146071a60

void __cdecl
DestructItems<FMovieSceneObjectPathChannelKeyValue,int>
          (FMovieSceneObjectPathChannelKeyValue *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftPtr).SoftObjectPtr.field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneSubSequenceTreeEntry,int> @ 146071aa0

void __cdecl
DestructItems<FMovieSceneSubSequenceTreeEntry,int>
          (FMovieSceneSubSequenceTreeEntry *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FMovieSceneSubSequenceTreeEntry::~FMovieSceneSubSequenceTreeEntry(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNavigationToolSerializedItem,int> @ 146071ae0

void __cdecl
DestructItems<FNavigationToolSerializedItem,int>(FNavigationToolSerializedItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Id).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNavigationToolViewSaveState,int> @ 146071b20

void __cdecl
DestructItems<FNavigationToolViewSaveState,int>(FNavigationToolViewSaveState *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ActiveItemFilters).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FNavigationToolViewColumnSaveState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      *(undefined4 *)(pFVar1 + -0x13) = 0;
      if (pFVar1[-0x14] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-0x14]);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,enum_ENavigationToolItemFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,enum_ENavigationToolItemFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (pFVar1 + -0x1c);
      pFVar1 = pFVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MovieScene::FPropertyDefinition,int> @ 146071bc0

void __cdecl
DestructItems<UE::MovieScene::FPropertyDefinition,int>(FPropertyDefinition *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &(param_1->Handler).field_0x20;
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
      pbVar3 = pbVar3 + 0x70;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FTrackInstancePropertyBindings,1>,int> @ 146071c30

void __cdecl
DestructItems<TSharedPtr<FTrackInstancePropertyBindings,1>,int>
          (TSharedPtr<FTrackInstancePropertyBindings,1> *param_1,int param_2)

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

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>_&> @ 146071c70

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x2)
  ;
  if (param_2->field_0x6 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x4);
  }
  if (param_2->field_0xa != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x8);
  }
  if (param_2->field_0x16 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x14);
  }
  if (param_2->field_0x20 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x1e);
  }
  if (param_2->field_0x2a != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x28);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>_&> @ 146071d10

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x2)
  ;
  if (param_2->field_0x6 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x4);
  }
  if (param_2->field_0xa != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x8);
  }
  if (param_2->field_0x16 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x14);
  }
  if (param_2->field_0x20 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x1e);
  }
  return;
}

// Do<`UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>::GenerateType'::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>_&> @ 146071d90

void __cdecl
UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>_&>
          (<lambda_1> *param_1,
          TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
          *param_2)

{
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)param_2);
  MovieScene::FComponentMask::Set(param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x2)
  ;
  if (param_2->field_0x6 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x4);
  }
  if (param_2->field_0xa != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x8);
  }
  if (param_2->field_0x16 != '\0') {
    MovieScene::FComponentMask::Set
              (param_1->OutMask,(FComponentTypeID)*(ushort *)&param_2->field_0x14);
  }
  return;
}

// GetFullNameForCastLogError<UMovieSceneEntitySystem> @ 146076710

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<UMovieSceneEntitySystem>
          (FString *__return_storage_ptr__,UMovieSceneEntitySystem *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneBlenderSystem> @ 146076740

FString * __cdecl GetTypeName<UMovieSceneBlenderSystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneBlenderSystem::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneScalingAnchors> @ 146076780

FString * __cdecl GetTypeName<UMovieSceneScalingAnchors>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneScalingAnchors::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneSequence> @ 1460767c0

FString * __cdecl GetTypeName<UMovieSceneSequence>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneTimeWarpDecoration> @ 146076800

FString * __cdecl GetTypeName<UMovieSceneTimeWarpDecoration>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneTimeWarpDecoration::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TScriptInterface<IMovieSceneTimeWarpSource>_const_,int,UE::Core::Private::TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const_>,TLess<void>_> @ 146076840

void __cdecl
AlgoImpl::
HeapSortInternal<TScriptInterface<IMovieSceneTimeWarpSource>_const_,int,UE::Core::Private::TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const_>,TLess<void>_>
          (TScriptInterface<IMovieSceneTimeWarpSource> *param_1,int param_2,
          TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const> param_3,
          TLess<void> param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar18;
  undefined8 uVar19;
  longlong lVar20;
  int iVar21;
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar22;
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar23;
  
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
  iVar15 = iVar12 * 2 + 1;
  iVar16 = iVar15;
  iVar17 = iVar12;
  do {
    while (param_2 <= iVar15) {
LAB_1460769a6:
      if (iVar17 == 0) {
        iVar15 = param_2 + -1;
        lVar20 = (longlong)iVar15;
        if (0 < iVar15) {
          pTVar18 = param_1 + lVar20;
          do {
            uVar2 = *(undefined4 *)&pTVar18->field_0x4;
            uVar3 = *(undefined4 *)&pTVar18->field_0x8;
            uVar4 = *(undefined4 *)&pTVar18->field_0xc;
            iVar16 = 0;
            uVar5 = *(undefined4 *)param_1;
            uVar6 = *(undefined4 *)&param_1->field_0x4;
            uVar7 = *(undefined4 *)&param_1->field_0x8;
            uVar8 = *(undefined4 *)&param_1->field_0xc;
            *(undefined4 *)param_1 = *(undefined4 *)pTVar18;
            *(undefined4 *)&param_1->field_0x4 = uVar2;
            *(undefined4 *)&param_1->field_0x8 = uVar3;
            *(undefined4 *)&param_1->field_0xc = uVar4;
            *(undefined4 *)pTVar18 = uVar5;
            *(undefined4 *)&pTVar18->field_0x4 = uVar6;
            *(undefined4 *)&pTVar18->field_0x8 = uVar7;
            *(undefined4 *)&pTVar18->field_0xc = uVar8;
            if (1 < iVar15) {
              do {
                iVar17 = iVar16 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar15) {
                  if (*(longlong *)(param_1 + (longlong)iVar17 + 2) == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = *(undefined8 *)&param_1[(longlong)iVar17 + 2].field_0x8;
                  }
                  iVar21 = (*(code *)param_3.MemberFunctionPtr)(uVar19);
                  iVar13 = (*(code *)param_3.MemberFunctionPtr)();
                  if (iVar21 < iVar13) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pTVar22 = param_1 + iVar16;
                iVar16 = (*(code *)param_3.MemberFunctionPtr)();
                pTVar23 = param_1 + iVar12;
                iVar17 = (*(code *)param_3.MemberFunctionPtr)();
                if (iVar17 <= iVar16) break;
                uVar2 = *(undefined4 *)&pTVar23->field_0x4;
                uVar3 = *(undefined4 *)&pTVar23->field_0x8;
                uVar4 = *(undefined4 *)&pTVar23->field_0xc;
                uVar5 = *(undefined4 *)pTVar22;
                uVar6 = *(undefined4 *)&pTVar22->field_0x4;
                uVar7 = *(undefined4 *)&pTVar22->field_0x8;
                uVar8 = *(undefined4 *)&pTVar22->field_0xc;
                *(undefined4 *)pTVar22 = *(undefined4 *)pTVar23;
                *(undefined4 *)&pTVar22->field_0x4 = uVar2;
                *(undefined4 *)&pTVar22->field_0x8 = uVar3;
                *(undefined4 *)&pTVar22->field_0xc = uVar4;
                *(undefined4 *)pTVar23 = uVar5;
                *(undefined4 *)&pTVar23->field_0x4 = uVar6;
                *(undefined4 *)&pTVar23->field_0x8 = uVar7;
                *(undefined4 *)&pTVar23->field_0xc = uVar8;
                iVar16 = iVar12;
              } while (iVar12 * 2 + 1 < iVar15);
            }
            iVar15 = iVar15 + -1;
            lVar20 = lVar20 + -1;
            pTVar18 = pTVar18 + -1;
          } while (0 < lVar20);
        }
        return;
      }
      iVar12 = iVar17 + -1;
      iVar15 = iVar16 + -2;
      iVar16 = iVar15;
      iVar17 = iVar12;
    }
    iVar15 = iVar12 * 2;
    iVar21 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      if (*(longlong *)(param_1 + (longlong)iVar15 + 2) == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined8 *)&param_1[(longlong)iVar15 + 2].field_0x8;
      }
      iVar13 = (*(code *)param_3.MemberFunctionPtr)(uVar19);
      iVar14 = (*(code *)param_3.MemberFunctionPtr)();
      if (iVar13 < iVar14) {
        iVar21 = iVar15;
      }
      iVar21 = iVar21 + 1;
    }
    pTVar18 = param_1 + iVar12;
    iVar15 = (*(code *)param_3.MemberFunctionPtr)();
    pTVar22 = param_1 + iVar21;
    iVar12 = (*(code *)param_3.MemberFunctionPtr)();
    if (iVar12 <= iVar15) goto LAB_1460769a6;
    uVar19 = *(undefined8 *)&pTVar22->field_0x8;
    iVar15 = iVar21 * 2 + 1;
    uVar9 = *(undefined8 *)pTVar18;
    uVar10 = *(undefined8 *)&pTVar18->field_0x8;
    *(undefined8 *)pTVar18 = *(undefined8 *)pTVar22;
    *(undefined8 *)&pTVar18->field_0x8 = uVar19;
    *(undefined8 *)pTVar22 = uVar9;
    *(undefined8 *)&pTVar22->field_0x8 = uVar10;
    iVar12 = iVar21;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<unsigned_char>::RemapTimes'::__l12::<lambda_1>_> @ 146076b40

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<unsigned_char>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TMovieSceneChannelData<unsigned_char> *local_res20;
  
  local_res20 = param_4.__this;
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
LAB_146076c48:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `TMovieSceneChannelData<unsigned_char>::RemapTimes'::__l12::<lambda_1>::
                          operator()(&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `TMovieSceneChannelData<unsigned_char>::RemapTimes'::__l12::<lambda_1>::
                        operator()(&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
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
      bVar3 = `TMovieSceneChannelData<unsigned_char>::RemapTimes'::__l12::<lambda_1>::operator()
                        (&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `TMovieSceneChannelData<unsigned_char>::RemapTimes'::__l12::<lambda_1>::operator()
                      (&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_146076c48;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<int>::RemapTimes'::__l12::<lambda_1>_> @ 146076d30

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<int>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TMovieSceneChannelData<int> *local_res20;
  
  local_res20 = param_4.__this;
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
LAB_146076e38:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `TMovieSceneChannelData<int>::RemapTimes'::__l12::<lambda_1>::operator()
                                    (&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `TMovieSceneChannelData<int>::RemapTimes'::__l12::<lambda_1>::operator()
                                  (&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
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
      bVar3 = `TMovieSceneChannelData<int>::RemapTimes'::__l12::<lambda_1>::operator()
                        (&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `TMovieSceneChannelData<int>::RemapTimes'::__l12::<lambda_1>::operator()
                      (&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_146076e38;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes'::__l12::<lambda_1>_> @ 146076f20

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TMovieSceneChannelData<FMovieSceneDoubleValue> *local_res20;
  
  local_res20 = param_4.__this;
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
LAB_146077028:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes'::__l12::
                          <lambda_1>::operator()
                                    (&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes'::__l12::
                        <lambda_1>::operator()(&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
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
      bVar3 = `TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes'::__l12::<lambda_1>::
              operator()(&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes'::__l12::<lambda_1>::
            operator()(&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_146077028;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes'::__l12::<lambda_1>_> @ 146077110

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TMovieSceneChannelData<FMovieSceneFloatValue> *local_res20;
  
  local_res20 = param_4.__this;
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
LAB_146077218:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes'::__l12::
                          <lambda_1>::operator()
                                    (&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes'::__l12::
                        <lambda_1>::operator()(&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
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
      bVar3 = `TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes'::__l12::<lambda_1>::
              operator()(&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes'::__l12::<lambda_1>::
            operator()(&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_146077218;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes'::__l12::<lambda_1>_> @ 146077300

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *local_res20;
  
  local_res20 = param_4.__this;
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
LAB_146077408:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes'
                          ::__l12::<lambda_1>::operator()
                                    (&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes'::
                        __l12::<lambda_1>::operator()(&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
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
      bVar3 = `TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes'::__l12::
              <lambda_1>::operator()(&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes'::__l12::
            <lambda_1>::operator()(&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_146077408;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<bool>::RemapTimes'::__l12::<lambda_1>_> @ 1460774f0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<bool>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TMovieSceneChannelData<bool> *local_res20;
  
  local_res20 = param_4.__this;
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
LAB_1460775f8:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `TMovieSceneChannelData<bool>::RemapTimes'::__l12::<lambda_1>::operator()
                                    (&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `TMovieSceneChannelData<bool>::RemapTimes'::__l12::<lambda_1>::operator()
                                  (&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
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
      bVar3 = `TMovieSceneChannelData<bool>::RemapTimes'::__l12::<lambda_1>::operator()
                        (&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `TMovieSceneChannelData<bool>::RemapTimes'::__l12::<lambda_1>::operator()
                      (&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_1460775f8;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FCompileOnTheFlyData,int,FIdentityFunctor,TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>_> @ 1460776e0

void __cdecl
AlgoImpl::
HeapSortInternal<FCompileOnTheFlyData,int,FIdentityFunctor,TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>_>
          (FCompileOnTheFlyData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>
          param_4)

{
  FCompileOnTheFlyData *pFVar1;
  FCompileOnTheFlyData *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FName FVar10;
  undefined8 uVar11;
  FName FVar12;
  undefined8 uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined2 uVar17;
  FMovieSceneSequenceID FVar18;
  ushort uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  bool bVar23;
  bool bVar24;
  undefined2 uVar25;
  FMovieSceneSequenceID FVar26;
  ESectionEvaluationFlags EVar27;
  undefined1 uVar28;
  ushort uVar29;
  ushort uVar30;
  ESectionEvaluationFlags EVar31;
  undefined1 uVar32;
  bool bVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  longlong lVar38;
  FCompileOnTheFlyData *pFVar39;
  int iVar40;
  
  if (param_2 < 0) {
    bVar33 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar33) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar33 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar33) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar34 = (param_2 + -2) / 2;
  iVar35 = iVar34 * 2 + 1;
  iVar40 = iVar35;
  iVar37 = iVar34;
  do {
    while (param_2 <= iVar35) {
LAB_146077824:
      if (iVar37 == 0) {
        iVar35 = param_2 + -1;
        lVar38 = (longlong)iVar35;
        if (0 < iVar35) {
          pFVar39 = param_1 + lVar38;
          do {
            sVar14 = pFVar39->HierarchicalBias;
            sVar15 = pFVar39->EvaluationPriority;
            sVar16 = pFVar39->ChildPriority;
            uVar4 = (pFVar39->EvaluationGroup).ComparisonIndex.Value;
            uVar5 = (pFVar39->EvaluationGroup).Number;
            iVar40 = (param_1->Child).ForcedTime.Value;
            uVar29 = param_1->GroupEvaluationPriority;
            sVar20 = param_1->HierarchicalBias;
            sVar21 = param_1->EvaluationPriority;
            sVar22 = param_1->ChildPriority;
            uVar6 = (param_1->EvaluationGroup).ComparisonIndex.Value;
            uVar7 = (param_1->EvaluationGroup).Number;
            bVar23 = param_1->bRequiresInit;
            bVar24 = param_1->bPriorityTearDown;
            uVar25 = *(undefined2 *)&param_1->field_0x12;
            uVar8 = (param_1->Track).SequenceID.Value;
            uVar9 = (param_1->Track).TrackIdentifier.Value;
            uVar30 = (param_1->Child).ChildIndex;
            EVar31 = (param_1->Child).Flags;
            uVar32 = (param_1->Child).field_0x3;
            param_1->GroupEvaluationPriority = pFVar39->GroupEvaluationPriority;
            param_1->HierarchicalBias = sVar14;
            param_1->EvaluationPriority = sVar15;
            param_1->ChildPriority = sVar16;
            (param_1->EvaluationGroup).ComparisonIndex.Value = uVar4;
            (param_1->EvaluationGroup).Number = uVar5;
            bVar33 = pFVar39->bPriorityTearDown;
            uVar17 = *(undefined2 *)&pFVar39->field_0x12;
            uVar4 = (pFVar39->Track).SequenceID.Value;
            uVar5 = (pFVar39->Track).TrackIdentifier.Value;
            uVar19 = (pFVar39->Child).ChildIndex;
            EVar27 = (pFVar39->Child).Flags;
            uVar28 = (pFVar39->Child).field_0x3;
            param_1->bRequiresInit = pFVar39->bRequiresInit;
            param_1->bPriorityTearDown = bVar33;
            *(undefined2 *)&param_1->field_0x12 = uVar17;
            (param_1->Track).SequenceID.Value = uVar4;
            (param_1->Track).TrackIdentifier.Value = uVar5;
            (param_1->Child).ChildIndex = uVar19;
            (param_1->Child).Flags = EVar27;
            (param_1->Child).field_0x3 = uVar28;
            (param_1->Child).ForcedTime.Value = (pFVar39->Child).ForcedTime.Value;
            pFVar39->GroupEvaluationPriority = uVar29;
            pFVar39->HierarchicalBias = sVar20;
            pFVar39->EvaluationPriority = sVar21;
            pFVar39->ChildPriority = sVar22;
            (pFVar39->EvaluationGroup).ComparisonIndex.Value = uVar6;
            (pFVar39->EvaluationGroup).Number = uVar7;
            pFVar39->bRequiresInit = bVar23;
            pFVar39->bPriorityTearDown = bVar24;
            *(undefined2 *)&pFVar39->field_0x12 = uVar25;
            (pFVar39->Track).SequenceID.Value = uVar8;
            (pFVar39->Track).TrackIdentifier.Value = uVar9;
            (pFVar39->Child).ChildIndex = uVar30;
            (pFVar39->Child).Flags = EVar31;
            (pFVar39->Child).field_0x3 = uVar32;
            (pFVar39->Child).ForcedTime.Value = iVar40;
            iVar40 = 0;
            if (1 < iVar35) {
              do {
                iVar37 = iVar40 * 2;
                iVar34 = iVar37 + 1;
                if (iVar37 + 2 < iVar35) {
                  bVar33 = (*param_4.Predicate)(param_1 + (iVar37 + 2),param_1 + iVar34);
                  if (bVar33) {
                    iVar34 = iVar37;
                  }
                  iVar34 = iVar34 + 1;
                }
                pFVar1 = param_1 + iVar34;
                pFVar2 = param_1 + iVar40;
                bVar33 = (*param_4.Predicate)(pFVar2,pFVar1);
                if (!bVar33) break;
                uVar29 = pFVar2->GroupEvaluationPriority;
                sVar20 = pFVar2->HierarchicalBias;
                sVar21 = pFVar2->EvaluationPriority;
                sVar22 = pFVar2->ChildPriority;
                uVar4 = (pFVar2->EvaluationGroup).ComparisonIndex.Value;
                uVar5 = (pFVar2->EvaluationGroup).Number;
                iVar40 = (pFVar2->Child).ForcedTime.Value;
                bVar23 = pFVar2->bRequiresInit;
                bVar24 = pFVar2->bPriorityTearDown;
                uVar25 = *(undefined2 *)&pFVar2->field_0x12;
                uVar6 = (pFVar2->Track).SequenceID.Value;
                uVar7 = (pFVar2->Track).TrackIdentifier.Value;
                uVar30 = (pFVar2->Child).ChildIndex;
                EVar31 = (pFVar2->Child).Flags;
                uVar32 = (pFVar2->Child).field_0x3;
                sVar14 = pFVar1->HierarchicalBias;
                sVar15 = pFVar1->EvaluationPriority;
                sVar16 = pFVar1->ChildPriority;
                uVar8 = (pFVar1->EvaluationGroup).ComparisonIndex.Value;
                uVar9 = (pFVar1->EvaluationGroup).Number;
                pFVar2->GroupEvaluationPriority = pFVar1->GroupEvaluationPriority;
                pFVar2->HierarchicalBias = sVar14;
                pFVar2->EvaluationPriority = sVar15;
                pFVar2->ChildPriority = sVar16;
                (pFVar2->EvaluationGroup).ComparisonIndex.Value = uVar8;
                (pFVar2->EvaluationGroup).Number = uVar9;
                bVar33 = pFVar1->bPriorityTearDown;
                uVar17 = *(undefined2 *)&pFVar1->field_0x12;
                uVar8 = (pFVar1->Track).SequenceID.Value;
                uVar9 = (pFVar1->Track).TrackIdentifier.Value;
                uVar19 = (pFVar1->Child).ChildIndex;
                EVar27 = (pFVar1->Child).Flags;
                uVar28 = (pFVar1->Child).field_0x3;
                pFVar2->bRequiresInit = pFVar1->bRequiresInit;
                pFVar2->bPriorityTearDown = bVar33;
                *(undefined2 *)&pFVar2->field_0x12 = uVar17;
                (pFVar2->Track).SequenceID.Value = uVar8;
                (pFVar2->Track).TrackIdentifier.Value = uVar9;
                (pFVar2->Child).ChildIndex = uVar19;
                (pFVar2->Child).Flags = EVar27;
                (pFVar2->Child).field_0x3 = uVar28;
                (pFVar2->Child).ForcedTime.Value = (pFVar1->Child).ForcedTime.Value;
                pFVar1->GroupEvaluationPriority = uVar29;
                pFVar1->HierarchicalBias = sVar20;
                pFVar1->EvaluationPriority = sVar21;
                pFVar1->ChildPriority = sVar22;
                (pFVar1->EvaluationGroup).ComparisonIndex.Value = uVar4;
                (pFVar1->EvaluationGroup).Number = uVar5;
                pFVar1->bRequiresInit = bVar23;
                pFVar1->bPriorityTearDown = bVar24;
                *(undefined2 *)&pFVar1->field_0x12 = uVar25;
                (pFVar1->Track).SequenceID.Value = uVar6;
                (pFVar1->Track).TrackIdentifier.Value = uVar7;
                (pFVar1->Child).ChildIndex = uVar30;
                (pFVar1->Child).Flags = EVar31;
                (pFVar1->Child).field_0x3 = uVar32;
                (pFVar1->Child).ForcedTime.Value = iVar40;
                iVar40 = iVar34;
              } while (iVar34 * 2 + 1 < iVar35);
            }
            iVar35 = iVar35 + -1;
            lVar38 = lVar38 + -1;
            pFVar39 = pFVar39 + -1;
          } while (0 < lVar38);
        }
        return;
      }
      iVar34 = iVar37 + -1;
      iVar35 = iVar40 + -2;
      iVar40 = iVar35;
      iVar37 = iVar34;
    }
    iVar35 = iVar34 * 2;
    iVar36 = iVar35 + 1;
    if (iVar35 + 2 < param_2) {
      bVar33 = (*param_4.Predicate)(param_1 + (iVar35 + 2),param_1 + iVar36);
      if (bVar33) {
        iVar36 = iVar35;
      }
      iVar36 = iVar36 + 1;
    }
    pFVar39 = param_1 + iVar36;
    pFVar1 = param_1 + iVar34;
    bVar33 = (*param_4.Predicate)(pFVar1,pFVar39);
    if (!bVar33) goto LAB_146077824;
    uVar19 = pFVar1->GroupEvaluationPriority;
    sVar20 = pFVar1->HierarchicalBias;
    sVar21 = pFVar1->EvaluationPriority;
    sVar22 = pFVar1->ChildPriority;
    FVar10 = pFVar1->EvaluationGroup;
    iVar34 = (pFVar1->Child).ForcedTime.Value;
    bVar23 = pFVar1->bRequiresInit;
    bVar24 = pFVar1->bPriorityTearDown;
    uVar25 = *(undefined2 *)&pFVar1->field_0x12;
    FVar26.Value = (pFVar1->Track).SequenceID.Value;
    uVar11 = *(undefined8 *)&(pFVar1->Track).TrackIdentifier;
    sVar14 = pFVar39->HierarchicalBias;
    sVar15 = pFVar39->EvaluationPriority;
    sVar16 = pFVar39->ChildPriority;
    FVar12 = pFVar39->EvaluationGroup;
    pFVar1->GroupEvaluationPriority = pFVar39->GroupEvaluationPriority;
    pFVar1->HierarchicalBias = sVar14;
    pFVar1->EvaluationPriority = sVar15;
    pFVar1->ChildPriority = sVar16;
    pFVar1->EvaluationGroup = FVar12;
    bVar33 = pFVar39->bPriorityTearDown;
    uVar17 = *(undefined2 *)&pFVar39->field_0x12;
    FVar18.Value = (pFVar39->Track).SequenceID.Value;
    uVar13 = *(undefined8 *)&(pFVar39->Track).TrackIdentifier;
    pFVar1->bRequiresInit = pFVar39->bRequiresInit;
    pFVar1->bPriorityTearDown = bVar33;
    *(undefined2 *)&pFVar1->field_0x12 = uVar17;
    (pFVar1->Track).SequenceID = (FMovieSceneSequenceID)FVar18.Value;
    *(undefined8 *)&(pFVar1->Track).TrackIdentifier = uVar13;
    (pFVar1->Child).ForcedTime.Value = (pFVar39->Child).ForcedTime.Value;
    iVar35 = iVar36 * 2 + 1;
    pFVar39->GroupEvaluationPriority = uVar19;
    pFVar39->HierarchicalBias = sVar20;
    pFVar39->EvaluationPriority = sVar21;
    pFVar39->ChildPriority = sVar22;
    pFVar39->EvaluationGroup = FVar10;
    pFVar39->bRequiresInit = bVar23;
    pFVar39->bPriorityTearDown = bVar24;
    *(undefined2 *)&pFVar39->field_0x12 = uVar25;
    (pFVar39->Track).SequenceID = (FMovieSceneSequenceID)FVar26.Value;
    *(undefined8 *)&(pFVar39->Track).TrackIdentifier = uVar11;
    (pFVar39->Child).ForcedTime.Value = iVar34;
    iVar34 = iVar36;
  } while( true );
}

// HeapSortInternal<FMovieSceneDeterminismFence,int,UE::Core::Private::TProjectionMemberData<FFrameNumber_FMovieSceneDeterminismFence::*>,TLess<void>_> @ 146077960

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneDeterminismFence,int,UE::Core::Private::TProjectionMemberData<FFrameNumber_FMovieSceneDeterminismFence::*>,TLess<void>_>
          (FMovieSceneDeterminismFence *param_1,int param_2,
          TProjectionMemberData<FFrameNumber_FMovieSceneDeterminismFence::*> param_3,
          TLess<void> param_4)

{
  FMovieSceneDeterminismFence FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  lVar6 = (longlong)(int)param_3.DataMemberPtr;
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
  iVar10 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_146077a71:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar10 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = FVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar10 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  if (*(int *)((longlong)&param_1[(longlong)iVar7 + 2].FrameNumber.Value + lVar6) <
                      *(int *)((longlong)&param_1[iVar4].FrameNumber.Value + lVar6)) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (*(int *)((longlong)&param_1[iVar4].FrameNumber.Value + lVar6) <=
                    *(int *)((longlong)&param_1[iVar10].FrameNumber.Value + lVar6)) break;
                FVar1 = param_1[iVar10];
                param_1[iVar10] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar10 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar10 + -2;
      iVar10 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar9 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (*(int *)((longlong)&param_1[(longlong)iVar5 + 2].FrameNumber.Value + lVar6) <
          *(int *)((longlong)&param_1[iVar9].FrameNumber.Value + lVar6)) {
        iVar9 = iVar5;
      }
      iVar9 = iVar9 + 1;
    }
    if (*(int *)((longlong)&param_1[iVar9].FrameNumber.Value + lVar6) <=
        *(int *)((longlong)&param_1[iVar4].FrameNumber.Value + lVar6)) goto LAB_146077a71;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar9];
    iVar5 = iVar9 * 2 + 1;
    param_1[iVar9] = FVar1;
    iVar4 = iVar9;
  } while( true );
}

// HeapSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_> @ 146077b60

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_>
          (FMovieSceneOrderedEvaluationKey *param_1,int param_2,
          TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*> param_3
          ,TLess<void> param_4)

{
  longlong lVar1;
  longlong lVar2;
  FMovieSceneOrderedEvaluationKey *pFVar3;
  FMovieSceneOrderedEvaluationKey *pFVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FMovieSceneTrackIdentifier FVar11;
  FMovieSceneSequenceID FVar12;
  FMovieSceneTrackIdentifier FVar13;
  bool bVar14;
  int iVar15;
  longlong lVar16;
  FMovieSceneOrderedEvaluationKey *pFVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  TLess<void> local_res20 [8];
  
  lVar16 = (longlong)(int)param_3.DataMemberPtr;
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>,TReversePredicate<TLess<void>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar18 = param_2 + -1;
  lVar20 = (longlong)iVar18;
  if (0 < iVar18) {
    pFVar17 = param_1 + lVar20;
    do {
      FVar11.Value = (pFVar17->Key).TrackIdentifier.Value;
      uVar9 = *(undefined8 *)&(pFVar17->Key).SectionIndex;
      iVar19 = 0;
      FVar12.Value = (param_1->Key).SequenceID.Value;
      FVar13.Value = (param_1->Key).TrackIdentifier.Value;
      uVar10 = *(undefined8 *)&(param_1->Key).SectionIndex;
      (param_1->Key).SequenceID = (FMovieSceneSequenceID)(pFVar17->Key).SequenceID.Value;
      (param_1->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar11.Value;
      *(undefined8 *)&(param_1->Key).SectionIndex = uVar9;
      (pFVar17->Key).SequenceID = (FMovieSceneSequenceID)FVar12.Value;
      (pFVar17->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar13.Value;
      *(undefined8 *)&(pFVar17->Key).SectionIndex = uVar10;
      if (1 < iVar18) {
        do {
          iVar8 = iVar19 * 2;
          iVar15 = iVar8 + 1;
          if (iVar8 + 2 < iVar18) {
            lVar1 = (longlong)iVar8 + 1;
            lVar2 = (longlong)iVar8 + 2;
            uVar5 = *(uint *)((longlong)&param_1[lVar1].Key.SequenceID.Value + lVar16);
            uVar6 = *(uint *)((longlong)&param_1[lVar2].Key.SequenceID.Value + lVar16);
            if (uVar6 < uVar5) {
              bVar14 = true;
            }
            else if (uVar5 < uVar6) {
LAB_146077c64:
              bVar14 = false;
            }
            else {
              uVar5 = *(uint *)((longlong)&param_1[lVar1].Key.TrackIdentifier.Value + lVar16);
              uVar6 = *(uint *)((longlong)&param_1[lVar2].Key.TrackIdentifier.Value + lVar16);
              if (uVar6 < uVar5) {
                bVar14 = true;
              }
              else {
                if ((uVar6 != uVar5) ||
                   (*(uint *)((longlong)&param_1[lVar1].Key.SectionIndex + lVar16) <=
                    *(uint *)((longlong)&param_1[lVar2].Key.SectionIndex + lVar16)))
                goto LAB_146077c64;
                bVar14 = true;
              }
            }
            if (bVar14) {
              iVar15 = iVar8;
            }
            iVar15 = iVar15 + 1;
          }
          uVar5 = *(uint *)((longlong)&param_1[iVar15].Key.SequenceID.Value + lVar16);
          uVar6 = *(uint *)((longlong)&param_1[iVar19].Key.SequenceID.Value + lVar16);
          if ((uVar5 <= uVar6) &&
             ((uVar6 != uVar5 ||
              ((uVar5 = *(uint *)((longlong)&param_1[iVar15].Key.TrackIdentifier.Value + lVar16),
               uVar6 = *(uint *)((longlong)&param_1[iVar19].Key.TrackIdentifier.Value + lVar16),
               uVar5 <= uVar6 &&
               ((uVar6 != uVar5 ||
                (*(uint *)((longlong)&param_1[iVar15].Key.SectionIndex + lVar16) <=
                 *(uint *)((longlong)&param_1[iVar19].Key.SectionIndex + lVar16))))))))) break;
          pFVar3 = param_1 + iVar15;
          FVar11.Value = (pFVar3->Key).TrackIdentifier.Value;
          uVar9 = *(undefined8 *)&(pFVar3->Key).SectionIndex;
          pFVar4 = param_1 + iVar19;
          FVar12.Value = (pFVar4->Key).SequenceID.Value;
          FVar13.Value = (pFVar4->Key).TrackIdentifier.Value;
          uVar10 = *(undefined8 *)&(pFVar4->Key).SectionIndex;
          pFVar4 = param_1 + iVar19;
          (pFVar4->Key).SequenceID = (FMovieSceneSequenceID)(pFVar3->Key).SequenceID.Value;
          (pFVar4->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar11.Value;
          *(undefined8 *)&(pFVar4->Key).SectionIndex = uVar9;
          pFVar3 = param_1 + iVar15;
          (pFVar3->Key).SequenceID = (FMovieSceneSequenceID)FVar12.Value;
          (pFVar3->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar13.Value;
          *(undefined8 *)&(pFVar3->Key).SectionIndex = uVar10;
          iVar19 = iVar15;
        } while (iVar15 * 2 + 1 < iVar18);
      }
      iVar18 = iVar18 + -1;
      lVar20 = lVar20 + -1;
      pFVar17 = pFVar17 + -1;
    } while (0 < lVar20);
  }
  return;
}

// HeapSortInternal<FMovieSceneSectionData,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneSectionData::*>,TLess<void>_> @ 146077d00

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneSectionData,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneSectionData::*>,TLess<void>_>
          (FMovieSceneSectionData *param_1,int param_2,
          TProjectionMemberData<int_FMovieSceneSectionData::*> param_3,TLess<void> param_4)

{
  FMovieSceneSectionData *pFVar1;
  FMovieSceneSectionData *pFVar2;
  code *pcVar3;
  UMovieSceneSection *pUVar4;
  int iVar5;
  ESectionEvaluationFlags EVar6;
  undefined3 uVar7;
  int iVar8;
  ESectionEvaluationFlags EVar9;
  undefined3 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FMovieSceneSectionData *pFVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  
  lVar15 = (longlong)(int)param_3.DataMemberPtr;
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar14 = iVar13;
  iVar18 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_146077e14:
      if (iVar18 == 0) {
        iVar13 = param_2 + -1;
        lVar19 = (longlong)iVar13;
        if (0 < iVar13) {
          pFVar16 = param_1 + lVar19;
          do {
            iVar14 = pFVar16->TemplateIndex;
            EVar6 = pFVar16->Flags;
            uVar7 = *(undefined3 *)&pFVar16->field_0xd;
            iVar18 = 0;
            pUVar4 = param_1->Section;
            iVar12 = param_1->TemplateIndex;
            EVar9 = param_1->Flags;
            uVar10 = *(undefined3 *)&param_1->field_0xd;
            param_1->Section = pFVar16->Section;
            param_1->TemplateIndex = iVar14;
            param_1->Flags = EVar6;
            *(undefined3 *)&param_1->field_0xd = uVar7;
            pFVar16->Section = pUVar4;
            pFVar16->TemplateIndex = iVar12;
            pFVar16->Flags = EVar9;
            *(undefined3 *)&pFVar16->field_0xd = uVar10;
            if (1 < iVar13) {
              do {
                iVar12 = iVar18 * 2;
                iVar14 = iVar12 + 1;
                if (iVar12 + 2 < iVar13) {
                  if (*(int *)((longlong)&param_1[(longlong)iVar12 + 2].Section + lVar15) <
                      *(int *)((longlong)&param_1[iVar14].Section + lVar15)) {
                    iVar14 = iVar12;
                  }
                  iVar14 = iVar14 + 1;
                }
                if (*(int *)((longlong)&param_1[iVar14].Section + lVar15) <=
                    *(int *)((longlong)&param_1[iVar18].Section + lVar15)) break;
                pFVar1 = param_1 + iVar18;
                pUVar4 = pFVar1->Section;
                iVar17 = pFVar1->TemplateIndex;
                EVar9 = pFVar1->Flags;
                uVar10 = *(undefined3 *)&pFVar1->field_0xd;
                pFVar1 = param_1 + iVar14;
                iVar12 = pFVar1->TemplateIndex;
                EVar6 = pFVar1->Flags;
                uVar7 = *(undefined3 *)&pFVar1->field_0xd;
                pFVar2 = param_1 + iVar18;
                pFVar2->Section = pFVar1->Section;
                pFVar2->TemplateIndex = iVar12;
                pFVar2->Flags = EVar6;
                *(undefined3 *)&pFVar2->field_0xd = uVar7;
                pFVar1 = param_1 + iVar14;
                pFVar1->Section = pUVar4;
                pFVar1->TemplateIndex = iVar17;
                pFVar1->Flags = EVar9;
                *(undefined3 *)&pFVar1->field_0xd = uVar10;
                iVar18 = iVar14;
              } while (iVar14 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar19 = lVar19 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar19);
        }
        return;
      }
      iVar12 = iVar18 + -1;
      iVar13 = iVar14 + -2;
      iVar14 = iVar13;
      iVar18 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar17 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (*(int *)((longlong)&param_1[(longlong)iVar13 + 2].Section + lVar15) <
          *(int *)((longlong)&param_1[iVar17].Section + lVar15)) {
        iVar17 = iVar13;
      }
      iVar17 = iVar17 + 1;
    }
    if (*(int *)((longlong)&param_1[iVar17].Section + lVar15) <=
        *(int *)((longlong)&param_1[iVar12].Section + lVar15)) goto LAB_146077e14;
    pFVar16 = param_1 + iVar12;
    pUVar4 = pFVar16->Section;
    iVar8 = pFVar16->TemplateIndex;
    EVar9 = pFVar16->Flags;
    uVar10 = *(undefined3 *)&pFVar16->field_0xd;
    iVar13 = iVar17 * 2 + 1;
    pFVar16 = param_1 + iVar17;
    iVar5 = pFVar16->TemplateIndex;
    EVar6 = pFVar16->Flags;
    uVar7 = *(undefined3 *)&pFVar16->field_0xd;
    pFVar1 = param_1 + iVar12;
    pFVar1->Section = pFVar16->Section;
    pFVar1->TemplateIndex = iVar5;
    pFVar1->Flags = EVar6;
    *(undefined3 *)&pFVar1->field_0xd = uVar7;
    pFVar16 = param_1 + iVar17;
    pFVar16->Section = pUVar4;
    pFVar16->TemplateIndex = iVar8;
    pFVar16->Flags = EVar9;
    *(undefined3 *)&pFVar16->field_0xd = uVar10;
    iVar12 = iVar17;
  } while( true );
}

// HeapSortInternal<FMovieSceneSequenceID,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSequenceID,TLess<void>_>_> @ 146077f10

void __cdecl
AlgoImpl::
HeapSortInternal<FMovieSceneSequenceID,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSequenceID,TLess<void>_>_>
          (FMovieSceneSequenceID *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneSequenceID,TLess<void>_> param_4)

{
  uint uVar1;
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
  iVar8 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_146077fee:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            uVar1 = param_1->Value;
            iVar8 = 0;
            param_1->Value = param_1[lVar9].Value;
            param_1[lVar9].Value = uVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2].Value < param_1[iVar6].Value) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                uVar1 = param_1[iVar8].Value;
                if (param_1[iVar6].Value <= uVar1) break;
                param_1[iVar8].Value = param_1[iVar6].Value;
                param_1[iVar6].Value = uVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2].Value < param_1[iVar7].Value) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    uVar1 = param_1[iVar4].Value;
    if (param_1[iVar7].Value <= uVar1) goto LAB_146077fee;
    param_1[iVar4].Value = param_1[iVar7].Value;
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7].Value = uVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>_>_> @ 1460780a0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>_>_>
          (FSortedSection *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UMovieSceneSection *pUVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  FSortedSection *pFVar16;
  FSortedSection *pFVar17;
  FSortedSection *pFVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  do {
    if (iVar12 < param_2) {
      iVar15 = iVar11;
      do {
        iVar2 = iVar15 * 2;
        iVar14 = iVar2 + 1;
        if (iVar2 + 2 < param_2) {
          cVar10 = (**(code **)param_4.Predicate)
                             (*(undefined8 *)&(param_4.Predicate)->field_0x8,param_1 + (iVar2 + 2),
                              param_1 + iVar14);
          if (cVar10 != '\0') {
            iVar14 = iVar2;
          }
          iVar14 = iVar14 + 1;
        }
        pFVar16 = param_1 + iVar14;
        pFVar17 = param_1 + iVar15;
        cVar10 = (**(code **)param_4.Predicate)
                           (*(undefined8 *)&(param_4.Predicate)->field_0x8,pFVar17,pFVar16);
        if (cVar10 == '\0') break;
        pUVar8 = pFVar17->Section;
        iVar2 = pFVar17->Index;
        uVar4 = *(undefined4 *)&pFVar17->field_0xc;
        iVar15 = pFVar16->Index;
        uVar3 = *(undefined4 *)&pFVar16->field_0xc;
        pFVar17->Section = pFVar16->Section;
        pFVar17->Index = iVar15;
        *(undefined4 *)&pFVar17->field_0xc = uVar3;
        pFVar16->Section = pUVar8;
        pFVar16->Index = iVar2;
        *(undefined4 *)&pFVar16->field_0xc = uVar4;
        iVar15 = iVar14;
      } while (iVar14 * 2 + 1 < param_2);
    }
    if (iVar11 == 0) {
      iVar12 = param_2 + -1;
      lVar13 = (longlong)iVar12;
      if (0 < iVar12) {
        pFVar16 = param_1 + lVar13;
        do {
          uVar3 = *(undefined4 *)((longlong)&pFVar16->Section + 4);
          iVar11 = pFVar16->Index;
          uVar4 = *(undefined4 *)&pFVar16->field_0xc;
          uVar5 = *(undefined4 *)&param_1->Section;
          uVar6 = *(undefined4 *)((longlong)&param_1->Section + 4);
          iVar15 = param_1->Index;
          uVar7 = *(undefined4 *)&param_1->field_0xc;
          *(undefined4 *)&param_1->Section = *(undefined4 *)&pFVar16->Section;
          *(undefined4 *)((longlong)&param_1->Section + 4) = uVar3;
          param_1->Index = iVar11;
          *(undefined4 *)&param_1->field_0xc = uVar4;
          *(undefined4 *)&pFVar16->Section = uVar5;
          *(undefined4 *)((longlong)&pFVar16->Section + 4) = uVar6;
          pFVar16->Index = iVar15;
          *(undefined4 *)&pFVar16->field_0xc = uVar7;
          if (1 < iVar12) {
            iVar11 = 0;
            do {
              iVar14 = iVar11 * 2;
              iVar15 = iVar14 + 1;
              if (iVar14 + 2 < iVar12) {
                cVar10 = (**(code **)param_4.Predicate)
                                   (*(undefined8 *)&(param_4.Predicate)->field_0x8,
                                    param_1 + (iVar14 + 2),param_1 + iVar15);
                if (cVar10 != '\0') {
                  iVar15 = iVar14;
                }
                iVar15 = iVar15 + 1;
              }
              pFVar17 = param_1 + iVar15;
              pFVar18 = param_1 + iVar11;
              cVar10 = (**(code **)param_4.Predicate)
                                 (*(undefined8 *)&(param_4.Predicate)->field_0x8,pFVar18,pFVar17);
              if (cVar10 == '\0') break;
              uVar3 = *(undefined4 *)&pFVar18->Section;
              uVar4 = *(undefined4 *)((longlong)&pFVar18->Section + 4);
              iVar11 = pFVar18->Index;
              uVar5 = *(undefined4 *)&pFVar18->field_0xc;
              uVar6 = *(undefined4 *)((longlong)&pFVar17->Section + 4);
              iVar14 = pFVar17->Index;
              uVar7 = *(undefined4 *)&pFVar17->field_0xc;
              *(undefined4 *)&pFVar18->Section = *(undefined4 *)&pFVar17->Section;
              *(undefined4 *)((longlong)&pFVar18->Section + 4) = uVar6;
              pFVar18->Index = iVar14;
              *(undefined4 *)&pFVar18->field_0xc = uVar7;
              *(undefined4 *)&pFVar17->Section = uVar3;
              *(undefined4 *)((longlong)&pFVar17->Section + 4) = uVar4;
              pFVar17->Index = iVar11;
              *(undefined4 *)&pFVar17->field_0xc = uVar5;
              iVar11 = iVar15;
            } while (iVar15 * 2 + 1 < iVar12);
          }
          lVar13 = lVar13 + -1;
          pFVar16 = pFVar16 + -1;
          iVar12 = iVar12 + -1;
        } while (0 < lVar13);
      }
      return;
    }
    iVar11 = iVar11 + -1;
    iVar12 = iVar12 + -2;
  } while( true );
}

// HeapSortInternal<UE::MovieScene::FWeightedValue,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FWeightedValue,TLess<void>_>_> @ 146078320

void __cdecl
AlgoImpl::
HeapSortInternal<UE::MovieScene::FWeightedValue,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FWeightedValue,TLess<void>_>_>
          (FWeightedValue *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::MovieScene::FWeightedValue,TLess<void>_> param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  undefined3 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  FWeightedValue *pFVar18;
  FWeightedValue *pFVar19;
  int iVar20;
  FWeightedValue *pFVar21;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar15 = iVar14;
  iVar20 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_146078426:
      if (iVar20 == 0) {
        iVar14 = param_2 + -1;
        lVar17 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar21 = param_1 + lVar17;
          do {
            fVar4 = pFVar21->Weight;
            uVar5 = *(undefined4 *)&pFVar21->field_0xc;
            iVar20 = 0;
            dVar2 = param_1->Value;
            fVar7 = param_1->Weight;
            uVar8 = *(undefined4 *)&param_1->field_0xc;
            dVar3 = param_1->BaseValue;
            iVar13 = param_1->BlendingOrder;
            bVar10 = param_1->bIsAdditive;
            uVar11 = *(undefined3 *)&param_1->field_0x1d;
            param_1->Value = pFVar21->Value;
            param_1->Weight = fVar4;
            *(undefined4 *)&param_1->field_0xc = uVar5;
            iVar15 = pFVar21->BlendingOrder;
            bVar12 = pFVar21->bIsAdditive;
            uVar6 = *(undefined3 *)&pFVar21->field_0x1d;
            param_1->BaseValue = pFVar21->BaseValue;
            param_1->BlendingOrder = iVar15;
            param_1->bIsAdditive = bVar12;
            *(undefined3 *)&param_1->field_0x1d = uVar6;
            pFVar21->Value = dVar2;
            pFVar21->Weight = fVar7;
            *(undefined4 *)&pFVar21->field_0xc = uVar8;
            pFVar21->BaseValue = dVar3;
            pFVar21->BlendingOrder = iVar13;
            pFVar21->bIsAdditive = bVar10;
            *(undefined3 *)&pFVar21->field_0x1d = uVar11;
            if (1 < iVar14) {
              do {
                iVar13 = iVar20 * 2;
                iVar15 = iVar13 + 1;
                if (iVar13 + 2 < iVar14) {
                  if (param_1[(longlong)iVar13 + 2].BlendingOrder < param_1[iVar15].BlendingOrder) {
                    iVar15 = iVar13;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar18 = param_1 + iVar15;
                pFVar19 = param_1 + iVar20;
                if (pFVar18->BlendingOrder <= pFVar19->BlendingOrder) break;
                fVar4 = pFVar18->Weight;
                uVar5 = *(undefined4 *)&pFVar18->field_0xc;
                dVar2 = pFVar19->Value;
                fVar7 = pFVar19->Weight;
                uVar8 = *(undefined4 *)&pFVar19->field_0xc;
                dVar3 = pFVar19->BaseValue;
                iVar20 = pFVar19->BlendingOrder;
                bVar10 = pFVar19->bIsAdditive;
                uVar11 = *(undefined3 *)&pFVar19->field_0x1d;
                pFVar19->Value = pFVar18->Value;
                pFVar19->Weight = fVar4;
                *(undefined4 *)&pFVar19->field_0xc = uVar5;
                iVar13 = pFVar18->BlendingOrder;
                bVar12 = pFVar18->bIsAdditive;
                uVar6 = *(undefined3 *)&pFVar18->field_0x1d;
                pFVar19->BaseValue = pFVar18->BaseValue;
                pFVar19->BlendingOrder = iVar13;
                pFVar19->bIsAdditive = bVar12;
                *(undefined3 *)&pFVar19->field_0x1d = uVar6;
                pFVar18->Value = dVar2;
                pFVar18->Weight = fVar7;
                *(undefined4 *)&pFVar18->field_0xc = uVar8;
                pFVar18->BaseValue = dVar3;
                pFVar18->BlendingOrder = iVar20;
                pFVar18->bIsAdditive = bVar10;
                *(undefined3 *)&pFVar18->field_0x1d = uVar11;
                iVar20 = iVar15;
              } while (iVar15 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar17 = lVar17 + -1;
            pFVar21 = pFVar21 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar13 = iVar20 + -1;
      iVar14 = iVar15 + -2;
      iVar15 = iVar14;
      iVar20 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar16 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].BlendingOrder < param_1[iVar16].BlendingOrder) {
        iVar16 = iVar14;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar21 = param_1 + iVar16;
    pFVar18 = param_1 + iVar13;
    if (pFVar21->BlendingOrder <= pFVar18->BlendingOrder) goto LAB_146078426;
    fVar4 = pFVar21->Weight;
    uVar5 = *(undefined4 *)&pFVar21->field_0xc;
    iVar14 = iVar16 * 2 + 1;
    dVar2 = pFVar18->Value;
    fVar7 = pFVar18->Weight;
    uVar8 = *(undefined4 *)&pFVar18->field_0xc;
    dVar3 = pFVar18->BaseValue;
    iVar9 = pFVar18->BlendingOrder;
    bVar10 = pFVar18->bIsAdditive;
    uVar11 = *(undefined3 *)&pFVar18->field_0x1d;
    pFVar18->Value = pFVar21->Value;
    pFVar18->Weight = fVar4;
    *(undefined4 *)&pFVar18->field_0xc = uVar5;
    iVar13 = pFVar21->BlendingOrder;
    bVar12 = pFVar21->bIsAdditive;
    uVar6 = *(undefined3 *)&pFVar21->field_0x1d;
    pFVar18->BaseValue = pFVar21->BaseValue;
    pFVar18->BlendingOrder = iVar13;
    pFVar18->bIsAdditive = bVar12;
    *(undefined3 *)&pFVar18->field_0x1d = uVar6;
    pFVar21->Value = dVar2;
    pFVar21->Weight = fVar7;
    *(undefined4 *)&pFVar21->field_0xc = uVar8;
    pFVar21->BaseValue = dVar3;
    pFVar21->BlendingOrder = iVar9;
    pFVar21->bIsAdditive = bVar10;
    *(undefined3 *)&pFVar21->field_0x1d = uVar11;
    iVar13 = iVar16;
  } while( true );
}

// HeapifyInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>,TReversePredicate<TLess<void>_>_> @ 146078520

void __cdecl
AlgoImpl::
HeapifyInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>,TReversePredicate<TLess<void>_>_>
          (FMovieSceneOrderedEvaluationKey *param_1,int param_2,
          TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*> param_3
          ,TReversePredicate<TLess<void>_> param_4)

{
  longlong lVar1;
  longlong lVar2;
  FMovieSceneOrderedEvaluationKey *pFVar3;
  FMovieSceneOrderedEvaluationKey *pFVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FMovieSceneTrackIdentifier FVar11;
  FMovieSceneSequenceID FVar12;
  FMovieSceneTrackIdentifier FVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  
  lVar18 = (longlong)(int)param_3.DataMemberPtr;
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar8 = iVar16;
  iVar19 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14607866e:
      if (iVar19 == 0) {
        return;
      }
      iVar15 = iVar19 + -1;
      iVar16 = iVar8 + -2;
      iVar8 = iVar16;
      iVar19 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar17 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      lVar1 = (longlong)iVar16 + 1;
      lVar2 = (longlong)iVar16 + 2;
      uVar5 = *(uint *)((longlong)&param_1[lVar1].Key.SequenceID.Value + lVar18);
      uVar6 = *(uint *)((longlong)&param_1[lVar2].Key.SequenceID.Value + lVar18);
      if (uVar6 < uVar5) {
        bVar14 = true;
      }
      else if (uVar5 < uVar6) {
LAB_146078604:
        bVar14 = false;
      }
      else {
        uVar5 = *(uint *)((longlong)&param_1[lVar1].Key.TrackIdentifier.Value + lVar18);
        uVar6 = *(uint *)((longlong)&param_1[lVar2].Key.TrackIdentifier.Value + lVar18);
        if (uVar6 < uVar5) {
          bVar14 = true;
        }
        else {
          if ((uVar6 != uVar5) ||
             (*(uint *)((longlong)&param_1[lVar1].Key.SectionIndex + lVar18) <=
              *(uint *)((longlong)&param_1[lVar2].Key.SectionIndex + lVar18))) goto LAB_146078604;
          bVar14 = true;
        }
      }
      if (bVar14) {
        iVar17 = iVar16;
      }
      iVar17 = iVar17 + 1;
    }
    uVar5 = *(uint *)((longlong)&param_1[iVar17].Key.SequenceID.Value + lVar18);
    uVar6 = *(uint *)((longlong)&param_1[iVar15].Key.SequenceID.Value + lVar18);
    if ((uVar5 <= uVar6) &&
       ((uVar6 != uVar5 ||
        ((uVar5 = *(uint *)((longlong)&param_1[iVar17].Key.TrackIdentifier.Value + lVar18),
         uVar6 = *(uint *)((longlong)&param_1[iVar15].Key.TrackIdentifier.Value + lVar18),
         uVar5 <= uVar6 &&
         ((uVar6 != uVar5 ||
          (*(uint *)((longlong)&param_1[iVar17].Key.SectionIndex + lVar18) <=
           *(uint *)((longlong)&param_1[iVar15].Key.SectionIndex + lVar18)))))))))
    goto LAB_14607866e;
    pFVar3 = param_1 + iVar17;
    FVar11.Value = (pFVar3->Key).TrackIdentifier.Value;
    uVar9 = *(undefined8 *)&(pFVar3->Key).SectionIndex;
    iVar16 = iVar17 * 2 + 1;
    pFVar4 = param_1 + iVar15;
    FVar12.Value = (pFVar4->Key).SequenceID.Value;
    FVar13.Value = (pFVar4->Key).TrackIdentifier.Value;
    uVar10 = *(undefined8 *)&(pFVar4->Key).SectionIndex;
    pFVar4 = param_1 + iVar15;
    (pFVar4->Key).SequenceID = (FMovieSceneSequenceID)(pFVar3->Key).SequenceID.Value;
    (pFVar4->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar11.Value;
    *(undefined8 *)&(pFVar4->Key).SectionIndex = uVar9;
    pFVar3 = param_1 + iVar17;
    (pFVar3->Key).SequenceID = (FMovieSceneSequenceID)FVar12.Value;
    (pFVar3->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar13.Value;
    *(undefined8 *)&(pFVar3->Key).SectionIndex = uVar10;
    iVar15 = iVar17;
  } while( true );
}

// InternalConstructor<UMovieSceneBindingLifetimeSystem> @ 1460786e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneBindingLifetimeSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar1;
  UClass *local_res8;
  UClass *local_res10 [3];
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->Phase = Instantiation|Spawn;
    this->_padding_ = (longlong)&___7UMovieSceneBindingLifetimeSystem__6B_;
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    (this->RelevantComponent).Value = (ushort)pFVar1->BindingLifetime;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      local_res10[0] = (UClass *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res10[0]);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
      local_res8 = (UClass *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      local_res10[0] = UMovieSceneGenericBoundObjectInstantiator::StaticClass();
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

// InternalConstructor<UMovieSceneBlenderSystem> @ 1460787d0

void __cdecl InternalConstructor<UMovieSceneBlenderSystem>(FObjectInitializer *param_1)

{
  if ((UMovieSceneBlenderSystem *)param_1->Obj != (UMovieSceneBlenderSystem *)0x0) {
    UMovieSceneBlenderSystem::UMovieSceneBlenderSystem
              ((UMovieSceneBlenderSystem *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneBoundSceneComponentInstantiator> @ 1460787f0

void __cdecl
InternalConstructor<UMovieSceneBoundSceneComponentInstantiator>(FObjectInitializer *param_1)

{
  UMovieSceneEntityInstantiatorSystem *this;
  FBuiltInComponentTypes *pFVar1;
  UClass *local_res8;
  UObject *local_res10 [3];
  
  this = (UMovieSceneEntityInstantiatorSystem *)param_1->Obj;
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneBoundSceneComponentInstantiator__6B_;
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    *(TComponentTypeID<FGuid> *)&this->field_0x30 = pFVar1->SceneComponentBinding;
    if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
      local_res8 = UMovieSceneGenericBoundObjectInstantiator::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      local_res10[0] = *(UObject **)&this->field_0x10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(local_res10[0]);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneChannelOverrideContainer> @ 146078890

void __cdecl InternalConstructor<UMovieSceneChannelOverrideContainer>(FObjectInitializer *param_1)

{
  UMovieSceneSignedObject *this;
  
  this = (UMovieSceneSignedObject *)param_1->Obj;
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneChannelOverrideContainer__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneCompiledData> @ 1460788c0

void __cdecl InternalConstructor<UMovieSceneCompiledData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMovieSceneCompiledData__6B_;
    FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate
              ((FMovieSceneEvaluationTemplate *)(this + 1));
    FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy
              ((FMovieSceneSequenceHierarchy *)&this[9].field_0x20);
    FMovieSceneEntityComponentField::FMovieSceneEntityComponentField
              ((FMovieSceneEntityComponentField *)&this[0x11].field_0x20);
    this[0x1a].field_0xb = this[0x1a].field_0xb & 0xfc;
    *(undefined8 *)&this[0x17].field_0x20 = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)&this[0x18].field_0x8 = 0;
    *(undefined8 *)&this[0x18].field_0x10 = 0;
    *(undefined8 *)&this[0x18].field_0x18 = 0;
    *(undefined8 *)&this[0x18].field_0x20 = 0;
    *(undefined8 *)(this + 0x19) = 0;
    *(undefined8 *)&this[0x19].field_0x8 = 0;
    *(undefined8 *)&this[0x19].field_0x10 = 0;
    *(undefined8 *)&this[0x19].field_0x18 = 0;
    *(undefined8 *)&this[0x19].field_0x20 = 0;
    *(undefined8 *)(this + 0x1a) = 0;
    *(undefined2 *)&this[0x1a].field_0x8 = 0;
    this[0x1a].field_0xa = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneCompiledDataManager> @ 146078980

void __cdecl InternalConstructor<UMovieSceneCompiledDataManager>(FObjectInitializer *param_1)

{
  UObject *this;
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 uStackX_8;
  UObject *pUStackX_18;
  UObject *pUStackX_20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_a8;
  FDelegateAllocation FStack_a0;
  UObject *pUStack_90;
  FDestructionSentinel FStack_88;
  FDestructionSentinel FStack_70;
  FDelegateAllocation *pFStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UMovieSceneCompiledDataManager__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x20 = 0;
  *(undefined4 *)(this + 3) = 0;
  *(undefined4 *)&this[3].field_0x4 = 0x80;
  *(undefined4 *)&this[3].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[3].field_0xc = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined4 *)&this[3].field_0x20 = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  *(undefined8 *)&this[4].field_0x20 = 0;
  *(undefined4 *)(this + 5) = 0;
  *(undefined4 *)&this[5].field_0x4 = 0x80;
  *(undefined4 *)&this[5].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[5].field_0xc = 0;
  *(undefined8 *)&this[5].field_0x10 = 0;
  *(undefined8 *)&this[5].field_0x18 = 0;
  *(undefined8 *)&this[6].field_0x8 = 0;
  *(undefined4 *)&this[6].field_0x10 = 0;
  *(undefined4 *)&this[6].field_0x14 = 0x80;
  *(undefined4 *)&this[6].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[6].field_0x1c = 0;
  *(undefined8 *)(this + 7) = 0;
  *(undefined4 *)&this[7].field_0x8 = 0;
  *(undefined8 *)&this[7].field_0x10 = 0;
  *(undefined8 *)&this[7].field_0x18 = 0;
  *(undefined8 *)&this[8].field_0x8 = 0;
  *(undefined4 *)&this[8].field_0x10 = 0;
  *(undefined4 *)&this[8].field_0x14 = 0x80;
  *(undefined4 *)&this[8].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[8].field_0x1c = 0;
  *(undefined8 *)(this + 9) = 0;
  *(undefined4 *)&this[9].field_0x8 = 0;
  *(undefined8 *)&this[9].field_0x10 = 0;
  *(undefined8 *)&this[9].field_0x18 = 0;
  *(undefined8 *)&this[10].field_0x8 = 0;
  *(undefined4 *)&this[10].field_0x10 = 0;
  *(undefined4 *)&this[10].field_0x14 = 0x80;
  *(undefined4 *)&this[10].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[10].field_0x1c = 0;
  *(undefined8 *)(this + 0xb) = 0;
  *(undefined4 *)&this[0xb].field_0x8 = 0;
  *(undefined8 *)&this[0xb].field_0x10 = 0;
  *(undefined8 *)&this[0xb].field_0x18 = 0;
  *(undefined8 *)&this[0xc].field_0x8 = 0;
  *(undefined4 *)&this[0xc].field_0x10 = 0;
  *(undefined4 *)&this[0xc].field_0x14 = 0x80;
  *(undefined4 *)&this[0xc].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[0xc].field_0x1c = 0;
  *(undefined8 *)(this + 0xd) = 0;
  *(undefined4 *)&this[0xd].field_0x8 = 0;
  *(undefined8 *)&this[0xd].field_0x10 = 0;
  *(undefined8 *)&this[0xd].field_0x18 = 0;
  bVar3 = FGuid::Parse(&GMovieSceneCompilerVersion,(FGuid *)&this[0xd].field_0x10);
  if (!bVar3) {
    uStackX_8 = 0;
    `UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager'::__l2::<lambda_1>::operator()
              (&stack0x00000008);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  TStack_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_a0.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_a8,(FWriteAccessScope *)&FStack_70);
  pFStack_58 = &FStack_a0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&FStack_a0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneCompiledDataManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this);
    }
    puVar4[3] = 0;
    pUStackX_18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&pUStackX_18);
    puVar4[4] = UMovieSceneCompiledDataManager::ConsoleVariableSink;
  }
  if (FStack_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_70.Accessor,&FStack_70);
  }
  (*pcVar1)(pIVar2,auStack_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_a8,(FWriteAccessScope *)&FStack_88);
  if ((FStack_a0.DelegateSize != 0) &&
     (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_a0,0,0,0x10);
    FStack_a0.DelegateSize = 0;
  }
  if (FStack_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_88.Accessor,&FStack_88);
  }
  if (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_a8.AccessDetector);
  *(undefined4 *)&this[0xd].field_0x20 = 0;
  this[0xd].field_0x24 = 3;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    pUStackX_20 = this;
    TMulticastDelegateRegistration<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy>
    ::
    AddWeakLambda<UMovieSceneCompiledDataManager,_UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager_::__l2::<lambda_2>_&>
              (&FCoreUObjectDelegates::OnPackageReloaded,
               (UMovieSceneCompiledDataManager *)auStack_48,(<lambda_2> *)this);
    pUStack_90 = this;
    TSet<UMovieSceneCompiledDataManager_*,DefaultKeyFuncs<UMovieSceneCompiledDataManager_*,0>,FDefaultSetAllocator>
    ::Emplace<UMovieSceneCompiledDataManager_*>
              (&UMovieSceneCompiledDataManager::ActiveManagers,
               (UMovieSceneCompiledDataManager **)&stack0x00000010,(bool *)&pUStack_90);
  }
  return;
}

// InternalConstructor<UMovieSceneCondition> @ 1460789a0

void __cdecl InternalConstructor<UMovieSceneCondition>(FObjectInitializer *param_1)

{
  UMovieSceneSignedObject *this;
  
  this = (UMovieSceneSignedObject *)param_1->Obj;
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieSceneCondition__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneDecorationContainerObject> @ 1460789e0

void __cdecl InternalConstructor<UMovieSceneDecorationContainerObject>(FObjectInitializer *param_1)

{
  UMovieSceneSignedObject *this;
  
  this = (UMovieSceneSignedObject *)param_1->Obj;
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneDecorationContainerObject__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneEntityProvider> @ 146078a20

void __cdecl InternalConstructor<UMovieSceneEntityProvider>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieSceneEntityProvider__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneGenericBoundObjectInstantiator> @ 146078a50

void __cdecl
InternalConstructor<UMovieSceneGenericBoundObjectInstantiator>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntityInstantiatorSystem *this;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  this = (UMovieSceneEntityInstantiatorSystem *)param_1->Obj;
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneGenericBoundObjectInstantiator__6B_;
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    *(TComponentTypeID<FGuid> *)&this->field_0x30 = pFVar2->GenericObjectBinding;
    if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
      local_res8 = *(UObject **)&this->field_0x10;
      FVar1.Value = *(ushort *)&pFVar2->BoundObject;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      local_res8 = *(UObject **)&this->field_0x10;
      FVar1.Value = (pFVar2->SymbolicTags).CreatesEntities.Value;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
  }
  return;
}

// InternalConstructor<UMovieSceneGroupCondition> @ 146078b10

void __cdecl InternalConstructor<UMovieSceneGroupCondition>(FObjectInitializer *param_1)

{
  UMovieSceneSignedObject *this;
  
  this = (UMovieSceneSignedObject *)param_1->Obj;
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieSceneGroupCondition__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneLanguagePreviewDecoration> @ 146078b60

void __cdecl InternalConstructor<UMovieSceneLanguagePreviewDecoration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieSceneLanguagePreviewDecoration__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneMuteSoloDecoration> @ 146078ba0

void __cdecl InternalConstructor<UMovieSceneMuteSoloDecoration>(FObjectInitializer *param_1)

{
  UObjectBase *this;
  
  this = (UObjectBase *)param_1->Obj;
  if (this != (UObjectBase *)0x0) {
    UObject::UObject((UObject *)this);
    *(undefined2 *)&this[1].ObjectFlags = RF_NoFlags;
    this->_padding_ = (longlong)&UMovieSceneMuteSoloDecoration::_vftable__for__UObject__;
    this[1]._padding_ =
         (longlong)&UMovieSceneMuteSoloDecoration::_vftable__for__IMovieSceneDecoration__;
    UObjectBase::AtomicallySetFlags(this,RF_Transient);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneScalingAnchors> @ 146078bf0

void __cdecl InternalConstructor<UMovieSceneScalingAnchors>(FObjectInitializer *param_1)

{
  UMovieScenePlayRateCurve *this;
  
  this = (UMovieScenePlayRateCurve *)param_1->Obj;
  if (this != (UMovieScenePlayRateCurve *)0x0) {
    UMovieScenePlayRateCurve::UMovieScenePlayRateCurve(this);
    this->_padding_ =
         (longlong)&UMovieSceneScalingAnchors::_vftable__for__UMovieSceneNumericVariantGetter__;
    this->_padding_ = (longlong)&UMovieSceneScalingAnchors::_vftable__for__IMovieSceneChannelOwner__
    ;
    this[1]._padding_ = (longlong)&UMovieSceneScalingAnchors::_vftable__for__IMovieSceneDecoration__
    ;
    this[1]._padding_ =
         (longlong)&UMovieSceneScalingAnchors::_vftable__for__IMovieSceneTimeWarpSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PlayRate._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PlayRate._padding_ + 4) = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PlayRate._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PlayRate._padding_ + 4) = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined1 *)&this[1].PlayRate._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneScalingDriver> @ 146078d30

void __cdecl InternalConstructor<UMovieSceneScalingDriver>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieSceneScalingDriver__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneSectionAnchorsDecoration> @ 146078d60

void __cdecl InternalConstructor<UMovieSceneSectionAnchorsDecoration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UMovieSceneSectionAnchorsDecoration::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UMovieSceneSectionAnchorsDecoration::_vftable__for__IMovieSceneSectionDecoration__;
    *(undefined ***)&this[1].field_0x8 =
         &UMovieSceneSectionAnchorsDecoration::_vftable__for__IMovieSceneLifetimeDecoration__;
    *(undefined ***)&this[1].field_0x10 =
         &UMovieSceneSectionAnchorsDecoration::_vftable__for__IMovieSceneScalingDriver__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneSectionChannelOverrideRegistry> @ 146078dc0

void __cdecl
InternalConstructor<UMovieSceneSectionChannelOverrideRegistry>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMovieSceneSectionChannelOverrideRegistry__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneTimeWarpDecoration> @ 146078e20

void __cdecl InternalConstructor<UMovieSceneTimeWarpDecoration>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UMovieSceneTimeWarpDecoration::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UMovieSceneTimeWarpDecoration::_vftable__for__IMovieSceneEntityProvider__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneTimeWarpSource> @ 146078e70

void __cdecl InternalConstructor<UMovieSceneTimeWarpSource>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieSceneTimeWarpSource__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneTrackRowDecoration> @ 146078ea0

void __cdecl InternalConstructor<UMovieSceneTrackRowDecoration>(FObjectInitializer *param_1)

{
  UObjectBase *this;
  
  this = (UObjectBase *)param_1->Obj;
  if (this != (UObjectBase *)0x0) {
    UObject::UObject((UObject *)this);
    this->_padding_ = (longlong)&UMovieSceneTrackRowDecoration::_vftable__for__UObject__;
    this[1]._padding_ =
         (longlong)&UMovieSceneTrackRowDecoration::_vftable__for__IMovieSceneDecoration__;
    this[1].ObjectFlags = RF_NoFlags;
    this[1].InternalIndex = 0;
    this[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[2].ObjectFlags = RF_NoFlags;
    this[2].InternalIndex = 0x80;
    *(undefined4 *)&this[2].ClassPrivate.ObjectPtr.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[2].ClassPrivate.ObjectPtr.field0_0x0 + 4) = 0;
    this[2].OuterPrivate.ObjectPtr.field0_0x0.DebugPtr = (UObject *)0x0;
    *(undefined4 *)&this[3]._padding_ = 0;
    UObjectBase::AtomicallySetFlags(this,RF_Transient);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneTrackTemplateProducer> @ 146078f20

void __cdecl InternalConstructor<UMovieSceneTrackTemplateProducer>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieSceneTrackTemplateProducer__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneValueDecomposer> @ 146078f50

void __cdecl InternalConstructor<UMovieSceneValueDecomposer>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieSceneValueDecomposer__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSystem> @ 146078f80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneBindingLifetimeSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneBindingLifetimeSystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneBlenderSystem> @ 146079030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneBlenderSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneBlenderSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneBlenderSystem__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0xff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0xffff;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneBoundSceneComponentInstantiator> @ 146079100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneBoundSceneComponentInstantiator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntityInstantiatorSystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneBoundSceneComponentInstantiator::GetPrivateStaticClass();
  this = (UMovieSceneEntityInstantiatorSystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneBoundSceneComponentInstantiator__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneChannelOverrideContainer> @ 1460791b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneChannelOverrideContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSignedObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneChannelOverrideContainer::GetPrivateStaticClass();
  this = (UMovieSceneSignedObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneChannelOverrideContainer__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCompiledData> @ 146079260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneCompiledData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCompiledData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneCompiledData__6B_;
    FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate
              ((FMovieSceneEvaluationTemplate *)(pUVar1 + 1));
    FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy
              ((FMovieSceneSequenceHierarchy *)&pUVar1[9].field_0x20);
    FMovieSceneEntityComponentField::FMovieSceneEntityComponentField
              ((FMovieSceneEntityComponentField *)&pUVar1[0x11].field_0x20);
    pUVar1[0x1a].field_0xb = pUVar1[0x1a].field_0xb & 0xfc;
    *(undefined8 *)&pUVar1[0x17].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x18) = 0;
    *(undefined8 *)&pUVar1[0x18].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x18].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x18].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x18].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x19) = 0;
    *(undefined8 *)&pUVar1[0x19].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x19].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x19].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x19].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x1a) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCompiledDataManager> @ 146079390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneCompiledDataManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCompiledDataManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneCompiledDataManager__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pUVar1 + 1),4000);
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0xc = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined4 *)&pUVar1[8].field_0x10 = 0;
    *(undefined4 *)&pUVar1[8].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined4 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined4 *)&pUVar1[10].field_0x10 = 0;
    *(undefined4 *)&pUVar1[10].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[0xc].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xc].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    *(undefined4 *)&pUVar1[0xd].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneCondition> @ 1460793a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneCondition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSignedObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneCondition::GetPrivateStaticClass();
  this = (UMovieSceneSignedObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieSceneCondition__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneDecorationContainerObject> @ 146079450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneDecorationContainerObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSignedObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneDecorationContainerObject::GetPrivateStaticClass();
  this = (UMovieSceneSignedObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneDecorationContainerObject__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEntityProvider> @ 146079510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneEntityProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEntityProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneEntityProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneGenericBoundObjectInstantiator> @ 1460795c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneGenericBoundObjectInstantiator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntityInstantiatorSystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneGenericBoundObjectInstantiator::GetPrivateStaticClass();
  this = (UMovieSceneEntityInstantiatorSystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UMovieSceneGenericBoundObjectInstantiator__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneGroupCondition> @ 146079670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneGroupCondition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSignedObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneGroupCondition::GetPrivateStaticClass();
  this = (UMovieSceneSignedObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSignedObject *)0x0) {
    UMovieSceneSignedObject::UMovieSceneSignedObject(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieSceneGroupCondition__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneLanguagePreviewDecoration> @ 146079730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneLanguagePreviewDecoration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneLanguagePreviewDecoration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneLanguagePreviewDecoration__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMuteSoloDecoration> @ 1460797f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneMuteSoloDecoration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMuteSoloDecoration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UMovieSceneMuteSoloDecoration::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMovieSceneMuteSoloDecoration::_vftable__for__IMovieSceneDecoration__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScalingAnchors> @ 1460798b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneScalingAnchors>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieScenePlayRateCurve *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScalingAnchors::GetPrivateStaticClass();
  this = (UMovieScenePlayRateCurve *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieScenePlayRateCurve *)0x0) {
    UMovieScenePlayRateCurve::UMovieScenePlayRateCurve(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UMovieSceneScalingAnchors::_vftable__for__UMovieSceneNumericVariantGetter__;
    this->_padding_ = (longlong)&UMovieSceneScalingAnchors::_vftable__for__IMovieSceneChannelOwner__
    ;
    this[1]._padding_ = (longlong)&UMovieSceneScalingAnchors::_vftable__for__IMovieSceneDecoration__
    ;
    this[1]._padding_ =
         (longlong)&UMovieSceneScalingAnchors::_vftable__for__IMovieSceneTimeWarpSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PlayRate._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PlayRate._padding_ + 4) = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PlayRate._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PlayRate._padding_ + 4) = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined4 *)&this[1].PlayRate._padding_ = 0;
    this[1].PlayRate._padding_ = 0;
    *(undefined1 *)&this[1].PlayRate._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScalingDriver> @ 146079a70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneScalingDriver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScalingDriver::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneScalingDriver__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSectionAnchorsDecoration> @ 146079b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneSectionAnchorsDecoration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSectionAnchorsDecoration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &UMovieSceneSectionAnchorsDecoration::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMovieSceneSectionAnchorsDecoration::_vftable__for__IMovieSceneSectionDecoration__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UMovieSceneSectionAnchorsDecoration::_vftable__for__IMovieSceneLifetimeDecoration__;
    *(undefined ***)&pUVar1[1].field_0x10 =
         &UMovieSceneSectionAnchorsDecoration::_vftable__for__IMovieSceneScalingDriver__;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSectionChannelOverrideRegistry> @ 146079c00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneSectionChannelOverrideRegistry>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSectionChannelOverrideRegistry::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneSectionChannelOverrideRegistry__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTimeWarpDecoration> @ 146079ce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneTimeWarpDecoration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTimeWarpDecoration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UMovieSceneTimeWarpDecoration::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMovieSceneTimeWarpDecoration::_vftable__for__IMovieSceneEntityProvider__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTimeWarpSource> @ 146079da0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTimeWarpSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTimeWarpSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneTimeWarpSource__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTrackRowDecoration> @ 146079e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneTrackRowDecoration>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTrackRowDecoration::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UMovieSceneTrackRowDecoration::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMovieSceneTrackRowDecoration::_vftable__for__IMovieSceneDecoration__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTrackTemplateProducer> @ 146079f30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneTrackTemplateProducer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTrackTemplateProducer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneTrackTemplateProducer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneValueDecomposer> @ 146079fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneValueDecomposer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneValueDecomposer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneValueDecomposer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TScriptInterface<IMovieSceneTimeWarpSource>_const_,int,UE::Core::Private::TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const_>,TLess<void>_> @ 14607a090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TScriptInterface<IMovieSceneTimeWarpSource>_const_,int,UE::Core::Private::TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const_>,TLess<void>_>
          (TScriptInterface<IMovieSceneTimeWarpSource> *param_1,int param_2,
          TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const> param_3,
          TLess<void> param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar6;
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar7;
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar8;
  TScriptInterface<IMovieSceneTimeWarpSource> **ppTVar9;
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar10;
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar11;
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar12;
  float fVar13;
  undefined1 auStack_3a8 [32];
  int local_388;
  TScriptInterface<IMovieSceneTimeWarpSource> **local_380;
  TScriptInterface<IMovieSceneTimeWarpSource> *local_368;
  TScriptInterface<IMovieSceneTimeWarpSource> *local_358;
  TScriptInterface<IMovieSceneTimeWarpSource> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar13;
    memset(local_340,0,0x2e8);
    ppTVar9 = &local_358;
    do {
      pTVar10 = ppTVar9[1];
      pTVar12 = *ppTVar9;
      local_368 = ppTVar9[2];
      iVar3 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
      local_388 = (int)local_368;
      pTVar11 = pTVar12;
      local_380 = ppTVar9;
      if ((int)local_368 != 0) {
LAB_14607a155:
        if (8 < iVar3) {
          uVar5 = *(undefined8 *)&pTVar11->field_0x8;
          pTVar6 = pTVar10 + 1;
          lVar1 = *(longlong *)(pTVar11 + iVar3 / 2);
          uVar2 = *(undefined8 *)&pTVar11[iVar3 / 2].field_0x8;
          *(longlong *)(pTVar11 + iVar3 / 2) = *(longlong *)pTVar11;
          *(undefined8 *)&pTVar11[iVar3 / 2].field_0x8 = uVar5;
          *(longlong *)pTVar11 = lVar1;
          *(undefined8 *)&pTVar11->field_0x8 = uVar2;
          pTVar12 = pTVar11;
LAB_14607a182:
          pTVar8 = pTVar12;
          pTVar12 = pTVar8 + 1;
          if (pTVar12 <= pTVar10) goto code_r0x00014607a18b;
          goto LAB_14607a1b3;
        }
        for (; pTVar12 = pTVar11, pTVar6 = pTVar11, pTVar11 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar8 = pTVar12, pTVar12 = pTVar6 + 1, pTVar12 <= pTVar10) {
            if (*(longlong *)pTVar12 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined8 *)&pTVar6[1].field_0x8;
            }
            iVar3 = (*(code *)param_3.MemberFunctionPtr)(uVar5);
            if (*(longlong *)pTVar8 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined8 *)&pTVar8->field_0x8;
            }
            iVar4 = (*(code *)param_3.MemberFunctionPtr)(uVar5);
            pTVar6 = pTVar12;
            if (iVar3 <= iVar4) {
              pTVar12 = pTVar8;
            }
          }
          lVar1 = *(longlong *)pTVar8;
          uVar5 = *(undefined8 *)&pTVar8->field_0x8;
          uVar2 = *(undefined8 *)&pTVar10->field_0x8;
          *(longlong *)pTVar8 = *(longlong *)pTVar10;
          *(undefined8 *)&pTVar8->field_0x8 = uVar2;
          *(longlong *)pTVar10 = lVar1;
          *(undefined8 *)&pTVar10->field_0x8 = uVar5;
          ppTVar9 = local_380;
        }
        goto LAB_14607a2a9;
      }
LAB_14607a298:
      HeapSortInternal<TScriptInterface<IMovieSceneTimeWarpSource>_const_,int,UE::Core::Private::TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const_>,TLess<void>_>
                (pTVar12,iVar3,param_3,param_4);
LAB_14607a2a9:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_358 <= ppTVar9);
  }
  return;
code_r0x00014607a18b:
  if (*(longlong *)pTVar12 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)&pTVar8[1].field_0x8;
  }
  iVar3 = (*(code *)param_3.MemberFunctionPtr)(uVar5);
  iVar4 = (*(code *)param_3.MemberFunctionPtr)();
  if (iVar3 <= iVar4) goto LAB_14607a182;
LAB_14607a1b3:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    iVar3 = (*(code *)param_3.MemberFunctionPtr)();
    iVar4 = (*(code *)param_3.MemberFunctionPtr)();
  } while (iVar3 <= iVar4);
  uVar5 = *(undefined8 *)&pTVar7[-1].field_0x8;
  if (pTVar12 <= pTVar6) {
    lVar1 = *(longlong *)pTVar12;
    uVar2 = *(undefined8 *)&pTVar8[1].field_0x8;
    *(longlong *)pTVar12 = *(longlong *)pTVar6;
    *(undefined8 *)&pTVar8[1].field_0x8 = uVar5;
    *(longlong *)pTVar6 = lVar1;
    *(undefined8 *)&pTVar7[-1].field_0x8 = uVar2;
    goto LAB_14607a182;
  }
  lVar1 = *(longlong *)pTVar11;
  uVar2 = *(undefined8 *)&pTVar11->field_0x8;
  local_388 = local_388 + -1;
  *(longlong *)pTVar11 = *(longlong *)pTVar6;
  *(undefined8 *)&pTVar11->field_0x8 = uVar5;
  *(longlong *)pTVar6 = lVar1;
  *(undefined8 *)&pTVar7[-1].field_0x8 = uVar2;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar10) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar10;
      *(int *)(ppTVar9 + 2) = local_388;
      ppTVar9 = ppTVar9 + 3;
      local_380 = ppTVar9;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_14607a2a9;
    pTVar10 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar9 = pTVar11;
      ppTVar9[1] = pTVar7 + -2;
      *(int *)(ppTVar9 + 2) = local_388;
      ppTVar9 = ppTVar9 + 3;
      local_380 = ppTVar9;
    }
    if (pTVar10 <= pTVar12) goto LAB_14607a2a9;
  }
  iVar3 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (local_388 == 0) goto LAB_14607a298;
  goto LAB_14607a155;
}

// IntroSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<unsigned_char>::RemapTimes'::__l12::<lambda_1>_> @ 14607a390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<unsigned_char>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  int **local_380;
  uint *local_378;
  int local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    local_380 = &local_348;
    do {
      local_378 = (uint *)local_380[1];
      puVar9 = (uint *)*local_380;
      local_358 = local_380[2];
      iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
      local_370 = (int)local_358;
      puVar12 = puVar9;
      if ((int)local_358 != 0) {
LAB_14607a463:
        puVar11 = local_378;
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          puVar10 = local_378 + 1;
          uVar8 = puVar12[iVar6 >> 1];
          puVar12[iVar6 >> 1] = *puVar12;
          *puVar12 = uVar8;
          puVar9 = puVar12;
LAB_14607a4a0:
          puVar9 = puVar9 + 1;
          if (puVar9 <= puVar11) goto code_r0x00014607a4ad;
          goto LAB_14607a560;
        }
        if (puVar12 < local_378) {
          do {
            puVar11 = puVar12 + 1;
            puVar10 = local_378;
            puVar13 = puVar12;
            puVar9 = puVar12;
            if (puVar12 + 1 <= local_378) {
              do {
                uVar8 = *puVar11;
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                uVar1 = *puVar13;
                iVar6 = (int)plVar3[1];
                uVar7 = 0;
                if ((int)uVar8 < iVar6) {
                  uVar7 = ~uVar8 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                iVar2 = (int)plVar3[1];
                uVar8 = 0;
                if ((int)uVar1 < iVar2) {
                  uVar8 = ~uVar1 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                puVar9 = puVar11;
                if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) {
                  puVar9 = puVar13;
                }
                puVar11 = puVar11 + 1;
                puVar13 = puVar9;
              } while (puVar11 <= puVar10);
            }
            uVar8 = *puVar9;
            local_378 = puVar10 + -1;
            *puVar9 = *puVar10;
            *puVar10 = uVar8;
            param_3 = local_388;
          } while (puVar12 < local_378);
        }
        goto LAB_14607a6fa;
      }
LAB_14607a6e4:
      HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<unsigned_char>::RemapTimes_::__l12::<lambda_1>_>
                ((int *)puVar9,iVar6,param_3,param_4);
LAB_14607a6fa:
      local_380 = local_380 + -3;
    } while (&local_348 <= local_380);
  }
  return;
code_r0x00014607a4ad:
  uVar8 = *puVar9;
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  uVar1 = *puVar12;
  iVar6 = (int)plVar3[1];
  uVar7 = 0;
  if ((int)uVar8 < iVar6) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  iVar2 = (int)plVar3[1];
  uVar8 = 0;
  if ((int)uVar1 < iVar2) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) goto LAB_14607a4a0;
LAB_14607a560:
  do {
    puVar13 = puVar10;
    puVar10 = puVar13 + -1;
    if (puVar10 <= puVar12) break;
    uVar8 = *puVar12;
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    uVar1 = *puVar10;
    iVar6 = (int)plVar3[1];
    uVar7 = 0;
    if ((int)uVar8 < iVar6) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    iVar2 = (int)plVar3[1];
    uVar8 = 0;
    if ((int)uVar1 < iVar2) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  } while (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4));
  if (puVar9 <= puVar10) {
    uVar8 = *puVar9;
    *puVar9 = *puVar10;
    *puVar10 = uVar8;
    goto LAB_14607a4a0;
  }
  uVar8 = *puVar12;
  *puVar12 = *puVar10;
  local_370 = local_370 + -1;
  *puVar10 = uVar8;
  param_3 = local_388;
  if ((longlong)((longlong)puVar10 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar9 & 0xfffffffffffffffcU)) {
    if (puVar9 < local_378) {
      *local_380 = (int *)puVar9;
      local_380[1] = (int *)local_378;
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (puVar10 <= puVar12 + 1) goto LAB_14607a6fa;
    local_378 = puVar13 + -2;
    puVar9 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar10) {
      *local_380 = (int *)puVar12;
      local_380[1] = (int *)(puVar13 + -2);
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (local_378 <= puVar9) goto LAB_14607a6fa;
  }
  iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
  puVar12 = puVar9;
  if (local_370 == 0) goto LAB_14607a6e4;
  goto LAB_14607a463;
}

// IntroSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<int>::RemapTimes'::__l12::<lambda_1>_> @ 14607a880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<int>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  int **local_380;
  uint *local_378;
  int local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    local_380 = &local_348;
    do {
      local_378 = (uint *)local_380[1];
      puVar9 = (uint *)*local_380;
      local_358 = local_380[2];
      iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
      local_370 = (int)local_358;
      puVar12 = puVar9;
      if ((int)local_358 != 0) {
LAB_14607a953:
        puVar11 = local_378;
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          puVar10 = local_378 + 1;
          uVar8 = puVar12[iVar6 >> 1];
          puVar12[iVar6 >> 1] = *puVar12;
          *puVar12 = uVar8;
          puVar9 = puVar12;
LAB_14607a990:
          puVar9 = puVar9 + 1;
          if (puVar9 <= puVar11) goto code_r0x00014607a99d;
          goto LAB_14607aa50;
        }
        if (puVar12 < local_378) {
          do {
            puVar11 = puVar12 + 1;
            puVar10 = local_378;
            puVar13 = puVar12;
            puVar9 = puVar12;
            if (puVar12 + 1 <= local_378) {
              do {
                uVar8 = *puVar11;
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                uVar1 = *puVar13;
                iVar6 = (int)plVar3[1];
                uVar7 = 0;
                if ((int)uVar8 < iVar6) {
                  uVar7 = ~uVar8 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                iVar2 = (int)plVar3[1];
                uVar8 = 0;
                if ((int)uVar1 < iVar2) {
                  uVar8 = ~uVar1 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                puVar9 = puVar11;
                if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) {
                  puVar9 = puVar13;
                }
                puVar11 = puVar11 + 1;
                puVar13 = puVar9;
              } while (puVar11 <= puVar10);
            }
            uVar8 = *puVar9;
            local_378 = puVar10 + -1;
            *puVar9 = *puVar10;
            *puVar10 = uVar8;
            param_3 = local_388;
          } while (puVar12 < local_378);
        }
        goto LAB_14607abea;
      }
LAB_14607abd4:
      HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<int>::RemapTimes_::__l12::<lambda_1>_>
                ((int *)puVar9,iVar6,param_3,param_4);
LAB_14607abea:
      local_380 = local_380 + -3;
    } while (&local_348 <= local_380);
  }
  return;
code_r0x00014607a99d:
  uVar8 = *puVar9;
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  uVar1 = *puVar12;
  iVar6 = (int)plVar3[1];
  uVar7 = 0;
  if ((int)uVar8 < iVar6) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  iVar2 = (int)plVar3[1];
  uVar8 = 0;
  if ((int)uVar1 < iVar2) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) goto LAB_14607a990;
LAB_14607aa50:
  do {
    puVar13 = puVar10;
    puVar10 = puVar13 + -1;
    if (puVar10 <= puVar12) break;
    uVar8 = *puVar12;
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    uVar1 = *puVar10;
    iVar6 = (int)plVar3[1];
    uVar7 = 0;
    if ((int)uVar8 < iVar6) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    iVar2 = (int)plVar3[1];
    uVar8 = 0;
    if ((int)uVar1 < iVar2) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  } while (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4));
  if (puVar9 <= puVar10) {
    uVar8 = *puVar9;
    *puVar9 = *puVar10;
    *puVar10 = uVar8;
    goto LAB_14607a990;
  }
  uVar8 = *puVar12;
  *puVar12 = *puVar10;
  local_370 = local_370 + -1;
  *puVar10 = uVar8;
  param_3 = local_388;
  if ((longlong)((longlong)puVar10 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar9 & 0xfffffffffffffffcU)) {
    if (puVar9 < local_378) {
      *local_380 = (int *)puVar9;
      local_380[1] = (int *)local_378;
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (puVar10 <= puVar12 + 1) goto LAB_14607abea;
    local_378 = puVar13 + -2;
    puVar9 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar10) {
      *local_380 = (int *)puVar12;
      local_380[1] = (int *)(puVar13 + -2);
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (local_378 <= puVar9) goto LAB_14607abea;
  }
  iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
  puVar12 = puVar9;
  if (local_370 == 0) goto LAB_14607abd4;
  goto LAB_14607a953;
}

// IntroSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes'::__l12::<lambda_1>_> @ 14607ad70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  int **local_380;
  uint *local_378;
  int local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    local_380 = &local_348;
    do {
      local_378 = (uint *)local_380[1];
      puVar9 = (uint *)*local_380;
      local_358 = local_380[2];
      iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
      local_370 = (int)local_358;
      puVar12 = puVar9;
      if ((int)local_358 != 0) {
LAB_14607ae43:
        puVar11 = local_378;
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          puVar10 = local_378 + 1;
          uVar8 = puVar12[iVar6 >> 1];
          puVar12[iVar6 >> 1] = *puVar12;
          *puVar12 = uVar8;
          puVar9 = puVar12;
LAB_14607ae80:
          puVar9 = puVar9 + 1;
          if (puVar9 <= puVar11) goto code_r0x00014607ae8d;
          goto LAB_14607af40;
        }
        if (puVar12 < local_378) {
          do {
            puVar11 = puVar12 + 1;
            puVar10 = local_378;
            puVar13 = puVar12;
            puVar9 = puVar12;
            if (puVar12 + 1 <= local_378) {
              do {
                uVar8 = *puVar11;
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                uVar1 = *puVar13;
                iVar6 = (int)plVar3[1];
                uVar7 = 0;
                if ((int)uVar8 < iVar6) {
                  uVar7 = ~uVar8 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                iVar2 = (int)plVar3[1];
                uVar8 = 0;
                if ((int)uVar1 < iVar2) {
                  uVar8 = ~uVar1 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                puVar9 = puVar11;
                if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) {
                  puVar9 = puVar13;
                }
                puVar11 = puVar11 + 1;
                puVar13 = puVar9;
              } while (puVar11 <= puVar10);
            }
            uVar8 = *puVar9;
            local_378 = puVar10 + -1;
            *puVar9 = *puVar10;
            *puVar10 = uVar8;
            param_3 = local_388;
          } while (puVar12 < local_378);
        }
        goto LAB_14607b0da;
      }
LAB_14607b0c4:
      HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes_::__l12::<lambda_1>_>
                ((int *)puVar9,iVar6,param_3,param_4);
LAB_14607b0da:
      local_380 = local_380 + -3;
    } while (&local_348 <= local_380);
  }
  return;
code_r0x00014607ae8d:
  uVar8 = *puVar9;
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  uVar1 = *puVar12;
  iVar6 = (int)plVar3[1];
  uVar7 = 0;
  if ((int)uVar8 < iVar6) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  iVar2 = (int)plVar3[1];
  uVar8 = 0;
  if ((int)uVar1 < iVar2) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) goto LAB_14607ae80;
LAB_14607af40:
  do {
    puVar13 = puVar10;
    puVar10 = puVar13 + -1;
    if (puVar10 <= puVar12) break;
    uVar8 = *puVar12;
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    uVar1 = *puVar10;
    iVar6 = (int)plVar3[1];
    uVar7 = 0;
    if ((int)uVar8 < iVar6) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    iVar2 = (int)plVar3[1];
    uVar8 = 0;
    if ((int)uVar1 < iVar2) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  } while (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4));
  if (puVar9 <= puVar10) {
    uVar8 = *puVar9;
    *puVar9 = *puVar10;
    *puVar10 = uVar8;
    goto LAB_14607ae80;
  }
  uVar8 = *puVar12;
  *puVar12 = *puVar10;
  local_370 = local_370 + -1;
  *puVar10 = uVar8;
  param_3 = local_388;
  if ((longlong)((longlong)puVar10 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar9 & 0xfffffffffffffffcU)) {
    if (puVar9 < local_378) {
      *local_380 = (int *)puVar9;
      local_380[1] = (int *)local_378;
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (puVar10 <= puVar12 + 1) goto LAB_14607b0da;
    local_378 = puVar13 + -2;
    puVar9 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar10) {
      *local_380 = (int *)puVar12;
      local_380[1] = (int *)(puVar13 + -2);
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (local_378 <= puVar9) goto LAB_14607b0da;
  }
  iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
  puVar12 = puVar9;
  if (local_370 == 0) goto LAB_14607b0c4;
  goto LAB_14607ae43;
}

// IntroSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes'::__l12::<lambda_1>_> @ 14607b260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  int **local_380;
  uint *local_378;
  int local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    local_380 = &local_348;
    do {
      local_378 = (uint *)local_380[1];
      puVar9 = (uint *)*local_380;
      local_358 = local_380[2];
      iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
      local_370 = (int)local_358;
      puVar12 = puVar9;
      if ((int)local_358 != 0) {
LAB_14607b333:
        puVar11 = local_378;
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          puVar10 = local_378 + 1;
          uVar8 = puVar12[iVar6 >> 1];
          puVar12[iVar6 >> 1] = *puVar12;
          *puVar12 = uVar8;
          puVar9 = puVar12;
LAB_14607b370:
          puVar9 = puVar9 + 1;
          if (puVar9 <= puVar11) goto code_r0x00014607b37d;
          goto LAB_14607b430;
        }
        if (puVar12 < local_378) {
          do {
            puVar11 = puVar12 + 1;
            puVar10 = local_378;
            puVar13 = puVar12;
            puVar9 = puVar12;
            if (puVar12 + 1 <= local_378) {
              do {
                uVar8 = *puVar11;
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                uVar1 = *puVar13;
                iVar6 = (int)plVar3[1];
                uVar7 = 0;
                if ((int)uVar8 < iVar6) {
                  uVar7 = ~uVar8 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                iVar2 = (int)plVar3[1];
                uVar8 = 0;
                if ((int)uVar1 < iVar2) {
                  uVar8 = ~uVar1 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                puVar9 = puVar11;
                if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) {
                  puVar9 = puVar13;
                }
                puVar11 = puVar11 + 1;
                puVar13 = puVar9;
              } while (puVar11 <= puVar10);
            }
            uVar8 = *puVar9;
            local_378 = puVar10 + -1;
            *puVar9 = *puVar10;
            *puVar10 = uVar8;
            param_3 = local_388;
          } while (puVar12 < local_378);
        }
        goto LAB_14607b5ca;
      }
LAB_14607b5b4:
      HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes_::__l12::<lambda_1>_>
                ((int *)puVar9,iVar6,param_3,param_4);
LAB_14607b5ca:
      local_380 = local_380 + -3;
    } while (&local_348 <= local_380);
  }
  return;
code_r0x00014607b37d:
  uVar8 = *puVar9;
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  uVar1 = *puVar12;
  iVar6 = (int)plVar3[1];
  uVar7 = 0;
  if ((int)uVar8 < iVar6) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  iVar2 = (int)plVar3[1];
  uVar8 = 0;
  if ((int)uVar1 < iVar2) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) goto LAB_14607b370;
LAB_14607b430:
  do {
    puVar13 = puVar10;
    puVar10 = puVar13 + -1;
    if (puVar10 <= puVar12) break;
    uVar8 = *puVar12;
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    uVar1 = *puVar10;
    iVar6 = (int)plVar3[1];
    uVar7 = 0;
    if ((int)uVar8 < iVar6) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    iVar2 = (int)plVar3[1];
    uVar8 = 0;
    if ((int)uVar1 < iVar2) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  } while (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4));
  if (puVar9 <= puVar10) {
    uVar8 = *puVar9;
    *puVar9 = *puVar10;
    *puVar10 = uVar8;
    goto LAB_14607b370;
  }
  uVar8 = *puVar12;
  *puVar12 = *puVar10;
  local_370 = local_370 + -1;
  *puVar10 = uVar8;
  param_3 = local_388;
  if ((longlong)((longlong)puVar10 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar9 & 0xfffffffffffffffcU)) {
    if (puVar9 < local_378) {
      *local_380 = (int *)puVar9;
      local_380[1] = (int *)local_378;
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (puVar10 <= puVar12 + 1) goto LAB_14607b5ca;
    local_378 = puVar13 + -2;
    puVar9 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar10) {
      *local_380 = (int *)puVar12;
      local_380[1] = (int *)(puVar13 + -2);
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (local_378 <= puVar9) goto LAB_14607b5ca;
  }
  iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
  puVar12 = puVar9;
  if (local_370 == 0) goto LAB_14607b5b4;
  goto LAB_14607b333;
}

// IntroSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes'::__l12::<lambda_1>_> @ 14607b750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  int **local_380;
  uint *local_378;
  int local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    local_380 = &local_348;
    do {
      local_378 = (uint *)local_380[1];
      puVar9 = (uint *)*local_380;
      local_358 = local_380[2];
      iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
      local_370 = (int)local_358;
      puVar12 = puVar9;
      if ((int)local_358 != 0) {
LAB_14607b823:
        puVar11 = local_378;
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          puVar10 = local_378 + 1;
          uVar8 = puVar12[iVar6 >> 1];
          puVar12[iVar6 >> 1] = *puVar12;
          *puVar12 = uVar8;
          puVar9 = puVar12;
LAB_14607b860:
          puVar9 = puVar9 + 1;
          if (puVar9 <= puVar11) goto code_r0x00014607b86d;
          goto LAB_14607b920;
        }
        if (puVar12 < local_378) {
          do {
            puVar11 = puVar12 + 1;
            puVar10 = local_378;
            puVar13 = puVar12;
            puVar9 = puVar12;
            if (puVar12 + 1 <= local_378) {
              do {
                uVar8 = *puVar11;
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                uVar1 = *puVar13;
                iVar6 = (int)plVar3[1];
                uVar7 = 0;
                if ((int)uVar8 < iVar6) {
                  uVar7 = ~uVar8 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                iVar2 = (int)plVar3[1];
                uVar8 = 0;
                if ((int)uVar1 < iVar2) {
                  uVar8 = ~uVar1 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                puVar9 = puVar11;
                if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) {
                  puVar9 = puVar13;
                }
                puVar11 = puVar11 + 1;
                puVar13 = puVar9;
              } while (puVar11 <= puVar10);
            }
            uVar8 = *puVar9;
            local_378 = puVar10 + -1;
            *puVar9 = *puVar10;
            *puVar10 = uVar8;
            param_3 = local_388;
          } while (puVar12 < local_378);
        }
        goto LAB_14607baba;
      }
LAB_14607baa4:
      HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes_::__l12::<lambda_1>_>
                ((int *)puVar9,iVar6,param_3,param_4);
LAB_14607baba:
      local_380 = local_380 + -3;
    } while (&local_348 <= local_380);
  }
  return;
code_r0x00014607b86d:
  uVar8 = *puVar9;
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  uVar1 = *puVar12;
  iVar6 = (int)plVar3[1];
  uVar7 = 0;
  if ((int)uVar8 < iVar6) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  iVar2 = (int)plVar3[1];
  uVar8 = 0;
  if ((int)uVar1 < iVar2) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) goto LAB_14607b860;
LAB_14607b920:
  do {
    puVar13 = puVar10;
    puVar10 = puVar13 + -1;
    if (puVar10 <= puVar12) break;
    uVar8 = *puVar12;
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    uVar1 = *puVar10;
    iVar6 = (int)plVar3[1];
    uVar7 = 0;
    if ((int)uVar8 < iVar6) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    iVar2 = (int)plVar3[1];
    uVar8 = 0;
    if ((int)uVar1 < iVar2) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  } while (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4));
  if (puVar9 <= puVar10) {
    uVar8 = *puVar9;
    *puVar9 = *puVar10;
    *puVar10 = uVar8;
    goto LAB_14607b860;
  }
  uVar8 = *puVar12;
  *puVar12 = *puVar10;
  local_370 = local_370 + -1;
  *puVar10 = uVar8;
  param_3 = local_388;
  if ((longlong)((longlong)puVar10 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar9 & 0xfffffffffffffffcU)) {
    if (puVar9 < local_378) {
      *local_380 = (int *)puVar9;
      local_380[1] = (int *)local_378;
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (puVar10 <= puVar12 + 1) goto LAB_14607baba;
    local_378 = puVar13 + -2;
    puVar9 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar10) {
      *local_380 = (int *)puVar12;
      local_380[1] = (int *)(puVar13 + -2);
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (local_378 <= puVar9) goto LAB_14607baba;
  }
  iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
  puVar12 = puVar9;
  if (local_370 == 0) goto LAB_14607baa4;
  goto LAB_14607b823;
}

// IntroSortInternal<int,int,FIdentityFunctor,`TMovieSceneChannelData<bool>::RemapTimes'::__l12::<lambda_1>_> @ 14607bc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<bool>::RemapTimes_::__l12::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  int **local_380;
  uint *local_378;
  int local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    local_380 = &local_348;
    do {
      local_378 = (uint *)local_380[1];
      puVar9 = (uint *)*local_380;
      local_358 = local_380[2];
      iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
      local_370 = (int)local_358;
      puVar12 = puVar9;
      if ((int)local_358 != 0) {
LAB_14607bd13:
        puVar11 = local_378;
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          puVar10 = local_378 + 1;
          uVar8 = puVar12[iVar6 >> 1];
          puVar12[iVar6 >> 1] = *puVar12;
          *puVar12 = uVar8;
          puVar9 = puVar12;
LAB_14607bd50:
          puVar9 = puVar9 + 1;
          if (puVar9 <= puVar11) goto code_r0x00014607bd5d;
          goto LAB_14607be10;
        }
        if (puVar12 < local_378) {
          do {
            puVar11 = puVar12 + 1;
            puVar10 = local_378;
            puVar13 = puVar12;
            puVar9 = puVar12;
            if (puVar12 + 1 <= local_378) {
              do {
                uVar8 = *puVar11;
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                uVar1 = *puVar13;
                iVar6 = (int)plVar3[1];
                uVar7 = 0;
                if ((int)uVar8 < iVar6) {
                  uVar7 = ~uVar8 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
                plVar3 = (longlong *)(param_4.__this)->_padding_;
                iVar2 = (int)plVar3[1];
                uVar8 = 0;
                if ((int)uVar1 < iVar2) {
                  uVar8 = ~uVar1 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
                   bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar10 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                puVar9 = puVar11;
                if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) {
                  puVar9 = puVar13;
                }
                puVar11 = puVar11 + 1;
                puVar13 = puVar9;
              } while (puVar11 <= puVar10);
            }
            uVar8 = *puVar9;
            local_378 = puVar10 + -1;
            *puVar9 = *puVar10;
            *puVar10 = uVar8;
            param_3 = local_388;
          } while (puVar12 < local_378);
        }
        goto LAB_14607bfaa;
      }
LAB_14607bf94:
      HeapSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<bool>::RemapTimes_::__l12::<lambda_1>_>
                ((int *)puVar9,iVar6,param_3,param_4);
LAB_14607bfaa:
      local_380 = local_380 + -3;
    } while (&local_348 <= local_380);
  }
  return;
code_r0x00014607bd5d:
  uVar8 = *puVar9;
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  uVar1 = *puVar12;
  iVar6 = (int)plVar3[1];
  uVar7 = 0;
  if ((int)uVar8 < iVar6) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
  plVar3 = (longlong *)(param_4.__this)->_padding_;
  iVar2 = (int)plVar3[1];
  uVar8 = 0;
  if ((int)uVar1 < iVar2) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4)) goto LAB_14607bd50;
LAB_14607be10:
  do {
    puVar13 = puVar10;
    puVar10 = puVar13 + -1;
    if (puVar10 <= puVar12) break;
    uVar8 = *puVar12;
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    uVar1 = *puVar10;
    iVar6 = (int)plVar3[1];
    uVar7 = 0;
    if ((int)uVar8 < iVar6) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar8, local_390 = (longlong)iVar6,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(*plVar3 + (longlong)(int)uVar8 * 4);
    plVar3 = (longlong *)(param_4.__this)->_padding_;
    iVar2 = (int)plVar3[1];
    uVar8 = 0;
    if ((int)uVar1 < iVar2) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_398 = (longlong)(int)uVar1, local_390 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  } while (iVar6 <= *(int *)(*plVar3 + (longlong)(int)uVar1 * 4));
  if (puVar9 <= puVar10) {
    uVar8 = *puVar9;
    *puVar9 = *puVar10;
    *puVar10 = uVar8;
    goto LAB_14607bd50;
  }
  uVar8 = *puVar12;
  *puVar12 = *puVar10;
  local_370 = local_370 + -1;
  *puVar10 = uVar8;
  param_3 = local_388;
  if ((longlong)((longlong)puVar10 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar9 & 0xfffffffffffffffcU)) {
    if (puVar9 < local_378) {
      *local_380 = (int *)puVar9;
      local_380[1] = (int *)local_378;
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (puVar10 <= puVar12 + 1) goto LAB_14607bfaa;
    local_378 = puVar13 + -2;
    puVar9 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar10) {
      *local_380 = (int *)puVar12;
      local_380[1] = (int *)(puVar13 + -2);
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (local_378 <= puVar9) goto LAB_14607bfaa;
  }
  iVar6 = (int)((longlong)local_378 - (longlong)puVar9 >> 2) + 1;
  puVar12 = puVar9;
  if (local_370 == 0) goto LAB_14607bf94;
  goto LAB_14607bd13;
}

// IntroSortInternal<FCompileOnTheFlyData,int,FIdentityFunctor,TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>_> @ 14607c130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FCompileOnTheFlyData,int,FIdentityFunctor,TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>_>
          (FCompileOnTheFlyData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>
          param_4)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined2 uVar13;
  FMovieSceneSequenceID FVar14;
  ushort uVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  bool bVar19;
  bool bVar20;
  undefined2 uVar21;
  FMovieSceneSequenceID FVar22;
  bool bVar23;
  longlong lVar24;
  int iVar25;
  FCompileOnTheFlyData *pFVar26;
  FCompileOnTheFlyData *pFVar27;
  FCompileOnTheFlyData *pFVar28;
  FCompileOnTheFlyData **ppFVar29;
  int iVar30;
  FCompileOnTheFlyData *pFVar31;
  FCompileOnTheFlyData *pFVar32;
  FCompileOnTheFlyData *pFVar33;
  float fVar34;
  undefined1 auStack_388 [48];
  FCompileOnTheFlyData *local_358;
  FCompileOnTheFlyData *local_348;
  FCompileOnTheFlyData *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar34 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar34;
    memset(local_330,0,0x2e8);
    ppFVar29 = &local_348;
    do {
      pFVar33 = ppFVar29[1];
      pFVar32 = *ppFVar29;
      local_358 = ppFVar29[2];
      iVar25 = (int)(((longlong)pFVar33 - (longlong)pFVar32) / 0x24) + 1;
      pFVar31 = pFVar32;
      iVar30 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14607c210:
        if (8 < iVar25) {
          sVar10 = pFVar31->HierarchicalBias;
          sVar11 = pFVar31->EvaluationPriority;
          sVar12 = pFVar31->ChildPriority;
          FVar2 = pFVar31->EvaluationGroup;
          pFVar26 = pFVar33 + 1;
          iVar25 = iVar25 / 2;
          pFVar32 = pFVar31 + iVar25;
          uVar15 = pFVar32->GroupEvaluationPriority;
          sVar16 = pFVar32->HierarchicalBias;
          sVar17 = pFVar32->EvaluationPriority;
          sVar18 = pFVar32->ChildPriority;
          FVar3 = pFVar32->EvaluationGroup;
          iVar1 = pFVar31[iVar25].Child.ForcedTime.Value;
          pFVar32 = pFVar31 + iVar25;
          bVar19 = pFVar32->bRequiresInit;
          bVar20 = pFVar32->bPriorityTearDown;
          uVar21 = *(undefined2 *)&pFVar32->field_0x12;
          FVar22.Value = (pFVar32->Track).SequenceID.Value;
          uVar4 = *(undefined8 *)(&pFVar32->bRequiresInit + 8);
          pFVar32 = pFVar31 + iVar25;
          pFVar32->GroupEvaluationPriority = pFVar31->GroupEvaluationPriority;
          pFVar32->HierarchicalBias = sVar10;
          pFVar32->EvaluationPriority = sVar11;
          pFVar32->ChildPriority = sVar12;
          pFVar32->EvaluationGroup = FVar2;
          bVar23 = pFVar31->bPriorityTearDown;
          uVar13 = *(undefined2 *)&pFVar31->field_0x12;
          FVar14.Value = (pFVar31->Track).SequenceID.Value;
          uVar5 = *(undefined8 *)&(pFVar31->Track).TrackIdentifier;
          pFVar32 = pFVar31 + iVar25;
          pFVar32->bRequiresInit = pFVar31->bRequiresInit;
          pFVar32->bPriorityTearDown = bVar23;
          *(undefined2 *)&pFVar32->field_0x12 = uVar13;
          (pFVar32->Track).SequenceID = (FMovieSceneSequenceID)FVar14.Value;
          *(undefined8 *)(&pFVar32->bRequiresInit + 8) = uVar5;
          pFVar31[iVar25].Child.ForcedTime.Value = (pFVar31->Child).ForcedTime.Value;
          pFVar31->GroupEvaluationPriority = uVar15;
          pFVar31->HierarchicalBias = sVar16;
          pFVar31->EvaluationPriority = sVar17;
          pFVar31->ChildPriority = sVar18;
          pFVar31->EvaluationGroup = FVar3;
          pFVar31->bRequiresInit = bVar19;
          pFVar31->bPriorityTearDown = bVar20;
          *(undefined2 *)&pFVar31->field_0x12 = uVar21;
          (pFVar31->Track).SequenceID = (FMovieSceneSequenceID)FVar22.Value;
          *(undefined8 *)&(pFVar31->Track).TrackIdentifier = uVar4;
          (pFVar31->Child).ForcedTime.Value = iVar1;
          pFVar32 = pFVar31;
LAB_14607c270:
          pFVar28 = pFVar32;
          pFVar32 = pFVar28 + 1;
          if (pFVar32 <= pFVar33) goto code_r0x00014607c279;
          goto LAB_14607c285;
        }
        for (; pFVar26 = pFVar31, pFVar32 = pFVar31, pFVar31 < pFVar33; pFVar33 = pFVar33 + -1) {
          while (pFVar28 = pFVar26, pFVar32 = pFVar32 + 1, pFVar32 <= pFVar33) {
            bVar23 = (*param_4.Predicate)(pFVar28,pFVar32);
            pFVar26 = pFVar32;
            if (!bVar23) {
              pFVar26 = pFVar28;
            }
          }
          uVar15 = pFVar28->GroupEvaluationPriority;
          sVar16 = pFVar28->HierarchicalBias;
          sVar17 = pFVar28->EvaluationPriority;
          sVar18 = pFVar28->ChildPriority;
          FVar2 = pFVar28->EvaluationGroup;
          iVar30 = (pFVar28->Child).ForcedTime.Value;
          bVar19 = pFVar28->bRequiresInit;
          bVar20 = pFVar28->bPriorityTearDown;
          uVar21 = *(undefined2 *)&pFVar28->field_0x12;
          FVar22.Value = (pFVar28->Track).SequenceID.Value;
          uVar4 = *(undefined8 *)&(pFVar28->Track).TrackIdentifier;
          sVar10 = pFVar33->HierarchicalBias;
          sVar11 = pFVar33->EvaluationPriority;
          sVar12 = pFVar33->ChildPriority;
          FVar3 = pFVar33->EvaluationGroup;
          pFVar28->GroupEvaluationPriority = pFVar33->GroupEvaluationPriority;
          pFVar28->HierarchicalBias = sVar10;
          pFVar28->EvaluationPriority = sVar11;
          pFVar28->ChildPriority = sVar12;
          pFVar28->EvaluationGroup = FVar3;
          bVar23 = pFVar33->bPriorityTearDown;
          uVar13 = *(undefined2 *)&pFVar33->field_0x12;
          FVar14.Value = (pFVar33->Track).SequenceID.Value;
          uVar5 = *(undefined8 *)&(pFVar33->Track).TrackIdentifier;
          pFVar28->bRequiresInit = pFVar33->bRequiresInit;
          pFVar28->bPriorityTearDown = bVar23;
          *(undefined2 *)&pFVar28->field_0x12 = uVar13;
          (pFVar28->Track).SequenceID = (FMovieSceneSequenceID)FVar14.Value;
          *(undefined8 *)&(pFVar28->Track).TrackIdentifier = uVar5;
          (pFVar28->Child).ForcedTime.Value = (pFVar33->Child).ForcedTime.Value;
          pFVar33->GroupEvaluationPriority = uVar15;
          pFVar33->HierarchicalBias = sVar16;
          pFVar33->EvaluationPriority = sVar17;
          pFVar33->ChildPriority = sVar18;
          pFVar33->EvaluationGroup = FVar2;
          pFVar33->bRequiresInit = bVar19;
          pFVar33->bPriorityTearDown = bVar20;
          *(undefined2 *)&pFVar33->field_0x12 = uVar21;
          (pFVar33->Track).SequenceID = (FMovieSceneSequenceID)FVar22.Value;
          *(undefined8 *)&(pFVar33->Track).TrackIdentifier = uVar4;
          (pFVar33->Child).ForcedTime.Value = iVar30;
        }
        goto LAB_14607c3cc;
      }
LAB_14607c3b3:
      HeapSortInternal<FCompileOnTheFlyData,int,FIdentityFunctor,TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>_>
                (pFVar32,iVar25,param_3,param_4);
LAB_14607c3cc:
      ppFVar29 = ppFVar29 + -3;
    } while (&local_348 <= ppFVar29);
  }
  return;
code_r0x00014607c279:
  bVar23 = (*param_4.Predicate)(pFVar31,pFVar32);
  if (!bVar23) goto LAB_14607c270;
LAB_14607c285:
  do {
    pFVar27 = pFVar26;
    pFVar26 = pFVar27 + -1;
    if (pFVar26 <= pFVar31) break;
    bVar23 = (*param_4.Predicate)(pFVar26,pFVar31);
  } while (!bVar23);
  uVar6 = pFVar26->GroupEvaluationPriority;
  uVar7 = pFVar26->HierarchicalBias;
  uVar8 = pFVar26->EvaluationPriority;
  uVar9 = pFVar26->ChildPriority;
  FVar2 = pFVar27[-1].EvaluationGroup;
  if (pFVar32 <= pFVar26) {
    uVar15 = pFVar32->GroupEvaluationPriority;
    sVar10 = pFVar32->HierarchicalBias;
    sVar11 = pFVar32->EvaluationPriority;
    sVar12 = pFVar32->ChildPriority;
    FVar3 = pFVar28[1].EvaluationGroup;
    iVar25 = pFVar28[1].Child.ForcedTime.Value;
    bVar19 = pFVar28[1].bRequiresInit;
    bVar20 = pFVar28[1].bPriorityTearDown;
    uVar21 = *(undefined2 *)&pFVar28[1].field_0x12;
    FVar22.Value = pFVar28[1].Track.SequenceID.Value;
    uVar4 = *(undefined8 *)&pFVar28[1].Track.TrackIdentifier;
    pFVar32->GroupEvaluationPriority = uVar6;
    pFVar32->HierarchicalBias = uVar7;
    pFVar32->EvaluationPriority = uVar8;
    pFVar32->ChildPriority = uVar9;
    pFVar28[1].EvaluationGroup = FVar2;
    bVar23 = pFVar27[-1].bPriorityTearDown;
    uVar13 = *(undefined2 *)&pFVar27[-1].field_0x12;
    FVar14.Value = pFVar27[-1].Track.SequenceID.Value;
    uVar5 = *(undefined8 *)&pFVar27[-1].Track.TrackIdentifier;
    pFVar28[1].bRequiresInit = pFVar27[-1].bRequiresInit;
    pFVar28[1].bPriorityTearDown = bVar23;
    *(undefined2 *)&pFVar28[1].field_0x12 = uVar13;
    pFVar28[1].Track.SequenceID = (FMovieSceneSequenceID)FVar14.Value;
    *(undefined8 *)&pFVar28[1].Track.TrackIdentifier = uVar5;
    pFVar28[1].Child.ForcedTime.Value = pFVar27[-1].Child.ForcedTime.Value;
    pFVar26->GroupEvaluationPriority = uVar15;
    pFVar26->HierarchicalBias = sVar10;
    pFVar26->EvaluationPriority = sVar11;
    pFVar26->ChildPriority = sVar12;
    pFVar27[-1].EvaluationGroup = FVar3;
    pFVar27[-1].bRequiresInit = bVar19;
    pFVar27[-1].bPriorityTearDown = bVar20;
    *(undefined2 *)&pFVar27[-1].field_0x12 = uVar21;
    pFVar27[-1].Track.SequenceID = (FMovieSceneSequenceID)FVar22.Value;
    *(undefined8 *)&pFVar27[-1].Track.TrackIdentifier = uVar4;
    pFVar27[-1].Child.ForcedTime.Value = iVar25;
    goto LAB_14607c270;
  }
  iVar25 = (pFVar31->Child).ForcedTime.Value;
  uVar15 = pFVar31->GroupEvaluationPriority;
  sVar10 = pFVar31->HierarchicalBias;
  sVar11 = pFVar31->EvaluationPriority;
  sVar12 = pFVar31->ChildPriority;
  FVar3 = pFVar31->EvaluationGroup;
  iVar30 = iVar30 + -1;
  bVar19 = pFVar31->bRequiresInit;
  bVar20 = pFVar31->bPriorityTearDown;
  uVar21 = *(undefined2 *)&pFVar31->field_0x12;
  FVar22.Value = (pFVar31->Track).SequenceID.Value;
  uVar4 = *(undefined8 *)&(pFVar31->Track).TrackIdentifier;
  pFVar31->GroupEvaluationPriority = uVar6;
  pFVar31->HierarchicalBias = uVar7;
  pFVar31->EvaluationPriority = uVar8;
  pFVar31->ChildPriority = uVar9;
  pFVar31->EvaluationGroup = FVar2;
  bVar23 = pFVar27[-1].bPriorityTearDown;
  uVar13 = *(undefined2 *)&pFVar27[-1].field_0x12;
  FVar14.Value = pFVar27[-1].Track.SequenceID.Value;
  uVar5 = *(undefined8 *)&pFVar27[-1].Track.TrackIdentifier;
  pFVar31->bRequiresInit = pFVar27[-1].bRequiresInit;
  pFVar31->bPriorityTearDown = bVar23;
  *(undefined2 *)&pFVar31->field_0x12 = uVar13;
  (pFVar31->Track).SequenceID = (FMovieSceneSequenceID)FVar14.Value;
  *(undefined8 *)&(pFVar31->Track).TrackIdentifier = uVar5;
  (pFVar31->Child).ForcedTime.Value = pFVar27[-1].Child.ForcedTime.Value;
  pFVar26->GroupEvaluationPriority = uVar15;
  pFVar26->HierarchicalBias = sVar10;
  pFVar26->EvaluationPriority = sVar11;
  pFVar26->ChildPriority = sVar12;
  pFVar27[-1].EvaluationGroup = FVar3;
  pFVar27[-1].bRequiresInit = bVar19;
  pFVar27[-1].bPriorityTearDown = bVar20;
  *(undefined2 *)&pFVar27[-1].field_0x12 = uVar21;
  pFVar27[-1].Track.SequenceID = (FMovieSceneSequenceID)FVar22.Value;
  *(undefined8 *)&pFVar27[-1].Track.TrackIdentifier = uVar4;
  pFVar27[-1].Child.ForcedTime.Value = iVar25;
  lVar24 = (longlong)pFVar26 + (-0x24 - (longlong)pFVar31);
  lVar24 = lVar24 / 0x12 + (lVar24 >> 0x3f);
  if ((lVar24 >> 1) - (lVar24 >> 0x3f) < ((longlong)pFVar33 - (longlong)pFVar32) / 0x24) {
    if (pFVar32 < pFVar33) {
      *ppFVar29 = pFVar32;
      ppFVar29[1] = pFVar33;
      *(int *)(ppFVar29 + 2) = iVar30;
      ppFVar29 = ppFVar29 + 3;
    }
    if (pFVar26 <= pFVar31 + 1) goto LAB_14607c3cc;
    pFVar33 = pFVar27 + -2;
    pFVar32 = pFVar31;
  }
  else {
    if (pFVar31 + 1 < pFVar26) {
      *ppFVar29 = pFVar31;
      ppFVar29[1] = pFVar27 + -2;
      *(int *)(ppFVar29 + 2) = iVar30;
      ppFVar29 = ppFVar29 + 3;
    }
    if (pFVar33 <= pFVar32) goto LAB_14607c3cc;
  }
  iVar25 = (int)(((longlong)pFVar33 - (longlong)pFVar32) / 0x24) + 1;
  pFVar31 = pFVar32;
  if (iVar30 == 0) goto LAB_14607c3b3;
  goto LAB_14607c210;
}

// IntroSortInternal<FMovieSceneDeterminismFence,int,UE::Core::Private::TProjectionMemberData<FFrameNumber_FMovieSceneDeterminismFence::*>,TLess<void>_> @ 14607c4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneDeterminismFence,int,UE::Core::Private::TProjectionMemberData<FFrameNumber_FMovieSceneDeterminismFence::*>,TLess<void>_>
          (FMovieSceneDeterminismFence *param_1,int param_2,
          TProjectionMemberData<FFrameNumber_FMovieSceneDeterminismFence::*> param_3,
          TLess<void> param_4)

{
  int *piVar1;
  FMovieSceneDeterminismFence *pFVar2;
  FMovieSceneDeterminismFence FVar3;
  int iVar4;
  FMovieSceneDeterminismFence *pFVar5;
  longlong lVar6;
  FMovieSceneDeterminismFence *pFVar7;
  FMovieSceneDeterminismFence *pFVar8;
  FMovieSceneDeterminismFence *pFVar9;
  FMovieSceneDeterminismFence *pFVar10;
  FMovieSceneDeterminismFence **ppFVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  FMovieSceneDeterminismFence *local_348;
  FMovieSceneDeterminismFence *local_338;
  FMovieSceneDeterminismFence *local_330;
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
      iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar5 >> 3) + 1;
      local_348._0_4_ = (int)pFVar2;
      pFVar10 = pFVar5;
      if ((int)local_348 != 0) {
LAB_14607c550:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          pFVar7 = pFVar9 + 1;
          piVar1 = (int *)((longlong)&(pFVar10->FrameNumber).Value + lVar6);
          FVar3 = pFVar10[iVar4 >> 1];
          pFVar10[iVar4 >> 1] = *pFVar10;
          *pFVar10 = FVar3;
          pFVar5 = pFVar10;
LAB_14607c580:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar9) goto code_r0x00014607c589;
          goto LAB_14607c591;
        }
        for (; pFVar5 = pFVar10, pFVar2 = pFVar10, pFVar10 < pFVar9; pFVar9 = pFVar9 + -1) {
          while (pFVar2 = pFVar2 + 1, pFVar2 <= pFVar9) {
            if (*(int *)((longlong)&(pFVar5->FrameNumber).Value + lVar6) <
                *(int *)((longlong)&(pFVar2->FrameNumber).Value + lVar6)) {
              pFVar5 = pFVar2;
            }
          }
          FVar3 = *pFVar5;
          *pFVar5 = *pFVar9;
          *pFVar9 = FVar3;
        }
        goto LAB_14607c64a;
      }
LAB_14607c639:
      local_348 = pFVar2;
      HeapSortInternal<FMovieSceneDeterminismFence,int,UE::Core::Private::TProjectionMemberData<FFrameNumber_FMovieSceneDeterminismFence::*>,TLess<void>_>
                (pFVar5,iVar4,param_3,param_4);
LAB_14607c64a:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_338 <= ppFVar11);
  }
  return;
code_r0x00014607c589:
  if (*(int *)((longlong)&(pFVar5->FrameNumber).Value + lVar6) <= *piVar1) goto LAB_14607c580;
LAB_14607c591:
  do {
    pFVar8 = pFVar7;
    pFVar7 = pFVar8 + -1;
    if (pFVar7 <= pFVar10) break;
  } while (*piVar1 <= *(int *)((longlong)&(pFVar7->FrameNumber).Value + lVar6));
  if (pFVar5 <= pFVar7) {
    FVar3 = *pFVar5;
    *pFVar5 = *pFVar7;
    *pFVar7 = FVar3;
    goto LAB_14607c580;
  }
  FVar3 = *pFVar10;
  local_348._0_4_ = (int)local_348 + -1;
  *pFVar10 = *pFVar7;
  *pFVar7 = FVar3;
  if ((longlong)((longlong)pFVar7 + (-8 - (longlong)pFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar9 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar9) {
      *ppFVar11 = pFVar5;
      ppFVar11[1] = pFVar9;
      *(int *)(ppFVar11 + 2) = (int)local_348;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar7 <= pFVar10 + 1) goto LAB_14607c64a;
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
    if (pFVar9 <= pFVar5) goto LAB_14607c64a;
  }
  iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar5 >> 3) + 1;
  pFVar10 = pFVar5;
  if ((int)local_348 == 0) goto LAB_14607c639;
  goto LAB_14607c550;
}

// IntroSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_> @ 14607c6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_>
          (FMovieSceneOrderedEvaluationKey *param_1,int param_2,
          TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*> param_3
          ,TLess<void> param_4)

{
  FMovieSceneOrderedEvaluationKey *pFVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  FMovieSceneTrackIdentifier FVar9;
  FMovieSceneSequenceID FVar10;
  FMovieSceneTrackIdentifier FVar11;
  int iVar12;
  FMovieSceneOrderedEvaluationKey *pFVar13;
  FMovieSceneOrderedEvaluationKey *pFVar14;
  longlong lVar15;
  FMovieSceneOrderedEvaluationKey *pFVar16;
  FMovieSceneOrderedEvaluationKey *pFVar17;
  FMovieSceneOrderedEvaluationKey *pFVar18;
  FMovieSceneOrderedEvaluationKey *pFVar19;
  FMovieSceneOrderedEvaluationKey **ppFVar20;
  float fVar21;
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
    lVar15 = (longlong)(int)param_3.DataMemberPtr;
    local_338 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar21;
    memset(local_320,0,0x2e8);
    ppFVar20 = &local_338;
    do {
      pFVar17 = ppFVar20[1];
      pFVar19 = *ppFVar20;
      pFVar1 = ppFVar20[2];
      iVar12 = (int)((longlong)pFVar17 - (longlong)pFVar19 >> 4) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar18 = pFVar19;
      if ((int)local_348 != 0) {
LAB_14607c7a0:
        if (8 < iVar12) {
          FVar9.Value = (pFVar18->Key).TrackIdentifier.Value;
          uVar4 = *(undefined8 *)&(pFVar18->Key).SectionIndex;
          pFVar13 = pFVar17 + 1;
          pFVar19 = pFVar18 + iVar12 / 2;
          FVar10.Value = (pFVar19->Key).SequenceID.Value;
          FVar11.Value = (pFVar19->Key).TrackIdentifier.Value;
          uVar7 = *(undefined8 *)&(pFVar19->Key).SectionIndex;
          pFVar19 = pFVar18 + iVar12 / 2;
          (pFVar19->Key).SequenceID = (FMovieSceneSequenceID)(pFVar18->Key).SequenceID.Value;
          (pFVar19->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar9.Value;
          *(undefined8 *)&(pFVar19->Key).SectionIndex = uVar4;
          (pFVar18->Key).SequenceID = (FMovieSceneSequenceID)FVar10.Value;
          (pFVar18->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar11.Value;
          *(undefined8 *)&(pFVar18->Key).SectionIndex = uVar7;
          pFVar19 = pFVar18;
LAB_14607c7d0:
          pFVar16 = pFVar19;
          pFVar19 = pFVar16 + 1;
          if ((pFVar19 <= pFVar17) &&
             (uVar2 = *(uint *)((longlong)&(pFVar19->Key).SequenceID.Value + lVar15),
             uVar3 = *(uint *)((longlong)&(pFVar18->Key).SequenceID.Value + lVar15), uVar2 <= uVar3)
             ) goto code_r0x00014607c7e3;
          goto LAB_14607c800;
        }
        for (; pFVar19 = pFVar18, pFVar1 = pFVar18, pFVar18 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar13 = pFVar19, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar17) {
            uVar2 = *(uint *)((longlong)&(pFVar1->Key).SequenceID.Value + lVar15);
            uVar3 = *(uint *)((longlong)&(pFVar13->Key).SequenceID.Value + lVar15);
            if (uVar3 < uVar2) {
              bVar8 = true;
            }
            else if (uVar2 < uVar3) {
LAB_14607c95f:
              bVar8 = false;
            }
            else {
              uVar2 = *(uint *)((longlong)&(pFVar1->Key).TrackIdentifier.Value + lVar15);
              uVar3 = *(uint *)((longlong)&(pFVar13->Key).TrackIdentifier.Value + lVar15);
              if (uVar3 < uVar2) {
                bVar8 = true;
              }
              else {
                if ((uVar3 != uVar2) ||
                   (*(uint *)((longlong)&(pFVar1->Key).SectionIndex + lVar15) <=
                    *(uint *)((longlong)&(pFVar13->Key).SectionIndex + lVar15))) goto LAB_14607c95f;
                bVar8 = true;
              }
            }
            pFVar19 = pFVar1;
            if (!bVar8) {
              pFVar19 = pFVar13;
            }
          }
          FVar10.Value = (pFVar13->Key).SequenceID.Value;
          FVar11.Value = (pFVar13->Key).TrackIdentifier.Value;
          uVar4 = *(undefined8 *)&(pFVar13->Key).SectionIndex;
          FVar9.Value = (pFVar17->Key).TrackIdentifier.Value;
          uVar7 = *(undefined8 *)&(pFVar17->Key).SectionIndex;
          (pFVar13->Key).SequenceID = (FMovieSceneSequenceID)(pFVar17->Key).SequenceID.Value;
          (pFVar13->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar9.Value;
          *(undefined8 *)&(pFVar13->Key).SectionIndex = uVar7;
          (pFVar17->Key).SequenceID = (FMovieSceneSequenceID)FVar10.Value;
          (pFVar17->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar11.Value;
          *(undefined8 *)&(pFVar17->Key).SectionIndex = uVar4;
        }
        goto LAB_14607c8d9;
      }
LAB_14607c8c8:
      local_348 = pFVar1;
      HeapSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_>
                (pFVar19,iVar12,param_3,param_4);
LAB_14607c8d9:
      ppFVar20 = ppFVar20 + -3;
    } while (&local_338 <= ppFVar20);
  }
  return;
code_r0x00014607c7e3:
  if ((uVar3 != uVar2) ||
     ((uVar2 = *(uint *)((longlong)&(pFVar19->Key).TrackIdentifier.Value + lVar15),
      uVar3 = *(uint *)((longlong)&(pFVar18->Key).TrackIdentifier.Value + lVar15), uVar2 <= uVar3 &&
      ((uVar3 != uVar2 ||
       (*(uint *)((longlong)&(pFVar19->Key).SectionIndex + lVar15) <=
        *(uint *)((longlong)&(pFVar18->Key).SectionIndex + lVar15))))))) goto LAB_14607c7d0;
LAB_14607c800:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if ((pFVar13 <= pFVar18) ||
       (uVar2 = *(uint *)((longlong)&(pFVar18->Key).SequenceID.Value + lVar15),
       uVar3 = *(uint *)((longlong)&(pFVar13->Key).SequenceID.Value + lVar15), uVar3 < uVar2))
    break;
  } while ((uVar3 != uVar2) ||
          ((uVar2 = *(uint *)((longlong)&(pFVar18->Key).TrackIdentifier.Value + lVar15),
           uVar3 = *(uint *)((longlong)&(pFVar13->Key).TrackIdentifier.Value + lVar15),
           uVar2 <= uVar3 &&
           ((uVar3 != uVar2 ||
            (*(uint *)((longlong)&(pFVar18->Key).SectionIndex + lVar15) <=
             *(uint *)((longlong)&(pFVar13->Key).SectionIndex + lVar15)))))));
  uVar5 = (pFVar13->Key).SequenceID;
  uVar6 = (pFVar13->Key).TrackIdentifier;
  uVar4 = *(undefined8 *)&pFVar14[-1].Key.SectionIndex;
  if (pFVar19 <= pFVar13) {
    FVar10.Value = (pFVar19->Key).SequenceID.Value;
    FVar9.Value = (pFVar19->Key).TrackIdentifier.Value;
    uVar7 = *(undefined8 *)&pFVar16[1].Key.SectionIndex;
    (pFVar19->Key).SequenceID = (FMovieSceneSequenceID)uVar5;
    (pFVar19->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)uVar6;
    *(undefined8 *)&pFVar16[1].Key.SectionIndex = uVar4;
    (pFVar13->Key).SequenceID = (FMovieSceneSequenceID)FVar10.Value;
    (pFVar13->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar9.Value;
    *(undefined8 *)&pFVar14[-1].Key.SectionIndex = uVar7;
    goto LAB_14607c7d0;
  }
  FVar10.Value = (pFVar18->Key).SequenceID.Value;
  FVar9.Value = (pFVar18->Key).TrackIdentifier.Value;
  uVar7 = *(undefined8 *)&(pFVar18->Key).SectionIndex;
  local_348._0_4_ = (int)local_348 + -1;
  (pFVar18->Key).SequenceID = (FMovieSceneSequenceID)uVar5;
  (pFVar18->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)uVar6;
  *(undefined8 *)&(pFVar18->Key).SectionIndex = uVar4;
  (pFVar13->Key).SequenceID = (FMovieSceneSequenceID)FVar10.Value;
  (pFVar13->Key).TrackIdentifier = (FMovieSceneTrackIdentifier)FVar9.Value;
  *(undefined8 *)&pFVar14[-1].Key.SectionIndex = uVar7;
  if ((longlong)((longlong)pFVar13 + (-0x10 - (longlong)pFVar18) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar17 - (longlong)pFVar19 & 0xfffffffffffffff0U)) {
    if (pFVar19 < pFVar17) {
      *ppFVar20 = pFVar19;
      ppFVar20[1] = pFVar17;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar13 <= pFVar18 + 1) goto LAB_14607c8d9;
    pFVar17 = pFVar14 + -2;
    pFVar19 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar13) {
      *ppFVar20 = pFVar18;
      ppFVar20[1] = pFVar14 + -2;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar17 <= pFVar19) goto LAB_14607c8d9;
  }
  iVar12 = (int)((longlong)pFVar17 - (longlong)pFVar19 >> 4) + 1;
  pFVar18 = pFVar19;
  if ((int)local_348 == 0) goto LAB_14607c8c8;
  goto LAB_14607c7a0;
}

// IntroSortInternal<FMovieSceneSectionData,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneSectionData::*>,TLess<void>_> @ 14607c9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneSectionData,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneSectionData::*>,TLess<void>_>
          (FMovieSceneSectionData *param_1,int param_2,
          TProjectionMemberData<int_FMovieSceneSectionData::*> param_3,TLess<void> param_4)

{
  FMovieSceneSectionData *pFVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  UMovieSceneSection *pUVar5;
  int iVar6;
  ESectionEvaluationFlags EVar7;
  undefined3 uVar8;
  int iVar9;
  ESectionEvaluationFlags EVar10;
  undefined3 uVar11;
  int iVar12;
  FMovieSceneSectionData *pFVar13;
  longlong lVar14;
  FMovieSceneSectionData *pFVar15;
  FMovieSceneSectionData *pFVar16;
  FMovieSceneSectionData *pFVar17;
  FMovieSceneSectionData *pFVar18;
  FMovieSceneSectionData *pFVar19;
  FMovieSceneSectionData **ppFVar20;
  float fVar21;
  undefined1 auStack_378 [48];
  FMovieSceneSectionData *local_348;
  FMovieSceneSectionData *local_338;
  FMovieSceneSectionData *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    lVar14 = (longlong)(int)param_3.DataMemberPtr;
    local_338 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar21;
    memset(local_320,0,0x2e8);
    ppFVar20 = &local_338;
    do {
      pFVar17 = ppFVar20[1];
      pFVar19 = *ppFVar20;
      pFVar1 = ppFVar20[2];
      iVar12 = (int)((longlong)pFVar17 - (longlong)pFVar19 >> 4) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar18 = pFVar19;
      if ((int)local_348 != 0) {
LAB_14607ca50:
        if (8 < iVar12) {
          iVar6 = pFVar18->TemplateIndex;
          EVar7 = pFVar18->Flags;
          uVar8 = *(undefined3 *)&pFVar18->field_0xd;
          pFVar15 = pFVar17 + 1;
          pFVar19 = pFVar18 + iVar12 / 2;
          pUVar5 = pFVar19->Section;
          iVar9 = pFVar19->TemplateIndex;
          EVar10 = pFVar19->Flags;
          uVar11 = *(undefined3 *)&pFVar19->field_0xd;
          pFVar19 = pFVar18 + iVar12 / 2;
          pFVar19->Section = pFVar18->Section;
          pFVar19->TemplateIndex = iVar6;
          pFVar19->Flags = EVar7;
          *(undefined3 *)&pFVar19->field_0xd = uVar8;
          pFVar18->Section = pUVar5;
          pFVar18->TemplateIndex = iVar9;
          pFVar18->Flags = EVar10;
          *(undefined3 *)&pFVar18->field_0xd = uVar11;
          pFVar19 = pFVar18;
LAB_14607ca80:
          pFVar13 = pFVar19;
          pFVar19 = pFVar13 + 1;
          if (pFVar19 <= pFVar17) goto code_r0x00014607ca89;
          goto LAB_14607ca92;
        }
        for (; pFVar19 = pFVar18, pFVar1 = pFVar18, pFVar18 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar17) {
            if (*(int *)((longlong)&pFVar19->Section + lVar14) <
                *(int *)((longlong)&pFVar1->Section + lVar14)) {
              pFVar19 = pFVar1;
            }
          }
          pUVar5 = pFVar19->Section;
          iVar6 = pFVar19->TemplateIndex;
          EVar10 = pFVar19->Flags;
          uVar11 = *(undefined3 *)&pFVar19->field_0xd;
          iVar12 = pFVar17->TemplateIndex;
          EVar7 = pFVar17->Flags;
          uVar8 = *(undefined3 *)&pFVar17->field_0xd;
          pFVar19->Section = pFVar17->Section;
          pFVar19->TemplateIndex = iVar12;
          pFVar19->Flags = EVar7;
          *(undefined3 *)&pFVar19->field_0xd = uVar8;
          pFVar17->Section = pUVar5;
          pFVar17->TemplateIndex = iVar6;
          pFVar17->Flags = EVar10;
          *(undefined3 *)&pFVar17->field_0xd = uVar11;
        }
        goto LAB_14607cb53;
      }
LAB_14607cb42:
      local_348 = pFVar1;
      HeapSortInternal<FMovieSceneSectionData,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneSectionData::*>,TLess<void>_>
                (pFVar19,iVar12,param_3,param_4);
LAB_14607cb53:
      ppFVar20 = ppFVar20 + -3;
    } while (&local_338 <= ppFVar20);
  }
  return;
code_r0x00014607ca89:
  if (*(int *)((longlong)&pFVar19->Section + lVar14) <=
      *(int *)((longlong)&pFVar18->Section + lVar14)) goto LAB_14607ca80;
LAB_14607ca92:
  do {
    pFVar16 = pFVar15;
    pFVar15 = pFVar16 + -1;
    if (pFVar15 <= pFVar18) break;
  } while (*(int *)((longlong)&pFVar18->Section + lVar14) <=
           *(int *)((longlong)&pFVar15->Section + lVar14));
  uVar2 = pFVar16[-1].TemplateIndex;
  uVar3 = pFVar16[-1].Flags;
  uVar4 = *(undefined3 *)&pFVar16[-1].field_0xd;
  if (pFVar19 <= pFVar15) {
    pUVar5 = pFVar19->Section;
    iVar12 = pFVar13[1].TemplateIndex;
    EVar7 = pFVar13[1].Flags;
    uVar8 = *(undefined3 *)&pFVar13[1].field_0xd;
    pFVar19->Section = pFVar15->Section;
    pFVar13[1].TemplateIndex = uVar2;
    pFVar13[1].Flags = uVar3;
    *(undefined3 *)&pFVar13[1].field_0xd = uVar4;
    pFVar15->Section = pUVar5;
    pFVar16[-1].TemplateIndex = iVar12;
    pFVar16[-1].Flags = EVar7;
    *(undefined3 *)&pFVar16[-1].field_0xd = uVar8;
    goto LAB_14607ca80;
  }
  pUVar5 = pFVar18->Section;
  iVar12 = pFVar18->TemplateIndex;
  EVar7 = pFVar18->Flags;
  uVar8 = *(undefined3 *)&pFVar18->field_0xd;
  local_348._0_4_ = (int)local_348 + -1;
  pFVar18->Section = pFVar15->Section;
  pFVar18->TemplateIndex = uVar2;
  pFVar18->Flags = uVar3;
  *(undefined3 *)&pFVar18->field_0xd = uVar4;
  pFVar15->Section = pUVar5;
  pFVar16[-1].TemplateIndex = iVar12;
  pFVar16[-1].Flags = EVar7;
  *(undefined3 *)&pFVar16[-1].field_0xd = uVar8;
  if ((longlong)((longlong)pFVar15 + (-0x10 - (longlong)pFVar18) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar17 - (longlong)pFVar19 & 0xfffffffffffffff0U)) {
    if (pFVar19 < pFVar17) {
      *ppFVar20 = pFVar19;
      ppFVar20[1] = pFVar17;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar15 <= pFVar18 + 1) goto LAB_14607cb53;
    pFVar17 = pFVar16 + -2;
    pFVar19 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar15) {
      *ppFVar20 = pFVar18;
      ppFVar20[1] = pFVar16 + -2;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar17 <= pFVar19) goto LAB_14607cb53;
  }
  iVar12 = (int)((longlong)pFVar17 - (longlong)pFVar19 >> 4) + 1;
  pFVar18 = pFVar19;
  if ((int)local_348 == 0) goto LAB_14607cb42;
  goto LAB_14607ca50;
}

// IntroSortInternal<FMovieSceneSequenceID,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSequenceID,TLess<void>_>_> @ 14607cbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMovieSceneSequenceID,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSequenceID,TLess<void>_>_>
          (FMovieSceneSequenceID *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMovieSceneSequenceID,TLess<void>_> param_4)

{
  FMovieSceneSequenceID *pFVar1;
  uint uVar2;
  int iVar3;
  FMovieSceneSequenceID *pFVar4;
  FMovieSceneSequenceID **ppFVar5;
  FMovieSceneSequenceID *pFVar6;
  FMovieSceneSequenceID *pFVar7;
  FMovieSceneSequenceID *pFVar8;
  FMovieSceneSequenceID *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FMovieSceneSequenceID *local_338;
  FMovieSceneSequenceID *local_328;
  FMovieSceneSequenceID *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_14607cca0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          uVar2 = pFVar9[iVar3 >> 1].Value;
          pFVar9[iVar3 >> 1].Value = pFVar9->Value;
          pFVar9->Value = uVar2;
          pFVar4 = pFVar9;
LAB_14607ccd0:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x00014607ccd9;
          goto LAB_14607cce0;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->Value < pFVar1->Value) {
              pFVar4 = pFVar1;
            }
          }
          uVar2 = pFVar4->Value;
          pFVar4->Value = pFVar8->Value;
          pFVar8->Value = uVar2;
        }
        goto LAB_14607cd98;
      }
LAB_14607cd87:
      local_338 = pFVar1;
      HeapSortInternal<FMovieSceneSequenceID,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSequenceID,TLess<void>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_14607cd98:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x00014607ccd9:
  if (pFVar4->Value <= pFVar9->Value) goto LAB_14607ccd0;
LAB_14607cce0:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->Value <= pFVar6->Value);
  if (pFVar4 <= pFVar6) {
    uVar2 = pFVar4->Value;
    pFVar4->Value = pFVar6->Value;
    pFVar6->Value = uVar2;
    goto LAB_14607ccd0;
  }
  uVar2 = pFVar9->Value;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar9->Value = pFVar6->Value;
  pFVar6->Value = uVar2;
  if ((longlong)((longlong)pFVar6 + (-4 - (longlong)pFVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffffcU)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_14607cd98;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_14607cd98;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_14607cd87;
  goto LAB_14607cca0;
}

// IntroSortInternal<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>_>_> @ 14607ce10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>_>_>
          (FSortedSection *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>_>
          param_4)

{
  UMovieSceneSection *pUVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  FSortedSection *pFVar9;
  FSortedSection *pFVar10;
  FSortedSection *pFVar11;
  FSortedSection **ppFVar12;
  int iVar13;
  FSortedSection *pFVar14;
  FSortedSection *pFVar15;
  FSortedSection *pFVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  FSortedSection *local_358;
  FSortedSection *local_348;
  FSortedSection *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppFVar12 = &local_348;
    do {
      pFVar16 = ppFVar12[1];
      pFVar15 = *ppFVar12;
      local_358 = ppFVar12[2];
      iVar8 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
      pFVar14 = pFVar15;
      iVar13 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14607ced0:
        if (8 < iVar8) {
          iVar3 = pFVar14->Index;
          uVar4 = *(undefined4 *)&pFVar14->field_0xc;
          pFVar9 = pFVar16 + 1;
          pFVar15 = pFVar14 + iVar8 / 2;
          pUVar1 = pFVar15->Section;
          iVar5 = pFVar15->Index;
          uVar6 = *(undefined4 *)&pFVar15->field_0xc;
          pFVar15 = pFVar14 + iVar8 / 2;
          pFVar15->Section = pFVar14->Section;
          pFVar15->Index = iVar3;
          *(undefined4 *)&pFVar15->field_0xc = uVar4;
          pFVar14->Section = pUVar1;
          pFVar14->Index = iVar5;
          *(undefined4 *)&pFVar14->field_0xc = uVar6;
          pFVar15 = pFVar14;
LAB_14607cf00:
          pFVar11 = pFVar15;
          pFVar15 = pFVar11 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x00014607cf09;
          goto LAB_14607cf20;
        }
        for (; pFVar9 = pFVar14, pFVar15 = pFVar14, pFVar14 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar11 = pFVar9, pFVar15 = pFVar15 + 1, pFVar15 <= pFVar16) {
            cVar7 = (**(code **)param_4.Predicate)
                              (*(undefined8 *)&(param_4.Predicate)->field_0x8,pFVar11,pFVar15);
            pFVar9 = pFVar15;
            if (cVar7 == '\0') {
              pFVar9 = pFVar11;
            }
          }
          pUVar1 = pFVar11->Section;
          iVar8 = pFVar11->Index;
          uVar6 = *(undefined4 *)&pFVar11->field_0xc;
          iVar13 = pFVar16->Index;
          uVar4 = *(undefined4 *)&pFVar16->field_0xc;
          pFVar11->Section = pFVar16->Section;
          pFVar11->Index = iVar13;
          *(undefined4 *)&pFVar11->field_0xc = uVar4;
          pFVar16->Section = pUVar1;
          pFVar16->Index = iVar8;
          *(undefined4 *)&pFVar16->field_0xc = uVar6;
        }
        goto LAB_14607cff0;
      }
LAB_14607cfdf:
      HeapSortInternal<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection,TFunctionRef<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&)>_>_>
                (pFVar15,iVar8,param_3,param_4);
LAB_14607cff0:
      ppFVar12 = ppFVar12 + -3;
    } while (&local_348 <= ppFVar12);
  }
  return;
code_r0x00014607cf09:
  cVar7 = (**(code **)param_4.Predicate)
                    (*(undefined8 *)&(param_4.Predicate)->field_0x8,pFVar14,pFVar15);
  if (cVar7 == '\0') goto LAB_14607cf00;
LAB_14607cf20:
  do {
    pFVar10 = pFVar9;
    pFVar9 = pFVar10 + -1;
    if (pFVar9 <= pFVar14) break;
    cVar7 = (**(code **)param_4.Predicate)
                      (*(undefined8 *)&(param_4.Predicate)->field_0x8,pFVar9,pFVar14);
  } while (cVar7 == '\0');
  uVar2 = *(undefined8 *)&pFVar10[-1].Index;
  if (pFVar15 <= pFVar9) {
    pUVar1 = pFVar15->Section;
    iVar8 = pFVar11[1].Index;
    uVar4 = *(undefined4 *)&pFVar11[1].field_0xc;
    pFVar15->Section = pFVar9->Section;
    *(undefined8 *)&pFVar11[1].Index = uVar2;
    pFVar9->Section = pUVar1;
    pFVar10[-1].Index = iVar8;
    *(undefined4 *)&pFVar10[-1].field_0xc = uVar4;
    goto LAB_14607cf00;
  }
  pUVar1 = pFVar14->Section;
  iVar8 = pFVar14->Index;
  uVar4 = *(undefined4 *)&pFVar14->field_0xc;
  iVar13 = iVar13 + -1;
  pFVar14->Section = pFVar9->Section;
  *(undefined8 *)&pFVar14->Index = uVar2;
  pFVar9->Section = pUVar1;
  pFVar10[-1].Index = iVar8;
  *(undefined4 *)&pFVar10[-1].field_0xc = uVar4;
  if ((longlong)((longlong)pFVar9 + (-0x10 - (longlong)pFVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar12 = pFVar15;
      ppFVar12[1] = pFVar16;
      *(int *)(ppFVar12 + 2) = iVar13;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar9 <= pFVar14 + 1) goto LAB_14607cff0;
    pFVar16 = pFVar10 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar9) {
      *ppFVar12 = pFVar14;
      ppFVar12[1] = pFVar10 + -2;
      *(int *)(ppFVar12 + 2) = iVar13;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_14607cff0;
  }
  iVar8 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
  pFVar14 = pFVar15;
  if (iVar13 == 0) goto LAB_14607cfdf;
  goto LAB_14607ced0;
}

// IntroSortInternal<UE::MovieScene::FWeightedValue,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FWeightedValue,TLess<void>_>_> @ 14607d0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::MovieScene::FWeightedValue,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FWeightedValue,TLess<void>_>_>
          (FWeightedValue *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::MovieScene::FWeightedValue,TLess<void>_> param_4)

{
  FWeightedValue *pFVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined3 uVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  undefined3 uVar12;
  int iVar13;
  FWeightedValue *pFVar14;
  FWeightedValue **ppFVar15;
  FWeightedValue *pFVar16;
  FWeightedValue *pFVar17;
  FWeightedValue *pFVar18;
  FWeightedValue *pFVar19;
  FWeightedValue *pFVar20;
  float fVar21;
  undefined1 auStack_368 [48];
  FWeightedValue *local_338;
  FWeightedValue *local_328;
  FWeightedValue *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar21;
    memset(local_310,0,0x2e8);
    ppFVar15 = &local_328;
    do {
      pFVar18 = ppFVar15[1];
      pFVar20 = *ppFVar15;
      pFVar1 = ppFVar15[2];
      iVar13 = (int)((longlong)pFVar18 - (longlong)pFVar20 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar19 = pFVar20;
      if ((int)local_338 != 0) {
LAB_14607d160:
        if (8 < iVar13) {
          fVar21 = pFVar19->Weight;
          uVar5 = *(undefined4 *)&pFVar19->field_0xc;
          pFVar16 = pFVar18 + 1;
          pFVar20 = pFVar19 + iVar13 / 2;
          dVar3 = pFVar20->Value;
          fVar8 = pFVar20->Weight;
          uVar9 = *(undefined4 *)&pFVar20->field_0xc;
          dVar4 = pFVar20->BaseValue;
          iVar10 = pFVar20->BlendingOrder;
          bVar11 = pFVar20->bIsAdditive;
          uVar12 = *(undefined3 *)&pFVar20->field_0x1d;
          pFVar20->Value = pFVar19->Value;
          pFVar20->Weight = fVar21;
          *(undefined4 *)&pFVar20->field_0xc = uVar5;
          iVar13 = pFVar19->BlendingOrder;
          bVar6 = pFVar19->bIsAdditive;
          uVar7 = *(undefined3 *)&pFVar19->field_0x1d;
          pFVar20->BaseValue = pFVar19->BaseValue;
          pFVar20->BlendingOrder = iVar13;
          pFVar20->bIsAdditive = bVar6;
          *(undefined3 *)&pFVar20->field_0x1d = uVar7;
          pFVar19->Value = dVar3;
          pFVar19->Weight = fVar8;
          *(undefined4 *)&pFVar19->field_0xc = uVar9;
          pFVar19->BaseValue = dVar4;
          pFVar19->BlendingOrder = iVar10;
          pFVar19->bIsAdditive = bVar11;
          *(undefined3 *)&pFVar19->field_0x1d = uVar12;
          pFVar20 = pFVar19;
LAB_14607d1a0:
          pFVar14 = pFVar20;
          pFVar20 = pFVar14 + 1;
          if (pFVar20 <= pFVar18) goto code_r0x00014607d1a9;
          goto LAB_14607d1b2;
        }
        for (; pFVar20 = pFVar19, pFVar1 = pFVar19, pFVar19 < pFVar18; pFVar18 = pFVar18 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar18) {
            if (pFVar20->BlendingOrder < pFVar1->BlendingOrder) {
              pFVar20 = pFVar1;
            }
          }
          dVar3 = pFVar20->Value;
          fVar8 = pFVar20->Weight;
          uVar9 = *(undefined4 *)&pFVar20->field_0xc;
          dVar4 = pFVar20->BaseValue;
          iVar10 = pFVar20->BlendingOrder;
          bVar11 = pFVar20->bIsAdditive;
          uVar12 = *(undefined3 *)&pFVar20->field_0x1d;
          fVar21 = pFVar18->Weight;
          uVar5 = *(undefined4 *)&pFVar18->field_0xc;
          pFVar20->Value = pFVar18->Value;
          pFVar20->Weight = fVar21;
          *(undefined4 *)&pFVar20->field_0xc = uVar5;
          iVar13 = pFVar18->BlendingOrder;
          bVar6 = pFVar18->bIsAdditive;
          uVar7 = *(undefined3 *)&pFVar18->field_0x1d;
          pFVar20->BaseValue = pFVar18->BaseValue;
          pFVar20->BlendingOrder = iVar13;
          pFVar20->bIsAdditive = bVar6;
          *(undefined3 *)&pFVar20->field_0x1d = uVar7;
          pFVar18->Value = dVar3;
          pFVar18->Weight = fVar8;
          *(undefined4 *)&pFVar18->field_0xc = uVar9;
          pFVar18->BaseValue = dVar4;
          pFVar18->BlendingOrder = iVar10;
          pFVar18->bIsAdditive = bVar11;
          *(undefined3 *)&pFVar18->field_0x1d = uVar12;
        }
        goto LAB_14607d299;
      }
LAB_14607d288:
      local_338 = pFVar1;
      HeapSortInternal<UE::MovieScene::FWeightedValue,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FWeightedValue,TLess<void>_>_>
                (pFVar20,iVar13,param_3,param_4);
LAB_14607d299:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_328 <= ppFVar15);
  }
  return;
code_r0x00014607d1a9:
  if (pFVar14[1].BlendingOrder <= pFVar19->BlendingOrder) goto LAB_14607d1a0;
LAB_14607d1b2:
  do {
    pFVar17 = pFVar16;
    pFVar16 = pFVar17 + -1;
    if (pFVar16 <= pFVar19) break;
  } while (pFVar19->BlendingOrder <= pFVar17[-1].BlendingOrder);
  uVar2 = *(undefined8 *)&pFVar17[-1].Weight;
  if (pFVar20 <= pFVar16) {
    dVar3 = pFVar20->Value;
    fVar21 = pFVar14[1].Weight;
    uVar5 = *(undefined4 *)&pFVar14[1].field_0xc;
    dVar4 = pFVar14[1].BaseValue;
    iVar10 = pFVar14[1].BlendingOrder;
    bVar11 = pFVar14[1].bIsAdditive;
    uVar12 = *(undefined3 *)&pFVar14[1].field_0x1d;
    pFVar20->Value = pFVar16->Value;
    *(undefined8 *)&pFVar14[1].Weight = uVar2;
    iVar13 = pFVar17[-1].BlendingOrder;
    bVar6 = pFVar17[-1].bIsAdditive;
    uVar7 = *(undefined3 *)&pFVar17[-1].field_0x1d;
    pFVar14[1].BaseValue = pFVar17[-1].BaseValue;
    pFVar14[1].BlendingOrder = iVar13;
    pFVar14[1].bIsAdditive = bVar6;
    *(undefined3 *)&pFVar14[1].field_0x1d = uVar7;
    pFVar16->Value = dVar3;
    pFVar17[-1].Weight = fVar21;
    *(undefined4 *)&pFVar17[-1].field_0xc = uVar5;
    pFVar17[-1].BaseValue = dVar4;
    pFVar17[-1].BlendingOrder = iVar10;
    pFVar17[-1].bIsAdditive = bVar11;
    *(undefined3 *)&pFVar17[-1].field_0x1d = uVar12;
    goto LAB_14607d1a0;
  }
  dVar3 = pFVar19->Value;
  fVar21 = pFVar19->Weight;
  uVar5 = *(undefined4 *)&pFVar19->field_0xc;
  dVar4 = pFVar19->BaseValue;
  iVar10 = pFVar19->BlendingOrder;
  bVar11 = pFVar19->bIsAdditive;
  uVar12 = *(undefined3 *)&pFVar19->field_0x1d;
  pFVar19->Value = pFVar16->Value;
  *(undefined8 *)&pFVar19->Weight = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  iVar13 = pFVar17[-1].BlendingOrder;
  bVar6 = pFVar17[-1].bIsAdditive;
  uVar7 = *(undefined3 *)&pFVar17[-1].field_0x1d;
  pFVar19->BaseValue = pFVar17[-1].BaseValue;
  pFVar19->BlendingOrder = iVar13;
  pFVar19->bIsAdditive = bVar6;
  *(undefined3 *)&pFVar19->field_0x1d = uVar7;
  pFVar16->Value = dVar3;
  pFVar17[-1].Weight = fVar21;
  *(undefined4 *)&pFVar17[-1].field_0xc = uVar5;
  pFVar17[-1].BaseValue = dVar4;
  pFVar17[-1].BlendingOrder = iVar10;
  pFVar17[-1].bIsAdditive = bVar11;
  *(undefined3 *)&pFVar17[-1].field_0x1d = uVar12;
  if ((longlong)((longlong)pFVar16 + (-0x20 - (longlong)pFVar19) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar18 - (longlong)pFVar20 & 0xffffffffffffffe0U)) {
    if (pFVar20 < pFVar18) {
      *ppFVar15 = pFVar20;
      ppFVar15[1] = pFVar18;
      *(int *)(ppFVar15 + 2) = (int)local_338;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar16 <= pFVar19 + 1) goto LAB_14607d299;
    pFVar18 = pFVar17 + -2;
    pFVar20 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar16) {
      *ppFVar15 = pFVar19;
      ppFVar15[1] = pFVar17 + -2;
      *(int *)(ppFVar15 + 2) = (int)local_338;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar18 <= pFVar20) goto LAB_14607d299;
  }
  iVar13 = (int)((longlong)pFVar18 - (longlong)pFVar20 >> 5) + 1;
  pFVar19 = pFVar20;
  if ((int)local_338 == 0) goto LAB_14607d288;
  goto LAB_14607d160;
}

// Iterate_PerEntityImpl<`UMovieSceneBindingLifetimeSystem::OnRun'::__l8::<lambda_1>_&> @ 14607d340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
::Iterate_PerEntityImpl<_UMovieSceneBindingLifetimeSystem::OnRun_::__l8::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UObject *this_00;
  code *pcVar3;
  FSharedPlaybackState *pFVar4;
  EEntityThreadingModel EVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  FEntityAllocation *pFVar8;
  UClass *pUVar9;
  FRelativeObjectBindingID *pFVar10;
  UMovieSceneSequencePlayer *pUVar11;
  FEntityAllocation *pFVar12;
  UMovieSceneSequencePlayer *pUVar13;
  FComponentHeader *pFVar14;
  EComponentHeaderLockMode EVar15;
  longlong lVar16;
  FComponentHeader *pFVar17;
  longlong *plVar18;
  FComponentHeader *pFVar19;
  FComponentHeader *pFVar20;
  FComponentHeader *pFVar21;
  FMovieSceneSequenceID local_184;
  UMovieSceneSequencePlayer *local_180;
  int local_178;
  FMovieSceneEvaluationState *local_170;
  FSharedPlaybackState *local_168;
  uint uStack_160;
  uint uStack_15c;
  FComponentHeader *local_158;
  ulonglong local_150;
  EComponentHeaderLockMode local_148;
  EComponentHeaderLockMode local_144;
  EComponentHeaderLockMode local_140;
  int local_13c;
  longlong local_138;
  ulonglong local_130;
  FEntityAllocationProxy local_128;
  FComponentHeader *local_118;
  undefined8 local_110;
  FSharedPlaybackState *local_108;
  FEntityAllocationIterator local_100;
  FEntityAllocation *local_e8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_e0;
  uchar *local_d0;
  uchar *local_c8;
  FEntityAllocationIteratorProxy local_c0;
  FGuid local_a8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_98;
  FEntityAllocationWriteContext local_88 [2];
  FSharedPlaybackState *local_78 [2];
  FSharedPlaybackState *local_68;
  FRelativeObjectBindingID local_58;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 &&
      (*(short *)&(this->Accessors).field_0xa != -1 && *(short *)&(this->Accessors).field_0x8 != -1)
     ) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_88,param_1);
    EVar5 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_c0,param_2);
    local_100.Manager = local_c0.Manager;
    local_100.Filter = local_c0.Filter;
    FEntityManager::EnterIteration(local_c0.Manager);
    local_100.AllocationIndex =
         FEntityAllocationIterator::FindMatchingAllocationStartingAt(&local_100,0);
    local_13c = *(int *)&((local_c0.Manager)->EntityAllocationMasks).field_0x8;
    if (local_100.AllocationIndex != local_13c) {
      do {
        local_128.Manager = local_100.Manager;
        local_128.AllocationIndex = local_100.AllocationIndex;
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_128);
        if (EVar5 == NoThreading) {
          pFVar7->LockMode = LockFree;
          pFVar12 = pFVar7;
        }
        else {
          pFVar12 = (FEntityAllocation *)0x0;
        }
        local_e8 = pFVar12;
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_128);
        pFVar14 = pFVar8->ComponentHeaders;
        pFVar20 = pFVar14 + pFVar8->NumComponents;
        for (; pFVar14 != pFVar20; pFVar14 = pFVar14 + 1) {
          if ((pFVar14->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xa) {
            if (pFVar14 != (FComponentHeader *)0x0) goto LAB_14607d4a1;
            goto LAB_14607d47b;
          }
        }
        pFVar14 = (FComponentHeader *)0x0;
LAB_14607d47b:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14607d4a1:
        local_144 = pFVar8->LockMode;
        if (local_144 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
        }
        LOCK();
        pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
        UNLOCK();
        local_c8 = pFVar14->Components;
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_128);
        pFVar20 = pFVar8->ComponentHeaders;
        pFVar21 = pFVar20 + pFVar8->NumComponents;
        for (; pFVar20 != pFVar21; pFVar20 = pFVar20 + 1) {
          if ((pFVar20->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x8) {
            if (pFVar20 != (FComponentHeader *)0x0) goto LAB_14607d52d;
            goto LAB_14607d507;
          }
        }
        pFVar20 = (FComponentHeader *)0x0;
LAB_14607d507:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14607d52d:
        local_140 = pFVar8->LockMode;
        if (local_140 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
        }
        LOCK();
        pFVar20->ScheduledAccessCount = (atomic<int>)((int)pFVar20->ScheduledAccessCount + 1);
        UNLOCK();
        local_d0 = pFVar20->Components;
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_128);
        pFVar21 = pFVar8->ComponentHeaders;
        pFVar19 = pFVar21 + pFVar8->NumComponents;
        for (; pFVar21 != pFVar19; pFVar21 = pFVar21 + 1) {
          if ((pFVar21->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
            if (pFVar21 != (FComponentHeader *)0x0) {
              EVar15 = pFVar8->LockMode;
              local_130 = (ulonglong)EVar15;
              local_158 = pFVar21;
              if (EVar15 == Mutex) {
                AcquireSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
              }
              LOCK();
              pFVar21->ScheduledAccessCount = (atomic<int>)((int)pFVar21->ScheduledAccessCount + 1);
              UNLOCK();
              local_108 = (FSharedPlaybackState *)pFVar21->Components;
              local_110 = CONCAT44(local_110._4_4_,EVar15);
              local_118 = pFVar21;
              goto LAB_14607d5b8;
            }
            break;
          }
        }
        local_110 = 0;
        local_158 = (FComponentHeader *)0x0;
        local_118 = (FComponentHeader *)0x0;
        local_108 = (FSharedPlaybackState *)0x0;
        local_130 = 0;
LAB_14607d5b8:
        pFVar19 = local_118;
        local_168 = local_108;
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_128);
        pFVar21 = pFVar8->ComponentHeaders;
        pFVar17 = pFVar21 + pFVar8->NumComponents;
        for (; pFVar21 != pFVar17; pFVar21 = pFVar21 + 1) {
          if ((pFVar21->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2) {
            if (pFVar21 != (FComponentHeader *)0x0) goto LAB_14607d636;
            goto LAB_14607d5f7;
          }
        }
        pFVar21 = (FComponentHeader *)0x0;
LAB_14607d5f7:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14607d636:
        EVar15 = pFVar8->LockMode;
        local_148 = EVar15;
        if (EVar15 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
        }
        LOCK();
        pFVar21->ScheduledAccessCount = (atomic<int>)((int)pFVar21->ScheduledAccessCount + 1);
        UNLOCK();
        local_180 = (UMovieSceneSequencePlayer *)pFVar21->Components;
        FEntityAllocationProxy::GetAllocation(&local_128);
        pFVar4 = local_168;
        local_150 = (ulonglong)pFVar7->Size;
        local_178 = 0;
        local_138 = 0;
        pUVar13 = local_180;
        if (local_150 != 0) {
          do {
            if (pFVar4 == (FSharedPlaybackState *)0x0) {
              plVar18 = (longlong *)0x0;
            }
            else {
              plVar18 = &pFVar4->_padding_ + local_178;
            }
            local_a8._0_8_ = pUVar13->_padding_;
            local_a8._8_8_ = ((FMovieSceneEvaluationState *)&pUVar13->_padding_)->_padding_;
            lVar16 = (ulonglong)(*(uint *)(local_d0 + local_138 * 4) & 0xffff) * 0x140 +
                     *(longlong *)&param_3->InstanceRegistry->Instances;
            local_184.Value = *(uint *)(lVar16 + 0x128);
            local_168 = *(FSharedPlaybackState **)(lVar16 + 0x118);
            pTVar2 = *(TReferenceControllerBase<1> **)(lVar16 + 0x120);
            if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              local_170 = FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                                    (local_168);
              local_e0.Object = local_168;
              local_e0.SharedReferenceCount.ReferenceController = pTVar2;
            }
            else {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar2);
              local_e0.Object = local_168;
              local_e0.SharedReferenceCount.ReferenceController = pTVar2;
              local_170 = FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                                    (local_168);
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_180 = (UMovieSceneSequencePlayer *)
                        FPlayerIndexPlaybackCapability::GetPlayer(&local_e0);
            if (local_170 != (FMovieSceneEvaluationState *)0x0) {
              if (local_c8[local_138] == '\x01') {
                FMovieSceneEvaluationState::SetBindingActivation
                          (local_170,&local_a8,&local_184,*param_3->bLink == false);
              }
              else if (*param_3->bLink == false) {
                if (((plVar18 != (longlong *)0x0) &&
                    (this_00 = (UObject *)*plVar18, this_00 != (UObject *)0x0)) &&
                   (bVar6 = UObject::Implements<UMovieSceneBindingEventReceiverInterface>(this_00),
                   bVar6)) {
                  if (GC::GIsIncrementalReachabilityPending != false) {
                    GC::MarkAsReachable(this_00);
                  }
                  pUVar9 = Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_NoRegister();
                  UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar9);
                  if (local_180 != (UMovieSceneSequencePlayer *)0x0) {
                    local_98.Object = local_168;
                    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar2->SharedReferenceCount =
                           (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    local_98.SharedReferenceCount.ReferenceController = pTVar2;
                    pFVar10 = FRelativeObjectBindingID::FRelativeObjectBindingID
                                        (&local_58,(FMovieSceneSequenceID)0x0,local_184,&local_a8,
                                         &local_98);
                    local_168 = *(FSharedPlaybackState **)&pFVar10->Guid;
                    uStack_160 = (pFVar10->Guid).C;
                    uStack_15c = (pFVar10->Guid).D;
                    local_108 = *(FSharedPlaybackState **)&pFVar10->SequenceID;
                    local_180 = (UMovieSceneSequencePlayer *)
                                (**(code **)(local_180->_padding_ + 0x28))();
                    if (local_180 == (UMovieSceneSequencePlayer *)0x0) {
LAB_14607d8ea:
                      pUVar11 = (UMovieSceneSequencePlayer *)0x0;
                    }
                    else {
                      pUVar9 = Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister();
                      iVar1 = (int)pUVar9->_padding_;
                      if ((*(int *)(*(longlong *)&local_180->_padding_ + 0x38) < iVar1) ||
                         (pUVar11 = local_180,
                         (longlong *)
                         *(undefined1 **)
                          (*(longlong *)(*(longlong *)&local_180->_padding_ + 0x30) +
                          (longlong)iVar1 * 8) != &pUVar9->_padding_)) goto LAB_14607d8ea;
                    }
                    local_78[1]._4_4_ = uStack_15c;
                    local_78[1]._0_4_ = uStack_160;
                    local_78[0] = local_168;
                    local_68 = local_108;
                    IMovieSceneBindingEventReceiverInterface::Execute_OnObjectUnboundBySequencer
                              (this_00,pUVar11,(FMovieSceneObjectBindingID *)local_78);
                  }
                }
                FMovieSceneEvaluationState::Invalidate(local_170,&local_a8,&local_184);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            local_178 = local_178 + 1;
            local_138 = local_138 + 1;
            pFVar12 = local_e8;
            pUVar13 = (UMovieSceneSequencePlayer *)&pUVar13->_padding_;
            pFVar19 = local_158;
            EVar15 = local_148;
          } while (local_138 < (longlong)local_150);
        }
        LOCK();
        pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
        UNLOCK();
        if (local_144 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
        }
        LOCK();
        pFVar20->ScheduledAccessCount = (atomic<int>)((int)pFVar20->ScheduledAccessCount + -1);
        UNLOCK();
        if (local_140 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
        }
        if (pFVar19 != (FComponentHeader *)0x0) {
          LOCK();
          pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + -1);
          UNLOCK();
          if ((int)local_130 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)&pFVar19->ReadWriteLock);
          }
        }
        LOCK();
        pFVar21->ScheduledAccessCount = (atomic<int>)((int)pFVar21->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar15 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
        }
        if (pFVar12 != (FEntityAllocation *)0x0) {
          pFVar12->LockMode = Mutex;
        }
        local_100.AllocationIndex =
             FEntityAllocationIterator::FindMatchingAllocationStartingAt
                       (&local_100,local_100.AllocationIndex + 1);
        local_c0.Filter = local_100.Filter;
      } while (local_100.AllocationIndex != local_13c);
    }
    if (local_c0.Filter != (FEntityComponentFilter *)0x0) {
      FEntityManager::ExitIteration(local_100.Manager);
    }
  }
  return;
}

// Iterate_PerEntityImpl<`UMovieSceneBindingLifetimeSystem::OnRun'::__l10::<lambda_2>_&> @ 14607da30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>,UE::MovieScene::TReadAccess<UObject_*>_>
::Iterate_PerEntityImpl<_UMovieSceneBindingLifetimeSystem::OnRun_::__l10::<lambda_2>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>,UE::MovieScene::TReadAccess<UObject_*>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_2> *param_3)

{
  ushort uVar1;
  int iVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  FMovieSceneSequenceID FVar7;
  UObject *this_00;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSharedPlaybackState *pFVar10;
  code *pcVar11;
  FEntityManager *pFVar12;
  int iVar13;
  EEntityThreadingModel EVar14;
  bool bVar15;
  int iVar16;
  FEntityAllocation *pFVar17;
  FEntityAllocation *pFVar18;
  IMovieScenePlayer *pIVar19;
  UClass *pUVar20;
  FRelativeObjectBindingID *pFVar21;
  UMovieSceneSequencePlayer *pUVar22;
  longlong lVar23;
  uchar *puVar24;
  FEntityAllocation *pFVar25;
  longlong lVar26;
  FComponentHeader *pFVar27;
  FComponentHeader *pFVar28;
  FComponentHeader *pFVar29;
  FComponentHeader *pFVar30;
  FComponentHeader *pFVar31;
  ushort *local_148;
  FEntityAllocationProxy local_140;
  FEntityAllocationIterator local_130;
  uchar *local_118;
  FEntityAllocation *local_110;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_108;
  uchar *local_f8;
  uchar *local_f0;
  UClass *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  FEntityAllocationIteratorProxy local_d8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_c8;
  FEntityAllocationWriteContext local_b8 [2];
  FGuid local_a8 [2];
  uint local_88;
  int iStack_84;
  UClass *local_78 [4];
  FRelativeObjectBindingID local_58;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 &&
      (*(short *)&(this->Accessors).field_0x4 != -1 &&
      (*(short *)&(this->Accessors).field_0x8 != -1 && *(short *)&(this->Accessors).field_0x6 != -1)
      )) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_b8,param_1);
    EVar14 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_d8,param_2);
    local_130.Manager = local_d8.Manager;
    local_130.Filter = local_d8.Filter;
    FEntityManager::EnterIteration(local_d8.Manager);
    iVar16 = FEntityAllocationIterator::FindMatchingAllocationStartingAt(&local_130,0);
    iVar2 = *(int *)&((local_d8.Manager)->EntityAllocationMasks).field_0x8;
    pFVar12 = local_140.Manager;
    iVar13 = local_140.AllocationIndex;
    local_140.Manager = local_130.Manager;
    while (local_140.AllocationIndex = iVar16, local_130.Manager = local_140.Manager,
          local_130.AllocationIndex = local_140.AllocationIndex, local_140.AllocationIndex != iVar2)
    {
      pFVar17 = FEntityAllocationProxy::GetAllocation(&local_140);
      if (EVar14 == NoThreading) {
        pFVar17->LockMode = LockFree;
        pFVar25 = pFVar17;
      }
      else {
        pFVar25 = (FEntityAllocation *)0x0;
      }
      local_110 = pFVar25;
      pFVar18 = FEntityAllocationProxy::GetAllocation(&local_140);
      pFVar30 = pFVar18->ComponentHeaders;
      pFVar31 = pFVar30 + pFVar18->NumComponents;
      for (; pFVar30 != pFVar31; pFVar30 = pFVar30 + 1) {
        if ((pFVar30->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x8) {
          if (pFVar30 != (FComponentHeader *)0x0) goto LAB_14607dbad;
          goto LAB_14607db87;
        }
      }
      pFVar30 = (FComponentHeader *)0x0;
LAB_14607db87:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
LAB_14607dbad:
      EVar3 = pFVar18->LockMode;
      if (EVar3 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar30->ReadWriteLock);
      }
      LOCK();
      pFVar30->ScheduledAccessCount = (atomic<int>)((int)pFVar30->ScheduledAccessCount + 1);
      UNLOCK();
      local_f8 = pFVar30->Components;
      pFVar18 = FEntityAllocationProxy::GetAllocation(&local_140);
      pFVar31 = pFVar18->ComponentHeaders;
      pFVar28 = pFVar31 + pFVar18->NumComponents;
      for (; pFVar31 != pFVar28; pFVar31 = pFVar31 + 1) {
        if ((pFVar31->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x6) {
          if (pFVar31 != (FComponentHeader *)0x0) goto LAB_14607dc3d;
          goto LAB_14607dc17;
        }
      }
      pFVar31 = (FComponentHeader *)0x0;
LAB_14607dc17:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
LAB_14607dc3d:
      EVar4 = pFVar18->LockMode;
      if (EVar4 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar31->ReadWriteLock);
      }
      LOCK();
      pFVar31->ScheduledAccessCount = (atomic<int>)((int)pFVar31->ScheduledAccessCount + 1);
      UNLOCK();
      local_f0 = pFVar31->Components;
      pFVar18 = FEntityAllocationProxy::GetAllocation(&local_140);
      pFVar28 = pFVar18->ComponentHeaders;
      pFVar29 = pFVar28 + pFVar18->NumComponents;
      for (; pFVar28 != pFVar29; pFVar28 = pFVar28 + 1) {
        if ((pFVar28->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
          if (pFVar28 != (FComponentHeader *)0x0) goto LAB_14607dcce;
          goto LAB_14607dca8;
        }
      }
      pFVar28 = (FComponentHeader *)0x0;
LAB_14607dca8:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
LAB_14607dcce:
      EVar5 = pFVar18->LockMode;
      if (EVar5 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar28->ReadWriteLock);
      }
      LOCK();
      pFVar28->ScheduledAccessCount = (atomic<int>)((int)pFVar28->ScheduledAccessCount + 1);
      UNLOCK();
      local_148 = (ushort *)pFVar28->Components;
      pFVar18 = FEntityAllocationProxy::GetAllocation(&local_140);
      pFVar29 = pFVar18->ComponentHeaders;
      pFVar27 = pFVar29 + pFVar18->NumComponents;
      for (; pFVar29 != pFVar27; pFVar29 = pFVar29 + 1) {
        if ((pFVar29->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2) {
          if (pFVar29 != (FComponentHeader *)0x0) goto LAB_14607dd5d;
          goto LAB_14607dd37;
        }
      }
      pFVar29 = (FComponentHeader *)0x0;
LAB_14607dd37:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
LAB_14607dd5d:
      EVar6 = pFVar18->LockMode;
      if (EVar6 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar29->ReadWriteLock);
      }
      LOCK();
      pFVar29->ScheduledAccessCount = (atomic<int>)((int)pFVar29->ScheduledAccessCount + 1);
      UNLOCK();
      puVar24 = pFVar29->Components;
      local_118 = puVar24;
      FEntityAllocationProxy::GetAllocation(&local_140);
      uVar1 = pFVar17->Size;
      if ((ulonglong)uVar1 != 0) {
        lVar26 = 0;
        do {
          local_a8[0]._0_8_ = *(undefined8 *)puVar24;
          local_a8[0]._8_8_ = *(undefined8 *)(puVar24 + 8);
          this_00 = *(UObject **)(local_f8 + lVar26 * 8);
          lVar8 = *(longlong *)&param_3->InstanceRegistry->Instances;
          lVar23 = (ulonglong)*local_148 * 0x140;
          pTVar9 = *(TReferenceControllerBase<1> **)(lVar23 + 0x120 + lVar8);
          pFVar10 = *(FSharedPlaybackState **)(lVar23 + 0x118 + lVar8);
          FVar7.Value = *(uint *)(lVar23 + 0x128 + lVar8);
          if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
          }
          else {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar9);
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_108.Object = pFVar10;
          local_108.SharedReferenceCount.ReferenceController = pTVar9;
          pIVar19 = FPlayerIndexPlaybackCapability::GetPlayer(&local_108);
          if (((local_f0[lVar26] == '\0') && (this_00 != (UObject *)0x0)) &&
             (local_e8 = *(UClass **)&this_00->field_0x10, local_e8 != (UClass *)0x0)) {
            pUVar20 = Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_NoRegister();
            bVar15 = UClass::ImplementsInterface(local_e8,pUVar20);
            if (bVar15) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(this_00);
              }
              pUVar20 = Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_NoRegister();
              UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar20);
              if (pIVar19 != (IMovieScenePlayer *)0x0) {
                if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar9->SharedReferenceCount =
                       (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_c8.Object = pFVar10;
                local_c8.SharedReferenceCount.ReferenceController = pTVar9;
                pFVar21 = FRelativeObjectBindingID::FRelativeObjectBindingID
                                    (&local_58,(FMovieSceneSequenceID)0x0,FVar7,local_a8,&local_c8);
                local_88 = (pFVar21->SequenceID).Value;
                local_e8 = *(UClass **)&pFVar21->Guid;
                uStack_e0 = (pFVar21->Guid).C;
                uStack_dc = (pFVar21->Guid).D;
                iStack_84 = pFVar21->ResolveParentIndex;
                pUVar22 = (UMovieSceneSequencePlayer *)(**(code **)(pIVar19->_padding_ + 0x28))();
                if (pUVar22 == (UMovieSceneSequencePlayer *)0x0) {
LAB_14607df6f:
                  pUVar22 = (UMovieSceneSequencePlayer *)0x0;
                }
                else {
                  pUVar20 = Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister();
                  iVar13 = (int)pUVar20->_padding_;
                  if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar13) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
                      &pUVar20->_padding_)) goto LAB_14607df6f;
                }
                local_78[1]._4_4_ = uStack_dc;
                local_78[1]._0_4_ = uStack_e0;
                local_78[0] = local_e8;
                local_78[2]._4_4_ = iStack_84;
                local_78[2]._0_4_ = local_88;
                IMovieSceneBindingEventReceiverInterface::Execute_OnObjectBoundBySequencer
                          (this_00,pUVar22,(FMovieSceneObjectBindingID *)local_78);
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
          lVar26 = lVar26 + 1;
          local_148 = local_148 + 2;
          puVar24 = local_118 + 0x10;
          pFVar25 = local_110;
          local_118 = puVar24;
        } while (lVar26 < (longlong)(ulonglong)uVar1);
      }
      LOCK();
      pFVar30->ScheduledAccessCount = (atomic<int>)((int)pFVar30->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar30->ReadWriteLock);
      }
      LOCK();
      pFVar31->ScheduledAccessCount = (atomic<int>)((int)pFVar31->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar4 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar31->ReadWriteLock);
      }
      LOCK();
      pFVar28->ScheduledAccessCount = (atomic<int>)((int)pFVar28->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar5 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar28->ReadWriteLock);
      }
      LOCK();
      pFVar29->ScheduledAccessCount = (atomic<int>)((int)pFVar29->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar6 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar29->ReadWriteLock);
      }
      if (pFVar25 != (FEntityAllocation *)0x0) {
        pFVar25->LockMode = Mutex;
      }
      iVar16 = FEntityAllocationIterator::FindMatchingAllocationStartingAt
                         (&local_130,local_130.AllocationIndex + 1);
      pFVar12 = local_140.Manager;
      iVar13 = local_140.AllocationIndex;
      local_140.Manager = local_130.Manager;
      local_d8.Filter = local_130.Filter;
    }
    if (local_d8.Filter != (FEntityComponentFilter *)0x0) {
      local_140.Manager = pFVar12;
      local_140.AllocationIndex = iVar13;
      FEntityManager::ExitIteration(local_130.Manager);
    }
  }
  return;
}

// LowerBoundInternal<short_const_,int,short,FIdentityFunctor,TGreater<void>_> @ 14607e0a0

int __cdecl
AlgoImpl::LowerBoundInternal<short_const_,int,short,FIdentityFunctor,TGreater<void>_>
          (short *param_1,int param_2,short *param_3,FIdentityFunctor param_4,TGreater<void> param_5
          )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*param_3 < param_1[iVar1]) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>_const_,int,UE::MovieScene::FMovieSceneEntityID,TSortedMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_> @ 14607e0e0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>_const_,int,UE::MovieScene::FMovieSceneEntityID,TSortedMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
          (TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID> *param_1,
          int param_2,FMovieSceneEntityID *param_3,FKeyForward param_4,
          TLess<UE::MovieScene::FMovieSceneEntityID_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ushort *)(param_1 + iVar1) < param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FMovieSceneSequenceID,FGuid>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_> @ 14607e130

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FMovieSceneSequenceID,FGuid>_const_,int,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
          (TTuple<FMovieSceneSequenceID,FGuid> *param_1,int param_2,FMovieSceneSequenceID *param_3,
          FKeyForward param_4,TLess<FMovieSceneSequenceID_const_&> param_5)

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

// LowerBoundInternal<FFrameNumber_const_,int,FFrameNumber,FIdentityFunctor,TLess<void>_> @ 14607e180

int __cdecl
AlgoImpl::LowerBoundInternal<FFrameNumber_const_,int,FFrameNumber,FIdentityFunctor,TLess<void>_>
          (FFrameNumber *param_1,int param_2,FFrameNumber *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Value < param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<FMovieSceneChannelEntry_const_,int,FName,FName_(__cdecl_FMovieSceneChannelEntry::*)(void)const_,FNameLexicalLess> @ 14607e1d0

int __cdecl
AlgoImpl::
LowerBoundInternal<FMovieSceneChannelEntry_const_,int,FName,FName_(__cdecl_FMovieSceneChannelEntry::*)(void)const_,FNameLexicalLess>
          (FMovieSceneChannelEntry *param_1,int param_2,FName *param_3,pmf_52531e30 param_4,
          FNameLexicalLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FName local_28 [2];
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      (*(code *)param_4)(param_1 + iVar1,local_28);
      iVar3 = ::FName::Compare(local_28,param_3);
      if (iVar3 < 0) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<FMovieSceneChannelEntry_const_,int,FName,FName_FMovieSceneChannelEntry::*,FNameLexicalLess> @ 14607e260

int __cdecl
AlgoImpl::
LowerBoundInternal<FMovieSceneChannelEntry_const_,int,FName,FName_FMovieSceneChannelEntry::*,FNameLexicalLess>
          (FMovieSceneChannelEntry *param_1,int param_2,FName *param_3,pdm_a8d22ab7 param_4,
          FNameLexicalLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = ::FName::Compare((FName *)((longlong)
                                         &param_1[iVar1].ChannelTypeName.ComparisonIndex.Value +
                                        (longlong)(int)param_4),param_3);
      if (iVar3 < 0) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<short,int,short,FIdentityFunctor,TGreater<void>_> @ 14607e2f0

int __cdecl
AlgoImpl::LowerBoundInternal<short,int,short,FIdentityFunctor,TGreater<void>_>
          (short *param_1,int param_2,short *param_3,FIdentityFunctor param_4,TGreater<void> param_5
          )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*param_3 < param_1[iVar1]) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<FFrameNumber,int,FFrameNumber,FIdentityFunctor,TLess<void>_> @ 14607e330

int __cdecl
AlgoImpl::LowerBoundInternal<FFrameNumber,int,FFrameNumber,FIdentityFunctor,TLess<void>_>
          (FFrameNumber *param_1,int param_2,FFrameNumber *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Value < param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MoveKey<`TMovieSceneChannelData<unsigned_char>::MoveKey'::__l2::<lambda_1>_> @ 1460811f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TMovieSceneChannelData<unsigned_char>::
MoveKey<_TMovieSceneChannelData<unsigned_char>::MoveKey_::__l2::<lambda_1>_>
          (TMovieSceneChannelData<unsigned_char> *this,int param_1,FFrameNumber param_2,bool param_3
          ,<lambda_1> *param_4)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FKeyHandle FVar6;
  int iVar7;
  undefined4 extraout_var;
  FKeyHandle *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  byte local_res20;
  FScriptContainerElement local_a8;
  undefined1 local_a7 [3];
  FKeyHandle local_a4;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_a0;
  TRange<FFrameNumber> local_90;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_80;
  undefined1 local_70 [4];
  FKeyHandle local_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FKeyHandle_const_,int> local_58;
  ulonglong uVar14;
  
  uVar11 = 0;
  local_res18 = param_2.Value;
  if (!param_3) goto LAB_1460814be;
  if (((param_1 < 0) || (*(int *)(this->_padding_ + 8) <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times->IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                         ,0x69,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  if (this->_padding_ == 0) {
    local_res10[0] = 0;
    `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_res10);
  }
  if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
    pFVar8 = FKeyHandle::FKeyHandle(&local_6c);
  }
  else {
    FVar6 = FKeyHandleLookupTable::FindOrAddKeyHandle
                      ((FKeyHandleLookupTable *)this->_padding_,(int)local_70);
    pFVar8 = (FKeyHandle *)CONCAT44(extraout_var,FVar6.Index);
  }
  local_a4.Index = pFVar8->Index;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_90.LowerBound.Type.Value = '\x01';
  local_90.UpperBound.Type.Value = '\0';
  local_90.LowerBound.Value.Value = param_2.Value;
  local_90.UpperBound.Value.Value = param_2.Value;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_90,&local_80,&local_a0);
  if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a4) &&
      ((FScriptContainerElement *)&local_a4 <
       local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  FVar3.Data = local_a0.AllocatorInstance.Data;
  lVar9 = (longlong)local_a0.ArrayNum;
  if (local_a0.ArrayNum != 0) {
    local_res20 = *(uint *)local_a0.AllocatorInstance.Data != local_a4.Index;
    uVar14 = uVar11;
    uVar16 = uVar11;
    do {
      uVar12 = (uint)uVar14;
      uVar13 = uVar12;
      do {
        uVar11 = uVar11 + 1;
        uVar13 = uVar13 + 1;
        uVar14 = (ulonglong)uVar13;
        if (lVar9 <= (longlong)uVar11) break;
      } while ((bool)local_res20 == (*(uint *)(FVar3.Data + uVar11 * 4) != local_a4.Index));
      if (local_res20 != 0) {
        uVar15 = (uint)uVar16;
        if (uVar15 != uVar12) {
          memmove(FVar3.Data + (longlong)(int)uVar15 * 4,FVar3.Data + (longlong)(int)uVar12 * 4,
                  (longlong)(int)(uVar13 - uVar12) << 2);
        }
        uVar16 = (ulonglong)(uVar15 + (uVar13 - uVar12));
      }
      param_2.Value = local_res18;
      local_res20 = local_res20 ^ 1;
    } while ((longlong)uVar11 < lVar9);
    iVar5 = (int)uVar16;
    local_a0.ArrayNum = iVar5;
    if (iVar5 < 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,-iVar5,&local_a0.AllocatorInstance,&local_a0.ArrayNum,
                         &local_a0.ArrayMax);
      DefaultConstructItems<FKeyHandle,int>
                (local_a0.AllocatorInstance.Data + (longlong)iVar7 * 4,-iVar5);
LAB_14608143d:
      iVar5 = local_a0.ArrayNum;
    }
    else if (0 < iVar5) {
      local_a0._8_8_ = (ulonglong)(uint)local_a0.ArrayMax << 0x20;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_a0.AllocatorInstance,0,&local_a0.ArrayMax);
      goto LAB_14608143d;
    }
    if (0 < iVar5) {
      local_68 = local_a0.AllocatorInstance.Data;
      local_58._12_4_ = uStack_5c;
      local_58.ArrayNum = iVar5;
      local_58.DataPtr = (FKeyHandle *)local_a0.AllocatorInstance.Data;
      iStack_60 = iVar5;
      DeleteKeys(this,&local_58);
    }
  }
  FVar6.Index = local_a4.Index;
  if (this->_padding_ == 0) {
    local_a7[0] = 0;
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_a7);
  }
  if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
    param_1 = 0xffffffff;
  }
  else {
    param_1 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar6);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
LAB_1460814be:
  if (param_1 == 0xffffffff) {
    return -1;
  }
  uVar13 = FMovieSceneChannelData::MoveKeyInternal((FMovieSceneChannelData *)this,param_1,param_2);
  if (uVar13 != param_1) {
    pTVar1 = this->Values;
    uVar12 = 0;
    if (param_1 < pTVar1->ArrayNum) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    local_a8 = (pTVar1->AllocatorInstance).Data[param_1];
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,param_1,No);
    pTVar1 = this->Values;
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar10 <= &local_a8) && (&local_a8 < pFVar10 + pTVar1->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar5 = pTVar1->ArrayNum;
    if (iVar5 == pTVar1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pFVar10 = (pTVar1->AllocatorInstance).Data + (int)uVar13;
    pTVar1->ArrayNum = iVar5 + 1;
    memmove(pFVar10 + 1,pFVar10,(longlong)(int)(iVar5 - uVar13));
    (pTVar1->AllocatorInstance).Data[(int)uVar13] = local_a8;
  }
  return uVar13;
}

// MoveKey<`TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::MoveKey'::__l2::<lambda_1>_> @ 146081620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::
MoveKey<_TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::MoveKey_::__l2::<lambda_1>_>
          (TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *this,int param_1,
          FFrameNumber param_2,bool param_3,<lambda_1> *param_4)

{
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FKeyHandle FVar6;
  int iVar7;
  undefined4 extraout_var;
  FKeyHandle *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  byte local_res20;
  undefined1 local_d8 [4];
  FKeyHandle local_d4;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_d0;
  TRange<FFrameNumber> local_c0;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_b0;
  undefined1 local_a0 [4];
  FKeyHandle local_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<FKeyHandle_const_,int> local_88;
  undefined1 local_78 [24];
  void *local_60;
  TObjectPtr<UObject>_u_0 local_50;
  ulonglong uVar14;
  
  uVar10 = 0;
  local_res18 = param_2.Value;
  if (!param_3) goto LAB_1460818f0;
  if (((param_1 < 0) || (*(int *)(this->_padding_ + 8) <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times->IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                         ,0x69,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  if (this->_padding_ == 0) {
    local_res10[0] = 0;
    `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_res10);
  }
  if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
    pFVar8 = FKeyHandle::FKeyHandle(&local_9c);
  }
  else {
    FVar6 = FKeyHandleLookupTable::FindOrAddKeyHandle
                      ((FKeyHandleLookupTable *)this->_padding_,(int)local_a0);
    pFVar8 = (FKeyHandle *)CONCAT44(extraout_var,FVar6.Index);
  }
  local_d4.Index = pFVar8->Index;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c0.LowerBound.Type.Value = '\x01';
  local_c0.UpperBound.Type.Value = '\0';
  local_c0.LowerBound.Value.Value = param_2.Value;
  local_c0.UpperBound.Value.Value = param_2.Value;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_c0,&local_b0,&local_d0);
  if (((local_d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d4) &&
      ((FScriptContainerElement *)&local_d4 <
       local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  FVar3.Data = local_d0.AllocatorInstance.Data;
  lVar9 = (longlong)local_d0.ArrayNum;
  if (local_d0.ArrayNum != 0) {
    local_res20 = *(uint *)local_d0.AllocatorInstance.Data != local_d4.Index;
    uVar14 = uVar10;
    uVar16 = uVar10;
    do {
      uVar12 = (uint)uVar14;
      uVar13 = uVar12;
      do {
        uVar10 = uVar10 + 1;
        uVar13 = uVar13 + 1;
        uVar14 = (ulonglong)uVar13;
        if (lVar9 <= (longlong)uVar10) break;
      } while ((bool)local_res20 == (*(uint *)(FVar3.Data + uVar10 * 4) != local_d4.Index));
      if (local_res20 != 0) {
        uVar15 = (uint)uVar16;
        if (uVar15 != uVar12) {
          memmove(FVar3.Data + (longlong)(int)uVar15 * 4,FVar3.Data + (longlong)(int)uVar12 * 4,
                  (longlong)(int)(uVar13 - uVar12) << 2);
        }
        uVar16 = (ulonglong)(uVar15 + (uVar13 - uVar12));
      }
      param_2.Value = local_res18;
      local_res20 = local_res20 ^ 1;
    } while ((longlong)uVar10 < lVar9);
    iVar5 = (int)uVar16;
    local_d0.ArrayNum = iVar5;
    if (iVar5 < 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,-iVar5,&local_d0.AllocatorInstance,&local_d0.ArrayNum,
                         &local_d0.ArrayMax);
      DefaultConstructItems<FKeyHandle,int>
                (local_d0.AllocatorInstance.Data + (longlong)iVar7 * 4,-iVar5);
LAB_14608186d:
      iVar5 = local_d0.ArrayNum;
    }
    else if (0 < iVar5) {
      local_d0._8_8_ = (ulonglong)(uint)local_d0.ArrayMax << 0x20;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_d0.AllocatorInstance,0,&local_d0.ArrayMax);
      goto LAB_14608186d;
    }
    if (0 < iVar5) {
      local_98 = local_d0.AllocatorInstance.Data;
      local_88._12_4_ = uStack_8c;
      local_88.ArrayNum = iVar5;
      local_88.DataPtr = (FKeyHandle *)local_d0.AllocatorInstance.Data;
      iStack_90 = iVar5;
      DeleteKeys(this,&local_88);
    }
  }
  FVar6.Index = local_d4.Index;
  if (this->_padding_ == 0) {
    local_d8[0] = 0;
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_d8);
  }
  if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
    param_1 = 0xffffffff;
  }
  else {
    param_1 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar6);
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
LAB_1460818f0:
  if (param_1 == 0xffffffff) {
    return -1;
  }
  uVar13 = FMovieSceneChannelData::MoveKeyInternal((FMovieSceneChannelData *)this,param_1,param_2);
  if (uVar13 != param_1) {
    pTVar1 = this->Values;
    uVar12 = 0;
    if (param_1 < pTVar1->ArrayNum) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0x30;
    local_78._0_8_ = *(undefined8 *)pFVar11;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_78 + 8),(FSoftObjectPath *)(pFVar11 + 8));
    local_50 = (TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)(pFVar11 + 0x28))->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_50.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_50.DebugPtr);
    }
    TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_>::RemoveAt
              (this->Values,param_1,No);
    TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_>::Insert
              (this->Values,(FMovieSceneObjectPathChannelKeyValue *)local_78,uVar13);
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  return uVar13;
}

// MoveKey<`TMovieSceneChannelData<bool>::MoveKey'::__l2::<lambda_1>_> @ 1460819f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TMovieSceneChannelData<bool>::MoveKey<_TMovieSceneChannelData<bool>::MoveKey_::__l2::<lambda_1>_>
          (TMovieSceneChannelData<bool> *this,int param_1,FFrameNumber param_2,bool param_3,
          <lambda_1> *param_4)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FKeyHandle FVar6;
  int iVar7;
  undefined4 extraout_var;
  FKeyHandle *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  byte local_res20;
  FScriptContainerElement local_a8;
  undefined1 local_a7 [3];
  FKeyHandle local_a4;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_a0;
  TRange<FFrameNumber> local_90;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_80;
  undefined1 local_70 [4];
  FKeyHandle local_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FKeyHandle_const_,int> local_58;
  ulonglong uVar14;
  
  uVar11 = 0;
  local_res18 = param_2.Value;
  if (!param_3) goto LAB_146081cbe;
  if (((param_1 < 0) || (*(int *)(this->_padding_ + 8) <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times->IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                         ,0x69,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  if (this->_padding_ == 0) {
    local_res10[0] = 0;
    `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_res10);
  }
  if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
    pFVar8 = FKeyHandle::FKeyHandle(&local_6c);
  }
  else {
    FVar6 = FKeyHandleLookupTable::FindOrAddKeyHandle
                      ((FKeyHandleLookupTable *)this->_padding_,(int)local_70);
    pFVar8 = (FKeyHandle *)CONCAT44(extraout_var,FVar6.Index);
  }
  local_a4.Index = pFVar8->Index;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_90.LowerBound.Type.Value = '\x01';
  local_90.UpperBound.Type.Value = '\0';
  local_90.LowerBound.Value.Value = param_2.Value;
  local_90.UpperBound.Value.Value = param_2.Value;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_90,&local_80,&local_a0);
  if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a4) &&
      ((FScriptContainerElement *)&local_a4 <
       local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  FVar3.Data = local_a0.AllocatorInstance.Data;
  lVar9 = (longlong)local_a0.ArrayNum;
  if (local_a0.ArrayNum != 0) {
    local_res20 = *(uint *)local_a0.AllocatorInstance.Data != local_a4.Index;
    uVar14 = uVar11;
    uVar16 = uVar11;
    do {
      uVar12 = (uint)uVar14;
      uVar13 = uVar12;
      do {
        uVar11 = uVar11 + 1;
        uVar13 = uVar13 + 1;
        uVar14 = (ulonglong)uVar13;
        if (lVar9 <= (longlong)uVar11) break;
      } while ((bool)local_res20 == (*(uint *)(FVar3.Data + uVar11 * 4) != local_a4.Index));
      if (local_res20 != 0) {
        uVar15 = (uint)uVar16;
        if (uVar15 != uVar12) {
          memmove(FVar3.Data + (longlong)(int)uVar15 * 4,FVar3.Data + (longlong)(int)uVar12 * 4,
                  (longlong)(int)(uVar13 - uVar12) << 2);
        }
        uVar16 = (ulonglong)(uVar15 + (uVar13 - uVar12));
      }
      param_2.Value = local_res18;
      local_res20 = local_res20 ^ 1;
    } while ((longlong)uVar11 < lVar9);
    iVar5 = (int)uVar16;
    local_a0.ArrayNum = iVar5;
    if (iVar5 < 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,-iVar5,&local_a0.AllocatorInstance,&local_a0.ArrayNum,
                         &local_a0.ArrayMax);
      DefaultConstructItems<FKeyHandle,int>
                (local_a0.AllocatorInstance.Data + (longlong)iVar7 * 4,-iVar5);
LAB_146081c3d:
      iVar5 = local_a0.ArrayNum;
    }
    else if (0 < iVar5) {
      local_a0._8_8_ = (ulonglong)(uint)local_a0.ArrayMax << 0x20;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&local_a0.AllocatorInstance,0,&local_a0.ArrayMax);
      goto LAB_146081c3d;
    }
    if (0 < iVar5) {
      local_68 = local_a0.AllocatorInstance.Data;
      local_58._12_4_ = uStack_5c;
      local_58.ArrayNum = iVar5;
      local_58.DataPtr = (FKeyHandle *)local_a0.AllocatorInstance.Data;
      iStack_60 = iVar5;
      DeleteKeys(this,&local_58);
    }
  }
  FVar6.Index = local_a4.Index;
  if (this->_padding_ == 0) {
    local_a7[0] = 0;
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_a7);
  }
  if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
    param_1 = 0xffffffff;
  }
  else {
    param_1 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar6);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
LAB_146081cbe:
  if (param_1 == 0xffffffff) {
    return -1;
  }
  uVar13 = FMovieSceneChannelData::MoveKeyInternal((FMovieSceneChannelData *)this,param_1,param_2);
  if (uVar13 != param_1) {
    pTVar1 = this->Values;
    uVar12 = 0;
    if (param_1 < pTVar1->ArrayNum) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    local_a8 = (pTVar1->AllocatorInstance).Data[param_1];
    TArray<bool,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,param_1,No);
    pTVar1 = this->Values;
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar10 <= &local_a8) && (&local_a8 < pFVar10 + pTVar1->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar5 = pTVar1->ArrayNum;
    if (iVar5 == pTVar1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pFVar10 = (pTVar1->AllocatorInstance).Data + (int)uVar13;
    pTVar1->ArrayNum = iVar5 + 1;
    memmove(pFVar10 + 1,pFVar10,(longlong)(int)(iVar5 - uVar13));
    (pTVar1->AllocatorInstance).Data[(int)uVar13] = local_a8;
  }
  return uVar13;
}

// NewObject<UMovieSceneCompiledDataManager> @ 1460882e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCompiledDataManager * __cdecl
NewObject<UMovieSceneCompiledDataManager>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneCompiledDataManager *pUVar2;
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
  pUVar1 = UMovieSceneCompiledDataManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneCompiledDataManager *)
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

// NewObject<UMovieScenePlayRateCurve> @ 1460883d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScenePlayRateCurve * __cdecl NewObject<UMovieScenePlayRateCurve>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieScenePlayRateCurve *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieScenePlayRateCurve_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieScenePlayRateCurve *)
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

// RemoveAll<`TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 14608b700

int __thiscall
TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  
  iVar1 = this->ArrayNum;
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar13 = 0;
  if (*(longlong *)pFVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(pFVar2 + 8);
  }
  lVar3 = *(longlong *)param_1->Item;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)&param_1->Item->field_0x8;
  }
  if ((lVar8 == lVar5) && (*(longlong *)pFVar2 == lVar3)) {
    bVar12 = 0;
  }
  else {
    bVar12 = 1;
  }
  lVar8 = 0;
  iVar9 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar10 = iVar9 + 1;
    if (lVar8 < lVar11) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      lVar3 = *(longlong *)param_1->Item;
      do {
        if (*(longlong *)pFVar7 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(pFVar7 + 8);
        }
        if (lVar3 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)&param_1->Item->field_0x8;
        }
        if ((lVar5 == lVar6) && (*(longlong *)pFVar7 == lVar3)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar12 != bVar4) break;
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar11);
    }
    if (bVar12 != 0) {
      if (iVar13 != iVar9) {
        memmove(pFVar2 + (longlong)iVar13 * 0x10,pFVar2 + (longlong)iVar9 * 0x10,
                (longlong)(iVar10 - iVar9) << 4);
      }
      iVar13 = iVar13 + (iVar10 - iVar9);
    }
    bVar12 = bVar12 ^ 1;
    iVar9 = iVar10;
    if (lVar11 <= lVar8) {
      this->ArrayNum = iVar13;
      return iVar1 - iVar13;
    }
  } while( true );
}

// RemoveAll<`TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 14608b880

int __thiscall
TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  
  iVar1 = this->ArrayNum;
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar13 = 0;
  if (*(longlong *)pFVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(pFVar2 + 8);
  }
  lVar3 = *(longlong *)param_1->Item;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)&param_1->Item->field_0x8;
  }
  if ((lVar8 == lVar5) && (*(longlong *)pFVar2 == lVar3)) {
    bVar12 = 0;
  }
  else {
    bVar12 = 1;
  }
  lVar8 = 0;
  iVar9 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar10 = iVar9 + 1;
    if (lVar8 < lVar11) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      lVar3 = *(longlong *)param_1->Item;
      do {
        if (*(longlong *)pFVar7 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(pFVar7 + 8);
        }
        if (lVar3 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)&param_1->Item->field_0x8;
        }
        if ((lVar5 == lVar6) && (*(longlong *)pFVar7 == lVar3)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar12 != bVar4) break;
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar11);
    }
    if (bVar12 != 0) {
      if (iVar13 != iVar9) {
        memmove(pFVar2 + (longlong)iVar13 * 0x10,pFVar2 + (longlong)iVar9 * 0x10,
                (longlong)(iVar10 - iVar9) << 4);
      }
      iVar13 = iVar13 + (iVar10 - iVar9);
    }
    bVar12 = bVar12 ^ 1;
    iVar9 = iVar10;
    if (lVar11 <= lVar8) {
      this->ArrayNum = iVar13;
      return iVar1 - iVar13;
    }
  } while( true );
}

// RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,`TMovieSceneChannelData<unsigned_char>::MoveKey'::__l2::<lambda_1>_> @ 14608ba00

int __cdecl
Algo::
RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,_TMovieSceneChannelData<unsigned_char>::MoveKey_::__l2::<lambda_1>_>
          (TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  return 0;
}

// RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,`TMovieSceneChannelData<int>::MoveKey'::__l2::<lambda_1>_> @ 14608ba10

int __cdecl
Algo::
RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,_TMovieSceneChannelData<int>::MoveKey_::__l2::<lambda_1>_>
          (TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  return 0;
}

// RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,`TMovieSceneChannelData<FMovieSceneDoubleValue>::MoveKey'::__l2::<lambda_1>_> @ 14608ba20

int __cdecl
Algo::
RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,_TMovieSceneChannelData<FMovieSceneDoubleValue>::MoveKey_::__l2::<lambda_1>_>
          (TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  return 0;
}

// RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,`TMovieSceneChannelData<FMovieSceneFloatValue>::MoveKey'::__l2::<lambda_1>_> @ 14608ba30

int __cdecl
Algo::
RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,_TMovieSceneChannelData<FMovieSceneFloatValue>::MoveKey_::__l2::<lambda_1>_>
          (TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  return 0;
}

// RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,`TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::MoveKey'::__l2::<lambda_1>_> @ 14608ba40

int __cdecl
Algo::
RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,_TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::MoveKey_::__l2::<lambda_1>_>
          (TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  return 0;
}

// RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,`TMovieSceneChannelData<bool>::MoveKey'::__l2::<lambda_1>_> @ 14608ba50

int __cdecl
Algo::
RemoveIf<TArray<FKeyHandle,TSizedDefaultAllocator<32>_>,_TMovieSceneChannelData<bool>::MoveKey_::__l2::<lambda_1>_>
          (TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  return 0;
}

// Reverse<FNavigationToolSerializedTreeNode_const_*> @ 14608c5c0

void __cdecl
AlgoImpl::Reverse<FNavigationToolSerializedTreeNode_const_*>
          (FNavigationToolSerializedTreeNode **param_1,int param_2)

{
  FNavigationToolSerializedTreeNode *pFVar1;
  FNavigationToolSerializedTreeNode **ppFVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppFVar2 = param_1 + (param_2 + -1);
    do {
      pFVar1 = param_1[lVar3];
      param_1[lVar3] = *ppFVar2;
      lVar3 = lVar3 + 1;
      *ppFVar2 = pFVar1;
      ppFVar2 = ppFVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// StaticEnum<enum_EMovieSceneConditionCheckFrequency> @ 14608ccb0

UEnum * __cdecl StaticEnum<enum_EMovieSceneConditionCheckFrequency>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency,
                       (UObject *)pUVar1,L"EMovieSceneConditionCheckFrequency");
  }
  return Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.OuterSingleton;
}

// StaticEnum<enum_EMovieSceneConditionScope> @ 14608ccf0

UEnum * __cdecl StaticEnum<enum_EMovieSceneConditionScope>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneConditionScope.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneConditionScope.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope,(UObject *)pUVar1,
                       L"EMovieSceneConditionScope");
  }
  return Z_Registration_Info_UEnum_EMovieSceneConditionScope.OuterSingleton;
}

// StaticEnum<enum_EMovieSceneGroupConditionOperator> @ 14608cd30

UEnum * __cdecl StaticEnum<enum_EMovieSceneGroupConditionOperator>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator,
                       (UObject *)pUVar1,L"EMovieSceneGroupConditionOperator");
  }
  return Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.OuterSingleton;
}

// StaticEnum<enum_EMovieSceneSequenceCompilerMask> @ 14608cd70

UEnum * __cdecl StaticEnum<enum_EMovieSceneSequenceCompilerMask>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieSceneSequenceCompilerMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_EMovieSceneSequenceCompilerMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneSequenceCompilerMask,
                       (UObject *)pUVar1,L"EMovieSceneSequenceCompilerMask");
  }
  return Z_Registration_Info_UEnum_EMovieSceneSequenceCompilerMask.OuterSingleton;
}

// StaticEnum<enum_ENavigationToolItemFlags> @ 14608cdb0

UEnum * __cdecl StaticEnum<enum_ENavigationToolItemFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENavigationToolItemFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UEnum_ENavigationToolItemFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieScene_ENavigationToolItemFlags,(UObject *)pUVar1,
                       L"ENavigationToolItemFlags");
  }
  return Z_Registration_Info_UEnum_ENavigationToolItemFlags.OuterSingleton;
}

// Unique<TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_&> @ 14608cdf0

int __cdecl
Algo::Unique<TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_&>
          (TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 2) {
    return iVar1;
  }
  pFVar5 = pFVar2;
  pFVar4 = pFVar2;
  while (pFVar4 = pFVar4 + 8, pFVar4 != pFVar2 + (longlong)iVar1 * 8) {
    uVar3 = *(undefined8 *)pFVar4;
    if ((((int)*(undefined8 *)pFVar5 != (int)uVar3) ||
        ((((byte)((ulonglong)*(undefined8 *)pFVar5 >> 0x20) ^ (byte)((ulonglong)uVar3 >> 0x20)) & 1)
         != 0)) && (pFVar5 = pFVar5 + 8, pFVar5 != pFVar4)) {
      *(undefined8 *)pFVar5 = uVar3;
    }
  }
  return (int)((longlong)(pFVar5 + (8 - (longlong)pFVar2)) >> 3);
}

// Unique<FMovieSceneDeterminismFence,int,FIdentityFunctor,TEqualTo<void>_> @ 14608ce60

int __cdecl
AlgoImpl::Unique<FMovieSceneDeterminismFence,int,FIdentityFunctor,TEqualTo<void>_>
          (FMovieSceneDeterminismFence *param_1,int param_2,FIdentityFunctor param_3,
          TEqualTo<void> param_4)

{
  FMovieSceneDeterminismFence FVar1;
  FMovieSceneDeterminismFence *pFVar2;
  FMovieSceneDeterminismFence *pFVar3;
  
  if (param_2 < 2) {
    return param_2;
  }
  pFVar3 = param_1;
  pFVar2 = param_1;
  while (pFVar2 = pFVar2 + 1, pFVar2 != param_1 + param_2) {
    FVar1 = *pFVar2;
    if ((((*pFVar3).FrameNumber.Value != FVar1.FrameNumber.Value.Value) ||
        (((pFVar2->bInclusive ^ pFVar3->bInclusive) & 1) != 0)) &&
       (pFVar3 = pFVar3 + 1, pFVar3 != pFVar2)) {
      *pFVar3 = FVar1;
    }
  }
  return (int)((longlong)pFVar3 + (8 - (longlong)param_1) >> 3);
}

// UpperBoundInternal<FFrameNumber_const_,int,FFrameNumber,FIdentityFunctor,TLess<void>_> @ 14608ced0

int __cdecl
AlgoImpl::UpperBoundInternal<FFrameNumber_const_,int,FFrameNumber,FIdentityFunctor,TLess<void>_>
          (FFrameNumber *param_1,int param_2,FFrameNumber *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Value <= param_3->Value) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<FFrameNumber_const_,int,FFrameTime,FIdentityFunctor,TLess<void>_> @ 14608cf10

int __cdecl
AlgoImpl::UpperBoundInternal<FFrameNumber_const_,int,FFrameTime,FIdentityFunctor,TLess<void>_>
          (FFrameNumber *param_1,int param_2,FFrameTime *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  FFrameNumber FVar4;
  int iVar5;
  float fStack_c;
  
  iVar5 = 0;
  if (0 < param_2) {
    fStack_c = (*param_3).SubFrame;
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      FVar4 = (*param_3).FrameNumber;
      if ((FVar4.Value < param_1[iVar1].Value) ||
         ((FVar4.Value == param_1[iVar1].Value && (fStack_c < 0.0)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// __builtin_array_init_helper<TTuple<double,double>_> @ 14608d520

void __cdecl
__builtin_array_init_helper<TTuple<double,double>_>(TTuple<double,double> *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)&param_1->field_0x8 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

// signNoZero<double> @ 14608d550

int __cdecl signNoZero<double>(double param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0.0 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}

// operator* @ 14609b480

FFrameTime __cdecl operator*(double param_1,FFrameRate param_2)

{
  FFrameTime in_RCX;
  int iVar1;
  undefined8 in_R8;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  double dVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  float fVar6;
  
  dVar4 = ((double)(int)in_R8 * (double)CONCAT44(in_XMM1_Db,in_XMM1_Da)) /
          (double)(int)((ulonglong)in_R8 >> 0x20);
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

// operator* @ 14609b510

FFrameTime __cdecl operator*(FFrameTime param_1,FMovieSceneTimeTransform *param_2)

{
  undefined8 uVar1;
  undefined4 in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *in_R8;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fStackX_1c;
  float fStackX_24;
  
  fStackX_24 = (float)((ulonglong)param_2 >> 0x20);
  if (*in_R8 == __real_3f800000) {
    fStackX_1c = (float)((ulonglong)*(undefined8 *)(in_R8 + 1) >> 0x20);
    fStackX_1c = fStackX_1c + fStackX_24;
    iVar3 = (int)fStackX_1c;
    fVar7 = fStackX_1c;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fStackX_1c)) {
      auVar10._4_4_ = fStackX_1c;
      auVar10._0_4_ = fStackX_1c;
      auVar10._8_8_ = 0;
      uVar2 = movmskps(in_EAX,auVar10);
      fVar7 = (float)(int)(iVar3 - (uVar2 & 1));
    }
    fVar14 = fStackX_1c - fVar7;
    if (FFrameTime::MaxSubframe <= fStackX_1c - fVar7) {
      fVar14 = FFrameTime::MaxSubframe;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    *(int *)param_1 =
         ((int)ROUND((fStackX_1c + fStackX_1c) - __real_3f000000) >> 1) + (int)param_2 +
         (int)*(undefined8 *)(in_R8 + 1);
    *(float *)((longlong)param_1 + 4) = fVar14;
    return param_1;
  }
  iVar3 = _finite((double)*in_R8);
  fVar7 = FFrameTime::MaxSubframe;
  uVar1 = *(undefined8 *)(in_R8 + 1);
  if (iVar3 == 0) {
    *(undefined8 *)param_1 = uVar1;
    return param_1;
  }
  dVar9 = ((double)(int)param_2 + (double)fStackX_24) * (double)*in_R8;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar9;
  auVar13 = roundpd(in_XMM3,auVar13,1);
  dVar11 = auVar13._0_8_;
  dVar12 = dVar11;
  if (__real_41dfffffffc00000 <= dVar11) {
    dVar12 = __real_41dfffffffc00000;
  }
  fVar14 = (float)(dVar9 - dVar11);
  if (dVar12 <= __real_c1e0000000000000) {
    dVar12 = __real_c1e0000000000000;
  }
  if (FFrameTime::MaxSubframe <= fVar14) {
    fVar14 = FFrameTime::MaxSubframe;
  }
  fVar8 = 0.0;
  if (fVar14 <= 0.0) {
    fVar14 = fVar8;
  }
  if (FFrameTime::MaxSubframe <= fVar14) {
    fVar14 = FFrameTime::MaxSubframe;
  }
  if (fVar14 <= 0.0) {
    fVar14 = fVar8;
  }
  fStackX_1c = (float)((ulonglong)uVar1 >> 0x20);
  fVar14 = fVar14 + fStackX_1c;
  iVar3 = ((int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1) + (int)uVar1;
  *(int *)param_1 = (int)dVar12 + iVar3;
  iVar4 = (int)fVar14;
  fVar5 = fVar14;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar14)) {
    auVar6._4_4_ = fVar14;
    auVar6._0_4_ = fVar14;
    auVar6._8_8_ = 0;
    uVar2 = movmskps(iVar3,auVar6);
    fVar5 = (float)(int)(iVar4 - (uVar2 & 1));
  }
  fVar15 = fVar14 - fVar5;
  if (fVar7 <= fVar14 - fVar5) {
    fVar15 = fVar7;
  }
  if (fVar15 <= 0.0) {
    fVar15 = fVar8;
  }
  *(float *)((longlong)param_1 + 4) = fVar15;
  return param_1;
}

// `vcall'{40,{flat}}'_}' @ 14609da14

/* [thunk]: __cdecl IMovieSceneTimeWarpSource::`vcall'{40,{flat}}' }' */

void __thiscall IMovieSceneTimeWarpSource::_vcall__40__flat______(IMovieSceneTimeWarpSource *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014609da17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x28))();
  return;
}

// `vector_deleting_destructor' @ 14609da20

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<unsigned_char>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<unsigned_char> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<unsigned_char> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609dac0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<short>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<short> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<short> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609db60

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<unsigned_short>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<unsigned_short> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<unsigned_short> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609dc00

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<int>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<int> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<int> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609dca0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<double>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<double> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<double> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609dd40

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UObject_*_(__cdecl*)(UObject_*)>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UObject_*_(__cdecl*)(UObject_*)> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UObject_*_(__cdecl*)(UObject_*)> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609dde0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UObject_*>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UObject_*> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UObject_*> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609de80

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<TObjectPtr<UMovieSceneCondition_const_>_>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<TObjectPtr<UMovieSceneCondition_const_>_> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<TObjectPtr<UMovieSceneCondition_const_>_> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609df20

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::Interpolation::FCachedInterpolation>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::Interpolation::FCachedInterpolation> *this,
          uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::Interpolation::FCachedInterpolation> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609dfc0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FCustomPropertyIndex>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FCustomPropertyIndex> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FCustomPropertyIndex> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e060

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FEasingComponentData>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FEasingComponentData> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FEasingComponentData> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e100

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FEntityGroupID>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FEntityGroupID> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FEntityGroupID> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e1a0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FEvaluationHookFlags>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FEvaluationHookFlags> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FEvaluationHookFlags> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e240

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FFrameTime>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FFrameTime> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FFrameTime> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e2e0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FGuid>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FGuid> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FGuid> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e380

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FHierarchicalBlendTarget>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FHierarchicalBlendTarget> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FHierarchicalBlendTarget> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e420

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FInitialValueIndex>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FInitialValueIndex> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FInitialValueIndex> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e4c0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FInstanceHandle>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FInstanceHandle> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FInstanceHandle> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e560

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FInterrogationInstance>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FInterrogationInstance> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FInterrogationInstance> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e600

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FInterrogationKey>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FInterrogationKey> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FInterrogationKey> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e6a0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
           *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e740

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FMovieSceneBlendChannelID>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FMovieSceneBlendChannelID> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FMovieSceneBlendChannelID> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e7e0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FMovieSceneEntityID>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FMovieSceneEntityID> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FMovieSceneEntityID> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e880

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FMovieSceneEvaluationHookComponent>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FMovieSceneEvaluationHookComponent> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FMovieSceneEvaluationHookComponent> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e920

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FMovieScenePropertyBinding>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FMovieScenePropertyBinding> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FMovieScenePropertyBinding> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609e9c0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FMovieSceneSequenceID>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FMovieSceneSequenceID> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FMovieSceneSequenceID> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609ea60

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FMovieSceneTrackInstanceComponent>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FMovieSceneTrackInstanceComponent> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FMovieSceneTrackInstanceComponent> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609eb00

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FObjectComponent>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FObjectComponent> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FObjectComponent> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609eba0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FObjectKey>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FObjectKey> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FObjectKey> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609ec40

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FRootInstanceHandle>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FRootInstanceHandle> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FRootInstanceHandle> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609ece0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FSourceBoolChannel>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FSourceBoolChannel> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FSourceBoolChannel> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609ed80

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FSourceByteChannel>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FSourceByteChannel> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FSourceByteChannel> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609ee20

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FSourceDoubleChannel>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FSourceDoubleChannel> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FSourceDoubleChannel> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609eec0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FSourceFloatChannel>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FSourceFloatChannel> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FSourceFloatChannel> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609ef60

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FSourceIntegerChannel>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FSourceIntegerChannel> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FSourceIntegerChannel> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f000

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FSourceObjectPathChannel>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FSourceObjectPathChannel> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FSourceObjectPathChannel> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f0a0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FSourceStringChannel>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FSourceStringChannel> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FSourceStringChannel> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f140

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FSourceTextChannel>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FSourceTextChannel> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FSourceTextChannel> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f1e0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FTrackInstanceInputComponent>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FTrackInstanceInputComponent> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FTrackInstanceInputComponent> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f280

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FVariantPropertyTypeIndex>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FVariantPropertyTypeIndex> *this,uint param_1
          )

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FVariantPropertyTypeIndex> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f320

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<TSharedPtr<FTrackInstancePropertyBindings,1>_>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<TSharedPtr<FTrackInstancePropertyBindings,1>_> *this,
          uint param_1)

{
  TComponentDebuggingTypedPtr<TSharedPtr<FTrackInstancePropertyBindings,1>_> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f3c0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<TSubclassOf<UMovieSceneBlenderSystem>_>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<TSubclassOf<UMovieSceneBlenderSystem>_> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<TSubclassOf<UMovieSceneBlenderSystem>_> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f460

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FString>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FString> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FString> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f500

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<FText>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<FText> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<FText> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f5a0

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<__int64>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<__int64> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<__int64> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14609f640

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<bool>::_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<bool> *this,uint param_1)

{
  TComponentDebuggingTypedPtr<bool> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14609f6d4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneMuteSoloDecoration::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneMuteSoloDecoration::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneMuteSoloDecoration *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneMuteSoloDecoration *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{472}' @ 14609f6e4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneScalingAnchors::`vector deleting
   destructor'`adjustor{472}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneScalingAnchors::_vector_deleting_destructor__adjustor_472__
          (UMovieSceneScalingAnchors *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneScalingAnchors *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{480}' @ 14609f6f8

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneScalingAnchors::`vector deleting
   destructor'`adjustor{480}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneScalingAnchors::_vector_deleting_destructor__adjustor_480__
          (UMovieSceneScalingAnchors *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneScalingAnchors *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{104}' @ 14609f70c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneScalingAnchors::`vector deleting
   destructor'`adjustor{104}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneScalingAnchors::_vector_deleting_destructor__adjustor_104__
          (UMovieSceneScalingAnchors *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneScalingAnchors *)&this[-1].ScalingGroups.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14609f71c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneSectionAnchorsDecoration::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneSectionAnchorsDecoration::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneSectionAnchorsDecoration *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneSectionAnchorsDecoration *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14609f72c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneSectionAnchorsDecoration::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneSectionAnchorsDecoration::_vector_deleting_destructor__adjustor_48__
          (UMovieSceneSectionAnchorsDecoration *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneSectionAnchorsDecoration *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14609f73c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneSectionAnchorsDecoration::`vector
   deleting destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneSectionAnchorsDecoration::_vector_deleting_destructor__adjustor_56__
          (UMovieSceneSectionAnchorsDecoration *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneSectionAnchorsDecoration *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14609f74c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneTimeWarpDecoration::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneTimeWarpDecoration::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneTimeWarpDecoration *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneTimeWarpDecoration *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14609f75c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneTrackRowDecoration::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneTrackRowDecoration::_vector_deleting_destructor__adjustor_40__
          (UMovieSceneTrackRowDecoration *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneTrackRowDecoration *)&this[-1].MuteSoloData.field_0x28,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14609f770

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f7a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f7d0

void * __thiscall
UE::MovieScene::
TChildEntityInitializer<FMovieSceneTrackInstanceComponent,FTrackInstanceInputComponent>::
_scalar_deleting_destructor_
          (TChildEntityInitializer<FMovieSceneTrackInstanceComponent,FTrackInstanceInputComponent>
           *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f810

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f840

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<unsigned_char>::
_scalar_deleting_destructor_(TComplexComponentOps<unsigned_char> *this,uint param_1)

{
  *this = (TComplexComponentOps<unsigned_char>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f880

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<short>::_scalar_deleting_destructor_
          (TComplexComponentOps<short> *this,uint param_1)

{
  *this = (TComplexComponentOps<short>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f8c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<unsigned_short>::
_scalar_deleting_destructor_(TComplexComponentOps<unsigned_short> *this,uint param_1)

{
  *this = (TComplexComponentOps<unsigned_short>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f900

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<int>::_scalar_deleting_destructor_
          (TComplexComponentOps<int> *this,uint param_1)

{
  *this = (TComplexComponentOps<int>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f940

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<double>::_scalar_deleting_destructor_
          (TComplexComponentOps<double> *this,uint param_1)

{
  *this = (TComplexComponentOps<double>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f980

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UObject_*_(__cdecl*)(UObject_*)>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UObject_*_(__cdecl*)(UObject_*)> *this,uint param_1)

{
  *this = (TComplexComponentOps<UObject_*_(__cdecl*)(UObject_*)>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609f9c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<TObjectPtr<UMovieSceneCondition_const_>_>::
_scalar_deleting_destructor_
          (TComplexComponentOps<TObjectPtr<UMovieSceneCondition_const_>_> *this,uint param_1)

{
  *this = (TComplexComponentOps<TObjectPtr<UMovieSceneCondition_const_>_>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fa00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::Interpolation::FCachedInterpolation>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::Interpolation::FCachedInterpolation> *this,
          uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::Interpolation::FCachedInterpolation>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fa40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FCustomPropertyIndex>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FCustomPropertyIndex> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FCustomPropertyIndex>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fa80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FEasingComponentData>::
_scalar_deleting_destructor_(TComplexComponentOps<FEasingComponentData> *this,uint param_1)

{
  *this = (TComplexComponentOps<FEasingComponentData>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fac0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FEntityGroupID>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FEntityGroupID> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FEntityGroupID>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fb00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FEvaluationHookFlags>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FEvaluationHookFlags> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FEvaluationHookFlags>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fb40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FFrameTime>::_scalar_deleting_destructor_
          (TComplexComponentOps<FFrameTime> *this,uint param_1)

{
  *this = (TComplexComponentOps<FFrameTime>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fb80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FGuid>::_scalar_deleting_destructor_
          (TComplexComponentOps<FGuid> *this,uint param_1)

{
  *this = (TComplexComponentOps<FGuid>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fbc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FHierarchicalBlendTarget>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FHierarchicalBlendTarget> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FHierarchicalBlendTarget>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fc00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FInitialValueIndex>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FInitialValueIndex> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FInitialValueIndex>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fc40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FInstanceHandle>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FInstanceHandle> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FInstanceHandle>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fc80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FInterrogationInstance>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FInterrogationInstance> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FInterrogationInstance>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fcc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FInterrogationKey>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FInterrogationKey> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FInterrogationKey>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fd00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *this,
          uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fd40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneBlendChannelID>::
_scalar_deleting_destructor_(TComplexComponentOps<FMovieSceneBlendChannelID> *this,uint param_1)

{
  *this = (TComplexComponentOps<FMovieSceneBlendChannelID>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fd80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FMovieSceneEntityID>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FMovieSceneEntityID> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FMovieSceneEntityID>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fdc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneEvaluationHookComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOps<FMovieSceneEvaluationHookComponent> *this,uint param_1)

{
  *this = (TComplexComponentOps<FMovieSceneEvaluationHookComponent>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fe00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieScenePropertyBinding>::
_scalar_deleting_destructor_(TComplexComponentOps<FMovieScenePropertyBinding> *this,uint param_1)

{
  *this = (TComplexComponentOps<FMovieScenePropertyBinding>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fe40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneSequenceID>::
_scalar_deleting_destructor_(TComplexComponentOps<FMovieSceneSequenceID> *this,uint param_1)

{
  *this = (TComplexComponentOps<FMovieSceneSequenceID>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fe80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneTrackInstanceComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOps<FMovieSceneTrackInstanceComponent> *this,uint param_1)

{
  *this = (TComplexComponentOps<FMovieSceneTrackInstanceComponent>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609fec0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FObjectComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FObjectComponent> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FObjectComponent>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609ff00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FObjectKey>::_scalar_deleting_destructor_
          (TComplexComponentOps<FObjectKey> *this,uint param_1)

{
  *this = (TComplexComponentOps<FObjectKey>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609ff40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FRootInstanceHandle>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FRootInstanceHandle> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FRootInstanceHandle>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609ff80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceBoolChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FSourceBoolChannel> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FSourceBoolChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14609ffc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceByteChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FSourceByteChannel> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FSourceByteChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0000

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceDoubleChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FSourceDoubleChannel> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FSourceDoubleChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0040

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceFloatChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FSourceFloatChannel> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FSourceFloatChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0080

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceIntegerChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FSourceIntegerChannel> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FSourceIntegerChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a00c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceObjectPathChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FSourceObjectPathChannel> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FSourceObjectPathChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0100

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceStringChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FSourceStringChannel> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FSourceStringChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0140

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceTextChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FSourceTextChannel> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FSourceTextChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0180

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FTrackInstanceInputComponent>::
_scalar_deleting_destructor_(TComplexComponentOps<FTrackInstanceInputComponent> *this,uint param_1)

{
  *this = (TComplexComponentOps<FTrackInstanceInputComponent>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a01c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FVariantPropertyTypeIndex>
::_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FVariantPropertyTypeIndex> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FVariantPropertyTypeIndex>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0200

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<TSharedPtr<FTrackInstancePropertyBindings,1>_>::_scalar_deleting_destructor_
          (TComplexComponentOps<TSharedPtr<FTrackInstancePropertyBindings,1>_> *this,uint param_1)

{
  *this = (TComplexComponentOps<TSharedPtr<FTrackInstancePropertyBindings,1>_>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0240

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<TSubclassOf<UMovieSceneBlenderSystem>_>::
_scalar_deleting_destructor_
          (TComplexComponentOps<TSubclassOf<UMovieSceneBlenderSystem>_> *this,uint param_1)

{
  *this = (TComplexComponentOps<TSubclassOf<UMovieSceneBlenderSystem>_>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0280

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FString>::_scalar_deleting_destructor_
          (TComplexComponentOps<FString> *this,uint param_1)

{
  *this = (TComplexComponentOps<FString>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a02c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FText>::_scalar_deleting_destructor_
          (TComplexComponentOps<FText> *this,uint param_1)

{
  *this = (TComplexComponentOps<FText>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0300

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<__int64>::_scalar_deleting_destructor_
          (TComplexComponentOps<__int64> *this,uint param_1)

{
  *this = (TComplexComponentOps<__int64>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0340

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<bool>::_scalar_deleting_destructor_
          (TComplexComponentOps<bool> *this,uint param_1)

{
  *this = (TComplexComponentOps<bool>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0380

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<unsigned_char>::
_scalar_deleting_destructor_(TComplexComponentOpsBase<unsigned_char> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<unsigned_char>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a03c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<short>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<short> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<short>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0400

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<unsigned_short>::
_scalar_deleting_destructor_(TComplexComponentOpsBase<unsigned_short> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<unsigned_short>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0440

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<int>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<int> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<int>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0480

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<double>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<double> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<double>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a04c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UObject_*_(__cdecl*)(UObject_*)>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UObject_*_(__cdecl*)(UObject_*)> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UObject_*_(__cdecl*)(UObject_*)>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0500

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UObject_*>::
_scalar_deleting_destructor_(TComplexComponentOpsBase<UObject_*> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UObject_*>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0540

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<TObjectPtr<UMovieSceneCondition_const_>_>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<TObjectPtr<UMovieSceneCondition_const_>_> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<TObjectPtr<UMovieSceneCondition_const_>_>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0580

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::Interpolation::FCachedInterpolation>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::Interpolation::FCachedInterpolation> *this,
          uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::Interpolation::FCachedInterpolation>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a05c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FCustomPropertyIndex>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FCustomPropertyIndex> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FCustomPropertyIndex>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0600

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FEasingComponentData>::
_scalar_deleting_destructor_(TComplexComponentOpsBase<FEasingComponentData> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FEasingComponentData>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0640

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FEntityGroupID>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FEntityGroupID> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FEntityGroupID>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0680

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FEvaluationHookFlags>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FEvaluationHookFlags> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FEvaluationHookFlags>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a06c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FFrameTime>::
_scalar_deleting_destructor_(TComplexComponentOpsBase<FFrameTime> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FFrameTime>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0700

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FGuid>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<FGuid> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FGuid>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0740

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FHierarchicalBlendTarget>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FHierarchicalBlendTarget> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FHierarchicalBlendTarget>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0780

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FInitialValueIndex>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FInitialValueIndex> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FInitialValueIndex>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a07c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FInstanceHandle>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FInstanceHandle> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FInstanceHandle>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0800

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FInterrogationInstance>
::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FInterrogationInstance> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FInterrogationInstance>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0840

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FInterrogationKey>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FInterrogationKey> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FInterrogationKey>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0880

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *this,
          uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a08c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieSceneBlendChannelID>::
_scalar_deleting_destructor_(TComplexComponentOpsBase<FMovieSceneBlendChannelID> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FMovieSceneBlendChannelID>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0900

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FMovieSceneEntityID>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FMovieSceneEntityID> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FMovieSceneEntityID>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0940

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieSceneEvaluationHookComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<FMovieSceneEvaluationHookComponent> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FMovieSceneEvaluationHookComponent>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0980

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieScenePropertyBinding>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<FMovieScenePropertyBinding> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FMovieScenePropertyBinding>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a09c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieSceneSequenceID>::
_scalar_deleting_destructor_(TComplexComponentOpsBase<FMovieSceneSequenceID> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FMovieSceneSequenceID>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0a00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FMovieSceneTrackInstanceComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<FMovieSceneTrackInstanceComponent> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FMovieSceneTrackInstanceComponent>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0a40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FObjectComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FObjectComponent> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FObjectComponent>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0a80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FObjectKey>::
_scalar_deleting_destructor_(TComplexComponentOpsBase<FObjectKey> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FObjectKey>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0ac0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FRootInstanceHandle>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FRootInstanceHandle> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FRootInstanceHandle>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0b00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FSourceBoolChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FSourceBoolChannel> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FSourceBoolChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0b40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FSourceByteChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FSourceByteChannel> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FSourceByteChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0b80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FSourceDoubleChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FSourceDoubleChannel> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FSourceDoubleChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0bc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FSourceFloatChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FSourceFloatChannel> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FSourceFloatChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0c00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FSourceIntegerChannel>
::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FSourceIntegerChannel> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FSourceIntegerChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0c40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FSourceObjectPathChannel>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FSourceObjectPathChannel> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FSourceObjectPathChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0c80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FSourceStringChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FSourceStringChannel> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FSourceStringChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0cc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<UE::MovieScene::FSourceTextChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FSourceTextChannel> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FSourceTextChannel>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0d00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FTrackInstanceInputComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<FTrackInstanceInputComponent> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FTrackInstanceInputComponent>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0d40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FVariantPropertyTypeIndex>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FVariantPropertyTypeIndex> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FVariantPropertyTypeIndex>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0d80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<TSharedPtr<FTrackInstancePropertyBindings,1>_>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<TSharedPtr<FTrackInstancePropertyBindings,1>_> *this,
          uint param_1)

{
  *this = (TComplexComponentOpsBase<TSharedPtr<FTrackInstancePropertyBindings,1>_>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0dc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<TSubclassOf<UMovieSceneBlenderSystem>_>
::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<TSubclassOf<UMovieSceneBlenderSystem>_> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<TSubclassOf<UMovieSceneBlenderSystem>_>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0e00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FString>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<FString> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FString>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0e40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<FText>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<FText> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<FText>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0e80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<__int64>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<__int64> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<__int64>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0ec0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsBase<bool>::_scalar_deleting_destructor_
          (TComplexComponentOpsBase<bool> *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<bool>)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0f00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<unsigned_char>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<unsigned_char> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0f40

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<short>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<short> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0f80

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<unsigned_short>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<unsigned_short> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a0fc0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<int>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<int> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1000

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<double>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<double> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1040

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UObject_*_(__cdecl*)(UObject_*)>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UObject_*_(__cdecl*)(UObject_*)> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1080

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<TObjectPtr<UMovieSceneCondition_const_>_>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<TObjectPtr<UMovieSceneCondition_const_>_> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a10c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::Interpolation::FCachedInterpolation>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::Interpolation::FCachedInterpolation>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1100

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FCustomPropertyIndex>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FCustomPropertyIndex> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1140

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<FEasingComponentData>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<FEasingComponentData> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1180

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FEntityGroupID>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FEntityGroupID> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a11c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FEvaluationHookFlags>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FEvaluationHookFlags> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1200

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<FFrameTime>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<FFrameTime> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1240

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<FGuid>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<FGuid> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1280

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FHierarchicalBlendTarget>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FHierarchicalBlendTarget> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a12c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FInitialValueIndex>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FInitialValueIndex> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1300

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FInstanceHandle>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FInstanceHandle> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1340

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FInterrogationInstance>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FInterrogationInstance> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1380

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FInterrogationKey>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FInterrogationKey> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a13c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1400

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<FMovieSceneBlendChannelID>::_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<FMovieSceneBlendChannelID> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1440

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FMovieSceneEntityID>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FMovieSceneEntityID> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1480

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<FMovieSceneEvaluationHookComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<FMovieSceneEvaluationHookComponent> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a14c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<FMovieScenePropertyBinding>::_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<FMovieScenePropertyBinding> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1500

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<FMovieSceneSequenceID>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<FMovieSceneSequenceID> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1540

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<FMovieSceneTrackInstanceComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<FMovieSceneTrackInstanceComponent> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1580

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FObjectComponent>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FObjectComponent> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a15c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<FObjectKey>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<FObjectKey> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1600

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FRootInstanceHandle>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FRootInstanceHandle> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1640

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceBoolChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceBoolChannel> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1680

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceByteChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceByteChannel> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a16c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceDoubleChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceDoubleChannel> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1700

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceFloatChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceFloatChannel> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1740

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceIntegerChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceIntegerChannel> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1780

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceObjectPathChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceObjectPathChannel> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a17c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceStringChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceStringChannel> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1800

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceTextChannel>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FSourceTextChannel> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1840

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<FTrackInstanceInputComponent>::_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<FTrackInstanceInputComponent> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1880

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FVariantPropertyTypeIndex>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FVariantPropertyTypeIndex> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a18c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<TSharedPtr<FTrackInstancePropertyBindings,1>_>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<TSharedPtr<FTrackInstancePropertyBindings,1>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1900

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<TSubclassOf<UMovieSceneBlenderSystem>_>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<TSubclassOf<UMovieSceneBlenderSystem>_> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1940

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<FString>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<FString> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1980

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<FText>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<FText> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a19c0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<__int64>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<__int64> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1a00

void * __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOpsCustomRefCollection<bool>::
_scalar_deleting_destructor_(TComplexComponentOpsCustomRefCollection<bool> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1a40

void * __thiscall
UE::MovieScene::TComponentHeader<unsigned_char>::_scalar_deleting_destructor_
          (TComponentHeader<unsigned_char> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1a80

void * __thiscall
UE::MovieScene::TComponentHeader<short>::_scalar_deleting_destructor_
          (TComponentHeader<short> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1ac0

void * __thiscall
UE::MovieScene::TComponentHeader<unsigned_short>::_scalar_deleting_destructor_
          (TComponentHeader<unsigned_short> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1b00

void * __thiscall
UE::MovieScene::TComponentHeader<int>::_scalar_deleting_destructor_
          (TComponentHeader<int> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1b40

void * __thiscall
UE::MovieScene::TComponentHeader<double>::_scalar_deleting_destructor_
          (TComponentHeader<double> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1b80

void * __thiscall
UE::MovieScene::TComponentHeader<UObject_*_(__cdecl*)(UObject_*)>::_scalar_deleting_destructor_
          (TComponentHeader<UObject_*_(__cdecl*)(UObject_*)> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1bc0

void * __thiscall
UE::MovieScene::TComponentHeader<UObject_*>::_scalar_deleting_destructor_
          (TComponentHeader<UObject_*> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1c00

void * __thiscall
UE::MovieScene::TComponentHeader<TObjectPtr<UMovieSceneCondition_const_>_>::
_scalar_deleting_destructor_
          (TComponentHeader<TObjectPtr<UMovieSceneCondition_const_>_> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1c40

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::Interpolation::FCachedInterpolation>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::Interpolation::FCachedInterpolation> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1c80

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FCustomPropertyIndex>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FCustomPropertyIndex> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1cc0

void * __thiscall
UE::MovieScene::TComponentHeader<FEasingComponentData>::_scalar_deleting_destructor_
          (TComponentHeader<FEasingComponentData> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1d00

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FEntityGroupID>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FEntityGroupID> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1d40

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FEvaluationHookFlags>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FEvaluationHookFlags> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1d80

void * __thiscall
UE::MovieScene::TComponentHeader<FFrameTime>::_scalar_deleting_destructor_
          (TComponentHeader<FFrameTime> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1dc0

void * __thiscall
UE::MovieScene::TComponentHeader<FGuid>::_scalar_deleting_destructor_
          (TComponentHeader<FGuid> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1e00

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FHierarchicalBlendTarget>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FHierarchicalBlendTarget> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1e40

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FInitialValueIndex>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FInitialValueIndex> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1e80

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FInstanceHandle>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FInstanceHandle> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1ec0

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FInterrogationInstance>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FInterrogationInstance> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1f00

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FInterrogationKey>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FInterrogationKey> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1f40

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *this,
          uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1f80

void * __thiscall
UE::MovieScene::TComponentHeader<FMovieSceneBlendChannelID>::_scalar_deleting_destructor_
          (TComponentHeader<FMovieSceneBlendChannelID> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a1fc0

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FMovieSceneEntityID>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FMovieSceneEntityID> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2000

void * __thiscall
UE::MovieScene::TComponentHeader<FMovieSceneEvaluationHookComponent>::_scalar_deleting_destructor_
          (TComponentHeader<FMovieSceneEvaluationHookComponent> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2040

void * __thiscall
UE::MovieScene::TComponentHeader<FMovieScenePropertyBinding>::_scalar_deleting_destructor_
          (TComponentHeader<FMovieScenePropertyBinding> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2080

void * __thiscall
UE::MovieScene::TComponentHeader<FMovieSceneSequenceID>::_scalar_deleting_destructor_
          (TComponentHeader<FMovieSceneSequenceID> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a20c0

void * __thiscall
UE::MovieScene::TComponentHeader<FMovieSceneTrackInstanceComponent>::_scalar_deleting_destructor_
          (TComponentHeader<FMovieSceneTrackInstanceComponent> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2100

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FObjectComponent>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FObjectComponent> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2140

void * __thiscall
UE::MovieScene::TComponentHeader<FObjectKey>::_scalar_deleting_destructor_
          (TComponentHeader<FObjectKey> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2180

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FRootInstanceHandle>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FRootInstanceHandle> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a21c0

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FSourceBoolChannel>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FSourceBoolChannel> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2200

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FSourceByteChannel>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FSourceByteChannel> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2240

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FSourceDoubleChannel>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FSourceDoubleChannel> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2280

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FSourceFloatChannel>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FSourceFloatChannel> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a22c0

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FSourceIntegerChannel>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FSourceIntegerChannel> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2300

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FSourceObjectPathChannel>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FSourceObjectPathChannel> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2340

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FSourceStringChannel>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FSourceStringChannel> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2380

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FSourceTextChannel>::_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FSourceTextChannel> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a23c0

void * __thiscall
UE::MovieScene::TComponentHeader<FTrackInstanceInputComponent>::_scalar_deleting_destructor_
          (TComponentHeader<FTrackInstanceInputComponent> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2400

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FVariantPropertyTypeIndex>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FVariantPropertyTypeIndex> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2440

void * __thiscall
UE::MovieScene::TComponentHeader<TSharedPtr<FTrackInstancePropertyBindings,1>_>::
_scalar_deleting_destructor_
          (TComponentHeader<TSharedPtr<FTrackInstancePropertyBindings,1>_> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2480

void * __thiscall
UE::MovieScene::TComponentHeader<TSubclassOf<UMovieSceneBlenderSystem>_>::
_scalar_deleting_destructor_
          (TComponentHeader<TSubclassOf<UMovieSceneBlenderSystem>_> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a24c0

void * __thiscall
UE::MovieScene::TComponentHeader<FString>::_scalar_deleting_destructor_
          (TComponentHeader<FString> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2500

void * __thiscall
UE::MovieScene::TComponentHeader<FText>::_scalar_deleting_destructor_
          (TComponentHeader<FText> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2540

void * __thiscall
UE::MovieScene::TComponentHeader<__int64>::_scalar_deleting_destructor_
          (TComponentHeader<__int64> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2580

void * __thiscall
UE::MovieScene::TComponentHeader<bool>::_scalar_deleting_destructor_
          (TComponentHeader<bool> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a25c0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<unsigned_char>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<unsigned_char> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2610

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<short>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<short> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2660

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<unsigned_short>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<unsigned_short> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a26b0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<int>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<int> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2700

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<double>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<double> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2750

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UObject_*_(__cdecl*)(UObject_*)>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UObject_*_(__cdecl*)(UObject_*)> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a27a0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UObject_*>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UObject_*> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a27f0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<TObjectPtr<UMovieSceneCondition_const_>_>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<TObjectPtr<UMovieSceneCondition_const_>_> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2840

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::Interpolation::FCachedInterpolation>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::Interpolation::FCachedInterpolation> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2890

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FCustomPropertyIndex>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FCustomPropertyIndex> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a28e0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FEasingComponentData>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FEasingComponentData> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2930

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FEntityGroupID>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FEntityGroupID> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2980

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FEvaluationHookFlags>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FEvaluationHookFlags> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a29d0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FFrameTime>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FFrameTime> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2a20

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FGuid>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FGuid> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2a70

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FHierarchicalBlendTarget>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FHierarchicalBlendTarget> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2ac0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FInitialValueIndex>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FInitialValueIndex> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2b10

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FInstanceHandle>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FInstanceHandle> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2b60

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FInterrogationInstance>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FInterrogationInstance> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2bb0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FInterrogationKey>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FInterrogationKey> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2c00

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2c50

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FMovieSceneBlendChannelID>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FMovieSceneBlendChannelID> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2ca0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FMovieSceneEntityID>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FMovieSceneEntityID> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2cf0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FMovieSceneEvaluationHookComponent>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FMovieSceneEvaluationHookComponent> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2d40

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FMovieScenePropertyBinding>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FMovieScenePropertyBinding> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2d90

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FMovieSceneSequenceID>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FMovieSceneSequenceID> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2de0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FMovieSceneTrackInstanceComponent>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FMovieSceneTrackInstanceComponent> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2e30

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FObjectComponent>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FObjectComponent> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2e80

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FObjectKey>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FObjectKey> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2ed0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FRootInstanceHandle>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FRootInstanceHandle> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2f20

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FSourceBoolChannel>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FSourceBoolChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2f70

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FSourceByteChannel>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FSourceByteChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a2fc0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FSourceDoubleChannel>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FSourceDoubleChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3010

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FSourceFloatChannel>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FSourceFloatChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3060

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FSourceIntegerChannel>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FSourceIntegerChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a30b0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FSourceObjectPathChannel>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FSourceObjectPathChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3100

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FSourceStringChannel>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FSourceStringChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3150

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FSourceTextChannel>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FSourceTextChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a31a0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FTrackInstanceInputComponent>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FTrackInstanceInputComponent> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a31f0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FVariantPropertyTypeIndex>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FVariantPropertyTypeIndex> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3240

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<TSharedPtr<FTrackInstancePropertyBindings,1>_>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<TSharedPtr<FTrackInstancePropertyBindings,1>_> *this,uint param_1
          )

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3290

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<TSubclassOf<UMovieSceneBlenderSystem>_>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<TSubclassOf<UMovieSceneBlenderSystem>_> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a32e0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FString>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FString> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3330

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<FText>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<FText> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3380

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<__int64>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<__int64> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a33d0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<bool>::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<bool> *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3420

void * __thiscall
UE::MovieScene::TConditionalDuplicateChildEntityInitializer<FGuid>::_scalar_deleting_destructor_
          (TConditionalDuplicateChildEntityInitializer<FGuid> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3460

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_char>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<unsigned_char> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a34a0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<short>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<short> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a34e0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_short>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<unsigned_short> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3520

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<int>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<int> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3560

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<double>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<double> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a35a0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UObject_*_(__cdecl*)(UObject_*)>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UObject_*_(__cdecl*)(UObject_*)> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a35e0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UObject_*>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UObject_*> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3620

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<TObjectPtr<UMovieSceneCondition_const_>_>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<TObjectPtr<UMovieSceneCondition_const_>_> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3660

void * __thiscall
UE::MovieScene::
TDuplicateChildEntityInitializer<UE::MovieScene::Interpolation::FCachedInterpolation>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::Interpolation::FCachedInterpolation>
           *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a36a0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FCustomPropertyIndex>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FCustomPropertyIndex> *this,uint param_1
          )

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a36e0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FEasingComponentData>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FEasingComponentData> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3720

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FEntityGroupID>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FEntityGroupID> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3760

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FEvaluationHookFlags>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FEvaluationHookFlags> *this,uint param_1
          )

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a37a0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FFrameTime>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FFrameTime> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a37e0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FGuid>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FGuid> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3820

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FHierarchicalBlendTarget>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FHierarchicalBlendTarget> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3860

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInitialValueIndex>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FInitialValueIndex> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a38a0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a38e0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInterrogationInstance>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FInterrogationInstance> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3920

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInterrogationKey>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FInterrogationKey> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3960

void * __thiscall
UE::MovieScene::
TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
           *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a39a0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneBlendChannelID>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FMovieSceneBlendChannelID> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a39e0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneEntityID>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneEntityID> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3a20

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneEvaluationHookComponent>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FMovieSceneEvaluationHookComponent> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3a60

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieScenePropertyBinding>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FMovieScenePropertyBinding> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3aa0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSequenceID>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FMovieSceneSequenceID> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3ae0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneTrackInstanceComponent>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FMovieSceneTrackInstanceComponent> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3b20

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3b60

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FObjectKey>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FObjectKey> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3ba0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3be0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3c20

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3c60

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel> *this,uint param_1
          )

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3ca0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3ce0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3d20

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3d60

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel> *this,uint param_1
          )

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3da0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3de0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FTrackInstanceInputComponent>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FTrackInstanceInputComponent> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3e20

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FVariantPropertyTypeIndex>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FVariantPropertyTypeIndex> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3e60

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<TSharedPtr<FTrackInstancePropertyBindings,1>_>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<TSharedPtr<FTrackInstancePropertyBindings,1>_> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3ea0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<TSubclassOf<UMovieSceneBlenderSystem>_>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<TSubclassOf<UMovieSceneBlenderSystem>_> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3ee0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FString>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FString> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3f20

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FText>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<FText> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3f60

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<__int64>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<__int64> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3fa0

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<bool>::_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<bool> *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a3fe0

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd> *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4020

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd> *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4060

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a40a0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a40e0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4120

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4160

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a41a0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a41e0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4220

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4260

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a42a0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a42e0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>::
_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4320

void * __thiscall
UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd>::
_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::FAdd> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4360

void * __thiscall
UE::MovieScene::
TStaticChildEntityInitializer<FMovieSceneTrackInstanceComponent,FTrackInstanceInputComponent,`UE::MovieScene::FBuiltInComponentTypes::FBuiltInComponentTypes'::__l25::<lambda_1>_&>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a43a0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy,`UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a43d0

void * __thiscall
TMovieSceneEvaluationTree<FCompileOnTheFlyData>::FAddOperator::_scalar_deleting_destructor_
          (FAddOperator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneEvaluationTreeNodeOperator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4410

void * __thiscall
TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::FAddOperator::
_scalar_deleting_destructor_(FAddOperator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneEvaluationTreeNodeOperator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4450

void * __thiscall
UE::MovieScene::FBoundObjectKeyInitializer::_scalar_deleting_destructor_
          (FBoundObjectKeyInitializer *this,uint param_1)

{
  *this = (FBoundObjectKeyInitializer)&___7IMutualComponentInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4490

void * __thiscall
UE::MovieScene::FChildEntityFactory::_scalar_deleting_destructor_
          (FChildEntityFactory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FChildEntityFactory_MovieScene_UE__6B_;
  pFVar1 = (this->ParentEntityOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a44e0

void * __thiscall
UE::MovieScene::FChildEntityInitializer::_scalar_deleting_destructor_
          (FChildEntityInitializer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4520

void * __thiscall
UE::MovieScene::FComponentHeader::_scalar_deleting_destructor_(FComponentHeader *this,uint param_1)

{
  ~FComponentHeader(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4560

void * __thiscall
UE::MovieScene::FComponentTypeDebugInfo::_scalar_deleting_destructor_
          (FComponentTypeDebugInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a45b0

void * __thiscall
UE::MovieScene::FEntityBuilderImplBase::_scalar_deleting_destructor_
          (FEntityBuilderImplBase *this,uint param_1)

{
  *this = (FEntityBuilderImplBase)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a45f0

void * __thiscall FIntegralCurve::_scalar_deleting_destructor_(FIntegralCurve *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FIntegralCurve__6B_;
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIndexedCurve__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4680

void * __thiscall
FMovieSceneChannel::_scalar_deleting_destructor_(FMovieSceneChannel *this,uint param_1)

{
  ~FMovieSceneChannel(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a46c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
FMovieSceneCompileDataManagerGenerator::_scalar_deleting_destructor_
          (FMovieSceneCompileDataManagerGenerator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneTemplateGenerator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4700

void * __thiscall
FMovieSceneFloatChannel::_scalar_deleting_destructor_(FMovieSceneFloatChannel *this,uint param_1)

{
  ~FMovieSceneFloatChannel(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4740

void * __thiscall
UE::MovieScene::FObjectFactoryBatch::_scalar_deleting_destructor_
          (FObjectFactoryBatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ObjectsToAssign).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreservedEntities).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FChildEntityFactory_MovieScene_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a47b0

void * __thiscall FRealCurve::_scalar_deleting_destructor_(FRealCurve *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FIndexedCurve__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4830

void * __thiscall FRichCurve::_scalar_deleting_destructor_(FRichCurve *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FIndexedCurve__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a48c0

void * __thiscall
`UMovieSceneBoundSceneComponentInstantiator::OnRun'::__l2::FSceneComponentBindingMutation::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4900

void * __thiscall
`IMovieSceneTrackTemplateProducer::GenerateTrackTemplate'::__l2::FTemplateGeneratorStub::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IMovieSceneTemplateGenerator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4940

void * __thiscall
UE::MovieScene::IComplexComponentOps::_scalar_deleting_destructor_
          (IComplexComponentOps *this,uint param_1)

{
  *this = (IComplexComponentOps)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4980

void * __thiscall
UE::MovieScene::IComponentDebuggingTypedPtr::_scalar_deleting_destructor_
          (IComponentDebuggingTypedPtr *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a49c0

void * __thiscall
UE::MovieScene::IEntityBuilder::_scalar_deleting_destructor_(IEntityBuilder *this,uint param_1)

{
  *this = (IEntityBuilder)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4a00

void * __thiscall
IMovieSceneDecoration::_scalar_deleting_destructor_(IMovieSceneDecoration *this,uint param_1)

{
  *this = (IMovieSceneDecoration)&___7IMovieSceneDecoration__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4a40

void * __thiscall
UE::MovieScene::IMovieSceneEntityMutation::_scalar_deleting_destructor_
          (IMovieSceneEntityMutation *this,uint param_1)

{
  *this = (IMovieSceneEntityMutation)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4a80

void * __thiscall
IMovieSceneEntityProvider::_scalar_deleting_destructor_
          (IMovieSceneEntityProvider *this,uint param_1)

{
  *this = (IMovieSceneEntityProvider)&___7IMovieSceneEntityProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4ac0

void * __thiscall
IMovieSceneEvaluationTreeNodeOperator::_scalar_deleting_destructor_
          (IMovieSceneEvaluationTreeNodeOperator *this,uint param_1)

{
  *this = (IMovieSceneEvaluationTreeNodeOperator)&___7IMovieSceneEvaluationTreeNodeOperator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4b00

void * __thiscall
IMovieSceneLifetimeDecoration::_scalar_deleting_destructor_
          (IMovieSceneLifetimeDecoration *this,uint param_1)

{
  *this = (IMovieSceneLifetimeDecoration)&___7IMovieSceneLifetimeDecoration__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4b40

void * __thiscall
IMovieSceneScalingDriver::_scalar_deleting_destructor_(IMovieSceneScalingDriver *this,uint param_1)

{
  *this = (IMovieSceneScalingDriver)&___7IMovieSceneScalingDriver__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4b80

void * __thiscall
IMovieSceneSectionDecoration::_scalar_deleting_destructor_
          (IMovieSceneSectionDecoration *this,uint param_1)

{
  *this = (IMovieSceneSectionDecoration)&___7IMovieSceneSectionDecoration__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4bc0

void * __thiscall
IMovieSceneTemplateGenerator::_scalar_deleting_destructor_
          (IMovieSceneTemplateGenerator *this,uint param_1)

{
  *this = (IMovieSceneTemplateGenerator)&___7IMovieSceneTemplateGenerator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4c00

void * __thiscall
IMovieSceneTimeWarpSource::_scalar_deleting_destructor_
          (IMovieSceneTimeWarpSource *this,uint param_1)

{
  *this = (IMovieSceneTimeWarpSource)&___7IMovieSceneTimeWarpSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4c40

void * __thiscall
UE::MovieScene::IMutualComponentInitializer::_scalar_deleting_destructor_
          (IMutualComponentInitializer *this,uint param_1)

{
  *this = (IMutualComponentInitializer)&___7IMutualComponentInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4c80

void * __thiscall
UE::MovieScene::IRetimingInterface::_scalar_deleting_destructor_
          (IRetimingInterface *this,uint param_1)

{
  *this = (IRetimingInterface)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneBindingLifetimeSystem::_scalar_deleting_destructor_
          (UMovieSceneBindingLifetimeSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneBindingLifetimeSystem__6B_;
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

// `scalar_deleting_destructor' @ 1460a4d20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UMovieSceneBlenderSystem::_scalar_deleting_destructor_(UMovieSceneBlenderSystem *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneBlenderSystem__6B_;
  FVar1 = (this->AllocatedBlendChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4d90

void * __thiscall
UMovieSceneBoundSceneComponentInstantiator::_scalar_deleting_destructor_
          (UMovieSceneBoundSceneComponentInstantiator *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneBoundSceneComponentInstantiator__6B_;
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

// `scalar_deleting_destructor' @ 1460a4df0

void * __thiscall
UMovieSceneChannelOverrideContainer::_scalar_deleting_destructor_
          (UMovieSceneChannelOverrideContainer *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneChannelOverrideContainer__6B_;
  UMovieSceneSignedObject::~UMovieSceneSignedObject((UMovieSceneSignedObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4e50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UMovieSceneCompiledData::_scalar_deleting_destructor_(UMovieSceneCompiledData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneCompiledData__6B_;
  pFVar1 = (this->DeterminismFences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneEvaluationMetaData,int>
            ((FMovieSceneEvaluationMetaData *)
             (this->TrackTemplateField).MetaData.AllocatorInstance.Data,
             (this->TrackTemplateField).MetaData.ArrayNum);
  pFVar1 = (this->TrackTemplateField).MetaData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneEvaluationGroup,int>
            ((FMovieSceneEvaluationGroup *)(this->TrackTemplateField).Groups.AllocatorInstance.Data,
             (this->TrackTemplateField).Groups.ArrayNum);
  pFVar1 = (this->TrackTemplateField).Groups.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrackTemplateField).Ranges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMovieSceneEntityComponentField::~FMovieSceneEntityComponentField(&this->EntityComponentField);
  FMovieSceneSequenceHierarchy::~FMovieSceneSequenceHierarchy(&this->Hierarchy);
  FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(&this->EvaluationTemplate);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x420);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a4f40

void * __thiscall
UMovieSceneCompiledDataManager::_scalar_deleting_destructor_
          (UMovieSceneCompiledDataManager *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneCompiledDataManager__6B_;
  *(undefined4 *)&(this->EntityComponentFields).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntityComponentFields).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntityComponentFields);
  *(undefined4 *)&(this->TrackTemplateFields).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TrackTemplateFields).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackTemplateFields);
  *(undefined4 *)&(this->TrackTemplates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TrackTemplates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackTemplates);
  *(undefined4 *)&(this->Hierarchies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Hierarchies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Hierarchies);
  TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>
            (&this->CompiledDataEntries);
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SequenceToDataIDs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SequenceToDataIDs);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AsyncLoadCriticalSection);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x230);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a5070

void * __thiscall
UMovieSceneCondition::_scalar_deleting_destructor_(UMovieSceneCondition *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneCondition__6B_;
  UMovieSceneSignedObject::~UMovieSceneSignedObject((UMovieSceneSignedObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a50d0

void * __thiscall
UMovieSceneDecorationContainerObject::_scalar_deleting_destructor_
          (UMovieSceneDecorationContainerObject *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneDecorationContainerObject__6B_;
  pFVar1 = (this->Decorations).Decorations.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSignedObject::~UMovieSceneSignedObject((UMovieSceneSignedObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a5140

void * __thiscall
UMovieSceneEntityProvider::_scalar_deleting_destructor_
          (UMovieSceneEntityProvider *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1460a51a0

void * __thiscall
UMovieSceneGenericBoundObjectInstantiator::_scalar_deleting_destructor_
          (UMovieSceneGenericBoundObjectInstantiator *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneGenericBoundObjectInstantiator__6B_;
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

// `scalar_deleting_destructor' @ 1460a5200

void * __thiscall
UMovieSceneGroupCondition::_scalar_deleting_destructor_
          (UMovieSceneGroupCondition *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneGroupCondition__6B_;
  pFVar1 = (this->SubConditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieSceneCondition__6B_;
  UMovieSceneSignedObject::~UMovieSceneSignedObject((UMovieSceneSignedObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a5280

void * __thiscall
UMovieSceneLanguagePreviewDecoration::_scalar_deleting_destructor_
          (UMovieSceneLanguagePreviewDecoration *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneLanguagePreviewDecoration__6B_;
  pFVar1 = (this->PreviewLanguage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 1460a52f0

void * __thiscall
UMovieSceneMuteSoloDecoration::_scalar_deleting_destructor_
          (UMovieSceneMuteSoloDecoration *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneDecoration__6B_;
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

// `scalar_deleting_destructor' @ 1460a5360

void * __thiscall
UMovieSceneScalingAnchors::_scalar_deleting_destructor_
          (UMovieSceneScalingAnchors *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTimeWarpSource__;
  *(undefined4 *)&(this->CurrentAnchors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurrentAnchors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentAnchors);
  *(undefined4 *)&(this->ScalingGroups).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScalingGroups).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalingGroups);
  *(undefined4 *)&(this->InitialAnchors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InitialAnchors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InitialAnchors);
  pFVar2 = (this->ScalingDrivers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTimeWarpSource__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneDecoration__6B_;
  UMovieScenePlayRateCurve::~UMovieScenePlayRateCurve((UMovieScenePlayRateCurve *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1460a54a0

void * __thiscall
UMovieSceneScalingDriver::_scalar_deleting_destructor_(UMovieSceneScalingDriver *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1460a5500

void * __thiscall
UMovieSceneSectionAnchorsDecoration::_scalar_deleting_destructor_
          (UMovieSceneSectionAnchorsDecoration *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneScalingDriver__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneLifetimeDecoration__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneSectionDecoration__6B_;
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

// `scalar_deleting_destructor' @ 1460a5580

void * __thiscall
UMovieSceneSectionChannelOverrideRegistry::_scalar_deleting_destructor_
          (UMovieSceneSectionChannelOverrideRegistry *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneSectionChannelOverrideRegistry__6B_;
  *(undefined4 *)&(this->Overrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Overrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Overrides);
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

// `scalar_deleting_destructor' @ 1460a5610

void * __thiscall
UMovieSceneTimeWarpDecoration::_scalar_deleting_destructor_
          (UMovieSceneTimeWarpDecoration *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
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

// `scalar_deleting_destructor' @ 1460a56a0

void * __thiscall
UMovieSceneTimeWarpSource::_scalar_deleting_destructor_
          (UMovieSceneTimeWarpSource *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1460a5700

void * __thiscall
UMovieSceneTrackRowDecoration::_scalar_deleting_destructor_
          (UMovieSceneTrackRowDecoration *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  *(undefined4 *)&(this->MuteSoloData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MuteSoloData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MuteSoloData);
  this->_padding_ = (longlong)&___7IMovieSceneDecoration__6B_;
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

// `scalar_deleting_destructor' @ 1460a57b0

void * __thiscall
UMovieSceneTrackTemplateProducer::_scalar_deleting_destructor_
          (UMovieSceneTrackTemplateProducer *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1460a5810

void * __thiscall
UMovieSceneValueDecomposer::_scalar_deleting_destructor_
          (UMovieSceneValueDecomposer *this,uint param_1)

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

// AddKeyToChannel @ 1460a7820

FKeyHandle __cdecl
AddKeyToChannel(FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,double param_3,
               EMovieSceneKeyInterpolation param_4)

{
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AddKeyToChannel
            (param_1,param_2,SUB84(param_3,0),param_4);
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel @ 1460a7850

FKeyHandle __cdecl
AddKeyToChannel(FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3,
               EMovieSceneKeyInterpolation param_4)

{
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AddKeyToChannel
            (param_1,param_2,param_3,param_4);
  return (FKeyHandle)(uint)param_1;
}

// AddPtrsToGroup @ 1460a7f60

void __cdecl
AddPtrsToGroup(FMovieSceneEvaluationGroup *param_1,
              TArray<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_> *param_2,
              TArray<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_> *param_3,
              TArray<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_> *param_4,
              TArray<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_28;
  int iStack_24;
  
  local_28 = param_2->ArrayNum;
  if ((local_28 != 0) || (param_4->ArrayNum != 0)) {
    pFVar2 = (param_1->LUTIndices).AllocatorInstance.Data;
    iStack_24 = param_4->ArrayNum;
    if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
       (((FScriptContainerElement *)&local_28 <
         pFVar2 + (longlong)(param_1->LUTIndices).ArrayMax * 8 &&
        (bVar4 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (param_1->LUTIndices).ArrayNum;
    piVar1 = &(param_1->LUTIndices).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->LUTIndices).ArrayNum = iVar5 + 1;
    *(ulonglong *)((param_1->LUTIndices).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         CONCAT44(iStack_24,local_28);
    TArray<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_>::
    Append<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_>
              (&param_1->TrackLUT,param_2);
    TArray<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_>::
    Append<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_>
              (&param_1->TrackLUT,param_4);
    TArray<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_>::
    Append<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_>
              (&param_1->SectionLUT,param_3);
    TArray<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_>::
    Append<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_>
              (&param_1->SectionLUT,param_5);
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  return;
}

// AlwaysEvaluateSection @ 1460aa4d0

bool __cdecl MovieSceneSegmentCompiler::AlwaysEvaluateSection(FMovieSceneSectionData *param_1)

{
  if (((param_1->Section->BlendType).bIsValid == false) &&
     ((param_1->Flags & (PostRoll|PreRoll)) == None)) {
    return false;
  }
  return true;
}

// AssignValue @ 1460ac4f0

void __cdecl AssignValue(FMovieSceneDoubleChannel *param_1,FKeyHandle param_2,float param_3)

{
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AssignValue
            (param_1,param_2,(double)param_3);
  return;
}

// AssignValue @ 1460ac500

void __cdecl AssignValue(FMovieSceneDoubleChannel *param_1,FKeyHandle param_2,double param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMovieSceneDoubleValue *pFVar5;
  undefined1 auStackX_8 [8];
  TArrayView<FMovieSceneDoubleValue,int> aTStack_28 [2];
  
  if ((param_1 == (FMovieSceneDoubleChannel *)0xffffffffffffff90) ||
     (&param_1->Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (&param_1->KeyHandles == (FMovieSceneKeyHandleMap *)0x0) {
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  else {
    iVar4 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)&param_1->KeyHandles,param_2);
    if (iVar4 != -1) {
      aTStack_28[0].DataPtr = (FMovieSceneDoubleValue *)(param_1->Values).AllocatorInstance.Data;
      iVar1 = (param_1->Values).ArrayNum;
      if (iVar1 < 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      aTStack_28[0].ArrayNum = iVar1;
      pFVar5 = TArrayView<FMovieSceneDoubleValue,int>::operator[](aTStack_28,iVar4);
      pFVar5->Value = param_3;
    }
  }
  return;
}

// AssignValue @ 1460ac510

void __cdecl AssignValue(FMovieSceneFloatChannel *param_1,FKeyHandle param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMovieSceneFloatValue *pFVar5;
  undefined1 local_res8 [8];
  TArrayView<FMovieSceneFloatValue,int> local_28 [2];
  
  if ((param_1 == (FMovieSceneFloatChannel *)0xffffffffffffff90) ||
     (&param_1->Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (&param_1->KeyHandles == (FMovieSceneKeyHandleMap *)0x0) {
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res8);
  }
  else {
    iVar4 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)&param_1->KeyHandles,param_2);
    if (iVar4 != -1) {
      local_28[0].DataPtr = (FMovieSceneFloatValue *)(param_1->Values).AllocatorInstance.Data;
      iVar1 = (param_1->Values).ArrayNum;
      if (iVar1 < 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_28[0].ArrayNum = iVar1;
      pFVar5 = TArrayView<FMovieSceneFloatValue,int>::operator[](local_28,iVar4);
      pFVar5->Value = param_3;
    }
  }
  return;
}

// BlendSegmentLegacySectionOrder @ 1460ae2b0

void __cdecl MovieSceneSegmentCompiler::BlendSegmentLegacySectionOrder(FSegmentBlendData *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FSegmentBlendData *pFVar4;
  uint uVar5;
  TLess<void> local_res8;
  
  puVar1 = &param_1->field_0x48;
  if (1 < *(int *)&param_1->field_0x48) {
    pFVar4 = param_1;
    if (*(FSegmentBlendData **)&param_1->field_0x40 != (FSegmentBlendData *)0x0) {
      pFVar4 = *(FSegmentBlendData **)&param_1->field_0x40;
    }
    AlgoImpl::
    IntroSortInternal<FMovieSceneSectionData,int,UE::Core::Private::TProjectionMemberData<int_FMovieSceneSectionData::*>,TLess<void>_>
              ((FMovieSceneSectionData *)pFVar4,*(int *)&param_1->field_0x48,
               (TProjectionMemberData<int_FMovieSceneSectionData::*>)0x8,local_res8);
    uVar5 = *(int *)puVar1 - 1;
    if ((int)uVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (uVar5 == 0) {
      return;
    }
    if (*(FSegmentBlendData **)&param_1->field_0x40 != (FSegmentBlendData *)0x0) {
      param_1 = *(FSegmentBlendData **)&param_1->field_0x40;
    }
    if (~uVar5 + *(int *)puVar1 != 0) {
      memmove(&param_1->field_0x10,&param_1->field_0x10 + (longlong)(int)uVar5 * 0x10,
              (longlong)(int)(~uVar5 + *(int *)puVar1) << 4);
    }
    *(uint *)puVar1 = *(int *)puVar1 - uVar5;
  }
  return;
}

// ChooseLowestRowIndex @ 1460b19a0

void __cdecl MovieSceneSegmentCompiler::ChooseLowestRowIndex(FSegmentBlendData *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  FSegmentBlendData *pFVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  iVar7 = *(int *)&param_1->field_0x48;
  if (iVar7 != 0) {
    iVar11 = 0x7fffffff;
    pFVar6 = param_1;
    if (*(FSegmentBlendData **)&param_1->field_0x40 != (FSegmentBlendData *)0x0) {
      pFVar6 = *(FSegmentBlendData **)&param_1->field_0x40;
    }
    plVar3 = (longlong *)&pFVar6->field_0x0;
    while( true ) {
      if (*(int *)&param_1->field_0x48 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMovieSceneSectionData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == (FSegmentBlendData *)(plVar3 + (longlong)iVar7 * 2)) break;
      iVar1 = iVar11;
      if (((*(char *)(*(longlong *)pFVar6 + 0xf2) == '\0') && ((pFVar6->field_0xc & 3) == 0)) &&
         (iVar1 = *(int *)(*(longlong *)pFVar6 + 0xd0), iVar11 < iVar1)) {
        iVar1 = iVar11;
      }
      iVar11 = iVar1;
      pFVar6 = (FSegmentBlendData *)&pFVar6->field_0x10;
    }
    uVar8 = *(int *)&param_1->field_0x48 - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar8 < *(int *)&param_1->field_0x48) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = param_1;
        if (*(FSegmentBlendData **)&param_1->field_0x40 != (FSegmentBlendData *)0x0) {
          pFVar6 = *(FSegmentBlendData **)&param_1->field_0x40;
        }
        if (((iVar11 < *(int *)(*(longlong *)(&pFVar6->field_0x0 + lVar9) + 0xd0)) &&
            (*(char *)(*(longlong *)(&pFVar6->field_0x0 + lVar9) + 0xf2) == '\0')) &&
           (((&pFVar6->field_0xc)[lVar9] & 3) == 0)) {
          uVar5 = 0;
          if ((int)uVar8 < *(int *)&param_1->field_0x48) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar6 = param_1;
          if (*(FSegmentBlendData **)&param_1->field_0x40 != (FSegmentBlendData *)0x0) {
            pFVar6 = *(FSegmentBlendData **)&param_1->field_0x40;
          }
          iVar7 = *(int *)&param_1->field_0x48 + ~uVar8;
          if (iVar7 != 0) {
            memmove(&pFVar6->field_0x0 + lVar9,
                    (void *)((longlong)(&pFVar6->field_0x0 + lVar9) + 0x10),(longlong)iVar7 << 4);
          }
          *(int *)&param_1->field_0x48 = *(int *)&param_1->field_0x48 + -1;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
  }
  return;
}

// Dilate @ 1460be020

void __cdecl Dilate(FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  
  if ((&param_1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (param_1 == (FMovieSceneDoubleChannel *)0xffffffffffffff80)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = (param_1->Times).AllocatorInstance.Data;
  iVar2 = (param_1->Times).ArrayNum;
  if (iVar2 < 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar4 = __real_3f000000;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  if (pFVar6 != pFVar1) {
    do {
      *(int *)pFVar6 =
           ((int)ROUND((float)(*(int *)pFVar6 - param_2.Value) * ((float)param_3 + (float)param_3) -
                       fVar4) >> 1) + param_2.Value;
      pFVar6 = pFVar6 + 4;
    } while (pFVar6 != pFVar1);
  }
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(param_1,0.0);
  return;
}

// Dilate @ 1460be130

void __cdecl Dilate(FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  
  if (((&param_1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (param_1 == (FMovieSceneFloatChannel *)0xffffffffffffff80)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = (param_1->Times).AllocatorInstance.Data;
  iVar2 = (param_1->Times).ArrayNum;
  if ((iVar2 < 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f000000;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 4) {
    *(int *)pFVar6 =
         ((int)ROUND((float)(*(int *)pFVar6 - param_2.Value) * (param_3 + param_3) - fVar4) >> 1) +
         param_2.Value;
  }
  TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents(param_1,0.0);
  return;
}

// Dilate @ 1460be230

void __cdecl Dilate(FMovieSceneTimeWarpChannel *param_1,FFrameNumber param_2,double param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  double *pdVar6;
  double *pdVar7;
  int *piVar8;
  double dVar9;
  
  if (param_1->Domain == PlayRate) {
    if ((param_1 == (FMovieSceneTimeWarpChannel *)0xffffffffffffff90) ||
       (&param_1->_padding_ == (longlong *)0x0)) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pdVar7 = (double *)param_1->_padding_;
    iVar2 = (int)param_1->_padding_;
    if (iVar2 < 0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pdVar6 = pdVar7 + (longlong)iVar2 * 4;
    if (pdVar7 != pdVar6) {
      dVar9 = __real_3ff0000000000000 / param_3;
      do {
        *pdVar7 = dVar9 * *pdVar7;
        pdVar7 = pdVar7 + 4;
      } while (pdVar7 != pdVar6);
    }
  }
  if ((&param_1->_padding_ == (longlong *)0x0) ||
     (param_1 == (FMovieSceneTimeWarpChannel *)0xffffffffffffff80)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar8 = (int *)param_1->_padding_;
  iVar2 = (int)param_1->_padding_;
  if (iVar2 < 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar4 = __real_3f000000;
  piVar1 = piVar8 + iVar2;
  if (piVar8 != piVar1) {
    do {
      *piVar8 = ((int)ROUND((float)(*piVar8 - param_2.Value) * ((float)param_3 + (float)param_3) -
                            fVar4) >> 1) + param_2.Value;
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar1);
  }
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents
            ((FMovieSceneDoubleChannel *)param_1,0.0);
  return;
}

// EmptyLinkFunctionForGeneratedCodeBuiltInComponentTypes @ 1460c20b0

void __cdecl EmptyLinkFunctionForGeneratedCodeBuiltInComponentTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEditorSequenceNavigationDefs @ 1460c20c0

void __cdecl EmptyLinkFunctionForGeneratedCodeEditorSequenceNavigationDefs(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIMovieSceneEntityProvider @ 1460c20d0

void __cdecl EmptyLinkFunctionForGeneratedCodeIMovieSceneEntityProvider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIMovieSceneTrackTemplateProducer @ 1460c20e0

void __cdecl EmptyLinkFunctionForGeneratedCodeIMovieSceneTrackTemplateProducer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneAudioTriggerChannel @ 1460c20f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneAudioTriggerChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBindingLifetimeSystem @ 1460c2100

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBindingLifetimeSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBlenderSystem @ 1460c2110

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBlenderSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBoolChannel @ 1460c2120

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBoolChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBoundObjectInstantiator @ 1460c2130

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBoundObjectInstantiator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneBoundSceneComponentInstantiator @ 1460c2140

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBoundSceneComponentInstantiator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneByteChannel @ 1460c2150

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneByteChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneChannel @ 1460c2160

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneChannelData @ 1460c2170

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneChannelData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneChannelOverrideContainer @ 1460c2180

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneChannelOverrideContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCompiledDataManager @ 1460c2190

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCompiledDataManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCondition @ 1460c21a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCondition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneCurveChannelCommon @ 1460c21b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneCurveChannelCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneDecompositionQuery @ 1460c21c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneDecompositionQuery(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneDecorationContainer @ 1460c21d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneDecorationContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneDoubleChannel @ 1460c21e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneDoubleChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneFloatChannel @ 1460c21f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneFloatChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneGroupCondition @ 1460c2200

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneGroupCondition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerChannel @ 1460c2210

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLanguagePreviewDecoration @ 1460c2220

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLanguagePreviewDecoration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMuteSoloDecoration @ 1460c2230

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMuteSoloDecoration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPathChannel @ 1460c2240

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPathChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneScalingAnchors @ 1460c2250

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneScalingAnchors(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSectionAnchorsDecoration @ 1460c2260

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSectionAnchorsDecoration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSectionChannelOverrideRegistry @ 1460c2270

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSectionChannelOverrideRegistry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpChannel @ 1460c2280

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpDecoration @ 1460c2290

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpDecoration(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTrackRowDecoration @ 1460c22a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTrackRowDecoration(void)

{
  return;
}

// EvaluateNearestSegment @ 1460c3e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FMovieSceneSegment> * __cdecl
MovieSceneSegmentCompiler::EvaluateNearestSegment
          (TOptional<FMovieSceneSegment> *__return_storage_ptr__,TRange<FFrameNumber> *param_1,
          FMovieSceneSegment *param_2,FMovieSceneSegment *param_3)

{
  ForElementType<FSectionEvaluationData> FVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TOptional<FMovieSceneSegment> *pTVar6;
  longlong lVar7;
  ForElementType<FSectionEvaluationData> FVar8;
  ForElementType<FSectionEvaluationData> FVar9;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  ForElementType<FSectionEvaluationData> local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_118;
  undefined1 local_117 [3];
  undefined4 local_114;
  int iStack_110;
  uint local_10c;
  undefined4 local_108;
  int iStack_104;
  uint local_100;
  TRangeBound<FFrameNumber> local_f8;
  TRangeBound<FFrameNumber> TStack_f0;
  int local_e8;
  bool local_e4;
  ForElementType<FSectionEvaluationData> local_e0;
  int local_a8;
  int local_a4 [3];
  TRangeBound<FFrameNumber> local_98;
  TRangeBound<FFrameNumber> TStack_90;
  int local_88;
  bool local_84;
  ForElementType<FSectionEvaluationData> local_80;
  int local_48;
  int local_44 [3];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (param_2 == (FMovieSceneSegment *)0x0) {
    if (param_3 == (FMovieSceneSegment *)0x0) {
      __return_storage_ptr__->bIsSet = false;
    }
    else {
      if (((param_3->Range).LowerBound.Type.Value == '\x02') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TOptional<FMovieSceneSegment> *)(*pcVar4)();
        return pTVar6;
      }
      iVar2 = (param_3->Range).LowerBound.Value.Value;
      FVar9 = (param_3->Impls).AllocatorInstance.SecondaryData;
      local_98 = param_1->LowerBound;
      TStack_90 = param_1->UpperBound;
      iVar3 = (param_3->Impls).ArrayNum;
      local_88 = -1;
      if (FVar9 == (ForElementType<FSectionEvaluationData>)0x0) {
        FVar9 = (ForElementType<FSectionEvaluationData>)&param_3->Impls;
      }
      local_84 = false;
      local_80.SecondaryData = (ForElementType<FSectionEvaluationData>)0x0;
      local_48 = 0;
      local_44[0] = 4;
      FVar1 = (ForElementType<FSectionEvaluationData>)((longlong)FVar9 + (longlong)iVar3 * 0xc);
      while( true ) {
        if ((param_3->Impls).ArrayNum != iVar3) {
          local_117[0] = 0;
          `TCheckedPointerIterator<FSectionEvaluationData_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_117);
        }
        if (FVar9 == FVar1) break;
        local_108 = *(undefined4 *)FVar9;
        FVar8 = (ForElementType<FSectionEvaluationData>)&local_80;
        if (local_80.SecondaryData != (ForElementType<FSectionEvaluationData>)0x0) {
          FVar8 = local_80.SecondaryData;
        }
        local_100 = local_100 & 0xffffff00;
        iStack_104 = iVar2;
        if ((ulonglong)FVar8 <= &local_108) {
          FVar8 = (ForElementType<FSectionEvaluationData>)&local_80;
          if (local_80.SecondaryData != (ForElementType<FSectionEvaluationData>)0x0) {
            FVar8 = local_80.SecondaryData;
          }
          if (&local_108 < (undefined4 *)((longlong)FVar8 + (longlong)local_44[0] * 0xc)) {
            local_130 = (longlong)local_48;
            local_128 = 0xc;
            local_148 = &local_108;
            local_140 = (ForElementType<FSectionEvaluationData>)&local_80;
            if (local_80.SecondaryData != (ForElementType<FSectionEvaluationData>)0x0) {
              local_140 = local_80.SecondaryData;
            }
            local_138 = (longlong)local_44[0];
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pTVar6 = (TOptional<FMovieSceneSegment> *)(*pcVar4)();
              return pTVar6;
            }
          }
        }
        if (local_48 == local_44[0]) {
          local_48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSectionEvaluationData>_>
                               (0x40c,&local_80,local_44);
        }
        lVar7 = (longlong)local_48;
        FVar8 = (ForElementType<FSectionEvaluationData>)&local_80;
        if (local_80.SecondaryData != (ForElementType<FSectionEvaluationData>)0x0) {
          FVar8 = local_80.SecondaryData;
        }
        FVar9 = (ForElementType<FSectionEvaluationData>)((longlong)FVar9 + 0xc);
        local_48 = local_48 + 1;
        *(ulonglong *)((longlong)FVar8 + lVar7 * 0xc) = CONCAT44(iStack_104,local_108);
        *(uint *)((longlong)FVar8 + 8U + lVar7 * 0xc) = local_100;
      }
      (__return_storage_ptr__->TypedValue).ID.IdentifierIndex = local_88;
      (__return_storage_ptr__->TypedValue).bAllowEmpty = local_84;
      (__return_storage_ptr__->TypedValue).Range.LowerBound = local_98;
      (__return_storage_ptr__->TypedValue).Range.UpperBound = TStack_90;
      (__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.SecondaryData =
           (ForElementType<FSectionEvaluationData>)0x0;
      if (local_80.SecondaryData == (ForElementType<FSectionEvaluationData>)0x0) {
        *(undefined8 *)(__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData =
             local_80.InlineData._0_8_;
        *(undefined8 *)((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 8)
             = local_80.InlineData._8_8_;
        *(undefined8 *)
         ((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 0x10) =
             local_80.InlineData._16_8_;
        *(undefined8 *)
         ((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 0x18) =
             local_80.InlineData._24_8_;
        *(undefined8 *)
         ((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 0x20) =
             local_80.InlineData._32_8_;
        *(undefined8 *)
         ((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 0x28) =
             local_80.InlineData._40_8_;
      }
      FVar9 = (__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.SecondaryData;
      if (FVar9 != (ForElementType<FSectionEvaluationData>)0x0) {
        FMemory::Free((void *)FVar9);
      }
      (__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.SecondaryData =
           local_80.SecondaryData;
      (__return_storage_ptr__->TypedValue).Impls.ArrayNum = local_48;
      (__return_storage_ptr__->TypedValue).Impls.ArrayMax = local_44[0];
      __return_storage_ptr__->bIsSet = true;
    }
  }
  else {
    if (((param_2->Range).UpperBound.Type.Value == '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TOptional<FMovieSceneSegment> *)(*pcVar4)();
      return pTVar6;
    }
    FVar9 = (param_2->Impls).AllocatorInstance.SecondaryData;
    local_f8 = param_1->LowerBound;
    TStack_f0 = param_1->UpperBound;
    iVar2 = (param_2->Range).UpperBound.Value.Value;
    iVar3 = (param_2->Impls).ArrayNum;
    local_e8 = -1;
    if (FVar9 == (ForElementType<FSectionEvaluationData>)0x0) {
      FVar9 = (ForElementType<FSectionEvaluationData>)&param_2->Impls;
    }
    local_e4 = false;
    local_e0.SecondaryData = (ForElementType<FSectionEvaluationData>)0x0;
    local_a8 = 0;
    local_a4[0] = 4;
    FVar1 = (ForElementType<FSectionEvaluationData>)((longlong)FVar9 + (longlong)iVar3 * 0xc);
    while( true ) {
      if ((param_2->Impls).ArrayNum != iVar3) {
        local_118 = 0;
        `TCheckedPointerIterator<FSectionEvaluationData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_118);
      }
      if (FVar9 == FVar1) break;
      local_114 = *(undefined4 *)FVar9;
      FVar8 = (ForElementType<FSectionEvaluationData>)&local_e0;
      if (local_e0.SecondaryData != (ForElementType<FSectionEvaluationData>)0x0) {
        FVar8 = local_e0.SecondaryData;
      }
      local_10c = local_10c & 0xffffff00;
      iStack_110 = iVar2;
      if ((ulonglong)FVar8 <= &local_114) {
        FVar8 = (ForElementType<FSectionEvaluationData>)&local_e0;
        if (local_e0.SecondaryData != (ForElementType<FSectionEvaluationData>)0x0) {
          FVar8 = local_e0.SecondaryData;
        }
        if (&local_114 < (undefined4 *)((longlong)FVar8 + (longlong)local_a4[0] * 0xc)) {
          local_130 = (longlong)local_a8;
          local_128 = 0xc;
          local_148 = &local_114;
          local_140 = (ForElementType<FSectionEvaluationData>)&local_e0;
          if (local_e0.SecondaryData != (ForElementType<FSectionEvaluationData>)0x0) {
            local_140 = local_e0.SecondaryData;
          }
          local_138 = (longlong)local_a4[0];
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar6 = (TOptional<FMovieSceneSegment> *)(*pcVar4)();
            return pTVar6;
          }
        }
      }
      if (local_a8 == local_a4[0]) {
        local_a8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSectionEvaluationData>_>
                             (0x40c,&local_e0,local_a4);
      }
      lVar7 = (longlong)local_a8;
      FVar8 = (ForElementType<FSectionEvaluationData>)&local_e0;
      if (local_e0.SecondaryData != (ForElementType<FSectionEvaluationData>)0x0) {
        FVar8 = local_e0.SecondaryData;
      }
      FVar9 = (ForElementType<FSectionEvaluationData>)((longlong)FVar9 + 0xc);
      local_a8 = local_a8 + 1;
      *(ulonglong *)((longlong)FVar8 + lVar7 * 0xc) = CONCAT44(iStack_110,local_114);
      *(uint *)((longlong)FVar8 + 8U + lVar7 * 0xc) = local_10c;
    }
    (__return_storage_ptr__->TypedValue).ID.IdentifierIndex = local_e8;
    (__return_storage_ptr__->TypedValue).bAllowEmpty = local_e4;
    (__return_storage_ptr__->TypedValue).Range.LowerBound = local_f8;
    (__return_storage_ptr__->TypedValue).Range.UpperBound = TStack_f0;
    (__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.SecondaryData =
         (ForElementType<FSectionEvaluationData>)0x0;
    if (local_e0.SecondaryData == (ForElementType<FSectionEvaluationData>)0x0) {
      *(undefined8 *)(__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData =
           local_e0.InlineData._0_8_;
      *(undefined8 *)((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 8) =
           local_e0.InlineData._8_8_;
      *(undefined8 *)
       ((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 0x10) =
           local_e0.InlineData._16_8_;
      *(undefined8 *)
       ((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 0x18) =
           local_e0.InlineData._24_8_;
      *(undefined8 *)
       ((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 0x20) =
           local_e0.InlineData._32_8_;
      *(undefined8 *)
       ((__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.InlineData + 0x28) =
           local_e0.InlineData._40_8_;
    }
    FVar9 = (__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.SecondaryData;
    if (FVar9 != (ForElementType<FSectionEvaluationData>)0x0) {
      FMemory::Free((void *)FVar9);
    }
    (__return_storage_ptr__->TypedValue).Impls.AllocatorInstance.SecondaryData =
         local_e0.SecondaryData;
    (__return_storage_ptr__->TypedValue).Impls.ArrayNum = local_a8;
    (__return_storage_ptr__->TypedValue).Impls.ArrayMax = local_a4[0];
    __return_storage_ptr__->bIsSet = true;
  }
  return __return_storage_ptr__;
}

// FilterOutUnderlappingSections @ 1460c4810

void __cdecl MovieSceneSegmentCompiler::FilterOutUnderlappingSections(FSegmentBlendData *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  FSegmentBlendData *pFVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  iVar7 = *(int *)&param_1->field_0x48;
  if (iVar7 != 0) {
    iVar11 = -0x80000000;
    pFVar6 = param_1;
    if (*(FSegmentBlendData **)&param_1->field_0x40 != (FSegmentBlendData *)0x0) {
      pFVar6 = *(FSegmentBlendData **)&param_1->field_0x40;
    }
    plVar3 = (longlong *)&pFVar6->field_0x0;
    while( true ) {
      if (*(int *)&param_1->field_0x48 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMovieSceneSectionData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == (FSegmentBlendData *)(plVar3 + (longlong)iVar7 * 2)) break;
      iVar1 = iVar11;
      if (((*(char *)(*(longlong *)pFVar6 + 0xf2) == '\0') && ((pFVar6->field_0xc & 3) == 0)) &&
         (iVar1 = *(int *)(*(longlong *)pFVar6 + 0xd4), iVar1 < iVar11)) {
        iVar1 = iVar11;
      }
      iVar11 = iVar1;
      pFVar6 = (FSegmentBlendData *)&pFVar6->field_0x10;
    }
    uVar8 = *(int *)&param_1->field_0x48 - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar8 < *(int *)&param_1->field_0x48) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = param_1;
        if (*(FSegmentBlendData **)&param_1->field_0x40 != (FSegmentBlendData *)0x0) {
          pFVar6 = *(FSegmentBlendData **)&param_1->field_0x40;
        }
        if (((*(int *)(*(longlong *)(&pFVar6->field_0x0 + lVar9) + 0xd4) != iVar11) &&
            (*(char *)(*(longlong *)(&pFVar6->field_0x0 + lVar9) + 0xf2) == '\0')) &&
           (((&pFVar6->field_0xc)[lVar9] & 3) == 0)) {
          uVar5 = 0;
          if ((int)uVar8 < *(int *)&param_1->field_0x48) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar6 = param_1;
          if (*(FSegmentBlendData **)&param_1->field_0x40 != (FSegmentBlendData *)0x0) {
            pFVar6 = *(FSegmentBlendData **)&param_1->field_0x40;
          }
          iVar7 = *(int *)&param_1->field_0x48 + ~uVar8;
          if (iVar7 != 0) {
            memmove(&pFVar6->field_0x0 + lVar9,
                    (void *)((longlong)(&pFVar6->field_0x0 + lVar9) + 0x10),(longlong)iVar7 << 4);
          }
          *(int *)&param_1->field_0x48 = *(int *)&param_1->field_0x48 + -1;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
  }
  return;
}

// GetInterpolationMode @ 1460cd260

EMovieSceneKeyInterpolation __cdecl
GetInterpolationMode
          (FMovieSceneDoubleChannel *param_1,FFrameNumber *param_2,
          EMovieSceneKeyInterpolation param_3)

{
  int iVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EMovieSceneKeyInterpolation EVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (((&param_1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (&param_1->Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  iVar3 = (param_1->Values).ArrayNum;
  pFVar4 = (param_1->Values).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  uVar8 = (param_1->Times).ArrayNum;
  if ((int)uVar8 < 0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  else if (0 < (int)uVar8) {
    iVar9 = 0;
    do {
      iVar1 = (uVar8 >> 1) + iVar9;
      if (*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)iVar1 * 4) < param_2->Value)
      {
        iVar9 = iVar1 + (uVar8 & 1);
      }
      uVar10 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar10 != 0);
    uVar8 = 0;
    if (-1 < (int)(iVar9 - 1U)) {
      uVar8 = iVar9 - 1U;
    }
    uVar10 = 0;
    if ((int)uVar8 < iVar3) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    FVar2 = pFVar4[(longlong)(int)uVar8 * 0x20 + 0x1c];
    if (FVar2 == (FScriptContainerElement)0x0) {
      param_3 = Linear;
    }
    else if (FVar2 == (FScriptContainerElement)0x1) {
      param_3 = Constant;
    }
    else if (FVar2 == (FScriptContainerElement)0x2) {
      FVar2 = pFVar4[(longlong)(int)uVar8 * 0x20 + 0x1d];
      if (FVar2 == (FScriptContainerElement)0x0) {
        param_3 = Auto;
      }
      else if (FVar2 == (FScriptContainerElement)0x1) {
        param_3 = User;
      }
      else if (FVar2 == (FScriptContainerElement)0x2) {
        param_3 = Break;
      }
      else if (FVar2 == (FScriptContainerElement)0x4) {
        param_3 = SmartAuto;
      }
    }
  }
  return param_3;
}

// GetInterpolationMode @ 1460cd270

EMovieSceneKeyInterpolation __cdecl
GetInterpolationMode
          (FMovieSceneFloatChannel *param_1,FFrameNumber *param_2,
          EMovieSceneKeyInterpolation param_3)

{
  int iVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EMovieSceneKeyInterpolation EVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (((&param_1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (&param_1->Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  iVar3 = (param_1->Values).ArrayNum;
  pFVar4 = (param_1->Values).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  uVar8 = (param_1->Times).ArrayNum;
  if ((int)uVar8 < 0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  else if (0 < (int)uVar8) {
    iVar9 = 0;
    do {
      iVar1 = (uVar8 >> 1) + iVar9;
      if (*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)iVar1 * 4) < param_2->Value)
      {
        iVar9 = iVar1 + (uVar8 & 1);
      }
      uVar10 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar10 != 0);
    uVar8 = 0;
    if (-1 < (int)(iVar9 - 1U)) {
      uVar8 = iVar9 - 1U;
    }
    uVar10 = 0;
    if ((int)uVar8 < iVar3) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    FVar2 = pFVar4[(longlong)(int)uVar8 * 0x1c + 0x18];
    if (FVar2 == (FScriptContainerElement)0x0) {
      param_3 = Linear;
    }
    else if (FVar2 == (FScriptContainerElement)0x1) {
      param_3 = Constant;
    }
    else if (FVar2 == (FScriptContainerElement)0x2) {
      FVar2 = pFVar4[(longlong)(int)uVar8 * 0x1c + 0x19];
      if (FVar2 == (FScriptContainerElement)0x0) {
        param_3 = Auto;
      }
      else if (FVar2 == (FScriptContainerElement)0x1) {
        param_3 = User;
      }
      else if (FVar2 == (FScriptContainerElement)0x2) {
        param_3 = Break;
      }
      else if (FVar2 == (FScriptContainerElement)0x4) {
        param_3 = SmartAuto;
      }
    }
  }
  return param_3;
}

// GetMovieSceneModule @ 1460cdec0

IMovieSceneModule * __cdecl GetMovieSceneModule(void)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FName FVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FName *pFVar8;
  FModuleManager *this;
  IModuleInterface *pIVar9;
  TWeakPtr<IMovieSceneModule,1> *pTVar10;
  IMovieSceneModule *pIVar11;
  FWeakReferencer<1> FVar12;
  TReferenceControllerBase<1> *pTVar13;
  FWeakReferencer<1> FVar14;
  FWeakReferencer<1> FVar15;
  bool bVar16;
  FName local_res8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`GetMovieSceneModule'::__l2::_dynamic_atexit_destructor_for__WeakMovieSceneModule__);
    _Init_thread_footer(&_TSS0);
  }
  FVar15.ReferenceController = WeakMovieSceneModule.WeakReferenceCount.ReferenceController;
  FVar14.ReferenceController = FVar15.ReferenceController;
  if (WeakMovieSceneModule.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar3 = (WeakMovieSceneModule.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        FVar14.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1460cdf15;
      }
      LOCK();
      aVar7 = (FVar15.ReferenceController)->SharedReferenceCount;
      bVar16 = aVar3 == aVar7;
      if (bVar16) {
        (FVar15.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar16);
    pIVar11 = WeakMovieSceneModule.Object;
    if (WeakMovieSceneModule.Object != (IMovieSceneModule *)0x0) goto LAB_1460ce0ae;
  }
LAB_1460cdf15:
  pFVar8 = FName::FName(&local_res8,"MovieScene");
  FVar5 = *pFVar8;
  this = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(this,FVar5);
  pTVar10 = (TWeakPtr<IMovieSceneModule,1> *)
            (**(code **)((longlong)*pIVar9 + 0x50))(pIVar9,local_28);
  if (pTVar10 != &WeakMovieSceneModule) {
    WeakMovieSceneModule.Object = pTVar10->Object;
    pTVar10->Object = (IMovieSceneModule *)0x0;
    FVar15 = WeakMovieSceneModule.WeakReferenceCount;
    WeakMovieSceneModule.WeakReferenceCount.ReferenceController =
         (pTVar10->WeakReferenceCount).ReferenceController;
    (pTVar10->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar15.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((FVar15.ReferenceController)->_padding_ + 8))(FVar15.ReferenceController,1);
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_20 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*local_20 + 8))(local_20,1);
    }
  }
  FVar12.ReferenceController = WeakMovieSceneModule.WeakReferenceCount.ReferenceController;
  pIVar11 = (IMovieSceneModule *)0x0;
  if (WeakMovieSceneModule.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar3 = (WeakMovieSceneModule.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pIVar11 = (IMovieSceneModule *)0x0;
        break;
      }
      LOCK();
      aVar7 = (FVar12.ReferenceController)->SharedReferenceCount;
      bVar16 = aVar3 == aVar7;
      if (bVar16) {
        (FVar12.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      pIVar11 = WeakMovieSceneModule.Object;
      aVar3 = aVar7;
    } while (!bVar16);
  }
  pTVar13 = FVar12.ReferenceController;
  FVar15.ReferenceController = FVar14.ReferenceController;
  if (FVar12.ReferenceController != FVar14.ReferenceController) {
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    FVar15.ReferenceController = FVar12.ReferenceController;
    if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar14.ReferenceController)->SharedReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(FVar14.ReferenceController)->_padding_)(FVar14.ReferenceController);
        LOCK();
        paVar1 = &(FVar14.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((FVar14.ReferenceController)->_padding_ + 8))(FVar14.ReferenceController,1);
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (pIVar11 == (IMovieSceneModule *)0x0) {
    bVar16 = FDebug::CheckVerifyFailedImpl2
                       ("Shared.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                        ,0x3f,L"");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      pIVar11 = (IMovieSceneModule *)(*pcVar6)();
      return pIVar11;
    }
    bVar16 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      pIVar11 = (IMovieSceneModule *)(*pcVar6)();
      return pIVar11;
    }
  }
LAB_1460ce0ae:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  return pIVar11;
}

// InvertValue @ 1460d88f0

void __cdecl InvertValue(float *param_1)

{
  *param_1 = (float)((uint)*param_1 ^ __xmm_80000000800000008000000080000000);
  return;
}

// InvertValue @ 1460d8910

void __cdecl InvertValue(double *param_1)

{
  *param_1 = (double)CONCAT44((uint)((ulonglong)*param_1 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(*param_1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  return;
}

// ReciprocalValue @ 1460e0ee0

void __cdecl ReciprocalValue(float *param_1)

{
  if (*param_1 != 0.0) {
    *param_1 = __real_3f800000 / *param_1;
  }
  return;
}

// ReciprocalValue @ 1460e0f10

void __cdecl ReciprocalValue(double *param_1)

{
  if (*param_1 != 0.0) {
    *param_1 = __real_3ff0000000000000 / *param_1;
  }
  return;
}

// SortPredicate @ 1460f9ec0

bool __cdecl SortPredicate(FCompileOnTheFlyData *param_1,FCompileOnTheFlyData *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_1->GroupEvaluationPriority != param_2->GroupEvaluationPriority) {
    return param_2->GroupEvaluationPriority <= param_1->GroupEvaluationPriority;
  }
  if (param_1->HierarchicalBias != param_2->HierarchicalBias) {
    return param_1->HierarchicalBias < param_2->HierarchicalBias;
  }
  sVar1 = param_2->EvaluationPriority;
  sVar2 = param_1->EvaluationPriority;
  bVar5 = SBORROW2(sVar2,sVar1);
  sVar3 = sVar2 - sVar1;
  bVar4 = false;
  if (sVar2 == sVar1) {
    sVar1 = param_2->ChildPriority;
    sVar2 = param_1->ChildPriority;
    bVar5 = SBORROW2(sVar2,sVar1);
    sVar3 = sVar2 - sVar1;
    bVar4 = sVar2 == sVar1;
  }
  return !bVar4 && bVar5 == sVar3 < 0;
}

// TransformValue @ 1460faa10

void __cdecl TransformValue(float *param_1,FMovieSceneChannelTraitsTransform<float> *param_2)

{
  if (param_2->Scale != 0.0) {
    *param_1 = (*param_1 - param_2->Pivot) * param_2->Scale + param_2->Pivot;
  }
  *param_1 = *param_1 + param_2->Offset;
  return;
}

// TransformValue @ 1460faa50

void __cdecl TransformValue(double *param_1,FMovieSceneChannelTraitsTransform<double> *param_2)

{
  if (param_2->Scale != 0.0) {
    *param_1 = (*param_1 - param_2->Pivot) * param_2->Scale + param_2->Pivot;
  }
  *param_1 = *param_1 + param_2->Offset;
  return;
}

// ValueExistsAtTime @ 1460ff1f0

bool __cdecl
ValueExistsAtTime(FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,
                 FMovieSceneDoubleValue *param_3)

{
  bool bVar1;
  
  bVar1 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::ValueExistsAtTime
                    (param_1,param_2,param_3->Value);
  return bVar1;
}

// ValueExistsAtTime @ 1460ff200

bool __cdecl ValueExistsAtTime(FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,float param_3)

{
  bool bVar1;
  
  bVar1 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::ValueExistsAtTime
                    (param_1,param_2,(double)param_3);
  return bVar1;
}

// ValueExistsAtTime @ 1460ff210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
ValueExistsAtTime(FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,double param_3)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  bool bVar3;
  FCachedInterpolation *this;
  undefined1 auStack_b8 [32];
  FFrameNumber FStack_98;
  float fStack_94;
  double dStack_90;
  FCachedInterpolation FStack_88;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  fStack_94 = 0.0;
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = param_2.Value;
  dStack_90 = 0.0;
  FStack_98.Value = param_2.Value;
  this = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
                   (&FStack_88,param_1,(FTimeEvaluationCache *)0x0,FVar1);
  FVar2.SubFrame = fStack_94;
  FVar2.FrameNumber.Value = FStack_98.Value;
  bVar3 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,FVar2,&dStack_90);
  if ((!bVar3) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)(dStack_90 - param_3) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dStack_90 - param_3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// ValueExistsAtTime @ 1460ff220

bool __cdecl
ValueExistsAtTime(FMovieSceneFloatChannel *param_1,FFrameNumber param_2,
                 FMovieSceneFloatValue *param_3)

{
  bool bVar1;
  
  bVar1 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::ValueExistsAtTime
                    (param_1,param_2,param_3->Value);
  return bVar1;
}

// ValueExistsAtTime @ 1460ff230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl ValueExistsAtTime(FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  bool bVar3;
  FCachedInterpolation *this;
  undefined1 auStack_b8 [32];
  FFrameNumber FStack_98;
  float fStack_94;
  double dStack_90;
  FCachedInterpolation FStack_88;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  fStack_94 = 0.0;
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = param_2.Value;
  dStack_90 = 0.0;
  FStack_98.Value = param_2.Value;
  this = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime
                   (&FStack_88,param_1,(FTimeEvaluationCache *)0x0,FVar1);
  FVar2.SubFrame = fStack_94;
  FVar2.FrameNumber.Value = FStack_98.Value;
  bVar3 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,FVar2,&dStack_90);
  if ((!bVar3) ||
     (__real_38d1b717 <
      (float)((uint)((float)dStack_90 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_NoRegister @ 1460ff240

UClass * __cdecl Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingLifetimeSystem",
               &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.InnerSingleton,
               UMovieSceneBindingLifetimeSystem::
               StaticRegisterNativesUMovieSceneBindingLifetimeSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingLifetimeSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister @ 1460ff300

UClass * __cdecl Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBlenderSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBlenderSystem",
               &Z_Registration_Info_UClass_UMovieSceneBlenderSystem.InnerSingleton,
               UMovieSceneBlenderSystem::StaticRegisterNativesUMovieSceneBlenderSystem,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBlenderSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBlenderSystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister @ 1460ff3c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBoundSceneComponentInstantiator",
               &Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.InnerSingleton
               ,UMovieSceneBoundSceneComponentInstantiator::
                StaticRegisterNativesUMovieSceneBoundSceneComponentInstantiator,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBoundSceneComponentInstantiator>,
               InternalVTableHelperCtorCaller<UMovieSceneBoundSceneComponentInstantiator>,local_res8
               ,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister @ 1460ff480

UClass * __cdecl Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCompiledDataManager",
               &Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.InnerSingleton,
               UMovieSceneCompiledDataManager::StaticRegisterNativesUMovieSceneCompiledDataManager,
               0x230,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCompiledDataManager>,
               InternalVTableHelperCtorCaller<UMovieSceneCompiledDataManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneCompiledData_NoRegister @ 1460ff530

UClass * __cdecl Z_Construct_UClass_UMovieSceneCompiledData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCompiledData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCompiledData",
               &Z_Registration_Info_UClass_UMovieSceneCompiledData.InnerSingleton,
               UMovieSceneCompiledData::StaticRegisterNativesUMovieSceneCompiledData,0x420,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCompiledData>
               ,InternalVTableHelperCtorCaller<UMovieSceneCompiledData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCompiledData.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneDecorationContainerObject_NoRegister @ 1460ff5e0

UClass * __cdecl Z_Construct_UClass_UMovieSceneDecorationContainerObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneDecorationContainerObject",
               &Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.InnerSingleton,
               UMovieSceneDecorationContainerObject::
               StaticRegisterNativesUMovieSceneDecorationContainerObject,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDecorationContainerObject>,
               InternalVTableHelperCtorCaller<UMovieSceneDecorationContainerObject>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecorationContainerObject.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister @ 1460ff6a0

UClass * __cdecl Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityProvider",
               &Z_Registration_Info_UClass_UMovieSceneEntityProvider.InnerSingleton,
               UMovieSceneEntityProvider::StaticRegisterNativesUMovieSceneEntityProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntityProvider>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityProvider.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister @ 1460ff760

UClass * __cdecl Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneGenericBoundObjectInstantiator",
               &Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.InnerSingleton,
               UMovieSceneGenericBoundObjectInstantiator::
               StaticRegisterNativesUMovieSceneGenericBoundObjectInstantiator,0x48,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneGenericBoundObjectInstantiator>,
               InternalVTableHelperCtorCaller<UMovieSceneGenericBoundObjectInstantiator>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneGroupCondition_NoRegister @ 1460ff820

UClass * __cdecl Z_Construct_UClass_UMovieSceneGroupCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGroupCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneGroupCondition",
               &Z_Registration_Info_UClass_UMovieSceneGroupCondition.InnerSingleton,
               UMovieSceneGroupCondition::StaticRegisterNativesUMovieSceneGroupCondition,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneGroupCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneGroupCondition>,local_res8,
               UMovieSceneCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroupCondition.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneLanguagePreviewDecoration_NoRegister @ 1460ff8e0

UClass * __cdecl Z_Construct_UClass_UMovieSceneLanguagePreviewDecoration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneLanguagePreviewDecoration",
               &Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.InnerSingleton,
               UMovieSceneLanguagePreviewDecoration::
               StaticRegisterNativesUMovieSceneLanguagePreviewDecoration,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLanguagePreviewDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneLanguagePreviewDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLanguagePreviewDecoration.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMuteSoloDecoration_NoRegister @ 1460ff990

UClass * __cdecl Z_Construct_UClass_UMovieSceneMuteSoloDecoration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneMuteSoloDecoration",
               &Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.InnerSingleton,
               UMovieSceneMuteSoloDecoration::StaticRegisterNativesUMovieSceneMuteSoloDecoration,
               0x38,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMuteSoloDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneMuteSoloDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScalingAnchors_NoRegister @ 1460ffa40

UClass * __cdecl Z_Construct_UClass_UMovieSceneScalingAnchors_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScalingAnchors.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneScalingAnchors",
               &Z_Registration_Info_UClass_UMovieSceneScalingAnchors.InnerSingleton,
               UMovieSceneScalingAnchors::StaticRegisterNativesUMovieSceneScalingAnchors,0x2f8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScalingAnchors>,
               InternalVTableHelperCtorCaller<UMovieSceneScalingAnchors>,local_res8,
               UMovieScenePlayRateCurve::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalingAnchors.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister @ 1460ffb00

UClass * __cdecl Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSectionAnchorsDecoration",
               &Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.InnerSingleton,
               UMovieSceneSectionAnchorsDecoration::
               StaticRegisterNativesUMovieSceneSectionAnchorsDecoration,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSectionAnchorsDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionAnchorsDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister @ 1460ffbb0

UClass * __cdecl Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSectionChannelOverrideRegistry",
               &Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.InnerSingleton,
               UMovieSceneSectionChannelOverrideRegistry::
               StaticRegisterNativesUMovieSceneSectionChannelOverrideRegistry,0x78,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSectionChannelOverrideRegistry>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionChannelOverrideRegistry>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister @ 1460ffc60

UClass * __cdecl Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpDecoration",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.InnerSingleton,
               UMovieSceneTimeWarpDecoration::StaticRegisterNativesUMovieSceneTimeWarpDecoration,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTimeWarpDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTrackRowDecoration_NoRegister @ 1460ffd10

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackRowDecoration_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackRowDecoration",
               &Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.InnerSingleton,
               UMovieSceneTrackRowDecoration::StaticRegisterNativesUMovieSceneTrackRowDecoration,
               0x80,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackRowDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackRowDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister @ 1460ffdc0

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackTemplateProducer",
               &Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.InnerSingleton,
               UMovieSceneTrackTemplateProducer::
               StaticRegisterNativesUMovieSceneTrackTemplateProducer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackTemplateProducer>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackTemplateProducer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister @ 1460ffe80

UClass * __cdecl Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneValueDecomposer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneValueDecomposer",
               &Z_Registration_Info_UClass_UMovieSceneValueDecomposer.InnerSingleton,
               UMovieSceneValueDecomposer::StaticRegisterNativesUMovieSceneValueDecomposer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneValueDecomposer>,
               InternalVTableHelperCtorCaller<UMovieSceneValueDecomposer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneValueDecomposer.InnerSingleton;
}

// Z_Construct_UScriptStruct_FEasingComponentData @ 1460fff40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEasingComponentData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEasingComponentData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEasingComponentData.InnerSingleton,
               &Z_Construct_UScriptStruct_FEasingComponentData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEasingComponentData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FEasingComponentData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel @ 1460fffc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneAudioTriggerChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneAudioTriggerChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneAudioTriggerChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneAudioTriggerChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneBoolChannel @ 146100040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneBoolChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBoolChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneBoolChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneBoolChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBoolChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneBoolChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneByteChannel @ 1461000c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneByteChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneByteChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneByteChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneByteChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneByteChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct @ 146100140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent @ 1461001c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookComponent.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookComponent.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookComponent.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookComponent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneFloatChannel @ 146100240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneFloatChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneIntegerChannel @ 1461002c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneIntegerChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneIntegerChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneIntegerChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneIntegerChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneIntegerChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel @ 146100340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel @ 1461003c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent @ 146100440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavigationToolSaveState @ 1461004c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationToolSaveState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSaveState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationToolSaveState.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationToolSaveState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSaveState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationToolSaveState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTrackInstanceInputComponent @ 146100540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTrackInstanceInputComponent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTrackInstanceInputComponent.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTrackInstanceInputComponent.InnerSingleton,
               &Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTrackInstanceInputComponent.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTrackInstanceInputComponent.InnerSingleton;
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

// ActiveManagers'' @ 1503d91c0

void __cdecl `dynamic_atexit_destructor_for_'UMovieSceneCompiledDataManager::ActiveManagers__(void)

{
  UMovieSceneCompiledDataManager::ActiveManagers.HashSize = 0;
  if (UMovieSceneCompiledDataManager::ActiveManagers.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)UMovieSceneCompiledDataManager::ActiveManagers.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UMovieSceneCompiledDataManager_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMovieSceneCompiledDataManager_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&UMovieSceneCompiledDataManager::ActiveManagers.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAddKeepStateDeterminismFences'' @ 1503d9200

void __cdecl _dynamic_atexit_destructor_for__CVarAddKeepStateDeterminismFences__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAddKeepStateDeterminismFences);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMovieSceneCompilerVersion'' @ 1503d9220

void __cdecl _dynamic_atexit_destructor_for__CVarMovieSceneCompilerVersion__(void)

{
  CVarMovieSceneCompilerVersion._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMovieSceneCompilerVersion);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerAutoTangentInterpolation'' @ 1503d9240

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerAutoTangentInterpolation__(void)

{
  CVarSequencerAutoTangentInterpolation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSequencerAutoTangentInterpolation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerLinearCubicInterpolation'' @ 1503d9260

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerLinearCubicInterpolation__(void)

{
  CVarSequencerLinearCubicInterpolation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSequencerLinearCubicInterpolation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerSmartAutoBlendLocationPercentage'' @ 1503d9280

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerSmartAutoBlendLocationPercentage__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSequencerSmartAutoBlendLocationPercentage);
  return;
}

// `dynamic_atexit_destructor_for_'EvalSectionLUT'' @ 1503d92a0

void __cdecl
`UMovieSceneCompiledDataManager::PopulateEvaluationGroup'::__l2::
_dynamic_atexit_destructor_for__EvalSectionLUT__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EvalSectionLUT.AllocatorInstance.Data;
  if (EvalSectionLUT.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EvalSectionLUT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EvalTrackLUT'' @ 1503d92c0

void __cdecl
`UMovieSceneCompiledDataManager::PopulateEvaluationGroup'::__l2::
_dynamic_atexit_destructor_for__EvalTrackLUT__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EvalTrackLUT.AllocatorInstance.Data;
  if (EvalTrackLUT.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EvalTrackLUT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GBlenderSystemRegistry'' @ 1503d92e0

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__GBlenderSystemRegistry__(void)

{
  GBlenderSystemRegistry._72_4_ = 0;
  if (GBlenderSystemRegistry._64_8_ != 0) {
    FMemory::Free((void *)GBlenderSystemRegistry._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlenderSystemID,TSubclassOf<UMovieSceneBlenderSystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GBlenderSystemRegistry);
  return;
}

// `dynamic_atexit_destructor_for_'GChannelTypeNamesToClassTypes'' @ 1503d9320

void __cdecl UE::MovieScene::_dynamic_atexit_destructor_for__GChannelTypeNamesToClassTypes__(void)

{
  GChannelTypeNamesToClassTypes._72_4_ = 0;
  if (GChannelTypeNamesToClassTypes._64_8_ != 0) {
    FMemory::Free((void *)GChannelTypeNamesToClassTypes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GChannelTypeNamesToClassTypes);
  return;
}

// `dynamic_atexit_destructor_for_'GMovieSceneBuiltInComponentTypes'' @ 1503d9360

void __cdecl
UE::MovieScene::_dynamic_atexit_destructor_for__GMovieSceneBuiltInComponentTypes__(void)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TUniquePtr<UE::MovieScene::FBuiltInComponentTypes,TDefaultDelete<UE::MovieScene::FBuiltInComponentTypes>_>
  TVar3;
  
  TVar3.Ptr = GMovieSceneBuiltInComponentTypes.Ptr;
  if (GMovieSceneBuiltInComponentTypes.Ptr != (FBuiltInComponentTypes *)0x0) {
    *(undefined4 *)&((GMovieSceneBuiltInComponentTypes.Ptr)->ResultToBase).field_0x48 = 0;
    pvVar1 = *(void **)&((TVar3.Ptr)->ResultToBase).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(TVar3.Ptr)->ResultToBase);
    pFVar2 = ((TVar3.Ptr)->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<UE::MovieScene::FPropertyDefinition,int>
              ((FPropertyDefinition *)
               ((TVar3.Ptr)->PropertyRegistry).Properties.AllocatorInstance.Data,
               ((TVar3.Ptr)->PropertyRegistry).Properties.ArrayNum);
    pFVar2 = ((TVar3.Ptr)->PropertyRegistry).Properties.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(TVar3.Ptr,0x1e8);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GMovieSceneCompilerVersion'' @ 1503d93f0

void __cdecl _dynamic_atexit_destructor_for__GMovieSceneCompilerVersion__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GMovieSceneCompilerVersion.Data.AllocatorInstance.Data;
  if (GMovieSceneCompilerVersion.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GMovieSceneCompilerVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InitSectionLUT'' @ 1503d9410

void __cdecl
`UMovieSceneCompiledDataManager::PopulateEvaluationGroup'::__l2::
_dynamic_atexit_destructor_for__InitSectionLUT__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InitSectionLUT.AllocatorInstance.Data;
  if (InitSectionLUT.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InitSectionLUT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InitTrackLUT'' @ 1503d9430

void __cdecl
`UMovieSceneCompiledDataManager::PopulateEvaluationGroup'::__l2::
_dynamic_atexit_destructor_for__InitTrackLUT__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InitTrackLUT.AllocatorInstance.Data;
  if (InitTrackLUT.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InitTrackLUT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WeakMovieSceneModule'' @ 1503d9450

void __cdecl
`GetMovieSceneModule'::__l2::_dynamic_atexit_destructor_for__WeakMovieSceneModule__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController = WeakMovieSceneModule.WeakReferenceCount.ReferenceController;
  if (WeakMovieSceneModule.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(WeakMovieSceneModule.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001503d9473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

